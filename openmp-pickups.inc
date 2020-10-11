#if defined _inc_omp_pickups
	#endinput
#endif
#define _inc_omp_pickups

#define SAMP_CONST_CORRECT

#pragma tabsize 4

_OPENMP_TAG(Pickup);

enum PickupFlags
{
	PICKUP_FLAG_STAY = 0x01, // Will remain for a player after they pick it up.
	PICKUP_FLAG_MULTI = 0x02, // Will remain for OTHER players after someone picks it up.
	PICKUP_FLAG_NO_FOOT = 0x04, // Can't be picked up on foot.
	PICKUP_FLAG_VEHICLE = 0x08, // Can be picked up from a vehicle.
	PICKUP_FLAG_ACTION = 0x10, // Triggers a default script action (weapons/cash/etc).
	PICKUP_FLAG_RESPAWN = 0x20, // Respawn the pickupid after 30s and distance >= 15 units.
	// Specify an explicit underlying pickupid type.  Probably useless (since the system won't use
	// them at all, and will basically just pass everything straight through to the script), but
	// just in case (and for legacy code).
	PICKUP_FLAG_LEGACY_TYPE = 0xFF000000,
	PICKUP_FLAG_LEGACY_TYPE_0 = 0 << 24,
	PICKUP_FLAG_LEGACY_TYPE_1 = 1 << 24,
	PICKUP_FLAG_LEGACY_TYPE_2 = 2 << 24,
	PICKUP_FLAG_LEGACY_TYPE_3 = 3 << 24,
	PICKUP_FLAG_LEGACY_TYPE_4 = 4 << 24,
	PICKUP_FLAG_LEGACY_TYPE_8 = 8 << 24,
	PICKUP_FLAG_LEGACY_TYPE_11 = 11 << 24,
	PICKUP_FLAG_LEGACY_TYPE_12 = 12 << 24,
	PICKUP_FLAG_LEGACY_TYPE_13 = 13 << 24,
	PICKUP_FLAG_LEGACY_TYPE_14 = 14 << 24,
	PICKUP_FLAG_LEGACY_TYPE_15 = 15 << 24,
	PICKUP_FLAG_LEGACY_TYPE_18 = 18 << 24,
	PICKUP_FLAG_LEGACY_TYPE_19 = 19 << 24,
	PICKUP_FLAG_LEGACY_TYPE_20 = 20 << 24,
	PICKUP_FLAG_LEGACY_TYPE_22 = 22 << 24,
}

NEW_NATIVE__ Pickup:Pickup@Create(model, PickupFlags:flags, Float:posX, Float:posY, Float:posZ) = Pickup__Create
	return Pickup:CreatePickup__(model, _:flags >>> 24, posX, posY, posZ, 0);

NEW_NATIVE__ bool:Pickup@Destroy(Pickup:pickupid) = Pickup__Destroy
	return !!DestroyPickup__(_:pickupid);

NEW_NATIVE__ bool:Pickup@IsValid(Pickup:pickupid) = Pickup__IsValid;

NEW_NATIVE__ Pickup_Display_1(Pickup:entity, Player:pid, bool:show);

NEW_NATIVE__ Pickup_Display_A(Pickup:entity, bool:show);

NEW_NATIVE__ bool:Pickup_Has(Pickup:entity, Player:pid);

NEW_NATIVE__ bool:Pickup_GetPlayer(Pickup:pickupid, Player:playerid);

NEW_NATIVE__ bool:Pickup_SetPlayer(Pickup:pickupid, Player:playerid, bool:show);

NEW_NATIVE__ bool:Pickup_GetVirtualWorld(Pickup:pickupid, vitualWorld);

NEW_NATIVE__ bool:Pickup_SetVirtualWorld(Pickup:pickupid, vitualWorld, bool:show);

NEW_NATIVE__ Pickup_GetPosition(Pickup:pickupid, &Float:pos_x, &Float:pos_y, &Float:pos_z);

NEW_NATIVE__ Pickup_SetPosition(Pickup:pickupid, Float:pos_x, Float:pos_y, Float:pos_z);

NEW_NATIVE__ Pickup_GetModel(Pickup:pickupid);

NEW_NATIVE__ Pickup_SetModel(Pickup:pickupid, model);

NEW_NATIVE__ Pickup_GetType(Pickup:pickupid);

NEW_NATIVE__ Pickup_SetType(Pickup:pickupid, type);

NEW_NATIVE__ bool:Pickup_Respawn(Pickup:pickupid, Player:playerid);

NEW_NATIVE__ bool:Pickup_IsSpawned(Pickup:pickupid, Player:playerid);

/// <summary>This function adds a 'static' pickupid to the game. These pickups support weapons, health, armor etc., with the ability to function without scripting them (weapons/health/armor will be given automatically).</summary>
/// <param name="model">The model of the pickupid</param>
/// <param name="type">The pickupid type. Determines how the pickupid responds when picked up</param>
/// <param name="X">The X coordinate to create the pickupid at</param>
/// <param name="Y">The Y coordinate to create the pickupid at</param>
/// <param name="Z">The Z coordinate to create the pickupid at</param>
/// <param name="virtualworld">The virtual world ID to put the pickupid in. Use -1 to show the pickupid in all worlds</param>
/// <returns>
///   <b><c>1</c></b> if the pickupid is successfully created.
///   <p/>
///   <b><c>0</c></b> if failed to create.
/// </returns>
/// <remarks>This function doesn't return a pickupid ID that you can use in, for example, <a href="#OnPlayerPickUpPickup">OnPlayerPickUpPickup</a>. Use <a href="#CreatePickup">CreatePickup</a> if you'd like to assign IDs.</remarks>
/// <seealso name="CreatePickup"/>
/// <seealso name="DestroyPickup"/>
/// <seealso name="OnPlayerPickUpPickup"/>
OLD_NATIVE__ AddStaticPickup(model, type, Float:X, Float:Y, Float:Z, virtualworld = 0);

/// <summary>This function does exactly the same as AddStaticPickup, except it returns a pickupid ID which can be used to destroy it afterwards and be tracked using <a href="#OnPlayerPickUpPickup">OnPlayerPickUpPickup</a>.</summary>
/// <param name="model">The <a href="http://wiki.sa-mp.com/wiki/Pickup_IDs">model</a> of the pickupid</param>
/// <param name="type">The pickupid spawn type (see table under remarks)</param>
/// <param name="X">The X coordinate to create the pickupid at</param>
/// <param name="Y">The Y coordinate to create the pickupid at</param>
/// <param name="Z">The Z coordinate to create the pickupid at</param>
/// <param name="virtualworld">The virtual world ID of the pickupid. Use <b><c>-1</c></b> to make the pickupid show in all worlds (optional=<b><c>0</c></b>)</param>
/// <seealso name="AddStaticPickup"/>
/// <seealso name="DestroyPickup"/>
/// <seealso name="OnPlayerPickUpPickup"/>
/// <remarks>
///   <b>Known Bugs:</b><p/>
///   Pickups that have a X or Y lower than <b><c>-4096.0</c></b> or bigger than <b><c>4096.0</c></b> won't show up and won't trigger <a href="#OnPlayerPickUpPickup">OnPlayerPickUpPickup</a> either.
/// </remarks>
/// <remarks>
///   The only type of pickupid that can be picked up from inside a vehicle is <b><c>14</c></b> (except for special pickups such as bribes).<p/>
///   Pickups are shown to, and can be picked up by all players.<p/>
///   It is possible that if <a href="#DestroyPickup">DestroyPickup</a> is used when a pickupid is picked up, more than one player can pick up the pickupid, due to lag. This can be circumvented through the use of variables.<p/>
///   Certain pickupid types come with 'automatic responses', for example using an M4 model in the pickupid will automatically give the player the weapon and some ammo. For fully scripted pickups, type <b><c>1</c></b> should be used. <p/>
/// </remarks>
/// <remarks>
///   <b>Available Pickup Types</b><p/>
///   Most other IDs are either undocumented or are similar to type <b><c>1</c></b> (but do not use them just because they seem similar to ID <b><c>1</c></b>, they might have side-effects like ID <b><c>18</c></b> and <b><c>20</c></b>).
///   <ul>
///     <li><b><c>0</c></b> - The pickupid does not always display. If displayed, it can't be picked up and does not trigger <a href="#OnPlayerPickUpPickup">OnPlayerPickUpPickup</a> and it will stay after server shutdown.</li>
///     <li><b><c>1</c></b> - Exists always. Disables pickupid scripts such as horseshoes and oysters to allow for scripted actions ONLY. Will trigger <a href="#OnPlayerPickUpPickup">OnPlayerPickUpPickup</a> every few seconds.</li>
///     <li><b><c>2</c></b> - Disappears after pickupid, respawns after 30 seconds if the player is at a distance of at least 15 meters.</li>
///     <li><b><c>3</c></b> - Disappears after pickupid, respawns after death.</li>
///     <li><b><c>4</c></b> - Disappears after 15 to 20 seconds. Respawns after death.</li>
///     <li><b><c>8</c></b> - Disappears after pickupid, but has no effect.</li>
///     <li><b><c>11</c></b> - Blows up a few seconds after being created (bombs?)</li>
///     <li><b><c>12</c></b> - Blows up a few seconds after being created.</li>
///     <li><b><c>13</c></b> - Invisible. Triggers checkpoint sound when picked up with a vehicle, but doesn't trigger <a href="#OnPlayerPickUpPickup">OnPlayerPickUpPickup</a>.</li>
///     <li><b><c>14</c></b> - Disappears after pickupid, can only be picked up with a vehicle. Triggers checkpoint sound.</li>
///     <li><b><c>15</c></b> - Same as type <b><c>2</c></b>.</li>
///     <li><b><c>18</c></b> - Similar to type <b><c>1</c></b>. Pressing Tab (<b><c>KEY_ACTION</c></b>) makes it disappear but the key press doesn't trigger <a href="#OnPlayerPickUpPickup">OnPlayerPickUpPickup</a>.</li>
///     <li><b><c>19</c></b> - Disappears after pickupid, but doesn't respawn. Makes "cash pickupid" sound if picked up.</li>
///     <li><b><c>20</c></b> - Similar to type <b><c>1</c></b>. Disappears when you take a picture of it with the Camera weapon, which triggers "Snapshot # out of 0" message. Taking a picture doesn't trigger <a href="#OnPlayerPickUpPickup">OnPlayerPickUpPickup</a>.</li>
///     <li><b><c>22</c></b> - Same as type <b><c>3</c></b>.</li>
///   </ul>
/// </remarks>
/// <returns>The ID of the created pickupid, <b><c>-1</c></b> on failure (<a href="http://wiki.sa-mp.com/wiki/Limits">pickupid max limit</a>).</returns>
OLD_NATIVE__ CreatePickup(model, type, Float:X, Float:Y, Float:Z, virtualworld = 0);

/// <summary>Destroys a pickupid created with <a href="#CreatePickup">CreatePickup</a>.</summary>
/// <param name="pickupid">The ID of the pickupid to destroy (returned by <a href="#CreatePickup">CreatePickup</a>)</param>
/// <seealso name="CreatePickup"/>
/// <seealso name="OnPlayerPickUpPickup"/>
OLD_NATIVE__ DestroyPickup(pickupid);


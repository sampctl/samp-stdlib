#if defined _INC_a_players
	#endinput
#endif
#define _INC_a_players
#define _players_included
#define _inc_a_players

#define SAMP_CONST_CORRECT

#pragma tabsize 4

// Limits
stock const MAX_PLAYER_ATTACHED_OBJECTS = 10;
stock const MAX_CHATBUBBLE_LENGTH = 144;

enum
{
    WEAPONSTATE_UNKNOWN         = -1,
    WEAPONSTATE_NO_BULLETS		= 0,
    WEAPONSTATE_LAST_BULLET	    = 1,
    WEAPONSTATE_MORE_BULLETS	= 2,
    WEAPONSTATE_RELOADING		= 3,
}

enum WeaponState
{
    WEAPON_STATE_UNKNOWN        = -1,
    WEAPON_STATE_NO_BULLETS		= 0,
    WEAPON_STATE_LAST_BULLET	= 1,
    WEAPON_STATE_MORE_BULLETS	= 2,
    WEAPON_STATE_RELOADING		= 3,
}

enum
{
    FIGHT_STYLE_NORMAL      = 4,
    FIGHT_STYLE_BOXING	    = 5,
    FIGHT_STYLE_KUNGFU		= 6,
    FIGHT_STYLE_KNEEHEAD	= 7,
    FIGHT_STYLE_GRABKICK	= 15,
    FIGHT_STYLE_ELBOW		= 16,
}

enum FightingStyle
{
    FIGHTING_STYLE_NORMAL   = 4,
    FIGHTING_STYLE_BOXING	= 5,
    FIGHTING_STYLE_KUNGFU	= 6,
    FIGHTING_STYLE_KNEEHEAD	= 7,
    FIGHTING_STYLE_GRABKICK	= 15,
    FIGHTING_STYLE_ELBOW	= 16,
}

enum
{
    WEAPONSKILL_PISTOL,
    WEAPONSKILL_PISTOL_SILENCED,
    WEAPONSKILL_DESERT_EAGLE,
    WEAPONSKILL_SHOTGUN,
    WEAPONSKILL_SAWNOFF_SHOTGUN,
    WEAPONSKILL_SPAS12_SHOTGUN,
    WEAPONSKILL_MICRO_UZI,
    WEAPONSKILL_MP5,
    WEAPONSKILL_AK47,
    WEAPONSKILL_M4,
    WEAPONSKILL_SNIPERRIFLE,
}

enum WeaponSkill
{
    WEAPON_SKILL_PISTOL,
    WEAPON_SKILL_PISTOL_SILENCED,
    WEAPON_SKILL_DESERT_EAGLE,
    WEAPON_SKILL_SHOTGUN,
    WEAPON_SKILL_SAWNOFF_SHOTGUN,
    WEAPON_SKILL_SPAS12_SHOTGUN,
    WEAPON_SKILL_MICRO_UZI,
    WEAPON_SKILL_MP5,
    WEAPON_SKILL_AK47,
    WEAPON_SKILL_M4,
    WEAPON_SKILL_SNIPERRIFLE,
}

enum
{
	SPECIAL_ACTION_NONE,
	SPECIAL_ACTION_DUCK,
	SPECIAL_ACTION_USEJETPACK,
	SPECIAL_ACTION_ENTER_VEHICLE,
	SPECIAL_ACTION_EXIT_VEHICLE,
	SPECIAL_ACTION_DANCE1,
	SPECIAL_ACTION_DANCE2,
	SPECIAL_ACTION_DANCE3,
	SPECIAL_ACTION_DANCE4,
	SPECIAL_ACTION_HANDSUP    = 10,
	SPECIAL_ACTION_USECELLPHONE,
	SPECIAL_ACTION_SITTING,
	SPECIAL_ACTION_STOPUSECELLPHONE,
	SPECIAL_ACTION_DRINK_BEER = 20,
	SPECIAL_ACTION_SMOKE_CIGGY,
	SPECIAL_ACTION_DRINK_WINE,
	SPECIAL_ACTION_DRINK_SPRUNK,
	SPECIAL_ACTION_CUFFED,
	SPECIAL_ACTION_CARRY,
	SPECIAL_ACTION_PISSING    = 68,
}

enum SpecialAction
{
	SPECACT_NONE,
	SPECACT_DUCK,
	SPECACT_USE_JETPACK,
	SPECACT_ENTER_VEHICLE,
	SPECACT_EXIT_VEHICLE,
	SPECACT_DANCE_1,
	SPECACT_DANCE_2,
	SPECACT_DANCE_3,
	SPECACT_DANCE_4,
	SPECACT_HANDS_UP          = 10,
	SPECACT_USE_CELLPHONE,
	SPECACT_SITTING,
	SPECACT_STOP_USE_CELLPHONE,
	SPECACT_DRINK_BEER        = 20,
	SPECACT_SMOKE_CIGGY,
	SPECACT_DRINK_WINE,
	SPECACT_DRINK_SPRUNK,
	SPECACT_CUFFED,
	SPECACT_CARRY,
	SPECACT_PISSING           = 68,
}

// PVar enumeration
enum
{
	PLAYER_VARTYPE_NONE,
	PLAYER_VARTYPE_INT,
	PLAYER_VARTYPE_STRING,
	PLAYER_VARTYPE_FLOAT,
}

enum PVarType
{
	PVAR_TYPE_NONE,
	PVAR_TYPE_INT,
	PVAR_TYPE_STRING,
	PVAR_TYPE_FLOAT,
}

enum
{
	MAPICON_LOCAL,             // Displays in the player's local area
	MAPICON_GLOBAL,            // Displays always
	MAPICON_LOCAL_CHECKPOINT,  // Displays in the player's local area and has a checkpoint marker
	MAPICON_GLOBAL_CHECKPOINT, // Displays always and has a checkpoint marker
}

enum MapIcon
{
	MAP_ICON_LOCAL,             // Displays in the player's local area
	MAP_ICON_GLOBAL,            // Displays always
	MAP_ICON_LOCAL_CHECKPOINT,  // Displays in the player's local area and has a checkpoint marker
	MAP_ICON_GLOBAL_CHECKPOINT, // Displays always and has a checkpoint marker
}

enum
{
	CAMERA_MOVE = 1,
	CAMERA_CUT,
}

enum CameraMovement
{
	CAMERA_MOVEMENT_SMOOTH = 1,
	CAMERA_MOVEMENT_CUT,
}

// Spectating
enum
{
	SPECTATE_MODE_NORMAL = 1,
	SPECTATE_MODE_FIXED,
	SPECTATE_MODE_SIDE,
}

enum SpectateCamera
{
	SPECTATE_CAMERA_NORMAL = 1,
	SPECTATE_CAMERA_FIXED,
	SPECTATE_CAMERA_SIDE,
}

// Recording for NPC playback
enum
{
	PLAYER_RECORDING_TYPE_NONE,
	PLAYER_RECORDING_TYPE_DRIVER,
	PLAYER_RECORDING_TYPE_ONFOOT,
}

enum NPCRecordingType
{
	NPC_RECORDING_TYPE_NONE,
	NPC_RECORDING_TYPE_DRIVER,
	NPC_RECORDING_TYPE_ONFOOT,
}

enum ScreenMode
{
	SCREEN_MODE_NORMAL,
	SCREEN_MODE_LETTERBOX,
	SCREEN_MODE_WIDESCREEN,
}

enum CameraMode
{
	// Train/tram camera.
	CAMERA_MODE_TRAIN = 3,
	// Follow ped (normal behind player camera).
	CAMERA_MODE_PLAYER_BEHIND = 4,
	// Sniper aiming.
	CAMERA_MODE_AIMING_SNIPER = 7,
	// Rocket Launcher aiming.
	CAMERA_MODE_AIMING_ROCKET = 8,
	// Fixed camera (non-moving) - used for Pay 'n' Spray, chase camera, tune shops, entering buildings, buying food etc.
	CAMERA_MODE_FIXED = 15,
	// Vehicle front camera, bike side camera.
	CAMERA_MODE_VEHICLE_DRIVER = 16,
	// Normal car (+skimmer+helicopter+airplane), several variable distances.
	CAMERA_MODE_VEHICLE_BEHIND = 18,
	// Normal boat camera.
	CAMERA_MODE_BOAT = 22,
	// Camera weapon aiming.
	CAMERA_MODE_AIMING_CAMERA = 46,
	// Heat-seeking Rocket Launcher aiming.
	CAMERA_MODE_AIMING_HEAT_SEEKER = 51,
	// Aiming any other weapon.
	CAMERA_MODE_AIMING = 53,
	// Vehicle passenger drive-by camera.
	CAMERA_MODE_DRIVE_BY = 55,
	// Chase camera: helicopter/bird view.
	CAMERA_MODE_CHASE_BIRD = 56,
	// Chase camera: ground camera, zooms in very quickly. (Similar to 56, but on the ground.)
	CAMERA_MODE_CHASE_GROUND = 57,
	// Chase camera: horizontal flyby past vehicle.
	CAMERA_MODE_CHASE_FLYBY = 58,
	// Chase camera (for air vehicles only): ground camera, looking up to the air vehicle.
	CAMERA_MODE_CHASE_LOOK_UP = 59,
	// Chase camera (for air vehicles only): vertical flyby past air vehicle.
	CAMERA_MODE_CHASE_VERTICAL = 62,
	// Chase camera (for air vehicles only): horizontal flyby past air vehicle (similar to 58 and 62).
	CAMERA_MODE_CHASE_HOROZONTAL = 63,
	// Chase camera (for air vehicles only): camera focused on pilot, similar to pressing LOOK_BEHIND key on foot, but in air vehicle.
	CAMERA_MODE_CHASE_PILOT = 64,
}

enum CheckType
{
	// Returns 32 flags of entity in CPhysical (if player is in vehicle, it sends data related to
	// vehicle, if player is on foot, well.. it's player).
	CHECK_TYPE_PHYSICAL_FLAGS = 2,
	// Checksum of size bytes from arg + offset address (GTA memory) and returns it into response
	// argument, and arg should be within GTA memory boundaries.
	CHECK_TYPE_HASH_GTA_MEMORY = 5,
	// Checksum of size bytes from arg + offset address (SAMP memory) and returns it into response
	// argument, and arg should be within GTA memory boundaries (0x0 - 0xC3500).
	CHECK_TYPE_HASH_SAMP_MEMORY = 69,
	// Checksum of given model's CModelInfo (data in CModelInfo class).
	CHECK_TYPE_HASH_MODEL_INFO = 70,
	// Checksum of given model's ColModel (data in CColModel class).
	CHECK_TYPE_HASH_COL_MODEL = 71,
	// Uptime of player's computer.
	CHECK_TYPE_UPTIME = 72,
}

enum PhysicalFlags (<<= 1)
{
	// 0-7
	_PHYSICAL_FLAG_UNK_1 = 1,
	PHYSICAL_FLAG_GRAVITY,
	PHYSICAL_FLAG_IMPACT,
	PHYSICAL_FLAG_COLLISIONS,
	PHYSICAL_FLAG_MOMENTUM,
	PHYSICAL_FLAG_NO_MASS,
	PHYSICAL_FLAG_INFINITE_MASS,
	PHYSICAL_FLAG_Z_DISABLED,
	// 8-15
	PHYSICAL_FLAG_IN_WATER,
	PHYSICAL_FLAG_ON_GROUND,
	PHYSICAL_FLAG_BROKEN,
	_PHYSICAL_FLAG_UNK_2,
	_PHYSICAL_FLAG_UNK_3,
	PHYSICAL_FLAG_NO_SPEED,
	_PHYSICAL_FLAG_UNK_4,
	_PHYSICAL_FLAG_UNK_5,
	// 16-23
	_PHYSICAL_FLAG_UNK_6,
	_PHYSICAL_FLAG_UNK_7,
	PHYSICAL_FLAG_BULLET_PROOF,
	PHYSICAL_FLAG_FIRE_PROOF,
	PHYSICAL_FLAG_COLLISION_PROOF,
	PHYSICAL_FLAG_MELEE_PROOF,
	PHYSICAL_FLAG_INVULNERABLE,
	PHYSICAL_FLAG_EXPLOSION_PROOF,
	// 24-31
	_PHYSICAL_FLAG_UNK_8,
	PHYSICAL_FLAG_ATTACHED,
	_PHYSICAL_FLAG_UNK_9,
	PHYSICAL_FLAG_ON_WATER,
	PHYSICAL_FLAG_COLLIDABLE,
	PHYSICAL_FLAG_DESTROYED,
	_PHYSICAL_FLAG_UNK_10,
	_PHYSICAL_FLAG_UNK_11,
}

// Player

/// <summary>This function can be used to change the spawn information of a specific player. It allows you to automatically set someone's spawn weapons, their team, skin and spawn position, normally used in case of minigames or automatic-spawn systems. This function is more crash-safe then using <a href="#SetPlayerSkin">SetPlayerSkin</a> in <a href="#OnPlayerSpawn">OnPlayerSpawn</a> and/or <a href="#OnPlayerRequestClass">OnPlayerRequestClass</a>, even though this has been fixed in 0.2.</summary>
/// <param name="playerid">The PlayerID of who you want to set the spawn information</param>
/// <param name="team">The Team-ID of the chosen player</param>
/// <param name="skin">The skin which the player will spawn with</param>
/// <param name="x">The X-coordinate of the player's spawn position</param>
/// <param name="y">The Y-coordinate of the player's spawn position</param>
/// <param name="z">The Z-coordinate of the player's spawn position</param>
/// <param name="angle">The direction in which the player needs to be facing after spawning</param>
/// <param name="weapon1">The first spawn-<a href="http://wiki.sa-mp.com/wiki/Weapons">weapon</a> for the player</param>
/// <param name="ammo1">The amount of ammunition for the primary spawnweapon</param>
/// <param name="weapon2">The second spawn-<a href="http://wiki.sa-mp.com/wiki/Weapons">weapon</a> for the player</param>
/// <param name="ammo2">The amount of ammunition for the second spawnweapon</param>
/// <param name="weapon3">The third spawn-<a href="http://wiki.sa-mp.com/wiki/Weapons">weapon</a> for the player</param>
/// <param name="ammo3">The amount of ammunition for the third spawnweapon</param>
/// <seealso name="SetPlayerSkin"/>
/// <seealso name="SetPlayerTeam"/>
/// <seealso name="SpawnPlayer"/>
NEW_NATIVE__ bool:Player_SetSpawnInfo(Player:playerid, teamid, skinid, Float:posX, Float:posY, Float:posZ, Float:angle, \
	weapon1 = 0, ammo1 = 0, \
	weapon2 = 0, ammo2 = 0, \
	weapon3 = 0, ammo3 = 0, \
	weapon4 = 0, ammo4 = 0, \
	weapon5 = 0, ammo5 = 0, \
	weapon6 = 0, ammo6 = 0, \
	weapon7 = 0, ammo7 = 0, \
	weapon8 = 0, ammo8 = 0, \
	weapon9 = 0, ammo9 = 0, \
	weapon10 = 0, ammo10 = 0, \
	weapon11 = 0, ammo11 = 0, \
	weapon12 = 0, ammo12 = 0, \
	weapon13 = 0, ammo13 = 0)
	return SetSpawnInfo(playerid, team, skin, x, y, z, angle, weapon1, ammo1, weapon2, ammo2, weapon3, ammo3);

OLD_NATIVE__ SetSpawnInfo(playerid, team, skin, Float:x, Float:y, Float:z, Float:angle, weapon1, ammo1, weapon2, ammo2, weapon3, ammo3)
	return Player_SetSpawnInfo(Player:playerid, team, skin, x, y, z, angle, weapon1, ammo1, weapon2, ammo2, weapon3, ammo3);

/// <summary>(Re)Spawns a player.</summary>
/// <param name="playerid">The ID of the player to spawn</param>
/// <seealso name="SetSpawnInfo"/>
/// <seealso name="AddPlayerClass"/>
/// <seealso name="OnPlayerSpawn"/>
/// <remarks>Kills the player if they are in a vehicle and then they spawn with a bottle in their hand.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
NATIVE__ SpawnPlayer(playerid) \
    = bool:Player_Spawn(Player:playerid);

// Player info

/// <summary>Set a player's position.</summary>
/// <param name="playerid">The ID of the player to set the position of</param>
/// <param name="x">The X coordinate to position the player at</param>
/// <param name="y">The Y coordinate to position the player at</param>
/// <param name="z">The Z coordinate to position the player at</param>
/// <seealso name="SetPlayerPosFindZ"/>
/// <seealso name="SetPlayerFacingAngle"/>
/// <seealso name="GetPlayerPos"/>
/// <seealso name="SetVehiclePos"/>
/// <seealso name="GetVehiclePos"/>
/// <remarks>Using this function on a player in a vehicle will instantly remove them from the vehicle. Useful for quickly ejecting players.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player specified does not exist.
/// </returns>
NATIVE__ SetPlayerPos(playerid, Float:x, Float:y, Float:z) \
    = bool:Player_SetPosition(Player:playerid, Float:posX, Float:posY, Float:posZ);

/// <summary>This sets the players position then adjusts the players z-coordinate to the nearest solid ground under the position.</summary>
/// <param name="playerid">The ID of the player to set the position of</param>
/// <param name="x">The X coordinate to position the player at</param>
/// <param name="y">The X coordinate to position the player at</param>
/// <param name="z">The Z coordinate to position the player at</param>
/// <seealso name="SetPlayerPos"/>
/// <seealso name="OnPlayerClickMap"/>
/// <remarks>This function does not work if the new coordinates are far away from where the player currently is. The Z height will be <b><c>0</c></b>, which will likely put them underground. It is highly recommended that the <a href="http://forum.sa-mp.com/showthread.php?t=275492">MapAndreas plugin</a> be used instead.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player specified does not exist.
/// </returns>
NATIVE__ SetPlayerPosFindZ(playerid, Float:x, Float:y, Float:z) \
    = bool:Player_SetPositionFindZ(Player:playerid, Float:posX, Float:posY, Float:posZ);

/// <summary>Get the position of a player, represented by X, Y and Z coordinates.</summary>
/// <param name="playerid">The ID of the player to get the position of</param>
/// <param name="x">A float variable in which to store the X coordinate in, passed by reference</param>
/// <param name="y">A float variable in which to store the Y coordinate in, passed by reference</param>
/// <param name="z">A float variable in which to store the Z coordinate in, passed by reference</param>
/// <seealso name="SetPlayerPos"/>
/// <seealso name="GetVehiclePos"/>
/// <seealso name="IsPlayerInRangeOfPoint"/>
/// <seealso name="GetPlayerDistanceFromPoint"/>
/// <remarks>This function is known to return unreliable values when used in <a href="#OnPlayerDisconnect">OnPlayerDisconnect</a> and <a href="#OnPlayerRequestClass">OnPlayerRequestClass</a>. This is because the player is not spawned.</remarks>
/// <returns><b><c>true</c></b> on success, <b><c>false</c></b> on failure (i.e. player not connected).</returns>
NATIVE__ GetPlayerPos(playerid, &Float:x, &Float:y, &Float:z) \
    = bool:Player_GetPosition(Player:playerid, &Float:posX, &Float:posY, &Float:posZ);

/// <summary>Set a player's facing angle (Z rotation).</summary>
/// <param name="playerid">The ID of the player to set the facing angle of</param>
/// <param name="ang">The angle the player should face</param>
/// <seealso name="Player_GetZAngle"/>
/// <seealso name="Player_SetPosition"/>
/// <remarks>Angles are reversed in GTA:SA; 90 degrees would be East in the real world, but in GTA:SA 90 degrees is in fact West. North and South are still 0/360 and 180. To convert this, simply do <b>360 - angle</b>.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified does not exist.
/// </returns>
NATIVE__ SetPlayerFacingAngle(playerid, Float:z) \
	= bool:Player_SetRotation_Z(Player:playerid, Float:z);
NEW_NATIVE__ bool:Player_SetRotation_E(Player:playerid, Float:x, Float:y, Float:z);
NEW_NATIVE__ bool:Player_SetRotation_Q(Player:playerid, Float:w, Float:x, Float:y, Float:z);

#define Player_SetRotation(%0) Player_SetRotation_Z(%0)
#define Player_SetRotation_Z(%0,%1,%2) Player_SetRotation_E(%0,%1,%2)
#define Player_SetRotation_E(%0,%1,%2,%3,%4) Player_SetRotation_Q(%0,%1,%2,%3,%4)
#define _ALS_Player_SetRotation

/// <summary>Gets the angle a player is facing.</summary>
/// <param name="playerid">The player you want to get the angle of</param>
/// <param name="ang">The Float to store the angle in, passed by reference</param>
/// <seealso name="GetVehicleZAngle"/>
/// <seealso name="Player_SetRotation_Z"/>
/// <remarks>Angles are reversed in GTA:SA; 90 degrees would be East in the real world, but in GTA:SA 90 degrees is in fact West. North and South are still 0/360 and 180. To convert this, simply do <b>360 - angle</b>.</remarks>
/// <remarks>Angles returned when inside a vehicle is rarely correct. To get the correct facing angle while inside a vehicle, use <a href="#GetVehicleZAngle">GetVehicleZAngle</a>.</remarks>
NATIVE__ GetPlayerFacingAngle(playerid, &Float:z) \
	= Float:Player_GetRotation_Z(Player:objectid);
NEW_NATIVE__ bool:Player_GetRotation_E(Player:objectid, &Float:x, &Float:y, &Float:z);
NEW_NATIVE__ bool:Player_GetRotation_Q(Player:objectid, &Float:w, &Float:x, &Float:y, &Float:z);

#define Player_GetRotation(%0) Player_GetRotation_Z(%0)
#define Player_GetRotation_Z(%0,%1) Player_GetRotation_E(%0,%1)
#define Player_GetRotation_E(%0,%1,%2,%3,%4) Player_GetRotation_Q(%0,%1,%2,%3,%4)
#define _ALS_Player_GetRotation

/// <summary>Checks if a player is in range of a point. This NATIVE__ function is faster than the PAWN implementation using distance formula.</summary>
/// <param name="playerid">The ID of the player</param>
/// <param name="range">The furthest distance the player can be from the point to be in range</param>
/// <param name="x">The X coordinate of the point to check the range to</param>
/// <param name="y">The Y coordinate of the point to check the range to</param>
/// <param name="z">The Z coordinate of the point to check the range to</param>
/// <seealso name="GetPlayerDistanceFromPoint"/>
/// <seealso name="GetVehicleDistanceFromPoint"/>
/// <seealso name="GetPlayerPos"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <returns><b><c>1</c></b> if the player is in range, <b><c>0</c></b> if not.</returns>
NATIVE__ IsPlayerInRangeOfPoint(playerid, Float:range, Float:x, Float:y, Float:z) \
    = bool:Player_IsInRangeOfPoint(Player:playerid, Float:range, Float:posX, Float:posY, Float:posZ);

/// <summary>Calculate the distance between a player and a map coordinate.</summary>
/// <param name="playerid">The ID of the player to calculate the distance from</param>
/// <param name="X">The X map coordinate</param>
/// <param name="Y">The Y map coordinate</param>
/// <param name="Z">The Z map coordinate</param>
/// <seealso name="IsPlayerInRangeOfPoint"/>
/// <seealso name="GetVehicleDistanceFromPoint"/>
/// <seealso name="GetPlayerPos"/>
/// <remarks>This function was added in <b>SA-MP 0.3c R3</b> and will not work in earlier versions!</remarks>
/// <returns>The distance between the player and the point as a float.</returns>
NATIVE__ Float:GetPlayerDistanceFromPoint(playerid, Float:X, Float:Y, Float:Z) \
    = Float:Player_GetDistanceFromPoint(Player:playerid, Float:posX, Float:posY, Float:posZ);

/// <summary>Checks if a player is streamed in another player's client.</summary>
/// <param name="playerid">The ID of the player to check is streamed in</param>
/// <param name="forPlayerid">The ID of the player to check if playerid is streamed in for</param>
/// <seealso name="IsActorStreamedIn"/>
/// <seealso name="IsVehicleStreamedIn"/>
/// <seealso name="OnPlayerStreamIn"/>
/// <seealso name="OnPlayerStreamOut"/>
/// <seealso name="OnVehicleStreamIn"/>
/// <seealso name="OnVehicleStreamOut"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>Players aren't streamed in on their own client, so if playerid is the same as forPlayerid it will return false!</remarks>
/// <remarks>Players stream out if they are more than <b><c>150</c></b> meters away (see <c>server.cfg</c> - <c>stream_distance</c>)</remarks>
/// <returns><b><c>1</c></b> if the player is streamed in, <b><c>0</c></b> if not.</returns>
NATIVE__ IsPlayerStreamedIn(playerid, forPlayerid) \
    = bool:Player_IsStreamedIn(Player:playerid, Player:forPlayerid);

/// <summary>Set a player's interior. A list of currently known interiors and their positions can be found <a href="http://wiki.sa-mp.com/wiki/InteriorIDs">here</a>.</summary>
/// <param name="playerid">The ID of the player to set the interior of</param>
/// <param name="interiorid">The <a href="http://wiki.sa-mp.com/wiki/InteriorIDs">interior ID</a> to set the player in</param>
/// <seealso name="GetPlayerInterior"/>
/// <seealso name="LinkVehicleToInterior"/>
/// <seealso name="OnPlayerInteriorChange"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
NATIVE__ SetPlayerInterior(playerid, interiorid) \
    = bool:Player_SetInterior(Player:playerid, interiorid);

/// <summary>Retrieves the player's current interior. A list of currently known interiors with their positions can be found on <a href="http://wiki.sa-mp.com/wiki/InteriorIDs">this</a> page.</summary>
/// <param name="playerid">The player to get the interior ID of</param>
/// <seealso name="SetPlayerInterior"/>
/// <seealso name="GetPlayerVirtualWorld"/>
/// <remarks>Always returns <b><c>0</c></b> for NPCs.</remarks>
/// <returns>The interior ID the player is currently in.</returns>
NATIVE__ GetPlayerInterior(playerid) \
    = Player_GetInterior(Player:playerid);

/// <summary>Set the health of a player.</summary>
/// <param name="playerid">The ID of the player to set the health of</param>
/// <param name="health">The value to set the player's health to. Max health that can be displayed in the HUD is <b><c>100</c></b>, though higher values are valid</param>
/// <seealso name="GetPlayerHealth"/>
/// <seealso name="GetPlayerArmour"/>
/// <seealso name="SetPlayerArmour"/>
/// <remarks>Health is obtained rounded to integers: set <b><c>50.15</c></b>, but get <b><c>50.0</c></b></remarks>
/// <remarks>If a player's health is set to <b><c>0</c></b> or a minus value, they will die instantly.</remarks>
/// <remarks>If a player's health is below <b><c>10</c></b> or above <b><c>98303</c></b>, their health bar will flash. </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player specified does not exist.
/// </returns>
NATIVE__ SetPlayerHealth(playerid, Float:health) \
    = bool:Player_SetHealth(Player:playerid, Float:health);

/// <summary>The function GetPlayerHealth allows you to retrieve the health of a player. Useful for cheat detection, among other things.</summary>
/// <param name="playerid">The ID of the player</param>
/// <param name="health">Float to store health, passed by reference</param>
/// <seealso name="SetPlayerHealth"/>
/// <seealso name="GetVehicleHealth"/>
/// <seealso name="GetPlayerArmour"/>
/// <remarks>
///   Even though the health can be set to near infinite values on the server side, the individual clients will only report values up to <b><c>255</c></b>. Anything higher will wrap around; <b><c>256</c></b> becomes <b><c>0</c></b>, <b><c>257</c></b> becomes <b><c>1</c></b>, etc.<p/>
///   Health is obtained rounded to integers: set <b><c>50.15</c></b>, but get <b><c>50.0</c></b>
/// </remarks>
/// <returns>
///   <b><c>1</c></b> - success.<p/>
///   <b><c>0</c></b> - failure (i.e. player not connected).<p/>
/// </returns>
FLOAT_NATIVE__ GetPlayerHealth(playerid, &Float:health) \
	= Float:Player_GetHealth(Player:playerid);

/// <summary>Set a player's armor level.</summary>
/// <param name="playerid">The ID of the player to set the armour of</param>
/// <param name="armour">The amount of armour to set, as a percentage (float). Values larger than <b><c>100</c></b> are valid, but won't be displayed in the HUD's armour bar</param>
/// <seealso name="GetPlayerArmour"/>
/// <seealso name="SetPlayerHealth"/>
/// <seealso name="GetPlayerHealth"/>
/// <remarks>Armour is obtained rounded to integers: set <b><c>50.15</c></b>, but get <b><c>50.0</c></b></remarks>
/// <remarks>The function's name is armour, not armor (Americanized). This is inconsistent with the rest of SA-MP, so remember that.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player specified does not exist.
/// </returns>
NATIVE__ SetPlayerArmour(playerid, Float:armour) \
    = bool:Player_SetArmor(Player:playerid, Float:armor);

/// <summary>This function stores the armour of a player into a variable.</summary>
/// <param name="playerid">The ID of the player that you want to get the armour of</param>
/// <param name="armour">The float to to store the armour in, passed by reference</param>
/// <seealso name="SetPlayerArmour"/>
/// <seealso name="GetPlayerHealth"/>
/// <seealso name="GetVehicleHealth"/>
/// <remarks>Even though the armour can be set to near infinite values on the server side, the individual clients will only report values up to <b><c>255</c></b>. Anything higher will wrap around; <b><c>256</c></b> becomes <b><c>0</c></b>, <b><c>257</c></b> becomes <b><c>1</c></b>, etc. </remarks>
/// <remarks>Armour is obtained rounded to integers: set <b><c>50.15</c></b>, but get <b><c>50.0</c></b> </remarks>
/// <remarks>The function's name is armour, not armor (Americanized). This is inconsistent with the rest of SA-MP, so remember that.</remarks>
/// <returns>
///   <b><c>1</c></b> - success.<p/>
///   <b><c>0</c></b> - failure (i.e. player not connected).<p/>
/// </returns>
FLOAT_NATIVE__ GetPlayerArmour(playerid, &Float:armour) \
	= Float:Player_GetArmour(Player:playerid);

/// <summary>Set the ammo of a player's weapon.</summary>
/// <param name="playerid">The ID of the player to set the weapon ammo of</param>
/// <param name="weaponslot">The ID of the <a href="http://wiki.sa-mp.com/wiki/Weapons">weapon slot</a> to set the ammo of.</param>
/// <param name="ammo">The amount of ammo to set</param>
/// <seealso name="GetPlayerAmmo"/>
/// <seealso name="GivePlayerWeapon"/>
/// <seealso name="SetPlayerArmedWeapon"/>
/// <remarks>Set the ammo to <b><c>0</c></b> to remove a weapon from a player's inventory. Note that the weapon will still show up in <a href="#GetPlayerWeaponData">GetPlayerWeaponData</a>, albeit with <b><c>0</c></b> ammo.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully. Success is also returned when the weapon slot specified is invalid (not 0-12).<p/>
///   <b><c>0</c></b>: The function failed to execute. The player isn't connected.<p/>
/// </returns>
NATIVE__ SetPlayerAmmo(playerid, weaponslot, ammo) \
    = bool:Player_SetAmmo(Player:playerid, weaponSlot, ammo);

/// <summary>Gets the amount of ammo in a player's current weapon.</summary>
/// <param name="playerid">The ID of the player whose ammo to get</param>
/// <seealso name="SetPlayerAmmo"/>
/// <seealso name="GetPlayerWeaponData"/>
/// <remarks>The ammo can hold 16-bit values, therefore values over <b><c>32767</c></b> will return erroneous values.</remarks>
/// <returns>The amount of ammo in the player's current weapon.</returns>
NATIVE__ GetPlayerAmmo(playerid) \
    = Player_GetAmmo(Player:playerid);

/// <summary>Returns the ID of the weapon a player is currently holding.</summary>
/// <param name="playerid">The ID of the player to get the currently held weapon of</param>
/// <seealso name="GetPlayerWeaponData"/>
/// <seealso name="GivePlayerWeapon"/>
/// <seealso name="ResetPlayerWeapons"/>
/// <remarks>Prior to version <b>0.3z R1-2</b>, when the player state is <b>PLAYER_STATE_PASSENGER</b> this function returns the weapon held by the player before they entered the vehicle. If a cheat is used to spawn a weapon inside a vehicle, this function will not report it.</remarks>
/// <returns>The ID of the player's current weapon. Returns <b><c>-1</c></b> if the player specified does not exist.</returns>
NATIVE__ GetPlayerWeapon(playerid) \
	= Player_GetArmedWeapon(Player:playerid);

/// <summary>Gets the amount of ammo in a player's current weapon.</summary>
/// <param name="playerid">The ID of the player whose ammo to get</param>
/// <seealso name="Player_SetAmmo"/>
/// <seealso name="Player_GetWeaponData"/>
/// <remarks>The ammo can hold 16-bit values, therefore values over <b><c>32767</c></b> will return erroneous values.</remarks>
/// <returns>The amount of ammo in the player's current weapon.</returns>
NEW_NATIVE__ Player_GetArmedWeaponAmmo(Player:playerid);

/// <summary>Check the state of a player's weapon.</summary>
/// <param name="playerid">The ID of the player to obtain the weapon state of</param>
/// <seealso name="GivePlayerWeapon"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>
///   <b>Weapon states:</b><p/>
///   <ul>
///     <li><b><c>WEAPONSTATE_UNKNOWN</c></b> - unknown (Set when in a vehicle)</li>
///     <li><b><c>WEAPONSTATE_NO_BULLETS</c></b> - The weapon has no remaining ammo</li>
///     <li><b><c>WEAPONSTATE_LAST_BULLET</c></b> - the weapon has one remaining bullet</li>
///     <li><b><c>WEAPONSTATE_MORE_BULLETS</c></b> - the weapon has multiple bullets</li>
///     <li><b><c>WEAPONSTATE_RELOADING</c></b> - the player is reloading their weapon </li>
///   </ul>
/// </remarks>
/// <returns>The state of the player's weapon. <b><c>0</c></b> if player specified does not exist.</returns>
NATIVE__ GetPlayerWeaponState(playerid) \
    = WeaponState:Player_GetArmedWeaponState(Player:playerid);

/// <summary>Check who a player is aiming at.</summary>
/// <param name="playerid">The ID of the player to get the target of</param>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <seealso name="OnPlayerGiveDamage"/>
/// <seealso name="OnPlayerTakeDamage"/>
/// <remarks>This function was added in <b>SA-MP 0.3d</b> and will not work in earlier versions! </remarks>
/// <remarks>Does not work for joypads/controllers, and after a certain distance. </remarks>
/// <remarks>Does not work for the sniper rifle, as it doesn't lock on to anything and as such can't and won't return a player. </remarks>
/// <returns>The ID of the target player, or <b><c>INVALID_PLAYER_ID</c></b> if none.</returns>
NEW_NATIVE__ bool:Player_TryGetTargetedPlayer(Player:playerid, &Player:targetid)
	return (targetid = Player:GetPlayerTargetPlayer(_:playerid)) != (Player:INVALID_PLAYER_ID);

OLD_NATIVE__ GetPlayerTargetPlayer(playerid)
	return Player_TryGetTargetedPlayer(Player:playerid, Player:playerid) ? (_:playerid) : (_:INVALID_PLAYER_ID);

stock Player:Player_GetTargetedPlayer(Player:playerid)
	return Player_TryGetTargetedPlayer(playerid, Player:playerid) ? (Player:playerid) : (Player:INVALID_PLAYER_ID);

/// <summary>Gets id of an actor which is aimed by certain player.</summary>
/// <param name="playerid">The ID of the player to get the target of</param>
/// <seealso name="Player_GetCameraTargetActor"/>
/// <seealso name="Player_GetCameraFrontVector"/>
/// <seealso name="OnPlayerGiveDamageActor"/>
/// <remarks>Does not work for joypads/controllers, and after a certain distance. </remarks>
/// <remarks>Does not work for the sniper rifle, as it doesn't lock on to anything and as such can't and won't return a player. </remarks>
/// <returns>The ID of the targeted actor, or <b><c>INVALID_ACTOR_ID</c></b> if none.</returns>
NEW_NATIVE__ bool:Player_TryGetTargetedActor(Player:playerid, &Actor:targetid)
	return (targetid = Actor:GetPlayerTargetActor(_:playerid)) != (Actor:INVALID_ACTOR_ID);

OLD_NATIVE__ GetPlayerTargetActor(playerid)
	return Player_TryGetTargetedActor(Player:playerid, Actor:playerid) ? (_:playerid) : (_:INVALID_ACTOR_ID);

stock Actor:Player_GetTargetedActor(Player:playerid)
	return Player_TryGetTargetedActor(playerid, Actor:playerid) ? (Actor:playerid) : (Actor:INVALID_ACTOR_ID);

/// <summary>Set the team of a player.</summary>
/// <param name="playerid">The ID of the player you want to set the team of</param>
/// <param name="teamid">The team to put the player in. Use <b><c>NO_TEAM</c></b> to remove the player from any team</param>
/// <seealso name="GetPlayerTeam"/>
/// <seealso name="SetTeamCount"/>
/// <seealso name="EnableVehicleFriendlyFire"/>
/// <remarks>Players can not damage/kill players on the same team unless they use a knife to slit their throat. As of <b>SA-MP 0.3x</b>, players are also unable to damage vehicles driven by a player from the same team. This can be enabled with <a href="#EnableVehicleFriendlyFire">EnableVehicleFriendlyFire</a>.</remarks>
/// <remarks><b><c>255</c></b> (or <b><c>NO_TEAM</c></b>) is the default team to be able to shoot other players, not <b><c>0</c></b>.</remarks>
NATIVE__ SetPlayerTeam(playerid, teamid) \
    = bool:Player_SetTeam(Player:playerid, teamid);

/// <summary>Get the ID of the team the player is on.</summary>
/// <param name="playerid">The ID of the player to get the team of</param>
/// <seealso name="SetPlayerTeam"/>
/// <seealso name="SetTeamCount"/>
/// <returns>
///   <b><c>0-254</c></b>: The player's team. (<b><c>0</c></b> is a valid team).<p/>
///   <b><c>255</c></b>: Defined as <b><c>NO_TEAM</c></b>. The player is not on any team.<p/>
///   <b><c>-1</c></b>: The function failed to execute. Player is not connected.
/// </returns>
NATIVE__ GetPlayerTeam(playerid) \
    = Player_GetTeam(Player:playerid);

/// <summary>Set a player's score. Players' scores are shown in the scoreboard (shown by holding the TAB key).</summary>
/// <param name="playerid">The ID of the player to set the score of</param>
/// <param name="score">The value to set the player's score to</param>
/// <seealso name="GetPlayerScore"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player specified does not exist.
/// </returns>
NATIVE__ SetPlayerScore(playerid, score) \
    = bool:Player_SetScore(Player:playerid, score);

/// <summary>This function returns a player's score as it was set using <a href="#SetPlayerScore">SetPlayerScore</a>.</summary>
/// <param name="playerid">The player to get the score of</param>
/// <seealso name="SetPlayerScore"/>
/// <seealso name="GetPlayerPing"/>
/// <returns>The player's score.</returns>
NATIVE__ GetPlayerScore(playerid) \
    = Player_GetScore(Player:playerid);

/// <summary>Sets the drunk level of a player which makes the player's camera sway and vehicles hard to control.</summary>
/// <param name="playerid">The ID of the player to set the drunkenness of</param>
/// <param name="level">The level of drunkenness to set</param>
/// <seealso name="GetPlayerDrunkLevel"/>
/// <remarks>
///   Players' drunk level will automatically decrease over time, based on their FPS (players with <b><c>50</c></b> FPS will lose <b><c>50</c></b> 'levels' per second. This is useful for determining a player's FPS!).<p/>
///   In <b>0.3a</b> the drunk level will decrement and stop at <b><c>2000</c></b>. In <b>0.3b+</b> the drunk level decrements to <b><c>0</c></b>)<p/>
///   Levels over <b><c>2000</c></b> make the player drunk (camera swaying and vehicles difficult to control).<p/>
///   Max drunk level is <b><c>50000</c></b>.<p/>
///   While the drunk level is above <b><c>5000</c></b>, the player's HUD (radar etc.) will be hidden.
/// </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
NATIVE__ SetPlayerDrunkLevel(playerid, level) \
    = bool:Player_SetDrunkLevel(Player:playerid, level);

/// <summary>
///   Checks the player's level of drunkenness. If the level is less than <b><c>2000</c></b>, the player is sober. The player's level of drunkness goes down slowly automatically (1 level per frame) but will always reach <b><c>2000</c></b> at the end (in <b>0.3b</b> it will stop at <b><c>0</c></b>).
///   The higher drunkenness levels affect the player's camera, and the car driving handling. The level of drunkenness increases when the player drinks from a bottle (You can use <a href="#SetPlayerSpecialAction">SetPlayerSpecialAction</a> to give them bottles).
/// </summary>
/// <param name="playerid">The player you want to check the drunkenness level of</param>
/// <seealso name="SetPlayerDrunkLevel"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <returns>An integer with the level of drunkenness of the player.</returns>
NATIVE__ GetPlayerDrunkLevel(playerid) \
    = Player_GetDrunkLevel(Player:playerid);

/// <summary>Set the colour of a player's nametag and marker (radar blip).</summary>
/// <param name="playerid">The ID of the player whose color to set</param>
/// <param name="color">The color to set. Supports alpha values (<b>RGBA</b>)</param>
/// <seealso name="SetPlayerMarkerForPlayer"/>
/// <seealso name="GetPlayerColor"/>
/// <seealso name="ChangeVehicleColor"/>
/// <remarks>This function will change player's color for everyone, even if player's color was changed with <a href="#SetPlayerMarkerForPlayer">SetPlayerMarkerForPlayer</a> for any other player. </remarks>
/// <remarks>If used under <a href="#OnPlayerConnect">OnPlayerConnect</a>, the affecting player will not see the color in the TAB menu. </remarks>
NATIVE__ SetPlayerColor(playerid, color) \
    = bool:Player_SetColour(Player:playerid, colour);

/// <summary>Change the colour of a player's <b>nametag</b> and <b>radar blip</b> for another player.</summary>
/// <param name="playerid">The player that will see the player's changed blip/nametag color</param>
/// <param name="showplayerid">The player whose color will be changed</param>
/// <param name="color">New color. (<b>RGBA</b>)</param>
/// <seealso name="ShowPlayerMarkers"/>
/// <seealso name="LimitPlayerMarkerRadius"/>
/// <seealso name="SetPlayerColor"/>
/// <seealso name="ShowPlayerNameTagForPlayer"/>
NATIVE__ SetPlayerMarkerForPlayer(playerid, showplayerid, color) \
    = bool:Player_SetColourForPlayer(Player:playerid, Player:forplayerid, color);

/// <summary>Gets the color of the player's name and radar marker. Only works after <a href="#SetPlayerColor">SetPlayerColor</a>.</summary>
/// <param name="playerid">The ID of the player to get the color of</param>
/// <seealso name="SetPlayerColor"/>
/// <seealso name="ChangeVehicleColor"/>
/// <remarks>GetPlayerColor will return <b><c>0</c></b> unless <a href="#SetPlayerColor">SetPlayerColor</a> has been used first.</remarks>
/// <returns>The player's color. <b><c>0</c></b> if no color set or player not connected.</returns>
NATIVE__ GetPlayerColor(playerid) \
    = Player_GetColour(Player:playerid);

/// <summary>Set the skin of a player. A player's skin is their character model.</summary>
/// <param name="playerid">The ID of the player to set the skin of</param>
/// <param name="skinid">The <a href="http://wiki.sa-mp.com/wiki/Skins">skin</a> the player should use</param>
/// <seealso name="GetPlayerSkin"/>
/// <seealso name="SetSpawnInfo"/>
/// <remarks>If a player's skin is set when they are crouching, in a vehicle, or performing certain animations, they will become frozen or otherwise glitched. This can be fixed by using <a href="#TogglePlayerControllable">TogglePlayerControllable</a>. Players can be detected as being crouched through <a href="#GetPlayerSpecialAction">GetPlayerSpecialAction</a> (<b><c>SPECIAL_ACTION_DUCK</c></b>).</remarks>
/// <remarks>Setting a player's skin when he is dead may crash players around him.</remarks>
/// <remarks>Note that 'success' is reported even when skin ID is invalid (not <b><c>0</c></b>-<b><c>311</c></b>, or <b><c>74</c></b>), but the skin will be set to ID <b><c>0</c></b> (CJ).</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player specified does not exist.<p/>
/// </returns>
NATIVE__ SetPlayerSkin(playerid, skinid) \
    = bool:Player_SetSkin(Player:playerid, skinid);

/// <summary>Returns the class of the players skin.</summary>
/// <param name="playerid">The player you want to get the skin from</param>
/// <seealso name="SetPlayerSkin"/>
/// <remarks>Returns the new skin after <a href="#SetSpawnInfo">SetSpawnInfo</a> is called but before the player actually respawns to get the new skin. </remarks>
/// <remarks>Returns the old skin if the player was spawned through <a href="#SpawnPlayer">SpawnPlayer</a> function. </remarks>
/// <returns>The skin id (<b><c>0</c></b> if invalid).</returns>
NATIVE__ GetPlayerSkin(playerid) \
    = Player_GetSkin(Player:playerid);

NATIVE__ GetPlayerCustomSkin(playerid) \
    = Player_GetCustomSkin(Player:playerid);

/// <summary>Sets the name of a player.</summary>
/// <param name="playerid">The ID of the player to set the name of</param>
/// <param name="name">The name to set. Must be 1-24 characters long and only contain valid characters (<b>0-9</b>, <b>a-z</b>, <b>A-Z</b>, <b>[]</b>, <b>()</b>, <b>$</b>, <b>@</b>, <b>.</b>, <b>_</b>, <b>=</b>)</param>
/// <seealso name="GetPlayerName"/>
/// <remarks>Changing the players' name to the same name but with different character cases (e.g. "John" to "JOHN") will not work. </remarks>
/// <remarks>If used in <a href="#OnPlayerConnect">OnPlayerConnect</a>, the new name will <b>not</b> be shown for the connecting player. </remarks>
/// <remarks>Passing a null string as the new name will crash the server. </remarks>
/// <remarks>Player names can be up to 24 characters when using this function, but when joining the server from the SA-MP server browser, players' names must be no more than 20 and less than 3 characters (the server will deny entry). This allows for 4 characters extra when using <a href="#SetPlayerName">SetPlayerName</a>. </remarks>
/// <returns>
///   <b><c>1</c></b> The name was changed successfully.<p/>
///   <b><c>0</c></b> The player already has that name.<p/>
///   <b><c>-1</c></b> The name can not be changed (it's already in use, too long or has invalid characters).
/// </returns>
NATIVE__ SetPlayerName(playerid, const name[]) \
    = bool:Player_SetName(Player:playerid, const name[]);

/// <summary>Get a player's name.</summary>
/// <param name="playerid">The ID of the player to get the name of</param>
/// <param name="name">An array into which to store the name, passed by reference</param>
/// <param name="len">The length of the string that should be stored. Recommended to be <b><c>MAX_PLAYER_NAME</c></b></param>
/// <seealso name="SetPlayerName"/>
/// <seealso name="GetPlayerIp"/>
/// <seealso name="GetPlayerPing"/>
/// <seealso name="GetPlayerScore"/>
/// <seealso name="GetPlayerVersion"/>
/// <remarks>A player's name can be up to 24 characters long (as of <b>0.3d R2</b>) by using <a href="#SetPlayerName">SetPlayerName</a>. This is defined in <c>a_samp.inc</c> as <b><c>MAX_PLAYER_NAME</c></b>. However, the client can only join with a nickname between 3 and 20 characters, otherwise the connection will be rejected and the player has to quit to choose a valid name.</remarks>
/// <returns>The length of the player's name. <b><c>0</c></b> if player specified doesn't exist.</returns>
NATIVE__ GetPlayerName(playerid, name[], len = sizeof name) \
    = bool:Player_GetName(Player:playerid, name[], size = sizeof(name));

/// <summary>Give a player a weapon with a specified amount of ammo.</summary>
/// <param name="playerid">The ID of the player to give a weapon to</param>
/// <param name="weaponid">The ID of the weapon to give to the player</param>
/// <param name="ammo">The amount of ammo to give to the player</param>
/// <seealso name="SetPlayerArmedWeapon"/>
/// <seealso name="GetPlayerWeapon"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.<p/>
/// </returns>
NATIVE__ GivePlayerWeapon(playerid, weaponid, ammo) \
    = bool:Player_GiveWeapon(Player:playerid, weaponid, ammo);

/// <summary>Removes all weapons from a player.</summary>
/// <param name="playerid">The ID of the player whose weapons to remove</param>
/// <seealso name="GivePlayerWeapon"/>
/// <seealso name="GetPlayerWeapon"/>
/// <remarks>To remove individual weapons from a player, set their ammo to <b><c>0</c></b> using <a href="#SetPlayerAmmo">SetPlayerAmmo</a>.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player specified does not exist.
/// </returns>
NATIVE__ ResetPlayerWeapons(playerid) \
    = bool:Player_ResetWeapons(Player:playerid);

/// <summary>Sets which weapon (that a player already has) the player is holding.</summary>
/// <param name="playerid">The ID of the player to arm with a weapon</param>
/// <param name="weaponid">The ID of the weapon that the player should be armed with</param>
/// <seealso name="GivePlayerWeapon"/>
/// <seealso name="GetPlayerWeapon"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>This function arms a player with a weapon they <b>already have</b>; it does not give them a new weapon. See <a href="#GivePlayerWeapon">GivePlayerWeapon</a>.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully. Success is returned even when the function fails to execute (the player doesn't have the weapon specified, or it is an invalid weapon).<p/>
///   <b><c>0</c></b>: The function failed to execute. The player is not connected.
/// </returns>
NATIVE__ SetPlayerArmedWeapon(playerid, weaponid) \
    = bool:Player_SetArmedWeapon(Player:playerid, weaponid);

/// <summary>Get the weapon and ammo in a specific player's weapon slot (e.g. the weapon in the 'SMG' slot).</summary>
/// <param name="playerid">The ID of the player whose weapon data to retrieve</param>
/// <param name="slot">The weapon slot to get data for (<b><c>0-12</c></b>)</param>
/// <param name="weapons">A variable in which to store the weapon ID, passed by reference</param>
/// <param name="ammo">A variable in which to store the ammo, passed by reference</param>
/// <seealso name="GetPlayerWeapon"/>
/// <seealso name="GivePlayerWeapon"/>
/// <remarks>Old weapons with no ammo left are still returned.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player isn't connected and/or the weapon slot specified is invalid (valid is <b><c>0-12</c></b>).
/// </returns>
NATIVE__ GetPlayerWeaponData(playerid, slot, &weapons, &ammo) \
    = bool:Player_GetWeaponData(Player:playerid, weaponSlot, &weaponid, &ammo);

/// <summary>Give money to or take money from a player.</summary>
/// <param name="playerid">The ID of the player to give money to or take money from</param>
/// <param name="money">The amount of money to give the player. Use a minus value to take money</param>
/// <seealso name="ResetPlayerMoney"/>
/// <seealso name="GetPlayerMoney"/>
/// <seealso name="SetPlayerMoney"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
NATIVE__ GivePlayerMoney(playerid, money) \
	= bool:Player_GiveMoney(Player:playerid, money);

/// <summary>Retrieves the amount of money a player has.</summary>
/// <param name="playerid">The ID of the player to get the money of</param>
/// <seealso name="GivePlayerMoney"/>
/// <seealso name="ResetPlayerMoney"/>
/// <seealso name="SetPlayerMoney"/>
/// <returns>The amount of money the player has.</returns>
NATIVE__ GetPlayerMoney(playerid) \
	= Player_GetMoney(Player:playerid);

/// <summary>Sets the amount of money a player has.</summary>
/// <param name="playerid">The ID of the player to set the money of</param>
/// <param name="money">The amount to set their money to</param>
/// <seealso name="GivePlayerMoney"/>
/// <seealso name="ResetPlayerMoney"/>
/// <seealso name="GetPlayerMoney"/>
/// <returns>The amount of money the player has.</returns>
NEW_NATIVE__ bool:Player_SetMoney(Player:playerid, money)
	return !!GivePlayerMoney(_:playerid, money - GetPlayerMoney(_:playerid));

/// <summary>Reset a player's money to $0.</summary>
/// <param name="playerid">The ID of the player to reset the money of</param>
/// <seealso name="GetPlayerMoney"/>
/// <seealso name="GivePlayerMoney"/>
/// <seealso name="SetPlayerMoney"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
OLD_NATIVE__ ResetPlayerMoney(playerid)
	return _:Player_SetMoney(playerid, 0);

/// <summary>Get a player's current state.</summary>
/// <param name="playerid">The ID of the player to get the current state of</param>
/// <seealso name="GetPlayerSpecialAction"/>
/// <seealso name="SetPlayerSpecialAction"/>
/// <seealso name="OnPlayerStateChange"/>
/// <remarks>
///   <b>States:</b><p/>
///   <ul>
///     <li><b><c>PLAYER_STATE_NONE</c></b> - empty (while initializing)</li>
///     <li><b><c>PLAYER_STATE_ONFOOT</c></b> - player is on foot</li>
///     <li><b><c>PLAYER_STATE_DRIVER</c></b> - player is the driver of a vehicle</li>
///     <li><b><c>PLAYER_STATE_PASSENGER</c></b> - player is passenger of a vehicle</li>
///     <li><b><c>PLAYER_STATE_WASTED</c></b> - player is dead or on class selection</li>
///     <li><b><c>PLAYER_STATE_SPAWNED</c></b> - player is spawned</li>
///     <li><b><c>PLAYER_STATE_SPECTATING</c></b> - player is spectating</li>
///     <li><b><c>PLAYER_STATE_EXIT_VEHICLE</c></b> - player exits a vehicle</li>
///     <li><b><c>PLAYER_STATE_ENTER_VEHICLE_DRIVER</c></b> - player enters a vehicle as driver</li>
///     <li><b><c>PLAYER_STATE_ENTER_VEHICLE_PASSENGER</c></b> - player enters a vehicle as passenger </li>
///   </ul>
/// </remarks>
/// <returns>The player's current state as an integer.</returns>
NATIVE__ GetPlayerState(playerid) \
	= PlayerState:Player_GetState(Player:playerid);

/// <summary>Get the specified player's IP address and store it in a string.</summary>
/// <param name="playerid">The ID of the player to get the IP address of</param>
/// <param name="ip">An array into which to store the player's IP address, passed by reference</param>
/// <param name="len">The maximum length of the IP address (recommended 16)</param>
/// <seealso name="NetStats_GetIpPort"/>
/// <seealso name="GetPlayerName"/>
/// <seealso name="GetPlayerPing"/>
/// <seealso name="GetPlayerVersion"/>
/// <seealso name="OnIncomingConnection"/>
/// <seealso name="OnPlayerConnect"/>
/// <seealso name="OnPlayerDisconnect"/>
/// <remarks>This function does not work when used in <a href="#OnPlayerDisconnect">OnPlayerDisconnect</a> because the player is already disconnected. It will return an invalid IP (<b><c>255.255.255.255</c></b>). Save players' IPs under <a href="#OnPlayerConnect">OnPlayerConnect</a> if they need to be used under <a href="#OnPlayerDisconnect">OnPlayerDisconnect</a>. </remarks>
/// <returns><b><c>1</c></b> on success and <b><c>0</c></b> on failure.</returns>
NATIVE__ GetPlayerIp(playerid, ip[], len = sizeof ip) \
	= bool:Player_GetIP(Player:playerid, ip[], len = sizeof ip);

/// <summary>Get the ping of a player. The ping measures the amount of time it takes for the server to 'ping' the client and for the client to send the message back.</summary>
/// <param name="playerid">The ID of the player to get the ping of</param>
/// <seealso name="GetPlayerIp"/>
/// <seealso name="GetPlayerName"/>
/// <seealso name="GetPlayerVersion"/>
/// <remarks>Player's ping may be <b><c>65535</c></b> for a while after a player connects</remarks>
/// <returns>The current ping of the player (expressed in milliseconds).</returns>
NATIVE__ GetPlayerPing(playerid) \
	= Player_GetPing(Player:playerid);

/// <summary>Check which keys a player is pressing.</summary>
/// <param name="playerid">The ID of the player to get the keys of</param>
/// <param name="keys">Bitmask containing the player's key states. <a href="http://wiki.sa-mp.com/wiki/Keys">List of keys</a></param>
/// <param name="updown">Up/down state</param>
/// <param name="leftright">Left/right state</param>
/// <seealso name="OnPlayerKeyStateChange"/>
/// <remarks>Only the FUNCTION of keys can be detected; not actual keys. For example, it is not possible to detect if a player presses <b>SPACE</b>, but you can detect if they press <b>SPRINT</b> (which can be mapped (assigned/binded) to ANY key (but is space by default)). </remarks>
/// <remarks>As of update <b>0.3.7</b>, the keys "A" and "D" are not recognized when in a vehicle. However, keys "W" and "S" can be detected with the "keys" parameter. </remarks>
/// <returns>The keys are stored in the specified variables.</returns>
NATIVE__ GetPlayerKeys(playerid, &keys, &updown, &leftright) \
	= bool:Player_GetActions(Player:playerid, &actions, &updown, &leftright);

/// <summary>Sets the game time for a player. If a player's clock is enabled (<a href="#TogglePlayerClock">TogglePlayerClock</a>) the time displayed by it will update automatically.</summary>
/// <param name="playerid">The ID of the player to set the game time of</param>
/// <param name="hour">Hour to set (0-23)</param>
/// <param name="minute">Minutes to set (0-59)</param>
/// <seealso name="SetWorldTime"/>
/// <seealso name="GetPlayerTime"/>
/// <seealso name="TogglePlayerClock"/>
/// <remarks>Using this function under <a href="#OnPlayerConnect">OnPlayerConnect</a> doesn't work.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified does not exist.
/// </returns>
NATIVE__ SetPlayerTime(playerid, hour, minute) \
	= bool:Player_SetTime(Player:playerid, hour, minute);

/// <summary>Get the player's current game time. Set by <a href="#SetWorldTime">SetWorldTime</a> or <a href="#SetPlayerTime">SetPlayerTime</a>, or by the game automatically if <a href="#TogglePlayerClock">TogglePlayerClock</a> is used.</summary>
/// <param name="playerid">The ID of the player to get the game time of</param>
/// <param name="hour">A variable in which to store the hour, passed by reference</param>
/// <param name="minute">A variable in which to store the minutes, passed by reference</param>
/// <seealso name="SetPlayerTime"/>
/// <seealso name="SetWorldTime"/>
/// <seealso name="TogglePlayerClock"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified does not exist.<p/>
/// </returns>
NATIVE__ GetPlayerTime(playerid, &hour, &minute) \
	= bool:Player_GetTime(Player:playerid, &hour, &minute);

/// <summary>Toggle the in-game clock (top-right corner) for a specific player. When this is enabled, time will progress at 1 minute per second. Weather will also interpolate (slowly change over time) when set using <a href="#SetWeather">SetWeather</a>/<a href="#SetPlayerWeather">SetPlayerWeather</a>.</summary>
/// <param name="playerid">The player whose clock you want to enable/disable</param>
/// <param name="toggle"><b><c>1</c></b> to show and <b><c>0</c></b> to hide. Hidden by default</param>
/// <remarks>Time is not synced with other players! Time can be synced using <a href="#SetPlayerTime">SetPlayerTime</a>.</remarks>
/// <remarks>Time will automatically advance 6 hours when the player dies.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The specified player does not exist.
/// </returns>
NATIVE__ TogglePlayerClock(playerid, toggle) \
	= bool:Player_ToggleClock(Player:playerid, bool:show);

/// <summary>Set a player's weather.</summary>
/// <param name="playerid">The ID of the player whose weather to set</param>
/// <param name="weather">The <a href="http://wiki.sa-mp.com/wiki/WeatherID">weather</a> to set</param>
/// <seealso name="SetWeather"/>
/// <seealso name="SetGravity"/>
/// <remarks>If <a href="#TogglePlayerClock">TogglePlayerClock</a> is enabled, weather will slowly change over time, instead of changing instantly.</remarks>
NATIVE__ SetPlayerWeather(playerid, weather) \
	= bool:Player_SetWeather(Player:playerid, weather);

NEW_NATIVE__ Player_GetWeather(Player:playerid);

/// <summary>Forces a player to go back to class selection.</summary>
/// <param name="playerid">The player to send back to class selection</param>
/// <seealso name="AddPlayerClass"/>
/// <seealso name="SetPlayerSkin"/>
/// <seealso name="GetPlayerSkin"/>
/// <seealso name="OnPlayerRequestClass"/>
/// <remarks>The player will not return to class selection until they re-spawn. This can be achieved with <a href="#TogglePlayerSpectating">TogglePlayerSpectating</a>, as seen in the below example.</remarks>
NATIVE__ ForceClassSelection(playerid) \
	= bool:Player_ForceClassSelection(Player:playerid);

/// <summary>Set a player's wanted level (6 brown stars under HUD).</summary>
/// <param name="playerid">The ID of the player to set the wanted level of</param>
/// <param name="level">The wanted level to set for the player (0-6)</param>
/// <seealso name="GetPlayerWantedLevel"/>
/// <seealso name="PlayCrimeReportForPlayer"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified does not exist.
/// </returns>
NATIVE__ SetPlayerWantedLevel(playerid, level) \
	= bool:Player_SetWantedLevel(Player:playerid, wantedLevel);

/// <summary>Gets the wanted level of a player.</summary>
/// <param name="playerid">The ID of the player that you want to get the wanted level of</param>
/// <seealso name="SetPlayerWantedLevel"/>
/// <seealso name="PlayCrimeReportForPlayer"/>
/// <returns>The player's wanted level.</returns>
NATIVE__ GetPlayerWantedLevel(playerid) \
	= Player_GetWantedLevel(Player:playerid);

/// <summary>Set a player's special fighting style. To use in-game, aim and press the 'secondary attack' key (<b>ENTER</b> by default).</summary>
/// <param name="playerid">The ID of player to set the fighting style of</param>
/// <param name="style">The fighting style that should be set</param>
/// <seealso name="GetPlayerFightingStyle"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>This does not affect normal fist attacks - only special/secondary attacks (aim + press 'secondary attack' key).</remarks>
/// <remarks>
///   <b>Fighting styles:</b><p/>
///   <ul>
///     <li><b><c>FIGHT_STYLE_NORMAL</c></b></li>
///     <li><b><c>FIGHT_STYLE_BOXING</c></b></li>
///     <li><b><c>FIGHT_STYLE_KUNGFU</c></b></li>
///     <li><b><c>FIGHT_STYLE_KNEEHEAD</c></b></li>
///     <li><b><c>FIGHT_STYLE_GRABKICK</c></b></li>
///     <li><b><c>FIGHT_STYLE_ELBOW</c></b></li>
///   </ul>
/// </remarks>
NATIVE__ SetPlayerFightingStyle(playerid, {FightingStyle, _}:style) \
	= bool:Player_SetFightingStyle(Player:playerid, FightingStyle:fightingStyle);

/// <summary>Get the fighting style the player currently using.</summary>
/// <param name="playerid">The ID of the player to get the fighting style of</param>
/// <seealso name="SetPlayerFightingStyle"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>
///   <b>Fighting styles:</b><p/>
///   <ul>
///     <li><b><c>FIGHT_STYLE_NORMAL</c></b></li>
///     <li><b><c>FIGHT_STYLE_BOXING</c></b></li>
///     <li><b><c>FIGHT_STYLE_KUNGFU</c></b></li>
///     <li><b><c>FIGHT_STYLE_KNEEHEAD</c></b></li>
///     <li><b><c>FIGHT_STYLE_GRABKICK</c></b></li>
///     <li><b><c>FIGHT_STYLE_ELBOW</c></b></li>
///   </ul>
/// </remarks>
/// <returns>The ID of the fighting style of the player.</returns>
NATIVE__ GetPlayerFightingStyle(playerid) \
	= FightingStyle:Player_GetFightingStyle(Player:playerid);

/// <summary>Set a player's velocity on the X, Y and Z axes.</summary>
/// <param name="playerid">The player to apply the speed to</param>
/// <param name="X">The velocity (speed) on the X axis</param>
/// <param name="Y">The velocity (speed) on the Y axis</param>
/// <param name="Z">The velocity (speed) on the Z axis</param>
/// <seealso name="GetPlayerVelocity"/>
/// <seealso name="SetVehicleVelocity"/>
/// <seealso name="GetVehicleVelocity"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
NATIVE__ SetPlayerVelocity(playerid, Float:X, Float:Y, Float:Z) \
    = bool:Player_SetVelocity(Player:playerid, Float:velocityX, Float:velocityY, Float:velocityZ);

/// <summary>Get the velocity (speed) of a player on the X, Y and Z axes.</summary>
/// <param name="playerid">The player to get the speed from</param>
/// <param name="X">A float variable in which to store the velocity on the X axis, passed by reference</param>
/// <param name="Y">A float variable in which to store the velocity on the Y axis, passed by reference</param>
/// <param name="Z">A float variable in which to store the velocity on the Z axis, passed by reference</param>
/// <seealso name="SetPlayerVelocity"/>
/// <seealso name="SetVehicleVelocity"/>
/// <seealso name="GetVehicleVelocity"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
NATIVE__ GetPlayerVelocity(playerid, &Float:X, &Float:Y, &Float:Z) \
    = bool:Player_GetVelocity(Player:playerid, &Float:velocityX, &Float:velocityY, &Float:velocityZ);

/// <summary>This function plays a crime report for a player - just like in single-player when CJ commits a crime.</summary>
/// <param name="playerid">The ID of the player that will hear the crime report</param>
/// <param name="suspectid">The ID of the suspect player whom will be described in the crime report</param>
/// <param name="crime">The crime ID, which will be reported as a 10-code (i.e. 10-16 if 16 was passed as the crime)</param>
/// <seealso name="PlayerPlaySound"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>
///   <b>Crime list:</b><p/>
///   <ul>
///     <li><b><c>3</c></b> 10-71 Advise nature of fire (size, type, contents of building)</li>
///     <li><b><c>4</c></b> 10-47 Emergency road repairs needed</li>
///     <li><b><c>5</c></b> 10-81 Breatherlizer Report</li>
///     <li><b><c>6</c></b> 10-24 Assignment Completed</li>
///     <li><b><c>7</c></b> 10-21 Call () by phone</li>
///     <li><b><c>8</c></b> 10-21 Call () by phone</li>
///     <li><b><c>9</c></b> 10-21 Call () by phone</li>
///     <li><b><c>10</c></b> 10-17 Meet Complainant</li>
///     <li><b><c>11</c></b> 10-81 Breatherlizer Report</li>
///     <li><b><c>12</c></b> 10-91 Pick up prisoner/subject</li>
///     <li><b><c>13</c></b> 10-28 Vehicle registration information</li>
///     <li><b><c>14</c></b> 10-81 Breathalyzer</li>
///     <li><b><c>15</c></b> 10-28 Vehicle registration information</li>
///     <li><b><c>16</c></b> 10-91 Pick up prisoner/subject</li>
///     <li><b><c>17</c></b> 10-34 Riot</li>
///     <li><b><c>18</c></b> 10-37 (Investigate) suspicious vehicle</li>
///     <li><b><c>19</c></b> 10-81 Breathalyzer</li>
///     <li><b><c>21</c></b> 10-7 Out of service</li>
///     <li><b><c>22</c></b> 10-7 Out of service </li>
///   </ul>
/// </remarks>
NATIVE__ PlayCrimeReportForPlayer(playerid, suspectid, crime) \
	= bool:Player_PlayCrimeReport(Player:playerid, Player:suspectid, crime);

/// <summary>Play an 'audio stream' for a player. Normal audio files also work (e.g. MP3).</summary>
/// <param name="playerid">The ID of the player to play the audio for</param>
/// <param name="url">The url to play. Valid formats are mp3 and ogg/vorbis. A link to a .pls (playlist) file will play that playlist</param>
/// <param name="posX">The X position at which to play the audio. Has no effect unless usepos is set to 1 (optional=<b><c>0.0</c></b>)</param>
/// <param name="posY">The Y position at which to play the audio. Has no effect unless usepos is set to 1 (optional=<b><c>0.0</c></b>)</param>
/// <param name="posZ">The Z position at which to play the audio. Has no effect unless usepos is set to 1 (optional=<b><c>0.0</c></b>)</param>
/// <param name="distance">The distance over which the audio will be heard. Has no effect unless usepos is set to 1 (optional=<b><c>50.0</c></b>)</param>
/// <param name="usepos">Use the positions and distance specified. (optional=<b><c>0</c></b>)</param>
/// <seealso name="StopAudioStreamForPlayer"/>
/// <seealso name="PlayerPlaySound"/>
/// <remarks>This function was added in <b>SA-MP 0.3d</b> and will not work in earlier versions!</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified does not exist.
/// </returns>
NATIVE__ PlayAudioStreamForPlayer(playerid, const url[], Float:posX = 0.0, Float:posY = 0.0, Float:posZ = 0.0, Float:distance = 50.0, usepos = 0) \
	= bool:Player_PlayAudioStream(Player:playerid, const url[], Float:posX = 0.0, Float:posY = 0.0, Float:posZ = 0.0, Float:audibleRadius = 50.0, bool:usepos = false);

/// <summary>Stops the current audio stream for a player.</summary>
/// <param name="playerid">The player you want to stop the audio stream for</param>
/// <seealso name="PlayAudioStreamForPlayer"/>
/// <seealso name="PlayerPlaySound"/>
/// <remarks>This function was added in <b>SA-MP 0.3d</b> and will not work in earlier versions!</remarks>
NATIVE__ StopAudioStreamForPlayer(playerid) \
	= bool:Player_StopAudioStream(Player:playerid);

/// <summary>Loads or unloads an interior script for a player (for example the ammunation menu).</summary>
/// <param name="playerid">The ID of the player to load the interior script for</param>
/// <param name="shopname">The shop script to load. Leave blank ("") to unload scripts</param>
/// <seealso name="DisableInteriorEnterExits"/>
/// <seealso name="SetPlayerInterior"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>This function does not support casino scripts.</remarks>
/// <remarks>
///   <b>Shop names:</b><p/>
///   <ul>
///     <li><b><c>"FDPIZA"</c></b> Pizza Stack</li>
///     <li><b><c>"FDBURG"</c></b> Burger Shot</li>
///     <li><b><c>"FDCHICK"</c></b>Cluckin' Bell</li>
///     <li><b><c>"AMMUN1"</c></b> Ammunation 1</li>
///     <li><b><c>"AMMUN2"</c></b> Ammunation 2</li>
///     <li><b><c>"AMMUN3"</c></b> Ammunation 3</li>
///     <li><b><c>"AMMUN4"</c></b> Ammunation 4</li>
///     <li><b><c>"AMMUN5"</c></b> Ammunation 5</li>
///   </ul>
/// </remarks>
NATIVE__ SetPlayerShopName(playerid, const shopname[]) \
	= bool:Player_SetShopName(Player:playerid, const shopname[]);

/// <summary>Set the skill level of a certain weapon type for a player.</summary>
/// <param name="playerid">The ID of the player to set the weapon skill of</param>
/// <param name="skill">The weapon to set the skill of</param>
/// <param name="level">The skill level to set for that weapon, ranging from <b><c>0</c></b> to <b><c>999</c></b>. A level out of range will max it out</param>
/// <seealso name="SetPlayerArmedWeapon"/>
/// <seealso name="GivePlayerWeapon"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>
///   <b>Weapon skills:</b><p/>
///   <ul>
///     <li><b><c>WEAPONSKILL_PISTOL(0)</c></b></li>
///     <li><b><c>WEAPONSKILL_PISTOL_SILENCED(1)</c></b></li>
///     <li><b><c>WEAPONSKILL_DESERT_EAGLE(2)</c></b></li>
///     <li><b><c>WEAPONSKILL_SHOTGUN(3)</c></b></li>
///     <li><b><c>WEAPONSKILL_SAWNOFF_SHOTGUN(4)</c></b></li>
///     <li><b><c>WEAPONSKILL_SPAS12_SHOTGUN(5)</c></b></li>
///     <li><b><c>WEAPONSKILL_MICRO_UZI(6)</c></b></li>
///     <li><b><c>WEAPONSKILL_MP5(7)</c></b></li>
///     <li><b><c>WEAPONSKILL_AK47(8)</c></b></li>
///     <li><b><c>WEAPONSKILL_M4(9)</c></b></li>
///     <li><b><c>WEAPONSKILL_SNIPERRIFLE(10)</c></b></li>
///   </ul>
/// </remarks>
NATIVE__ SetPlayerSkillLevel(playerid, {WeaponSkill, _}:skill, level) \
	= bool:Player_SetSkillLevel(Player:playerid, WeaponSkill:skill, level);

NEW_NATIVE__ Player_GetSkillLevel(Player:playerid, {WeaponSkill, _}:skill);

/// <summary>Get the ID of the vehicle that the player is surfing (stuck to the roof of).</summary>
/// <param name="playerid">The ID of the player you want to know the surfing vehicle ID of</param>
/// <seealso name="Player_GetVehicleID"/>
/// <seealso name="Player_GetVehicleSeat"/>
/// <returns>The ID of the vehicle that the player is surfing. If they are not surfing a vehicle or the vehicle they are surfing has no driver, <b><c>INVALID_VEHICLE_ID</c></b>. If the player specified is not connected, <b><c>INVALID_VEHICLE_ID</c></b> also.</returns>
NEW_NATIVE__ bool:Player_TryGetSurfedVehicle(Player:playerid, &Vehicle:targetid)
	return (targetid = Vehicle:GetPlayerSurfingVehicleID(_:playerid)) != (Vehicle:INVALID_VEHICLE_ID);

/// <summary>Get the ID of the vehicle that the player is surfing (stuck to the roof of).</summary>
/// <param name="playerid">The ID of the player you want to know the surfing vehicle ID of</param>
/// <seealso name="GetPlayerVehicleID"/>
/// <seealso name="GetPlayerVehicleSeat"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <returns>The ID of the vehicle that the player is surfing. If they are not surfing a vehicle or the vehicle they are surfing has no driver, <b><c>INVALID_VEHICLE_ID</c></b>. If the player specified is not connected, <b><c>INVALID_VEHICLE_ID</c></b> also.</returns>
OLD_NATIVE__ GetPlayerSurfingVehicleID(playerid) \
	return Player_TryGetSurfedVehicle(Playerid:playerid, Vehicle:playerid) ? (_:playerid) : (_:INVALID_VEHICLE_ID);

stock Vehicle:Player_GetSurfedVehicle(Player:playerid)
	return Player_TryGetSurfedVehicle(playerid, Vehicle:playerid) ? (Vehicle:playerid) : (Vehicle:INVALID_VEHICLE_ID);

/// <summary>Returns the ID of the object the player is surfing on.</summary>
/// <param name="playerid">The ID of the player surfing the object</param>
/// <returns>The ID of the <b>moving</b> object the player is surfing. If the player isn't surfing a <b>moving</b> object, it will return <b><c>INVALID_OBJECT_ID</c></b>.</returns>
NEW_NATIVE__ bool:Player_TryGetSurfedObject(Player:playerid, &Object:targetid)
	return (targetid = Object:GetPlayerSurfingObjectID(_:playerid)) != (Object:INVALID_OBJECT_ID);

/// <summary>Returns the ID of the object the player is surfing on.</summary>
/// <param name="playerid">The ID of the player surfing the object</param>
/// <remarks>This function was added in <b>SA-MP 0.3c R3</b> and will not work in earlier versions!</remarks>
/// <returns>The ID of the <b>moving</b> object the player is surfing. If the player isn't surfing a <b>moving</b> object, it will return <b><c>INVALID_OBJECT_ID</c></b>.</returns>
OLD_NATIVE__ GetPlayerSurfingObjectID(playerid) \
	return Player_TryGetSurfedObject(Playerid:playerid, Object:playerid) ? (_:playerid) : (_:INVALID_OBJECT_ID);

stock Object:Player_GetSurfedObject(Player:playerid)
	return Player_TryGetSurfedObject(playerid, Object:playerid) ? (Object:playerid) : (Object:INVALID_OBJECT_ID);

/// <summary>Removes a standard San Andreas model for a single player within a specified range.</summary>
/// <param name="playerid">The ID of the player to remove the objects for</param>
/// <param name="modelid">The model to remove</param>
/// <param name="fX">The X coordinate around which the objects will be removed</param>
/// <param name="fY">The Y coordinate around which the objects will be removed</param>
/// <param name="fZ">The Z coordinate around which the objects will be removed</param>
/// <param name="fRadius">The radius around the specified point to remove objects with the specified model</param>
/// <seealso name="DestroyObject"/>
/// <seealso name="DestroyPlayerObject"/>
/// <remarks>This function was added in <b>SA-MP 0.3d</b> and will not work in earlier versions!</remarks>
/// <remarks>There appears to be a limit of around <b><c>1000</c></b> lines/objects. There is no workaround. </remarks>
/// <remarks>When removing the same object for a player, they will crash. Commonly, players crash when reconnecting to the server because the server removes buildings on <a href="#OnPlayerConnect">OnPlayerConnect</a>. </remarks>
/// <remarks>In <b>SA-MP 0.3.7</b> you can use <b><c>-1</c></b> for the modelid to remove all objects within the specified radius.</remarks>
NATIVE__ RemoveBuildingForPlayer(playerid, modelid, Float:fX, Float:fY, Float:fZ, Float:fRadius) \
	= bool:Player_RemoveBuilding(Player:playerid, modelid, Float:searchCentreX, Float:searchCentreY, Float:searchCentreZ, Float:searchRadius);

/// <summary>Retrieves the start and end (hit) position of the last bullet a player fired.</summary>
/// <param name="playerid">The ID of the player to get the last bullet shot information of</param>
/// <param name="fOriginX">A float variable in which to save the X coordinate of where the bullet originated from</param>
/// <param name="fOriginY">A float variable in which to save the Y coordinate of where the bullet originated from</param>
/// <param name="fOriginZ">A float variable in which to save the Z coordinate of where the bullet originated from</param>
/// <param name="fHitPosX">A float variable in which to save the X coordinate of where the bullet hit</param>
/// <param name="fHitPosY">A float variable in which to save the Y coordinate of where the bullet hit</param>
/// <param name="fHitPosZ">A float variable in which to save the Z coordinate of where the bullet hit</param>
/// <seealso name="GetPlayerWeaponData"/>
/// <seealso name="GetPlayerWeapon"/>
/// <seealso name="VectorSize"/>
/// <seealso name="OnPlayerWeaponShot"/>
/// <remarks>This function was added in <b>SA-MP 0.3z</b> and will not work in earlier versions!</remarks>
/// <remarks>This function will only work when <a href="http://wiki.sa-mp.com/wiki/Lag_Compensation">lag compensation</a> is <b>enabled</b>. </remarks>
/// <remarks>If the player hit nothing, the hit positions will be <b><c>0</c></b>. This means you can't currently calculate how far a bullet travels through open air. </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified does not exist.<p/>
/// </returns>
NATIVE__ GetPlayerLastShotVectors(playerid, &Float:fOriginX, &Float:fOriginY, &Float:fOriginZ, &Float:fHitPosX, &Float:fHitPosY, &Float:fHitPosZ) \
	= bool:Player_GetLastShotVectors(Player:playerid, &Float:fOriginX, &Float:fOriginY, &Float:fOriginZ, &Float:fHitPosX, &Float:fHitPosY, &Float:fHitPosZ);

/// <summary>Attach an object to a specific bone on a player.</summary>
/// <param name="playerid">The ID of the player to attach the object to</param>
/// <param name="index">The index (slot) to assign the object to (0-9 since 0.3d, 0-4 in previous versions)</param>
/// <param name="modelid">The <a href="http://wiki.sa-mp.com/wiki/Objects">model</a> to attach</param>
/// <param name="bone">The bone to attach the object to</param>
/// <param name="fOffsetX">X axis offset for the object position (optional=<b><c>0.0</c></b>)</param>
/// <param name="fOffsetY">Y axis offset for the object position (optional=<b><c>0.0</c></b>)</param>
/// <param name="fOffsetZ">Z axis offset for the object position (optional=<b><c>0.0</c></b>)</param>
/// <param name="fRotX">X axis rotation of the object (optional=<b><c>0.0</c></b>)</param>
/// <param name="fRotY">Y axis rotation of the object (optional=<b><c>0.0</c></b>)</param>
/// <param name="fRotZ">Z axis rotation of the object (optional=<b><c>0.0</c></b>)</param>
/// <param name="fScaleX">X axis scale of the object (optional=<b><c>1.0</c></b>)</param>
/// <param name="fScaleY">Y axis scale of the object (optional=<b><c>1.0</c></b>)</param>
/// <param name="fScaleZ">Z axis scale of the object (optional=<b><c>1.0</c></b>)</param>
/// <param name="materialcolor1">The first object color to set <b>ARGB</b> (optional=<b><c>0</c></b>)</param>
/// <param name="materialcolor2">The second object color to set <b>ARGB</b> (optional=<b><c>0</c></b>)</param>
/// <seealso name="RemovePlayerAttachedObject"/>
/// <seealso name="IsPlayerAttachedObjectSlotUsed"/>
/// <seealso name="EditAttachedObject"/>
/// <remarks>This function was added in <b>SA-MP 0.3c</b> and will not work in earlier versions!</remarks>
/// <remarks>In version <b>0.3d</b> and onwards, <b><c>10</c></b> objects can be attached to a single player (index <b><c>0</c></b>-<b><c>9</c></b>). In earlier versions, the limit is <b><c>5</c></b> (index <b><c>0</c></b>-<b><c>4</c></b>).</remarks>
/// <remarks>This function is separate from the <a href="#CreateObject">CreateObject</a> / <a href="#CreatePlayerObject">CreatePlayerObject</a> pools.</remarks>
/// <remarks>
///   <b>Bone IDs:</b><p/>
///   <ul>
///     <li><b><c>1</c></b> - spine</li>
///     <li><b><c>2</c></b> - head</li>
///     <li><b><c>3</c></b> - left upper arm</li>
///     <li><b><c>4</c></b> - right upper arm</li>
///     <li><b><c>5</c></b> - left hand</li>
///     <li><b><c>6</c></b> - right hand</li>
///     <li><b><c>7</c></b> - left thigh</li>
///     <li><b><c>8</c></b> - right thigh</li>
///     <li><b><c>9</c></b> - left foot</li>
///     <li><b><c>10</c></b> - right foot</li>
///     <li><b><c>11</c></b> - right calf</li>
///     <li><b><c>12</c></b> - left calf</li>
///     <li><b><c>13</c></b> - left forearm</li>
///     <li><b><c>14</c></b> - right forearm</li>
///     <li><b><c>15</c></b> - left clavicle (shoulder)</li>
///     <li><b><c>16</c></b> - right clavicle (shoulder)</li>
///     <li><b><c>17</c></b> - neck</li>
///     <li><b><c>18</c></b> - jaw </li>
///   </ul>
/// </remarks>
/// <returns><b><c>1</c></b> on success, <b><c>0</c></b> on failure.</returns>
NATIVE__ SetPlayerAttachedObject(playerid, index, modelid, bone, Float:fOffsetX = 0.0, Float:fOffsetY = 0.0, Float:fOffsetZ = 0.0, Float:fRotX = 0.0, Float:fRotY = 0.0, Float:fRotZ = 0.0, Float:fScaleX = 1.0, Float:fScaleY = 1.0, Float:fScaleZ = 1.0, materialColor1 = 0, materialColor2 = 0) \
	= bool:Player_SetAttachedObject(Player:playerid, slot, modelid, bone, Float:fOffsetX = 0.0, Float:fOffsetY = 0.0, Float:fOffsetZ = 0.0, Float:fRotX = 0.0, Float:fRotY = 0.0, Float:fRotZ = 0.0, Float:fScaleX = 1.0, Float:fScaleY = 1.0, Float:fScaleZ = 1.0, materialColor1 = 0, materialColor2 = 0);

/// <summary>Remove an attached object from a player.</summary>
/// <param name="playerid">The ID of the player to remove the object from</param>
/// <param name="index">The index of the object to remove (set with <a href="#SetPlayerAttachedObject">SetPlayerAttachedObject</a>)</param>
/// <seealso name="SetPlayerAttachedObject"/>
/// <seealso name="IsPlayerAttachedObjectSlotUsed"/>
/// <remarks>This function was added in <b>SA-MP 0.3c</b> and will not work in earlier versions!</remarks>
/// <returns><b><c>1</c></b> on success, <b><c>0</c></b> on failure.</returns>
NATIVE__ RemovePlayerAttachedObject(playerid, index) \
	= bool:Player_RemoveAttachedObject(Player:playerid, slot);

/// <summary>Check if a player has an object attached in the specified index (slot).</summary>
/// <param name="playerid">The ID of the player to check</param>
/// <param name="index">The index (slot) to check</param>
/// <seealso name="SetPlayerAttachedObject"/>
/// <seealso name="RemovePlayerAttachedObject"/>
/// <remarks>This function was added in <b>SA-MP 0.3c</b> and will not work in earlier versions!</remarks>
/// <returns><b><c>1</c></b> if used, <b><c>0</c></b> if not.</returns>
// TODO: This needs manually expanding, due to character limits.
NEW_NATIVE__ Player_GetAttachedObject(Player:playerid, slot);

OLD_NATIVE__ IsPlayerAttachedObjectSlotUsed(playerid, index)
	return !!Player_GetAttachedObject(Player:playerid, slot);

/// <summary>Enter edition mode for an attached object.</summary>
/// <param name="playerid">The ID of the player to enter in to edition mode</param>
/// <param name="index">The index (slot) of the attached object to edit</param>
/// <seealso name="SetPlayerAttachedObject"/>
/// <seealso name="RemovePlayerAttachedObject"/>
/// <seealso name="IsPlayerAttachedObjectSlotUsed"/>
/// <seealso name="EditObject"/>
/// <seealso name="EditPlayerObject"/>
/// <seealso name="SelectObject"/>
/// <seealso name="CancelEdit"/>
/// <seealso name="OnPlayerEditAttachedObject"/>
/// <remarks>This function was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>You can move the camera while editing by pressing and holding the <b>spacebar</b> (or <b>W</b> in vehicle) and moving your mouse.</remarks>
/// <remarks>
///   There are 7 clickable buttons in edition mode.<p/>
///   The three single icons that have X/Y/Z on them can be dragged to edit position/rotation/scale.<p/>
///   The four buttons in a row are to select the edition mode and save edition: [Move] [Rotate] [Scale] [Save].<p/>
///   Clicking save will call <a href="#OnPlayerEditAttachedObject">OnPlayerEditAttachedObject</a>.
/// </remarks>
/// <remarks>Players will be able to scale objects up to a very large or negative value size. Limits should be put in place using <a href="#OnPlayerEditAttachedObject">OnPlayerEditAttachedObject</a> to abort the edit.</remarks>
/// <returns><b><c>1</c></b> on success and <b><c>0</c></b> on failure.</returns>
NATIVE__ EditAttachedObject(playerid, index) \
	= bool:Player_EditAttachedObject(Player:playerid, slot);

/// <summary>Creates a chat bubble above a player's name tag.</summary>
/// <param name="playerid">The player which should have the chat bubble</param>
/// <param name="text">The text to display</param>
/// <param name="color">The text color</param>
/// <param name="drawdistance">The distance from where players are able to see the chat bubble</param>
/// <param name="expiretime">The time in miliseconds the bubble should be displayed for</param>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>You can't see your own chatbubbles. The same applies to attached 3D text labels.</remarks>
/// <remarks>You can use color embedding for multiple colors in the message.</remarks>
NATIVE__ SetPlayerChatBubble(playerid, const text[], color, Float:drawdistance, expiretime) \
	= bool:Player_SetChatBubble(Player:playerid, const text[], color, Float:drawDistance, expireTime);

// Player control

/// <summary>Puts a player in a vehicle.</summary>
/// <param name="playerid">The ID of the player to put in a vehicle</param>
/// <param name="vehicleid">The ID of the vehicle to put the player in</param>
/// <param name="seatid">The ID of the seat to put the player in</param>
/// <seealso name="RemovePlayerFromVehicle"/>
/// <seealso name="GetPlayerVehicleID"/>
/// <seealso name="GetPlayerVehicleSeat"/>
/// <seealso name="OnPlayerEnterVehicle"/>
/// <remarks>If this function is used on a player that is already in a vehicle, other players will still see them in their previous vehicle. To fix this, first remove the player from the vehicle.</remarks>
/// <remarks>If the seat is invalid or is taken, will cause a crash when they EXIT the vehicle.</remarks>
/// <remarks>You can use <a href="#GetPlayerVehicleSeat">GetPlayerVehicleSeat</a> in a loop to check if a seat is occupied by any players.</remarks>
/// <remarks>
///   <b>Seats:</b><p/>
///   <ul>
///     <li><b><c>0</c></b> - driver.</li>
///     <li><b><c>1</c></b> - front passenger.</li>
///     <li><b><c>2</c></b> - back-left passenger.</li>
///     <li><b><c>3</c></b> - back-right passenger.</li>
///     <li><b><c>4+</c></b> - passenger seats (coach etc.).</li>
///   </ul>
/// </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player or vehicle don't exist.
/// </returns>
NATIVE__ PutPlayerInVehicle(playerid, vehicleid, seatid) \
	= bool:Player_PutInVehicle(Player:playerid, vehicleid, seatid);

/// <summary>This function gets the ID of the vehicle the player is currently in. Note: <b>NOT</b> the model id of the vehicle. See <a href="#GetVehicleModel">GetVehicleModel</a> for that.</summary>
/// <param name="playerid">The ID of the player in the vehicle that you want to get the ID of</param>
/// <seealso name="IsPlayerInVehicle"/>
/// <seealso name="IsPlayerInAnyVehicle"/>
/// <seealso name="GetPlayerVehicleSeat"/>
/// <seealso name="GetVehicleModel"/>
/// <returns>ID of the vehicle or <b><c>0</c></b> if not in a vehicle.</returns>
NEW_NATIVE__ bool:Player_TryGetVehicle(Player:playerid, &Vehicle:targetid)
	return (targetid = Vehicle:GetPlayerVehicleID(_:playerid)) != (Vehicle:INVALID_VEHICLE_ID);

OLD_NATIVE__ GetPlayerVehicleID(playerid)
	return Player_TryGetVehicle(Player:playerid, Vehicle:playerid) ? (_:playerid) : (_:INVALID_VEHICLE_ID);

stock Vehicle:Player_GetVehicle(Player:playerid)
	return Player_TryGetVehicle(playerid, Vehicle:playerid) ? (Vehicle:playerid) : (Vehicle:INVALID_VEHICLE_ID);

/// <summary>Find out which seat a player is in.</summary>
/// <param name="playerid">The ID of the player you want to get the seat of</param>
/// <seealso name="GetPlayerVehicleID"/>
/// <seealso name="PutPlayerInVehicle"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>Sometimes the result can be <b><c>128</c></b> which is an invalid seat ID. Circumstances of this are not yet known, but it is best to discard information when returned seat number is <b><c>128</c></b>.</remarks>
/// <returns>The ID of the seat the player is in. <b><c>-1</c></b> is not in vehicle, <b><c>0</c></b> is the driver, <b><c>1</c></b> is the front passenger, and <b><c>2</c></b> &amp; <b><c>3</c></b> are the rear passengers.</returns>
NATIVE__ GetPlayerVehicleSeat(playerid) \
	= Player_GetVehicleSeat(Player:playerid);

/// <summary>Removes/ejects a player from their vehicle.</summary>
/// <param name="playerid">The ID of the player to remove from their vehicle</param>
/// <seealso name="PutPlayerInVehicle"/>
/// <remarks>
///   The exiting animation is not synced for other players.<p/>
///   This function will not work when used in <a href="#OnPlayerEnterVehicle">OnPlayerEnterVehicle</a>, because the player isn't in the vehicle when the callback is called. Use <a href="#OnPlayerStateChange">OnPlayerStateChange</a> instead.<p/>
///   The player isn't removed if he is in a RC Vehicle.
/// </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
NATIVE__ RemovePlayerFromVehicle(playerid) \
	= bool:Player_RemoveFromVehicle(Player:playerid);

/// <summary>Toggles whether a player can control their character or not. The player will also be unable to move their camera.</summary>
/// <param name="playerid">The ID of the player to toggle the controllability of</param>
/// <param name="toggle"><b><c>0</c></b> to make them uncontrollable, <b><c>1</c></b> to make them controllable</param>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified does not exist.
/// </returns>
NATIVE__ TogglePlayerControllable(playerid, toggle) \
	= bool:Player_SetControllable(Player:playerid, bool:isControllable);

NEW_NATIVE__ bool:Player_GetControllable(Player:playerid);

/// <summary>Plays the specified sound for a player.</summary>
/// <param name="playerid">The ID of the player for whom to play the sound</param>
/// <param name="soundid">The sound to play</param>
/// <param name="x">X coordinate for the sound to play at. (0 for no position)</param>
/// <param name="y">Y coordinate for the sound to play at. (0 for no position)</param>
/// <param name="z">Z coordinate for the sound to play at. (0 for no position)</param>
/// <seealso name="PlayCrimeReportForPlayer"/>
/// <seealso name="PlayAudioStreamForPlayer"/>
/// <seealso name="StopAudioStreamForPlayer"/>
/// <remarks>Only use the coordinates if you want the sound to be played at a certain position. Set coordinates all to 0 to just play the sound.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
NATIVE__ PlayerPlaySound(playerid, soundid, Float:x, Float:y, Float:z) \
	= bool:Player_PlaySound(Player:playerid, soundid, Float:x, Float:y, Float:z);

/// <summary>Apply an animation to a player.</summary>
/// <param name="playerid">The ID of the player to apply the animation to</param>
/// <param name="animlib">The animation library from which to apply an animation</param>
/// <param name="animname">The name of the animation to apply, within the specified library</param>
/// <param name="fDelta">The speed to play the animation (use 4.1)</param>
/// <param name="loop">If set to <b><c>1</c></b>, the animation will loop. If set to <b><c>0</c></b>, the animation will play once</param>
/// <param name="lockx">If set to <b><c>0</c></b>, the player is returned to their old X coordinate once the animation is complete (for animations that move the player such as walking). <b><c>1</c></b> will not return them to their old position</param>
/// <param name="locky">Same as above but for the Y axis. Should be kept the same as the previous parameter</param>
/// <param name="freeze">Setting this to <b><c>1</c></b> will freeze the player at the end of the animation. <b><c>0</c></b> will not</param>
/// <param name="time">Timer in milliseconds. For a never-ending loop it should be <b><c>0</c></b></param>
/// <param name="forcesync">Set to <b><c>1</c></b> to make server sync the animation with all other players in streaming radius. <b><c>2</c></b> works same as <b><c>1</c></b>, but will ONLY apply the animation to streamed-in players, but NOT the actual player being animated (useful for npc animations and persistent animations when players are being streamed) (optional=<b><c>0</c></b>)</param>
/// <seealso name="ClearAnimations"/>
/// <seealso name="SetPlayerSpecialAction"/>
/// <remarks>The <paramref name="forcesync"/> optional parameter, which defaults to <b><c>0</c></b>, in most cases is not needed since players sync animations themselves. The <paramref name="forcesync"/> parameter can force all players who can see <paramref name="playerid"/> to play the animation regardless of whether the player is performing that animation. This is useful in circumstances where the player can't sync the animation themselves. For example, they may be paused.</remarks>
/// <remarks>An invalid animation library will crash the player's game.</remarks>
/// <returns>This function always returns <b><c>1</c></b>, even if the player specified does not exist, or any of the parameters are invalid (e.g. invalid library).</returns>
NATIVE__ ApplyAnimation(playerid, const animlib[], const animname[], Float:fDelta, loop, lockx, locky, freeze, time, forcesync = 0) \
	= Player_ApplyAnimation(Player:playerid, const animlib[], const animname[], Float:fDelta, bool:loop, bool:lockX, bool:lockY, bool:freeze, msPlayTime, bool:forceSync = false);

/// <summary>Clears all animations for the given player (it also cancels all current tasks such as jetpacking,parachuting,entering vehicles, driving (removes player out of vehicle), swimming, etc.. ).</summary>
/// <param name="playerid">The ID of the player to clear the animations of</param>
/// <param name="forcesync">Set to <b><c>1</c></b> to force playerid to sync the animation with other players in streaming radius (optional=<b><c>0</c></b>)</param>
/// <seealso name="ApplyAnimation"/>
/// <remarks>ClearAnimations doesn't do anything when the animation ends if we pass 1 for the freeze parameter in <a href="#ApplyAnimation">ApplyAnimation</a>.</remarks>
/// <remarks>Unlike some other ways to remove player from a vehicle, this will also reset the vehicle's velocity to zero, instantly stopping the car. Player will appear on top of the vehicle with the same location as he was in his car seat.</remarks>
/// <returns>This function always returns <b><c>1</c></b>, even when the player specified is not connected.</returns>
NATIVE__ ClearAnimations(playerid, forcesync = 0) \
	= bool:Player_ClearAnimations(Player:playerid, bool:forcesync = false);

/// <summary>Returns the index of any running applied animations.</summary>
/// <param name="playerid">ID of the player of whom you want to get the animation index of</param>
/// <seealso name="GetAnimationName"/>
/// <remarks>This function was added in <b>SA-MP 0.3b</b> and will not work in earlier versions!</remarks>
/// <returns><b><c>0</c></b> if there is no animation applied.</returns>
NATIVE__ GetPlayerAnimationIndex(playerid);
	= Player_GetAnimationIndex(Player:playerid);

/// <summary>Retrieves a player's current <a href="http://wiki.sa-mp.com/wiki/SpecialActions">special action</a>.</summary>
/// <param name="playerid">The ID of the player to get the <a href="http://wiki.sa-mp.com/wiki/SpecialActions">special action</a> of</param>
/// <seealso name="SetPlayerSpecialAction"/>
/// <seealso name="GetPlayerState"/>
/// <remarks>
///   <b>Special actions: (marked with * cannot be set)</b><p/>
///   <ul>
///     <li><b><c>0 - SPECIAL_ACTION_NONE</c></b></li>
///     <li><b><c>2 - SPECIAL_ACTION_USEJETPACK</c></b></li>
///     <li><b><c>5 - SPECIAL_ACTION_DANCE1</c></b></li>
///     <li><b><c>6 - SPECIAL_ACTION_DANCE2</c></b></li>
///     <li><b><c>7 - SPECIAL_ACTION_DANCE3</c></b></li>
///     <li><b><c>8 - SPECIAL_ACTION_DANCE4</c></b></li>
///     <li><b><c>10 - SPECIAL_ACTION_HANDSUP</c></b></li>
///     <li><b><c>11 - SPECIAL_ACTION_USECELLPHONE</c></b></li>
///     <li><b><c>12 - SPECIAL_ACTION_SITTING *</c></b></li>
///     <li><b><c>13 - SPECIAL_ACTION_STOPUSECELLPHONE</c></b></li>
///   </ul>
///   <b>added in SA-MP 0.3:</b><p/>
///   <ul>
///     <li><b><c>1 - SPECIAL_ACTION_DUCK *</c></b> - Detect if the player is crouching.</li>
///     <li><b><c>3 - SPECIAL_ACTION_ENTER_VEHICLE *</c></b> - Detect if the player is entering a vehicle via an animation.</li>
///     <li><b><c>4 - SPECIAL_ACTION_EXIT_VEHICLE *</c></b> - Detect if the player is exiting a vehicle via an animation.</li>
///     <li><b><c>20 - SPECIAL_ACTION_DRINK_BEER</c></b> - Will increase the player's drunk level when used</li>
///     <li><b><c>21 - SPECIAL_ACTION_SMOKE_CIGGY</c></b> - Will give the player a cigar</li>
///     <li><b><c>22 - SPECIAL_ACTION_DRINK_WINE</c></b> - Will give the player a wine bottle to get drunk from</li>
///     <li><b><c>23 - SPECIAL_ACTION_DRINK_SPRUNK</c></b> - Will give the player a sprunk bottle to drink from</li>
///     <li><b><c>68 - SPECIAL_ACTION_PISSING</c></b> - Will make make the player perform the pissing animation with visible pee.</li>
///   </ul>
///   <b>added in SA-MP 0.3e:</b><p/>
///   <ul>
///     <li><b><c>24 - SPECIAL_ACTION_CUFFED</c></b> - Will force the player in to cuffs (hands are behind their back) (<b>does not work on CJ skin</b>)</li>
///   </ul>
///   <b>added in SA-MP 0.3x:</b><p/>
///   <ul>
///     <li><b><c>25 - SPECIAL_ACTION_CARRY</c></b>         - Will apply a 'carrying' animation to the player and make them unable to sprint, jump or punch (<b>does not work on CJ skin</b>)</li>
///   </ul>
/// </remarks>
/// <returns>The <a href="http://wiki.sa-mp.com/wiki/SpecialActions">special action</a> of the player.</returns>
NATIVE__ GetPlayerSpecialAction(playerid) \
	= SpecialAction:Player_GetSpecialAction(Player:playerid);

/// <summary>This function allows to set players special action.</summary>
/// <param name="playerid">The player that should perform the action</param>
/// <param name="actionid">The action that should be performed</param>
/// <seealso name="GetPlayerSpecialAction"/>
/// <seealso name="ApplyAnimation"/>
/// <remarks>Removing jetpacks from players by setting their special action to <b><c>0</c></b> causes the sound to stay until death.</remarks>
/// <remarks>
///   <b>Special actions: (marked with * cannot be set)</b><p/>
///   <ul>
///     <li><b><c>0 - SPECIAL_ACTION_NONE</c></b></li>
///     <li><b><c>2 - SPECIAL_ACTION_USEJETPACK</c></b></li>
///     <li><b><c>5 - SPECIAL_ACTION_DANCE1</c></b></li>
///     <li><b><c>6 - SPECIAL_ACTION_DANCE2</c></b></li>
///     <li><b><c>7 - SPECIAL_ACTION_DANCE3</c></b></li>
///     <li><b><c>8 - SPECIAL_ACTION_DANCE4</c></b></li>
///     <li><b><c>10 - SPECIAL_ACTION_HANDSUP</c></b></li>
///     <li><b><c>11 - SPECIAL_ACTION_USECELLPHONE</c></b></li>
///     <li><b><c>12 - SPECIAL_ACTION_SITTING *</c></b></li>
///     <li><b><c>13 - SPECIAL_ACTION_STOPUSECELLPHONE</c></b></li>
///   </ul>
///   <b>added in SA-MP 0.3:</b><p/>
///   <ul>
///     <li><b><c>1 - SPECIAL_ACTION_DUCK *</c></b> - Detect if the player is crouching.</li>
///     <li><b><c>3 - SPECIAL_ACTION_ENTER_VEHICLE *</c></b> - Detect if the player is entering a vehicle via an animation.</li>
///     <li><b><c>4 - SPECIAL_ACTION_EXIT_VEHICLE *</c></b> - Detect if the player is exiting a vehicle via an animation.</li>
///     <li><b><c>20 - SPECIAL_ACTION_DRINK_BEER</c></b> - Will increase the player's drunk level when used</li>
///     <li><b><c>21 - SPECIAL_ACTION_SMOKE_CIGGY</c></b> - Will give the player a cigar</li>
///     <li><b><c>22 - SPECIAL_ACTION_DRINK_WINE</c></b> - Will give the player a wine bottle to get drunk from</li>
///     <li><b><c>23 - SPECIAL_ACTION_DRINK_SPRUNK</c></b> - Will give the player a sprunk bottle to drink from</li>
///     <li><b><c>68 - SPECIAL_ACTION_PISSING</c></b> - Will make make the player perform the pissing animation with visible pee.</li>
///   </ul>
///   <b>added in SA-MP 0.3e:</b><p/>
///   <ul>
///     <li><b><c>24 - SPECIAL_ACTION_CUFFED</c></b> - Will force the player in to cuffs (hands are behind their back) (<b>does not work on CJ skin</b>)</li>
///   </ul>
///   <b>added in SA-MP 0.3x:</b><p/>
///   <ul>
///     <li><b><c>25 - SPECIAL_ACTION_CARRY</c></b>         - Will apply a 'carrying' animation to the player and make them unable to sprint, jump or punch (<b>does not work on CJ skin</b>)</li>
///   </ul>
/// </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
NATIVE__ SetPlayerSpecialAction(playerid, actionid) \
	= bool:Player_SetSpecialAction(Player:playerid, SpecialAction:actionid);

/// <summary>Disables collisions between occupied vehicles for a player.</summary>
/// <param name="playerid">The ID of the player for whom you want to disable collisions</param>
/// <param name="disable"><b><c>1</c></b> to disable collisions, <b><c>0</c></b> to enable collisions</param>
/// <remarks>This function was added in <b>SA-MP 0.3.7</b> and will not work in earlier versions!</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified does not exist.
/// </returns>
NEW_NATIVE__ bool:Player_ToggleVehicleCollisions(Player:playerid, bool:solid)
	return !!DisableRemoteVehicleCollisions(playerid, !solid);

OLD_NATIVE__ DisableRemoteVehicleCollisions(playerid, nonSolid)
	return Player_ToggleVehicleCollisions(Player:playerid, !nonSolid);

NEW_NATIVE__ bool:Player_GetVehicleCollisions(Player:playerid);

// Player world/map related

/// <summary>Set the world boundaries for a player. Players can not go out of the boundaries (they will be pushed back in).</summary>
/// <param name="playerid">The ID of the player to set the world boundaries of</param>
/// <param name="x_max">The maximum X coordinate the player can go to</param>
/// <param name="x_min">The minimum X coordinate the player can go to</param>
/// <param name="y_max">The maximum Y coordinate the player can go to</param>
/// <param name="y_min">The minimum Y coordinate the player can go to</param>
/// <seealso name="GangZoneCreate"/>
/// <remarks>This function does not work if used in <a href="#OnPlayerConnect">OnPlayerConnect</a></remarks>
/// <remarks>A player's world boundaries can be reset by setting them to <b><c>20000.0</c></b>, <b><c>-20000.0</c></b>, <b><c>20000.0</c></b>, <b><c>-20000.0</c></b>. These are the default values.</remarks>
/// <remarks>This function doesn't work in interiors!</remarks>
OLD_NATIVE__ SetPlayerWorldBounds(playerid, Float:maxX, Float:minX, Float:maxY, Float:minY)
	return Player_SetWorldBounds(Player:playerid, minX, minY, maxX, maxY);
	
NEW_NATIVE__ Player_SetWorldBounds(playerid, Float:minX, Float:minY, Float:maxX, Float:maxY)
	return SetPlayerWorldBounds(_:playerid, maxX, minX, maxY, minY);

NEW_NATIVE__ bool:Player_GetWorldBounds(Player:playerid, &Float:minX, &Float:minY, &Float:maxX, &Float:maxY);

/// <summary>This functions allows you to toggle the drawing of player nametags, healthbars and armor bars which display above their head. For use of a similar function like this on a global level, <a href="#ShowNameTags">ShowNameTags</a> function.</summary>
/// <param name="playerid">Player who will see the results of this function</param>
/// <param name="showplayerid">Player whose name tag will be shown or hidden</param>
/// <param name="show"><b><c>1</c></b>-show name tag, <b><c>0</c></b>-hide name tag</param>
/// <seealso name="ShowNameTags"/>
/// <seealso name="DisableNameTagLOS"/>
/// <seealso name="SetPlayerMarkerForPlayer"/>
/// <remarks><a href="#ShowNameTags">ShowNameTags</a> must be set to <b><c>1</c></b> to be able to show name tags with ShowPlayerNameTagForPlayer, that means that in order to be effective you need to <c>ShowPlayerNameTagForPlayer(forplayerid, playerid, 0)</c> ahead of time(<a href="#OnPlayerStreamIn">OnPlayerStreamIn</a> is a good spot).</remarks>
NATIVE__ ShowPlayerNameTagForPlayer(playerid, showplayerid, show) \
	= bool:Player_ShowNameTag(Player:playerid, Player:nametagPlayer, bool:show);

/// <summary>Place an icon/marker on a player's map. Can be used to mark locations such as banks and hospitals to players.</summary>
/// <param name="playerid">The ID of the player to set the map icon for</param>
/// <param name="iconid">The player's icon ID, ranging from <b><c>0</c></b> to <b><c>99</c></b>. This means there is a maximum of <b><c>100</c></b> map icons. ID can be used in <a href="#RemovePlayerMapIcon">RemovePlayerMapIcon</a></param>
/// <param name="x">The X coordinate to place the map icon at</param>
/// <param name="y">The Y coordinate to place the map icon at</param>
/// <param name="z">The Z coordinate to place the map icon at</param>
/// <param name="markertype">The icon to set</param>
/// <param name="color">The color of the icon (<b>RGBA</b>). This should only be used with the square icon (ID: <b><c>0</c></b>)</param>
/// <param name="style">The style of icon (optional=<b><c>MAPICON_LOCAL</c></b>)</param>
/// <seealso name="RemovePlayerMapIcon"/>
/// <seealso name="SetPlayerMarkerForPlayer"/>
/// <remarks>If you use an invalid marker type, it will create ID <b><c>1</c></b> (White Square). </remarks>
/// <remarks>If you use an icon ID that is already in use, it will replace the current map icon using that ID. </remarks>
/// <remarks>Marker type <b><c>1</c></b> (square), <b><c>2</c></b> (player blip), <b><c>4</c></b> (north), and <b><c>56</c></b> (single airstrip blip) will cause your game to crash if you have map legends enabled while viewing the map.</remarks>
/// <remarks>
///   <b>Map icon styles:</b><p/>
///   <ul>
///     <li><b><c>0 MAPICON_LOCAL</c></b> - close proximity only</li>
///     <li><b><c>1 MAPICON_GLOBAL</c></b> - show on radar edge as long as in range</li>
///     <li><b><c>2 MAPICON_LOCAL_CHECKPOINT</c></b> - Close proximity only (with checkpoint)</li>
///     <li><b><c>3 MAPICON_GLOBAL_CHECKPOINT</c></b> - Show on radar edge as long as in range (with checkpoint)</li>
///   </ul>
/// </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. Player is not connected.
/// </returns>
NATIVE__ SetPlayerMapIcon(playerid, iconid, Float:x, Float:y, Float:z, markertype, color, style = MAPICON_LOCAL) \
	= bool:Player_SetMapIcon(Player:playerid, iconid, Float:x, Float:y, Float:z, markertype, color, style = MAPICON_LOCAL);

/// <summary>Removes a map icon that was set earlier for a player using <a href="#SetPlayerMapIcon">SetPlayerMapIcon</a>.</summary>
/// <param name="playerid">The ID of the player whose icon to remove</param>
/// <param name="iconid">The ID of the icon to remove. This is the second parameter of <a href="#SetPlayerMapIcon">SetPlayerMapIcon</a></param>
/// <seealso name="SetPlayerMapIcon"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute.
/// </returns>
NATIVE__ RemovePlayerMapIcon(playerid, iconid) \
	= bool:Player_RemoveMapIcon(Player:playerid, iconid);

/// <summary>Enable/Disable the teleporting ability for a player by right-clicking on the map.</summary>
/// <param name="playerid">The ID of the player to allow teleport</param>
/// <param name="allow"><b><c>1</c></b> to allow, <b><c>0</c></b> to disallow</param>
/// <remarks><b>This function, as of 0.3d, is deprecated. Check <a href="#OnPlayerClickMap">OnPlayerClickMap</a>.</b></remarks>
/// <remarks>This function will work only if <a href="#AllowAdminTeleport">AllowAdminTeleport</a> is enabled, and you have to be an admin.</remarks>
/// <seealso name="AllowAdminTeleport"/>
NATIVE__ AllowPlayerTeleport(playerid, allow) \
	= bool:Player_AllowTeleport(Player:playerid, bool:canTeleport);

// Player camera

/// <summary>Sets the camera to a specific position for a player.</summary>
/// <param name="playerid">ID of the player</param>
/// <param name="x">The X coordinate to place the camera at</param>
/// <param name="y">The Y coordinate to place the camera at</param>
/// <param name="z">The Z coordinate to place the camera at</param>
/// <seealso name="SetPlayerCameraLookAt"/>
/// <seealso name="SetCameraBehindPlayer"/>
/// <remarks>You may also have to use <a href="#SetPlayerCameraLookAt">SetPlayerCameraLookAt</a> with this function in order to work properly.</remarks>
/// <remarks>Use <a href="#SetCameraBehindPlayer">SetCameraBehindPlayer</a> to reset the camera to behind the player.</remarks>
/// <remarks>Using the camera functions directly after enabling spectator mode doesn't work.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified doesn't exist.
/// </returns>
NATIVE__ SetPlayerCameraPos(playerid, Float:x, Float:y, Float:z) \
	= bool:Player_SetCameraPosition(Player:playerid, Float:x, Float:y, Float:z);

/// <summary>Set the direction a player's camera looks at. Generally meant to be used in combination with <a href="#SetPlayerCameraPos">SetPlayerCameraPos</a>.</summary>
/// <param name="playerid">The ID of the player whose camera to set</param>
/// <param name="x">The X coordinate for the player's camera to look at</param>
/// <param name="y">The Y coordinate for the player's camera to look at</param>
/// <param name="z">The Z coordinate for the player's camera to look at</param>
/// <param name="cut">The style of the change. Can be used to interpolate (change slowly) from old pos to new pos using <b><c>CAMERA_MOVE</c></b>. Added in <b>0.3e</b>. Leave out for older versions (optional=<b><c>CAMERA_CUT</c></b>)</param>
/// <seealso name="SetPlayerCameraPos"/>
/// <seealso name="SetCameraBehindPlayer"/>
/// <seealso name="GetPlayerCameraPos"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <remarks>Using the camera functions directly after enabling spectator mode doesn't work.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player specified does not exist.
/// </returns>
NATIVE__ SetPlayerCameraLookAt(playerid, Float:x, Float:y, Float:z, cut = CAMERA_CUT) \
	= bool:Player_SetCameraTarget(Player:playerid, Float:x, Float:y, Float:z, CameraMovement:cut = CAMERA_MOVEMENT_CUT);

/// <summary>Restore the camera to a place behind the player, after using a function like <a href="#SetPlayerCameraPos">SetPlayerCameraPos</a>.</summary>
/// <param name="playerid">The player you want to restore the camera for</param>
/// <seealso name="SetPlayerCameraPos"/>
/// <seealso name="SetPlayerCameraLookAt"/>
NATIVE__ SetCameraBehindPlayer(playerid) \
	= bool:Player_SetCameraBehind(Player:playerid);

/// <summary>Get the position of the player's camera.</summary>
/// <param name="playerid">The ID of the player to get the camera position of</param>
/// <param name="x">A float variable to store the X coordinate in, passed by reference</param>
/// <param name="y">A float variable to store the Y coordinate in, passed by reference</param>
/// <param name="z">A float variable to store the Z coordinate in, passed by reference</param>
/// <seealso name="SetPlayerCameraPos"/>
/// <seealso name="GetPlayerCameraZoom"/>
/// <seealso name="GetPlayerCameraAspectRatio"/>
/// <seealso name="GetPlayerCameraMode"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>Player's camera positions are only updated once a second, <b>unless aiming</b>.</remarks>
/// <remarks>It is recommended to set a 1 second timer if you wish to take action that relies on a player's camera position.</remarks>
NATIVE__ GetPlayerCameraPos(playerid, &Float:x, &Float:y, &Float:z) \
	= bool:Player_GetCameraPosition(Player:playerid, &Float:x, &Float:y, &Float:z);

/// <summary>This function will return the current direction of player's aiming in 3-D space, the coords are relative to the camera position, see <a href="#GetPlayerCameraPos">GetPlayerCameraPos</a>.</summary>
/// <param name="playerid">The ID of the player you want to obtain the camera front vector of</param>
/// <param name="x">A float to store the X coordinate, passed by reference</param>
/// <param name="y">A float to store the Y coordinate, passed by reference</param>
/// <param name="z">A float to store the Z coordinate, passed by reference</param>
/// <seealso name="GetPlayerCameraPos"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
/// <remarks>In <b>0.3a</b> the camera front vector is only obtainable when player is inside a rhino, S.W.A.T tank, fire truck, or on foot. </remarks>
/// <remarks>Since <b>0.3b</b> the camera data can be obtained when the player is in any vehicle or on foot. </remarks>
/// <returns>The position is stored in the specified variables.</returns>
NATIVE__ GetPlayerCameraFrontVector(playerid, &Float:x, &Float:y, &Float:z) \
	= bool:Player_GetCameraFrontVector(Player:playerid, &Float:x, &Float:y, &Float:z);

/// <summary>Returns the current GTA camera mode for the requested player. The camera modes are useful in determining whether a player is aiming, doing a passenger driveby etc.</summary>
/// <param name="playerid">The ID of the player whose camera mode to retrieve</param>
/// <seealso name="GetPlayerCameraPos"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <seealso name="SetPlayerCameraPos"/>
/// <seealso name="SetPlayerCameraLookAt"/>
/// <seealso name="SetCameraBehindPlayer"/>
/// <remarks>This function was added in <b>SA-MP 0.3c R3</b> and will not work in earlier versions!</remarks>
/// <returns>The camera mode as an integer (or <b><c>-1</c></b> if player is not connected).</returns>
NATIVE__ GetPlayerCameraMode(playerid) \
	= CameraMode:Player_GetCameraMode(Player:playerid);

/// <summary>Toggle camera targeting functions for a player. Disabled by default to save bandwidth.</summary>
/// <param name="playerid">The ID of the player to toggle camera targeting functions for</param>
/// <param name="enable"><b><c>1</c></b> to enable camera targeting functions and <b><c>0</c></b> to disable them</param>
/// <seealso name="GetPlayerCameraTargetVehicle"/>
/// <seealso name="GetPlayerCameraTargetPlayer"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <remarks>This function was added in <b>SA-MP 0.3.7</b> and will not work in earlier versions!</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player is not connected.
/// </returns>
NATIVE__ EnablePlayerCameraTarget(playerid, enable) \
	= bool:Player_ToggleCameraTarget(Player:playerid, bool:enable);

/// <summary>Allows you to retrieve the ID of the object the player is looking at.</summary>
/// <param name="playerid">The ID of the player to check</param>
/// <seealso name="GetPlayerCameraTargetVehicle"/>
/// <seealso name="GetPlayerCameraTargetPlayer"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <remarks>This function was added in <b>SA-MP 0.3.7</b> and will not work in earlier versions!</remarks>
/// <remarks>This function is disabled by default to save bandwidth. Use <a href="#EnablePlayerCameraTarget">EnablePlayerCameraTarget</a> to enable it for each player.</remarks>
/// <returns>The ID of the object playerid is looking at. If <b><c>INVALID_OBJECT_ID (65535)</c></b> is returned, playerid isn't looking at any object.</returns>
NEW_NATIVE__ bool:Player_TryGetCameraTargetObject(Player:playerid, &Object:targetid)
	return (targetid = Object:GetPlayerCameraTargetObject(_:playerid)) != (Object:INVALID_OBJECT_ID);

OLD_NATIVE__ GetPlayerCameraTargetObject(playerid)
	return Player_TryGetCameraTargetObject(Player:playerid, Object:playerid) ? (_:playerid) : (_:INVALID_OBJECT_ID);

stock Object:Player_GetCameraTargetObject(Player:playerid)
	return Player_TryGetCameraTargetObject(playerid, Object:playerid) ? (Object:playerid) : (Object:INVALID_OBJECT_ID);

/// <summary>Get the ID of the vehicle the player is looking at.</summary>
/// <param name="playerid">The ID of the player to check</param>
/// <seealso name="GetPlayerCameraTargetPlayer"/>
/// <seealso name="GetPlayerCameraTargetObject"/>
/// <seealso name="EnablePlayerCameraTarget"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <remarks>This function was added in <b>SA-MP 0.3.7</b> and will not work in earlier versions!</remarks>
/// <remarks>This function is disabled by default to save bandwidth. Use <a href="#EnablePlayerCameraTarget">EnablePlayerCameraTarget</a> to enable it for each player.</remarks>
/// <remarks>This function can (obviously) only return one vehicle ID at a time, while the player may be looking at multiple. It generally seems to detect the closest vehicle first.</remarks>
/// <returns>The vehicle ID of the vehicle the player is looking at. <b><c>INVALID_VEHICLE_ID</c></b> if none.</returns>
NEW_NATIVE__ bool:Player_TryGetCameraTargetVehicle(Player:playerid, &Vehicle:targetid)
	return (targetid = Vehicle:GetPlayerCameraTargetVehicle(_:playerid)) != (Vehicle:INVALID_VEHICLE_ID);

OLD_NATIVE__ GetPlayerCameraTargetVehicle(playerid)
	return Player_TryGetCameraTargetVehicle(Player:playerid, Vehicle:playerid) ? (_:playerid) : (_:INVALID_VEHICLE_ID);

stock Vehicle:Player_GetCameraTargetVehicle(Player:playerid)
	return Player_TryGetCameraTargetVehicle(playerid, Vehicle:playerid) ? (Vehicle:playerid) : (Vehicle:INVALID_VEHICLE_ID);

/// <summary>Allows you to retrieve the ID of the player the playerid is looking at.</summary>
/// <param name="playerid">The ID of the player to check</param>
/// <seealso name="GetPlayerCameraTargetActor"/>
/// <seealso name="GetPlayerCameraTargetVehicle"/>
/// <seealso name="GetPlayerCameraTargetObject"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <remarks>This function was added in <b>SA-MP 0.3.7</b> and will not work in earlier versions!</remarks>
/// <remarks>This function is disabled by default to save bandwidth. Use <a href="#EnablePlayerCameraTarget">EnablePlayerCameraTarget</a> to enable it for each player.</remarks>
/// <remarks>Do not confuse this function with <a href="#GetPlayerTargetPlayer">GetPlayerTargetPlayer</a>. <a href="#GetPlayerTargetPlayer">GetPlayerTargetPlayer</a> returns the ID of the player playerid is aming at (with a weapon). <a href="#GetPlayerCameraTargetPlayer">GetPlayerCameraTargetPlayer</a> returns the ID of the player playerid is looking at (reference point is the <b>center of the screen</b>).</remarks>
/// <returns>The ID of the player the playerid is looking at.</returns>
NEW_NATIVE__ bool:Player_TryGetCameraTargetPlayer(Player:playerid, &Player:targetid)
	return (targetid = Player:GetPlayerCameraTargetPlayer(_:playerid)) != (Player:INVALID_PLAYER_ID);

OLD_NATIVE__ GetPlayerCameraTargetPlayer(playerid)
	return Player_TryGetCameraTargetPlayer(Player:playerid, Player:playerid) ? (_:playerid) : (_:INVALID_PLAYER_ID);

stock Player:Player_GetCameraTargetPlayer(Player:playerid)
	return Player_TryGetCameraTargetPlayer(playerid, Player:playerid) ? (Player:playerid) : (Player:INVALID_PLAYER_ID);

/// <summary>Allows you to retrieve the ID of the actor the player is looking at (if any).</summary>
/// <param name="playerid">The ID of the player to get the target actor of</param>
/// <seealso name="GetPlayerTargetActor"/>
/// <seealso name="GetPlayerCameraTargetPlayer"/>
/// <seealso name="GetPlayerCameraTargetVehicle"/>
/// <seealso name="GetPlayerCameraTargetObject"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <remarks>This function was added in <b>SA-MP 0.3.7</b> and will not work in earlier versions!</remarks>
/// <remarks>This function is disabled by default to save bandwidth. Use <a href="#EnablePlayerCameraTarget">EnablePlayerCameraTarget</a> to enable it for each player.</remarks>
/// <remarks>This function only tells you which actor (if any) the player is <b>looking</b> at. To find out if they are <b>aiming</b> at them, you need to use <a href="#GetPlayerTargetActor">GetPlayerTargetActor</a>.</remarks>
/// <returns>The ID of the actor the player is looking at.</returns>
NEW_NATIVE__ bool:Player_TryGetCameraTargetActor(Player:playerid, &Actor:targetid)
	return (targetid = Actor:GetPlayerCameraTargetActor(_:playerid)) != (Actor:INVALID_ACTOR_ID);

OLD_NATIVE__ GetPlayerCameraTargetActor(playerid)
	return Player_TryGetCameraTargetActor(Player:playerid, Actor:playerid) ? (_:playerid) : (_:INVALID_ACTOR_ID);

stock Actor:Player_GetCameraTargetActor(Player:playerid)
	return Player_TryGetCameraTargetActor(playerid, Actor:playerid) ? (Actor:playerid) : (Actor:INVALID_ACTOR_ID);

/// <summary>Retrieves the aspect ratio of a player's camera.</summary>
/// <param name="playerid">The ID of the player to get the camera aspect ratio of</param>
/// <seealso name="GetPlayerCameraZoom"/>
/// <seealso name="GetPlayerCameraPos"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <remarks>This function was added in <b>SA-MP 0.3z</b> and will not work in earlier versions! </remarks>
/// <remarks>The return value of this function represents the value of the "widescreen" option in the game's display settings, not the actual aspect ratio of the player's display.</remarks>
/// <returns>The aspect ratio of the player's camera, as a float. The aspect ratio can be one of three values: 4:3 (<b><c>1.3333334</c></b>, <b><c>Float:0x3FAAAAAB</c></b>) when widescreen is turned off, 5:4 (<b><c>1.2470589</c></b>, <b><c>Float:0x3F9F9FA0</c></b>) when letterbox mode is turned on, and 16:9 (<b><c>1.7764707</c></b>, <b><c>Float:0x3FE36364</c></b>) when widescreen is turned on regardless of the letterbox mode.</returns>
forward ScreenMode:Player_GetScreenMode(Player:playerid);

OLD_NATIVE__ Float:GetPlayerCameraAspectRatio(playerid);
{
	switch (Player_GetScreenMode(_:playerid))
	{
	case SCREEN_MODE_NORMAL: return Float:0x3FAAAAAB;
	case SCREEN_MODE_LETTERBOX: return Float:0x3F9F9FA0;
	case SCREEN_MODE_WIDESCREEN: return Float:0x3FE36364;
	}
	return Float:0x3FAAAAAB;
}

NEW_NATIVE__ ScreenMode:Player_GetScreenMode(Player:playerid)
{
	switch (_:GetPlayerCameraAspectRatio(_:playerid))
	{
	case 0x3FAAAAAB: return SCREEN_MODE_NORMAL;
	case 0x3F9F9FA0: return SCREEN_MODE_LETTERBOX;
	case 0x3FE36364: return SCREEN_MODE_WIDESCREEN;
	}
	return SCREEN_MODE_NORMAL;
}

/// <summary>Retrieves the game camera zoom level for a given player.</summary>
/// <param name="playerid">The ID of the player to get the camera zoom level of</param>
/// <seealso name="GetPlayerCameraAspectRatio"/>
/// <seealso name="GetPlayerCameraPos"/>
/// <seealso name="GetPlayerCameraFrontVector"/>
/// <remarks>This function was added in <b>SA-MP 0.3z</b> and will not work in earlier versions!</remarks>
/// <remarks>This retrieves the zoom level of the GAME camera, not the camera WEAPON.</remarks>
/// <returns>The player's camera zoom level (camera, sniper etc.), a float.</returns>
NATIVE__ Float:GetPlayerCameraZoom(playerid) \
	= Float:Player_GetCameraZoom(Player:playerid);

/// <summary>Move a player's camera from one position to another, within the set time. Useful for scripted cut scenes.</summary>
/// <param name="playerid">The ID of the player the camera should be moved for</param>
/// <param name="fromX">The X position the camera should start to move from</param>
/// <param name="fromY">The Y position the camera should start to move from</param>
/// <param name="fromZ">The Z position the camera should start to move from</param>
/// <param name="toX">The X position the camera should move to</param>
/// <param name="toY">The Y position the camera should move to</param>
/// <param name="toZ">The Z position the camera should move to</param>
/// <param name="time">Time in milliseconds</param>
/// <param name="cut">The jumpcut to use. Set to <b><c>CAMERA_MOVE</c></b> for a smooth movement (optional=<b><c>CAMERA_CUT</c></b>)</param>
/// <seealso name="InterpolateCameraLookAt"/>
/// <seealso name="SetPlayerCameraPos"/>
/// <seealso name="SetPlayerCameraLookAt"/>
/// <remarks>This function was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>Use <b><c>togglePlayerSpectating</c></b> to make objects stream in for the player while the camera is moving. You can reset the camera behind the player with <b><c>SetCameraBehindPlayer</c></b>.</remarks>
NATIVE__ InterpolateCameraPos(playerid, Float:fromX, Float:fromY, Float:fromZ, Float:toX, Float:toY, Float:toZ, time, cut = CAMERA_CUT) \
	= bool:Player_MoveCameraPosition(Player:playerid, Float:fromX, Float:fromY, Float:fromZ, Float:toX, Float:toY, Float:toZ, time, CameraMovement:movementType = CAMERA_MOVEMENT_CUT);

/// <summary>Interpolate a player's camera's 'look at' point between two coordinates with a set speed. Can be be used with <a href="#InterpolateCameraPos">InterpolateCameraPos</a>.</summary>
/// <param name="playerid">The ID of the player the camera should be moved for</param>
/// <param name="fromX">The X position the camera should start to move from</param>
/// <param name="fromY">The Y position the camera should start to move from</param>
/// <param name="fromZ">The Z position the camera should start to move from</param>
/// <param name="toX">The X position the camera should move to</param>
/// <param name="toY">The Y position the camera should move to</param>
/// <param name="toZ">The Z position the camera should move to</param>
/// <param name="time">Time in milliseconds to complete interpolation</param>
/// <param name="cut">The 'jumpcut' to use. Set to <b><c>CAMERA_MOVE</c></b> for interpolation (optional=<b><c>CAMERA_CUT</c></b>)</param>
/// <seealso name="InterpolateCameraPos"/>
/// <seealso name="SetPlayerCameraLookAt"/>
/// <seealso name="SetPlayerCameraPos"/>
/// <remarks>This function was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>Use <b><c>togglePlayerSpectating</c></b> to make objects stream in for the player while the camera is moving. You can reset the camera behind the player with <b><c>SetCameraBehindPlayer</c></b>.</remarks>
NATIVE__ InterpolateCameraLookAt(playerid, Float:fromX, Float:fromY, Float:fromZ, Float:toX, Float:toY, Float:toZ, time, cut = CAMERA_CUT) \
	= bool:Player_MoveCameraTarget(Player:playerid, Float:fromX, Float:fromY, Float:fromZ, Float:toX, Float:toY, Float:toZ, time, CameraMovement:movementType = CAMERA_MOVEMENT_CUT);

/// <summary>You can use this function to attach the player camera to objects.</summary>
/// <param name="playerid">The ID of the player which will have your camera attached on object</param>
/// <param name="objectid">The object id which you want to attach the player camera</param>
/// <seealso name="Player_AttachCameraToObject"/>
/// <remarks>You need to create the object first, before attempting to attach a player camera for that.</remarks>
OLD_NATIVE__ AttachCameraToObject(playerid, objectid);

/// <summary>Attaches a player's camera to a player-object. The player is able to move their camera while it is attached to an object. Can be used with MovePlayerObject and AttachPlayerObjectToVehicle.</summary>
/// <param name="playerid">The ID of the player which will have their camera attached to a player-object</param>
/// <param name="playerobjectid">The ID of the player-object to which the player's camera will be attached</param>
/// <seealso name="AttachCameraToObject"/>
/// <seealso name="Player_SetCameraPosition"/>
/// <seealso name="Player_SetCameraLookAt"/>
/// <remarks>The player-object must be created before attempting to attach the player's camera to it.</remarks>
OLD_NATIVE__ AttachCameraToPlayerObject(Player:playerid, playerobjectid);

// Player conditionals

/// <summary>Checks if a player is connected (if an ID is taken by a connected player).</summary>
/// <param name="playerid">The ID of the player to check</param>
/// <seealso name="IsPlayerAdmin"/>
/// <seealso name="OnPlayerConnect"/>
/// <seealso name="OnPlayerDisconnect"/>
/// <remarks>This function can be omitted in a lot of cases. Many other functions already have some sort of connection check built in.</remarks>
/// <returns><b><c>1</c></b> if the player is connected, <b><c>0</c></b> if not.</returns>
NATIVE__ IsPlayerConnected(playerid) \
	= bool:Player_IsConnected(Player:playerid);

/// <summary>Checks if a player is in a specific vehicle.</summary>
/// <param name="playerid">ID of the player</param>
/// <param name="vehicleid">ID of the vehicle</param>
/// <seealso name="IsPlayerInAnyVehicle"/>
/// <seealso name="GetPlayerVehicleSeat"/>
/// <returns><b><c>1</c></b> if the player is in the vehicle, <b><c>0</c></b> if not.</returns>
NATIVE__ IsPlayerInVehicle(playerid, vehicleid) \
	= bool:Player_IsInVehicle(Player:playerid, Vehicle:vehicleid = INVALID_VEHICLE_ID);

/// <summary>Check if a player is inside any vehicle (as a driver or passenger).</summary>
/// <param name="playerid">The ID of the player to check</param>
/// <seealso name="IsPlayerInVehicle"/>
/// <seealso name="GetPlayerVehicleSeat"/>
/// <returns><b><c>1</c></b> if the player is in a vehicle, <b><c>0</c></b> if not.</returns>
OLD_NATIVE__ IsPlayerInAnyVehicle(playerid)
	return Player_IsInVehicle(Player:playerid, Vehicle:INVALID_VEHICLE_ID);

/// <summary>Set the virtual world of a player. They can only see other players or vehicles that are in that same world.</summary>
/// <param name="playerid">The ID of the player you want to set the virtual world of</param>
/// <param name="worldid">The virtual world ID to put the player in</param>
/// <seealso name="GetPlayerVirtualWorld"/>
/// <seealso name="SetVehicleVirtualWorld"/>
/// <remarks>The default virtual world is <b><c>0</c></b></remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. This means the player is not connected.
/// </returns>
NEW_NATIVE__ bool:Player_SetVirtualWorld(Player:playerid, worldid, VWSetType:set = VW_UNIQUE)
	return SetPlayerVirtualWorld(_:playerid, worldid);

OLD_NATIVE__ SetPlayerVirtualWorld(playerid, worldid)
	return Player_SetVirtualWorld(Player:playerid, worldid, VW_UNIQUE);

/// <summary>Retrieves the current virtual world the player is in.</summary>
/// <param name="playerid">The ID of the player to get the virtual world of</param>
/// <seealso name="SetPlayerVirtualWorld"/>
/// <seealso name="GetVehicleVirtualWorld"/>
/// <seealso name="GetPlayerInterior"/>
/// <returns>The ID of the virtual world the player is currently in.</returns>
NATIVE__ GetPlayerVirtualWorld(playerid) \
    = Player_GetVirtualWorld(Player:playerid);

// Insane Stunts

/// <summary>Toggle stunt bonuses for a player. Enabled by default.</summary>
/// <param name="playerid">The ID of the player to toggle stunt bonuses for</param>
/// <param name="enable"><b><c>1</c></b> to enable stunt bonuses and <b><c>0</c></b> to disable them</param>
/// <seealso name="EnableStuntBonusForAll"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player is not connected.
/// </returns>
NATIVE__ EnableStuntBonusForPlayer(playerid, enable) \
	= bool:Player_SetStuntBonuses(Player:playerid, bool:enabled);

/// <summary>Toggle whether a player is in spectator mode or not. While in spectator mode a player can spectate (watch) other players and vehicles. After using this function, either <a href="#PlayerSpectatePlayer">PlayerSpectatePlayer</a> or <a href="#PlayerSpectateVehicle">PlayerSpectateVehicle</a> needs to be used.</summary>
/// <param name="playerid">The ID of the player who should spectate</param>
/// <param name="toggle"><b><c>1</c></b> to enable spectating and <b><c>0</c></b> to disable</param>
/// <seealso name="PlayerSpectatePlayer"/>
/// <seealso name="PlayerSpectateVehicle"/>
/// <remarks>If the player is not loaded in before setting the spectate status to false, the connection can be closed unexpectedly.</remarks>
/// <remarks>When spectator mode is disabled, <a href="#OnPlayerSpawn">OnPlayerSpawn</a> will automatically be called, if you wish to restore player to state before spectating, you will have to handle that in <a href="#OnPlayerSpawn">OnPlayerSpawn</a>. Note also, that player can also go to class selection before if they used F4 during spectate, a player also CAN die in spectate mode due to various glitches.</remarks>
/// <remarks>When a player is in spectate mode their HUD is hidden, making it useful for setting a player's camera without the HUD. Also, objects near the player's camera will be streamed in, making this useful for interpolating cameras.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player does not exist.
/// </returns>
NATIVE__ TogglePlayerSpectating(playerid, toggle) \
	= bool:Player_ToggleSpectating(Player:playerid, bool:toggle);

/// <summary>Makes a player spectate (watch) another player.</summary>
/// <param name="playerid">The ID of the player that will spectate</param>
/// <param name="targetplayerid">The ID of the player that should be spectated</param>
/// <param name="mode">The mode to spectate with (optional=<b><c>SPECTATE_MODE_NORMAL</c></b>)</param>
/// <seealso name="PlayerSpectateVehicle"/>
/// <seealso name="TogglePlayerSpectating"/>
/// <remarks>Order is CRITICAL! Ensure that you use <a href="#TogglePlayerSpectating">TogglePlayerSpectating</a> before <a href="#PlayerSpectatePlayer">PlayerSpectatePlayer</a>. </remarks>
/// <remarks>playerid and targetplayerid's virtual world and interior must be the same for this function to work properly. </remarks>
/// <remarks>
///   <b>Spectate modes:</b><p/>
///   <ul>
///     <li><b><c>SPECTATE_MODE_NORMAL</c></b> - normal spectate mode (third person point of view). Camera can not be changed.</li>
///     <li><b><c>SPECTATE_MODE_FIXED </c></b> - use SetPlayerCameraPos after this to position the player's camera, and it will track the player/vehicle set with PlayerSpectatePlayer/PlayerSpectateVehicle.</li>
///     <li><b><c>SPECTATE_MODE_SIDE</c></b> - the camera will be attached to the side of the player/vehicle (like when you're in first-person camera on a bike and you do a wheelie).</li>
///   </ul>
/// </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. One of the players specified does not exist.
/// </returns>
NATIVE__ PlayerSpectatePlayer(playerid, targetplayerid, mode = SPECTATE_MODE_NORMAL) \
	= bool:Player_SpectatePlayer(Player:playerid, Player:targetplayerid, SpectateCamera:mode = SPECTATE_CAMERA_NORMAL);

/// <summary>Sets a player to spectate another vehicle. Their camera will be attached to the vehicle as if they are driving it.</summary>
/// <param name="playerid">The ID of the player who should spectate a vehicle</param>
/// <param name="targetvehicleid">The ID of the vehicle the player should spectate</param>
/// <param name="mode">The spectate mode. Can generally be left blank as it defaults to 'normal'</param>
/// <seealso name="PlayerSpectatePlayer"/>
/// <seealso name="TogglePlayerSpectating"/>
/// <remarks>Order is CRITICAL! Ensure that you use <a href="#TogglePlayerSpectating">TogglePlayerSpectating</a> before <a href="#PlayerSpectatePlayer">PlayerSpectatePlayer</a>. </remarks>
/// <remarks>playerid and targetvehicleid have to be in the same interior for this function to work properly. </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully. Note that success is reported if the player is not in spectator mode (<a href="#TogglePlayerSpectating">TogglePlayerSpectating</a>), but nothing will happen. <a href="#TogglePlayerSpectating">TogglePlayerSpectating</a> MUST be used first.<p/>
///   <b><c>0</c></b>: The function failed to execute. The player, vehicle, or both don't exist.
/// </returns>
NATIVE__ PlayerSpectateVehicle(playerid, targetvehicleid, mode = SPECTATE_MODE_NORMAL) \
	= bool:Player_SpectateVehicle(Player:playerid, Vehicle:targetvehicleid, SpectateCamera:mode = SPECTATE_CAMERA_NORMAL);

/// <summary>Starts recording a player's movements to a file, which can then be reproduced by an NPC.</summary>
/// <param name="playerid">The ID of the player to record</param>
/// <param name="recordtype">The type of recording</param>
/// <param name="recordname">The name of the file which will hold the recorded data. It will be saved in the scriptfiles directory, with an automatically added .rec extension, you will need to move the file to npcmodes/recordings to use for playback</param>
/// <seealso name="StopRecordingPlayerData"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
NATIVE__ StartRecordingPlayerData(playerid, recordtype, const recordname[]) \
	= bool:Player_StartRecordingData(Player:playerid, NPCRecordingType:recordtype, const recordname[]);

/// <summary>Stops all the recordings that had been started with <a href="#StartRecordingPlayerData">StartRecordingPlayerData</a> for a specific player.</summary>
/// <param name="playerid">The player you want to stop the recordings of</param>
/// <seealso name="StartRecordingPlayerData"/>
/// <remarks>This function was added in <b>SA-MP 0.3a</b> and will not work in earlier versions!</remarks>
NATIVE__ StopRecordingPlayerData(playerid) \
	= bool:Player_StopRecordingData(Player:playerid);

// Explosion

/// <summary>Creates an explosion that is only visible to a single player. This can be used to isolate explosions from other players or to make them only appear in specific <a href="http://wiki.sa-mp.com/wiki/SetPlayerVirtualWorld">virtual worlds</a>.</summary>
/// <param name="playerid">The ID of the player to create the explosion for</param>
/// <param name="x">The X coordinate of the explosion</param>
/// <param name="y">The Y coordinate of the explosion</param>
/// <param name="z">The Z coordinate of the explosion</param>
/// <param name="type">The explosion type</param>
/// <param name="radius">The radius of the explosion</param>
/// <seealso name="CreateExplosion"/>
/// <remarks>This function was added in <b>SA-MP 0.3z R2-2</b> and will not work in earlier versions!</remarks>
/// <remarks>There is a limit as to how many explosions can be seen at once by a player. This is roughly 10.</remarks>
/// <returns>This function always returns <b><c>1</c></b>, even if the function failed to excute (player doesn't exist, invalid radius, or invalid explosion type).</returns>
NATIVE__ CreateExplosionForPlayer(playerid, Float:x, Float:y, Float:z, type, Float:radius) \
	= bool:Player_CreateExplosion(Player:playerid, Float:x, Float:y, Float:z, type, Float:radius);

/// <summary>Perform a memory check on the client.</summary>
/// <param name="playerid">The ID of the player to check</param>
/// <param name="type">The type of check to perform</param>
/// <param name="memAddr">The base address to check</param>
/// <param name="memOffset">The offset from the base address</param>
/// <param name="byteCount">The number of bytes to check</param>
NATIVE__ SendClientCheck(playerid, type, memAddr, memOffset, byteCount) \
	= bool:Player_SendClientCheck(Player:playerid, CheckType:type, memAddr, memOffset, byteCount);


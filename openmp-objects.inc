#if defined _inc_omp_objects
	#endinput
#endif
#define _inc_omp_objects
#define _INC_a_objects
#define _objects_included

#define SAMP_CONST_CORRECT

#pragma tabsize 4

_OPENMP_TAG(Object);

const TAG__<Object>:MAX_OBJECTS = 1000;

const TAG__<Object>:INVALID_OBJECT_ID = 0xFFFF;

// Creation
/// <summary>Creates an object at specified coordinates in the game world.</summary>
/// <param name="modelid">The model to create</param>
/// <param name="X">The X coordinate to create the object at</param>
/// <param name="Y">The Y coordinate to create the object at</param>
/// <param name="Z">The Z coordinate to create the object at</param>
/// <param name="rX">The X rotation of the object</param>
/// <param name="rY">The Y rotation of the object</param>
/// <param name="rZ">The Z rotation of the object</param>
/// <param name="DrawDistance">The distance that San Andreas renders objects at. <b><c>0.0</c></b> will cause objects to render at their default distances. <b>Usable since 0.3b, limited to <c>300</c> prior to 0.3x</b> (optional=<b><c>0.0</c></b>)</param>
/// <seealso name="DestroyObject"/>
/// <seealso name="IsValidObject"/>
/// <seealso name="CreatePlayerObject"/>
/// <seealso name="MoveObject"/>
/// <seealso name="SetObjectPos"/>
/// <seealso name="SetObjectRot"/>
/// <seealso name="GetObjectPos"/>
/// <seealso name="GetObjectRot"/>
/// <seealso name="AttachObjectToPlayer"/>
/// <seealso name="SetObjectMaterialText"/>
/// <seealso name="SetObjectMaterial"/>
/// <remarks>
///   Objects that emit light (lampposts, police lights, bollard lights, neons etc.) that have a greater rotation than <b><c>16.26</c></b> degrees (or <b><c>-16.26</c></b>) on either the X or Y axis will stop shining. This effect also applies to light objects attached to other objects, players and vehicles.
///   If a light object is attached to a car and the car is rotated over <b><c>16.26</c></b> degrees (like in a rollover), the object will also stop emitting light. This is a GTA:SA issue and is not caused by a bug in SA-MP.
/// </remarks>
/// <remarks>In case the light is attached to another object, one fix for this is to set <b>SyncRotation</b> to false in <a href="#AttachObjectToObject">AttachObjectToObject</a>. This will ensure the light stays at <b><c>0</c></b> rotation. This would only really work for objects that consist ONLY of light, so wouldn't work for the police light for example. </remarks>
/// <remarks>There is a limit of <a href="http://wiki.sa-mp.com/wiki/Limits"><b><c>1000</c></b> objects (<b><c>MAX_OBJECTS</c></b>)</a>. To circumvent this limit, you can use a <a href="http://forum.sa-mp.com/showthread.php?t=102865">streamer</a></remarks>
/// <returns>The ID of the object that was created, or <b><c>INVALID_OBJECT_ID</c></b> if the object limit (<b><c>MAX_OBJECTS</c></b>) was reached.</returns>
NEW_NATIVE__ Object:Object@Create(model, Float:posX, Float:posY, Float:posZ, Float:rotX, Float:rotY, Float:rotZ) = Object__Create;

/// <summary>Checks if an object with the ID provided exists.</summary>
/// <param name="objectid">The ID of the object to check the existence of</param>
/// <seealso name="IsValidPlayerObject"/>
/// <seealso name="CreateObject"/>
/// <seealso name="DestroyObject"/>
/// <remarks>This is to check if an object exists, not if a model is valid.</remarks>
/// <returns><b><c>1</c></b> if the object exists, <b><c>0</c></b> if not.</returns>
NEW_NATIVE__ bool:Object@IsValid(Object:objectid) = Object__IsValid;

/// <summary>Destroys (removes) an object that was created using <a href="#CreateObject">CreateObject</a>.</summary>
/// <param name="objectid">The ID of the object to destroy. Returned by <a href="#CreateObject">CreateObject</a></param>
/// <seealso name="CreateObject"/>
/// <seealso name="IsValidObject"/>
/// <seealso name="DestroyPlayerObject"/>
NEW_NATIVE__ bool:Object@Destroy(Object:objectid) = Object__Destroy;

/// <summary>Allows camera collisions with newly created objects to be disabled by default.</summary>
/// <param name="disable"><b><c>1</c></b> to disable camera collisions for newly created objects and <b><c>0</c></b> to enable them (enabled by default)</param>
/// <seealso name="SetObjectNoCameraCol"/>
/// <seealso name="SetPlayerObjectNoCameraCol"/>
/// <remarks>This function was added in <b>SA-MP 0.3.7</b> and will not work in earlier versions!</remarks>
/// <remarks>This function only affects the camera collision of objects created AFTER its use - it does not toggle existing objects' camera collisions.</remarks>
/// <remarks>This only works outside the map boundaries (past <b><c>-3000</c></b>/<b><c>3000</c></b> units on the x and/or y axis).</remarks>
NEW_NATIVE__ bool:Object@ToggleClipping(bool:set) = Object__ToggleClipping;

// Attachment

/// <summary>Attach an object to a vehicle.</summary>
/// <param name="objectid">The ID of the object to attach to the vehicle. Note that this is an object ID, not a model ID. The object must be CreateObject created first</param>
/// <param name="vehicleid">The ID of the vehicle to attach the object to</param>
/// <param name="OffsetX">The X axis offset from the vehicle to attach the object to</param>
/// <param name="OffsetY">The Y axis offset from the vehicle to attach the object to</param>
/// <param name="OffsetZ">The Z axis offset from the vehicle to attach the object to</param>
/// <param name="RotX">The X rotation offset for the object</param>
/// <param name="RotY">The Y rotation offset for the object</param>
/// <param name="RotZ">The Z rotation offset for the object</param>
/// <seealso name="AttachObjectToPlayer"/>
/// <seealso name="AttachObjectToObject"/>
/// <seealso name="AttachPlayerObjectToVehicle"/>
/// <seealso name="CreateObject"/>
/// <remarks>This function was added in <b>SA-MP 0.3c</b> and will not work in earlier versions!</remarks>
/// <remarks>The object must be created first.</remarks>
/// <remarks>When the vehicle is destroyed or respawned, the attached objects won't be destroyed with it; they will remain stationary at the position the vehicle disappeared and be reattached to the next vehicle to claim the vehicle ID that the objects were attached to.</remarks>
NEW_NATIVE__ bool:Object_AttachToVehicle(Object:objectid, Vehicle:parentid, Float:offsetX, Float:offsetY, Float:offsetZ, Float:rotX, Float:rotY, Float:rotZ);
NEW_NATIVE__ bool:Object_TryGetParentVehicle(Object:objectid, &Vehicle:parentid);
NEW_NATIVE__ bool:Object_DetachFromVehicle(Object:objectid, Vehicle:parentid = Vehicle:INVALID_VEHICLE_ID);
stock Vehicle:Object_GetParentVehicle(Object:objectid)
	return Object_TryGetParentVehicle(objectid, Vehicle:objectid) ? (Vehicle:objectid) : (Vehicle:INVALID_VEHICLE_ID);

/// <summary>You can use this function to attach objects to other objects. The objects will folow the main object.</summary>
/// <param name="objectid">The object to attach to another object</param>
/// <param name="attachtoid">The object to attach the object to</param>
/// <param name="OffsetX">The distance between the main object and the object in the X direction</param>
/// <param name="OffsetY">The distance between the main object and the object in the Y direction</param>
/// <param name="OffsetZ">The distance between the main object and the object in the Z direction</param>
/// <param name="RotX">The X rotation between the object and the main object</param>
/// <param name="RotY">The Y rotation between the object and the main object</param>
/// <param name="RotZ">The Z rotation between the object and the main object</param>
/// <param name="SyncRotation">If set to <b><c>0</c></b>, objectid's rotation will not change with <paramref name="attachtoid"/>'s (optional=<b><c>1</c></b>)</param>
/// <seealso name="AttachObjectToPlayer"/>
/// <seealso name="AttachObjectToVehicle"/>
/// <seealso name="CreateObject"/>
/// <remarks>This function was added in <b>SA-MP 0.3d</b> and will not work in earlier versions!</remarks>
/// <remarks>
///   <ul>
///     <li>Both objects need to be created before attempting to attach them.</li>
///     <li>There is no player-object version of this function (AttachPlayerObjectToObject), meaning it will not be supported by streamers.</li>
///   </ul>
/// </remarks>
/// <returns>
/// <b><c>1</c></b>: The function executed successfully.<p/>
/// <b><c>0</c></b>: The function failed to execute. This means the first object (<paramref name="objectid"/>) does not exist. There are no internal checks to verify that the second object (<paramref name="attachtoid"/>) exists.
/// </returns>
NEW_NATIVE__ bool:Object_AttachToObject(Object:objectid, Object:parent, Float:offsetX, Float:offsetY, Float:offsetZ, Float:rotX, Float:rotY, Float:rotZ, bool:syncRotation = true);
NEW_NATIVE__ bool:Object_TryGetParentObject(Object:objectid, &Object:parentid);
NEW_NATIVE__ bool:Object_DetachFromObject(Object:objectid, Object:parentid = Object:INVALID_OBJECT_ID);
stock Object:Object_GetParentObject(Object:objectid)
	return Object_TryGetParentObject(objectid, Object:objectid) ? (Object:objectid) : (Object:INVALID_OBJECT_ID);

/// <summary>Attach an object to a player.</summary>
/// <param name="objectid">The ID of the object to attach to the player</param>
/// <param name="playerid">The ID of the player to attach the object to</param>
/// <param name="OffsetX">The distance between the player and the object in the X direction</param>
/// <param name="OffsetY">The distance between the player and the object in the Y direction</param>
/// <param name="OffsetZ">The distance between the player and the object in the Z direction</param>
/// <param name="RotX">The X rotation between the object and the player</param>
/// <param name="RotY">The Y rotation between the object and the player</param>
/// <param name="RotZ">The Z rotation between the object and the player</param>
/// <seealso name="AttachObjectToVehicle"/>
/// <seealso name="AttachObjectToObject"/>
/// <seealso name="AttachPlayerObjectToPlayer"/>
/// <seealso name="SetPlayerAttachedObject"/>
/// <seealso name="CreateObject"/>
/// <returns>This function always returns <b><c>0</c></b>.</returns>
NEW_NATIVE__ bool:Object_AttachToPlayer(Object:objectid, Player:parentid, Float:offsetX, Float:offsetY, Float:offsetZ, Float:rotX, Float:rotY, Float:rotZ);
NEW_NATIVE__ bool:Object_TryGetParentPlayer(Object:objectid, &Player:parentid);
NEW_NATIVE__ bool:Object_DetachFromPlayer(Object:objectid, Player:parentid = Player:INVALID_PLAYER_ID);
stock Player:Object_GetParentPlayer(Object:objectid)
	return Object_TryGetParentPlayer(objectid, Player:objectid) ? (Player:objectid) : (Player:INVALID_PLAYER_ID);

NEW_NATIVE__ bool:Object_Detach(Object:objectid);
//stock bool:Object_Detach(Object:objectid)
//{
//	new parent = 0;
//	if (Object_TryGetParentPlayer(objectid, Player:parent))
//	{
//		return Object_DetachFromPlayer(objectid, Player:parent);
//	}
//	if (Object_TryGetParentVehicle(objectid, Vehicle:parent))
//	{
//		return Object_DetachFromVehicle(objectid, Vehicle:parent);
//	}
//	if (Object_TryGetParentObject(objectid, Object:parent))
//	{
//		return Object_DetachFromObject(objectid, Object:parent);
//	}
//	return false;
//}

// Properties
/// <summary>Get the position of an object.</summary>
/// <param name="objectid">The ID of the object to get the position of.</param>
/// <param name="X">A variable in which to store the X coordinate, passed by reference</param>
/// <param name="Y">A variable in which to store the Y coordinate, passed by reference</param>
/// <param name="Z">A variable in which to store the Z coordinate, passed by reference</param>
/// <seealso name="SetObjectPos"/>
/// <seealso name="GetObjectRot"/>
/// <seealso name="SetPlayerObjectPos"/>
/// <seealso name="CreateObject"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The specified object does not exist.
/// </returns>
NEW_NATIVE__ bool:Object_GetPosition(Object:objectid, &Float:posX, &Float:posY, &Float:posZ);

/// <summary>Change the position of an object.</summary>
/// <param name="objectid">The ID of the object to set the position of. Returned by <a href="#CreateObject">CreateObject</a></param>
/// <param name="X">The X coordinate to position the object at</param>
/// <param name="Y">The Y coordinate to position the object at</param>
/// <param name="Z">The Z coordinate to position the object at</param>
/// <seealso name="GetObjectPos"/>
/// <seealso name="SetObjectRot"/>
/// <seealso name="GetPlayerObjectPos"/>
/// <seealso name="CreateObject"/>
/// <returns>This function always returns <b><c>1</c></b>, even if the object specified does not exist.</returns>
NEW_NATIVE__ bool:Object_SetPosition(Object:objectid, Float:posX, Float:posY, Float:posZ);

/// <summary>Use this function to get the objects current rotation. The rotation is saved by reference in three RotX/RotY/RotZ variables.</summary>
/// <param name="objectid">The objectid of the object you want to get the rotation from</param>
/// <param name="RotX">The variable to store the X rotation, passed by reference</param>
/// <param name="RotY">The variable to store the Y rotation, passed by reference</param>
/// <param name="RotZ">The variable to store the Z rotation, passed by reference</param>
/// <seealso name="SetObjectRot"/>
/// <seealso name="SetObjectPos"/>
/// <seealso name="SetPlayerObjectRot"/>
/// <seealso name="CreateObject"/>
/// <returns>The object's rotation is stored in the referenced variables, not in the return value.</returns>
NEW_NATIVE__ bool:Object_GetRotation_E(Object:objectid, &Float:x, &Float:y, &Float:z);
forward bool:Object_GetRotation_Q(Object:objectid, &Float:w, &Float:x, &Float:y, &Float:z);
stock Float:Object_GetRotation_Z(Object:objectid)
	return Object_GetRotation_E(objectid, __FLOAT, __FLOAT, __FLOAT) ? (__FLOAT): (FLOAT_NAN);

#define Object_GetRotation(%0) Object_GetRotation_Z(%0)
#define Object_GetRotation_Z(%0,%1) Object_GetRotation_E(%0,%1)
#define Object_GetRotation_E(%0,%1,%2,%3,%4) Object_GetRotation_Q(%0,%1,%2,%3,%4)
#define _ALS_Object_GetRotation

/// <summary>Set the rotation of an object on the three axes (X, Y and Z).</summary>
/// <param name="objectid">The ID of the object to set the rotation of</param>
/// <param name="RotX">The X rotation</param>
/// <param name="RotY">The Y rotation</param>
/// <param name="RotZ">The Z rotation</param>
/// <seealso name="GetObjectRot"/>
/// <seealso name="GetObjectPos"/>
/// <seealso name="CreateObject"/>
/// <seealso name="SetPlayerObjectRot"/>
/// <returns>This function always returns <b><c>1</c></b>, even if the object doesn't exist.</returns>
native bool:Object_SetRotation_E(Object:objectid, Float:x, Float:y, Float:z);
forward bool:Object_SetRotation_Q(Object:objectid, Float:w, Float:x, Float:y, Float:z);
stock bool:Object_SetRotation_Z(Object:objectid, Float:z)
	return Object_SetRotation_E(objectid, 0.0, 0.0, z);

#define Object_SetRotation(%0) Object_SetRotation_Z(%0)
#define Object_SetRotation_Z(%0,%1,%2) Object_SetRotation_E(%0,%1,%2)
#define Object_SetRotation_E(%0,%1,%2,%3,%4) Object_SetRotation_Q(%0,%1,%2,%3,%4)
#define _ALS_Object_SetRotation

/// <summary>Get the model ID of an object.</summary>
/// <param name="objectid">The ID of the object to get the model of</param>
/// <seealso name="GetPlayerObjectModel"/>
/// <seealso name="CreateObject"/>
/// <remarks>This function was added in <b>SA-MP 0.3.7</b> and will not work in earlier versions!</remarks>
/// <returns>The model ID of the object. <b><c>-1</c></b> if <paramref name="objectid"/> does not exist.</returns>
NEW_NATIVE__ Object_GetModel(Object:objectid);
NEW_NATIVE__ bool:Object_SetModel(Object:objectid, model);

NEW_NATIVE__ Float:Object_GetStreamDistance(Object:objectid);
NEW_NATIVE__ bool:Object_SetStreamDistance(Object:objectid, Float:distance);
NEW_NATIVE__ Float:Object_GetDrawDistance(Object:object);
NEW_NATIVE__ bool:Object_SetDrawDistance(Object:object, Float:distance);

/// <summary>Disable collisions between players' cameras and the specified object.</summary>
/// <param name="objectid">The ID of the object to disable camera collisions on</param>
/// <seealso name="SetObjectsDefaultCameraCol"/>
/// <seealso name="SetPlayerObjectNoCameraCol"/>
/// <remarks>This function was added in <b>SA-MP 0.3.7</b> and will not work in earlier versions! </remarks>
/// <remarks>This only works outside the map boundaries (past <b><c>-3000</c></b>/<b><c>3000</c></b> units on the x and/or y axis).</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. The object specified does not exist.
/// </returns>
NEW_NATIVE__ bool:Object_ToggleClipping(Object:objectid, bool:solid);

NEW_NATIVE__ bool:Object_HasMaterial(Object:objectid, materialIndex);
NEW_NATIVE__ bool:Object_HasMaterialText(Object:objectid, materialIndex);
NEW_NATIVE__ bool:Object_RemoveMaterial(Object:objectid, materialIndex);

/// <summary>Replace the texture of an object with the texture from another model in the game.</summary>
/// <param name="objectid">The ID of the object to change the texture of</param>
/// <param name="materialindex">The material index on the object to change (<b><c>0</c></b> to <b><c>15</c></b>)</param>
/// <param name="modelid">The modelid on which the replacement texture is located. Use <b><c>0</c></b> for alpha. Use <b><c>-1</c></b> to change the material color without altering the texture</param>
/// <param name="txdname">The name of the txd file which contains the replacement texture (use <b><c>"none"</c></b> if not required)</param>
/// <param name="texturename">The name of the texture to use as the replacement (use <b><c>"none"</c></b> if not required)</param>
/// <param name="materialcolor">The object color to set, as an integer or hex in <b>ARGB</b> color format. Using <b><c>0</c></b> keeps the existing material color (optional=<b><c>0</c></b>)</param>
/// <seealso name="SetPlayerObjectMaterial"/>
/// <seealso name="SetObjectMaterialText"/>
/// <remarks>This function was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>Vertex lightning of the object will disappear if material color is changed.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute.
/// </returns>
NEW_NATIVE__ bool:Object_SetMaterial(Object:objectid, materialIndex, model, const string:textureLibrary[], const string:textureName[], materialColour = 0);
NEW_NATIVE__ bool:Object_GetMaterial(Object:objectid, &materialIndex, &model, string:textureLibrary[], string:textureName[], &materialColour, textureLibrarySize = sizeof (textureLibrary), textureNameSize = sizeof (textureName));

/// <summary>Replace the texture of an object with text.</summary>
/// <param name="objectid">The ID of the object to replace the texture of with text</param>
/// <param name="text">The text to show on the object. (MAX <b>2048</b> characters)</param>
/// <param name="materialindex">The object's material index to replace with text (optional=<b><c>0</c></b>)</param>
/// <param name="materialsize">The size of the material (optional=<b><c>OBJECT_MATERIAL_SIZE_256x128</c></b>)</param>
/// <param name="fontface">The font to use (optional=<b><c>"Arial"</c></b>)</param>
/// <param name="fontsize">The size of the text (MAX <b>255</b>) (optional=<b><c>24</c></b>)</param>
/// <param name="bold">Bold text. Set to <b><c>1</c></b> for bold, <b><c>0</c></b> for not (optional=<b><c>1</c></b>)</param>
/// <param name="fontcolor">The color of the text, in <b>ARGB</b> format (optional=<b><c>-1</c></b>)</param>
/// <param name="backcolor">The background color, in <b>ARGB</b> format (optional=<b><c>0</c></b>)</param>
/// <param name="textalignment">The alignment of the text (optional=<b><c>OBJECT_MATERIAL_TEXT_ALIGN_LEFT</c></b>)</param>
/// <seealso name="SetPlayerObjectMaterialText"/>
/// <seealso name="SetObjectMaterial"/>
/// <remarks>This function was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>Color embedding can be used for multiple colors in the text.</remarks>
/// <remarks>
///   <b>Alignment:</b><p/>
///   <ul>
///     <li><b><c>OBJECT_MATERIAL_TEXT_ALIGN_LEFT</c></b> 0</li>
///     <li><b><c>OBJECT_MATERIAL_TEXT_ALIGN_CENTER</c></b> 1</li>
///     <li><b><c>OBJECT_MATERIAL_TEXT_ALIGN_RIGHT</c></b> 2</li>
///   </ul>
/// </remarks>
/// <remarks>
///   <b>Sizes:</b><p/>
///   <ul>
///     <li><b><c>OBJECT_MATERIAL_SIZE_32x32</c></b> 10</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_64x32</c></b> 20</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_64x64</c></b> 30</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_128x32</c></b> 40</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_128x64</c></b> 50</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_128x128</c></b> 60</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_256x32</c></b> 70</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_256x64</c></b> 80</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_256x128</c></b> 90</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_256x256</c></b> 100</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_512x64</c></b> 110</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_512x128</c></b> 120</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_512x256</c></b> 130</li>
///     <li><b><c>OBJECT_MATERIAL_SIZE_512x512</c></b> 140</li>
///   </ul>
/// </remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute.
/// </returns>
NEW_NATIVE__ bool:Object_SetMaterialText(Object:objectid, materialIndex, const string:text[], MaterialSizeTag:materialSize = MATERIAL_SIZE_256x128, const string:fontFace[] = "Arial", fontSize = 24, bool:bold = true, fontColour = 0xFFFFFFFF, backgroundColour = 0, MaterialTextAlignTag:textAlignment = MATERIAL_TEXT_ALIGN_LEFT);
NEW_NATIVE__ bool:Object_GetMaterialText(Object:objectid, materialIndex, string:text[], &MaterialSizeTag:materialSize, string:fontFace[], &fontSize, &bool:bold, &fontColour, &backgroundColour, &MaterialTextAlignTag:textAlignment, textSize = sizeof (text), fontFaceSize = sizeof (fontFace));

// Movement
NEW_NATIVE__ bool:Object_GetMoveEndPosition(Object:objectid, &Float:posX, &Float:posY, &Float:posZ);
NEW_NATIVE__ bool:Object_GetMoveEndRotation(Object:objectid, &Float:rotX, &Float:rotY, &Float:rotZ);

/// <summary>Move an object to a new position with a set speed. Players/vehicles will 'surf' the object as it moves.</summary>
/// <param name="objectid">The ID of the object to move</param>
/// <param name="X">The X coordinate to move the object to</param>
/// <param name="Y">The Y coordinate to move the object to</param>
/// <param name="Z">The Z coordinate to move the object to</param>
/// <param name="Speed">The speed at which to move the object (units per second)</param>
/// <param name="RotX">The FINAL X rotation (optional=<b><c>-1000.0</c></b>)</param>
/// <param name="RotY">The FINAL Y rotation (optional=<b><c>-1000.0</c></b>)</param>
/// <param name="RotZ">The FINAL Z rotation (optional=<b><c>-1000.0</c></b>)</param>
/// <seealso name="OnObjectMoved"/>
/// <seealso name="IsObjectMoving"/>
/// <seealso name="StopObject"/>
/// <seealso name="MovePlayerObject"/>
/// <seealso name="SetObjectPos"/>
/// <seealso name="SetObjectRot"/>
/// <seealso name="CreateObject"/>
/// <remarks>This function can be used to make objects rotate smoothly. In order to achieve this however, the object must also be <b>moved</b>. The specified rotation is the rotation the object will have after the movement. Hence the object will not rotate when no movement is applied. For a script example take a look at the ferriswheel.pwn filterscript made by Kye included in the server package (SA-MP 0.3d and above). </remarks>
/// <remarks>To fully understand the above note, you can (but not limited to) increase the z position by <b><c>(+0.001</c></b>) and then (<b><c>-0.001</c></b>) after moving it again, as not changing the X, Y or Z will not rotate the object. </remarks>
/// <returns>The time it will take for the object to move in milliseconds.</returns>
NEW_NATIVE__ bool:Object_Move(Object:objectid, Float:posX, Float:posY, Float:posZ, Float:speed, Float:rotX = FLOAT_NAN, Float:rotY = FLOAT_NAN, Float:rotZ = FLOAT_NAN);

/// <summary>Stop a moving object after <a href="#MoveObject">MoveObject</a> has been used.</summary>
/// <param name="objectid">The ID of the object to stop moving</param>
/// <seealso name="MoveObject"/>
/// <seealso name="IsObjectMoving"/>
/// <seealso name="OnObjectMoved"/>
/// <seealso name="StopPlayerObject"/>
NEW_NATIVE__ bool:Object_Stop(Object:objectid);

/// <summary>Checks if the given objectid is moving.</summary>
/// <param name="objectid">The objectid you want to check if is moving</param>
/// <seealso name="MoveObject"/>
/// <seealso name="StopObject"/>
/// <seealso name="OnObjectMoved"/>
/// <seealso name="IsPlayerObjectMoving"/>
/// <remarks>This function was added in <b>SA-MP 0.3d</b> and will not work in earlier versions!</remarks>
/// <returns><b><c>1</c></b> if the object is moving, <b><c>0</c></b> if not.</returns>
NEW_NATIVE__ bool:Object_IsMoving(Object:objectid);
NEW_NATIVE__ Float:Object_GetMoveSpeed(Object:objectid);

// Visibility
NEW_NATIVE__ bool:Object_Display_A(Object:objectid, bool:set = true);
NEW_NATIVE__ bool:Object_Display_1(Object:objectid, Player:playerid, bool:set);
#define Object_Display(%0) Object_Display_A(%0)
#define Object_Display_A(%0,%1,%2) Object_Display_1(%0,%1,%2)
#define _ALS_Object_Display

NEW_NATIVE__ bool:Object_Inhabit_A(Object:objectid, bool:set = true);
NEW_NATIVE__ bool:Object_Inhabit_1(Object:objectid, vw, bool:set);
#define Object_Inhabit(%0) Object_Inhabit_A(%0)
#define Object_Inhabit_A(%0,%1,%2) Object_Inhabit_1(%0,%1,%2)
#define _ALS_Object_Inhabit

NEW_NATIVE__ bool:Object_Has(Object:objectid, Player:playerid);
NEW_NATIVE__ bool:Object_In(Object:objectid, vw);

// Misc
#pragma deprecated Use `Object@Create` instead.
OLD_NATIVE__ CreateObject(modelid, Float:posX, Float:posY, Float:posZ, Float:rotX, Float:rotY, Float:rotZ, Float:drawDistance = 200.0);

#pragma deprecated Use `Object@IsValid` instead.
OLD_NATIVE__ IsValidObject(objectid);

#pragma deprecated Use `Object@Destroy` instead.
OLD_NATIVE__ DestroyObject(objectid);

#pragma deprecated Use `Object_SetPosition` instead.
OLD_NATIVE__ SetObjectPos(objectid, Float:X, Float:Y, Float:Z);

#pragma deprecated Use `Object_GetPosition` instead.
OLD_NATIVE__ GetObjectPos(objectid, &Float:X, &Float:Y, &Float:Z);

#pragma deprecated Use `Object_SetRotation` instead.
OLD_NATIVE__ SetObjectRot(objectid, Float:rotX, Float:rotY, Float:rotZ);

#pragma deprecated Use `Object_GetRotation` instead.
OLD_NATIVE__ GetObjectRot(objectid, &Float:rotX, &Float:rotY, &Float:rotZ);

#pragma deprecated Use `Object_GetModel` instead.
OLD_NATIVE__ GetObjectModel(objectid);

#pragma deprecated Use `Object_Move` instead.
OLD_NATIVE__ MoveObject(objectid, Float:X, Float:Y, Float:Z, Float:Speed, Float:rotX = -1000.0, Float:rotY = -1000.0, Float:rotZ = -1000.0);

#pragma deprecated Use `Object_ToggleClipping` instead.
OLD_NATIVE__ SetObjectNoCameraCol(objectid);

#pragma deprecated Use `Object_Stop` instead.
OLD_NATIVE__ StopObject(objectid);

#pragma deprecated Use `Object_IsMoving` instead.
OLD_NATIVE__ IsObjectMoving(objectid);

#pragma deprecated Use `Object_AttachToVehicle` instead.
OLD_NATIVE__ AttachObjectToVehicle(objectid, vehicleid, Float:OffsetX, Float:OffsetY, Float:OffsetZ, Float:rotX, Float:rotY, Float:rotZ)

#pragma deprecated Use `Object_AttachToObject` instead.
OLD_NATIVE__ AttachObjectToObject(objectid, attachtoid, Float:OffsetX, Float:OffsetY, Float:OffsetZ, Float:rotX, Float:rotY, Float:rotZ, SyncRotation = 1)

#pragma deprecated Use `Object_AttachToPlayer` instead.
OLD_NATIVE__ AttachObjectToPlayer(objectid, playerid, Float:OffsetX, Float:OffsetY, Float:OffsetZ, Float:rotX, Float:rotY, Float:rotZ)

#pragma deprecated Use `Object_SetMaterial` instead.
OLD_NATIVE__ SetObjectMaterial(objectid, materialindex, modelid, const txdname[], const texturename[], materialcolor = 0x00000000)

#pragma deprecated Use `Object_SetMaterialText` instead.
OLD_NATIVE__ SetObjectMaterialText(objectid, const text[], materialindex = 0, MaterialSizeTag:materialsize = MATERIAL_SIZE_256x128, const fontface[] = "Arial", fontsize = 24, bold = 1, fontcolor = 0xFFFFFFFF, backcolor = 0x00000000, textalignment = 0);

#pragma deprecated Use `Object_Edit` instead.
OLD_NATIVE__ EditObject(playerid, objectid);

#pragma deprecated Use `Object@Create` instead.
OLD_NATIVE__ CreatePlayerObject(playerid, modelid, Float:X, Float:Y, Float:Z, Float:rX, Float:rY, Float:rZ, Float:DrawDistance = 200.0);

#pragma deprecated Use `Object@IsValid` instead.
OLD_NATIVE__ IsValidPlayerObject(playerid, objectid);

#pragma deprecated Use `Object@Destroy` instead.
OLD_NATIVE__ DestroyPlayerObject(playerid, objectid);

#pragma deprecated Use `Object_SetPosition` instead.
OLD_NATIVE__ SetPlayerObjectPos(playerid, objectid, Float:X, Float:Y, Float:Z);

#pragma deprecated Use `Object_GetPosition` instead.
OLD_NATIVE__ GetPlayerObjectPos(playerid, objectid, &Float:X, &Float:Y, &Float:Z);

#pragma deprecated Use `Object_SetRotation` instead.
OLD_NATIVE__ SetPlayerObjectRot(playerid, objectid, Float:rotX, Float:rotY, Float:rotZ);

#pragma deprecated Use `Object_GetRotation` instead.
OLD_NATIVE__ GetPlayerObjectRot(playerid, objectid, &Float:rotX, &Float:rotY, &Float:rotZ);

#pragma deprecated Use `Object_GetModel` instead.
OLD_NATIVE__ GetPlayerObjectModel(playerid, objectid);

#pragma deprecated Use `Object_Move` instead.
OLD_NATIVE__ MovePlayerObject(playerid, objectid, Float:X, Float:Y, Float:Z, Float:Speed, Float:rotX = -1000.0, Float:rotY = -1000.0, Float:rotZ = -1000.0);

#pragma deprecated Use `Object_ToggleClipping` instead.
OLD_NATIVE__ SetPlayerObjectNoCameraCol(playerid, objectid);

#pragma deprecated Use `Object_Stop` instead.
OLD_NATIVE__ StopPlayerObject(playerid, objectid);

#pragma deprecated Use `Object_IsMoving` instead.
OLD_NATIVE__ IsPlayerObjectMoving(playerid, objectid);

#pragma deprecated Use `Object_SetMaterial` instead.
OLD_NATIVE__ SetPlayerObjectMaterial(playerid, objectid, materialindex, modelid, const txdname[], const texturename[], materialcolor = 0x00000000);

#pragma deprecated Use `Object_SetMaterialText` instead.
OLD_NATIVE__ SetPlayerObjectMaterialText(playerid, objectid, const text[], materialindex = 0, materialsize = 90, const fontface[] = "Arial", fontsize = 24, bold = 1, fontcolor = 0xFFFFFFFF, backcolor = 0x00000000, textalignment = 0);

#pragma deprecated Use `Object_AttachToVehicle` instead.
OLD_NATIVE__ AttachPlayerObjectToVehicle(playerid, objectid, vehicleid, Float:fOffsetX, Float:fOffsetY, Float:fOffsetZ, Float:fRotX, Float:fRotY, Float:rotZ);

#pragma deprecated Use `Object_AttachToVehicle` instead.
OLD_NATIVE__ AttachPlayerObjectToPlayer(objectplayer, objectid, attachplayer, Float:OffsetX, Float:OffsetY, Float:OffsetZ, Float:rX, Float:rY, Float:rZ);

#pragma deprecated Use `Player_EditObject` instead.
OLD_NATIVE__ EditPlayerObject(playerid, objectid);

#pragma deprecated Use `Player_SelectObject` instead.
OLD_NATIVE__ SelectObject(playerid);

#pragma deprecated Use `Player_CancelEdit` instead.
OLD_NATIVE__ CancelEdit(playerid)

#pragma deprecated Use `Object@ToggleClipping` instead.
OLD_NATIVE__ SetDefaultObjectCameraCollision(disable);

/// <summary>You can use this function to attach the player camera to objects.</summary>
/// <param name="playerid">The ID of the player which will have your camera attached on object</param>
/// <param name="objectid">The object id which you want to attach the player camera</param>
/// <seealso name="Player_AttachCameraToObject"/>
/// <remarks>You need to create the object first, before attempting to attach a player camera for that.</remarks>
#pragma deprecated Use `Player_AttachCameraToObject` instead.
OLD_NATIVE__ AttachCameraToObject(playerid, objectid);

/// <summary>Attaches a player's camera to a player-object. The player is able to move their camera while it is attached to an object. Can be used with MovePlayerObject and AttachPlayerObjectToVehicle.</summary>
/// <param name="playerid">The ID of the player which will have their camera attached to a player-object</param>
/// <param name="playerobjectid">The ID of the player-object to which the player's camera will be attached</param>
/// <seealso name="AttachCameraToObject"/>
/// <seealso name="Player_SetCameraPosition"/>
/// <seealso name="Player_SetCameraLookAt"/>
/// <remarks>The player-object must be created before attempting to attach the player's camera to it.</remarks>
#pragma deprecated Use `Player_AttachCameraToObject` instead.
OLD_NATIVE__ AttachCameraToPlayerObject(playerid, playerobjectid);


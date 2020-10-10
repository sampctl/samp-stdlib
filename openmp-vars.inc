


native _Var_Get(uid, tag);
native _Var_Set(uid, value, tag);

#define _Var_Get_%0\32; _Var_Get_
#define _Var_Set_%0\32; _Var_Set_
#define DEFINE_VAR(%0,%1) \
	Var:%1;
	native _Var_Get_%1(Var:uid, tag = tagof (%0)) = _Var_Get;
	native _Var_Set_%1(Var:uid, tag = tagof (%0), %0:value) = _Var_Set;

#define pvar 

#define PVar_Get


// Per-player variable system (PVars)

/// <summary>Set an integer player variable.</summary>
/// <param name="playerid">The ID of the player whose player variable will be set</param>
/// <param name="varname">The name of the player variable</param>
/// <param name="int_value">The integer to be set</param>
/// <seealso name="GetPVarInt"/>
/// <seealso name="SetPVarString"/>
/// <seealso name="GetPVarString"/>
/// <seealso name="SetPVarFloat"/>
/// <seealso name="GetPVarFloat"/>
/// <seealso name="DeletePVar"/>
/// <remarks>Variables aren't reset until after <a href="#OnPlayerDisconnect">OnPlayerDisconnect</a> is called, so the values are still accessible in <a href="#OnPlayerDisconnect">OnPlayerDisconnect</a>.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. Either the player specified is not connected, or the variable name is null or over 40 characters.
/// </returns>
NATIVE__ SetPVarInt(playerid, const varname[], int_value);

/// <summary>Gets an integer player variable's value.</summary>
/// <param name="playerid">The ID of the player whose player variable to get</param>
/// <param name="varname">The name of the player variable (case-insensitive). Assigned in SetPVarInt</param>
/// <seealso name="SetPVarInt"/>
/// <seealso name="SetPVarString"/>
/// <seealso name="GetPVarString"/>
/// <seealso name="SetPVarFloat"/>
/// <seealso name="GetPVarFloat"/>
/// <seealso name="DeletePVar"/>
/// <returns>The integer value of the specified player variable. It will still return <b><c>0</c></b> if the variable is not set, or the player does not exist.</returns>
NATIVE__ GetPVarInt(playerid, const varname[]);

/// <summary>Saves a string into a player variable.</summary>
/// <param name="playerid">The ID of the player whose player variable will be set</param>
/// <param name="varname">The name of the player variable</param>
/// <param name="string_value">The string you want to save in the player variable</param>
/// <seealso name="SetPVarInt"/>
/// <seealso name="GetPVarInt"/>
/// <seealso name="GetPVarString"/>
/// <seealso name="SetPVarFloat"/>
/// <seealso name="GetPVarFloat"/>
/// <seealso name="DeletePVar"/>
NATIVE__ SetPVarString(playerid, const varname[], const string_value[]);

/// <summary>Gets a player variable as a string.</summary>
/// <param name="playerid">The ID of the player whose player variable to get</param>
/// <param name="varname">The name of the player variable, set by <a href="#SetPVarString">SetPVarString</a></param>
/// <param name="string_return">The array in which to store the string value in, passed by reference</param>
/// <param name="len">The maximum length of the returned string</param>
/// <seealso name="SetPVarString"/>
/// <seealso name="SetPVarInt"/>
/// <seealso name="GetPVarInt"/>
/// <seealso name="SetPVarFloat"/>
/// <seealso name="GetPVarFloat"/>
/// <seealso name="DeletePVar"/>
/// <remarks>If length of string is zero (value not set), string_return text will not be updated or set to anything and will remain with old data, neccesying that you clear the variable to blank value if <a href="#GetPVarString">GetPVarString</a> returns <b><c>0</c></b> if that behavior is undesired </remarks>
/// <returns>The length of the string.</returns>
NATIVE__ GetPVarString(playerid, const varname[], string_return[], len = sizeof string_return);

/// <summary>Set a float player variable's value.</summary>
/// <param name="playerid">The ID of the player whose player variable will be set</param>
/// <param name="varname">The name of the player variable</param>
/// <param name="float_value">The float you want to save in the player variable</param>
/// <seealso name="SetPVarInt"/>
/// <seealso name="GetPVarInt"/>
/// <seealso name="SetPVarString"/>
/// <seealso name="GetPVarString"/>
/// <seealso name="GetPVarFloat"/>
/// <seealso name="DeletePVar"/>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. Either the player specified is not connected, or the variable name is null or over 40 characters.
/// </returns>
NATIVE__ SetPVarFloat(playerid, const varname[], Float:float_value);

/// <summary>Gets a player variable as a float.</summary>
/// <param name="playerid">The ID of the player whose player variable you want to get</param>
/// <param name="varname">The name of the player variable</param>
/// <seealso name="SetPVarInt"/>
/// <seealso name="GetPVarInt"/>
/// <seealso name="SetPVarString"/>
/// <seealso name="GetPVarString"/>
/// <seealso name="SetPVarFloat"/>
/// <seealso name="DeletePVar"/>
/// <returns>The float from the specified player variable.</returns>
NATIVE__ Float:GetPVarFloat(playerid, const varname[]);

/// <summary>Deletes a previously set player variable.</summary>
/// <param name="playerid">The ID of the player whose player variable to delete</param>
/// <param name="varname">The name of the player variable to delete</param>
/// <seealso name="SetPVarInt"/>
/// <seealso name="GetPVarInt"/>
/// <seealso name="SetPVarString"/>
/// <seealso name="GetPVarString"/>
/// <seealso name="SetPVarFloat"/>
/// <seealso name="GetPVarFloat"/>
/// <remarks>Once a variable is deleted, attempts to retrieve the value will return <b><c>0</c></b> (for integers and floats and <b><c>NULL</c></b> for strings).</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully.<p/>
///   <b><c>0</c></b>: The function failed to execute. Either the player specified isn't connected or there is no variable set with the given name.
/// </returns>
NATIVE__ DeletePVar(playerid, const varname[]);

/// <summary>Each PVar (player-variable) has its own unique identification number for lookup, this function returns the highest ID set for a player.</summary>
/// <param name="playerid">The ID of the player to get the upper PVar index of</param>
/// <seealso name="GetPVarNameAtIndex"/>
/// <seealso name="GetPVarType"/>
/// <returns>The highest set PVar ID.</returns>
NATIVE__ GetPVarsUpperIndex(playerid);

/// <summary>Retrieve the name of a player's pVar via the index.</summary>
/// <param name="playerid">The ID of the player whose player variable to get the name of</param>
/// <param name="index">The index of the player's pVar</param>
/// <param name="ret_varname">A string to store the pVar's name in, passed by reference</param>
/// <param name="ret_len">The max length of the returned string</param>
/// <seealso name="GetPVarType"/>
/// <seealso name="GetPVarInt"/>
/// <seealso name="GetPVarFloat"/>
/// <seealso name="GetPVarString"/>
NATIVE__ GetPVarNameAtIndex(playerid, index, ret_varname[], ret_len = sizeof ret_varname);

/// <summary>Gets the type (integer, float or string) of a player variable.</summary>
/// <param name="playerid">The ID of the player whose player variable to get the type of</param>
/// <param name="varname">The name of the player variable to get the type of</param>
/// <seealso name="SetPVarInt"/>
/// <seealso name="GetPVarInt"/>
/// <seealso name="SetPVarString"/>
/// <seealso name="GetPVarString"/>
/// <seealso name="SetPVarFloat"/>
/// <seealso name="GetPVarFloat"/>
/// <seealso name="DeletePVar"/>
/// <remarks>
///   <b>Variable types:</b><p/>
///   <ul>
///     <li><b><c>PLAYER_VARTYPE_NONE</c></b> (pVar with name given does not exist)</li>
///     <li><b><c>PLAYER_VARTYPE_INT</c></b></li>
///     <li><b><c>PLAYER_VARTYPE_STRING</c></b></li>
///     <li><b><c>PLAYER_VARTYPE_FLOAT</c></b></li>
///   </ul>
/// </remarks>
/// <returns>Returns the type of the PVar. See table below.</returns>
NATIVE__ GetPVarType(playerid, const varname[]);


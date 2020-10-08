#if defined _INC_a_players
	#endinput
#endif
#define _INC_a_players
#define _players_included
#define _inc_a_players

#define SAMP_CONST_CORRECT

#pragma tabsize 4

// Per-player TextDraws

/// <summary>Creates a textdraw for a single player. This can be used as a way around the <a href="#TextDrawCreate">global</a> text-draw limit.</summary>
/// <param name="playerid">The ID of the player to create the textdraw for</param>
/// <param name="x">X-Coordinate</param>
/// <param name="y">Y-Coordinate</param>
/// <param name="text">The text in the textdraw</param>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>
///   If you choose values for y that are less than 1, the first text row will be invisible and only the shadow is visible.<p/>
///   <paramref name="text"/> must <b>NOT</b> be empty or the server will crash! If you need a textdraw that shows nothing, use " " (a space) or _ (underscore)<p/>
///   If the last character in the text is a space (" "), the text will all be blank.<p/>
///   If part of the text is off-screen, the color of the text will not show, only the shadow (if enabled) will. <p/>
/// </remarks>
/// <remarks>
///   This applies ONLY to sa-mp versions before <b>0.3z</b>:<p/><p/>
///   Maximum length of textdraw is <b><c>800</c></b> characters. Longer text will crash the client in older versions.<p/>
///   If you use color codes (such as <b><c>~R~ ~G~</c></b>) beyond 255th character the client will crash trying to display the textdraw. <p/>
/// </remarks>
/// <remarks>Keyboard key mapping codes (such as <b><c>~k~~VEHICLE_ENTER_EXIT~</c></b> Doesn't work beyond 255th character. </remarks>
/// <remarks>
///   The x,y coordinate is the top left coordinate for the text draw area based on a <b><c>640x480</c></b> "canvas" (irrespective of screen resolution). If you plan on using <a href="#PlayerTextDrawAlignment">PlayerTextDrawAlignment</a> with alignment <b><c>3</c></b> (right), the x,y coordinate is the top right coordinate for the text draw.<p/>
///   This function merely CREATES the textdraw, you must use <a href="#PlayerTextDrawShow">PlayerTextDrawShow</a> to show it to a player.<p/>
///   It is recommended to use WHOLE numbers instead of decimal positions when creating player textdraws to ensure resolution friendly design. <p/>
/// </remarks>
/// <remarks>Player-textdraws are automatically destroyed when a player disconnects.</remarks>
/// <returns>The ID of the created textdraw.</returns>
NATIVE__ PlayerText:CreatePlayerTextDraw(playerid, Float:x, Float:y, const text[]);

/// <summary>Destroy a player-textdraw.</summary>
/// <param name="playerid">The ID of the player who's player-textdraw to destroy</param>
/// <param name="text">The ID of the textdraw to destroy</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
NATIVE__ PlayerTextDrawDestroy(playerid, PlayerText:text);

/// <summary>Sets the width and height of the letters in a player-textdraw.</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to set the letter size of</param>
/// <param name="text">The ID of the player-textdraw to change the letter size of</param>
/// <param name="x">Width of a char</param>
/// <param name="y">Height of a char</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>When using this function purely for the benefit of affecting the textdraw box, multiply 'Y' by <b><c>0.135</c></b> to convert to <a href="#TextDrawTextSize">TextDrawTextSize</a>-like measurements</remarks>
/// <remarks>Fonts appear to look the best with an X to Y ratio of <b><c>1</c></b> to <b><c>4</c></b> (e.g. if x is <b><c>0.5</c></b> then y should be <b><c>2</c></b>).</remarks>
NATIVE__ PlayerTextDrawLetterSize(playerid, PlayerText:text, Float:x, Float:y);

/// <summary>Change the size of a player-textdraw (box if <a href="#PlayerTextDrawUseBox">PlayerTextDrawUseBox</a> is enabled and/or clickable area for use with <a href="#PlayerTextDrawSetSelectable">PlayerTextDrawSetSelectable</a>).</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to set the size of</param>
/// <param name="text">The ID of the player-textdraw to set the size of</param>
/// <param name="x">The size on the X axis (left/right) following the same 640x480 grid as <a href="#TextDrawCreate">TextDrawCreate</a></param>
/// <param name="y">The size on the Y axis (up/down) following the same 640x480 grid as <a href="#TextDrawCreate">TextDrawCreate</a></param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>
///   The x and y have different meanings with different PlayerTextDrawAlignment values:<p/>
///   <ul>
///     <li><b><c>1</c></b> (left): they are the right-most corner of the box, absolute coordinates.</li>
///     <li><b><c>2</c></b> (center): they need to inverted (switch the two) and the x value is the overall width of the box.</li>
///     <li><b><c>3</c></b> (right): the x and y are the coordinates of the left-most corner of the box </li>
///   </ul>
/// </remarks>
/// <remarks>
///   Using font type <b><c>4</c></b> (sprite) and <b><c>5</c></b> (model preview) converts X and Y of this function from corner coordinates to WIDTH and HEIGHT (offsets).<p/>
///   The TextDraw box starts <b><c>10.0</c></b> units up and <b><c>5.0</c></b> to the left as the origin (<a href="#TextDrawCreate">TextDrawCreate</a> coordinate).<p/>
///   This function defines the clickable area for use with <a href="#PlayerTextDrawSetSelectable">PlayerTextDrawSetSelectable</a>, whether a box is shown or not.
/// </remarks>
NATIVE__ PlayerTextDrawTextSize(playerid, PlayerText:text, Float:x, Float:y);

/// <summary>Set the text alignment of a player-textdraw.</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to set the alignment of</param>
/// <param name="text">The ID of the player-textdraw to set the alignment of</param>
/// <param name="alignment"><b><c>1</c></b>-left <b><c>2</c></b>-centered <b><c>3</c></b>-right</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>For alignment <b><c>2</c></b> (center) the x and y values of TextSize need to be swapped, see notes at <a href="#PlayerTextDrawTextSize">PlayerTextDrawTextSize</a>. </remarks>
NATIVE__ PlayerTextDrawAlignment(playerid, PlayerText:text, alignment);

/// <summary>Sets the text color of a player-textdraw.</summary>
/// <param name="playerid">The ID of the player who's textdraw to set the color of</param>
/// <param name="text">The TextDraw to change</param>
/// <param name="color">The color in hexadecimal format</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>You can also use Gametext colors in textdraws.</remarks>
/// <remarks>The textdraw must be re-shown to the player in order to update the color.</remarks>
NATIVE__ PlayerTextDrawColor(playerid, PlayerText:text, color);

/// <summary>Toggle the box on a player-textdraw.</summary>
/// <param name="playerid">The ID of the player whose textdraw to toggle the box of</param>
/// <param name="text">The ID of the player-textdraw to toggle the box of</param>
/// <param name="use"><b><c>1</c></b> to use a box or <b><c>0</c></b> to not use a box</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
NATIVE__ PlayerTextDrawUseBox(playerid, PlayerText:text, use);

/// <summary>Sets the color of a textdraw's box (<a href="#PlayerTextDrawUseBox">PlayerTextDrawUseBox</a>).</summary>
/// <param name="playerid">The ID of the player whose textdraw to set the box color of</param>
/// <param name="text">The ID of the player textdraw to set the box color of</param>
/// <param name="color">The color to set. Alpha (transparency) is supported</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
NATIVE__ PlayerTextDrawBoxColor(playerid, PlayerText:text, color);

/// <summary>Show a player-textdraw to the player it was created for.</summary>
/// <param name="playerid">The ID of the player to show the textdraw for</param>
/// <param name="text">The ID of the textdraw to show</param>
/// <param name="size">The size of the shadow. <b><c>0</c></b> will hide the shadow</param>
/// <seealso name="PlayerTextDrawHide"/>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
NATIVE__ PlayerTextDrawSetShadow(playerid, PlayerText:text, size);

/// <summary>Set the outline of a player-textdraw. The outline colour cannot be changed unless <a href="#PlayerTextDrawBackgroundColor">PlayerTextDrawBackgroundColor</a> is used.</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to set the outline of</param>
/// <param name="text">The ID of the player-textdraw to set the outline of</param>
/// <param name="size">The thickness of the outline</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
NATIVE__ PlayerTextDrawSetOutline(playerid, PlayerText:text, size);

/// <summary>Adjust the background color of a player-textdraw.</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to set the background color of</param>
/// <param name="text">The ID of the player-textdraw to set the background color of</param>
/// <param name="color">The color that the textdraw should be set to</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>If <a href="#PlayerTextDrawSetOutline">PlayerTextDrawSetOutline</a> is used with size &gt; 0, the outline color will match the color used in <a href="#PlayerTextDrawBackgroundColor">PlayerTextDrawBackgroundColor</a>. Changing the value of color seems to alter the color used in <a href="#PlayerTextDrawColor">PlayerTextDrawColor</a></remarks>
NATIVE__ PlayerTextDrawBackgroundColor(playerid, PlayerText:text, color);

/// <summary>Change the font of a player-textdraw.</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to change the font of</param>
/// <param name="text">The ID of the player-textdraw to change the font of</param>
/// <param name="font">There are four font styles. A font value greater than <b><c>3</c></b> does not display, and anything greater than <b><c>16</c></b> crashes the client. See <a href="http://wiki.sa-mp.com/wiki/PlayerTextDrawFont">http://wiki.sa-mp.com/wiki/PlayerTextDrawFont</a></param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
NATIVE__ PlayerTextDrawFont(playerid, PlayerText:text, font);

/// <summary>Appears to scale text spacing to a proportional ratio. Useful when using <a href="#PlayerTextDrawLetterSize">PlayerTextDrawLetterSize</a> to ensure the text has even character spacing.</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to set the proportionality of</param>
/// <param name="text">The ID of the player-textdraw to set the proportionality of</param>
/// <param name="set"><b><c>1</c></b> to enable proportionality, <b><c>0</c></b> to disable</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
NATIVE__ PlayerTextDrawSetProportional(playerid, PlayerText:text, set);

/// <summary>Toggles whether a player-textdraw can be selected or not.</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to set the selectability of</param>
/// <param name="text">The ID of the player-textdraw to set the selectability of</param>
/// <param name="set">Set the player-textdraw selectable (<b><c>1</c></b>) or non-selectable (<b><c>0</c></b>). By default this is <b><c>0</c></b></param>
/// <seealso name="SelectTextDraw"/>
/// <seealso name="CancelSelectTextDraw"/>
/// <seealso name="OnPlayerClickPlayerTextDraw"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks><a href="#PlayerTextDrawSetSelectable">PlayerTextDrawSetSelectable</a> MUST be used BEFORE the textdraw is shown to the player.</remarks>
/// <remarks>Use <a href="#PlayerTextDrawTextSize">PlayerTextDrawTextSize</a> to define the clickable area.</remarks>
NATIVE__ PlayerTextDrawSetSelectable(playerid, PlayerText:text, set);

/// <summary>Show a player-textdraw to the player it was created for.</summary>
/// <param name="playerid">The ID of the player to show the textdraw for</param>
/// <param name="text">The ID of the textdraw to show</param>
/// <seealso name="PlayerTextDrawHide"/>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
NATIVE__ PlayerTextDrawShow(playerid, PlayerText:text);

/// <summary>Hide a player-textdraw from the player it was created for.</summary>
/// <param name="playerid">The ID of the player to hide the textdraw for</param>
/// <param name="text">The ID of the textdraw to hide</param>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawSetString"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
NATIVE__ PlayerTextDrawHide(playerid, PlayerText:text);

/// <summary>Change the text of a player-textdraw.</summary>
/// <param name="playerid">The ID of the player who's textdraw string to set</param>
/// <param name="text">The ID of the textdraw to change</param>
/// <param name="string">The new string for the TextDraw</param>
/// <seealso name="CreatePlayerTextDraw"/>
/// <seealso name="PlayerTextDrawDestroy"/>
/// <seealso name="PlayerTextDrawColor"/>
/// <seealso name="PlayerTextDrawBoxColor"/>
/// <seealso name="PlayerTextDrawBackgroundColor"/>
/// <seealso name="PlayerTextDrawAlignment"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="PlayerTextDrawLetterSize"/>
/// <seealso name="PlayerTextDrawTextSize"/>
/// <seealso name="PlayerTextDrawSetOutline"/>
/// <seealso name="PlayerTextDrawSetShadow"/>
/// <seealso name="PlayerTextDrawSetProportional"/>
/// <seealso name="PlayerTextDrawUseBox"/>
/// <seealso name="PlayerTextDrawShow"/>
/// <seealso name="PlayerTextDrawHide"/>
/// <remarks>This feature (player-textdraws) was added in <b>SA-MP 0.3e</b> and will not work in earlier versions!</remarks>
/// <remarks>There are limits to the length of textdraw strings! See <a href="http://wiki.sa-mp.com/wiki/Limits">Limits</a> for more info.</remarks>
/// <remarks>You don't have to show the TextDraw again in order to apply the changes.</remarks>
NATIVE__ PlayerTextDrawSetString(playerid, PlayerText:text, const string[]);

/// <summary>Sets a player textdraw 2D preview sprite of a specified model ID.</summary>
/// <param name="playerid">The PlayerTextDraw player ID</param>
/// <param name="text">The textdraw id that will display the 3D preview</param>
/// <param name="modelindex">The GTA SA or SA:MP model ID to display</param>
/// <seealso name="PlayerTextDrawSetPreviewRot"/>
/// <seealso name="PlayerTextDrawSetPreviewVehCol"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="OnPlayerClickPlayerTextDraw"/>
/// <remarks>This function was added in <b>SA-MP 0.3x</b> and will not work in earlier versions!</remarks>
/// <remarks>The textdraw MUST use the font type <b><c>TEXT_DRAW_FONT_MODEL_PREVIEW</c></b> in order for this function to have effect.</remarks>
/// <returns>
///   <b><c>1</c></b>: The function executed successfully. If an invalid model is passed 'success' is reported, but the model will appear as a yellow/black question mark.<p/>
///   <b><c>0</c></b>: The function failed to execute. Player and/or textdraw do not exist.
/// </returns>
NATIVE__ PlayerTextDrawSetPreviewModel(playerid, PlayerText:text, modelindex);

/// <summary>Sets the rotation and zoom of a 3D model preview player-textdraw.</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to change</param>
/// <param name="text">The ID of the player-textdraw to change</param>
/// <param name="fRotX">The X rotation value</param>
/// <param name="fRotY">The Y rotation value</param>
/// <param name="fRotZ">The Z rotation value</param>
/// <param name="fZoom">The zoom value, smaller values make the camera closer and larger values make the camera further away (optional=<b><c>1.0</c></b>)</param>
/// <seealso name="TextDrawSetPreviewRot"/>
/// <seealso name="PlayerTextDrawSetPreviewModel"/>
/// <seealso name="PlayerTextDrawSetPreviewVehCol"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="OnPlayerClickPlayerTextDraw"/>
/// <remarks>This function was added in <b>SA-MP 0.3x</b> and will not work in earlier versions!</remarks>
/// <remarks>The textdraw MUST use the font type <b><c>TEXT_DRAW_FONT_MODEL_PREVIEW</c></b> and already have a model set in order for this function to have effect.</remarks>
NATIVE__ PlayerTextDrawSetPreviewRot(playerid, PlayerText:text, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fZoom = 1.0);

/// <summary>Set the color of a vehicle in a player-textdraw model preview (if a vehicle is shown).</summary>
/// <param name="playerid">The ID of the player whose player-textdraw to change</param>
/// <param name="text">The ID of the player's player-textdraw to change</param>
/// <param name="color1">The <a href="http://wiki.sa-mp.com/wiki/Vehicle_Color_IDs">color</a> to set the vehicle's primary color to</param>
/// <param name="color2">The <a href="http://wiki.sa-mp.com/wiki/Vehicle_Color_IDs">color</a> to set the vehicle's secondary color to</param>
/// <seealso name="PlayerTextDrawSetPreviewModel"/>
/// <seealso name="PlayerTextDrawSetPreviewRot"/>
/// <seealso name="PlayerTextDrawFont"/>
/// <seealso name="OnPlayerClickPlayerTextDraw"/>
/// <remarks>This function was added in <b>SA-MP 0.3x</b> and will not work in earlier versions!</remarks>
/// <remarks>The textdraw MUST use the font <b><c>TEXT_DRAW_FONT_MODEL_PREVIEW</c></b> and be showing a vehicle in order for this function to have effect.</remarks>
NATIVE__ PlayerTextDrawSetPreviewVehCol(playerid, PlayerText:text, color1, color2);


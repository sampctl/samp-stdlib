# Converting Scripts

## Just Recompile

Existing code works.  Just replace:

```pawn
#include <a_samp>
```

With:

```pawn
#include <openmp\openmp>
```

That's it.  Done.  You will, however, get a lot of new warnings about tags and deprecations.  This is fine, you can ignore them, you can fix them, or you can silence them (but be warned, ignoring and silencing them may not work forever).

## Symbol Names

In many cases there are now two versions of some symbols - an old untagged version and a new tagged version.  For example an old version would be `WEAPONSTATE_LAST_BULLET`, while the new version is `WEAPON_STATE_LAST_BULLET`.  This is both tagged (for better warnings) and more consistent in the naming (why was there previously no `_` between `WEAPON` and `STATE`?)  Converting between these names can usually be done with a simple global replace, such as `FIGHT_STYLE` to `FIGHTING_STYLE`, plus adding the tag to any variables that store data of this type.  There are exceptions however.  These inconsistencies result from the original inconsistencies in SA:MP, hence `SPECIAL_ACTION` has become `SPECACT`.

| Old Prefix                   | New Prefix                   | Tag                          |
----------------------------------------------------------------------------------------------
| WEAPONSTATE                  | WEAPON_STATE                 | WeaponState                  |
| FIGHT_STYLE                  | FIGHTING_STYLE               | FightingStyle                |
| WEAPONSKILL                  | WEAPON_SKILL                 | WeaponSkill                  |
| SPECIAL_ACTION               | SPECACT                      | SpecialAction                |
| PLAYER_VARTYPE               | PVAR_TYPE                    | PVarType                     |
| MAPICON                      | MAP_ICON                     | MapIcon                      |
| CAMERA_MOVE                  | CAMERA_MOVEMENT_SMOOTH*      | CameraMovement               |
| CAMERA_CUT                   | CAMERA_MOVEMENT_CUT*         | CameraMovement               |
| SPECTATE_MODE                | SPECTATE_CAMERA              | SpectateCamera               |
| PLAYER_RECORDING_TYPE        | NPC_RECORDING_TYPE           | NPCRecordingType             |

\* There were only two symbols in this group so they were just renamed.


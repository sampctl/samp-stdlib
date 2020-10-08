#if defined _inc_omp
	#endinput
#endif
#define _inc_omp

// Compile-time options
//
// `OPENMP_SAMP` - Set when building the includes for SA:MP instead.
// `OPENMP_QUIET` - Set to not give deprecation warnings.
// `OPENMP_COMPAT` - Set to use both version.
// (None) - Set to only use the newest version.
//
// `OPENMP_TESTS` - Set to build inline compilation tests.

#if !defined __PawnBuild
	#error open.mp scripts require the community compiler from: git.io/pawn-compiler
#endif

#pragma tabsize 4
#pragma rational Float
#pragma option -;+
#pragma option -(+

#include <float>
#include <core>
#tryinclude <console>
#include <file>
#include <string>

#if !defined _console_included
	#define _console_included
	native print(const string[]);
	native printf(const format[], {Float,_}:...);
#endif

#include "omp-internal/omp-macros"

//#include "openmp-core.inc"
//#include "openmp-players.inc"
//#include "openmp-vehicles.inc"
//#include "openmp-objects.inc"
//#include "openmp-actors.inc"
//#include "openmp-visual.inc"
//#include "openmp-turfs.inc"
//#include "openmp-compat.inc"
//#include "openmp-checkpoints.inc"
#include "openmp-players.inc"

#include "omp-internal/omp-compat"


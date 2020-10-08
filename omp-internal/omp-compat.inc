// Disable deprecation warnings in the compatibility code, because the whole point of that code is
// to repair deprecation.  3.10.10 doesn't include the fix for this in function declarations.
#pragma warning push
#pragma warning disable 234

#if defined OPENMP_SAMP
	#if defined OPENMP_COMPAT || defined OPENMP_QUIET
//		// Include SA:MP versions of OMP functions.
//		#include "omp-new/omp-new-vehicles"
//		//#include "openmp/internal/compat-new-visual"
		#include "omp-new/omp-new-players"
	#endif
#else
	#if defined OPENMP_COMPAT || defined OPENMP_QUIET
		// Include OMP versions of SA:MP functions.
//		#include "omp-old/omp-old-vehicles"
//		#include "omp-old/omp-old-visual"
//		#include "omp-old/omp-old-core"
		#include "omp-old/omp-old-players"
	#endif
#endif

#pragma warning pop


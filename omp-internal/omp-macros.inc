// Search and replace:
//
//native (\w+:)?(\w+)Module(\w*)\((.*)\);
//#pragma deprecated Use `Module_\2\3` instead.\nNATIVE__ \1\2Module\3\(\4\) =\n \1Module_\2\3\(\4\);
//

#if defined _inc_openmp_internal_macros
	#endinput
#endif
#define _inc_openmp_internal_macros

#define string:
#define void:

#define FLOAT_INFINITY				  (Float:0x7F800000)
#define FLOAT_NEG_INFINITY			  (Float:0xFF800000)
#define FLOAT_NEGATIVE_INFINITY		 (Float:0xFF800000)
#define FLOAT_NAN					   (Float:0x7FFFFFFF)
#define FLOAT_NOT_A_NUMBER			  (Float:0x7FFFFFFF)
#define FLOAT_QNAN					  (Float:0x7FFFFFFF)
#define FLOAT_QUIET_NAN				 (Float:0x7FFFFFFF)
#define FLOAT_QUIET_NOT_A_NUMBER		(Float:0x7FFFFFFF)
#define FLOAT_SNAN					  (Float:0x7FBFFFFF)
#define FLOAT_SIGNALING_NAN			 (Float:0x7FBFFFFF)
#define FLOAT_SIGNALING_NOT_A_NUMBER	(Float:0x7FBFFFFF)

// Used to prevent macro expansion.
#define PP_LEFT_BRACKET<> (
#define PP_RIGHT_BRACKET<> )
#define PP_LEFT_BRACE<> {
#define PP_RIGHT_BRACE<> }
#define PP_LEFT_SQUARE_BRACKET<> [
#define PP_RIGHT_SQUARE_BRACKET<> ]
#define PP_LEFT_ANGLE_BRACKET<> <
#define PP_RIGHT_ANGLE_BRACKET<> >
#define PP_NULL<>

// An IEEE754 floating-point number is defined as Not-A-Number when all the exponent bits are set,
// and the mantissa is non-zero.  The sign bit is ignored, so we first remove that and test the
// result is `> 0x7F800000`.  Because any signed number bigger than that must have all the MSBs set,
// plus at least one more.
#define IsNaN(%0) ((_:(%0) & 0x7FFFFFFF) > 0x7F800000)
#define NotNaN(%0) ((_:(%0) & 0x7FFFFFFF) <= 0x7F800000)

// "Magic" macros.

// Consume excess spaces on internal unused (`_@`) and public (`@@`) functions.
#define _@%0\32; _@
#define @@%0\32; @@

// The "ultimate" macro, well documented elsewhere.
#define u@$ 0]);

// Remove trailing commas in parameter lists.  In SOME cases...
#define _:%0,) _:%0)

#define NATIVE__STRIP_TAG:%8$%0(%1)=%5:%2$ %8$%0(%1)=%2$
#define NATIVE__END$
#define NATIVE__FIND_TAG%0; u@(u[_:NATIVE__STRIP_TAG:u@$native%0;NATIVE__END$
#define _NATIVE_NO_TAG__:_@%0:%1(%2)%3$ %0:_@%1(%2)
#define NATIVE_NEXT_TAG__%0(%1) _NATIVE_NO_TAG__:%0(%1)NATIVE__END$

#if defined OPENMP_SAMP
	#define TAG__<%0>:%1= %1=

	#define _OPENMP_TAG(%0);
#elseif defined OPENMP_QUIET
	#define TAG__<%0>:%1= %1=

	#define _OPENMP_TAG(%0) \
		stock _:operator=(%0:a) return _:a; \
		stock %0:operator=(_:a) return %0:a
#elseif defined OPENMP_COMPAT
	#define TAG__<%0>:%1= _@%0:%1=_@%0:

	// When compiling in full silent compatibility mode suppress all tag mismatch warnings.
	#define _OPENMP_TAG(%0) \
		stock _:operator=(_@%0:a) return _:a; \
		stock %0:operator=(_@%0:a) return %0:a
#else
	#define TAG__<%0>:%1= %0:%1=%0:

	#define _OPENMP_TAG(%0);
#endif

// `OPENMP_SAMP` - Set when building the includes for SA:MP instead.
// `OPENMP_QUIET` - Set to not give deprecation warnings.
// `OPENMP_COMPAT` - Set to use both version.
// (None) - Set to only use the newest version.
//
// `OPENMP_TESTS` - Set to build inline compilation tests.

#if defined OPENMP_SAMP
	#if defined OPENMP_QUIET
		#define _OLD_NATIVE__%0(%1)%9=%2(%3) NATIVE__FIND_TAG%0__(%1)=%0;native%0(%1)
	#elseif defined OPENMP_COMPAT
		#define _OLD_NATIVE__%0(%1)%9=%2(%3) native%0(%1);NATIVE__FIND_TAG%0__(%1)=%0
	#else
		#define _OLD_NATIVE__%0(%1)%9=%2(%3) NATIVE__FIND_TAG%0__(%1)=%0
	#endif
	#define _NEW_NATIVE__%2(%3)%9=%0(%1) NATIVE__FIND_TAG%2(%3)=%0
#else
	#if defined OPENMP_QUIET
		#define _OLD_NATIVE__%0(%1)%9=%2(%3) static stock%0@@(%1);NATIVE__FIND_TAG%0(%1)=%2
	#elseif defined OPENMP_COMPAT
		#define _OLD_NATIVE__%0(%1)%9=%2(%3) %0(%1);NATIVE__FIND_TAG%0(%1)=%2
	#else
		#define _OLD_NATIVE__%0(%1)%9=%2(%3) static stock%0@@(%1)
	#endif
	#if defined OPENMP_TESTS
		#define _NEW_NATIVE__%2(%3)%9=%0(%1); native%2(%3);_OPENMP_TESTS(%2(%3))
	#else
		#define _NEW_NATIVE__%2(%3)%9=%0(%1) native%2(%3)
	#endif
#endif

#define NATIVE__%0; u@(u[_:_NATIVE__D0:_NATIVE__D1:u@$%0;
#define _NATIVE__D0:_NATIVE__D1:%8$%0(%1)%9=%2(%3) %8$_OLD_NATIVE__%0(%1)=%2(%3);_NEW_NATIVE__ %2(%3)=%0(%1)
#if !defined OPENMP_SAMP && defined OPENMP_TESTS
	#define _NATIVE__D1:%8$%0(%1); %8$native%0(%1);_OPENMP_TESTS(%0(%1))
#else
	#define _NATIVE__D1:%8$%0(%1) %8$native%0(%1)
#endif

#if defined OPENMP_SAMP
	stock __FLOAT;
	#if defined OPENMP_QUIET
		#define _NATIVE_FLOAT_OLD__%0(%1)%9=%2(%3) NATIVE__FIND_TAG%0__(%1)=%0;native%0(%1)
	#elseif defined OPENMP_COMPAT
		#define _NATIVE_FLOAT_OLD__%0(%1)%9=%2(%3) native%0(%1);NATIVE__FIND_TAG%0__(%1)=%0
	#else
		#define _NATIVE_FLOAT_OLD__%0(%1)%9=%2(%3) NATIVE__FIND_TAG%0__(%1)=%0
	#endif
	#define _NATIVE_FLOAT_NEW__%2(%3)%9=%0(%1&Float:%7) stock%2(%3)return((%0(%1__FLOAT))?__FLOAT:FLOAT_NAN)

	#define FLOAT_NATIVE__%0(%1)%9=%2(%3) _NATIVE_FLOAT_OLD__%0(%1)=%2(%3);_NATIVE_FLOAT_NEW__ %2(%3)=%0(%1)
#else
	#if defined OPENMP_QUIET
		#define _NATIVE_FLOAT_OLD__%0(%1&Float:%7)%9=%2(%3) static stock%0@@(%1&Float:%7){}stock%0(%1&Float:%7)return NotNaN(%7=(%2(%3)))
	#elseif defined OPENMP_COMPAT
		#define _NATIVE_FLOAT_OLD__%0(%1&Float:%7)%9=%2(%3) stock%0(%1&Float:%7)return NotNaN(%7=(%2(%3)))
	#else
		#define _NATIVE_FLOAT_OLD__%0(%1&Float:%7)%9=%2(%3); static stock%0@@(%1){}
	#endif
	#if defined OPENMP_TESTS
		#define _NATIVE_FLOAT_NEW__%2(%3)%9=%0(%1); native%2(%3);_OPENMP_TESTS(%2(%3))
	#else
		#define _NATIVE_FLOAT_NEW__%2(%3)%9=%0(%1) native%2(%3)
	#endif

	#define FLOAT_NATIVE__%0(%1)%9=%2(%3) _NATIVE_FLOAT_NEW__ %2(%3)=%0(%1);_NATIVE_FLOAT_OLD__%0(%1)=%2(%3)
#endif

#if defined OPENMP_SAMP
	#if defined OPENMP_QUIET
		#define OLD_NATIVE__%0(%1) NATIVE__FIND_TAG%0__(%1)=%0;native%0(%1);stock%0@@(%1)
	#elseif defined OPENMP_COMPAT
		#define OLD_NATIVE__%0(%1) native%0(%1);NATIVE__FIND_TAG%0__(%1)=%0;static stock%0@@(%1)
	#else
		#define OLD_NATIVE__%0(%1) NATIVE__FIND_TAG%0__(%1)=%0;static stock%0@@(%1)
	#endif
	#define NEW_NATIVE__%2(%3) u@(u[_:_NATIVE__N1:_NATIVE__N3:0]);stock%2(%3)NATIVE__END$
#else
	#if defined OPENMP_QUIET
		#define OLD_NATIVE__%0(%1) static stock%0@@(%1);stock%0(%1)
	#elseif defined OPENMP_COMPAT
		#define OLD_NATIVE__%0(%1) stock%0(%1)
	#else
		#define OLD_NATIVE__%0(%1) static stock%0@@(%1)
	#endif
	#if defined OPENMP_TESTS
		#define NEW_NATIVE__%2(%3) u@(u[_:_NATIVE__N0:_NATIVE__N2:0]);native%2(%3);_OPENMP_TESTS(%2(%3))static stock%2@@(%3)
	#else
		#define NEW_NATIVE__%2(%3) u@(u[_:_NATIVE__N0:_NATIVE__N2:0]);native%2(%3);static stock%2@@(%3)
	#endif
#endif

#define _NATIVE__N0:_NATIVE__N2:0]);%0(%1)%2$%3=%4; 0]);%0(%1)=%4%2$;
#define _NATIVE__N1:_NATIVE__N3:0]);%0(%1)%2$%3=%4; 0]);%0(%1)%2$;
#define _NATIVE__N2:0]);%0(%1)%2$%3=%4\10; 0]);%0(%1)=%4%2$
#define _NATIVE__N3:0]);%0(%1)%2$%3=%4\10; 0]);%0(%1)%2$

#if defined OPENMP_TESTS
	#include "openmp/internal/omp-code-parse"

	#define _OPENMP_TESTS(%0(%1)) FUNC_PARSER(_OPENMP,CST_ARR_MUL_TAG:NUM_TAG:REF_TAG:EXT:RET_TAG:)(%0(%1))()

	stock
		_@ARR[1],
		_@ARRR[1][1],
		_@ARRRR[1][1][1],
		_@ARRRRR[1][1][1][1],
		_@REF = 0;

	#define _OPENMP_NUM(%9,%5,%2)%8$(%7) %8$(%7,%50)
	#define _OPENMP_REF(%9,%5,%2)%8$(%7) %8$(%7,%5_@REF)

	#define _OPENMP_EXT(%9,%9,%9)%8$(%7) %8$(%7)

	#define _OPENMP_ARR(%9,%5,%2,%9)%8$(%7) %8$(%7,%5_@ARR)
	#define _OPENMP_ARR_ARR(%9,%5,%2,%9,%9)%8$(%7) %8$(%7,%5_@ARRR)
	#define _OPENMP_ARR_ARR_ARR(%9,%5,%2,%9,%9,%9)%8$(%7) %8$(%7,%5_@ARRRR)
	#define _OPENMP_ARR_ARR_ARR_ARR(%9,%5,%2,%9,%9,%9,%9)%8$(%7) %8$(%7,%5_@ARRRRR)

	#define _OPENMP_END_TAG(%9,%1)%8$(,%7) %8$@@%1();@@%1(){%1(%7);}
	#define _OPENMP_NUL_TAG(%9,%1)%8$() %8$@@%1();@@%1(){%1();}
	#define _OPENMP_END(%1)%8$(,%7) %8$@@%1();@@%1(){%1(%7);}
	#define _OPENMP_NUL(%1)%8$() %8$@@%1();@@%1(){%1();}
#endif


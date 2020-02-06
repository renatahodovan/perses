typedef long long llong;

typedef char vchar64 __attribute__ ((__vector_size__ (64 * sizeof (char)))); vchar64 test1char64 (char c) { vchar64 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; } vchar64 test2char64 (char *p) { char c = *p; vchar64 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; }
typedef char vchar32 __attribute__ ((__vector_size__ (32 * sizeof (char)))); vchar32 test1char32 (char c) { vchar32 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; } vchar32 test2char32 (char *p) { char c = *p; vchar32 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; }
typedef char vchar16 __attribute__ ((__vector_size__ (16 * sizeof (char)))); vchar16 test1char16 (char c) { vchar16 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; } vchar16 test2char16 (char *p) { char c = *p; vchar16 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; }
typedef char vchar8 __attribute__ ((__vector_size__ (8 * sizeof (char)))); vchar8 test1char8 (char c) { vchar8 v = { c, c, c, c, c, c, c, c }; return v; } vchar8 test2char8 (char *p) { char c = *p; vchar8 v = { c, c, c, c, c, c, c, c }; return v; }
typedef char vchar4 __attribute__ ((__vector_size__ (4 * sizeof (char)))); vchar4 test1char4 (char c) { vchar4 v = { c, c, c, c }; return v; } vchar4 test2char4 (char *p) { char c = *p; vchar4 v = { c, c, c, c }; return v; }
typedef char vchar2 __attribute__ ((__vector_size__ (2 * sizeof (char)))); vchar2 test1char2 (char c) { vchar2 v = { c, c }; return v; } vchar2 test2char2 (char *p) { char c = *p; vchar2 v = { c, c }; return v; }
typedef char vchar1 __attribute__ ((__vector_size__ (1 * sizeof (char)))); vchar1 test1char1 (char c) { vchar1 v = { c }; return v; } vchar1 test2char1 (char *p) { char c = *p; vchar1 v = { c }; return v; }
typedef short vshort32 __attribute__ ((__vector_size__ (32 * sizeof (short)))); vshort32 test1short32 (short c) { vshort32 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; } vshort32 test2short32 (short *p) { short c = *p; vshort32 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; }
typedef short vshort16 __attribute__ ((__vector_size__ (16 * sizeof (short)))); vshort16 test1short16 (short c) { vshort16 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; } vshort16 test2short16 (short *p) { short c = *p; vshort16 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; }
typedef short vshort8 __attribute__ ((__vector_size__ (8 * sizeof (short)))); vshort8 test1short8 (short c) { vshort8 v = { c, c, c, c, c, c, c, c }; return v; } vshort8 test2short8 (short *p) { short c = *p; vshort8 v = { c, c, c, c, c, c, c, c }; return v; }
typedef short vshort4 __attribute__ ((__vector_size__ (4 * sizeof (short)))); vshort4 test1short4 (short c) { vshort4 v = { c, c, c, c }; return v; } vshort4 test2short4 (short *p) { short c = *p; vshort4 v = { c, c, c, c }; return v; }
typedef short vshort2 __attribute__ ((__vector_size__ (2 * sizeof (short)))); vshort2 test1short2 (short c) { vshort2 v = { c, c }; return v; } vshort2 test2short2 (short *p) { short c = *p; vshort2 v = { c, c }; return v; }
typedef short vshort1 __attribute__ ((__vector_size__ (1 * sizeof (short)))); vshort1 test1short1 (short c) { vshort1 v = { c }; return v; } vshort1 test2short1 (short *p) { short c = *p; vshort1 v = { c }; return v; }
typedef int vint16 __attribute__ ((__vector_size__ (16 * sizeof (int)))); vint16 test1int16 (int c) { vint16 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; } vint16 test2int16 (int *p) { int c = *p; vint16 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; }
typedef int vint8 __attribute__ ((__vector_size__ (8 * sizeof (int)))); vint8 test1int8 (int c) { vint8 v = { c, c, c, c, c, c, c, c }; return v; } vint8 test2int8 (int *p) { int c = *p; vint8 v = { c, c, c, c, c, c, c, c }; return v; }
typedef int vint4 __attribute__ ((__vector_size__ (4 * sizeof (int)))); vint4 test1int4 (int c) { vint4 v = { c, c, c, c }; return v; } vint4 test2int4 (int *p) { int c = *p; vint4 v = { c, c, c, c }; return v; }
typedef int vint2 __attribute__ ((__vector_size__ (2 * sizeof (int)))); vint2 test1int2 (int c) { vint2 v = { c, c }; return v; } vint2 test2int2 (int *p) { int c = *p; vint2 v = { c, c }; return v; }
typedef int vint1 __attribute__ ((__vector_size__ (1 * sizeof (int)))); vint1 test1int1 (int c) { vint1 v = { c }; return v; } vint1 test2int1 (int *p) { int c = *p; vint1 v = { c }; return v; }
typedef float vfloat16 __attribute__ ((__vector_size__ (16 * sizeof (float)))); vfloat16 test1float16 (float c) { vfloat16 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; } vfloat16 test2float16 (float *p) { float c = *p; vfloat16 v = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c }; return v; }
typedef float vfloat8 __attribute__ ((__vector_size__ (8 * sizeof (float)))); vfloat8 test1float8 (float c) { vfloat8 v = { c, c, c, c, c, c, c, c }; return v; } vfloat8 test2float8 (float *p) { float c = *p; vfloat8 v = { c, c, c, c, c, c, c, c }; return v; }
typedef float vfloat4 __attribute__ ((__vector_size__ (4 * sizeof (float)))); vfloat4 test1float4 (float c) { vfloat4 v = { c, c, c, c }; return v; } vfloat4 test2float4 (float *p) { float c = *p; vfloat4 v = { c, c, c, c }; return v; }
typedef float vfloat2 __attribute__ ((__vector_size__ (2 * sizeof (float)))); vfloat2 test1float2 (float c) { vfloat2 v = { c, c }; return v; } vfloat2 test2float2 (float *p) { float c = *p; vfloat2 v = { c, c }; return v; }
typedef float vfloat1 __attribute__ ((__vector_size__ (1 * sizeof (float)))); vfloat1 test1float1 (float c) { vfloat1 v = { c }; return v; } vfloat1 test2float1 (float *p) { float c = *p; vfloat1 v = { c }; return v; }
typedef llong vllong8 __attribute__ ((__vector_size__ (8 * sizeof (llong)))); vllong8 test1llong8 (llong c) { vllong8 v = { c, c, c, c, c, c, c, c }; return v; } vllong8 test2llong8 (llong *p) { llong c = *p; vllong8 v = { c, c, c, c, c, c, c, c }; return v; }
typedef llong vllong4 __attribute__ ((__vector_size__ (4 * sizeof (llong)))); vllong4 test1llong4 (llong c) { vllong4 v = { c, c, c, c }; return v; } vllong4 test2llong4 (llong *p) { llong c = *p; vllong4 v = { c, c, c, c }; return v; }
typedef llong vllong2 __attribute__ ((__vector_size__ (2 * sizeof (llong)))); vllong2 test1llong2 (llong c) { vllong2 v = { c, c }; return v; } vllong2 test2llong2 (llong *p) { llong c = *p; vllong2 v = { c, c }; return v; }
typedef llong vllong1 __attribute__ ((__vector_size__ (1 * sizeof (llong)))); vllong1 test1llong1 (llong c) { vllong1 v = { c }; return v; } vllong1 test2llong1 (llong *p) { llong c = *p; vllong1 v = { c }; return v; }
typedef double vdouble8 __attribute__ ((__vector_size__ (8 * sizeof (double)))); vdouble8 test1double8 (double c) { vdouble8 v = { c, c, c, c, c, c, c, c }; return v; } vdouble8 test2double8 (double *p) { double c = *p; vdouble8 v = { c, c, c, c, c, c, c, c }; return v; }
typedef double vdouble4 __attribute__ ((__vector_size__ (4 * sizeof (double)))); vdouble4 test1double4 (double c) { vdouble4 v = { c, c, c, c }; return v; } vdouble4 test2double4 (double *p) { double c = *p; vdouble4 v = { c, c, c, c }; return v; }
typedef double vdouble2 __attribute__ ((__vector_size__ (2 * sizeof (double)))); vdouble2 test1double2 (double c) { vdouble2 v = { c, c }; return v; } vdouble2 test2double2 (double *p) { double c = *p; vdouble2 v = { c, c }; return v; }
typedef double vdouble1 __attribute__ ((__vector_size__ (1 * sizeof (double)))); vdouble1 test1double1 (double c) { vdouble1 v = { c }; return v; } vdouble1 test2double1 (double *p) { double c = *p; vdouble1 v = { c }; return v; }
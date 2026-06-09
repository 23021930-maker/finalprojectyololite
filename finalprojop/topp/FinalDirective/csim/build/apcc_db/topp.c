/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;

/* External Global Variable Declarations */
extern float W1[8][3][3][3];
extern float B1[8];
extern float W2[16][8][3][3];
extern float B2[16];
extern float W3[32][16][3][3];
extern float B3[32];
extern float W4[32][32][3][3];
extern float B4[32];
extern float W5[32][32][3][3];
extern float B5[32];
extern float WH[16][32][1][1];
extern float BH[16];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void conv1(float (*llvm_cbe_in)[64][3], float (*llvm_cbe_out)[62][8], float (*llvm_cbe_kernel)[3][3][3], float *llvm_cbe_bias);
void maxpool1(float (*llvm_cbe_in)[62][8], float (*llvm_cbe_out)[31][8]);
void conv2(float (*llvm_cbe_in)[31][8], float (*llvm_cbe_out)[29][16], float (*llvm_cbe_kernel)[8][3][3], float *llvm_cbe_bias);
void maxpool2(float (*llvm_cbe_in)[29][16], float (*llvm_cbe_out)[14][16]);
void conv3(float (*llvm_cbe_in)[14][16], float (*llvm_cbe_out)[12][32], float (*llvm_cbe_kernel)[16][3][3], float *llvm_cbe_bias);
void conv4(float (*llvm_cbe_in)[12][32], float (*llvm_cbe_out)[10][32], float (*llvm_cbe_kernel)[32][3][3], float *llvm_cbe_bias);
void conv5(float (*llvm_cbe_in)[10][32], float (*llvm_cbe_out)[8][32], float (*llvm_cbe_kernel)[32][3][3], float *llvm_cbe_bias);
float sigmoid(float llvm_cbe_x);
void detection_head(float (*llvm_cbe_in)[8][32], float (*llvm_cbe_out)[8][16], float (*llvm_cbe_kernel)[32][1][1], float *llvm_cbe_bias);
void topp(float (*llvm_cbe_image)[64][3], float (*llvm_cbe_output)[8][16]);


/* Global Variable Definitions and Initialization */
static float aesl_internal_conv1_OC_line_buf[2][64][3];
static float aesl_internal_conv2_OC_line_buf[2][31][8];
static float aesl_internal_conv3_OC_line_buf[2][14][16];
static float aesl_internal_conv4_OC_line_buf[2][12][32];
static float aesl_internal_conv5_OC_line_buf[2][10][32];
static float aesl_internal_topp_OC_f1[62][62][8];
static float aesl_internal_topp_OC_p1[31][31][8];
static float aesl_internal_topp_OC_f2[29][29][16];
static float aesl_internal_topp_OC_p2[14][14][16];
float W1[8][3][3][3] __ATTRIBUTE_WEAK__;
float B2[16] __ATTRIBUTE_WEAK__;
float W2[16][8][3][3] __ATTRIBUTE_WEAK__;
float W5[32][32][3][3] __ATTRIBUTE_WEAK__;
float B5[32] __ATTRIBUTE_WEAK__;
static float aesl_internal_topp_OC_f4[10][10][32];
float B1[8] __ATTRIBUTE_WEAK__;
float B3[32] __ATTRIBUTE_WEAK__;
float B4[32] __ATTRIBUTE_WEAK__;
float WH[16][32][1][1] __ATTRIBUTE_WEAK__;
float BH[16] __ATTRIBUTE_WEAK__;
static float aesl_internal_topp_OC_f3[12][12][32];
float W3[32][16][3][3] __ATTRIBUTE_WEAK__;
float W4[32][32][3][3] __ATTRIBUTE_WEAK__;
static float aesl_internal_topp_OC_f5[8][8][32];


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void conv1(float (*llvm_cbe_in)[64][3], float (*llvm_cbe_out)[62][8], float (*llvm_cbe_kernel)[3][3][3], float *llvm_cbe_bias) {
  static  unsigned long long aesl_llvm_cbe_win_buf_count = 0;
  float llvm_cbe_win_buf[3][3][3];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  float llvm_cbe_tmp__1;
  float llvm_cbe_tmp__1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  float llvm_cbe_tmp__2;
  float llvm_cbe_tmp__2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  float llvm_cbe_tmp__3;
  float llvm_cbe_tmp__3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  float llvm_cbe_tmp__4;
  float llvm_cbe_tmp__4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  float llvm_cbe_tmp__5;
  float llvm_cbe_tmp__5__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  float llvm_cbe_tmp__6;
  float llvm_cbe_tmp__6__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  float llvm_cbe_tmp__7;
  float llvm_cbe_tmp__7__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  float llvm_cbe_tmp__8;
  float llvm_cbe_tmp__8__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  float llvm_cbe_tmp__9;
  float llvm_cbe_tmp__9__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  float llvm_cbe_tmp__10;
  float llvm_cbe_tmp__10__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  float llvm_cbe_tmp__11;
  float llvm_cbe_tmp__11__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  float llvm_cbe_tmp__12;
  float llvm_cbe_tmp__12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  float llvm_cbe_tmp__13;
  float llvm_cbe_tmp__13__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  float llvm_cbe_tmp__14;
  float llvm_cbe_tmp__14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  float llvm_cbe_tmp__15;
  float llvm_cbe_tmp__15__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  float llvm_cbe_tmp__16;
  float llvm_cbe_tmp__16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  float llvm_cbe_tmp__17;
  float llvm_cbe_tmp__17__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  float llvm_cbe_tmp__18;
  float llvm_cbe_tmp__18__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned int llvm_cbe_storemerge19;
  unsigned int llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  unsigned long long llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  unsigned long long llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  float llvm_cbe_tmp__22;
  float llvm_cbe_tmp__22__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  float llvm_cbe_tmp__23;
  float llvm_cbe_tmp__23__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  float llvm_cbe_tmp__24;
  float llvm_cbe_tmp__24__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  float llvm_cbe_tmp__25;
  float llvm_cbe_tmp__25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  float llvm_cbe_tmp__26;
  float llvm_cbe_tmp__26__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  float llvm_cbe_tmp__27;
  float llvm_cbe_tmp__27__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  float llvm_cbe_tmp__28;
  float llvm_cbe_tmp__28__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  float llvm_cbe_tmp__29;
  float llvm_cbe_tmp__29__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  float llvm_cbe_tmp__30;
  float llvm_cbe_tmp__30__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  float llvm_cbe_tmp__31;
  float llvm_cbe_tmp__31__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  float llvm_cbe_tmp__32;
  float llvm_cbe_tmp__32__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  float llvm_cbe_tmp__33;
  float llvm_cbe_tmp__33__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  float llvm_cbe_tmp__34;
  float llvm_cbe_tmp__34__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  float llvm_cbe_tmp__35;
  float llvm_cbe_tmp__35__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  float llvm_cbe_tmp__36;
  float llvm_cbe_tmp__36__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  float llvm_cbe_tmp__37;
  float llvm_cbe_tmp__37__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  float llvm_cbe_tmp__38;
  float llvm_cbe_tmp__38__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  float llvm_cbe_tmp__39;
  float llvm_cbe_tmp__39__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge118_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge118_2e_us;
  unsigned int llvm_cbe_storemerge118_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  unsigned long long llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  float *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  float *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  float *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  float *llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  float *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  float *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  float *llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  float *llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  float *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  float *llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  float llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  float *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  float llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  float *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  float llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  float *llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  float *llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  float *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  float *llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  float *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  float *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  float *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  float *llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  float *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  float *llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  float llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  float *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  float llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  float *llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  float llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  float *llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  float *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  float *llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  float *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  float *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  float *llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  float *llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  float *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  float *llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  float *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  float llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  float *llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  float llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  float *llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  float llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond22_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  float llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  float *llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  unsigned int llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond20_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge314_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge314_2e_us;
  unsigned int llvm_cbe_storemerge314_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  unsigned long long llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  float *llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  float llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge412_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge412_2e_us;
  unsigned int llvm_cbe_storemerge412_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  float llvm_cbe_tmp__93;
  float llvm_cbe_tmp__93__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  unsigned long long llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  float *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  float llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  float *llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  float llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  float llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  float llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  float *llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  float llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  float *llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  float llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  float llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  float llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  float *llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  float llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  float *llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  float llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  float llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  float llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  float *llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  float llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  float *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  float llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  float llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  float llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  float *llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  float llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  float *llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  float llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  float llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  float llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  float *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  float llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  float *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  float llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  float llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  float llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  float *llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  float llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  float *llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  float llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  float llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  float llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  float *llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  float llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  float *llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  float llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  float llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  float llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  float *llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  float llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  float *llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  float llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  float llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  float llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  unsigned int llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  unsigned int llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  unsigned long long llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  float llvm_cbe_tmp__152;
  float llvm_cbe_tmp__152__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  float llvm_cbe_tmp__153;
  float llvm_cbe_tmp__153__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  float llvm_cbe_tmp__154;
  float llvm_cbe_tmp__154__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  float llvm_cbe_tmp__155;
  float llvm_cbe_tmp__155__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  float llvm_cbe_tmp__156;
  float llvm_cbe_tmp__156__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  float llvm_cbe_tmp__157;
  float llvm_cbe_tmp__157__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  float llvm_cbe_tmp__158;
  float llvm_cbe_tmp__158__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  float llvm_cbe_tmp__159;
  float llvm_cbe_tmp__159__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  float llvm_cbe_tmp__160;
  float llvm_cbe_tmp__160__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  float llvm_cbe_tmp__161;
  float llvm_cbe_tmp__161__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  float llvm_cbe_tmp__162;
  float llvm_cbe_tmp__162__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  float llvm_cbe_tmp__163;
  float llvm_cbe_tmp__163__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  float llvm_cbe_tmp__164;
  float llvm_cbe_tmp__164__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  float llvm_cbe_tmp__165;
  float llvm_cbe_tmp__165__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge118_count = 0;
  unsigned int llvm_cbe_storemerge118;
  unsigned int llvm_cbe_storemerge118__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  unsigned long long llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  float *llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  float *llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  float *llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  float *llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  float *llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  float *llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  float *llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  float *llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  float *llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  float *llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  float llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  float *llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  float llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  float *llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  float llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  float *llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  float llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  float *llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  float *llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  float llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  float *llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  float *llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  float *llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  float *llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  float *llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  float *llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  float *llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  float llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  float *llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  float llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  float *llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  float llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  static  unsigned long long aesl_llvm_cbe_907_count = 0;
  static  unsigned long long aesl_llvm_cbe_908_count = 0;
  static  unsigned long long aesl_llvm_cbe_909_count = 0;
  static  unsigned long long aesl_llvm_cbe_910_count = 0;
  static  unsigned long long aesl_llvm_cbe_911_count = 0;
  static  unsigned long long aesl_llvm_cbe_912_count = 0;
  static  unsigned long long aesl_llvm_cbe_913_count = 0;
  static  unsigned long long aesl_llvm_cbe_914_count = 0;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;
  static  unsigned long long aesl_llvm_cbe_922_count = 0;
  static  unsigned long long aesl_llvm_cbe_923_count = 0;
  static  unsigned long long aesl_llvm_cbe_924_count = 0;
  static  unsigned long long aesl_llvm_cbe_925_count = 0;
  static  unsigned long long aesl_llvm_cbe_926_count = 0;
  static  unsigned long long aesl_llvm_cbe_927_count = 0;
  static  unsigned long long aesl_llvm_cbe_928_count = 0;
  static  unsigned long long aesl_llvm_cbe_929_count = 0;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  float *llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  float llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  float *llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  float *llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  float llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
  float *llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  float *llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  float *llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
  float *llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  float *llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  float *llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  float *llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  float llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  float *llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  float llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  float *llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  float llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;
  static  unsigned long long aesl_llvm_cbe_985_count = 0;
  static  unsigned long long aesl_llvm_cbe_986_count = 0;
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
  static  unsigned long long aesl_llvm_cbe_991_count = 0;
  static  unsigned long long aesl_llvm_cbe_992_count = 0;
  static  unsigned long long aesl_llvm_cbe_993_count = 0;
  static  unsigned long long aesl_llvm_cbe_994_count = 0;
  static  unsigned long long aesl_llvm_cbe_995_count = 0;
  unsigned int llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_996_count = 0;
  static  unsigned long long aesl_llvm_cbe_997_count = 0;
  static  unsigned long long aesl_llvm_cbe_998_count = 0;
  static  unsigned long long aesl_llvm_cbe_999_count = 0;
  static  unsigned long long aesl_llvm_cbe_1000_count = 0;
  static  unsigned long long aesl_llvm_cbe_1001_count = 0;
  static  unsigned long long aesl_llvm_cbe_1002_count = 0;
  static  unsigned long long aesl_llvm_cbe_1003_count = 0;
  static  unsigned long long aesl_llvm_cbe_1004_count = 0;
  static  unsigned long long aesl_llvm_cbe_1005_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond24_count = 0;
  static  unsigned long long aesl_llvm_cbe_1006_count = 0;
  static  unsigned long long aesl_llvm_cbe_1007_count = 0;
  float llvm_cbe_tmp__217;
  float llvm_cbe_tmp__217__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  float llvm_cbe_tmp__218;
  float llvm_cbe_tmp__218__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  float llvm_cbe_tmp__219;
  float llvm_cbe_tmp__219__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  float llvm_cbe_tmp__220;
  float llvm_cbe_tmp__220__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  float llvm_cbe_tmp__221;
  float llvm_cbe_tmp__221__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  float llvm_cbe_tmp__222;
  float llvm_cbe_tmp__222__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
  float llvm_cbe_tmp__223;
  float llvm_cbe_tmp__223__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  float llvm_cbe_tmp__224;
  float llvm_cbe_tmp__224__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1015_count = 0;
  float llvm_cbe_tmp__225;
  float llvm_cbe_tmp__225__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1016_count = 0;
  float llvm_cbe_tmp__226;
  float llvm_cbe_tmp__226__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1017_count = 0;
  float llvm_cbe_tmp__227;
  float llvm_cbe_tmp__227__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1018_count = 0;
  float llvm_cbe_tmp__228;
  float llvm_cbe_tmp__228__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1019_count = 0;
  float llvm_cbe_tmp__229;
  float llvm_cbe_tmp__229__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1020_count = 0;
  float llvm_cbe_tmp__230;
  float llvm_cbe_tmp__230__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1021_count = 0;
  float llvm_cbe_tmp__231;
  float llvm_cbe_tmp__231__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1022_count = 0;
  float llvm_cbe_tmp__232;
  float llvm_cbe_tmp__232__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1023_count = 0;
  float llvm_cbe_tmp__233;
  float llvm_cbe_tmp__233__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1024_count = 0;
  float llvm_cbe_tmp__234;
  float llvm_cbe_tmp__234__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1025_count = 0;
  unsigned int llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_1026_count = 0;
  static  unsigned long long aesl_llvm_cbe_1027_count = 0;
  static  unsigned long long aesl_llvm_cbe_1028_count = 0;
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond25_count = 0;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv1\n");
  llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader17;

  do {     /* Syntactic loop '.preheader17' to make GCC happy */
llvm_cbe__2e_preheader17:
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = phi float [ undef, %%0 ], [ %%223, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__1 = (float )llvm_cbe_tmp__1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__1);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__217);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = phi float [ undef, %%0 ], [ %%224, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__2 = (float )llvm_cbe_tmp__2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__2);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__218);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = phi float [ undef, %%0 ], [ %%225, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_19_count);
  llvm_cbe_tmp__3 = (float )llvm_cbe_tmp__3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__3);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__219);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = phi float [ undef, %%0 ], [ %%226, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__4 = (float )llvm_cbe_tmp__4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__4);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__220);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = phi float [ undef, %%0 ], [ %%227, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__5 = (float )llvm_cbe_tmp__5__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__5);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__221);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = phi float [ undef, %%0 ], [ %%228, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__6 = (float )llvm_cbe_tmp__6__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__6);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__222);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = phi float [ undef, %%0 ], [ %%229, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__7 = (float )llvm_cbe_tmp__7__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__7);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__223);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = phi float [ undef, %%0 ], [ %%230, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__8 = (float )llvm_cbe_tmp__8__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__8);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__224);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi float [ undef, %%0 ], [ %%231, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__9 = (float )llvm_cbe_tmp__9__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__9);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__225);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = phi float [ undef, %%0 ], [ %%232, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__10 = (float )llvm_cbe_tmp__10__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__10);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__226);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = phi float [ undef, %%0 ], [ %%233, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__11 = (float )llvm_cbe_tmp__11__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__11);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__227);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = phi float [ undef, %%0 ], [ %%234, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__12 = (float )llvm_cbe_tmp__12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__12);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__228);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = phi float [ undef, %%0 ], [ %%235, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__13 = (float )llvm_cbe_tmp__13__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__13);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__229);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = phi float [ undef, %%0 ], [ %%236, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__14 = (float )llvm_cbe_tmp__14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__14);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__230);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = phi float [ undef, %%0 ], [ %%237, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__15 = (float )llvm_cbe_tmp__15__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__15);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__231);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = phi float [ undef, %%0 ], [ %%238, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__16 = (float )llvm_cbe_tmp__16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__16);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__232);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = phi float [ undef, %%0 ], [ %%239, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__17 = (float )llvm_cbe_tmp__17__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__17);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__233);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = phi float [ undef, %%0 ], [ %%240, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__18 = (float )llvm_cbe_tmp__18__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__18);
printf("\n = %f",((float )/*UNDEF*/0));
printf("\n = %f",llvm_cbe_tmp__234);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i32 [ 0, %%0 ], [ %%241, %%.us-lcssa.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned int )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%X",llvm_cbe_storemerge19);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__235);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = sext i32 %%storemerge19 to i64, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__19 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add nsw i32 %%storemerge19, -2, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__20 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__20&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i32 %%21 to i64, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__21 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__21);
  if ((((signed int )llvm_cbe_storemerge19) > ((signed int )1u))) {
    llvm_cbe_tmp__22__PHI_TEMPORARY = (float )llvm_cbe_tmp__1;   /* for PHI node */
    llvm_cbe_tmp__23__PHI_TEMPORARY = (float )llvm_cbe_tmp__2;   /* for PHI node */
    llvm_cbe_tmp__24__PHI_TEMPORARY = (float )llvm_cbe_tmp__3;   /* for PHI node */
    llvm_cbe_tmp__25__PHI_TEMPORARY = (float )llvm_cbe_tmp__4;   /* for PHI node */
    llvm_cbe_tmp__26__PHI_TEMPORARY = (float )llvm_cbe_tmp__5;   /* for PHI node */
    llvm_cbe_tmp__27__PHI_TEMPORARY = (float )llvm_cbe_tmp__6;   /* for PHI node */
    llvm_cbe_tmp__28__PHI_TEMPORARY = (float )llvm_cbe_tmp__7;   /* for PHI node */
    llvm_cbe_tmp__29__PHI_TEMPORARY = (float )llvm_cbe_tmp__8;   /* for PHI node */
    llvm_cbe_tmp__30__PHI_TEMPORARY = (float )llvm_cbe_tmp__9;   /* for PHI node */
    llvm_cbe_tmp__31__PHI_TEMPORARY = (float )llvm_cbe_tmp__10;   /* for PHI node */
    llvm_cbe_tmp__32__PHI_TEMPORARY = (float )llvm_cbe_tmp__11;   /* for PHI node */
    llvm_cbe_tmp__33__PHI_TEMPORARY = (float )llvm_cbe_tmp__12;   /* for PHI node */
    llvm_cbe_tmp__34__PHI_TEMPORARY = (float )llvm_cbe_tmp__13;   /* for PHI node */
    llvm_cbe_tmp__35__PHI_TEMPORARY = (float )llvm_cbe_tmp__14;   /* for PHI node */
    llvm_cbe_tmp__36__PHI_TEMPORARY = (float )llvm_cbe_tmp__15;   /* for PHI node */
    llvm_cbe_tmp__37__PHI_TEMPORARY = (float )llvm_cbe_tmp__16;   /* for PHI node */
    llvm_cbe_tmp__38__PHI_TEMPORARY = (float )llvm_cbe_tmp__17;   /* for PHI node */
    llvm_cbe_tmp__39__PHI_TEMPORARY = (float )llvm_cbe_tmp__18;   /* for PHI node */
    llvm_cbe_storemerge118_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader15_2e_us;
  } else {
    llvm_cbe_tmp__152__PHI_TEMPORARY = (float )llvm_cbe_tmp__1;   /* for PHI node */
    llvm_cbe_tmp__153__PHI_TEMPORARY = (float )llvm_cbe_tmp__2;   /* for PHI node */
    llvm_cbe_tmp__154__PHI_TEMPORARY = (float )llvm_cbe_tmp__3;   /* for PHI node */
    llvm_cbe_tmp__155__PHI_TEMPORARY = (float )llvm_cbe_tmp__4;   /* for PHI node */
    llvm_cbe_tmp__156__PHI_TEMPORARY = (float )llvm_cbe_tmp__7;   /* for PHI node */
    llvm_cbe_tmp__157__PHI_TEMPORARY = (float )llvm_cbe_tmp__8;   /* for PHI node */
    llvm_cbe_tmp__158__PHI_TEMPORARY = (float )llvm_cbe_tmp__9;   /* for PHI node */
    llvm_cbe_tmp__159__PHI_TEMPORARY = (float )llvm_cbe_tmp__10;   /* for PHI node */
    llvm_cbe_tmp__160__PHI_TEMPORARY = (float )llvm_cbe_tmp__13;   /* for PHI node */
    llvm_cbe_tmp__161__PHI_TEMPORARY = (float )llvm_cbe_tmp__14;   /* for PHI node */
    llvm_cbe_tmp__162__PHI_TEMPORARY = (float )llvm_cbe_tmp__15;   /* for PHI node */
    llvm_cbe_tmp__163__PHI_TEMPORARY = (float )llvm_cbe_tmp__16;   /* for PHI node */
    llvm_cbe_tmp__164__PHI_TEMPORARY = (float )llvm_cbe_tmp__17;   /* for PHI node */
    llvm_cbe_tmp__165__PHI_TEMPORARY = (float )llvm_cbe_tmp__18;   /* for PHI node */
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__236;
  }

llvm_cbe__2e_us_2d_lcssa_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%223 = phi float [ %%86, %%.loopexit.us ], [ %%221, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1007_count);
  llvm_cbe_tmp__217 = (float )llvm_cbe_tmp__217__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__217);
printf("\n = %f",llvm_cbe_tmp__85);
printf("\n = %f",llvm_cbe_tmp__215);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%224 = phi float [ %%23, %%.loopexit.us ], [ %%158, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1008_count);
  llvm_cbe_tmp__218 = (float )llvm_cbe_tmp__218__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__218);
printf("\n = %f",llvm_cbe_tmp__22);
printf("\n = %f",llvm_cbe_tmp__152);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%225 = phi float [ %%84, %%.loopexit.us ], [ %%219, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1009_count);
  llvm_cbe_tmp__219 = (float )llvm_cbe_tmp__219__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__219);
printf("\n = %f",llvm_cbe_tmp__83);
printf("\n = %f",llvm_cbe_tmp__213);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%226 = phi float [ %%25, %%.loopexit.us ], [ %%160, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1010_count);
  llvm_cbe_tmp__220 = (float )llvm_cbe_tmp__220__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__220);
printf("\n = %f",llvm_cbe_tmp__24);
printf("\n = %f",llvm_cbe_tmp__154);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%227 = phi float [ %%82, %%.loopexit.us ], [ %%217, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1011_count);
  llvm_cbe_tmp__221 = (float )llvm_cbe_tmp__221__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__221);
printf("\n = %f",llvm_cbe_tmp__81);
printf("\n = %f",llvm_cbe_tmp__211);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%228 = phi float [ %%27, %%.loopexit.us ], [ %%209, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1012_count);
  llvm_cbe_tmp__222 = (float )llvm_cbe_tmp__222__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__222);
printf("\n = %f",llvm_cbe_tmp__26);
printf("\n = %f",llvm_cbe_tmp__203);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%229 = phi float [ %%71, %%.loopexit.us ], [ %%204, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1013_count);
  llvm_cbe_tmp__223 = (float )llvm_cbe_tmp__223__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__223);
printf("\n = %f",llvm_cbe_tmp__70);
printf("\n = %f",llvm_cbe_tmp__198);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%230 = phi float [ %%29, %%.loopexit.us ], [ %%162, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1014_count);
  llvm_cbe_tmp__224 = (float )llvm_cbe_tmp__224__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__224);
printf("\n = %f",llvm_cbe_tmp__28);
printf("\n = %f",llvm_cbe_tmp__156);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%231 = phi float [ %%69, %%.loopexit.us ], [ %%202, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1015_count);
  llvm_cbe_tmp__225 = (float )llvm_cbe_tmp__225__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__225);
printf("\n = %f",llvm_cbe_tmp__68);
printf("\n = %f",llvm_cbe_tmp__196);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%232 = phi float [ %%31, %%.loopexit.us ], [ %%164, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1016_count);
  llvm_cbe_tmp__226 = (float )llvm_cbe_tmp__226__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__226);
printf("\n = %f",llvm_cbe_tmp__30);
printf("\n = %f",llvm_cbe_tmp__158);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%233 = phi float [ %%67, %%.loopexit.us ], [ %%200, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1017_count);
  llvm_cbe_tmp__227 = (float )llvm_cbe_tmp__227__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__227);
printf("\n = %f",llvm_cbe_tmp__66);
printf("\n = %f",llvm_cbe_tmp__194);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%234 = phi float [ %%33, %%.loopexit.us ], [ %%192, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1018_count);
  llvm_cbe_tmp__228 = (float )llvm_cbe_tmp__228__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__228);
printf("\n = %f",llvm_cbe_tmp__32);
printf("\n = %f",llvm_cbe_tmp__186);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%235 = phi float [ %%56, %%.loopexit.us ], [ %%187, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1019_count);
  llvm_cbe_tmp__229 = (float )llvm_cbe_tmp__229__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__229);
printf("\n = %f",llvm_cbe_tmp__55);
printf("\n = %f",llvm_cbe_tmp__181);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%236 = phi float [ %%35, %%.loopexit.us ], [ %%166, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1020_count);
  llvm_cbe_tmp__230 = (float )llvm_cbe_tmp__230__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__230);
printf("\n = %f",llvm_cbe_tmp__34);
printf("\n = %f",llvm_cbe_tmp__160);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%237 = phi float [ %%54, %%.loopexit.us ], [ %%185, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1021_count);
  llvm_cbe_tmp__231 = (float )llvm_cbe_tmp__231__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__231);
printf("\n = %f",llvm_cbe_tmp__53);
printf("\n = %f",llvm_cbe_tmp__179);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%238 = phi float [ %%37, %%.loopexit.us ], [ %%168, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1022_count);
  llvm_cbe_tmp__232 = (float )llvm_cbe_tmp__232__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__232);
printf("\n = %f",llvm_cbe_tmp__36);
printf("\n = %f",llvm_cbe_tmp__162);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%239 = phi float [ %%52, %%.loopexit.us ], [ %%183, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1023_count);
  llvm_cbe_tmp__233 = (float )llvm_cbe_tmp__233__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__233);
printf("\n = %f",llvm_cbe_tmp__51);
printf("\n = %f",llvm_cbe_tmp__177);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%240 = phi float [ %%39, %%.loopexit.us ], [ %%170, %%157  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1024_count);
  llvm_cbe_tmp__234 = (float )llvm_cbe_tmp__234__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__234);
printf("\n = %f",llvm_cbe_tmp__38);
printf("\n = %f",llvm_cbe_tmp__164);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%241 = add nsw i32 %%storemerge19, 1, !dbg !22 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_1025_count);
  llvm_cbe_tmp__235 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__235&4294967295ull)));
  if (((llvm_cbe_tmp__235&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__237;
  } else {
    llvm_cbe_tmp__1__PHI_TEMPORARY = (float )llvm_cbe_tmp__217;   /* for PHI node */
    llvm_cbe_tmp__2__PHI_TEMPORARY = (float )llvm_cbe_tmp__218;   /* for PHI node */
    llvm_cbe_tmp__3__PHI_TEMPORARY = (float )llvm_cbe_tmp__219;   /* for PHI node */
    llvm_cbe_tmp__4__PHI_TEMPORARY = (float )llvm_cbe_tmp__220;   /* for PHI node */
    llvm_cbe_tmp__5__PHI_TEMPORARY = (float )llvm_cbe_tmp__221;   /* for PHI node */
    llvm_cbe_tmp__6__PHI_TEMPORARY = (float )llvm_cbe_tmp__222;   /* for PHI node */
    llvm_cbe_tmp__7__PHI_TEMPORARY = (float )llvm_cbe_tmp__223;   /* for PHI node */
    llvm_cbe_tmp__8__PHI_TEMPORARY = (float )llvm_cbe_tmp__224;   /* for PHI node */
    llvm_cbe_tmp__9__PHI_TEMPORARY = (float )llvm_cbe_tmp__225;   /* for PHI node */
    llvm_cbe_tmp__10__PHI_TEMPORARY = (float )llvm_cbe_tmp__226;   /* for PHI node */
    llvm_cbe_tmp__11__PHI_TEMPORARY = (float )llvm_cbe_tmp__227;   /* for PHI node */
    llvm_cbe_tmp__12__PHI_TEMPORARY = (float )llvm_cbe_tmp__228;   /* for PHI node */
    llvm_cbe_tmp__13__PHI_TEMPORARY = (float )llvm_cbe_tmp__229;   /* for PHI node */
    llvm_cbe_tmp__14__PHI_TEMPORARY = (float )llvm_cbe_tmp__230;   /* for PHI node */
    llvm_cbe_tmp__15__PHI_TEMPORARY = (float )llvm_cbe_tmp__231;   /* for PHI node */
    llvm_cbe_tmp__16__PHI_TEMPORARY = (float )llvm_cbe_tmp__232;   /* for PHI node */
    llvm_cbe_tmp__17__PHI_TEMPORARY = (float )llvm_cbe_tmp__233;   /* for PHI node */
    llvm_cbe_tmp__18__PHI_TEMPORARY = (float )llvm_cbe_tmp__234;   /* for PHI node */
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__235;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  }

  do {     /* Syntactic loop '.preheader15.us' to make GCC happy */
llvm_cbe__2e_preheader15_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = phi float [ %%86, %%.loopexit.us ], [ %%1, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__22 = (float )llvm_cbe_tmp__22__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__22);
printf("\n = %f",llvm_cbe_tmp__85);
printf("\n = %f",llvm_cbe_tmp__1);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = phi float [ %%23, %%.loopexit.us ], [ %%2, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__23 = (float )llvm_cbe_tmp__23__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__23);
printf("\n = %f",llvm_cbe_tmp__22);
printf("\n = %f",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = phi float [ %%84, %%.loopexit.us ], [ %%3, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__24 = (float )llvm_cbe_tmp__24__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__24);
printf("\n = %f",llvm_cbe_tmp__83);
printf("\n = %f",llvm_cbe_tmp__3);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = phi float [ %%25, %%.loopexit.us ], [ %%4, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__25 = (float )llvm_cbe_tmp__25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__25);
printf("\n = %f",llvm_cbe_tmp__24);
printf("\n = %f",llvm_cbe_tmp__4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = phi float [ %%82, %%.loopexit.us ], [ %%5, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__26 = (float )llvm_cbe_tmp__26__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__26);
printf("\n = %f",llvm_cbe_tmp__81);
printf("\n = %f",llvm_cbe_tmp__5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = phi float [ %%27, %%.loopexit.us ], [ %%6, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__27 = (float )llvm_cbe_tmp__27__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__27);
printf("\n = %f",llvm_cbe_tmp__26);
printf("\n = %f",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = phi float [ %%71, %%.loopexit.us ], [ %%7, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__28 = (float )llvm_cbe_tmp__28__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__28);
printf("\n = %f",llvm_cbe_tmp__70);
printf("\n = %f",llvm_cbe_tmp__7);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = phi float [ %%29, %%.loopexit.us ], [ %%8, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__29 = (float )llvm_cbe_tmp__29__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__29);
printf("\n = %f",llvm_cbe_tmp__28);
printf("\n = %f",llvm_cbe_tmp__8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = phi float [ %%69, %%.loopexit.us ], [ %%9, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__30 = (float )llvm_cbe_tmp__30__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__30);
printf("\n = %f",llvm_cbe_tmp__68);
printf("\n = %f",llvm_cbe_tmp__9);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = phi float [ %%31, %%.loopexit.us ], [ %%10, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__31 = (float )llvm_cbe_tmp__31__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__31);
printf("\n = %f",llvm_cbe_tmp__30);
printf("\n = %f",llvm_cbe_tmp__10);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = phi float [ %%67, %%.loopexit.us ], [ %%11, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__32 = (float )llvm_cbe_tmp__32__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__32);
printf("\n = %f",llvm_cbe_tmp__66);
printf("\n = %f",llvm_cbe_tmp__11);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = phi float [ %%33, %%.loopexit.us ], [ %%12, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_60_count);
  llvm_cbe_tmp__33 = (float )llvm_cbe_tmp__33__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__33);
printf("\n = %f",llvm_cbe_tmp__32);
printf("\n = %f",llvm_cbe_tmp__12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = phi float [ %%56, %%.loopexit.us ], [ %%13, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__34 = (float )llvm_cbe_tmp__34__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__34);
printf("\n = %f",llvm_cbe_tmp__55);
printf("\n = %f",llvm_cbe_tmp__13);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = phi float [ %%35, %%.loopexit.us ], [ %%14, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__35 = (float )llvm_cbe_tmp__35__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__35);
printf("\n = %f",llvm_cbe_tmp__34);
printf("\n = %f",llvm_cbe_tmp__14);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = phi float [ %%54, %%.loopexit.us ], [ %%15, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__36 = (float )llvm_cbe_tmp__36__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__36);
printf("\n = %f",llvm_cbe_tmp__53);
printf("\n = %f",llvm_cbe_tmp__15);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = phi float [ %%37, %%.loopexit.us ], [ %%16, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__37 = (float )llvm_cbe_tmp__37__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__37);
printf("\n = %f",llvm_cbe_tmp__36);
printf("\n = %f",llvm_cbe_tmp__16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = phi float [ %%52, %%.loopexit.us ], [ %%17, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__38 = (float )llvm_cbe_tmp__38__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__38);
printf("\n = %f",llvm_cbe_tmp__51);
printf("\n = %f",llvm_cbe_tmp__17);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = phi float [ %%39, %%.loopexit.us ], [ %%18, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__39 = (float )llvm_cbe_tmp__39__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__39);
printf("\n = %f",llvm_cbe_tmp__38);
printf("\n = %f",llvm_cbe_tmp__18);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge118.us = phi i32 [ %%88, %%.loopexit.us ], [ 0, %%.preheader17  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_storemerge118_2e_us_count);
  llvm_cbe_storemerge118_2e_us = (unsigned int )llvm_cbe_storemerge118_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge118.us = 0x%X",llvm_cbe_storemerge118_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__86);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = sext i32 %%storemerge118.us to i64, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_93_count);
  llvm_cbe_tmp__40 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge118_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 0, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__41 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__42 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%40, float* %%43, align 16, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_96_count);
  *llvm_cbe_tmp__42 = llvm_cbe_tmp__39;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_97_count);
  llvm_cbe_tmp__43 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%39, float* %%42, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_98_count);
  *llvm_cbe_tmp__41 = llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_99_count);
  llvm_cbe_tmp__44 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_100_count);
  llvm_cbe_tmp__45 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%38, float* %%46, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_101_count);
  *llvm_cbe_tmp__45 = llvm_cbe_tmp__37;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__46 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%37, float* %%45, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_103_count);
  *llvm_cbe_tmp__44 = llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__47 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__48 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%36, float* %%49, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_106_count);
  *llvm_cbe_tmp__48 = llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__49 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%35, float* %%48, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_108_count);
  *llvm_cbe_tmp__47 = llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 0, i64 %%41, i64 0, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__50 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__40) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = load float* %%51, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__51 = (float )*llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__51, *(int*)(&llvm_cbe_tmp__51));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 1, i64 %%41, i64 0, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__52 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__40) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__53 = (float )*llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%19, i64 %%41, i64 0, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__54 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__19))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__40) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__55 = (float )*llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__55, *(int*)(&llvm_cbe_tmp__55));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__40) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%54, float* %%51, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_123_count);
  *llvm_cbe_tmp__50 = llvm_cbe_tmp__53;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__53);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__40) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%56, float* %%53, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_124_count);
  *llvm_cbe_tmp__52 = llvm_cbe_tmp__55;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__55);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%52, float* %%44, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_125_count);
  *llvm_cbe_tmp__43 = llvm_cbe_tmp__51;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__51);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%54, float* %%47, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_126_count);
  *llvm_cbe_tmp__46 = llvm_cbe_tmp__53;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__53);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%56, float* %%50, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_127_count);
  *llvm_cbe_tmp__49 = llvm_cbe_tmp__55;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__56 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__57 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%34, float* %%58, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_157_count);
  *llvm_cbe_tmp__57 = llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__58 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%33, float* %%57, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_159_count);
  *llvm_cbe_tmp__56 = llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__59 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__60 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%32, float* %%61, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_162_count);
  *llvm_cbe_tmp__60 = llvm_cbe_tmp__31;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_163_count);
  llvm_cbe_tmp__61 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%31, float* %%60, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_164_count);
  *llvm_cbe_tmp__59 = llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_165_count);
  llvm_cbe_tmp__62 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_166_count);
  llvm_cbe_tmp__63 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%30, float* %%64, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_167_count);
  *llvm_cbe_tmp__63 = llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__64 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%29, float* %%63, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_169_count);
  *llvm_cbe_tmp__62 = llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 0, i64 %%41, i64 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__65 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__40) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load float* %%66, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__66 = (float )*llvm_cbe_tmp__65;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__66, *(int*)(&llvm_cbe_tmp__66));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 1, i64 %%41, i64 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__67 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__40) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load float* %%68, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__68 = (float )*llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__68, *(int*)(&llvm_cbe_tmp__68));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%19, i64 %%41, i64 1, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_179_count);
  llvm_cbe_tmp__69 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__19))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__40) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load float* %%70, align 4, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__70 = (float )*llvm_cbe_tmp__69;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__70, *(int*)(&llvm_cbe_tmp__70));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__40) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%69, float* %%66, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_184_count);
  *llvm_cbe_tmp__65 = llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__68);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__40) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%71, float* %%68, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_185_count);
  *llvm_cbe_tmp__67 = llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__70);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%67, float* %%59, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_186_count);
  *llvm_cbe_tmp__58 = llvm_cbe_tmp__66;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__66);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%69, float* %%62, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_187_count);
  *llvm_cbe_tmp__61 = llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__68);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%71, float* %%65, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_188_count);
  *llvm_cbe_tmp__64 = llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 2, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_216_count);
  llvm_cbe_tmp__71 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 2, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__72 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%73, align 8, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_218_count);
  *llvm_cbe_tmp__72 = llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_219_count);
  llvm_cbe_tmp__73 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%27, float* %%72, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_220_count);
  *llvm_cbe_tmp__71 = llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__74 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__75 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%76, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_223_count);
  *llvm_cbe_tmp__75 = llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_224_count);
  llvm_cbe_tmp__76 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%25, float* %%75, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_225_count);
  *llvm_cbe_tmp__74 = llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_226_count);
  llvm_cbe_tmp__77 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_227_count);
  llvm_cbe_tmp__78 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* %%79, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_228_count);
  *llvm_cbe_tmp__78 = llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_229_count);
  llvm_cbe_tmp__79 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%23, float* %%78, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_230_count);
  *llvm_cbe_tmp__77 = llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 0, i64 %%41, i64 2, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_231_count);
  llvm_cbe_tmp__80 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__40) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = load float* %%81, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_232_count);
  llvm_cbe_tmp__81 = (float )*llvm_cbe_tmp__80;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__81, *(int*)(&llvm_cbe_tmp__81));
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 1, i64 %%41, i64 2, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__82 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__40) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = load float* %%83, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__83 = (float )*llvm_cbe_tmp__82;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__83, *(int*)(&llvm_cbe_tmp__83));
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%19, i64 %%41, i64 2, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_240_count);
  llvm_cbe_tmp__84 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__19))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__40) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = load float* %%85, align 4, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_241_count);
  llvm_cbe_tmp__85 = (float )*llvm_cbe_tmp__84;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__85, *(int*)(&llvm_cbe_tmp__85));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__40) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%84, float* %%81, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_245_count);
  *llvm_cbe_tmp__80 = llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__83);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__40) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%86, float* %%83, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_246_count);
  *llvm_cbe_tmp__82 = llvm_cbe_tmp__85;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__85);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%82, float* %%74, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_247_count);
  *llvm_cbe_tmp__73 = llvm_cbe_tmp__81;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__81);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%84, float* %%77, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_248_count);
  *llvm_cbe_tmp__76 = llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__83);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%86, float* %%80, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_249_count);
  *llvm_cbe_tmp__79 = llvm_cbe_tmp__85;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__85);
  if ((((signed int )llvm_cbe_storemerge118_2e_us) > ((signed int )1u))) {
    goto llvm_cbe__2e_preheader13_2e_us;
  } else {
    goto llvm_cbe__2e_loopexit_2e_us;
  }

llvm_cbe__2e_loopexit_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = add nsw i32 %%storemerge118.us, 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_279_count);
  llvm_cbe_tmp__86 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__86&4294967295ull)));
  if (((llvm_cbe_tmp__86&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_tmp__217__PHI_TEMPORARY = (float )llvm_cbe_tmp__85;   /* for PHI node */
    llvm_cbe_tmp__218__PHI_TEMPORARY = (float )llvm_cbe_tmp__22;   /* for PHI node */
    llvm_cbe_tmp__219__PHI_TEMPORARY = (float )llvm_cbe_tmp__83;   /* for PHI node */
    llvm_cbe_tmp__220__PHI_TEMPORARY = (float )llvm_cbe_tmp__24;   /* for PHI node */
    llvm_cbe_tmp__221__PHI_TEMPORARY = (float )llvm_cbe_tmp__81;   /* for PHI node */
    llvm_cbe_tmp__222__PHI_TEMPORARY = (float )llvm_cbe_tmp__26;   /* for PHI node */
    llvm_cbe_tmp__223__PHI_TEMPORARY = (float )llvm_cbe_tmp__70;   /* for PHI node */
    llvm_cbe_tmp__224__PHI_TEMPORARY = (float )llvm_cbe_tmp__28;   /* for PHI node */
    llvm_cbe_tmp__225__PHI_TEMPORARY = (float )llvm_cbe_tmp__68;   /* for PHI node */
    llvm_cbe_tmp__226__PHI_TEMPORARY = (float )llvm_cbe_tmp__30;   /* for PHI node */
    llvm_cbe_tmp__227__PHI_TEMPORARY = (float )llvm_cbe_tmp__66;   /* for PHI node */
    llvm_cbe_tmp__228__PHI_TEMPORARY = (float )llvm_cbe_tmp__32;   /* for PHI node */
    llvm_cbe_tmp__229__PHI_TEMPORARY = (float )llvm_cbe_tmp__55;   /* for PHI node */
    llvm_cbe_tmp__230__PHI_TEMPORARY = (float )llvm_cbe_tmp__34;   /* for PHI node */
    llvm_cbe_tmp__231__PHI_TEMPORARY = (float )llvm_cbe_tmp__53;   /* for PHI node */
    llvm_cbe_tmp__232__PHI_TEMPORARY = (float )llvm_cbe_tmp__36;   /* for PHI node */
    llvm_cbe_tmp__233__PHI_TEMPORARY = (float )llvm_cbe_tmp__51;   /* for PHI node */
    llvm_cbe_tmp__234__PHI_TEMPORARY = (float )llvm_cbe_tmp__38;   /* for PHI node */
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_tmp__22__PHI_TEMPORARY = (float )llvm_cbe_tmp__85;   /* for PHI node */
    llvm_cbe_tmp__23__PHI_TEMPORARY = (float )llvm_cbe_tmp__22;   /* for PHI node */
    llvm_cbe_tmp__24__PHI_TEMPORARY = (float )llvm_cbe_tmp__83;   /* for PHI node */
    llvm_cbe_tmp__25__PHI_TEMPORARY = (float )llvm_cbe_tmp__24;   /* for PHI node */
    llvm_cbe_tmp__26__PHI_TEMPORARY = (float )llvm_cbe_tmp__81;   /* for PHI node */
    llvm_cbe_tmp__27__PHI_TEMPORARY = (float )llvm_cbe_tmp__26;   /* for PHI node */
    llvm_cbe_tmp__28__PHI_TEMPORARY = (float )llvm_cbe_tmp__70;   /* for PHI node */
    llvm_cbe_tmp__29__PHI_TEMPORARY = (float )llvm_cbe_tmp__28;   /* for PHI node */
    llvm_cbe_tmp__30__PHI_TEMPORARY = (float )llvm_cbe_tmp__68;   /* for PHI node */
    llvm_cbe_tmp__31__PHI_TEMPORARY = (float )llvm_cbe_tmp__30;   /* for PHI node */
    llvm_cbe_tmp__32__PHI_TEMPORARY = (float )llvm_cbe_tmp__66;   /* for PHI node */
    llvm_cbe_tmp__33__PHI_TEMPORARY = (float )llvm_cbe_tmp__32;   /* for PHI node */
    llvm_cbe_tmp__34__PHI_TEMPORARY = (float )llvm_cbe_tmp__55;   /* for PHI node */
    llvm_cbe_tmp__35__PHI_TEMPORARY = (float )llvm_cbe_tmp__34;   /* for PHI node */
    llvm_cbe_tmp__36__PHI_TEMPORARY = (float )llvm_cbe_tmp__53;   /* for PHI node */
    llvm_cbe_tmp__37__PHI_TEMPORARY = (float )llvm_cbe_tmp__36;   /* for PHI node */
    llvm_cbe_tmp__38__PHI_TEMPORARY = (float )llvm_cbe_tmp__51;   /* for PHI node */
    llvm_cbe_tmp__39__PHI_TEMPORARY = (float )llvm_cbe_tmp__38;   /* for PHI node */
    llvm_cbe_storemerge118_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__86;   /* for PHI node */
    goto llvm_cbe__2e_preheader15_2e_us;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__238:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge314.us = phi i32 [ 0, %%.preheader13.us ], [ %%93, %%89  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_storemerge314_2e_us_count);
  llvm_cbe_storemerge314_2e_us = (unsigned int )llvm_cbe_storemerge314_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge314.us = 0x%X",llvm_cbe_storemerge314_2e_us);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__89);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = sext i32 %%storemerge314.us to i64, !dbg !22 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__90 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge314_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = getelementptr inbounds float* %%bias, i64 %%95, !dbg !22 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__91 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__90))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = load float* %%96, align 4, !dbg !22 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_309_count);
  llvm_cbe_tmp__92 = (float )*llvm_cbe_tmp__91;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__92, *(int*)(&llvm_cbe_tmp__92));
  llvm_cbe_storemerge412_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__93__PHI_TEMPORARY = (float )llvm_cbe_tmp__92;   /* for PHI node */
  goto llvm_cbe__2e_preheader8_2e_us;

llvm_cbe_tmp__239:
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = select i1 %%90, float 0.000000e+00, float %%153, !dbg !25 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_296_count);
  llvm_cbe_tmp__87 = (float )(((llvm_fcmp_olt(llvm_cbe_tmp__148, 0x0p0))) ? ((float )0x0p0) : ((float )llvm_cbe_tmp__148));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__87, *(int*)(&llvm_cbe_tmp__87));
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = getelementptr inbounds [62 x [8 x float]]* %%out, i64 %%22, i64 %%156, i64 %%95, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_297_count);
  llvm_cbe_tmp__88 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__151))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__90))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__151));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__151) < 62 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__90) < 8 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%91, float* %%92, align 4, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_298_count);
  *llvm_cbe_tmp__88 = llvm_cbe_tmp__87;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = add nsw i32 %%storemerge314.us, 1, !dbg !25 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_299_count);
  llvm_cbe_tmp__89 = (unsigned int )((unsigned int )(llvm_cbe_storemerge314_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__89&4294967295ull)));
  if (((llvm_cbe_tmp__89&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe__2e_loopexit_2e_us;
  } else {
    llvm_cbe_storemerge314_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__89;   /* for PHI node */
    goto llvm_cbe_tmp__238;
  }

  do {     /* Syntactic loop '.preheader8.us' to make GCC happy */
llvm_cbe__2e_preheader8_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge412.us = phi i32 [ 0, %%94 ], [ %%154, %%.preheader8.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_storemerge412_2e_us_count);
  llvm_cbe_storemerge412_2e_us = (unsigned int )llvm_cbe_storemerge412_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge412.us = 0x%X",llvm_cbe_storemerge412_2e_us);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__149);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = phi float [ %%97, %%94 ], [ %%153, %%.preheader8.us  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_320_count);
  llvm_cbe_tmp__93 = (float )llvm_cbe_tmp__93__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__93);
printf("\n = %f",llvm_cbe_tmp__92);
printf("\n = %f",llvm_cbe_tmp__148);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = sext i32 %%storemerge412.us to i64, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_325_count);
  llvm_cbe_tmp__94 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge412_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 %%99, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_352_count);
  llvm_cbe_tmp__95 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = load float* %%100, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_353_count);
  llvm_cbe_tmp__96 = (float )*llvm_cbe_tmp__95;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__96, *(int*)(&llvm_cbe_tmp__96));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%95, i64 %%99, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_354_count);
  llvm_cbe_tmp__97 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = load float* %%102, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_355_count);
  llvm_cbe_tmp__98 = (float )*llvm_cbe_tmp__97;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__98, *(int*)(&llvm_cbe_tmp__98));
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = fmul float %%101, %%103, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_356_count);
  llvm_cbe_tmp__99 = (float )((float )(llvm_cbe_tmp__96 * llvm_cbe_tmp__98));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__99, *(int*)(&llvm_cbe_tmp__99));
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = fadd float %%98, %%104, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_357_count);
  llvm_cbe_tmp__100 = (float )((float )(llvm_cbe_tmp__93 + llvm_cbe_tmp__99));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__100, *(int*)(&llvm_cbe_tmp__100));
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 %%99, i64 0, i64 1, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_389_count);
  llvm_cbe_tmp__101 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = load float* %%106, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_390_count);
  llvm_cbe_tmp__102 = (float )*llvm_cbe_tmp__101;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__102, *(int*)(&llvm_cbe_tmp__102));
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%95, i64 %%99, i64 0, i64 1, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_391_count);
  llvm_cbe_tmp__103 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = load float* %%108, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_392_count);
  llvm_cbe_tmp__104 = (float )*llvm_cbe_tmp__103;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__104, *(int*)(&llvm_cbe_tmp__104));
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = fmul float %%107, %%109, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_393_count);
  llvm_cbe_tmp__105 = (float )((float )(llvm_cbe_tmp__102 * llvm_cbe_tmp__104));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__105, *(int*)(&llvm_cbe_tmp__105));
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = fadd float %%105, %%110, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_394_count);
  llvm_cbe_tmp__106 = (float )((float )(llvm_cbe_tmp__100 + llvm_cbe_tmp__105));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__106, *(int*)(&llvm_cbe_tmp__106));
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 %%99, i64 0, i64 2, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_426_count);
  llvm_cbe_tmp__107 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = load float* %%112, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_427_count);
  llvm_cbe_tmp__108 = (float )*llvm_cbe_tmp__107;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__108, *(int*)(&llvm_cbe_tmp__108));
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%95, i64 %%99, i64 0, i64 2, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_428_count);
  llvm_cbe_tmp__109 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = load float* %%114, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_429_count);
  llvm_cbe_tmp__110 = (float )*llvm_cbe_tmp__109;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__110, *(int*)(&llvm_cbe_tmp__110));
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = fmul float %%113, %%115, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__111 = (float )((float )(llvm_cbe_tmp__108 * llvm_cbe_tmp__110));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__111, *(int*)(&llvm_cbe_tmp__111));
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = fadd float %%111, %%116, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_431_count);
  llvm_cbe_tmp__112 = (float )((float )(llvm_cbe_tmp__106 + llvm_cbe_tmp__111));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__112, *(int*)(&llvm_cbe_tmp__112));
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 %%99, i64 1, i64 0, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_494_count);
  llvm_cbe_tmp__113 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = load float* %%118, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_495_count);
  llvm_cbe_tmp__114 = (float )*llvm_cbe_tmp__113;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__114, *(int*)(&llvm_cbe_tmp__114));
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%95, i64 %%99, i64 1, i64 0, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_496_count);
  llvm_cbe_tmp__115 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = load float* %%120, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_497_count);
  llvm_cbe_tmp__116 = (float )*llvm_cbe_tmp__115;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__116, *(int*)(&llvm_cbe_tmp__116));
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = fmul float %%119, %%121, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_498_count);
  llvm_cbe_tmp__117 = (float )((float )(llvm_cbe_tmp__114 * llvm_cbe_tmp__116));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__117, *(int*)(&llvm_cbe_tmp__117));
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = fadd float %%117, %%122, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_499_count);
  llvm_cbe_tmp__118 = (float )((float )(llvm_cbe_tmp__112 + llvm_cbe_tmp__117));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__118, *(int*)(&llvm_cbe_tmp__118));
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 %%99, i64 1, i64 1, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_531_count);
  llvm_cbe_tmp__119 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = load float* %%124, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_532_count);
  llvm_cbe_tmp__120 = (float )*llvm_cbe_tmp__119;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__120, *(int*)(&llvm_cbe_tmp__120));
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%95, i64 %%99, i64 1, i64 1, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_533_count);
  llvm_cbe_tmp__121 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = load float* %%126, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_534_count);
  llvm_cbe_tmp__122 = (float )*llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__122, *(int*)(&llvm_cbe_tmp__122));
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = fmul float %%125, %%127, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_535_count);
  llvm_cbe_tmp__123 = (float )((float )(llvm_cbe_tmp__120 * llvm_cbe_tmp__122));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__123, *(int*)(&llvm_cbe_tmp__123));
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = fadd float %%123, %%128, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_536_count);
  llvm_cbe_tmp__124 = (float )((float )(llvm_cbe_tmp__118 + llvm_cbe_tmp__123));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__124, *(int*)(&llvm_cbe_tmp__124));
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 %%99, i64 1, i64 2, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_568_count);
  llvm_cbe_tmp__125 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = load float* %%130, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_569_count);
  llvm_cbe_tmp__126 = (float )*llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__126, *(int*)(&llvm_cbe_tmp__126));
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%95, i64 %%99, i64 1, i64 2, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_570_count);
  llvm_cbe_tmp__127 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = load float* %%132, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_571_count);
  llvm_cbe_tmp__128 = (float )*llvm_cbe_tmp__127;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__128, *(int*)(&llvm_cbe_tmp__128));
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = fmul float %%131, %%133, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_572_count);
  llvm_cbe_tmp__129 = (float )((float )(llvm_cbe_tmp__126 * llvm_cbe_tmp__128));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__129, *(int*)(&llvm_cbe_tmp__129));
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = fadd float %%129, %%134, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_573_count);
  llvm_cbe_tmp__130 = (float )((float )(llvm_cbe_tmp__124 + llvm_cbe_tmp__129));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__130, *(int*)(&llvm_cbe_tmp__130));
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 %%99, i64 2, i64 0, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_636_count);
  llvm_cbe_tmp__131 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = load float* %%136, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_637_count);
  llvm_cbe_tmp__132 = (float )*llvm_cbe_tmp__131;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__132, *(int*)(&llvm_cbe_tmp__132));
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%95, i64 %%99, i64 2, i64 0, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_638_count);
  llvm_cbe_tmp__133 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load float* %%138, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_639_count);
  llvm_cbe_tmp__134 = (float )*llvm_cbe_tmp__133;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__134, *(int*)(&llvm_cbe_tmp__134));
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = fmul float %%137, %%139, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_640_count);
  llvm_cbe_tmp__135 = (float )((float )(llvm_cbe_tmp__132 * llvm_cbe_tmp__134));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__135, *(int*)(&llvm_cbe_tmp__135));
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = fadd float %%135, %%140, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_641_count);
  llvm_cbe_tmp__136 = (float )((float )(llvm_cbe_tmp__130 + llvm_cbe_tmp__135));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__136, *(int*)(&llvm_cbe_tmp__136));
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 %%99, i64 2, i64 1, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_673_count);
  llvm_cbe_tmp__137 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = load float* %%142, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_674_count);
  llvm_cbe_tmp__138 = (float )*llvm_cbe_tmp__137;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__138, *(int*)(&llvm_cbe_tmp__138));
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%95, i64 %%99, i64 2, i64 1, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_675_count);
  llvm_cbe_tmp__139 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = load float* %%144, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_676_count);
  llvm_cbe_tmp__140 = (float )*llvm_cbe_tmp__139;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__140, *(int*)(&llvm_cbe_tmp__140));
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = fmul float %%143, %%145, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_677_count);
  llvm_cbe_tmp__141 = (float )((float )(llvm_cbe_tmp__138 * llvm_cbe_tmp__140));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__141, *(int*)(&llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = fadd float %%141, %%146, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_678_count);
  llvm_cbe_tmp__142 = (float )((float )(llvm_cbe_tmp__136 + llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__142, *(int*)(&llvm_cbe_tmp__142));
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 %%99, i64 2, i64 2, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_710_count);
  llvm_cbe_tmp__143 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = load float* %%148, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_711_count);
  llvm_cbe_tmp__144 = (float )*llvm_cbe_tmp__143;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__144, *(int*)(&llvm_cbe_tmp__144));
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%95, i64 %%99, i64 2, i64 2, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_712_count);
  llvm_cbe_tmp__145 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__94))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__94) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = load float* %%150, align 4, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_713_count);
  llvm_cbe_tmp__146 = (float )*llvm_cbe_tmp__145;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__146, *(int*)(&llvm_cbe_tmp__146));
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = fmul float %%149, %%151, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_714_count);
  llvm_cbe_tmp__147 = (float )((float )(llvm_cbe_tmp__144 * llvm_cbe_tmp__146));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__147, *(int*)(&llvm_cbe_tmp__147));
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = fadd float %%147, %%152, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_715_count);
  llvm_cbe_tmp__148 = (float )((float )(llvm_cbe_tmp__142 + llvm_cbe_tmp__147));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__148, *(int*)(&llvm_cbe_tmp__148));
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = add nsw i32 %%storemerge412.us, 1, !dbg !26 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_752_count);
  llvm_cbe_tmp__149 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__149&4294967295ull)));
  if (((llvm_cbe_tmp__149&4294967295U) == (3u&4294967295U))) {
    goto llvm_cbe_tmp__239;
  } else {
    llvm_cbe_storemerge412_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__149;   /* for PHI node */
    llvm_cbe_tmp__93__PHI_TEMPORARY = (float )llvm_cbe_tmp__148;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_us;
  }

  } while (1); /* end of syntactic loop '.preheader8.us' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader13_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = add nsw i32 %%storemerge118.us, -2, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_764_count);
  llvm_cbe_tmp__150 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118_2e_us&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__150&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = sext i32 %%155 to i64, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_765_count);
  llvm_cbe_tmp__151 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__151);
  llvm_cbe_storemerge314_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__238;

  } while (1); /* end of syntactic loop '.preheader15.us' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__236:
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = phi float [ %%221, %%157 ], [ %%1, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_767_count);
  llvm_cbe_tmp__152 = (float )llvm_cbe_tmp__152__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__152);
printf("\n = %f",llvm_cbe_tmp__215);
printf("\n = %f",llvm_cbe_tmp__1);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = phi float [ %%158, %%157 ], [ %%2, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_768_count);
  llvm_cbe_tmp__153 = (float )llvm_cbe_tmp__153__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__153);
printf("\n = %f",llvm_cbe_tmp__152);
printf("\n = %f",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = phi float [ %%219, %%157 ], [ %%3, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_769_count);
  llvm_cbe_tmp__154 = (float )llvm_cbe_tmp__154__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__154);
printf("\n = %f",llvm_cbe_tmp__213);
printf("\n = %f",llvm_cbe_tmp__3);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = phi float [ %%160, %%157 ], [ %%4, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_770_count);
  llvm_cbe_tmp__155 = (float )llvm_cbe_tmp__155__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__155);
printf("\n = %f",llvm_cbe_tmp__154);
printf("\n = %f",llvm_cbe_tmp__4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = phi float [ %%204, %%157 ], [ %%7, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_771_count);
  llvm_cbe_tmp__156 = (float )llvm_cbe_tmp__156__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__156);
printf("\n = %f",llvm_cbe_tmp__198);
printf("\n = %f",llvm_cbe_tmp__7);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = phi float [ %%162, %%157 ], [ %%8, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_772_count);
  llvm_cbe_tmp__157 = (float )llvm_cbe_tmp__157__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__157);
printf("\n = %f",llvm_cbe_tmp__156);
printf("\n = %f",llvm_cbe_tmp__8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = phi float [ %%202, %%157 ], [ %%9, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_773_count);
  llvm_cbe_tmp__158 = (float )llvm_cbe_tmp__158__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__158);
printf("\n = %f",llvm_cbe_tmp__196);
printf("\n = %f",llvm_cbe_tmp__9);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = phi float [ %%164, %%157 ], [ %%10, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_774_count);
  llvm_cbe_tmp__159 = (float )llvm_cbe_tmp__159__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__159);
printf("\n = %f",llvm_cbe_tmp__158);
printf("\n = %f",llvm_cbe_tmp__10);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%166 = phi float [ %%187, %%157 ], [ %%13, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_775_count);
  llvm_cbe_tmp__160 = (float )llvm_cbe_tmp__160__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__160);
printf("\n = %f",llvm_cbe_tmp__181);
printf("\n = %f",llvm_cbe_tmp__13);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = phi float [ %%166, %%157 ], [ %%14, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_776_count);
  llvm_cbe_tmp__161 = (float )llvm_cbe_tmp__161__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__161);
printf("\n = %f",llvm_cbe_tmp__160);
printf("\n = %f",llvm_cbe_tmp__14);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%168 = phi float [ %%185, %%157 ], [ %%15, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_777_count);
  llvm_cbe_tmp__162 = (float )llvm_cbe_tmp__162__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__162);
printf("\n = %f",llvm_cbe_tmp__179);
printf("\n = %f",llvm_cbe_tmp__15);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%169 = phi float [ %%168, %%157 ], [ %%16, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_778_count);
  llvm_cbe_tmp__163 = (float )llvm_cbe_tmp__163__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__163);
printf("\n = %f",llvm_cbe_tmp__162);
printf("\n = %f",llvm_cbe_tmp__16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%170 = phi float [ %%183, %%157 ], [ %%17, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_779_count);
  llvm_cbe_tmp__164 = (float )llvm_cbe_tmp__164__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__164);
printf("\n = %f",llvm_cbe_tmp__177);
printf("\n = %f",llvm_cbe_tmp__17);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%171 = phi float [ %%170, %%157 ], [ %%18, %%.preheader17 ], !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_780_count);
  llvm_cbe_tmp__165 = (float )llvm_cbe_tmp__165__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__165);
printf("\n = %f",llvm_cbe_tmp__164);
printf("\n = %f",llvm_cbe_tmp__18);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge118 = phi i32 [ %%222, %%157 ], [ 0, %%.preheader17  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_storemerge118_count);
  llvm_cbe_storemerge118 = (unsigned int )llvm_cbe_storemerge118__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge118 = 0x%X",llvm_cbe_storemerge118);
printf("\n = 0x%X",llvm_cbe_tmp__216);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%172 = sext i32 %%storemerge118 to i64, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_807_count);
  llvm_cbe_tmp__166 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge118);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE)
printf("\n  %%173 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 0, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_808_count);
  llvm_cbe_tmp__167 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%174 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_809_count);
  llvm_cbe_tmp__168 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%171, float* %%174, align 16, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_810_count);
  *llvm_cbe_tmp__168 = llvm_cbe_tmp__165;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n  %%175 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_811_count);
  llvm_cbe_tmp__169 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%170, float* %%173, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_812_count);
  *llvm_cbe_tmp__167 = llvm_cbe_tmp__164;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__164);
if (AESL_DEBUG_TRACE)
printf("\n  %%176 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_813_count);
  llvm_cbe_tmp__170 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%177 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_814_count);
  llvm_cbe_tmp__171 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%169, float* %%177, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_815_count);
  *llvm_cbe_tmp__171 = llvm_cbe_tmp__163;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%178 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_816_count);
  llvm_cbe_tmp__172 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%168, float* %%176, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_817_count);
  *llvm_cbe_tmp__170 = llvm_cbe_tmp__162;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__162);
if (AESL_DEBUG_TRACE)
printf("\n  %%179 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_818_count);
  llvm_cbe_tmp__173 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%180 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_819_count);
  llvm_cbe_tmp__174 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%167, float* %%180, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_820_count);
  *llvm_cbe_tmp__174 = llvm_cbe_tmp__161;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n  %%181 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 0, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_821_count);
  llvm_cbe_tmp__175 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%166, float* %%179, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_822_count);
  *llvm_cbe_tmp__173 = llvm_cbe_tmp__160;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__160);
if (AESL_DEBUG_TRACE)
printf("\n  %%182 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 0, i64 %%172, i64 0, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_823_count);
  llvm_cbe_tmp__176 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__166))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__166) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%183 = load float* %%182, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_824_count);
  llvm_cbe_tmp__177 = (float )*llvm_cbe_tmp__176;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__177, *(int*)(&llvm_cbe_tmp__177));
if (AESL_DEBUG_TRACE)
printf("\n  %%184 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 1, i64 %%172, i64 0, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_827_count);
  llvm_cbe_tmp__178 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__166))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__166) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%185 = load float* %%184, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_828_count);
  llvm_cbe_tmp__179 = (float )*llvm_cbe_tmp__178;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__179, *(int*)(&llvm_cbe_tmp__179));
if (AESL_DEBUG_TRACE)
printf("\n  %%186 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%19, i64 %%172, i64 0, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_832_count);
  llvm_cbe_tmp__180 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__19))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__166))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__166) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%187 = load float* %%186, align 4, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_833_count);
  llvm_cbe_tmp__181 = (float )*llvm_cbe_tmp__180;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__181, *(int*)(&llvm_cbe_tmp__181));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__166) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%185, float* %%182, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_837_count);
  *llvm_cbe_tmp__176 = llvm_cbe_tmp__179;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__179);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__166) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%187, float* %%184, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_838_count);
  *llvm_cbe_tmp__178 = llvm_cbe_tmp__181;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__181);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%183, float* %%175, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_839_count);
  *llvm_cbe_tmp__169 = llvm_cbe_tmp__177;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__177);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%185, float* %%178, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_840_count);
  *llvm_cbe_tmp__172 = llvm_cbe_tmp__179;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__179);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%187, float* %%181, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_841_count);
  *llvm_cbe_tmp__175 = llvm_cbe_tmp__181;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n  %%188 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_869_count);
  llvm_cbe_tmp__182 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%189 = load float* %%188, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_870_count);
  llvm_cbe_tmp__183 = (float )*llvm_cbe_tmp__182;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__183, *(int*)(&llvm_cbe_tmp__183));
if (AESL_DEBUG_TRACE)
printf("\n  %%190 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_871_count);
  llvm_cbe_tmp__184 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%189, float* %%190, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_872_count);
  *llvm_cbe_tmp__184 = llvm_cbe_tmp__183;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__183);
if (AESL_DEBUG_TRACE)
printf("\n  %%191 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_873_count);
  llvm_cbe_tmp__185 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%192 = load float* %%191, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_874_count);
  llvm_cbe_tmp__186 = (float )*llvm_cbe_tmp__185;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__186, *(int*)(&llvm_cbe_tmp__186));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%192, float* %%188, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_875_count);
  *llvm_cbe_tmp__182 = llvm_cbe_tmp__186;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE)
printf("\n  %%193 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_876_count);
  llvm_cbe_tmp__187 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%194 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_877_count);
  llvm_cbe_tmp__188 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%165, float* %%194, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_878_count);
  *llvm_cbe_tmp__188 = llvm_cbe_tmp__159;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%195 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_879_count);
  llvm_cbe_tmp__189 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%164, float* %%193, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_880_count);
  *llvm_cbe_tmp__187 = llvm_cbe_tmp__158;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__158);
if (AESL_DEBUG_TRACE)
printf("\n  %%196 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_881_count);
  llvm_cbe_tmp__190 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%197 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_882_count);
  llvm_cbe_tmp__191 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%163, float* %%197, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_883_count);
  *llvm_cbe_tmp__191 = llvm_cbe_tmp__157;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n  %%198 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 1, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_884_count);
  llvm_cbe_tmp__192 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%162, float* %%196, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_885_count);
  *llvm_cbe_tmp__190 = llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__156);
if (AESL_DEBUG_TRACE)
printf("\n  %%199 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 0, i64 %%172, i64 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_886_count);
  llvm_cbe_tmp__193 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__166))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__166) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%200 = load float* %%199, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_887_count);
  llvm_cbe_tmp__194 = (float )*llvm_cbe_tmp__193;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__194, *(int*)(&llvm_cbe_tmp__194));
if (AESL_DEBUG_TRACE)
printf("\n  %%201 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 1, i64 %%172, i64 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_890_count);
  llvm_cbe_tmp__195 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__166))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__166) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%202 = load float* %%201, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_891_count);
  llvm_cbe_tmp__196 = (float )*llvm_cbe_tmp__195;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__196, *(int*)(&llvm_cbe_tmp__196));
if (AESL_DEBUG_TRACE)
printf("\n  %%203 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%19, i64 %%172, i64 1, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_895_count);
  llvm_cbe_tmp__197 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__19))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__166))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__166) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%204 = load float* %%203, align 4, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_896_count);
  llvm_cbe_tmp__198 = (float )*llvm_cbe_tmp__197;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__198, *(int*)(&llvm_cbe_tmp__198));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__166) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%202, float* %%199, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_900_count);
  *llvm_cbe_tmp__193 = llvm_cbe_tmp__196;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__196);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__166) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%204, float* %%201, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_901_count);
  *llvm_cbe_tmp__195 = llvm_cbe_tmp__198;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__198);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%200, float* %%191, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_902_count);
  *llvm_cbe_tmp__185 = llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__194);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%202, float* %%195, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_903_count);
  *llvm_cbe_tmp__189 = llvm_cbe_tmp__196;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__196);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%204, float* %%198, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_904_count);
  *llvm_cbe_tmp__192 = llvm_cbe_tmp__198;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__198);
if (AESL_DEBUG_TRACE)
printf("\n  %%205 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 2, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_932_count);
  llvm_cbe_tmp__199 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%206 = load float* %%205, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_933_count);
  llvm_cbe_tmp__200 = (float )*llvm_cbe_tmp__199;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__200, *(int*)(&llvm_cbe_tmp__200));
if (AESL_DEBUG_TRACE)
printf("\n  %%207 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 2, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_934_count);
  llvm_cbe_tmp__201 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%206, float* %%207, align 8, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_935_count);
  *llvm_cbe_tmp__201 = llvm_cbe_tmp__200;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE)
printf("\n  %%208 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_936_count);
  llvm_cbe_tmp__202 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%209 = load float* %%208, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_937_count);
  llvm_cbe_tmp__203 = (float )*llvm_cbe_tmp__202;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__203, *(int*)(&llvm_cbe_tmp__203));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%209, float* %%205, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_938_count);
  *llvm_cbe_tmp__199 = llvm_cbe_tmp__203;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__203);
if (AESL_DEBUG_TRACE)
printf("\n  %%210 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_939_count);
  llvm_cbe_tmp__204 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%211 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_940_count);
  llvm_cbe_tmp__205 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%161, float* %%211, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_941_count);
  *llvm_cbe_tmp__205 = llvm_cbe_tmp__155;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__155);
if (AESL_DEBUG_TRACE)
printf("\n  %%212 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_942_count);
  llvm_cbe_tmp__206 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%160, float* %%210, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_943_count);
  *llvm_cbe_tmp__204 = llvm_cbe_tmp__154;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__154);
if (AESL_DEBUG_TRACE)
printf("\n  %%213 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_944_count);
  llvm_cbe_tmp__207 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%214 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_945_count);
  llvm_cbe_tmp__208 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%159, float* %%214, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_946_count);
  *llvm_cbe_tmp__208 = llvm_cbe_tmp__153;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  %%215 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 2, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_947_count);
  llvm_cbe_tmp__209 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%158, float* %%213, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_948_count);
  *llvm_cbe_tmp__207 = llvm_cbe_tmp__152;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__152);
if (AESL_DEBUG_TRACE)
printf("\n  %%216 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 0, i64 %%172, i64 2, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_949_count);
  llvm_cbe_tmp__210 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__166))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__166) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%217 = load float* %%216, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_950_count);
  llvm_cbe_tmp__211 = (float )*llvm_cbe_tmp__210;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__211, *(int*)(&llvm_cbe_tmp__211));
if (AESL_DEBUG_TRACE)
printf("\n  %%218 = getelementptr inbounds [2 x [64 x [3 x float]]]* @aesl_internal_conv1.line_buf, i64 0, i64 1, i64 %%172, i64 2, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_953_count);
  llvm_cbe_tmp__212 = (float *)(&aesl_internal_conv1_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__166))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__166) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv1.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%219 = load float* %%218, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_954_count);
  llvm_cbe_tmp__213 = (float )*llvm_cbe_tmp__212;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__213, *(int*)(&llvm_cbe_tmp__213));
if (AESL_DEBUG_TRACE)
printf("\n  %%220 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%19, i64 %%172, i64 2, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_958_count);
  llvm_cbe_tmp__214 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__19))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__166))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__166) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%221 = load float* %%220, align 4, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_959_count);
  llvm_cbe_tmp__215 = (float )*llvm_cbe_tmp__214;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__215, *(int*)(&llvm_cbe_tmp__215));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__166) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%219, float* %%216, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_963_count);
  *llvm_cbe_tmp__210 = llvm_cbe_tmp__213;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__213);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__166) < 64 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'aesl_internal_conv1.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%221, float* %%218, align 4, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_964_count);
  *llvm_cbe_tmp__212 = llvm_cbe_tmp__215;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__215);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%217, float* %%208, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_965_count);
  *llvm_cbe_tmp__202 = llvm_cbe_tmp__211;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__211);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%219, float* %%212, align 4, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_966_count);
  *llvm_cbe_tmp__206 = llvm_cbe_tmp__213;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__213);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%221, float* %%215, align 8, !dbg !24 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_967_count);
  *llvm_cbe_tmp__209 = llvm_cbe_tmp__215;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n  %%222 = add nsw i32 %%storemerge118, 1, !dbg !23 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_995_count);
  llvm_cbe_tmp__216 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__216&4294967295ull)));
  if (((llvm_cbe_tmp__216&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_tmp__217__PHI_TEMPORARY = (float )llvm_cbe_tmp__215;   /* for PHI node */
    llvm_cbe_tmp__218__PHI_TEMPORARY = (float )llvm_cbe_tmp__152;   /* for PHI node */
    llvm_cbe_tmp__219__PHI_TEMPORARY = (float )llvm_cbe_tmp__213;   /* for PHI node */
    llvm_cbe_tmp__220__PHI_TEMPORARY = (float )llvm_cbe_tmp__154;   /* for PHI node */
    llvm_cbe_tmp__221__PHI_TEMPORARY = (float )llvm_cbe_tmp__211;   /* for PHI node */
    llvm_cbe_tmp__222__PHI_TEMPORARY = (float )llvm_cbe_tmp__203;   /* for PHI node */
    llvm_cbe_tmp__223__PHI_TEMPORARY = (float )llvm_cbe_tmp__198;   /* for PHI node */
    llvm_cbe_tmp__224__PHI_TEMPORARY = (float )llvm_cbe_tmp__156;   /* for PHI node */
    llvm_cbe_tmp__225__PHI_TEMPORARY = (float )llvm_cbe_tmp__196;   /* for PHI node */
    llvm_cbe_tmp__226__PHI_TEMPORARY = (float )llvm_cbe_tmp__158;   /* for PHI node */
    llvm_cbe_tmp__227__PHI_TEMPORARY = (float )llvm_cbe_tmp__194;   /* for PHI node */
    llvm_cbe_tmp__228__PHI_TEMPORARY = (float )llvm_cbe_tmp__186;   /* for PHI node */
    llvm_cbe_tmp__229__PHI_TEMPORARY = (float )llvm_cbe_tmp__181;   /* for PHI node */
    llvm_cbe_tmp__230__PHI_TEMPORARY = (float )llvm_cbe_tmp__160;   /* for PHI node */
    llvm_cbe_tmp__231__PHI_TEMPORARY = (float )llvm_cbe_tmp__179;   /* for PHI node */
    llvm_cbe_tmp__232__PHI_TEMPORARY = (float )llvm_cbe_tmp__162;   /* for PHI node */
    llvm_cbe_tmp__233__PHI_TEMPORARY = (float )llvm_cbe_tmp__177;   /* for PHI node */
    llvm_cbe_tmp__234__PHI_TEMPORARY = (float )llvm_cbe_tmp__164;   /* for PHI node */
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_tmp__152__PHI_TEMPORARY = (float )llvm_cbe_tmp__215;   /* for PHI node */
    llvm_cbe_tmp__153__PHI_TEMPORARY = (float )llvm_cbe_tmp__152;   /* for PHI node */
    llvm_cbe_tmp__154__PHI_TEMPORARY = (float )llvm_cbe_tmp__213;   /* for PHI node */
    llvm_cbe_tmp__155__PHI_TEMPORARY = (float )llvm_cbe_tmp__154;   /* for PHI node */
    llvm_cbe_tmp__156__PHI_TEMPORARY = (float )llvm_cbe_tmp__198;   /* for PHI node */
    llvm_cbe_tmp__157__PHI_TEMPORARY = (float )llvm_cbe_tmp__156;   /* for PHI node */
    llvm_cbe_tmp__158__PHI_TEMPORARY = (float )llvm_cbe_tmp__196;   /* for PHI node */
    llvm_cbe_tmp__159__PHI_TEMPORARY = (float )llvm_cbe_tmp__158;   /* for PHI node */
    llvm_cbe_tmp__160__PHI_TEMPORARY = (float )llvm_cbe_tmp__181;   /* for PHI node */
    llvm_cbe_tmp__161__PHI_TEMPORARY = (float )llvm_cbe_tmp__160;   /* for PHI node */
    llvm_cbe_tmp__162__PHI_TEMPORARY = (float )llvm_cbe_tmp__179;   /* for PHI node */
    llvm_cbe_tmp__163__PHI_TEMPORARY = (float )llvm_cbe_tmp__162;   /* for PHI node */
    llvm_cbe_tmp__164__PHI_TEMPORARY = (float )llvm_cbe_tmp__177;   /* for PHI node */
    llvm_cbe_tmp__165__PHI_TEMPORARY = (float )llvm_cbe_tmp__164;   /* for PHI node */
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__216;   /* for PHI node */
    goto llvm_cbe_tmp__236;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader17' */
llvm_cbe_tmp__237:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv1}\n");
  return;
}


void maxpool1(float (*llvm_cbe_in)[62][8], float (*llvm_cbe_out)[31][8]) {
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;
  static  unsigned long long aesl_llvm_cbe_1039_count = 0;
  static  unsigned long long aesl_llvm_cbe_1040_count = 0;
  static  unsigned long long aesl_llvm_cbe_1041_count = 0;
  static  unsigned long long aesl_llvm_cbe_1042_count = 0;
  static  unsigned long long aesl_llvm_cbe_1043_count = 0;
  static  unsigned long long aesl_llvm_cbe_1044_count = 0;
  static  unsigned long long aesl_llvm_cbe_1045_count = 0;
  static  unsigned long long aesl_llvm_cbe_1046_count = 0;
  static  unsigned long long aesl_llvm_cbe_1047_count = 0;
  static  unsigned long long aesl_llvm_cbe_1048_count = 0;
  static  unsigned long long aesl_llvm_cbe_1049_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge6_count = 0;
  unsigned int llvm_cbe_storemerge6;
  unsigned int llvm_cbe_storemerge6__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  unsigned int llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  unsigned long long llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  unsigned int llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  unsigned long long llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
  unsigned long long llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge15_count = 0;
  unsigned int llvm_cbe_storemerge15;
  unsigned int llvm_cbe_storemerge15__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  unsigned int llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  unsigned long long llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  unsigned int llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  unsigned long long llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  unsigned long long llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_count = 0;
  unsigned int llvm_cbe_storemerge23;
  unsigned int llvm_cbe_storemerge23__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  unsigned long long llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  float *llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  float llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  float *llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  float llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  float *llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  float llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  float *llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  float llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  float llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  float llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  float llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
  float *llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  unsigned int llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  unsigned int llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond7_count = 0;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
  unsigned int llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond8_count = 0;
  static  unsigned long long aesl_llvm_cbe_1156_count = 0;
  static  unsigned long long aesl_llvm_cbe_1157_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @maxpool1\n");
  llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader4;

  do {     /* Syntactic loop '.preheader4' to make GCC happy */
llvm_cbe__2e_preheader4:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge6 = phi i32 [ 0, %%0 ], [ %%32, %%31  for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_storemerge6_count);
  llvm_cbe_storemerge6 = (unsigned int )llvm_cbe_storemerge6__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge6 = 0x%X",llvm_cbe_storemerge6);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__265);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = shl nsw i32 %%storemerge6, 1, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1057_count);
  llvm_cbe_tmp__240 = (unsigned int )llvm_cbe_storemerge6 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%1 to i64, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1058_count);
  llvm_cbe_tmp__241 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = or i32 %%1, 1, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1059_count);
  llvm_cbe_tmp__242 = (unsigned int )llvm_cbe_tmp__240 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__242);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1060_count);
  llvm_cbe_tmp__243 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__242);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__243);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge6 to i64, !dbg !21 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1061_count);
  llvm_cbe_tmp__244 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge6);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__244);
  llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

llvm_cbe_tmp__266:
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add nsw i32 %%storemerge6, 1, !dbg !21 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1147_count);
  llvm_cbe_tmp__265 = (unsigned int )((unsigned int )(llvm_cbe_storemerge6&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__265&4294967295ull)));
  if (((llvm_cbe_tmp__265&4294967295U) == (31u&4294967295U))) {
    goto llvm_cbe_tmp__267;
  } else {
    llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__265;   /* for PHI node */
    goto llvm_cbe__2e_preheader4;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge15 = phi i32 [ 0, %%.preheader4 ], [ %%30, %%29  for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_storemerge15_count);
  llvm_cbe_storemerge15 = (unsigned int )llvm_cbe_storemerge15__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge15 = 0x%X",llvm_cbe_storemerge15);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__264);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = shl nsw i32 %%storemerge15, 1, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1070_count);
  llvm_cbe_tmp__245 = (unsigned int )llvm_cbe_storemerge15 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%6 to i64, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1071_count);
  llvm_cbe_tmp__246 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__246);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = or i32 %%6, 1, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1072_count);
  llvm_cbe_tmp__247 = (unsigned int )llvm_cbe_tmp__245 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__247);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%8 to i64, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1073_count);
  llvm_cbe_tmp__248 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__247);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__248);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%storemerge15 to i64, !dbg !21 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1074_count);
  llvm_cbe_tmp__249 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge15);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__249);
  llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__268;

llvm_cbe_tmp__269:
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add nsw i32 %%storemerge15, 1, !dbg !21 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1137_count);
  llvm_cbe_tmp__264 = (unsigned int )((unsigned int )(llvm_cbe_storemerge15&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__264&4294967295ull)));
  if (((llvm_cbe_tmp__264&4294967295U) == (31u&4294967295U))) {
    goto llvm_cbe_tmp__266;
  } else {
    llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__264;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__268:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23 = phi i32 [ 0, %%.preheader ], [ %%28, %%11  for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_storemerge23_count);
  llvm_cbe_storemerge23 = (unsigned int )llvm_cbe_storemerge23__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23 = 0x%X",llvm_cbe_storemerge23);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__263);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sext i32 %%storemerge23 to i64, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1076_count);
  llvm_cbe_tmp__250 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__250);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [62 x [8 x float]]* %%in, i64 %%2, i64 %%7, i64 %%12, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1077_count);
  llvm_cbe_tmp__251 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__241))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__246))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__250))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__241));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__246));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__250));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__246) < 62)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__250) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1078_count);
  llvm_cbe_tmp__252 = (float )*llvm_cbe_tmp__251;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__252, *(int*)(&llvm_cbe_tmp__252));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [62 x [8 x float]]* %%in, i64 %%2, i64 %%9, i64 %%12, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1081_count);
  llvm_cbe_tmp__253 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__241))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__248))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__250))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__241));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__248));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__250));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__248) < 62)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__250) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load float* %%15, align 4, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1082_count);
  llvm_cbe_tmp__254 = (float )*llvm_cbe_tmp__253;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__254, *(int*)(&llvm_cbe_tmp__254));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [62 x [8 x float]]* %%in, i64 %%4, i64 %%7, i64 %%12, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1086_count);
  llvm_cbe_tmp__255 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__243))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__246))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__250))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__243));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__246));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__250));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__246) < 62)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__250) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* %%17, align 4, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1087_count);
  llvm_cbe_tmp__256 = (float )*llvm_cbe_tmp__255;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__256, *(int*)(&llvm_cbe_tmp__256));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [62 x [8 x float]]* %%in, i64 %%4, i64 %%9, i64 %%12, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1091_count);
  llvm_cbe_tmp__257 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__243))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__248))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__250))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__243));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__248));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__250));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__248) < 62)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__250) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* %%19, align 4, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1092_count);
  llvm_cbe_tmp__258 = (float )*llvm_cbe_tmp__257;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__258, *(int*)(&llvm_cbe_tmp__258));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = select i1 %%21, float %%16, float %%14, !dbg !22 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1107_count);
  llvm_cbe_tmp__259 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__254, llvm_cbe_tmp__252))) ? ((float )llvm_cbe_tmp__254) : ((float )llvm_cbe_tmp__252));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__259, *(int*)(&llvm_cbe_tmp__259));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = select i1 %%23, float %%18, float %%22, !dbg !22 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1115_count);
  llvm_cbe_tmp__260 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__256, llvm_cbe_tmp__259))) ? ((float )llvm_cbe_tmp__256) : ((float )llvm_cbe_tmp__259));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__260, *(int*)(&llvm_cbe_tmp__260));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = select i1 %%25, float %%20, float %%24, !dbg !23 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1123_count);
  llvm_cbe_tmp__261 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__258, llvm_cbe_tmp__260))) ? ((float )llvm_cbe_tmp__258) : ((float )llvm_cbe_tmp__260));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__261, *(int*)(&llvm_cbe_tmp__261));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [31 x [8 x float]]* %%out, i64 %%5, i64 %%10, i64 %%12, !dbg !21 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1125_count);
  llvm_cbe_tmp__262 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__244))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__249))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__250))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__244));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__249));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__250));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__249) < 31 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__250) < 8 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%27, align 4, !dbg !21 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1126_count);
  *llvm_cbe_tmp__262 = llvm_cbe_tmp__261;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__261);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = add nsw i32 %%storemerge23, 1, !dbg !22 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_1127_count);
  llvm_cbe_tmp__263 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__263&4294967295ull)));
  if (((llvm_cbe_tmp__263&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__269;
  } else {
    llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__263;   /* for PHI node */
    goto llvm_cbe_tmp__268;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '.preheader4' */
llvm_cbe_tmp__267:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @maxpool1}\n");
  return;
}


void conv2(float (*llvm_cbe_in)[31][8], float (*llvm_cbe_out)[29][16], float (*llvm_cbe_kernel)[8][3][3], float *llvm_cbe_bias) {
  static  unsigned long long aesl_llvm_cbe_win_buf_count = 0;
  float llvm_cbe_win_buf[3][3][8];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1158_count = 0;
  static  unsigned long long aesl_llvm_cbe_1159_count = 0;
  static  unsigned long long aesl_llvm_cbe_1160_count = 0;
  static  unsigned long long aesl_llvm_cbe_1161_count = 0;
  static  unsigned long long aesl_llvm_cbe_1162_count = 0;
  static  unsigned long long aesl_llvm_cbe_1163_count = 0;
  static  unsigned long long aesl_llvm_cbe_1164_count = 0;
  static  unsigned long long aesl_llvm_cbe_1165_count = 0;
  static  unsigned long long aesl_llvm_cbe_1166_count = 0;
  static  unsigned long long aesl_llvm_cbe_1167_count = 0;
  static  unsigned long long aesl_llvm_cbe_1168_count = 0;
  static  unsigned long long aesl_llvm_cbe_1169_count = 0;
  static  unsigned long long aesl_llvm_cbe_1170_count = 0;
  static  unsigned long long aesl_llvm_cbe_1171_count = 0;
  static  unsigned long long aesl_llvm_cbe_1172_count = 0;
  static  unsigned long long aesl_llvm_cbe_1173_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned int llvm_cbe_storemerge19;
  unsigned int llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1174_count = 0;
  static  unsigned long long aesl_llvm_cbe_1175_count = 0;
  static  unsigned long long aesl_llvm_cbe_1176_count = 0;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  unsigned long long llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  unsigned int llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  unsigned long long llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge118_count = 0;
  unsigned int llvm_cbe_storemerge118;
  unsigned int llvm_cbe_storemerge118__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
  unsigned long long llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge216_count = 0;
  unsigned int llvm_cbe_storemerge216;
  unsigned int llvm_cbe_storemerge216__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  unsigned long long llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  float *llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  float llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  float *llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  float *llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  float llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  float *llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  float llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  float *llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  float *llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  float llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
  float *llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  float llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  float *llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  float *llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  float llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  float *llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
  float llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  float *llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  float llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  float *llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  float llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  unsigned int llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  static  unsigned long long aesl_llvm_cbe_1269_count = 0;
  static  unsigned long long aesl_llvm_cbe_1270_count = 0;
  static  unsigned long long aesl_llvm_cbe_1271_count = 0;
  static  unsigned long long aesl_llvm_cbe_1272_count = 0;
  static  unsigned long long aesl_llvm_cbe_1273_count = 0;
  static  unsigned long long aesl_llvm_cbe_1274_count = 0;
  static  unsigned long long aesl_llvm_cbe_1275_count = 0;
  static  unsigned long long aesl_llvm_cbe_1276_count = 0;
  static  unsigned long long aesl_llvm_cbe_1277_count = 0;
  static  unsigned long long aesl_llvm_cbe_1278_count = 0;
  static  unsigned long long aesl_llvm_cbe_1279_count = 0;
  static  unsigned long long aesl_llvm_cbe_1280_count = 0;
  static  unsigned long long aesl_llvm_cbe_1281_count = 0;
  static  unsigned long long aesl_llvm_cbe_1282_count = 0;
  static  unsigned long long aesl_llvm_cbe_1283_count = 0;
  static  unsigned long long aesl_llvm_cbe_1284_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond22_count = 0;
  static  unsigned long long aesl_llvm_cbe_1285_count = 0;
  static  unsigned long long aesl_llvm_cbe_1286_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_1287_count = 0;
  static  unsigned long long aesl_llvm_cbe_1288_count = 0;
  static  unsigned long long aesl_llvm_cbe_1289_count = 0;
  static  unsigned long long aesl_llvm_cbe_1290_count = 0;
  static  unsigned long long aesl_llvm_cbe_1291_count = 0;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;
  static  unsigned long long aesl_llvm_cbe_1293_count = 0;
  unsigned int llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_1294_count = 0;
  unsigned long long llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_1295_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge314_count = 0;
  unsigned int llvm_cbe_storemerge314;
  unsigned int llvm_cbe_storemerge314__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1296_count = 0;
  unsigned long long llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_1297_count = 0;
  float *llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_1298_count = 0;
  float llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_1299_count = 0;
  static  unsigned long long aesl_llvm_cbe_1300_count = 0;
  static  unsigned long long aesl_llvm_cbe_1301_count = 0;
  static  unsigned long long aesl_llvm_cbe_1302_count = 0;
  static  unsigned long long aesl_llvm_cbe_1303_count = 0;
  static  unsigned long long aesl_llvm_cbe_1304_count = 0;
  static  unsigned long long aesl_llvm_cbe_1305_count = 0;
  static  unsigned long long aesl_llvm_cbe_1306_count = 0;
  static  unsigned long long aesl_llvm_cbe_1307_count = 0;
  static  unsigned long long aesl_llvm_cbe_1308_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge412_count = 0;
  unsigned int llvm_cbe_storemerge412;
  unsigned int llvm_cbe_storemerge412__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1309_count = 0;
  float llvm_cbe_tmp__302;
  float llvm_cbe_tmp__302__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1310_count = 0;
  static  unsigned long long aesl_llvm_cbe_1311_count = 0;
  static  unsigned long long aesl_llvm_cbe_1312_count = 0;
  static  unsigned long long aesl_llvm_cbe_1313_count = 0;
  static  unsigned long long aesl_llvm_cbe_1314_count = 0;
  unsigned long long llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_1315_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge510_count = 0;
  unsigned int llvm_cbe_storemerge510;
  unsigned int llvm_cbe_storemerge510__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1316_count = 0;
  float llvm_cbe_tmp__304;
  float llvm_cbe_tmp__304__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1317_count = 0;
  static  unsigned long long aesl_llvm_cbe_1318_count = 0;
  static  unsigned long long aesl_llvm_cbe_1319_count = 0;
  static  unsigned long long aesl_llvm_cbe_1320_count = 0;
  static  unsigned long long aesl_llvm_cbe_1321_count = 0;
  static  unsigned long long aesl_llvm_cbe_1322_count = 0;
  static  unsigned long long aesl_llvm_cbe_1323_count = 0;
  static  unsigned long long aesl_llvm_cbe_1324_count = 0;
  static  unsigned long long aesl_llvm_cbe_1325_count = 0;
  static  unsigned long long aesl_llvm_cbe_1326_count = 0;
  static  unsigned long long aesl_llvm_cbe_1327_count = 0;
  static  unsigned long long aesl_llvm_cbe_1328_count = 0;
  static  unsigned long long aesl_llvm_cbe_1329_count = 0;
  static  unsigned long long aesl_llvm_cbe_1330_count = 0;
  static  unsigned long long aesl_llvm_cbe_1331_count = 0;
  static  unsigned long long aesl_llvm_cbe_1332_count = 0;
  static  unsigned long long aesl_llvm_cbe_1333_count = 0;
  static  unsigned long long aesl_llvm_cbe_1334_count = 0;
  static  unsigned long long aesl_llvm_cbe_1335_count = 0;
  static  unsigned long long aesl_llvm_cbe_1336_count = 0;
  static  unsigned long long aesl_llvm_cbe_1337_count = 0;
  static  unsigned long long aesl_llvm_cbe_1338_count = 0;
  static  unsigned long long aesl_llvm_cbe_1339_count = 0;
  static  unsigned long long aesl_llvm_cbe_1340_count = 0;
  static  unsigned long long aesl_llvm_cbe_1341_count = 0;
  static  unsigned long long aesl_llvm_cbe_1342_count = 0;
  static  unsigned long long aesl_llvm_cbe_1343_count = 0;
  unsigned long long llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_1344_count = 0;
  float *llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_1345_count = 0;
  float llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_1346_count = 0;
  float *llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_1347_count = 0;
  float llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_1348_count = 0;
  float llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_1349_count = 0;
  float llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_1350_count = 0;
  static  unsigned long long aesl_llvm_cbe_1351_count = 0;
  static  unsigned long long aesl_llvm_cbe_1352_count = 0;
  static  unsigned long long aesl_llvm_cbe_1353_count = 0;
  static  unsigned long long aesl_llvm_cbe_1354_count = 0;
  static  unsigned long long aesl_llvm_cbe_1355_count = 0;
  static  unsigned long long aesl_llvm_cbe_1356_count = 0;
  static  unsigned long long aesl_llvm_cbe_1357_count = 0;
  static  unsigned long long aesl_llvm_cbe_1358_count = 0;
  static  unsigned long long aesl_llvm_cbe_1359_count = 0;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
  static  unsigned long long aesl_llvm_cbe_1364_count = 0;
  static  unsigned long long aesl_llvm_cbe_1365_count = 0;
  static  unsigned long long aesl_llvm_cbe_1366_count = 0;
  static  unsigned long long aesl_llvm_cbe_1367_count = 0;
  static  unsigned long long aesl_llvm_cbe_1368_count = 0;
  static  unsigned long long aesl_llvm_cbe_1369_count = 0;
  static  unsigned long long aesl_llvm_cbe_1370_count = 0;
  static  unsigned long long aesl_llvm_cbe_1371_count = 0;
  static  unsigned long long aesl_llvm_cbe_1372_count = 0;
  static  unsigned long long aesl_llvm_cbe_1373_count = 0;
  static  unsigned long long aesl_llvm_cbe_1374_count = 0;
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  float *llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  float llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
  float *llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  float llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  float llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
  float llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_1387_count = 0;
  static  unsigned long long aesl_llvm_cbe_1388_count = 0;
  static  unsigned long long aesl_llvm_cbe_1389_count = 0;
  static  unsigned long long aesl_llvm_cbe_1390_count = 0;
  static  unsigned long long aesl_llvm_cbe_1391_count = 0;
  static  unsigned long long aesl_llvm_cbe_1392_count = 0;
  static  unsigned long long aesl_llvm_cbe_1393_count = 0;
  static  unsigned long long aesl_llvm_cbe_1394_count = 0;
  static  unsigned long long aesl_llvm_cbe_1395_count = 0;
  static  unsigned long long aesl_llvm_cbe_1396_count = 0;
  static  unsigned long long aesl_llvm_cbe_1397_count = 0;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;
  static  unsigned long long aesl_llvm_cbe_1416_count = 0;
  static  unsigned long long aesl_llvm_cbe_1417_count = 0;
  static  unsigned long long aesl_llvm_cbe_1418_count = 0;
  float *llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_1419_count = 0;
  float llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_1420_count = 0;
  float *llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_1421_count = 0;
  float llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_1422_count = 0;
  float llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_1423_count = 0;
  float llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_1424_count = 0;
  static  unsigned long long aesl_llvm_cbe_1425_count = 0;
  static  unsigned long long aesl_llvm_cbe_1426_count = 0;
  static  unsigned long long aesl_llvm_cbe_1427_count = 0;
  static  unsigned long long aesl_llvm_cbe_1428_count = 0;
  static  unsigned long long aesl_llvm_cbe_1429_count = 0;
  static  unsigned long long aesl_llvm_cbe_1430_count = 0;
  static  unsigned long long aesl_llvm_cbe_1431_count = 0;
  static  unsigned long long aesl_llvm_cbe_1432_count = 0;
  static  unsigned long long aesl_llvm_cbe_1433_count = 0;
  static  unsigned long long aesl_llvm_cbe_1434_count = 0;
  static  unsigned long long aesl_llvm_cbe_1435_count = 0;
  static  unsigned long long aesl_llvm_cbe_1436_count = 0;
  static  unsigned long long aesl_llvm_cbe_1437_count = 0;
  static  unsigned long long aesl_llvm_cbe_1438_count = 0;
  static  unsigned long long aesl_llvm_cbe_1439_count = 0;
  static  unsigned long long aesl_llvm_cbe_1440_count = 0;
  static  unsigned long long aesl_llvm_cbe_1441_count = 0;
  static  unsigned long long aesl_llvm_cbe_1442_count = 0;
  static  unsigned long long aesl_llvm_cbe_1443_count = 0;
  static  unsigned long long aesl_llvm_cbe_1444_count = 0;
  static  unsigned long long aesl_llvm_cbe_1445_count = 0;
  static  unsigned long long aesl_llvm_cbe_1446_count = 0;
  static  unsigned long long aesl_llvm_cbe_1447_count = 0;
  static  unsigned long long aesl_llvm_cbe_1448_count = 0;
  static  unsigned long long aesl_llvm_cbe_1449_count = 0;
  static  unsigned long long aesl_llvm_cbe_1450_count = 0;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  float *llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  float llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_1457_count = 0;
  float *llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_1458_count = 0;
  float llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_1459_count = 0;
  float llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_1460_count = 0;
  float llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_1461_count = 0;
  static  unsigned long long aesl_llvm_cbe_1462_count = 0;
  static  unsigned long long aesl_llvm_cbe_1463_count = 0;
  static  unsigned long long aesl_llvm_cbe_1464_count = 0;
  static  unsigned long long aesl_llvm_cbe_1465_count = 0;
  static  unsigned long long aesl_llvm_cbe_1466_count = 0;
  static  unsigned long long aesl_llvm_cbe_1467_count = 0;
  static  unsigned long long aesl_llvm_cbe_1468_count = 0;
  static  unsigned long long aesl_llvm_cbe_1469_count = 0;
  static  unsigned long long aesl_llvm_cbe_1470_count = 0;
  static  unsigned long long aesl_llvm_cbe_1471_count = 0;
  static  unsigned long long aesl_llvm_cbe_1472_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  float *llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  float llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  float *llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  float llvm_cbe_tmp__333;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  float llvm_cbe_tmp__334;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  float llvm_cbe_tmp__335;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
  static  unsigned long long aesl_llvm_cbe_1499_count = 0;
  static  unsigned long long aesl_llvm_cbe_1500_count = 0;
  static  unsigned long long aesl_llvm_cbe_1501_count = 0;
  static  unsigned long long aesl_llvm_cbe_1502_count = 0;
  static  unsigned long long aesl_llvm_cbe_1503_count = 0;
  static  unsigned long long aesl_llvm_cbe_1504_count = 0;
  static  unsigned long long aesl_llvm_cbe_1505_count = 0;
  static  unsigned long long aesl_llvm_cbe_1506_count = 0;
  static  unsigned long long aesl_llvm_cbe_1507_count = 0;
  static  unsigned long long aesl_llvm_cbe_1508_count = 0;
  static  unsigned long long aesl_llvm_cbe_1509_count = 0;
  static  unsigned long long aesl_llvm_cbe_1510_count = 0;
  static  unsigned long long aesl_llvm_cbe_1511_count = 0;
  static  unsigned long long aesl_llvm_cbe_1512_count = 0;
  static  unsigned long long aesl_llvm_cbe_1513_count = 0;
  static  unsigned long long aesl_llvm_cbe_1514_count = 0;
  static  unsigned long long aesl_llvm_cbe_1515_count = 0;
  static  unsigned long long aesl_llvm_cbe_1516_count = 0;
  static  unsigned long long aesl_llvm_cbe_1517_count = 0;
  static  unsigned long long aesl_llvm_cbe_1518_count = 0;
  static  unsigned long long aesl_llvm_cbe_1519_count = 0;
  static  unsigned long long aesl_llvm_cbe_1520_count = 0;
  static  unsigned long long aesl_llvm_cbe_1521_count = 0;
  static  unsigned long long aesl_llvm_cbe_1522_count = 0;
  static  unsigned long long aesl_llvm_cbe_1523_count = 0;
  static  unsigned long long aesl_llvm_cbe_1524_count = 0;
  static  unsigned long long aesl_llvm_cbe_1525_count = 0;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;
  static  unsigned long long aesl_llvm_cbe_1528_count = 0;
  static  unsigned long long aesl_llvm_cbe_1529_count = 0;
  float *llvm_cbe_tmp__336;
  static  unsigned long long aesl_llvm_cbe_1530_count = 0;
  float llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_1531_count = 0;
  float *llvm_cbe_tmp__338;
  static  unsigned long long aesl_llvm_cbe_1532_count = 0;
  float llvm_cbe_tmp__339;
  static  unsigned long long aesl_llvm_cbe_1533_count = 0;
  float llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_1534_count = 0;
  float llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_1535_count = 0;
  static  unsigned long long aesl_llvm_cbe_1536_count = 0;
  static  unsigned long long aesl_llvm_cbe_1537_count = 0;
  static  unsigned long long aesl_llvm_cbe_1538_count = 0;
  static  unsigned long long aesl_llvm_cbe_1539_count = 0;
  static  unsigned long long aesl_llvm_cbe_1540_count = 0;
  static  unsigned long long aesl_llvm_cbe_1541_count = 0;
  static  unsigned long long aesl_llvm_cbe_1542_count = 0;
  static  unsigned long long aesl_llvm_cbe_1543_count = 0;
  static  unsigned long long aesl_llvm_cbe_1544_count = 0;
  static  unsigned long long aesl_llvm_cbe_1545_count = 0;
  static  unsigned long long aesl_llvm_cbe_1546_count = 0;
  static  unsigned long long aesl_llvm_cbe_1547_count = 0;
  static  unsigned long long aesl_llvm_cbe_1548_count = 0;
  static  unsigned long long aesl_llvm_cbe_1549_count = 0;
  static  unsigned long long aesl_llvm_cbe_1550_count = 0;
  static  unsigned long long aesl_llvm_cbe_1551_count = 0;
  static  unsigned long long aesl_llvm_cbe_1552_count = 0;
  static  unsigned long long aesl_llvm_cbe_1553_count = 0;
  static  unsigned long long aesl_llvm_cbe_1554_count = 0;
  static  unsigned long long aesl_llvm_cbe_1555_count = 0;
  static  unsigned long long aesl_llvm_cbe_1556_count = 0;
  static  unsigned long long aesl_llvm_cbe_1557_count = 0;
  static  unsigned long long aesl_llvm_cbe_1558_count = 0;
  static  unsigned long long aesl_llvm_cbe_1559_count = 0;
  static  unsigned long long aesl_llvm_cbe_1560_count = 0;
  static  unsigned long long aesl_llvm_cbe_1561_count = 0;
  static  unsigned long long aesl_llvm_cbe_1562_count = 0;
  static  unsigned long long aesl_llvm_cbe_1563_count = 0;
  static  unsigned long long aesl_llvm_cbe_1564_count = 0;
  static  unsigned long long aesl_llvm_cbe_1565_count = 0;
  static  unsigned long long aesl_llvm_cbe_1566_count = 0;
  float *llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_1567_count = 0;
  float llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_1568_count = 0;
  float *llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_1569_count = 0;
  float llvm_cbe_tmp__345;
  static  unsigned long long aesl_llvm_cbe_1570_count = 0;
  float llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe_1571_count = 0;
  float llvm_cbe_tmp__347;
  static  unsigned long long aesl_llvm_cbe_1572_count = 0;
  static  unsigned long long aesl_llvm_cbe_1573_count = 0;
  static  unsigned long long aesl_llvm_cbe_1574_count = 0;
  static  unsigned long long aesl_llvm_cbe_1575_count = 0;
  static  unsigned long long aesl_llvm_cbe_1576_count = 0;
  static  unsigned long long aesl_llvm_cbe_1577_count = 0;
  static  unsigned long long aesl_llvm_cbe_1578_count = 0;
  static  unsigned long long aesl_llvm_cbe_1579_count = 0;
  static  unsigned long long aesl_llvm_cbe_1580_count = 0;
  static  unsigned long long aesl_llvm_cbe_1581_count = 0;
  static  unsigned long long aesl_llvm_cbe_1582_count = 0;
  static  unsigned long long aesl_llvm_cbe_1583_count = 0;
  static  unsigned long long aesl_llvm_cbe_1584_count = 0;
  static  unsigned long long aesl_llvm_cbe_1585_count = 0;
  static  unsigned long long aesl_llvm_cbe_1586_count = 0;
  static  unsigned long long aesl_llvm_cbe_1587_count = 0;
  static  unsigned long long aesl_llvm_cbe_1588_count = 0;
  static  unsigned long long aesl_llvm_cbe_1589_count = 0;
  static  unsigned long long aesl_llvm_cbe_1590_count = 0;
  static  unsigned long long aesl_llvm_cbe_1591_count = 0;
  static  unsigned long long aesl_llvm_cbe_1592_count = 0;
  static  unsigned long long aesl_llvm_cbe_1593_count = 0;
  static  unsigned long long aesl_llvm_cbe_1594_count = 0;
  static  unsigned long long aesl_llvm_cbe_1595_count = 0;
  static  unsigned long long aesl_llvm_cbe_1596_count = 0;
  static  unsigned long long aesl_llvm_cbe_1597_count = 0;
  static  unsigned long long aesl_llvm_cbe_1598_count = 0;
  static  unsigned long long aesl_llvm_cbe_1599_count = 0;
  static  unsigned long long aesl_llvm_cbe_1600_count = 0;
  static  unsigned long long aesl_llvm_cbe_1601_count = 0;
  static  unsigned long long aesl_llvm_cbe_1602_count = 0;
  static  unsigned long long aesl_llvm_cbe_1603_count = 0;
  float *llvm_cbe_tmp__348;
  static  unsigned long long aesl_llvm_cbe_1604_count = 0;
  float llvm_cbe_tmp__349;
  static  unsigned long long aesl_llvm_cbe_1605_count = 0;
  float *llvm_cbe_tmp__350;
  static  unsigned long long aesl_llvm_cbe_1606_count = 0;
  float llvm_cbe_tmp__351;
  static  unsigned long long aesl_llvm_cbe_1607_count = 0;
  float llvm_cbe_tmp__352;
  static  unsigned long long aesl_llvm_cbe_1608_count = 0;
  float llvm_cbe_tmp__353;
  static  unsigned long long aesl_llvm_cbe_1609_count = 0;
  static  unsigned long long aesl_llvm_cbe_1610_count = 0;
  static  unsigned long long aesl_llvm_cbe_1611_count = 0;
  static  unsigned long long aesl_llvm_cbe_1612_count = 0;
  static  unsigned long long aesl_llvm_cbe_1613_count = 0;
  static  unsigned long long aesl_llvm_cbe_1614_count = 0;
  static  unsigned long long aesl_llvm_cbe_1615_count = 0;
  static  unsigned long long aesl_llvm_cbe_1616_count = 0;
  static  unsigned long long aesl_llvm_cbe_1617_count = 0;
  static  unsigned long long aesl_llvm_cbe_1618_count = 0;
  static  unsigned long long aesl_llvm_cbe_1619_count = 0;
  static  unsigned long long aesl_llvm_cbe_1620_count = 0;
  static  unsigned long long aesl_llvm_cbe_1621_count = 0;
  static  unsigned long long aesl_llvm_cbe_1622_count = 0;
  static  unsigned long long aesl_llvm_cbe_1623_count = 0;
  static  unsigned long long aesl_llvm_cbe_1624_count = 0;
  static  unsigned long long aesl_llvm_cbe_1625_count = 0;
  static  unsigned long long aesl_llvm_cbe_1626_count = 0;
  static  unsigned long long aesl_llvm_cbe_1627_count = 0;
  static  unsigned long long aesl_llvm_cbe_1628_count = 0;
  static  unsigned long long aesl_llvm_cbe_1629_count = 0;
  static  unsigned long long aesl_llvm_cbe_1630_count = 0;
  static  unsigned long long aesl_llvm_cbe_1631_count = 0;
  static  unsigned long long aesl_llvm_cbe_1632_count = 0;
  static  unsigned long long aesl_llvm_cbe_1633_count = 0;
  static  unsigned long long aesl_llvm_cbe_1634_count = 0;
  static  unsigned long long aesl_llvm_cbe_1635_count = 0;
  static  unsigned long long aesl_llvm_cbe_1636_count = 0;
  static  unsigned long long aesl_llvm_cbe_1637_count = 0;
  static  unsigned long long aesl_llvm_cbe_1638_count = 0;
  static  unsigned long long aesl_llvm_cbe_1639_count = 0;
  static  unsigned long long aesl_llvm_cbe_1640_count = 0;
  unsigned int llvm_cbe_tmp__354;
  static  unsigned long long aesl_llvm_cbe_1641_count = 0;
  static  unsigned long long aesl_llvm_cbe_1642_count = 0;
  static  unsigned long long aesl_llvm_cbe_1643_count = 0;
  static  unsigned long long aesl_llvm_cbe_1644_count = 0;
  static  unsigned long long aesl_llvm_cbe_1645_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1646_count = 0;
  static  unsigned long long aesl_llvm_cbe_1647_count = 0;
  unsigned int llvm_cbe_tmp__355;
  static  unsigned long long aesl_llvm_cbe_1648_count = 0;
  static  unsigned long long aesl_llvm_cbe_1649_count = 0;
  static  unsigned long long aesl_llvm_cbe_1650_count = 0;
  static  unsigned long long aesl_llvm_cbe_1651_count = 0;
  static  unsigned long long aesl_llvm_cbe_1652_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond20_count = 0;
  static  unsigned long long aesl_llvm_cbe_1653_count = 0;
  static  unsigned long long aesl_llvm_cbe_1654_count = 0;
  static  unsigned long long aesl_llvm_cbe_1655_count = 0;
  static  unsigned long long aesl_llvm_cbe_1656_count = 0;
  static  unsigned long long aesl_llvm_cbe_1657_count = 0;
  static  unsigned long long aesl_llvm_cbe_1658_count = 0;
  static  unsigned long long aesl_llvm_cbe_1659_count = 0;
  float llvm_cbe_tmp__356;
  static  unsigned long long aesl_llvm_cbe_1660_count = 0;
  float *llvm_cbe_tmp__357;
  static  unsigned long long aesl_llvm_cbe_1661_count = 0;
  static  unsigned long long aesl_llvm_cbe_1662_count = 0;
  unsigned int llvm_cbe_tmp__358;
  static  unsigned long long aesl_llvm_cbe_1663_count = 0;
  static  unsigned long long aesl_llvm_cbe_1664_count = 0;
  static  unsigned long long aesl_llvm_cbe_1665_count = 0;
  static  unsigned long long aesl_llvm_cbe_1666_count = 0;
  static  unsigned long long aesl_llvm_cbe_1667_count = 0;
  static  unsigned long long aesl_llvm_cbe_1668_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond21_count = 0;
  static  unsigned long long aesl_llvm_cbe_1669_count = 0;
  static  unsigned long long aesl_llvm_cbe_1670_count = 0;
  unsigned int llvm_cbe_tmp__359;
  static  unsigned long long aesl_llvm_cbe_1671_count = 0;
  static  unsigned long long aesl_llvm_cbe_1672_count = 0;
  static  unsigned long long aesl_llvm_cbe_1673_count = 0;
  static  unsigned long long aesl_llvm_cbe_1674_count = 0;
  static  unsigned long long aesl_llvm_cbe_1675_count = 0;
  static  unsigned long long aesl_llvm_cbe_1676_count = 0;
  static  unsigned long long aesl_llvm_cbe_1677_count = 0;
  static  unsigned long long aesl_llvm_cbe_1678_count = 0;
  static  unsigned long long aesl_llvm_cbe_1679_count = 0;
  static  unsigned long long aesl_llvm_cbe_1680_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond23_count = 0;
  static  unsigned long long aesl_llvm_cbe_1681_count = 0;
  static  unsigned long long aesl_llvm_cbe_1682_count = 0;
  unsigned int llvm_cbe_tmp__360;
  static  unsigned long long aesl_llvm_cbe_1683_count = 0;
  static  unsigned long long aesl_llvm_cbe_1684_count = 0;
  static  unsigned long long aesl_llvm_cbe_1685_count = 0;
  static  unsigned long long aesl_llvm_cbe_1686_count = 0;
  static  unsigned long long aesl_llvm_cbe_1687_count = 0;
  static  unsigned long long aesl_llvm_cbe_1688_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond24_count = 0;
  static  unsigned long long aesl_llvm_cbe_1689_count = 0;
  static  unsigned long long aesl_llvm_cbe_1690_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv2\n");
  llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader17;

  do {     /* Syntactic loop '.preheader17' to make GCC happy */
llvm_cbe__2e_preheader17:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i32 [ 0, %%0 ], [ %%100, %%99  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned int )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%X",llvm_cbe_storemerge19);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__360);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge19 to i64, !dbg !19 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1183_count);
  llvm_cbe_tmp__270 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__270);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add nsw i32 %%storemerge19, -2, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1185_count);
  llvm_cbe_tmp__271 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__271&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1186_count);
  llvm_cbe_tmp__272 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__271);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__272);
  llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader15;

llvm_cbe_tmp__361:
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = add nsw i32 %%storemerge19, 1, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1682_count);
  llvm_cbe_tmp__360 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__360&4294967295ull)));
  if (((llvm_cbe_tmp__360&4294967295U) == (31u&4294967295U))) {
    goto llvm_cbe_tmp__362;
  } else {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__360;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  }

  do {     /* Syntactic loop '.preheader15' to make GCC happy */
llvm_cbe__2e_preheader15:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge118 = phi i32 [ 0, %%.preheader17 ], [ %%98, %%.loopexit  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge118_count);
  llvm_cbe_storemerge118 = (unsigned int )llvm_cbe_storemerge118__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge118 = 0x%X",llvm_cbe_storemerge118);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__359);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge118 to i64, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1214_count);
  llvm_cbe_tmp__273 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge118);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__273);
  llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__363;

llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = add nsw i32 %%storemerge118, 1, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1670_count);
  llvm_cbe_tmp__359 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__359&4294967295ull)));
  if (((llvm_cbe_tmp__359&4294967295U) == (31u&4294967295U))) {
    goto llvm_cbe_tmp__361;
  } else {
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__359;   /* for PHI node */
    goto llvm_cbe__2e_preheader15;
  }

llvm_cbe_tmp__364:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = and i1 %%2, %%31, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((signed int )llvm_cbe_storemerge19) > ((signed int )1u)) & (((signed int )llvm_cbe_storemerge118) > ((signed int )1u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe__2e_preheader13;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__363:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge216 = phi i32 [ 0, %%.preheader15 ], [ %%29, %%6  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge216_count);
  llvm_cbe_storemerge216 = (unsigned int )llvm_cbe_storemerge216__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge216 = 0x%X",llvm_cbe_storemerge216);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__296);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%storemerge216 to i64, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1216_count);
  llvm_cbe_tmp__274 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge216);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__274);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1217_count);
  llvm_cbe_tmp__275 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__274) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load float* %%8, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1218_count);
  llvm_cbe_tmp__276 = (float )*llvm_cbe_tmp__275;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__276, *(int*)(&llvm_cbe_tmp__276));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1219_count);
  llvm_cbe_tmp__277 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%9, float* %%10, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1220_count);
  *llvm_cbe_tmp__277 = llvm_cbe_tmp__276;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__276);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1221_count);
  llvm_cbe_tmp__278 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__274) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1222_count);
  llvm_cbe_tmp__279 = (float )*llvm_cbe_tmp__278;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__279, *(int*)(&llvm_cbe_tmp__279));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%12, float* %%8, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1223_count);
  *llvm_cbe_tmp__275 = llvm_cbe_tmp__279;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__279);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1224_count);
  llvm_cbe_tmp__280 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__274) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1225_count);
  llvm_cbe_tmp__281 = (float )*llvm_cbe_tmp__280;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__281, *(int*)(&llvm_cbe_tmp__281));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1226_count);
  llvm_cbe_tmp__282 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%14, float* %%15, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1227_count);
  *llvm_cbe_tmp__282 = llvm_cbe_tmp__281;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__281);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1228_count);
  llvm_cbe_tmp__283 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__274) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load float* %%16, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1229_count);
  llvm_cbe_tmp__284 = (float )*llvm_cbe_tmp__283;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__284, *(int*)(&llvm_cbe_tmp__284));

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%17, float* %%13, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1230_count);
  *llvm_cbe_tmp__280 = llvm_cbe_tmp__284;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__284);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1231_count);
  llvm_cbe_tmp__285 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__274) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load float* %%18, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1232_count);
  llvm_cbe_tmp__286 = (float )*llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__286, *(int*)(&llvm_cbe_tmp__286));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1233_count);
  llvm_cbe_tmp__287 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%19, float* %%20, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1234_count);
  *llvm_cbe_tmp__287 = llvm_cbe_tmp__286;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__286);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1235_count);
  llvm_cbe_tmp__288 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__274) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1236_count);
  llvm_cbe_tmp__289 = (float )*llvm_cbe_tmp__288;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__289, *(int*)(&llvm_cbe_tmp__289));

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%22, float* %%18, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1237_count);
  *llvm_cbe_tmp__285 = llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__289);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [2 x [31 x [8 x float]]]* @aesl_internal_conv2.line_buf, i64 0, i64 0, i64 %%5, i64 %%7, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1238_count);
  llvm_cbe_tmp__290 = (float *)(&aesl_internal_conv2_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__273))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__273));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv2.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__273) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv2.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__274) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv2.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* %%23, align 4, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1239_count);
  llvm_cbe_tmp__291 = (float )*llvm_cbe_tmp__290;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__291, *(int*)(&llvm_cbe_tmp__291));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [2 x [31 x [8 x float]]]* @aesl_internal_conv2.line_buf, i64 0, i64 1, i64 %%5, i64 %%7, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1242_count);
  llvm_cbe_tmp__292 = (float *)(&aesl_internal_conv2_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__273))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__274))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__273));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv2.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__273) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv2.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__274) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv2.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load float* %%25, align 4, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1243_count);
  llvm_cbe_tmp__293 = (float )*llvm_cbe_tmp__292;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__293, *(int*)(&llvm_cbe_tmp__293));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%1, i64 %%5, i64 %%7, !dbg !19 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1247_count);
  llvm_cbe_tmp__294 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__270))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__273))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__274))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__270));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__273));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__274));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__273) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__274) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !19 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1248_count);
  llvm_cbe_tmp__295 = (float )*llvm_cbe_tmp__294;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__295, *(int*)(&llvm_cbe_tmp__295));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv2.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__273) < 31 && "Write access out of array 'aesl_internal_conv2.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'aesl_internal_conv2.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%23, align 4, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1252_count);
  *llvm_cbe_tmp__290 = llvm_cbe_tmp__293;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__293);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv2.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__273) < 31 && "Write access out of array 'aesl_internal_conv2.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'aesl_internal_conv2.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%25, align 4, !dbg !23 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1253_count);
  *llvm_cbe_tmp__292 = llvm_cbe_tmp__295;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__295);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* %%11, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1254_count);
  *llvm_cbe_tmp__278 = llvm_cbe_tmp__291;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__291);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%16, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1255_count);
  *llvm_cbe_tmp__283 = llvm_cbe_tmp__293;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__293);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__274) < 8 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%21, align 4, !dbg !24 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1256_count);
  *llvm_cbe_tmp__288 = llvm_cbe_tmp__295;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add nsw i32 %%storemerge216, 1, !dbg !25 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1257_count);
  llvm_cbe_tmp__296 = (unsigned int )((unsigned int )(llvm_cbe_storemerge216&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__296&4294967295ull)));
  if (((llvm_cbe_tmp__296&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__364;
  } else {
    llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__296;   /* for PHI node */
    goto llvm_cbe_tmp__363;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__365:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge314 = phi i32 [ 0, %%.preheader13 ], [ %%97, %%93  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge314_count);
  llvm_cbe_storemerge314 = (unsigned int )llvm_cbe_storemerge314__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge314 = 0x%X",llvm_cbe_storemerge314);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__358);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = sext i32 %%storemerge314 to i64, !dbg !22 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1296_count);
  llvm_cbe_tmp__299 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge314);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__299);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds float* %%bias, i64 %%35, !dbg !22 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1297_count);
  llvm_cbe_tmp__300 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__299))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load float* %%36, align 4, !dbg !22 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1298_count);
  llvm_cbe_tmp__301 = (float )*llvm_cbe_tmp__300;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__301, *(int*)(&llvm_cbe_tmp__301));
  llvm_cbe_storemerge412__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__302__PHI_TEMPORARY = (float )llvm_cbe_tmp__301;   /* for PHI node */
  goto llvm_cbe__2e_preheader8;

llvm_cbe_tmp__366:
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = select i1 %%94, float 0.000000e+00, float %%89, !dbg !26 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1659_count);
  llvm_cbe_tmp__356 = (float )(((llvm_fcmp_olt(llvm_cbe_tmp__353, 0x0p0))) ? ((float )0x0p0) : ((float )llvm_cbe_tmp__353));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__356, *(int*)(&llvm_cbe_tmp__356));
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = getelementptr inbounds [29 x [16 x float]]* %%out, i64 %%4, i64 %%33, i64 %%35, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1660_count);
  llvm_cbe_tmp__357 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__272))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__298))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__299))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__272));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__298));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__298) < 29 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__299) < 16 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%95, float* %%96, align 4, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1661_count);
  *llvm_cbe_tmp__357 = llvm_cbe_tmp__356;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__356);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = add nsw i32 %%storemerge314, 1, !dbg !25 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1662_count);
  llvm_cbe_tmp__358 = (unsigned int )((unsigned int )(llvm_cbe_storemerge314&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__358&4294967295ull)));
  if (((llvm_cbe_tmp__358&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__358;   /* for PHI node */
    goto llvm_cbe_tmp__365;
  }

  do {     /* Syntactic loop '.preheader8' to make GCC happy */
llvm_cbe__2e_preheader8:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge412 = phi i32 [ 0, %%34 ], [ %%92, %%91  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge412_count);
  llvm_cbe_storemerge412 = (unsigned int )llvm_cbe_storemerge412__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge412 = 0x%X",llvm_cbe_storemerge412);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__355);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = phi float [ %%37, %%34 ], [ %%89, %%91  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1309_count);
  llvm_cbe_tmp__302 = (float )llvm_cbe_tmp__302__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__302);
printf("\n = %f",llvm_cbe_tmp__301);
printf("\n = %f",llvm_cbe_tmp__353);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = sext i32 %%storemerge412 to i64, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1314_count);
  llvm_cbe_tmp__303 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge412);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__303);
  llvm_cbe_storemerge510__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__304__PHI_TEMPORARY = (float )llvm_cbe_tmp__302;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

llvm_cbe_tmp__367:
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = add nsw i32 %%storemerge412, 1, !dbg !26 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1647_count);
  llvm_cbe_tmp__355 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__355&4294967295ull)));
  if (((llvm_cbe_tmp__355&4294967295U) == (3u&4294967295U))) {
    goto llvm_cbe_tmp__366;
  } else {
    llvm_cbe_storemerge412__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__355;   /* for PHI node */
    llvm_cbe_tmp__302__PHI_TEMPORARY = (float )llvm_cbe_tmp__353;   /* for PHI node */
    goto llvm_cbe__2e_preheader8;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge510 = phi i32 [ 0, %%.preheader8 ], [ %%90, %%.preheader  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge510_count);
  llvm_cbe_storemerge510 = (unsigned int )llvm_cbe_storemerge510__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge510 = 0x%X",llvm_cbe_storemerge510);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__354);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = phi float [ %%38, %%.preheader8 ], [ %%89, %%.preheader  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1316_count);
  llvm_cbe_tmp__304 = (float )llvm_cbe_tmp__304__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__304);
printf("\n = %f",llvm_cbe_tmp__302);
printf("\n = %f",llvm_cbe_tmp__353);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = sext i32 %%storemerge510 to i64, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1343_count);
  llvm_cbe_tmp__305 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge510);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__305);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 %%39, i64 %%41, i64 0, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1344_count);
  llvm_cbe_tmp__306 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* %%42, align 16, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1345_count);
  llvm_cbe_tmp__307 = (float )*llvm_cbe_tmp__306;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__307, *(int*)(&llvm_cbe_tmp__307));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%35, i64 0, i64 %%39, i64 %%41, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1346_count);
  llvm_cbe_tmp__308 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = load float* %%44, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1347_count);
  llvm_cbe_tmp__309 = (float )*llvm_cbe_tmp__308;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__309, *(int*)(&llvm_cbe_tmp__309));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = fmul float %%43, %%45, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1348_count);
  llvm_cbe_tmp__310 = (float )((float )(llvm_cbe_tmp__307 * llvm_cbe_tmp__309));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__310, *(int*)(&llvm_cbe_tmp__310));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = fadd float %%40, %%46, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1349_count);
  llvm_cbe_tmp__311 = (float )((float )(llvm_cbe_tmp__304 + llvm_cbe_tmp__310));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__311, *(int*)(&llvm_cbe_tmp__311));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 %%39, i64 %%41, i64 1, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1381_count);
  llvm_cbe_tmp__312 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load float* %%48, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1382_count);
  llvm_cbe_tmp__313 = (float )*llvm_cbe_tmp__312;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__313, *(int*)(&llvm_cbe_tmp__313));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%35, i64 1, i64 %%39, i64 %%41, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1383_count);
  llvm_cbe_tmp__314 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load float* %%50, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1384_count);
  llvm_cbe_tmp__315 = (float )*llvm_cbe_tmp__314;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__315, *(int*)(&llvm_cbe_tmp__315));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = fmul float %%49, %%51, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1385_count);
  llvm_cbe_tmp__316 = (float )((float )(llvm_cbe_tmp__313 * llvm_cbe_tmp__315));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__316, *(int*)(&llvm_cbe_tmp__316));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = fadd float %%47, %%52, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1386_count);
  llvm_cbe_tmp__317 = (float )((float )(llvm_cbe_tmp__311 + llvm_cbe_tmp__316));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__317, *(int*)(&llvm_cbe_tmp__317));
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 %%39, i64 %%41, i64 2, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1418_count);
  llvm_cbe_tmp__318 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load float* %%54, align 8, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1419_count);
  llvm_cbe_tmp__319 = (float )*llvm_cbe_tmp__318;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__319, *(int*)(&llvm_cbe_tmp__319));
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%35, i64 2, i64 %%39, i64 %%41, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1420_count);
  llvm_cbe_tmp__320 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = load float* %%56, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1421_count);
  llvm_cbe_tmp__321 = (float )*llvm_cbe_tmp__320;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__321, *(int*)(&llvm_cbe_tmp__321));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = fmul float %%55, %%57, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1422_count);
  llvm_cbe_tmp__322 = (float )((float )(llvm_cbe_tmp__319 * llvm_cbe_tmp__321));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__322, *(int*)(&llvm_cbe_tmp__322));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = fadd float %%53, %%58, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1423_count);
  llvm_cbe_tmp__323 = (float )((float )(llvm_cbe_tmp__317 + llvm_cbe_tmp__322));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__323, *(int*)(&llvm_cbe_tmp__323));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 %%39, i64 %%41, i64 3, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1455_count);
  llvm_cbe_tmp__324 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = load float* %%60, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1456_count);
  llvm_cbe_tmp__325 = (float )*llvm_cbe_tmp__324;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__325, *(int*)(&llvm_cbe_tmp__325));
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%35, i64 3, i64 %%39, i64 %%41, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1457_count);
  llvm_cbe_tmp__326 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load float* %%62, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1458_count);
  llvm_cbe_tmp__327 = (float )*llvm_cbe_tmp__326;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__327, *(int*)(&llvm_cbe_tmp__327));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = fmul float %%61, %%63, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1459_count);
  llvm_cbe_tmp__328 = (float )((float )(llvm_cbe_tmp__325 * llvm_cbe_tmp__327));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__328, *(int*)(&llvm_cbe_tmp__328));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = fadd float %%59, %%64, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1460_count);
  llvm_cbe_tmp__329 = (float )((float )(llvm_cbe_tmp__323 + llvm_cbe_tmp__328));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__329, *(int*)(&llvm_cbe_tmp__329));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 %%39, i64 %%41, i64 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1492_count);
  llvm_cbe_tmp__330 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load float* %%66, align 16, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1493_count);
  llvm_cbe_tmp__331 = (float )*llvm_cbe_tmp__330;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__331, *(int*)(&llvm_cbe_tmp__331));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%35, i64 4, i64 %%39, i64 %%41, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1494_count);
  llvm_cbe_tmp__332 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load float* %%68, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1495_count);
  llvm_cbe_tmp__333 = (float )*llvm_cbe_tmp__332;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__333, *(int*)(&llvm_cbe_tmp__333));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = fmul float %%67, %%69, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1496_count);
  llvm_cbe_tmp__334 = (float )((float )(llvm_cbe_tmp__331 * llvm_cbe_tmp__333));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__334, *(int*)(&llvm_cbe_tmp__334));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = fadd float %%65, %%70, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1497_count);
  llvm_cbe_tmp__335 = (float )((float )(llvm_cbe_tmp__329 + llvm_cbe_tmp__334));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__335, *(int*)(&llvm_cbe_tmp__335));
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 %%39, i64 %%41, i64 5, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1529_count);
  llvm_cbe_tmp__336 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = load float* %%72, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1530_count);
  llvm_cbe_tmp__337 = (float )*llvm_cbe_tmp__336;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__337, *(int*)(&llvm_cbe_tmp__337));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%35, i64 5, i64 %%39, i64 %%41, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1531_count);
  llvm_cbe_tmp__338 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = load float* %%74, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1532_count);
  llvm_cbe_tmp__339 = (float )*llvm_cbe_tmp__338;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__339, *(int*)(&llvm_cbe_tmp__339));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = fmul float %%73, %%75, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1533_count);
  llvm_cbe_tmp__340 = (float )((float )(llvm_cbe_tmp__337 * llvm_cbe_tmp__339));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__340, *(int*)(&llvm_cbe_tmp__340));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = fadd float %%71, %%76, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1534_count);
  llvm_cbe_tmp__341 = (float )((float )(llvm_cbe_tmp__335 + llvm_cbe_tmp__340));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__341, *(int*)(&llvm_cbe_tmp__341));
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 %%39, i64 %%41, i64 6, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1566_count);
  llvm_cbe_tmp__342 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load float* %%78, align 8, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1567_count);
  llvm_cbe_tmp__343 = (float )*llvm_cbe_tmp__342;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__343, *(int*)(&llvm_cbe_tmp__343));
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%35, i64 6, i64 %%39, i64 %%41, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1568_count);
  llvm_cbe_tmp__344 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load float* %%80, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1569_count);
  llvm_cbe_tmp__345 = (float )*llvm_cbe_tmp__344;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__345, *(int*)(&llvm_cbe_tmp__345));
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = fmul float %%79, %%81, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1570_count);
  llvm_cbe_tmp__346 = (float )((float )(llvm_cbe_tmp__343 * llvm_cbe_tmp__345));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__346, *(int*)(&llvm_cbe_tmp__346));
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = fadd float %%77, %%82, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1571_count);
  llvm_cbe_tmp__347 = (float )((float )(llvm_cbe_tmp__341 + llvm_cbe_tmp__346));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__347, *(int*)(&llvm_cbe_tmp__347));
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = getelementptr inbounds [3 x [3 x [8 x float]]]* %%win_buf, i64 0, i64 %%39, i64 %%41, i64 7, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1603_count);
  llvm_cbe_tmp__348 = (float *)(&llvm_cbe_win_buf[(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = load float* %%84, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1604_count);
  llvm_cbe_tmp__349 = (float )*llvm_cbe_tmp__348;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__349, *(int*)(&llvm_cbe_tmp__349));
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%35, i64 7, i64 %%39, i64 %%41, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1605_count);
  llvm_cbe_tmp__350 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__303))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__305))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__305));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__303) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__305) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = load float* %%86, align 4, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1606_count);
  llvm_cbe_tmp__351 = (float )*llvm_cbe_tmp__350;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__351, *(int*)(&llvm_cbe_tmp__351));
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = fmul float %%85, %%87, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1607_count);
  llvm_cbe_tmp__352 = (float )((float )(llvm_cbe_tmp__349 * llvm_cbe_tmp__351));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__352, *(int*)(&llvm_cbe_tmp__352));
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = fadd float %%83, %%88, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1608_count);
  llvm_cbe_tmp__353 = (float )((float )(llvm_cbe_tmp__347 + llvm_cbe_tmp__352));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__353, *(int*)(&llvm_cbe_tmp__353));
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = add nsw i32 %%storemerge510, 1, !dbg !26 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1640_count);
  llvm_cbe_tmp__354 = (unsigned int )((unsigned int )(llvm_cbe_storemerge510&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__354&4294967295ull)));
  if (((llvm_cbe_tmp__354&4294967295U) == (3u&4294967295U))) {
    goto llvm_cbe_tmp__367;
  } else {
    llvm_cbe_storemerge510__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__354;   /* for PHI node */
    llvm_cbe_tmp__304__PHI_TEMPORARY = (float )llvm_cbe_tmp__353;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '.preheader8' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader13:
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add nsw i32 %%storemerge118, -2, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1293_count);
  llvm_cbe_tmp__297 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__297&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = sext i32 %%32 to i64, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_1294_count);
  llvm_cbe_tmp__298 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__297);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__298);
  llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__365;

  } while (1); /* end of syntactic loop '.preheader15' */
  } while (1); /* end of syntactic loop '.preheader17' */
llvm_cbe_tmp__362:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv2}\n");
  return;
}


void maxpool2(float (*llvm_cbe_in)[29][16], float (*llvm_cbe_out)[14][16]) {
  static  unsigned long long aesl_llvm_cbe_1691_count = 0;
  static  unsigned long long aesl_llvm_cbe_1692_count = 0;
  static  unsigned long long aesl_llvm_cbe_1693_count = 0;
  static  unsigned long long aesl_llvm_cbe_1694_count = 0;
  static  unsigned long long aesl_llvm_cbe_1695_count = 0;
  static  unsigned long long aesl_llvm_cbe_1696_count = 0;
  static  unsigned long long aesl_llvm_cbe_1697_count = 0;
  static  unsigned long long aesl_llvm_cbe_1698_count = 0;
  static  unsigned long long aesl_llvm_cbe_1699_count = 0;
  static  unsigned long long aesl_llvm_cbe_1700_count = 0;
  static  unsigned long long aesl_llvm_cbe_1701_count = 0;
  static  unsigned long long aesl_llvm_cbe_1702_count = 0;
  static  unsigned long long aesl_llvm_cbe_1703_count = 0;
  static  unsigned long long aesl_llvm_cbe_1704_count = 0;
  static  unsigned long long aesl_llvm_cbe_1705_count = 0;
  static  unsigned long long aesl_llvm_cbe_1706_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge6_count = 0;
  unsigned int llvm_cbe_storemerge6;
  unsigned int llvm_cbe_storemerge6__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1707_count = 0;
  static  unsigned long long aesl_llvm_cbe_1708_count = 0;
  static  unsigned long long aesl_llvm_cbe_1709_count = 0;
  static  unsigned long long aesl_llvm_cbe_1710_count = 0;
  static  unsigned long long aesl_llvm_cbe_1711_count = 0;
  static  unsigned long long aesl_llvm_cbe_1712_count = 0;
  static  unsigned long long aesl_llvm_cbe_1713_count = 0;
  static  unsigned long long aesl_llvm_cbe_1714_count = 0;
  unsigned int llvm_cbe_tmp__368;
  static  unsigned long long aesl_llvm_cbe_1715_count = 0;
  unsigned long long llvm_cbe_tmp__369;
  static  unsigned long long aesl_llvm_cbe_1716_count = 0;
  unsigned int llvm_cbe_tmp__370;
  static  unsigned long long aesl_llvm_cbe_1717_count = 0;
  unsigned long long llvm_cbe_tmp__371;
  static  unsigned long long aesl_llvm_cbe_1718_count = 0;
  unsigned long long llvm_cbe_tmp__372;
  static  unsigned long long aesl_llvm_cbe_1719_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge15_count = 0;
  unsigned int llvm_cbe_storemerge15;
  unsigned int llvm_cbe_storemerge15__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1720_count = 0;
  static  unsigned long long aesl_llvm_cbe_1721_count = 0;
  static  unsigned long long aesl_llvm_cbe_1722_count = 0;
  static  unsigned long long aesl_llvm_cbe_1723_count = 0;
  static  unsigned long long aesl_llvm_cbe_1724_count = 0;
  static  unsigned long long aesl_llvm_cbe_1725_count = 0;
  static  unsigned long long aesl_llvm_cbe_1726_count = 0;
  static  unsigned long long aesl_llvm_cbe_1727_count = 0;
  unsigned int llvm_cbe_tmp__373;
  static  unsigned long long aesl_llvm_cbe_1728_count = 0;
  unsigned long long llvm_cbe_tmp__374;
  static  unsigned long long aesl_llvm_cbe_1729_count = 0;
  unsigned int llvm_cbe_tmp__375;
  static  unsigned long long aesl_llvm_cbe_1730_count = 0;
  unsigned long long llvm_cbe_tmp__376;
  static  unsigned long long aesl_llvm_cbe_1731_count = 0;
  unsigned long long llvm_cbe_tmp__377;
  static  unsigned long long aesl_llvm_cbe_1732_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_count = 0;
  unsigned int llvm_cbe_storemerge23;
  unsigned int llvm_cbe_storemerge23__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1733_count = 0;
  unsigned long long llvm_cbe_tmp__378;
  static  unsigned long long aesl_llvm_cbe_1734_count = 0;
  float *llvm_cbe_tmp__379;
  static  unsigned long long aesl_llvm_cbe_1735_count = 0;
  float llvm_cbe_tmp__380;
  static  unsigned long long aesl_llvm_cbe_1736_count = 0;
  static  unsigned long long aesl_llvm_cbe_1737_count = 0;
  static  unsigned long long aesl_llvm_cbe_1738_count = 0;
  float *llvm_cbe_tmp__381;
  static  unsigned long long aesl_llvm_cbe_1739_count = 0;
  float llvm_cbe_tmp__382;
  static  unsigned long long aesl_llvm_cbe_1740_count = 0;
  static  unsigned long long aesl_llvm_cbe_1741_count = 0;
  static  unsigned long long aesl_llvm_cbe_1742_count = 0;
  static  unsigned long long aesl_llvm_cbe_1743_count = 0;
  float *llvm_cbe_tmp__383;
  static  unsigned long long aesl_llvm_cbe_1744_count = 0;
  float llvm_cbe_tmp__384;
  static  unsigned long long aesl_llvm_cbe_1745_count = 0;
  static  unsigned long long aesl_llvm_cbe_1746_count = 0;
  static  unsigned long long aesl_llvm_cbe_1747_count = 0;
  static  unsigned long long aesl_llvm_cbe_1748_count = 0;
  float *llvm_cbe_tmp__385;
  static  unsigned long long aesl_llvm_cbe_1749_count = 0;
  float llvm_cbe_tmp__386;
  static  unsigned long long aesl_llvm_cbe_1750_count = 0;
  static  unsigned long long aesl_llvm_cbe_1751_count = 0;
  static  unsigned long long aesl_llvm_cbe_1752_count = 0;
  static  unsigned long long aesl_llvm_cbe_1753_count = 0;
  static  unsigned long long aesl_llvm_cbe_1754_count = 0;
  static  unsigned long long aesl_llvm_cbe_1755_count = 0;
  static  unsigned long long aesl_llvm_cbe_1756_count = 0;
  static  unsigned long long aesl_llvm_cbe_1757_count = 0;
  static  unsigned long long aesl_llvm_cbe_1758_count = 0;
  static  unsigned long long aesl_llvm_cbe_1759_count = 0;
  static  unsigned long long aesl_llvm_cbe_1760_count = 0;
  static  unsigned long long aesl_llvm_cbe_1761_count = 0;
  static  unsigned long long aesl_llvm_cbe_1762_count = 0;
  static  unsigned long long aesl_llvm_cbe_1763_count = 0;
  static  unsigned long long aesl_llvm_cbe_1764_count = 0;
  float llvm_cbe_tmp__387;
  static  unsigned long long aesl_llvm_cbe_1765_count = 0;
  static  unsigned long long aesl_llvm_cbe_1766_count = 0;
  static  unsigned long long aesl_llvm_cbe_1767_count = 0;
  static  unsigned long long aesl_llvm_cbe_1768_count = 0;
  static  unsigned long long aesl_llvm_cbe_1769_count = 0;
  static  unsigned long long aesl_llvm_cbe_1770_count = 0;
  static  unsigned long long aesl_llvm_cbe_1771_count = 0;
  static  unsigned long long aesl_llvm_cbe_1772_count = 0;
  float llvm_cbe_tmp__388;
  static  unsigned long long aesl_llvm_cbe_1773_count = 0;
  static  unsigned long long aesl_llvm_cbe_1774_count = 0;
  static  unsigned long long aesl_llvm_cbe_1775_count = 0;
  static  unsigned long long aesl_llvm_cbe_1776_count = 0;
  static  unsigned long long aesl_llvm_cbe_1777_count = 0;
  static  unsigned long long aesl_llvm_cbe_1778_count = 0;
  static  unsigned long long aesl_llvm_cbe_1779_count = 0;
  static  unsigned long long aesl_llvm_cbe_1780_count = 0;
  float llvm_cbe_tmp__389;
  static  unsigned long long aesl_llvm_cbe_1781_count = 0;
  static  unsigned long long aesl_llvm_cbe_1782_count = 0;
  float *llvm_cbe_tmp__390;
  static  unsigned long long aesl_llvm_cbe_1783_count = 0;
  static  unsigned long long aesl_llvm_cbe_1784_count = 0;
  unsigned int llvm_cbe_tmp__391;
  static  unsigned long long aesl_llvm_cbe_1785_count = 0;
  static  unsigned long long aesl_llvm_cbe_1786_count = 0;
  static  unsigned long long aesl_llvm_cbe_1787_count = 0;
  static  unsigned long long aesl_llvm_cbe_1788_count = 0;
  static  unsigned long long aesl_llvm_cbe_1789_count = 0;
  static  unsigned long long aesl_llvm_cbe_1790_count = 0;
  static  unsigned long long aesl_llvm_cbe_1791_count = 0;
  static  unsigned long long aesl_llvm_cbe_1792_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1793_count = 0;
  static  unsigned long long aesl_llvm_cbe_1794_count = 0;
  unsigned int llvm_cbe_tmp__392;
  static  unsigned long long aesl_llvm_cbe_1795_count = 0;
  static  unsigned long long aesl_llvm_cbe_1796_count = 0;
  static  unsigned long long aesl_llvm_cbe_1797_count = 0;
  static  unsigned long long aesl_llvm_cbe_1798_count = 0;
  static  unsigned long long aesl_llvm_cbe_1799_count = 0;
  static  unsigned long long aesl_llvm_cbe_1800_count = 0;
  static  unsigned long long aesl_llvm_cbe_1801_count = 0;
  static  unsigned long long aesl_llvm_cbe_1802_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond7_count = 0;
  static  unsigned long long aesl_llvm_cbe_1803_count = 0;
  static  unsigned long long aesl_llvm_cbe_1804_count = 0;
  unsigned int llvm_cbe_tmp__393;
  static  unsigned long long aesl_llvm_cbe_1805_count = 0;
  static  unsigned long long aesl_llvm_cbe_1806_count = 0;
  static  unsigned long long aesl_llvm_cbe_1807_count = 0;
  static  unsigned long long aesl_llvm_cbe_1808_count = 0;
  static  unsigned long long aesl_llvm_cbe_1809_count = 0;
  static  unsigned long long aesl_llvm_cbe_1810_count = 0;
  static  unsigned long long aesl_llvm_cbe_1811_count = 0;
  static  unsigned long long aesl_llvm_cbe_1812_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond8_count = 0;
  static  unsigned long long aesl_llvm_cbe_1813_count = 0;
  static  unsigned long long aesl_llvm_cbe_1814_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @maxpool2\n");
  llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader4;

  do {     /* Syntactic loop '.preheader4' to make GCC happy */
llvm_cbe__2e_preheader4:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge6 = phi i32 [ 0, %%0 ], [ %%32, %%31  for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_storemerge6_count);
  llvm_cbe_storemerge6 = (unsigned int )llvm_cbe_storemerge6__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge6 = 0x%X",llvm_cbe_storemerge6);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__393);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = shl nsw i32 %%storemerge6, 1, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1714_count);
  llvm_cbe_tmp__368 = (unsigned int )llvm_cbe_storemerge6 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__368);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%1 to i64, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1715_count);
  llvm_cbe_tmp__369 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__368);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__369);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = or i32 %%1, 1, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1716_count);
  llvm_cbe_tmp__370 = (unsigned int )llvm_cbe_tmp__368 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__370);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1717_count);
  llvm_cbe_tmp__371 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__370);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__371);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge6 to i64, !dbg !21 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1718_count);
  llvm_cbe_tmp__372 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge6);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__372);
  llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

llvm_cbe_tmp__394:
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add nsw i32 %%storemerge6, 1, !dbg !21 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1804_count);
  llvm_cbe_tmp__393 = (unsigned int )((unsigned int )(llvm_cbe_storemerge6&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__393&4294967295ull)));
  if (((llvm_cbe_tmp__393&4294967295U) == (14u&4294967295U))) {
    goto llvm_cbe_tmp__395;
  } else {
    llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__393;   /* for PHI node */
    goto llvm_cbe__2e_preheader4;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge15 = phi i32 [ 0, %%.preheader4 ], [ %%30, %%29  for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_storemerge15_count);
  llvm_cbe_storemerge15 = (unsigned int )llvm_cbe_storemerge15__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge15 = 0x%X",llvm_cbe_storemerge15);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__392);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = shl nsw i32 %%storemerge15, 1, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1727_count);
  llvm_cbe_tmp__373 = (unsigned int )llvm_cbe_storemerge15 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__373);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%6 to i64, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1728_count);
  llvm_cbe_tmp__374 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__373);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__374);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = or i32 %%6, 1, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1729_count);
  llvm_cbe_tmp__375 = (unsigned int )llvm_cbe_tmp__373 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__375);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%8 to i64, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1730_count);
  llvm_cbe_tmp__376 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__375);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__376);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%storemerge15 to i64, !dbg !21 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1731_count);
  llvm_cbe_tmp__377 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge15);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__377);
  llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__396;

llvm_cbe_tmp__397:
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add nsw i32 %%storemerge15, 1, !dbg !21 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1794_count);
  llvm_cbe_tmp__392 = (unsigned int )((unsigned int )(llvm_cbe_storemerge15&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__392&4294967295ull)));
  if (((llvm_cbe_tmp__392&4294967295U) == (14u&4294967295U))) {
    goto llvm_cbe_tmp__394;
  } else {
    llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__392;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__396:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23 = phi i32 [ 0, %%.preheader ], [ %%28, %%11  for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_storemerge23_count);
  llvm_cbe_storemerge23 = (unsigned int )llvm_cbe_storemerge23__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23 = 0x%X",llvm_cbe_storemerge23);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__391);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sext i32 %%storemerge23 to i64, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1733_count);
  llvm_cbe_tmp__378 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__378);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [29 x [16 x float]]* %%in, i64 %%2, i64 %%7, i64 %%12, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1734_count);
  llvm_cbe_tmp__379 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__369))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__374))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__378))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__369));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__374));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__378));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__374) < 29)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__378) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1735_count);
  llvm_cbe_tmp__380 = (float )*llvm_cbe_tmp__379;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__380, *(int*)(&llvm_cbe_tmp__380));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [29 x [16 x float]]* %%in, i64 %%2, i64 %%9, i64 %%12, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1738_count);
  llvm_cbe_tmp__381 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__369))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__376))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__378))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__369));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__376));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__378));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__376) < 29)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__378) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load float* %%15, align 4, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1739_count);
  llvm_cbe_tmp__382 = (float )*llvm_cbe_tmp__381;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__382, *(int*)(&llvm_cbe_tmp__382));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [29 x [16 x float]]* %%in, i64 %%4, i64 %%7, i64 %%12, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1743_count);
  llvm_cbe_tmp__383 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__374))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__378))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__374));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__378));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__374) < 29)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__378) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* %%17, align 4, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1744_count);
  llvm_cbe_tmp__384 = (float )*llvm_cbe_tmp__383;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__384, *(int*)(&llvm_cbe_tmp__384));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [29 x [16 x float]]* %%in, i64 %%4, i64 %%9, i64 %%12, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1748_count);
  llvm_cbe_tmp__385 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__376))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__378))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__376));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__378));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__376) < 29)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__378) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* %%19, align 4, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1749_count);
  llvm_cbe_tmp__386 = (float )*llvm_cbe_tmp__385;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__386, *(int*)(&llvm_cbe_tmp__386));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = select i1 %%21, float %%16, float %%14, !dbg !22 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1764_count);
  llvm_cbe_tmp__387 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__382, llvm_cbe_tmp__380))) ? ((float )llvm_cbe_tmp__382) : ((float )llvm_cbe_tmp__380));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__387, *(int*)(&llvm_cbe_tmp__387));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = select i1 %%23, float %%18, float %%22, !dbg !22 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1772_count);
  llvm_cbe_tmp__388 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__384, llvm_cbe_tmp__387))) ? ((float )llvm_cbe_tmp__384) : ((float )llvm_cbe_tmp__387));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__388, *(int*)(&llvm_cbe_tmp__388));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = select i1 %%25, float %%20, float %%24, !dbg !23 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1780_count);
  llvm_cbe_tmp__389 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__386, llvm_cbe_tmp__388))) ? ((float )llvm_cbe_tmp__386) : ((float )llvm_cbe_tmp__388));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__389, *(int*)(&llvm_cbe_tmp__389));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [14 x [16 x float]]* %%out, i64 %%5, i64 %%10, i64 %%12, !dbg !21 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1782_count);
  llvm_cbe_tmp__390 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__372))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__377))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__378))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__372));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__377));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__378));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__377) < 14 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__378) < 16 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%27, align 4, !dbg !21 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1783_count);
  *llvm_cbe_tmp__390 = llvm_cbe_tmp__389;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__389);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = add nsw i32 %%storemerge23, 1, !dbg !22 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_1784_count);
  llvm_cbe_tmp__391 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__391&4294967295ull)));
  if (((llvm_cbe_tmp__391&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__397;
  } else {
    llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__391;   /* for PHI node */
    goto llvm_cbe_tmp__396;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '.preheader4' */
llvm_cbe_tmp__395:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @maxpool2}\n");
  return;
}


void conv3(float (*llvm_cbe_in)[14][16], float (*llvm_cbe_out)[12][32], float (*llvm_cbe_kernel)[16][3][3], float *llvm_cbe_bias) {
  static  unsigned long long aesl_llvm_cbe_win_buf_count = 0;
  float llvm_cbe_win_buf[3][3][16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1815_count = 0;
  static  unsigned long long aesl_llvm_cbe_1816_count = 0;
  static  unsigned long long aesl_llvm_cbe_1817_count = 0;
  static  unsigned long long aesl_llvm_cbe_1818_count = 0;
  static  unsigned long long aesl_llvm_cbe_1819_count = 0;
  static  unsigned long long aesl_llvm_cbe_1820_count = 0;
  static  unsigned long long aesl_llvm_cbe_1821_count = 0;
  static  unsigned long long aesl_llvm_cbe_1822_count = 0;
  static  unsigned long long aesl_llvm_cbe_1823_count = 0;
  static  unsigned long long aesl_llvm_cbe_1824_count = 0;
  static  unsigned long long aesl_llvm_cbe_1825_count = 0;
  static  unsigned long long aesl_llvm_cbe_1826_count = 0;
  static  unsigned long long aesl_llvm_cbe_1827_count = 0;
  static  unsigned long long aesl_llvm_cbe_1828_count = 0;
  static  unsigned long long aesl_llvm_cbe_1829_count = 0;
  static  unsigned long long aesl_llvm_cbe_1830_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned int llvm_cbe_storemerge19;
  unsigned int llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1831_count = 0;
  static  unsigned long long aesl_llvm_cbe_1832_count = 0;
  static  unsigned long long aesl_llvm_cbe_1833_count = 0;
  static  unsigned long long aesl_llvm_cbe_1834_count = 0;
  static  unsigned long long aesl_llvm_cbe_1835_count = 0;
  static  unsigned long long aesl_llvm_cbe_1836_count = 0;
  static  unsigned long long aesl_llvm_cbe_1837_count = 0;
  static  unsigned long long aesl_llvm_cbe_1838_count = 0;
  static  unsigned long long aesl_llvm_cbe_1839_count = 0;
  static  unsigned long long aesl_llvm_cbe_1840_count = 0;
  unsigned long long llvm_cbe_tmp__398;
  static  unsigned long long aesl_llvm_cbe_1841_count = 0;
  static  unsigned long long aesl_llvm_cbe_1842_count = 0;
  unsigned int llvm_cbe_tmp__399;
  static  unsigned long long aesl_llvm_cbe_1843_count = 0;
  unsigned long long llvm_cbe_tmp__400;
  static  unsigned long long aesl_llvm_cbe_1844_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge118_count = 0;
  unsigned int llvm_cbe_storemerge118;
  unsigned int llvm_cbe_storemerge118__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1845_count = 0;
  static  unsigned long long aesl_llvm_cbe_1846_count = 0;
  static  unsigned long long aesl_llvm_cbe_1847_count = 0;
  static  unsigned long long aesl_llvm_cbe_1848_count = 0;
  static  unsigned long long aesl_llvm_cbe_1849_count = 0;
  static  unsigned long long aesl_llvm_cbe_1850_count = 0;
  static  unsigned long long aesl_llvm_cbe_1851_count = 0;
  static  unsigned long long aesl_llvm_cbe_1852_count = 0;
  static  unsigned long long aesl_llvm_cbe_1853_count = 0;
  static  unsigned long long aesl_llvm_cbe_1854_count = 0;
  static  unsigned long long aesl_llvm_cbe_1855_count = 0;
  static  unsigned long long aesl_llvm_cbe_1856_count = 0;
  static  unsigned long long aesl_llvm_cbe_1857_count = 0;
  static  unsigned long long aesl_llvm_cbe_1858_count = 0;
  static  unsigned long long aesl_llvm_cbe_1859_count = 0;
  static  unsigned long long aesl_llvm_cbe_1860_count = 0;
  static  unsigned long long aesl_llvm_cbe_1861_count = 0;
  static  unsigned long long aesl_llvm_cbe_1862_count = 0;
  static  unsigned long long aesl_llvm_cbe_1863_count = 0;
  static  unsigned long long aesl_llvm_cbe_1864_count = 0;
  static  unsigned long long aesl_llvm_cbe_1865_count = 0;
  static  unsigned long long aesl_llvm_cbe_1866_count = 0;
  static  unsigned long long aesl_llvm_cbe_1867_count = 0;
  static  unsigned long long aesl_llvm_cbe_1868_count = 0;
  static  unsigned long long aesl_llvm_cbe_1869_count = 0;
  static  unsigned long long aesl_llvm_cbe_1870_count = 0;
  static  unsigned long long aesl_llvm_cbe_1871_count = 0;
  unsigned long long llvm_cbe_tmp__401;
  static  unsigned long long aesl_llvm_cbe_1872_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge216_count = 0;
  unsigned int llvm_cbe_storemerge216;
  unsigned int llvm_cbe_storemerge216__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1873_count = 0;
  unsigned long long llvm_cbe_tmp__402;
  static  unsigned long long aesl_llvm_cbe_1874_count = 0;
  float *llvm_cbe_tmp__403;
  static  unsigned long long aesl_llvm_cbe_1875_count = 0;
  float llvm_cbe_tmp__404;
  static  unsigned long long aesl_llvm_cbe_1876_count = 0;
  float *llvm_cbe_tmp__405;
  static  unsigned long long aesl_llvm_cbe_1877_count = 0;
  static  unsigned long long aesl_llvm_cbe_1878_count = 0;
  float *llvm_cbe_tmp__406;
  static  unsigned long long aesl_llvm_cbe_1879_count = 0;
  float llvm_cbe_tmp__407;
  static  unsigned long long aesl_llvm_cbe_1880_count = 0;
  static  unsigned long long aesl_llvm_cbe_1881_count = 0;
  float *llvm_cbe_tmp__408;
  static  unsigned long long aesl_llvm_cbe_1882_count = 0;
  float llvm_cbe_tmp__409;
  static  unsigned long long aesl_llvm_cbe_1883_count = 0;
  float *llvm_cbe_tmp__410;
  static  unsigned long long aesl_llvm_cbe_1884_count = 0;
  static  unsigned long long aesl_llvm_cbe_1885_count = 0;
  float *llvm_cbe_tmp__411;
  static  unsigned long long aesl_llvm_cbe_1886_count = 0;
  float llvm_cbe_tmp__412;
  static  unsigned long long aesl_llvm_cbe_1887_count = 0;
  static  unsigned long long aesl_llvm_cbe_1888_count = 0;
  float *llvm_cbe_tmp__413;
  static  unsigned long long aesl_llvm_cbe_1889_count = 0;
  float llvm_cbe_tmp__414;
  static  unsigned long long aesl_llvm_cbe_1890_count = 0;
  float *llvm_cbe_tmp__415;
  static  unsigned long long aesl_llvm_cbe_1891_count = 0;
  static  unsigned long long aesl_llvm_cbe_1892_count = 0;
  float *llvm_cbe_tmp__416;
  static  unsigned long long aesl_llvm_cbe_1893_count = 0;
  float llvm_cbe_tmp__417;
  static  unsigned long long aesl_llvm_cbe_1894_count = 0;
  static  unsigned long long aesl_llvm_cbe_1895_count = 0;
  float *llvm_cbe_tmp__418;
  static  unsigned long long aesl_llvm_cbe_1896_count = 0;
  float llvm_cbe_tmp__419;
  static  unsigned long long aesl_llvm_cbe_1897_count = 0;
  static  unsigned long long aesl_llvm_cbe_1898_count = 0;
  static  unsigned long long aesl_llvm_cbe_1899_count = 0;
  float *llvm_cbe_tmp__420;
  static  unsigned long long aesl_llvm_cbe_1900_count = 0;
  float llvm_cbe_tmp__421;
  static  unsigned long long aesl_llvm_cbe_1901_count = 0;
  static  unsigned long long aesl_llvm_cbe_1902_count = 0;
  static  unsigned long long aesl_llvm_cbe_1903_count = 0;
  static  unsigned long long aesl_llvm_cbe_1904_count = 0;
  float *llvm_cbe_tmp__422;
  static  unsigned long long aesl_llvm_cbe_1905_count = 0;
  float llvm_cbe_tmp__423;
  static  unsigned long long aesl_llvm_cbe_1906_count = 0;
  static  unsigned long long aesl_llvm_cbe_1907_count = 0;
  static  unsigned long long aesl_llvm_cbe_1908_count = 0;
  static  unsigned long long aesl_llvm_cbe_1909_count = 0;
  static  unsigned long long aesl_llvm_cbe_1910_count = 0;
  static  unsigned long long aesl_llvm_cbe_1911_count = 0;
  static  unsigned long long aesl_llvm_cbe_1912_count = 0;
  static  unsigned long long aesl_llvm_cbe_1913_count = 0;
  static  unsigned long long aesl_llvm_cbe_1914_count = 0;
  unsigned int llvm_cbe_tmp__424;
  static  unsigned long long aesl_llvm_cbe_1915_count = 0;
  static  unsigned long long aesl_llvm_cbe_1916_count = 0;
  static  unsigned long long aesl_llvm_cbe_1917_count = 0;
  static  unsigned long long aesl_llvm_cbe_1918_count = 0;
  static  unsigned long long aesl_llvm_cbe_1919_count = 0;
  static  unsigned long long aesl_llvm_cbe_1920_count = 0;
  static  unsigned long long aesl_llvm_cbe_1921_count = 0;
  static  unsigned long long aesl_llvm_cbe_1922_count = 0;
  static  unsigned long long aesl_llvm_cbe_1923_count = 0;
  static  unsigned long long aesl_llvm_cbe_1924_count = 0;
  static  unsigned long long aesl_llvm_cbe_1925_count = 0;
  static  unsigned long long aesl_llvm_cbe_1926_count = 0;
  static  unsigned long long aesl_llvm_cbe_1927_count = 0;
  static  unsigned long long aesl_llvm_cbe_1928_count = 0;
  static  unsigned long long aesl_llvm_cbe_1929_count = 0;
  static  unsigned long long aesl_llvm_cbe_1930_count = 0;
  static  unsigned long long aesl_llvm_cbe_1931_count = 0;
  static  unsigned long long aesl_llvm_cbe_1932_count = 0;
  static  unsigned long long aesl_llvm_cbe_1933_count = 0;
  static  unsigned long long aesl_llvm_cbe_1934_count = 0;
  static  unsigned long long aesl_llvm_cbe_1935_count = 0;
  static  unsigned long long aesl_llvm_cbe_1936_count = 0;
  static  unsigned long long aesl_llvm_cbe_1937_count = 0;
  static  unsigned long long aesl_llvm_cbe_1938_count = 0;
  static  unsigned long long aesl_llvm_cbe_1939_count = 0;
  static  unsigned long long aesl_llvm_cbe_1940_count = 0;
  static  unsigned long long aesl_llvm_cbe_1941_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond30_count = 0;
  static  unsigned long long aesl_llvm_cbe_1942_count = 0;
  static  unsigned long long aesl_llvm_cbe_1943_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_1944_count = 0;
  static  unsigned long long aesl_llvm_cbe_1945_count = 0;
  static  unsigned long long aesl_llvm_cbe_1946_count = 0;
  static  unsigned long long aesl_llvm_cbe_1947_count = 0;
  static  unsigned long long aesl_llvm_cbe_1948_count = 0;
  static  unsigned long long aesl_llvm_cbe_1949_count = 0;
  static  unsigned long long aesl_llvm_cbe_1950_count = 0;
  unsigned int llvm_cbe_tmp__425;
  static  unsigned long long aesl_llvm_cbe_1951_count = 0;
  unsigned long long llvm_cbe_tmp__426;
  static  unsigned long long aesl_llvm_cbe_1952_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge314_count = 0;
  unsigned int llvm_cbe_storemerge314;
  unsigned int llvm_cbe_storemerge314__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1953_count = 0;
  unsigned long long llvm_cbe_tmp__427;
  static  unsigned long long aesl_llvm_cbe_1954_count = 0;
  float *llvm_cbe_tmp__428;
  static  unsigned long long aesl_llvm_cbe_1955_count = 0;
  float llvm_cbe_tmp__429;
  static  unsigned long long aesl_llvm_cbe_1956_count = 0;
  static  unsigned long long aesl_llvm_cbe_1957_count = 0;
  static  unsigned long long aesl_llvm_cbe_1958_count = 0;
  static  unsigned long long aesl_llvm_cbe_1959_count = 0;
  static  unsigned long long aesl_llvm_cbe_1960_count = 0;
  static  unsigned long long aesl_llvm_cbe_1961_count = 0;
  static  unsigned long long aesl_llvm_cbe_1962_count = 0;
  static  unsigned long long aesl_llvm_cbe_1963_count = 0;
  static  unsigned long long aesl_llvm_cbe_1964_count = 0;
  static  unsigned long long aesl_llvm_cbe_1965_count = 0;
  static  unsigned long long aesl_llvm_cbe_1966_count = 0;
  static  unsigned long long aesl_llvm_cbe_1967_count = 0;
  static  unsigned long long aesl_llvm_cbe_1968_count = 0;
  static  unsigned long long aesl_llvm_cbe_1969_count = 0;
  static  unsigned long long aesl_llvm_cbe_1970_count = 0;
  static  unsigned long long aesl_llvm_cbe_1971_count = 0;
  static  unsigned long long aesl_llvm_cbe_1972_count = 0;
  static  unsigned long long aesl_llvm_cbe_1973_count = 0;
  static  unsigned long long aesl_llvm_cbe_1974_count = 0;
  static  unsigned long long aesl_llvm_cbe_1975_count = 0;
  static  unsigned long long aesl_llvm_cbe_1976_count = 0;
  static  unsigned long long aesl_llvm_cbe_1977_count = 0;
  static  unsigned long long aesl_llvm_cbe_1978_count = 0;
  static  unsigned long long aesl_llvm_cbe_1979_count = 0;
  static  unsigned long long aesl_llvm_cbe_1980_count = 0;
  static  unsigned long long aesl_llvm_cbe_1981_count = 0;
  static  unsigned long long aesl_llvm_cbe_1982_count = 0;
  static  unsigned long long aesl_llvm_cbe_1983_count = 0;
  static  unsigned long long aesl_llvm_cbe_1984_count = 0;
  static  unsigned long long aesl_llvm_cbe_1985_count = 0;
  static  unsigned long long aesl_llvm_cbe_1986_count = 0;
  static  unsigned long long aesl_llvm_cbe_1987_count = 0;
  static  unsigned long long aesl_llvm_cbe_1988_count = 0;
  static  unsigned long long aesl_llvm_cbe_1989_count = 0;
  static  unsigned long long aesl_llvm_cbe_1990_count = 0;
  static  unsigned long long aesl_llvm_cbe_1991_count = 0;
  static  unsigned long long aesl_llvm_cbe_1992_count = 0;
  static  unsigned long long aesl_llvm_cbe_1993_count = 0;
  static  unsigned long long aesl_llvm_cbe_1994_count = 0;
  static  unsigned long long aesl_llvm_cbe_1995_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_count = 0;
  unsigned int llvm_cbe_storemerge67;
  unsigned int llvm_cbe_storemerge67__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1996_count = 0;
  float llvm_cbe_tmp__430;
  float llvm_cbe_tmp__430__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1997_count = 0;
  unsigned long long llvm_cbe_tmp__431;
  static  unsigned long long aesl_llvm_cbe_1998_count = 0;
  float *llvm_cbe_tmp__432;
  static  unsigned long long aesl_llvm_cbe_1999_count = 0;
  float llvm_cbe_tmp__433;
  static  unsigned long long aesl_llvm_cbe_2000_count = 0;
  float *llvm_cbe_tmp__434;
  static  unsigned long long aesl_llvm_cbe_2001_count = 0;
  float llvm_cbe_tmp__435;
  static  unsigned long long aesl_llvm_cbe_2002_count = 0;
  float llvm_cbe_tmp__436;
  static  unsigned long long aesl_llvm_cbe_2003_count = 0;
  float llvm_cbe_tmp__437;
  static  unsigned long long aesl_llvm_cbe_2004_count = 0;
  static  unsigned long long aesl_llvm_cbe_2005_count = 0;
  static  unsigned long long aesl_llvm_cbe_2006_count = 0;
  static  unsigned long long aesl_llvm_cbe_2007_count = 0;
  static  unsigned long long aesl_llvm_cbe_2008_count = 0;
  unsigned int llvm_cbe_tmp__438;
  static  unsigned long long aesl_llvm_cbe_2009_count = 0;
  static  unsigned long long aesl_llvm_cbe_2010_count = 0;
  static  unsigned long long aesl_llvm_cbe_2011_count = 0;
  static  unsigned long long aesl_llvm_cbe_2012_count = 0;
  static  unsigned long long aesl_llvm_cbe_2013_count = 0;
  static  unsigned long long aesl_llvm_cbe_2014_count = 0;
  static  unsigned long long aesl_llvm_cbe_2015_count = 0;
  static  unsigned long long aesl_llvm_cbe_2016_count = 0;
  static  unsigned long long aesl_llvm_cbe_2017_count = 0;
  static  unsigned long long aesl_llvm_cbe_2018_count = 0;
  static  unsigned long long aesl_llvm_cbe_2019_count = 0;
  static  unsigned long long aesl_llvm_cbe_2020_count = 0;
  static  unsigned long long aesl_llvm_cbe_2021_count = 0;
  static  unsigned long long aesl_llvm_cbe_2022_count = 0;
  static  unsigned long long aesl_llvm_cbe_2023_count = 0;
  static  unsigned long long aesl_llvm_cbe_2024_count = 0;
  static  unsigned long long aesl_llvm_cbe_2025_count = 0;
  static  unsigned long long aesl_llvm_cbe_2026_count = 0;
  static  unsigned long long aesl_llvm_cbe_2027_count = 0;
  static  unsigned long long aesl_llvm_cbe_2028_count = 0;
  static  unsigned long long aesl_llvm_cbe_2029_count = 0;
  static  unsigned long long aesl_llvm_cbe_2030_count = 0;
  static  unsigned long long aesl_llvm_cbe_2031_count = 0;
  static  unsigned long long aesl_llvm_cbe_2032_count = 0;
  static  unsigned long long aesl_llvm_cbe_2033_count = 0;
  static  unsigned long long aesl_llvm_cbe_2034_count = 0;
  static  unsigned long long aesl_llvm_cbe_2035_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2036_count = 0;
  static  unsigned long long aesl_llvm_cbe_2037_count = 0;
  unsigned int llvm_cbe_tmp__439;
  static  unsigned long long aesl_llvm_cbe_2038_count = 0;
  static  unsigned long long aesl_llvm_cbe_2039_count = 0;
  static  unsigned long long aesl_llvm_cbe_2040_count = 0;
  static  unsigned long long aesl_llvm_cbe_2041_count = 0;
  static  unsigned long long aesl_llvm_cbe_2042_count = 0;
  static  unsigned long long aesl_llvm_cbe_2043_count = 0;
  static  unsigned long long aesl_llvm_cbe_2044_count = 0;
  static  unsigned long long aesl_llvm_cbe_2045_count = 0;
  static  unsigned long long aesl_llvm_cbe_2046_count = 0;
  static  unsigned long long aesl_llvm_cbe_2047_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond31_count = 0;
  static  unsigned long long aesl_llvm_cbe_2048_count = 0;
  static  unsigned long long aesl_llvm_cbe_2049_count = 0;
  unsigned int llvm_cbe_tmp__440;
  static  unsigned long long aesl_llvm_cbe_2050_count = 0;
  static  unsigned long long aesl_llvm_cbe_2051_count = 0;
  static  unsigned long long aesl_llvm_cbe_2052_count = 0;
  static  unsigned long long aesl_llvm_cbe_2053_count = 0;
  static  unsigned long long aesl_llvm_cbe_2054_count = 0;
  static  unsigned long long aesl_llvm_cbe_2055_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond32_count = 0;
  static  unsigned long long aesl_llvm_cbe_2056_count = 0;
  static  unsigned long long aesl_llvm_cbe_2057_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_1;
  unsigned int llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2058_count = 0;
  float llvm_cbe_tmp__441;
  float llvm_cbe_tmp__441__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2059_count = 0;
  unsigned long long llvm_cbe_tmp__442;
  static  unsigned long long aesl_llvm_cbe_2060_count = 0;
  float *llvm_cbe_tmp__443;
  static  unsigned long long aesl_llvm_cbe_2061_count = 0;
  float llvm_cbe_tmp__444;
  static  unsigned long long aesl_llvm_cbe_2062_count = 0;
  float *llvm_cbe_tmp__445;
  static  unsigned long long aesl_llvm_cbe_2063_count = 0;
  float llvm_cbe_tmp__446;
  static  unsigned long long aesl_llvm_cbe_2064_count = 0;
  float llvm_cbe_tmp__447;
  static  unsigned long long aesl_llvm_cbe_2065_count = 0;
  float llvm_cbe_tmp__448;
  static  unsigned long long aesl_llvm_cbe_2066_count = 0;
  static  unsigned long long aesl_llvm_cbe_2067_count = 0;
  static  unsigned long long aesl_llvm_cbe_2068_count = 0;
  static  unsigned long long aesl_llvm_cbe_2069_count = 0;
  static  unsigned long long aesl_llvm_cbe_2070_count = 0;
  unsigned int llvm_cbe_tmp__449;
  static  unsigned long long aesl_llvm_cbe_2071_count = 0;
  static  unsigned long long aesl_llvm_cbe_2072_count = 0;
  static  unsigned long long aesl_llvm_cbe_2073_count = 0;
  static  unsigned long long aesl_llvm_cbe_2074_count = 0;
  static  unsigned long long aesl_llvm_cbe_2075_count = 0;
  static  unsigned long long aesl_llvm_cbe_2076_count = 0;
  static  unsigned long long aesl_llvm_cbe_2077_count = 0;
  static  unsigned long long aesl_llvm_cbe_2078_count = 0;
  static  unsigned long long aesl_llvm_cbe_2079_count = 0;
  static  unsigned long long aesl_llvm_cbe_2080_count = 0;
  static  unsigned long long aesl_llvm_cbe_2081_count = 0;
  static  unsigned long long aesl_llvm_cbe_2082_count = 0;
  static  unsigned long long aesl_llvm_cbe_2083_count = 0;
  static  unsigned long long aesl_llvm_cbe_2084_count = 0;
  static  unsigned long long aesl_llvm_cbe_2085_count = 0;
  static  unsigned long long aesl_llvm_cbe_2086_count = 0;
  static  unsigned long long aesl_llvm_cbe_2087_count = 0;
  static  unsigned long long aesl_llvm_cbe_2088_count = 0;
  static  unsigned long long aesl_llvm_cbe_2089_count = 0;
  static  unsigned long long aesl_llvm_cbe_2090_count = 0;
  static  unsigned long long aesl_llvm_cbe_2091_count = 0;
  static  unsigned long long aesl_llvm_cbe_2092_count = 0;
  static  unsigned long long aesl_llvm_cbe_2093_count = 0;
  static  unsigned long long aesl_llvm_cbe_2094_count = 0;
  static  unsigned long long aesl_llvm_cbe_2095_count = 0;
  static  unsigned long long aesl_llvm_cbe_2096_count = 0;
  static  unsigned long long aesl_llvm_cbe_2097_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2098_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_2;
  unsigned int llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2099_count = 0;
  float llvm_cbe_tmp__450;
  float llvm_cbe_tmp__450__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2100_count = 0;
  unsigned long long llvm_cbe_tmp__451;
  static  unsigned long long aesl_llvm_cbe_2101_count = 0;
  float *llvm_cbe_tmp__452;
  static  unsigned long long aesl_llvm_cbe_2102_count = 0;
  float llvm_cbe_tmp__453;
  static  unsigned long long aesl_llvm_cbe_2103_count = 0;
  float *llvm_cbe_tmp__454;
  static  unsigned long long aesl_llvm_cbe_2104_count = 0;
  float llvm_cbe_tmp__455;
  static  unsigned long long aesl_llvm_cbe_2105_count = 0;
  float llvm_cbe_tmp__456;
  static  unsigned long long aesl_llvm_cbe_2106_count = 0;
  float llvm_cbe_tmp__457;
  static  unsigned long long aesl_llvm_cbe_2107_count = 0;
  static  unsigned long long aesl_llvm_cbe_2108_count = 0;
  static  unsigned long long aesl_llvm_cbe_2109_count = 0;
  static  unsigned long long aesl_llvm_cbe_2110_count = 0;
  static  unsigned long long aesl_llvm_cbe_2111_count = 0;
  unsigned int llvm_cbe_tmp__458;
  static  unsigned long long aesl_llvm_cbe_2112_count = 0;
  static  unsigned long long aesl_llvm_cbe_2113_count = 0;
  static  unsigned long long aesl_llvm_cbe_2114_count = 0;
  static  unsigned long long aesl_llvm_cbe_2115_count = 0;
  static  unsigned long long aesl_llvm_cbe_2116_count = 0;
  static  unsigned long long aesl_llvm_cbe_2117_count = 0;
  static  unsigned long long aesl_llvm_cbe_2118_count = 0;
  static  unsigned long long aesl_llvm_cbe_2119_count = 0;
  static  unsigned long long aesl_llvm_cbe_2120_count = 0;
  static  unsigned long long aesl_llvm_cbe_2121_count = 0;
  static  unsigned long long aesl_llvm_cbe_2122_count = 0;
  static  unsigned long long aesl_llvm_cbe_2123_count = 0;
  static  unsigned long long aesl_llvm_cbe_2124_count = 0;
  static  unsigned long long aesl_llvm_cbe_2125_count = 0;
  static  unsigned long long aesl_llvm_cbe_2126_count = 0;
  static  unsigned long long aesl_llvm_cbe_2127_count = 0;
  static  unsigned long long aesl_llvm_cbe_2128_count = 0;
  static  unsigned long long aesl_llvm_cbe_2129_count = 0;
  static  unsigned long long aesl_llvm_cbe_2130_count = 0;
  static  unsigned long long aesl_llvm_cbe_2131_count = 0;
  static  unsigned long long aesl_llvm_cbe_2132_count = 0;
  static  unsigned long long aesl_llvm_cbe_2133_count = 0;
  static  unsigned long long aesl_llvm_cbe_2134_count = 0;
  static  unsigned long long aesl_llvm_cbe_2135_count = 0;
  static  unsigned long long aesl_llvm_cbe_2136_count = 0;
  static  unsigned long long aesl_llvm_cbe_2137_count = 0;
  static  unsigned long long aesl_llvm_cbe_2138_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_2139_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_124_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_124;
  unsigned int llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2140_count = 0;
  float llvm_cbe_tmp__459;
  float llvm_cbe_tmp__459__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2141_count = 0;
  unsigned long long llvm_cbe_tmp__460;
  static  unsigned long long aesl_llvm_cbe_2142_count = 0;
  float *llvm_cbe_tmp__461;
  static  unsigned long long aesl_llvm_cbe_2143_count = 0;
  float llvm_cbe_tmp__462;
  static  unsigned long long aesl_llvm_cbe_2144_count = 0;
  float *llvm_cbe_tmp__463;
  static  unsigned long long aesl_llvm_cbe_2145_count = 0;
  float llvm_cbe_tmp__464;
  static  unsigned long long aesl_llvm_cbe_2146_count = 0;
  float llvm_cbe_tmp__465;
  static  unsigned long long aesl_llvm_cbe_2147_count = 0;
  float llvm_cbe_tmp__466;
  static  unsigned long long aesl_llvm_cbe_2148_count = 0;
  static  unsigned long long aesl_llvm_cbe_2149_count = 0;
  static  unsigned long long aesl_llvm_cbe_2150_count = 0;
  static  unsigned long long aesl_llvm_cbe_2151_count = 0;
  static  unsigned long long aesl_llvm_cbe_2152_count = 0;
  unsigned int llvm_cbe_tmp__467;
  static  unsigned long long aesl_llvm_cbe_2153_count = 0;
  static  unsigned long long aesl_llvm_cbe_2154_count = 0;
  static  unsigned long long aesl_llvm_cbe_2155_count = 0;
  static  unsigned long long aesl_llvm_cbe_2156_count = 0;
  static  unsigned long long aesl_llvm_cbe_2157_count = 0;
  static  unsigned long long aesl_llvm_cbe_2158_count = 0;
  static  unsigned long long aesl_llvm_cbe_2159_count = 0;
  static  unsigned long long aesl_llvm_cbe_2160_count = 0;
  static  unsigned long long aesl_llvm_cbe_2161_count = 0;
  static  unsigned long long aesl_llvm_cbe_2162_count = 0;
  static  unsigned long long aesl_llvm_cbe_2163_count = 0;
  static  unsigned long long aesl_llvm_cbe_2164_count = 0;
  static  unsigned long long aesl_llvm_cbe_2165_count = 0;
  static  unsigned long long aesl_llvm_cbe_2166_count = 0;
  static  unsigned long long aesl_llvm_cbe_2167_count = 0;
  static  unsigned long long aesl_llvm_cbe_2168_count = 0;
  static  unsigned long long aesl_llvm_cbe_2169_count = 0;
  static  unsigned long long aesl_llvm_cbe_2170_count = 0;
  static  unsigned long long aesl_llvm_cbe_2171_count = 0;
  static  unsigned long long aesl_llvm_cbe_2172_count = 0;
  static  unsigned long long aesl_llvm_cbe_2173_count = 0;
  static  unsigned long long aesl_llvm_cbe_2174_count = 0;
  static  unsigned long long aesl_llvm_cbe_2175_count = 0;
  static  unsigned long long aesl_llvm_cbe_2176_count = 0;
  static  unsigned long long aesl_llvm_cbe_2177_count = 0;
  static  unsigned long long aesl_llvm_cbe_2178_count = 0;
  static  unsigned long long aesl_llvm_cbe_2179_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_2180_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_1_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_1;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2181_count = 0;
  float llvm_cbe_tmp__468;
  float llvm_cbe_tmp__468__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2182_count = 0;
  unsigned long long llvm_cbe_tmp__469;
  static  unsigned long long aesl_llvm_cbe_2183_count = 0;
  float *llvm_cbe_tmp__470;
  static  unsigned long long aesl_llvm_cbe_2184_count = 0;
  float llvm_cbe_tmp__471;
  static  unsigned long long aesl_llvm_cbe_2185_count = 0;
  float *llvm_cbe_tmp__472;
  static  unsigned long long aesl_llvm_cbe_2186_count = 0;
  float llvm_cbe_tmp__473;
  static  unsigned long long aesl_llvm_cbe_2187_count = 0;
  float llvm_cbe_tmp__474;
  static  unsigned long long aesl_llvm_cbe_2188_count = 0;
  float llvm_cbe_tmp__475;
  static  unsigned long long aesl_llvm_cbe_2189_count = 0;
  static  unsigned long long aesl_llvm_cbe_2190_count = 0;
  static  unsigned long long aesl_llvm_cbe_2191_count = 0;
  static  unsigned long long aesl_llvm_cbe_2192_count = 0;
  static  unsigned long long aesl_llvm_cbe_2193_count = 0;
  unsigned int llvm_cbe_tmp__476;
  static  unsigned long long aesl_llvm_cbe_2194_count = 0;
  static  unsigned long long aesl_llvm_cbe_2195_count = 0;
  static  unsigned long long aesl_llvm_cbe_2196_count = 0;
  static  unsigned long long aesl_llvm_cbe_2197_count = 0;
  static  unsigned long long aesl_llvm_cbe_2198_count = 0;
  static  unsigned long long aesl_llvm_cbe_2199_count = 0;
  static  unsigned long long aesl_llvm_cbe_2200_count = 0;
  static  unsigned long long aesl_llvm_cbe_2201_count = 0;
  static  unsigned long long aesl_llvm_cbe_2202_count = 0;
  static  unsigned long long aesl_llvm_cbe_2203_count = 0;
  static  unsigned long long aesl_llvm_cbe_2204_count = 0;
  static  unsigned long long aesl_llvm_cbe_2205_count = 0;
  static  unsigned long long aesl_llvm_cbe_2206_count = 0;
  static  unsigned long long aesl_llvm_cbe_2207_count = 0;
  static  unsigned long long aesl_llvm_cbe_2208_count = 0;
  static  unsigned long long aesl_llvm_cbe_2209_count = 0;
  static  unsigned long long aesl_llvm_cbe_2210_count = 0;
  static  unsigned long long aesl_llvm_cbe_2211_count = 0;
  static  unsigned long long aesl_llvm_cbe_2212_count = 0;
  static  unsigned long long aesl_llvm_cbe_2213_count = 0;
  static  unsigned long long aesl_llvm_cbe_2214_count = 0;
  static  unsigned long long aesl_llvm_cbe_2215_count = 0;
  static  unsigned long long aesl_llvm_cbe_2216_count = 0;
  static  unsigned long long aesl_llvm_cbe_2217_count = 0;
  static  unsigned long long aesl_llvm_cbe_2218_count = 0;
  static  unsigned long long aesl_llvm_cbe_2219_count = 0;
  static  unsigned long long aesl_llvm_cbe_2220_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2221_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_2_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_1;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2222_count = 0;
  float llvm_cbe_tmp__477;
  float llvm_cbe_tmp__477__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2223_count = 0;
  unsigned long long llvm_cbe_tmp__478;
  static  unsigned long long aesl_llvm_cbe_2224_count = 0;
  float *llvm_cbe_tmp__479;
  static  unsigned long long aesl_llvm_cbe_2225_count = 0;
  float llvm_cbe_tmp__480;
  static  unsigned long long aesl_llvm_cbe_2226_count = 0;
  float *llvm_cbe_tmp__481;
  static  unsigned long long aesl_llvm_cbe_2227_count = 0;
  float llvm_cbe_tmp__482;
  static  unsigned long long aesl_llvm_cbe_2228_count = 0;
  float llvm_cbe_tmp__483;
  static  unsigned long long aesl_llvm_cbe_2229_count = 0;
  float llvm_cbe_tmp__484;
  static  unsigned long long aesl_llvm_cbe_2230_count = 0;
  static  unsigned long long aesl_llvm_cbe_2231_count = 0;
  static  unsigned long long aesl_llvm_cbe_2232_count = 0;
  static  unsigned long long aesl_llvm_cbe_2233_count = 0;
  static  unsigned long long aesl_llvm_cbe_2234_count = 0;
  unsigned int llvm_cbe_tmp__485;
  static  unsigned long long aesl_llvm_cbe_2235_count = 0;
  static  unsigned long long aesl_llvm_cbe_2236_count = 0;
  static  unsigned long long aesl_llvm_cbe_2237_count = 0;
  static  unsigned long long aesl_llvm_cbe_2238_count = 0;
  static  unsigned long long aesl_llvm_cbe_2239_count = 0;
  static  unsigned long long aesl_llvm_cbe_2240_count = 0;
  static  unsigned long long aesl_llvm_cbe_2241_count = 0;
  static  unsigned long long aesl_llvm_cbe_2242_count = 0;
  static  unsigned long long aesl_llvm_cbe_2243_count = 0;
  static  unsigned long long aesl_llvm_cbe_2244_count = 0;
  static  unsigned long long aesl_llvm_cbe_2245_count = 0;
  static  unsigned long long aesl_llvm_cbe_2246_count = 0;
  static  unsigned long long aesl_llvm_cbe_2247_count = 0;
  static  unsigned long long aesl_llvm_cbe_2248_count = 0;
  static  unsigned long long aesl_llvm_cbe_2249_count = 0;
  static  unsigned long long aesl_llvm_cbe_2250_count = 0;
  static  unsigned long long aesl_llvm_cbe_2251_count = 0;
  static  unsigned long long aesl_llvm_cbe_2252_count = 0;
  static  unsigned long long aesl_llvm_cbe_2253_count = 0;
  static  unsigned long long aesl_llvm_cbe_2254_count = 0;
  static  unsigned long long aesl_llvm_cbe_2255_count = 0;
  static  unsigned long long aesl_llvm_cbe_2256_count = 0;
  static  unsigned long long aesl_llvm_cbe_2257_count = 0;
  static  unsigned long long aesl_llvm_cbe_2258_count = 0;
  static  unsigned long long aesl_llvm_cbe_2259_count = 0;
  static  unsigned long long aesl_llvm_cbe_2260_count = 0;
  static  unsigned long long aesl_llvm_cbe_2261_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2262_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_227_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_227;
  unsigned int llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2263_count = 0;
  float llvm_cbe_tmp__486;
  float llvm_cbe_tmp__486__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2264_count = 0;
  unsigned long long llvm_cbe_tmp__487;
  static  unsigned long long aesl_llvm_cbe_2265_count = 0;
  float *llvm_cbe_tmp__488;
  static  unsigned long long aesl_llvm_cbe_2266_count = 0;
  float llvm_cbe_tmp__489;
  static  unsigned long long aesl_llvm_cbe_2267_count = 0;
  float *llvm_cbe_tmp__490;
  static  unsigned long long aesl_llvm_cbe_2268_count = 0;
  float llvm_cbe_tmp__491;
  static  unsigned long long aesl_llvm_cbe_2269_count = 0;
  float llvm_cbe_tmp__492;
  static  unsigned long long aesl_llvm_cbe_2270_count = 0;
  float llvm_cbe_tmp__493;
  static  unsigned long long aesl_llvm_cbe_2271_count = 0;
  static  unsigned long long aesl_llvm_cbe_2272_count = 0;
  static  unsigned long long aesl_llvm_cbe_2273_count = 0;
  static  unsigned long long aesl_llvm_cbe_2274_count = 0;
  static  unsigned long long aesl_llvm_cbe_2275_count = 0;
  unsigned int llvm_cbe_tmp__494;
  static  unsigned long long aesl_llvm_cbe_2276_count = 0;
  static  unsigned long long aesl_llvm_cbe_2277_count = 0;
  static  unsigned long long aesl_llvm_cbe_2278_count = 0;
  static  unsigned long long aesl_llvm_cbe_2279_count = 0;
  static  unsigned long long aesl_llvm_cbe_2280_count = 0;
  static  unsigned long long aesl_llvm_cbe_2281_count = 0;
  static  unsigned long long aesl_llvm_cbe_2282_count = 0;
  static  unsigned long long aesl_llvm_cbe_2283_count = 0;
  static  unsigned long long aesl_llvm_cbe_2284_count = 0;
  static  unsigned long long aesl_llvm_cbe_2285_count = 0;
  static  unsigned long long aesl_llvm_cbe_2286_count = 0;
  static  unsigned long long aesl_llvm_cbe_2287_count = 0;
  static  unsigned long long aesl_llvm_cbe_2288_count = 0;
  static  unsigned long long aesl_llvm_cbe_2289_count = 0;
  static  unsigned long long aesl_llvm_cbe_2290_count = 0;
  static  unsigned long long aesl_llvm_cbe_2291_count = 0;
  static  unsigned long long aesl_llvm_cbe_2292_count = 0;
  static  unsigned long long aesl_llvm_cbe_2293_count = 0;
  static  unsigned long long aesl_llvm_cbe_2294_count = 0;
  static  unsigned long long aesl_llvm_cbe_2295_count = 0;
  static  unsigned long long aesl_llvm_cbe_2296_count = 0;
  static  unsigned long long aesl_llvm_cbe_2297_count = 0;
  static  unsigned long long aesl_llvm_cbe_2298_count = 0;
  static  unsigned long long aesl_llvm_cbe_2299_count = 0;
  static  unsigned long long aesl_llvm_cbe_2300_count = 0;
  static  unsigned long long aesl_llvm_cbe_2301_count = 0;
  static  unsigned long long aesl_llvm_cbe_2302_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_2303_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_1_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_2;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2304_count = 0;
  float llvm_cbe_tmp__495;
  float llvm_cbe_tmp__495__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2305_count = 0;
  unsigned long long llvm_cbe_tmp__496;
  static  unsigned long long aesl_llvm_cbe_2306_count = 0;
  float *llvm_cbe_tmp__497;
  static  unsigned long long aesl_llvm_cbe_2307_count = 0;
  float llvm_cbe_tmp__498;
  static  unsigned long long aesl_llvm_cbe_2308_count = 0;
  float *llvm_cbe_tmp__499;
  static  unsigned long long aesl_llvm_cbe_2309_count = 0;
  float llvm_cbe_tmp__500;
  static  unsigned long long aesl_llvm_cbe_2310_count = 0;
  float llvm_cbe_tmp__501;
  static  unsigned long long aesl_llvm_cbe_2311_count = 0;
  float llvm_cbe_tmp__502;
  static  unsigned long long aesl_llvm_cbe_2312_count = 0;
  static  unsigned long long aesl_llvm_cbe_2313_count = 0;
  static  unsigned long long aesl_llvm_cbe_2314_count = 0;
  static  unsigned long long aesl_llvm_cbe_2315_count = 0;
  static  unsigned long long aesl_llvm_cbe_2316_count = 0;
  unsigned int llvm_cbe_tmp__503;
  static  unsigned long long aesl_llvm_cbe_2317_count = 0;
  static  unsigned long long aesl_llvm_cbe_2318_count = 0;
  static  unsigned long long aesl_llvm_cbe_2319_count = 0;
  static  unsigned long long aesl_llvm_cbe_2320_count = 0;
  static  unsigned long long aesl_llvm_cbe_2321_count = 0;
  static  unsigned long long aesl_llvm_cbe_2322_count = 0;
  static  unsigned long long aesl_llvm_cbe_2323_count = 0;
  static  unsigned long long aesl_llvm_cbe_2324_count = 0;
  static  unsigned long long aesl_llvm_cbe_2325_count = 0;
  static  unsigned long long aesl_llvm_cbe_2326_count = 0;
  static  unsigned long long aesl_llvm_cbe_2327_count = 0;
  static  unsigned long long aesl_llvm_cbe_2328_count = 0;
  static  unsigned long long aesl_llvm_cbe_2329_count = 0;
  static  unsigned long long aesl_llvm_cbe_2330_count = 0;
  static  unsigned long long aesl_llvm_cbe_2331_count = 0;
  static  unsigned long long aesl_llvm_cbe_2332_count = 0;
  static  unsigned long long aesl_llvm_cbe_2333_count = 0;
  static  unsigned long long aesl_llvm_cbe_2334_count = 0;
  static  unsigned long long aesl_llvm_cbe_2335_count = 0;
  static  unsigned long long aesl_llvm_cbe_2336_count = 0;
  static  unsigned long long aesl_llvm_cbe_2337_count = 0;
  static  unsigned long long aesl_llvm_cbe_2338_count = 0;
  static  unsigned long long aesl_llvm_cbe_2339_count = 0;
  static  unsigned long long aesl_llvm_cbe_2340_count = 0;
  static  unsigned long long aesl_llvm_cbe_2341_count = 0;
  static  unsigned long long aesl_llvm_cbe_2342_count = 0;
  static  unsigned long long aesl_llvm_cbe_2343_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_2344_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_2_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_2;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2345_count = 0;
  float llvm_cbe_tmp__504;
  float llvm_cbe_tmp__504__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2346_count = 0;
  unsigned long long llvm_cbe_tmp__505;
  static  unsigned long long aesl_llvm_cbe_2347_count = 0;
  float *llvm_cbe_tmp__506;
  static  unsigned long long aesl_llvm_cbe_2348_count = 0;
  float llvm_cbe_tmp__507;
  static  unsigned long long aesl_llvm_cbe_2349_count = 0;
  float *llvm_cbe_tmp__508;
  static  unsigned long long aesl_llvm_cbe_2350_count = 0;
  float llvm_cbe_tmp__509;
  static  unsigned long long aesl_llvm_cbe_2351_count = 0;
  float llvm_cbe_tmp__510;
  static  unsigned long long aesl_llvm_cbe_2352_count = 0;
  float llvm_cbe_tmp__511;
  static  unsigned long long aesl_llvm_cbe_2353_count = 0;
  static  unsigned long long aesl_llvm_cbe_2354_count = 0;
  static  unsigned long long aesl_llvm_cbe_2355_count = 0;
  static  unsigned long long aesl_llvm_cbe_2356_count = 0;
  static  unsigned long long aesl_llvm_cbe_2357_count = 0;
  unsigned int llvm_cbe_tmp__512;
  static  unsigned long long aesl_llvm_cbe_2358_count = 0;
  static  unsigned long long aesl_llvm_cbe_2359_count = 0;
  static  unsigned long long aesl_llvm_cbe_2360_count = 0;
  static  unsigned long long aesl_llvm_cbe_2361_count = 0;
  static  unsigned long long aesl_llvm_cbe_2362_count = 0;
  static  unsigned long long aesl_llvm_cbe_2363_count = 0;
  static  unsigned long long aesl_llvm_cbe_2364_count = 0;
  static  unsigned long long aesl_llvm_cbe_2365_count = 0;
  static  unsigned long long aesl_llvm_cbe_2366_count = 0;
  static  unsigned long long aesl_llvm_cbe_2367_count = 0;
  static  unsigned long long aesl_llvm_cbe_2368_count = 0;
  static  unsigned long long aesl_llvm_cbe_2369_count = 0;
  static  unsigned long long aesl_llvm_cbe_2370_count = 0;
  static  unsigned long long aesl_llvm_cbe_2371_count = 0;
  static  unsigned long long aesl_llvm_cbe_2372_count = 0;
  static  unsigned long long aesl_llvm_cbe_2373_count = 0;
  static  unsigned long long aesl_llvm_cbe_2374_count = 0;
  static  unsigned long long aesl_llvm_cbe_2375_count = 0;
  static  unsigned long long aesl_llvm_cbe_2376_count = 0;
  static  unsigned long long aesl_llvm_cbe_2377_count = 0;
  static  unsigned long long aesl_llvm_cbe_2378_count = 0;
  static  unsigned long long aesl_llvm_cbe_2379_count = 0;
  static  unsigned long long aesl_llvm_cbe_2380_count = 0;
  static  unsigned long long aesl_llvm_cbe_2381_count = 0;
  static  unsigned long long aesl_llvm_cbe_2382_count = 0;
  static  unsigned long long aesl_llvm_cbe_2383_count = 0;
  static  unsigned long long aesl_llvm_cbe_2384_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_2385_count = 0;
  static  unsigned long long aesl_llvm_cbe_2386_count = 0;
  static  unsigned long long aesl_llvm_cbe_2387_count = 0;
  static  unsigned long long aesl_llvm_cbe_2388_count = 0;
  static  unsigned long long aesl_llvm_cbe_2389_count = 0;
  static  unsigned long long aesl_llvm_cbe_2390_count = 0;
  static  unsigned long long aesl_llvm_cbe_2391_count = 0;
  static  unsigned long long aesl_llvm_cbe_2392_count = 0;
  static  unsigned long long aesl_llvm_cbe_2393_count = 0;
  static  unsigned long long aesl_llvm_cbe_2394_count = 0;
  static  unsigned long long aesl_llvm_cbe_2395_count = 0;
  static  unsigned long long aesl_llvm_cbe_2396_count = 0;
  static  unsigned long long aesl_llvm_cbe_2397_count = 0;
  static  unsigned long long aesl_llvm_cbe_2398_count = 0;
  static  unsigned long long aesl_llvm_cbe_2399_count = 0;
  static  unsigned long long aesl_llvm_cbe_2400_count = 0;
  static  unsigned long long aesl_llvm_cbe_2401_count = 0;
  float llvm_cbe_tmp__513;
  static  unsigned long long aesl_llvm_cbe_2402_count = 0;
  float *llvm_cbe_tmp__514;
  static  unsigned long long aesl_llvm_cbe_2403_count = 0;
  static  unsigned long long aesl_llvm_cbe_2404_count = 0;
  unsigned int llvm_cbe_tmp__515;
  static  unsigned long long aesl_llvm_cbe_2405_count = 0;
  static  unsigned long long aesl_llvm_cbe_2406_count = 0;
  static  unsigned long long aesl_llvm_cbe_2407_count = 0;
  static  unsigned long long aesl_llvm_cbe_2408_count = 0;
  static  unsigned long long aesl_llvm_cbe_2409_count = 0;
  static  unsigned long long aesl_llvm_cbe_2410_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond29_count = 0;
  static  unsigned long long aesl_llvm_cbe_2411_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv3\n");
  llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader17;

  do {     /* Syntactic loop '.preheader17' to make GCC happy */
llvm_cbe__2e_preheader17:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i32 [ 0, %%0 ], [ %%49, %%48  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned int )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%X",llvm_cbe_storemerge19);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__440);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge19 to i64, !dbg !19 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1840_count);
  llvm_cbe_tmp__398 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__398);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add nsw i32 %%storemerge19, -2, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1842_count);
  llvm_cbe_tmp__399 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__399&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1843_count);
  llvm_cbe_tmp__400 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__399);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__400);
  llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader15;

llvm_cbe_tmp__516:
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add nsw i32 %%storemerge19, 1, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2049_count);
  llvm_cbe_tmp__440 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__440&4294967295ull)));
  if (((llvm_cbe_tmp__440&4294967295U) == (14u&4294967295U))) {
    goto llvm_cbe_tmp__517;
  } else {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__440;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  }

  do {     /* Syntactic loop '.preheader15' to make GCC happy */
llvm_cbe__2e_preheader15:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge118 = phi i32 [ 0, %%.preheader17 ], [ %%47, %%.loopexit  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge118_count);
  llvm_cbe_storemerge118 = (unsigned int )llvm_cbe_storemerge118__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge118 = 0x%X",llvm_cbe_storemerge118);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__439);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge118 to i64, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1871_count);
  llvm_cbe_tmp__401 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge118);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__401);
  llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__518;

llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = add nsw i32 %%storemerge118, 1, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2037_count);
  llvm_cbe_tmp__439 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__439&4294967295ull)));
  if (((llvm_cbe_tmp__439&4294967295U) == (14u&4294967295U))) {
    goto llvm_cbe_tmp__516;
  } else {
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__439;   /* for PHI node */
    goto llvm_cbe__2e_preheader15;
  }

llvm_cbe_tmp__519:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = and i1 %%2, %%31, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((signed int )llvm_cbe_storemerge19) > ((signed int )1u)) & (((signed int )llvm_cbe_storemerge118) > ((signed int )1u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe__2e_preheader13;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__518:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge216 = phi i32 [ 0, %%.preheader15 ], [ %%29, %%6  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge216_count);
  llvm_cbe_storemerge216 = (unsigned int )llvm_cbe_storemerge216__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge216 = 0x%X",llvm_cbe_storemerge216);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__424);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%storemerge216 to i64, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1873_count);
  llvm_cbe_tmp__402 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge216);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__402);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1874_count);
  llvm_cbe_tmp__403 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__402) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load float* %%8, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1875_count);
  llvm_cbe_tmp__404 = (float )*llvm_cbe_tmp__403;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__404, *(int*)(&llvm_cbe_tmp__404));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1876_count);
  llvm_cbe_tmp__405 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%9, float* %%10, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1877_count);
  *llvm_cbe_tmp__405 = llvm_cbe_tmp__404;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__404);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1878_count);
  llvm_cbe_tmp__406 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__402) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1879_count);
  llvm_cbe_tmp__407 = (float )*llvm_cbe_tmp__406;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__407, *(int*)(&llvm_cbe_tmp__407));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%12, float* %%8, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1880_count);
  *llvm_cbe_tmp__403 = llvm_cbe_tmp__407;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__407);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1881_count);
  llvm_cbe_tmp__408 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__402) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1882_count);
  llvm_cbe_tmp__409 = (float )*llvm_cbe_tmp__408;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__409, *(int*)(&llvm_cbe_tmp__409));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1883_count);
  llvm_cbe_tmp__410 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%14, float* %%15, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1884_count);
  *llvm_cbe_tmp__410 = llvm_cbe_tmp__409;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__409);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1885_count);
  llvm_cbe_tmp__411 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__402) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load float* %%16, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1886_count);
  llvm_cbe_tmp__412 = (float )*llvm_cbe_tmp__411;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__412, *(int*)(&llvm_cbe_tmp__412));

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%17, float* %%13, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1887_count);
  *llvm_cbe_tmp__408 = llvm_cbe_tmp__412;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__412);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1888_count);
  llvm_cbe_tmp__413 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__402) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load float* %%18, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1889_count);
  llvm_cbe_tmp__414 = (float )*llvm_cbe_tmp__413;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__414, *(int*)(&llvm_cbe_tmp__414));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1890_count);
  llvm_cbe_tmp__415 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%19, float* %%20, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1891_count);
  *llvm_cbe_tmp__415 = llvm_cbe_tmp__414;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__414);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1892_count);
  llvm_cbe_tmp__416 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__402) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1893_count);
  llvm_cbe_tmp__417 = (float )*llvm_cbe_tmp__416;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__417, *(int*)(&llvm_cbe_tmp__417));

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%22, float* %%18, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1894_count);
  *llvm_cbe_tmp__413 = llvm_cbe_tmp__417;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__417);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [2 x [14 x [16 x float]]]* @aesl_internal_conv3.line_buf, i64 0, i64 0, i64 %%5, i64 %%7, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1895_count);
  llvm_cbe_tmp__418 = (float *)(&aesl_internal_conv3_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__401))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__401));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv3.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__401) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv3.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__402) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv3.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* %%23, align 4, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1896_count);
  llvm_cbe_tmp__419 = (float )*llvm_cbe_tmp__418;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__419, *(int*)(&llvm_cbe_tmp__419));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [2 x [14 x [16 x float]]]* @aesl_internal_conv3.line_buf, i64 0, i64 1, i64 %%5, i64 %%7, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1899_count);
  llvm_cbe_tmp__420 = (float *)(&aesl_internal_conv3_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__401))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__402))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__401));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv3.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__401) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv3.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__402) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv3.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load float* %%25, align 4, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1900_count);
  llvm_cbe_tmp__421 = (float )*llvm_cbe_tmp__420;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__421, *(int*)(&llvm_cbe_tmp__421));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%1, i64 %%5, i64 %%7, !dbg !19 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1904_count);
  llvm_cbe_tmp__422 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__398))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__401))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__402))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__398));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__401));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__401) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__402) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !19 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1905_count);
  llvm_cbe_tmp__423 = (float )*llvm_cbe_tmp__422;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__423, *(int*)(&llvm_cbe_tmp__423));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv3.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__401) < 14 && "Write access out of array 'aesl_internal_conv3.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'aesl_internal_conv3.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%23, align 4, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1909_count);
  *llvm_cbe_tmp__418 = llvm_cbe_tmp__421;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__421);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv3.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__401) < 14 && "Write access out of array 'aesl_internal_conv3.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'aesl_internal_conv3.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%25, align 4, !dbg !23 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1910_count);
  *llvm_cbe_tmp__420 = llvm_cbe_tmp__423;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__423);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* %%11, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1911_count);
  *llvm_cbe_tmp__406 = llvm_cbe_tmp__419;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__419);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%16, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1912_count);
  *llvm_cbe_tmp__411 = llvm_cbe_tmp__421;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__421);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__402) < 16 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%21, align 4, !dbg !24 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1913_count);
  *llvm_cbe_tmp__416 = llvm_cbe_tmp__423;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__423);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add nsw i32 %%storemerge216, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1914_count);
  llvm_cbe_tmp__424 = (unsigned int )((unsigned int )(llvm_cbe_storemerge216&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__424&4294967295ull)));
  if (((llvm_cbe_tmp__424&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__519;
  } else {
    llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__424;   /* for PHI node */
    goto llvm_cbe_tmp__518;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader8' to make GCC happy */
llvm_cbe__2e_preheader8:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge314 = phi i32 [ 0, %%.preheader13 ], [ %%127, %%123  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge314_count);
  llvm_cbe_storemerge314 = (unsigned int )llvm_cbe_storemerge314__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge314 = 0x%X",llvm_cbe_storemerge314);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__515);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%storemerge314 to i64, !dbg !22 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1953_count);
  llvm_cbe_tmp__427 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge314);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__427);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds float* %%bias, i64 %%34, !dbg !22 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1954_count);
  llvm_cbe_tmp__428 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__427))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !22 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1955_count);
  llvm_cbe_tmp__429 = (float )*llvm_cbe_tmp__428;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__429, *(int*)(&llvm_cbe_tmp__429));
  llvm_cbe_storemerge67__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__430__PHI_TEMPORARY = (float )llvm_cbe_tmp__429;   /* for PHI node */
  goto llvm_cbe_tmp__520;

llvm_cbe_tmp__521:
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = select i1 %%124, float 0.000000e+00, float %%121, !dbg !26 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2401_count);
  llvm_cbe_tmp__513 = (float )(((llvm_fcmp_olt(llvm_cbe_tmp__511, 0x0p0))) ? ((float )0x0p0) : ((float )llvm_cbe_tmp__511));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__513, *(int*)(&llvm_cbe_tmp__513));
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = getelementptr inbounds [12 x [32 x float]]* %%out, i64 %%4, i64 %%33, i64 %%34, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2402_count);
  llvm_cbe_tmp__514 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__400))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__426))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__427))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__400));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__426));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__426) < 12 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__427) < 32 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%125, float* %%126, align 4, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2403_count);
  *llvm_cbe_tmp__514 = llvm_cbe_tmp__513;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__513);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = add nsw i32 %%storemerge314, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2404_count);
  llvm_cbe_tmp__515 = (unsigned int )((unsigned int )(llvm_cbe_storemerge314&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__515&4294967295ull)));
  if (((llvm_cbe_tmp__515&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__515;   /* for PHI node */
    goto llvm_cbe__2e_preheader8;
  }

  do {     /* Syntactic loop '.preheader.2.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_2_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.2.2 = phi i32 [ %%122, %%.preheader.2.2 ], [ 0, %%.preheader.1.2  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge67_2e_2_2e_2_count);
  llvm_cbe_storemerge67_2e_2_2e_2 = (unsigned int )llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.2.2 = 0x%X",llvm_cbe_storemerge67_2e_2_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__512);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = phi float [ %%121, %%.preheader.2.2 ], [ %%112, %%.preheader.1.2  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2345_count);
  llvm_cbe_tmp__504 = (float )llvm_cbe_tmp__504__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__504);
printf("\n = %f",llvm_cbe_tmp__511);
printf("\n = %f",llvm_cbe_tmp__502);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = sext i32 %%storemerge67.2.2 to i64, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2346_count);
  llvm_cbe_tmp__505 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_2_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__505);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 %%115, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2347_count);
  llvm_cbe_tmp__506 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__505))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__505));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__505) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load float* %%116, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2348_count);
  llvm_cbe_tmp__507 = (float )*llvm_cbe_tmp__506;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__507, *(int*)(&llvm_cbe_tmp__507));
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%115, i64 2, i64 2, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2349_count);
  llvm_cbe_tmp__508 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__427))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__505))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__505));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__505) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = load float* %%118, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2350_count);
  llvm_cbe_tmp__509 = (float )*llvm_cbe_tmp__508;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__509, *(int*)(&llvm_cbe_tmp__509));
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = fmul float %%117, %%119, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2351_count);
  llvm_cbe_tmp__510 = (float )((float )(llvm_cbe_tmp__507 * llvm_cbe_tmp__509));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__510, *(int*)(&llvm_cbe_tmp__510));
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = fadd float %%114, %%120, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2352_count);
  llvm_cbe_tmp__511 = (float )((float )(llvm_cbe_tmp__504 + llvm_cbe_tmp__510));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__511, *(int*)(&llvm_cbe_tmp__511));
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = add nsw i32 %%storemerge67.2.2, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2357_count);
  llvm_cbe_tmp__512 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_2_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__512&4294967295ull)));
  if (((llvm_cbe_tmp__512&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__521;
  } else {
    llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__512;   /* for PHI node */
    llvm_cbe_tmp__504__PHI_TEMPORARY = (float )llvm_cbe_tmp__511;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader.2.2' */
  do {     /* Syntactic loop '.preheader.1.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_1_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.1.2 = phi i32 [ %%113, %%.preheader.1.2 ], [ 0, %%.preheader8.2  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge67_2e_1_2e_2_count);
  llvm_cbe_storemerge67_2e_1_2e_2 = (unsigned int )llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.1.2 = 0x%X",llvm_cbe_storemerge67_2e_1_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__503);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = phi float [ %%112, %%.preheader.1.2 ], [ %%103, %%.preheader8.2  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2304_count);
  llvm_cbe_tmp__495 = (float )llvm_cbe_tmp__495__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__495);
printf("\n = %f",llvm_cbe_tmp__502);
printf("\n = %f",llvm_cbe_tmp__493);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = sext i32 %%storemerge67.1.2 to i64, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2305_count);
  llvm_cbe_tmp__496 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_1_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__496);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 %%106, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2306_count);
  llvm_cbe_tmp__497 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__496))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__496));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__496) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = load float* %%107, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2307_count);
  llvm_cbe_tmp__498 = (float )*llvm_cbe_tmp__497;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__498, *(int*)(&llvm_cbe_tmp__498));
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%106, i64 2, i64 1, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2308_count);
  llvm_cbe_tmp__499 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__427))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__496))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__496));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__496) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = load float* %%109, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2309_count);
  llvm_cbe_tmp__500 = (float )*llvm_cbe_tmp__499;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__500, *(int*)(&llvm_cbe_tmp__500));
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = fmul float %%108, %%110, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2310_count);
  llvm_cbe_tmp__501 = (float )((float )(llvm_cbe_tmp__498 * llvm_cbe_tmp__500));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__501, *(int*)(&llvm_cbe_tmp__501));
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = fadd float %%105, %%111, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2311_count);
  llvm_cbe_tmp__502 = (float )((float )(llvm_cbe_tmp__495 + llvm_cbe_tmp__501));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__502, *(int*)(&llvm_cbe_tmp__502));
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = add nsw i32 %%storemerge67.1.2, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2316_count);
  llvm_cbe_tmp__503 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_1_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__503&4294967295ull)));
  if (((llvm_cbe_tmp__503&4294967295U) == (16u&4294967295U))) {
    llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__504__PHI_TEMPORARY = (float )llvm_cbe_tmp__502;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__503;   /* for PHI node */
    llvm_cbe_tmp__495__PHI_TEMPORARY = (float )llvm_cbe_tmp__502;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader.1.2' */
  do {     /* Syntactic loop '.preheader8.2' to make GCC happy */
llvm_cbe__2e_preheader8_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.227 = phi i32 [ %%104, %%.preheader8.2 ], [ 0, %%.preheader.2.1  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge67_2e_227_count);
  llvm_cbe_storemerge67_2e_227 = (unsigned int )llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.227 = 0x%X",llvm_cbe_storemerge67_2e_227);
printf("\n = 0x%X",llvm_cbe_tmp__494);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = phi float [ %%103, %%.preheader8.2 ], [ %%94, %%.preheader.2.1  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2263_count);
  llvm_cbe_tmp__486 = (float )llvm_cbe_tmp__486__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__486);
printf("\n = %f",llvm_cbe_tmp__493);
printf("\n = %f",llvm_cbe_tmp__484);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = sext i32 %%storemerge67.227 to i64, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2264_count);
  llvm_cbe_tmp__487 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_227);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__487);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 %%97, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2265_count);
  llvm_cbe_tmp__488 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__487))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__487));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__487) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = load float* %%98, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2266_count);
  llvm_cbe_tmp__489 = (float )*llvm_cbe_tmp__488;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__489, *(int*)(&llvm_cbe_tmp__489));
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%97, i64 2, i64 0, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2267_count);
  llvm_cbe_tmp__490 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__427))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__487))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__487));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__487) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = load float* %%100, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2268_count);
  llvm_cbe_tmp__491 = (float )*llvm_cbe_tmp__490;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__491, *(int*)(&llvm_cbe_tmp__491));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = fmul float %%99, %%101, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2269_count);
  llvm_cbe_tmp__492 = (float )((float )(llvm_cbe_tmp__489 * llvm_cbe_tmp__491));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__492, *(int*)(&llvm_cbe_tmp__492));
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = fadd float %%96, %%102, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2270_count);
  llvm_cbe_tmp__493 = (float )((float )(llvm_cbe_tmp__486 + llvm_cbe_tmp__492));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__493, *(int*)(&llvm_cbe_tmp__493));
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = add nsw i32 %%storemerge67.227, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2275_count);
  llvm_cbe_tmp__494 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_227&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__494&4294967295ull)));
  if (((llvm_cbe_tmp__494&4294967295U) == (16u&4294967295U))) {
    llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__495__PHI_TEMPORARY = (float )llvm_cbe_tmp__493;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__494;   /* for PHI node */
    llvm_cbe_tmp__486__PHI_TEMPORARY = (float )llvm_cbe_tmp__493;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader8.2' */
  do {     /* Syntactic loop '.preheader.2.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_2_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.2.1 = phi i32 [ %%95, %%.preheader.2.1 ], [ 0, %%.preheader.1.1  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge67_2e_2_2e_1_count);
  llvm_cbe_storemerge67_2e_2_2e_1 = (unsigned int )llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.2.1 = 0x%X",llvm_cbe_storemerge67_2e_2_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__485);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = phi float [ %%94, %%.preheader.2.1 ], [ %%85, %%.preheader.1.1  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2222_count);
  llvm_cbe_tmp__477 = (float )llvm_cbe_tmp__477__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__477);
printf("\n = %f",llvm_cbe_tmp__484);
printf("\n = %f",llvm_cbe_tmp__475);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = sext i32 %%storemerge67.2.1 to i64, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2223_count);
  llvm_cbe_tmp__478 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_2_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__478);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 %%88, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2224_count);
  llvm_cbe_tmp__479 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__478))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__478));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__478) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load float* %%89, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2225_count);
  llvm_cbe_tmp__480 = (float )*llvm_cbe_tmp__479;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__480, *(int*)(&llvm_cbe_tmp__480));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%88, i64 1, i64 2, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2226_count);
  llvm_cbe_tmp__481 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__427))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__478))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__478));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__478) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = load float* %%91, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2227_count);
  llvm_cbe_tmp__482 = (float )*llvm_cbe_tmp__481;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__482, *(int*)(&llvm_cbe_tmp__482));
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = fmul float %%90, %%92, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2228_count);
  llvm_cbe_tmp__483 = (float )((float )(llvm_cbe_tmp__480 * llvm_cbe_tmp__482));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__483, *(int*)(&llvm_cbe_tmp__483));
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = fadd float %%87, %%93, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2229_count);
  llvm_cbe_tmp__484 = (float )((float )(llvm_cbe_tmp__477 + llvm_cbe_tmp__483));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__484, *(int*)(&llvm_cbe_tmp__484));
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = add nsw i32 %%storemerge67.2.1, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2234_count);
  llvm_cbe_tmp__485 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_2_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__485&4294967295ull)));
  if (((llvm_cbe_tmp__485&4294967295U) == (16u&4294967295U))) {
    llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__486__PHI_TEMPORARY = (float )llvm_cbe_tmp__484;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__485;   /* for PHI node */
    llvm_cbe_tmp__477__PHI_TEMPORARY = (float )llvm_cbe_tmp__484;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader.2.1' */
  do {     /* Syntactic loop '.preheader.1.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_1_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.1.1 = phi i32 [ %%86, %%.preheader.1.1 ], [ 0, %%.preheader8.1  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge67_2e_1_2e_1_count);
  llvm_cbe_storemerge67_2e_1_2e_1 = (unsigned int )llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.1.1 = 0x%X",llvm_cbe_storemerge67_2e_1_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__476);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = phi float [ %%85, %%.preheader.1.1 ], [ %%76, %%.preheader8.1  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2181_count);
  llvm_cbe_tmp__468 = (float )llvm_cbe_tmp__468__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__468);
printf("\n = %f",llvm_cbe_tmp__475);
printf("\n = %f",llvm_cbe_tmp__466);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = sext i32 %%storemerge67.1.1 to i64, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2182_count);
  llvm_cbe_tmp__469 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_1_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__469);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 %%79, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2183_count);
  llvm_cbe_tmp__470 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__469))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__469));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__469) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load float* %%80, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2184_count);
  llvm_cbe_tmp__471 = (float )*llvm_cbe_tmp__470;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__471, *(int*)(&llvm_cbe_tmp__471));
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%79, i64 1, i64 1, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2185_count);
  llvm_cbe_tmp__472 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__427))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__469))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__469));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__469) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load float* %%82, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2186_count);
  llvm_cbe_tmp__473 = (float )*llvm_cbe_tmp__472;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__473, *(int*)(&llvm_cbe_tmp__473));
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = fmul float %%81, %%83, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2187_count);
  llvm_cbe_tmp__474 = (float )((float )(llvm_cbe_tmp__471 * llvm_cbe_tmp__473));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__474, *(int*)(&llvm_cbe_tmp__474));
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = fadd float %%78, %%84, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2188_count);
  llvm_cbe_tmp__475 = (float )((float )(llvm_cbe_tmp__468 + llvm_cbe_tmp__474));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__475, *(int*)(&llvm_cbe_tmp__475));
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = add nsw i32 %%storemerge67.1.1, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2193_count);
  llvm_cbe_tmp__476 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_1_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__476&4294967295ull)));
  if (((llvm_cbe_tmp__476&4294967295U) == (16u&4294967295U))) {
    llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__477__PHI_TEMPORARY = (float )llvm_cbe_tmp__475;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_1;
  } else {
    llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__476;   /* for PHI node */
    llvm_cbe_tmp__468__PHI_TEMPORARY = (float )llvm_cbe_tmp__475;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader.1.1' */
  do {     /* Syntactic loop '.preheader8.1' to make GCC happy */
llvm_cbe__2e_preheader8_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.124 = phi i32 [ %%77, %%.preheader8.1 ], [ 0, %%.preheader.2  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge67_2e_124_count);
  llvm_cbe_storemerge67_2e_124 = (unsigned int )llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.124 = 0x%X",llvm_cbe_storemerge67_2e_124);
printf("\n = 0x%X",llvm_cbe_tmp__467);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = phi float [ %%76, %%.preheader8.1 ], [ %%67, %%.preheader.2  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2140_count);
  llvm_cbe_tmp__459 = (float )llvm_cbe_tmp__459__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__459);
printf("\n = %f",llvm_cbe_tmp__466);
printf("\n = %f",llvm_cbe_tmp__457);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = sext i32 %%storemerge67.124 to i64, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2141_count);
  llvm_cbe_tmp__460 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_124);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__460);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 %%70, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2142_count);
  llvm_cbe_tmp__461 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__460))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__460));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__460) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load float* %%71, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2143_count);
  llvm_cbe_tmp__462 = (float )*llvm_cbe_tmp__461;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__462, *(int*)(&llvm_cbe_tmp__462));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%70, i64 1, i64 0, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2144_count);
  llvm_cbe_tmp__463 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__427))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__460))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__460));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__460) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load float* %%73, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2145_count);
  llvm_cbe_tmp__464 = (float )*llvm_cbe_tmp__463;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__464, *(int*)(&llvm_cbe_tmp__464));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = fmul float %%72, %%74, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2146_count);
  llvm_cbe_tmp__465 = (float )((float )(llvm_cbe_tmp__462 * llvm_cbe_tmp__464));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__465, *(int*)(&llvm_cbe_tmp__465));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = fadd float %%69, %%75, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2147_count);
  llvm_cbe_tmp__466 = (float )((float )(llvm_cbe_tmp__459 + llvm_cbe_tmp__465));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__466, *(int*)(&llvm_cbe_tmp__466));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add nsw i32 %%storemerge67.124, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2152_count);
  llvm_cbe_tmp__467 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_124&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__467&4294967295ull)));
  if (((llvm_cbe_tmp__467&4294967295U) == (16u&4294967295U))) {
    llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__468__PHI_TEMPORARY = (float )llvm_cbe_tmp__466;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_1;
  } else {
    llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__467;   /* for PHI node */
    llvm_cbe_tmp__459__PHI_TEMPORARY = (float )llvm_cbe_tmp__466;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader8.1' */
  do {     /* Syntactic loop '.preheader.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.2 = phi i32 [ %%68, %%.preheader.2 ], [ 0, %%.preheader.1  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge67_2e_2_count);
  llvm_cbe_storemerge67_2e_2 = (unsigned int )llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.2 = 0x%X",llvm_cbe_storemerge67_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__458);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = phi float [ %%67, %%.preheader.2 ], [ %%58, %%.preheader.1  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2099_count);
  llvm_cbe_tmp__450 = (float )llvm_cbe_tmp__450__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__450);
printf("\n = %f",llvm_cbe_tmp__457);
printf("\n = %f",llvm_cbe_tmp__448);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = sext i32 %%storemerge67.2 to i64, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2100_count);
  llvm_cbe_tmp__451 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__451);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 %%61, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2101_count);
  llvm_cbe_tmp__452 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__451))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__451));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__451) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load float* %%62, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2102_count);
  llvm_cbe_tmp__453 = (float )*llvm_cbe_tmp__452;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__453, *(int*)(&llvm_cbe_tmp__453));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%61, i64 0, i64 2, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2103_count);
  llvm_cbe_tmp__454 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__427))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__451))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__451));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__451) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = load float* %%64, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2104_count);
  llvm_cbe_tmp__455 = (float )*llvm_cbe_tmp__454;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__455, *(int*)(&llvm_cbe_tmp__455));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = fmul float %%63, %%65, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2105_count);
  llvm_cbe_tmp__456 = (float )((float )(llvm_cbe_tmp__453 * llvm_cbe_tmp__455));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__456, *(int*)(&llvm_cbe_tmp__456));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = fadd float %%60, %%66, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2106_count);
  llvm_cbe_tmp__457 = (float )((float )(llvm_cbe_tmp__450 + llvm_cbe_tmp__456));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__457, *(int*)(&llvm_cbe_tmp__457));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = add nsw i32 %%storemerge67.2, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2111_count);
  llvm_cbe_tmp__458 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__458&4294967295ull)));
  if (((llvm_cbe_tmp__458&4294967295U) == (16u&4294967295U))) {
    llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__459__PHI_TEMPORARY = (float )llvm_cbe_tmp__457;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_1;
  } else {
    llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__458;   /* for PHI node */
    llvm_cbe_tmp__450__PHI_TEMPORARY = (float )llvm_cbe_tmp__457;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader.2' */
  do {     /* Syntactic loop '.preheader.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.1 = phi i32 [ %%59, %%.preheader.1 ], [ 0, %%37  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge67_2e_1_count);
  llvm_cbe_storemerge67_2e_1 = (unsigned int )llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.1 = 0x%X",llvm_cbe_storemerge67_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__449);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = phi float [ %%58, %%.preheader.1 ], [ %%45, %%37  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2058_count);
  llvm_cbe_tmp__441 = (float )llvm_cbe_tmp__441__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__441);
printf("\n = %f",llvm_cbe_tmp__448);
printf("\n = %f",llvm_cbe_tmp__437);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = sext i32 %%storemerge67.1 to i64, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2059_count);
  llvm_cbe_tmp__442 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__442);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 %%52, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2060_count);
  llvm_cbe_tmp__443 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__442))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__442));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__442) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2061_count);
  llvm_cbe_tmp__444 = (float )*llvm_cbe_tmp__443;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__444, *(int*)(&llvm_cbe_tmp__444));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%52, i64 0, i64 1, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2062_count);
  llvm_cbe_tmp__445 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__427))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__442))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__442));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__442) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2063_count);
  llvm_cbe_tmp__446 = (float )*llvm_cbe_tmp__445;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__446, *(int*)(&llvm_cbe_tmp__446));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = fmul float %%54, %%56, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2064_count);
  llvm_cbe_tmp__447 = (float )((float )(llvm_cbe_tmp__444 * llvm_cbe_tmp__446));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__447, *(int*)(&llvm_cbe_tmp__447));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = fadd float %%51, %%57, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2065_count);
  llvm_cbe_tmp__448 = (float )((float )(llvm_cbe_tmp__441 + llvm_cbe_tmp__447));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__448, *(int*)(&llvm_cbe_tmp__448));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add nsw i32 %%storemerge67.1, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2070_count);
  llvm_cbe_tmp__449 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__449&4294967295ull)));
  if (((llvm_cbe_tmp__449&4294967295U) == (16u&4294967295U))) {
    llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__450__PHI_TEMPORARY = (float )llvm_cbe_tmp__448;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__449;   /* for PHI node */
    llvm_cbe_tmp__441__PHI_TEMPORARY = (float )llvm_cbe_tmp__448;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader.1' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__520:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67 = phi i32 [ 0, %%.preheader8 ], [ %%46, %%37  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge67_count);
  llvm_cbe_storemerge67 = (unsigned int )llvm_cbe_storemerge67__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67 = 0x%X",llvm_cbe_storemerge67);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__438);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = phi float [ %%36, %%.preheader8 ], [ %%45, %%37  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1996_count);
  llvm_cbe_tmp__430 = (float )llvm_cbe_tmp__430__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__430);
printf("\n = %f",llvm_cbe_tmp__429);
printf("\n = %f",llvm_cbe_tmp__437);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = sext i32 %%storemerge67 to i64, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1997_count);
  llvm_cbe_tmp__431 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__431);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds [3 x [3 x [16 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 %%39, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1998_count);
  llvm_cbe_tmp__432 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__431))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__431));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__431) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load float* %%40, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1999_count);
  llvm_cbe_tmp__433 = (float )*llvm_cbe_tmp__432;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__433, *(int*)(&llvm_cbe_tmp__433));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%39, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2000_count);
  llvm_cbe_tmp__434 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__427))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__431))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__431));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__431) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* %%42, align 4, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2001_count);
  llvm_cbe_tmp__435 = (float )*llvm_cbe_tmp__434;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__435, *(int*)(&llvm_cbe_tmp__435));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = fmul float %%41, %%43, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2002_count);
  llvm_cbe_tmp__436 = (float )((float )(llvm_cbe_tmp__433 * llvm_cbe_tmp__435));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__436, *(int*)(&llvm_cbe_tmp__436));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = fadd float %%38, %%44, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2003_count);
  llvm_cbe_tmp__437 = (float )((float )(llvm_cbe_tmp__430 + llvm_cbe_tmp__436));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__437, *(int*)(&llvm_cbe_tmp__437));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = add nsw i32 %%storemerge67, 1, !dbg !25 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_2008_count);
  llvm_cbe_tmp__438 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__438&4294967295ull)));
  if (((llvm_cbe_tmp__438&4294967295U) == (16u&4294967295U))) {
    llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__441__PHI_TEMPORARY = (float )llvm_cbe_tmp__437;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1;
  } else {
    llvm_cbe_storemerge67__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__438;   /* for PHI node */
    llvm_cbe_tmp__430__PHI_TEMPORARY = (float )llvm_cbe_tmp__437;   /* for PHI node */
    goto llvm_cbe_tmp__520;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader8' */
llvm_cbe__2e_preheader13:
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add nsw i32 %%storemerge118, -2, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1950_count);
  llvm_cbe_tmp__425 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__425&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = sext i32 %%32 to i64, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1951_count);
  llvm_cbe_tmp__426 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__425);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__426);
  llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader8;

  } while (1); /* end of syntactic loop '.preheader15' */
  } while (1); /* end of syntactic loop '.preheader17' */
llvm_cbe_tmp__517:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv3}\n");
  return;
}


void conv4(float (*llvm_cbe_in)[12][32], float (*llvm_cbe_out)[10][32], float (*llvm_cbe_kernel)[32][3][3], float *llvm_cbe_bias) {
  static  unsigned long long aesl_llvm_cbe_win_buf_count = 0;
  float llvm_cbe_win_buf[3][3][32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_2412_count = 0;
  static  unsigned long long aesl_llvm_cbe_2413_count = 0;
  static  unsigned long long aesl_llvm_cbe_2414_count = 0;
  static  unsigned long long aesl_llvm_cbe_2415_count = 0;
  static  unsigned long long aesl_llvm_cbe_2416_count = 0;
  static  unsigned long long aesl_llvm_cbe_2417_count = 0;
  static  unsigned long long aesl_llvm_cbe_2418_count = 0;
  static  unsigned long long aesl_llvm_cbe_2419_count = 0;
  static  unsigned long long aesl_llvm_cbe_2420_count = 0;
  static  unsigned long long aesl_llvm_cbe_2421_count = 0;
  static  unsigned long long aesl_llvm_cbe_2422_count = 0;
  static  unsigned long long aesl_llvm_cbe_2423_count = 0;
  static  unsigned long long aesl_llvm_cbe_2424_count = 0;
  static  unsigned long long aesl_llvm_cbe_2425_count = 0;
  static  unsigned long long aesl_llvm_cbe_2426_count = 0;
  static  unsigned long long aesl_llvm_cbe_2427_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned int llvm_cbe_storemerge19;
  unsigned int llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2428_count = 0;
  static  unsigned long long aesl_llvm_cbe_2429_count = 0;
  static  unsigned long long aesl_llvm_cbe_2430_count = 0;
  static  unsigned long long aesl_llvm_cbe_2431_count = 0;
  static  unsigned long long aesl_llvm_cbe_2432_count = 0;
  static  unsigned long long aesl_llvm_cbe_2433_count = 0;
  static  unsigned long long aesl_llvm_cbe_2434_count = 0;
  static  unsigned long long aesl_llvm_cbe_2435_count = 0;
  static  unsigned long long aesl_llvm_cbe_2436_count = 0;
  static  unsigned long long aesl_llvm_cbe_2437_count = 0;
  unsigned long long llvm_cbe_tmp__522;
  static  unsigned long long aesl_llvm_cbe_2438_count = 0;
  static  unsigned long long aesl_llvm_cbe_2439_count = 0;
  unsigned int llvm_cbe_tmp__523;
  static  unsigned long long aesl_llvm_cbe_2440_count = 0;
  unsigned long long llvm_cbe_tmp__524;
  static  unsigned long long aesl_llvm_cbe_2441_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge118_count = 0;
  unsigned int llvm_cbe_storemerge118;
  unsigned int llvm_cbe_storemerge118__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2442_count = 0;
  static  unsigned long long aesl_llvm_cbe_2443_count = 0;
  static  unsigned long long aesl_llvm_cbe_2444_count = 0;
  static  unsigned long long aesl_llvm_cbe_2445_count = 0;
  static  unsigned long long aesl_llvm_cbe_2446_count = 0;
  static  unsigned long long aesl_llvm_cbe_2447_count = 0;
  static  unsigned long long aesl_llvm_cbe_2448_count = 0;
  static  unsigned long long aesl_llvm_cbe_2449_count = 0;
  static  unsigned long long aesl_llvm_cbe_2450_count = 0;
  static  unsigned long long aesl_llvm_cbe_2451_count = 0;
  static  unsigned long long aesl_llvm_cbe_2452_count = 0;
  static  unsigned long long aesl_llvm_cbe_2453_count = 0;
  static  unsigned long long aesl_llvm_cbe_2454_count = 0;
  static  unsigned long long aesl_llvm_cbe_2455_count = 0;
  static  unsigned long long aesl_llvm_cbe_2456_count = 0;
  static  unsigned long long aesl_llvm_cbe_2457_count = 0;
  static  unsigned long long aesl_llvm_cbe_2458_count = 0;
  static  unsigned long long aesl_llvm_cbe_2459_count = 0;
  static  unsigned long long aesl_llvm_cbe_2460_count = 0;
  static  unsigned long long aesl_llvm_cbe_2461_count = 0;
  static  unsigned long long aesl_llvm_cbe_2462_count = 0;
  static  unsigned long long aesl_llvm_cbe_2463_count = 0;
  static  unsigned long long aesl_llvm_cbe_2464_count = 0;
  static  unsigned long long aesl_llvm_cbe_2465_count = 0;
  static  unsigned long long aesl_llvm_cbe_2466_count = 0;
  static  unsigned long long aesl_llvm_cbe_2467_count = 0;
  static  unsigned long long aesl_llvm_cbe_2468_count = 0;
  unsigned long long llvm_cbe_tmp__525;
  static  unsigned long long aesl_llvm_cbe_2469_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge216_count = 0;
  unsigned int llvm_cbe_storemerge216;
  unsigned int llvm_cbe_storemerge216__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2470_count = 0;
  unsigned long long llvm_cbe_tmp__526;
  static  unsigned long long aesl_llvm_cbe_2471_count = 0;
  float *llvm_cbe_tmp__527;
  static  unsigned long long aesl_llvm_cbe_2472_count = 0;
  float llvm_cbe_tmp__528;
  static  unsigned long long aesl_llvm_cbe_2473_count = 0;
  float *llvm_cbe_tmp__529;
  static  unsigned long long aesl_llvm_cbe_2474_count = 0;
  static  unsigned long long aesl_llvm_cbe_2475_count = 0;
  float *llvm_cbe_tmp__530;
  static  unsigned long long aesl_llvm_cbe_2476_count = 0;
  float llvm_cbe_tmp__531;
  static  unsigned long long aesl_llvm_cbe_2477_count = 0;
  static  unsigned long long aesl_llvm_cbe_2478_count = 0;
  float *llvm_cbe_tmp__532;
  static  unsigned long long aesl_llvm_cbe_2479_count = 0;
  float llvm_cbe_tmp__533;
  static  unsigned long long aesl_llvm_cbe_2480_count = 0;
  float *llvm_cbe_tmp__534;
  static  unsigned long long aesl_llvm_cbe_2481_count = 0;
  static  unsigned long long aesl_llvm_cbe_2482_count = 0;
  float *llvm_cbe_tmp__535;
  static  unsigned long long aesl_llvm_cbe_2483_count = 0;
  float llvm_cbe_tmp__536;
  static  unsigned long long aesl_llvm_cbe_2484_count = 0;
  static  unsigned long long aesl_llvm_cbe_2485_count = 0;
  float *llvm_cbe_tmp__537;
  static  unsigned long long aesl_llvm_cbe_2486_count = 0;
  float llvm_cbe_tmp__538;
  static  unsigned long long aesl_llvm_cbe_2487_count = 0;
  float *llvm_cbe_tmp__539;
  static  unsigned long long aesl_llvm_cbe_2488_count = 0;
  static  unsigned long long aesl_llvm_cbe_2489_count = 0;
  float *llvm_cbe_tmp__540;
  static  unsigned long long aesl_llvm_cbe_2490_count = 0;
  float llvm_cbe_tmp__541;
  static  unsigned long long aesl_llvm_cbe_2491_count = 0;
  static  unsigned long long aesl_llvm_cbe_2492_count = 0;
  float *llvm_cbe_tmp__542;
  static  unsigned long long aesl_llvm_cbe_2493_count = 0;
  float llvm_cbe_tmp__543;
  static  unsigned long long aesl_llvm_cbe_2494_count = 0;
  static  unsigned long long aesl_llvm_cbe_2495_count = 0;
  static  unsigned long long aesl_llvm_cbe_2496_count = 0;
  float *llvm_cbe_tmp__544;
  static  unsigned long long aesl_llvm_cbe_2497_count = 0;
  float llvm_cbe_tmp__545;
  static  unsigned long long aesl_llvm_cbe_2498_count = 0;
  static  unsigned long long aesl_llvm_cbe_2499_count = 0;
  static  unsigned long long aesl_llvm_cbe_2500_count = 0;
  static  unsigned long long aesl_llvm_cbe_2501_count = 0;
  float *llvm_cbe_tmp__546;
  static  unsigned long long aesl_llvm_cbe_2502_count = 0;
  float llvm_cbe_tmp__547;
  static  unsigned long long aesl_llvm_cbe_2503_count = 0;
  static  unsigned long long aesl_llvm_cbe_2504_count = 0;
  static  unsigned long long aesl_llvm_cbe_2505_count = 0;
  static  unsigned long long aesl_llvm_cbe_2506_count = 0;
  static  unsigned long long aesl_llvm_cbe_2507_count = 0;
  static  unsigned long long aesl_llvm_cbe_2508_count = 0;
  static  unsigned long long aesl_llvm_cbe_2509_count = 0;
  static  unsigned long long aesl_llvm_cbe_2510_count = 0;
  static  unsigned long long aesl_llvm_cbe_2511_count = 0;
  unsigned int llvm_cbe_tmp__548;
  static  unsigned long long aesl_llvm_cbe_2512_count = 0;
  static  unsigned long long aesl_llvm_cbe_2513_count = 0;
  static  unsigned long long aesl_llvm_cbe_2514_count = 0;
  static  unsigned long long aesl_llvm_cbe_2515_count = 0;
  static  unsigned long long aesl_llvm_cbe_2516_count = 0;
  static  unsigned long long aesl_llvm_cbe_2517_count = 0;
  static  unsigned long long aesl_llvm_cbe_2518_count = 0;
  static  unsigned long long aesl_llvm_cbe_2519_count = 0;
  static  unsigned long long aesl_llvm_cbe_2520_count = 0;
  static  unsigned long long aesl_llvm_cbe_2521_count = 0;
  static  unsigned long long aesl_llvm_cbe_2522_count = 0;
  static  unsigned long long aesl_llvm_cbe_2523_count = 0;
  static  unsigned long long aesl_llvm_cbe_2524_count = 0;
  static  unsigned long long aesl_llvm_cbe_2525_count = 0;
  static  unsigned long long aesl_llvm_cbe_2526_count = 0;
  static  unsigned long long aesl_llvm_cbe_2527_count = 0;
  static  unsigned long long aesl_llvm_cbe_2528_count = 0;
  static  unsigned long long aesl_llvm_cbe_2529_count = 0;
  static  unsigned long long aesl_llvm_cbe_2530_count = 0;
  static  unsigned long long aesl_llvm_cbe_2531_count = 0;
  static  unsigned long long aesl_llvm_cbe_2532_count = 0;
  static  unsigned long long aesl_llvm_cbe_2533_count = 0;
  static  unsigned long long aesl_llvm_cbe_2534_count = 0;
  static  unsigned long long aesl_llvm_cbe_2535_count = 0;
  static  unsigned long long aesl_llvm_cbe_2536_count = 0;
  static  unsigned long long aesl_llvm_cbe_2537_count = 0;
  static  unsigned long long aesl_llvm_cbe_2538_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond30_count = 0;
  static  unsigned long long aesl_llvm_cbe_2539_count = 0;
  static  unsigned long long aesl_llvm_cbe_2540_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_2541_count = 0;
  static  unsigned long long aesl_llvm_cbe_2542_count = 0;
  static  unsigned long long aesl_llvm_cbe_2543_count = 0;
  static  unsigned long long aesl_llvm_cbe_2544_count = 0;
  static  unsigned long long aesl_llvm_cbe_2545_count = 0;
  static  unsigned long long aesl_llvm_cbe_2546_count = 0;
  static  unsigned long long aesl_llvm_cbe_2547_count = 0;
  unsigned int llvm_cbe_tmp__549;
  static  unsigned long long aesl_llvm_cbe_2548_count = 0;
  unsigned long long llvm_cbe_tmp__550;
  static  unsigned long long aesl_llvm_cbe_2549_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge314_count = 0;
  unsigned int llvm_cbe_storemerge314;
  unsigned int llvm_cbe_storemerge314__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2550_count = 0;
  unsigned long long llvm_cbe_tmp__551;
  static  unsigned long long aesl_llvm_cbe_2551_count = 0;
  float *llvm_cbe_tmp__552;
  static  unsigned long long aesl_llvm_cbe_2552_count = 0;
  float llvm_cbe_tmp__553;
  static  unsigned long long aesl_llvm_cbe_2553_count = 0;
  static  unsigned long long aesl_llvm_cbe_2554_count = 0;
  static  unsigned long long aesl_llvm_cbe_2555_count = 0;
  static  unsigned long long aesl_llvm_cbe_2556_count = 0;
  static  unsigned long long aesl_llvm_cbe_2557_count = 0;
  static  unsigned long long aesl_llvm_cbe_2558_count = 0;
  static  unsigned long long aesl_llvm_cbe_2559_count = 0;
  static  unsigned long long aesl_llvm_cbe_2560_count = 0;
  static  unsigned long long aesl_llvm_cbe_2561_count = 0;
  static  unsigned long long aesl_llvm_cbe_2562_count = 0;
  static  unsigned long long aesl_llvm_cbe_2563_count = 0;
  static  unsigned long long aesl_llvm_cbe_2564_count = 0;
  static  unsigned long long aesl_llvm_cbe_2565_count = 0;
  static  unsigned long long aesl_llvm_cbe_2566_count = 0;
  static  unsigned long long aesl_llvm_cbe_2567_count = 0;
  static  unsigned long long aesl_llvm_cbe_2568_count = 0;
  static  unsigned long long aesl_llvm_cbe_2569_count = 0;
  static  unsigned long long aesl_llvm_cbe_2570_count = 0;
  static  unsigned long long aesl_llvm_cbe_2571_count = 0;
  static  unsigned long long aesl_llvm_cbe_2572_count = 0;
  static  unsigned long long aesl_llvm_cbe_2573_count = 0;
  static  unsigned long long aesl_llvm_cbe_2574_count = 0;
  static  unsigned long long aesl_llvm_cbe_2575_count = 0;
  static  unsigned long long aesl_llvm_cbe_2576_count = 0;
  static  unsigned long long aesl_llvm_cbe_2577_count = 0;
  static  unsigned long long aesl_llvm_cbe_2578_count = 0;
  static  unsigned long long aesl_llvm_cbe_2579_count = 0;
  static  unsigned long long aesl_llvm_cbe_2580_count = 0;
  static  unsigned long long aesl_llvm_cbe_2581_count = 0;
  static  unsigned long long aesl_llvm_cbe_2582_count = 0;
  static  unsigned long long aesl_llvm_cbe_2583_count = 0;
  static  unsigned long long aesl_llvm_cbe_2584_count = 0;
  static  unsigned long long aesl_llvm_cbe_2585_count = 0;
  static  unsigned long long aesl_llvm_cbe_2586_count = 0;
  static  unsigned long long aesl_llvm_cbe_2587_count = 0;
  static  unsigned long long aesl_llvm_cbe_2588_count = 0;
  static  unsigned long long aesl_llvm_cbe_2589_count = 0;
  static  unsigned long long aesl_llvm_cbe_2590_count = 0;
  static  unsigned long long aesl_llvm_cbe_2591_count = 0;
  static  unsigned long long aesl_llvm_cbe_2592_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_count = 0;
  unsigned int llvm_cbe_storemerge67;
  unsigned int llvm_cbe_storemerge67__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2593_count = 0;
  float llvm_cbe_tmp__554;
  float llvm_cbe_tmp__554__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2594_count = 0;
  unsigned long long llvm_cbe_tmp__555;
  static  unsigned long long aesl_llvm_cbe_2595_count = 0;
  float *llvm_cbe_tmp__556;
  static  unsigned long long aesl_llvm_cbe_2596_count = 0;
  float llvm_cbe_tmp__557;
  static  unsigned long long aesl_llvm_cbe_2597_count = 0;
  float *llvm_cbe_tmp__558;
  static  unsigned long long aesl_llvm_cbe_2598_count = 0;
  float llvm_cbe_tmp__559;
  static  unsigned long long aesl_llvm_cbe_2599_count = 0;
  float llvm_cbe_tmp__560;
  static  unsigned long long aesl_llvm_cbe_2600_count = 0;
  float llvm_cbe_tmp__561;
  static  unsigned long long aesl_llvm_cbe_2601_count = 0;
  static  unsigned long long aesl_llvm_cbe_2602_count = 0;
  static  unsigned long long aesl_llvm_cbe_2603_count = 0;
  static  unsigned long long aesl_llvm_cbe_2604_count = 0;
  static  unsigned long long aesl_llvm_cbe_2605_count = 0;
  unsigned int llvm_cbe_tmp__562;
  static  unsigned long long aesl_llvm_cbe_2606_count = 0;
  static  unsigned long long aesl_llvm_cbe_2607_count = 0;
  static  unsigned long long aesl_llvm_cbe_2608_count = 0;
  static  unsigned long long aesl_llvm_cbe_2609_count = 0;
  static  unsigned long long aesl_llvm_cbe_2610_count = 0;
  static  unsigned long long aesl_llvm_cbe_2611_count = 0;
  static  unsigned long long aesl_llvm_cbe_2612_count = 0;
  static  unsigned long long aesl_llvm_cbe_2613_count = 0;
  static  unsigned long long aesl_llvm_cbe_2614_count = 0;
  static  unsigned long long aesl_llvm_cbe_2615_count = 0;
  static  unsigned long long aesl_llvm_cbe_2616_count = 0;
  static  unsigned long long aesl_llvm_cbe_2617_count = 0;
  static  unsigned long long aesl_llvm_cbe_2618_count = 0;
  static  unsigned long long aesl_llvm_cbe_2619_count = 0;
  static  unsigned long long aesl_llvm_cbe_2620_count = 0;
  static  unsigned long long aesl_llvm_cbe_2621_count = 0;
  static  unsigned long long aesl_llvm_cbe_2622_count = 0;
  static  unsigned long long aesl_llvm_cbe_2623_count = 0;
  static  unsigned long long aesl_llvm_cbe_2624_count = 0;
  static  unsigned long long aesl_llvm_cbe_2625_count = 0;
  static  unsigned long long aesl_llvm_cbe_2626_count = 0;
  static  unsigned long long aesl_llvm_cbe_2627_count = 0;
  static  unsigned long long aesl_llvm_cbe_2628_count = 0;
  static  unsigned long long aesl_llvm_cbe_2629_count = 0;
  static  unsigned long long aesl_llvm_cbe_2630_count = 0;
  static  unsigned long long aesl_llvm_cbe_2631_count = 0;
  static  unsigned long long aesl_llvm_cbe_2632_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2633_count = 0;
  static  unsigned long long aesl_llvm_cbe_2634_count = 0;
  unsigned int llvm_cbe_tmp__563;
  static  unsigned long long aesl_llvm_cbe_2635_count = 0;
  static  unsigned long long aesl_llvm_cbe_2636_count = 0;
  static  unsigned long long aesl_llvm_cbe_2637_count = 0;
  static  unsigned long long aesl_llvm_cbe_2638_count = 0;
  static  unsigned long long aesl_llvm_cbe_2639_count = 0;
  static  unsigned long long aesl_llvm_cbe_2640_count = 0;
  static  unsigned long long aesl_llvm_cbe_2641_count = 0;
  static  unsigned long long aesl_llvm_cbe_2642_count = 0;
  static  unsigned long long aesl_llvm_cbe_2643_count = 0;
  static  unsigned long long aesl_llvm_cbe_2644_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond31_count = 0;
  static  unsigned long long aesl_llvm_cbe_2645_count = 0;
  static  unsigned long long aesl_llvm_cbe_2646_count = 0;
  unsigned int llvm_cbe_tmp__564;
  static  unsigned long long aesl_llvm_cbe_2647_count = 0;
  static  unsigned long long aesl_llvm_cbe_2648_count = 0;
  static  unsigned long long aesl_llvm_cbe_2649_count = 0;
  static  unsigned long long aesl_llvm_cbe_2650_count = 0;
  static  unsigned long long aesl_llvm_cbe_2651_count = 0;
  static  unsigned long long aesl_llvm_cbe_2652_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond32_count = 0;
  static  unsigned long long aesl_llvm_cbe_2653_count = 0;
  static  unsigned long long aesl_llvm_cbe_2654_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_1;
  unsigned int llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2655_count = 0;
  float llvm_cbe_tmp__565;
  float llvm_cbe_tmp__565__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2656_count = 0;
  unsigned long long llvm_cbe_tmp__566;
  static  unsigned long long aesl_llvm_cbe_2657_count = 0;
  float *llvm_cbe_tmp__567;
  static  unsigned long long aesl_llvm_cbe_2658_count = 0;
  float llvm_cbe_tmp__568;
  static  unsigned long long aesl_llvm_cbe_2659_count = 0;
  float *llvm_cbe_tmp__569;
  static  unsigned long long aesl_llvm_cbe_2660_count = 0;
  float llvm_cbe_tmp__570;
  static  unsigned long long aesl_llvm_cbe_2661_count = 0;
  float llvm_cbe_tmp__571;
  static  unsigned long long aesl_llvm_cbe_2662_count = 0;
  float llvm_cbe_tmp__572;
  static  unsigned long long aesl_llvm_cbe_2663_count = 0;
  static  unsigned long long aesl_llvm_cbe_2664_count = 0;
  static  unsigned long long aesl_llvm_cbe_2665_count = 0;
  static  unsigned long long aesl_llvm_cbe_2666_count = 0;
  static  unsigned long long aesl_llvm_cbe_2667_count = 0;
  unsigned int llvm_cbe_tmp__573;
  static  unsigned long long aesl_llvm_cbe_2668_count = 0;
  static  unsigned long long aesl_llvm_cbe_2669_count = 0;
  static  unsigned long long aesl_llvm_cbe_2670_count = 0;
  static  unsigned long long aesl_llvm_cbe_2671_count = 0;
  static  unsigned long long aesl_llvm_cbe_2672_count = 0;
  static  unsigned long long aesl_llvm_cbe_2673_count = 0;
  static  unsigned long long aesl_llvm_cbe_2674_count = 0;
  static  unsigned long long aesl_llvm_cbe_2675_count = 0;
  static  unsigned long long aesl_llvm_cbe_2676_count = 0;
  static  unsigned long long aesl_llvm_cbe_2677_count = 0;
  static  unsigned long long aesl_llvm_cbe_2678_count = 0;
  static  unsigned long long aesl_llvm_cbe_2679_count = 0;
  static  unsigned long long aesl_llvm_cbe_2680_count = 0;
  static  unsigned long long aesl_llvm_cbe_2681_count = 0;
  static  unsigned long long aesl_llvm_cbe_2682_count = 0;
  static  unsigned long long aesl_llvm_cbe_2683_count = 0;
  static  unsigned long long aesl_llvm_cbe_2684_count = 0;
  static  unsigned long long aesl_llvm_cbe_2685_count = 0;
  static  unsigned long long aesl_llvm_cbe_2686_count = 0;
  static  unsigned long long aesl_llvm_cbe_2687_count = 0;
  static  unsigned long long aesl_llvm_cbe_2688_count = 0;
  static  unsigned long long aesl_llvm_cbe_2689_count = 0;
  static  unsigned long long aesl_llvm_cbe_2690_count = 0;
  static  unsigned long long aesl_llvm_cbe_2691_count = 0;
  static  unsigned long long aesl_llvm_cbe_2692_count = 0;
  static  unsigned long long aesl_llvm_cbe_2693_count = 0;
  static  unsigned long long aesl_llvm_cbe_2694_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2695_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_2;
  unsigned int llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2696_count = 0;
  float llvm_cbe_tmp__574;
  float llvm_cbe_tmp__574__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2697_count = 0;
  unsigned long long llvm_cbe_tmp__575;
  static  unsigned long long aesl_llvm_cbe_2698_count = 0;
  float *llvm_cbe_tmp__576;
  static  unsigned long long aesl_llvm_cbe_2699_count = 0;
  float llvm_cbe_tmp__577;
  static  unsigned long long aesl_llvm_cbe_2700_count = 0;
  float *llvm_cbe_tmp__578;
  static  unsigned long long aesl_llvm_cbe_2701_count = 0;
  float llvm_cbe_tmp__579;
  static  unsigned long long aesl_llvm_cbe_2702_count = 0;
  float llvm_cbe_tmp__580;
  static  unsigned long long aesl_llvm_cbe_2703_count = 0;
  float llvm_cbe_tmp__581;
  static  unsigned long long aesl_llvm_cbe_2704_count = 0;
  static  unsigned long long aesl_llvm_cbe_2705_count = 0;
  static  unsigned long long aesl_llvm_cbe_2706_count = 0;
  static  unsigned long long aesl_llvm_cbe_2707_count = 0;
  static  unsigned long long aesl_llvm_cbe_2708_count = 0;
  unsigned int llvm_cbe_tmp__582;
  static  unsigned long long aesl_llvm_cbe_2709_count = 0;
  static  unsigned long long aesl_llvm_cbe_2710_count = 0;
  static  unsigned long long aesl_llvm_cbe_2711_count = 0;
  static  unsigned long long aesl_llvm_cbe_2712_count = 0;
  static  unsigned long long aesl_llvm_cbe_2713_count = 0;
  static  unsigned long long aesl_llvm_cbe_2714_count = 0;
  static  unsigned long long aesl_llvm_cbe_2715_count = 0;
  static  unsigned long long aesl_llvm_cbe_2716_count = 0;
  static  unsigned long long aesl_llvm_cbe_2717_count = 0;
  static  unsigned long long aesl_llvm_cbe_2718_count = 0;
  static  unsigned long long aesl_llvm_cbe_2719_count = 0;
  static  unsigned long long aesl_llvm_cbe_2720_count = 0;
  static  unsigned long long aesl_llvm_cbe_2721_count = 0;
  static  unsigned long long aesl_llvm_cbe_2722_count = 0;
  static  unsigned long long aesl_llvm_cbe_2723_count = 0;
  static  unsigned long long aesl_llvm_cbe_2724_count = 0;
  static  unsigned long long aesl_llvm_cbe_2725_count = 0;
  static  unsigned long long aesl_llvm_cbe_2726_count = 0;
  static  unsigned long long aesl_llvm_cbe_2727_count = 0;
  static  unsigned long long aesl_llvm_cbe_2728_count = 0;
  static  unsigned long long aesl_llvm_cbe_2729_count = 0;
  static  unsigned long long aesl_llvm_cbe_2730_count = 0;
  static  unsigned long long aesl_llvm_cbe_2731_count = 0;
  static  unsigned long long aesl_llvm_cbe_2732_count = 0;
  static  unsigned long long aesl_llvm_cbe_2733_count = 0;
  static  unsigned long long aesl_llvm_cbe_2734_count = 0;
  static  unsigned long long aesl_llvm_cbe_2735_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_2736_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_124_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_124;
  unsigned int llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2737_count = 0;
  float llvm_cbe_tmp__583;
  float llvm_cbe_tmp__583__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2738_count = 0;
  unsigned long long llvm_cbe_tmp__584;
  static  unsigned long long aesl_llvm_cbe_2739_count = 0;
  float *llvm_cbe_tmp__585;
  static  unsigned long long aesl_llvm_cbe_2740_count = 0;
  float llvm_cbe_tmp__586;
  static  unsigned long long aesl_llvm_cbe_2741_count = 0;
  float *llvm_cbe_tmp__587;
  static  unsigned long long aesl_llvm_cbe_2742_count = 0;
  float llvm_cbe_tmp__588;
  static  unsigned long long aesl_llvm_cbe_2743_count = 0;
  float llvm_cbe_tmp__589;
  static  unsigned long long aesl_llvm_cbe_2744_count = 0;
  float llvm_cbe_tmp__590;
  static  unsigned long long aesl_llvm_cbe_2745_count = 0;
  static  unsigned long long aesl_llvm_cbe_2746_count = 0;
  static  unsigned long long aesl_llvm_cbe_2747_count = 0;
  static  unsigned long long aesl_llvm_cbe_2748_count = 0;
  static  unsigned long long aesl_llvm_cbe_2749_count = 0;
  unsigned int llvm_cbe_tmp__591;
  static  unsigned long long aesl_llvm_cbe_2750_count = 0;
  static  unsigned long long aesl_llvm_cbe_2751_count = 0;
  static  unsigned long long aesl_llvm_cbe_2752_count = 0;
  static  unsigned long long aesl_llvm_cbe_2753_count = 0;
  static  unsigned long long aesl_llvm_cbe_2754_count = 0;
  static  unsigned long long aesl_llvm_cbe_2755_count = 0;
  static  unsigned long long aesl_llvm_cbe_2756_count = 0;
  static  unsigned long long aesl_llvm_cbe_2757_count = 0;
  static  unsigned long long aesl_llvm_cbe_2758_count = 0;
  static  unsigned long long aesl_llvm_cbe_2759_count = 0;
  static  unsigned long long aesl_llvm_cbe_2760_count = 0;
  static  unsigned long long aesl_llvm_cbe_2761_count = 0;
  static  unsigned long long aesl_llvm_cbe_2762_count = 0;
  static  unsigned long long aesl_llvm_cbe_2763_count = 0;
  static  unsigned long long aesl_llvm_cbe_2764_count = 0;
  static  unsigned long long aesl_llvm_cbe_2765_count = 0;
  static  unsigned long long aesl_llvm_cbe_2766_count = 0;
  static  unsigned long long aesl_llvm_cbe_2767_count = 0;
  static  unsigned long long aesl_llvm_cbe_2768_count = 0;
  static  unsigned long long aesl_llvm_cbe_2769_count = 0;
  static  unsigned long long aesl_llvm_cbe_2770_count = 0;
  static  unsigned long long aesl_llvm_cbe_2771_count = 0;
  static  unsigned long long aesl_llvm_cbe_2772_count = 0;
  static  unsigned long long aesl_llvm_cbe_2773_count = 0;
  static  unsigned long long aesl_llvm_cbe_2774_count = 0;
  static  unsigned long long aesl_llvm_cbe_2775_count = 0;
  static  unsigned long long aesl_llvm_cbe_2776_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_2777_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_1_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_1;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2778_count = 0;
  float llvm_cbe_tmp__592;
  float llvm_cbe_tmp__592__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2779_count = 0;
  unsigned long long llvm_cbe_tmp__593;
  static  unsigned long long aesl_llvm_cbe_2780_count = 0;
  float *llvm_cbe_tmp__594;
  static  unsigned long long aesl_llvm_cbe_2781_count = 0;
  float llvm_cbe_tmp__595;
  static  unsigned long long aesl_llvm_cbe_2782_count = 0;
  float *llvm_cbe_tmp__596;
  static  unsigned long long aesl_llvm_cbe_2783_count = 0;
  float llvm_cbe_tmp__597;
  static  unsigned long long aesl_llvm_cbe_2784_count = 0;
  float llvm_cbe_tmp__598;
  static  unsigned long long aesl_llvm_cbe_2785_count = 0;
  float llvm_cbe_tmp__599;
  static  unsigned long long aesl_llvm_cbe_2786_count = 0;
  static  unsigned long long aesl_llvm_cbe_2787_count = 0;
  static  unsigned long long aesl_llvm_cbe_2788_count = 0;
  static  unsigned long long aesl_llvm_cbe_2789_count = 0;
  static  unsigned long long aesl_llvm_cbe_2790_count = 0;
  unsigned int llvm_cbe_tmp__600;
  static  unsigned long long aesl_llvm_cbe_2791_count = 0;
  static  unsigned long long aesl_llvm_cbe_2792_count = 0;
  static  unsigned long long aesl_llvm_cbe_2793_count = 0;
  static  unsigned long long aesl_llvm_cbe_2794_count = 0;
  static  unsigned long long aesl_llvm_cbe_2795_count = 0;
  static  unsigned long long aesl_llvm_cbe_2796_count = 0;
  static  unsigned long long aesl_llvm_cbe_2797_count = 0;
  static  unsigned long long aesl_llvm_cbe_2798_count = 0;
  static  unsigned long long aesl_llvm_cbe_2799_count = 0;
  static  unsigned long long aesl_llvm_cbe_2800_count = 0;
  static  unsigned long long aesl_llvm_cbe_2801_count = 0;
  static  unsigned long long aesl_llvm_cbe_2802_count = 0;
  static  unsigned long long aesl_llvm_cbe_2803_count = 0;
  static  unsigned long long aesl_llvm_cbe_2804_count = 0;
  static  unsigned long long aesl_llvm_cbe_2805_count = 0;
  static  unsigned long long aesl_llvm_cbe_2806_count = 0;
  static  unsigned long long aesl_llvm_cbe_2807_count = 0;
  static  unsigned long long aesl_llvm_cbe_2808_count = 0;
  static  unsigned long long aesl_llvm_cbe_2809_count = 0;
  static  unsigned long long aesl_llvm_cbe_2810_count = 0;
  static  unsigned long long aesl_llvm_cbe_2811_count = 0;
  static  unsigned long long aesl_llvm_cbe_2812_count = 0;
  static  unsigned long long aesl_llvm_cbe_2813_count = 0;
  static  unsigned long long aesl_llvm_cbe_2814_count = 0;
  static  unsigned long long aesl_llvm_cbe_2815_count = 0;
  static  unsigned long long aesl_llvm_cbe_2816_count = 0;
  static  unsigned long long aesl_llvm_cbe_2817_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2818_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_2_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_1;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2819_count = 0;
  float llvm_cbe_tmp__601;
  float llvm_cbe_tmp__601__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2820_count = 0;
  unsigned long long llvm_cbe_tmp__602;
  static  unsigned long long aesl_llvm_cbe_2821_count = 0;
  float *llvm_cbe_tmp__603;
  static  unsigned long long aesl_llvm_cbe_2822_count = 0;
  float llvm_cbe_tmp__604;
  static  unsigned long long aesl_llvm_cbe_2823_count = 0;
  float *llvm_cbe_tmp__605;
  static  unsigned long long aesl_llvm_cbe_2824_count = 0;
  float llvm_cbe_tmp__606;
  static  unsigned long long aesl_llvm_cbe_2825_count = 0;
  float llvm_cbe_tmp__607;
  static  unsigned long long aesl_llvm_cbe_2826_count = 0;
  float llvm_cbe_tmp__608;
  static  unsigned long long aesl_llvm_cbe_2827_count = 0;
  static  unsigned long long aesl_llvm_cbe_2828_count = 0;
  static  unsigned long long aesl_llvm_cbe_2829_count = 0;
  static  unsigned long long aesl_llvm_cbe_2830_count = 0;
  static  unsigned long long aesl_llvm_cbe_2831_count = 0;
  unsigned int llvm_cbe_tmp__609;
  static  unsigned long long aesl_llvm_cbe_2832_count = 0;
  static  unsigned long long aesl_llvm_cbe_2833_count = 0;
  static  unsigned long long aesl_llvm_cbe_2834_count = 0;
  static  unsigned long long aesl_llvm_cbe_2835_count = 0;
  static  unsigned long long aesl_llvm_cbe_2836_count = 0;
  static  unsigned long long aesl_llvm_cbe_2837_count = 0;
  static  unsigned long long aesl_llvm_cbe_2838_count = 0;
  static  unsigned long long aesl_llvm_cbe_2839_count = 0;
  static  unsigned long long aesl_llvm_cbe_2840_count = 0;
  static  unsigned long long aesl_llvm_cbe_2841_count = 0;
  static  unsigned long long aesl_llvm_cbe_2842_count = 0;
  static  unsigned long long aesl_llvm_cbe_2843_count = 0;
  static  unsigned long long aesl_llvm_cbe_2844_count = 0;
  static  unsigned long long aesl_llvm_cbe_2845_count = 0;
  static  unsigned long long aesl_llvm_cbe_2846_count = 0;
  static  unsigned long long aesl_llvm_cbe_2847_count = 0;
  static  unsigned long long aesl_llvm_cbe_2848_count = 0;
  static  unsigned long long aesl_llvm_cbe_2849_count = 0;
  static  unsigned long long aesl_llvm_cbe_2850_count = 0;
  static  unsigned long long aesl_llvm_cbe_2851_count = 0;
  static  unsigned long long aesl_llvm_cbe_2852_count = 0;
  static  unsigned long long aesl_llvm_cbe_2853_count = 0;
  static  unsigned long long aesl_llvm_cbe_2854_count = 0;
  static  unsigned long long aesl_llvm_cbe_2855_count = 0;
  static  unsigned long long aesl_llvm_cbe_2856_count = 0;
  static  unsigned long long aesl_llvm_cbe_2857_count = 0;
  static  unsigned long long aesl_llvm_cbe_2858_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2859_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_227_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_227;
  unsigned int llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2860_count = 0;
  float llvm_cbe_tmp__610;
  float llvm_cbe_tmp__610__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2861_count = 0;
  unsigned long long llvm_cbe_tmp__611;
  static  unsigned long long aesl_llvm_cbe_2862_count = 0;
  float *llvm_cbe_tmp__612;
  static  unsigned long long aesl_llvm_cbe_2863_count = 0;
  float llvm_cbe_tmp__613;
  static  unsigned long long aesl_llvm_cbe_2864_count = 0;
  float *llvm_cbe_tmp__614;
  static  unsigned long long aesl_llvm_cbe_2865_count = 0;
  float llvm_cbe_tmp__615;
  static  unsigned long long aesl_llvm_cbe_2866_count = 0;
  float llvm_cbe_tmp__616;
  static  unsigned long long aesl_llvm_cbe_2867_count = 0;
  float llvm_cbe_tmp__617;
  static  unsigned long long aesl_llvm_cbe_2868_count = 0;
  static  unsigned long long aesl_llvm_cbe_2869_count = 0;
  static  unsigned long long aesl_llvm_cbe_2870_count = 0;
  static  unsigned long long aesl_llvm_cbe_2871_count = 0;
  static  unsigned long long aesl_llvm_cbe_2872_count = 0;
  unsigned int llvm_cbe_tmp__618;
  static  unsigned long long aesl_llvm_cbe_2873_count = 0;
  static  unsigned long long aesl_llvm_cbe_2874_count = 0;
  static  unsigned long long aesl_llvm_cbe_2875_count = 0;
  static  unsigned long long aesl_llvm_cbe_2876_count = 0;
  static  unsigned long long aesl_llvm_cbe_2877_count = 0;
  static  unsigned long long aesl_llvm_cbe_2878_count = 0;
  static  unsigned long long aesl_llvm_cbe_2879_count = 0;
  static  unsigned long long aesl_llvm_cbe_2880_count = 0;
  static  unsigned long long aesl_llvm_cbe_2881_count = 0;
  static  unsigned long long aesl_llvm_cbe_2882_count = 0;
  static  unsigned long long aesl_llvm_cbe_2883_count = 0;
  static  unsigned long long aesl_llvm_cbe_2884_count = 0;
  static  unsigned long long aesl_llvm_cbe_2885_count = 0;
  static  unsigned long long aesl_llvm_cbe_2886_count = 0;
  static  unsigned long long aesl_llvm_cbe_2887_count = 0;
  static  unsigned long long aesl_llvm_cbe_2888_count = 0;
  static  unsigned long long aesl_llvm_cbe_2889_count = 0;
  static  unsigned long long aesl_llvm_cbe_2890_count = 0;
  static  unsigned long long aesl_llvm_cbe_2891_count = 0;
  static  unsigned long long aesl_llvm_cbe_2892_count = 0;
  static  unsigned long long aesl_llvm_cbe_2893_count = 0;
  static  unsigned long long aesl_llvm_cbe_2894_count = 0;
  static  unsigned long long aesl_llvm_cbe_2895_count = 0;
  static  unsigned long long aesl_llvm_cbe_2896_count = 0;
  static  unsigned long long aesl_llvm_cbe_2897_count = 0;
  static  unsigned long long aesl_llvm_cbe_2898_count = 0;
  static  unsigned long long aesl_llvm_cbe_2899_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_2900_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_1_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_2;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2901_count = 0;
  float llvm_cbe_tmp__619;
  float llvm_cbe_tmp__619__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2902_count = 0;
  unsigned long long llvm_cbe_tmp__620;
  static  unsigned long long aesl_llvm_cbe_2903_count = 0;
  float *llvm_cbe_tmp__621;
  static  unsigned long long aesl_llvm_cbe_2904_count = 0;
  float llvm_cbe_tmp__622;
  static  unsigned long long aesl_llvm_cbe_2905_count = 0;
  float *llvm_cbe_tmp__623;
  static  unsigned long long aesl_llvm_cbe_2906_count = 0;
  float llvm_cbe_tmp__624;
  static  unsigned long long aesl_llvm_cbe_2907_count = 0;
  float llvm_cbe_tmp__625;
  static  unsigned long long aesl_llvm_cbe_2908_count = 0;
  float llvm_cbe_tmp__626;
  static  unsigned long long aesl_llvm_cbe_2909_count = 0;
  static  unsigned long long aesl_llvm_cbe_2910_count = 0;
  static  unsigned long long aesl_llvm_cbe_2911_count = 0;
  static  unsigned long long aesl_llvm_cbe_2912_count = 0;
  static  unsigned long long aesl_llvm_cbe_2913_count = 0;
  unsigned int llvm_cbe_tmp__627;
  static  unsigned long long aesl_llvm_cbe_2914_count = 0;
  static  unsigned long long aesl_llvm_cbe_2915_count = 0;
  static  unsigned long long aesl_llvm_cbe_2916_count = 0;
  static  unsigned long long aesl_llvm_cbe_2917_count = 0;
  static  unsigned long long aesl_llvm_cbe_2918_count = 0;
  static  unsigned long long aesl_llvm_cbe_2919_count = 0;
  static  unsigned long long aesl_llvm_cbe_2920_count = 0;
  static  unsigned long long aesl_llvm_cbe_2921_count = 0;
  static  unsigned long long aesl_llvm_cbe_2922_count = 0;
  static  unsigned long long aesl_llvm_cbe_2923_count = 0;
  static  unsigned long long aesl_llvm_cbe_2924_count = 0;
  static  unsigned long long aesl_llvm_cbe_2925_count = 0;
  static  unsigned long long aesl_llvm_cbe_2926_count = 0;
  static  unsigned long long aesl_llvm_cbe_2927_count = 0;
  static  unsigned long long aesl_llvm_cbe_2928_count = 0;
  static  unsigned long long aesl_llvm_cbe_2929_count = 0;
  static  unsigned long long aesl_llvm_cbe_2930_count = 0;
  static  unsigned long long aesl_llvm_cbe_2931_count = 0;
  static  unsigned long long aesl_llvm_cbe_2932_count = 0;
  static  unsigned long long aesl_llvm_cbe_2933_count = 0;
  static  unsigned long long aesl_llvm_cbe_2934_count = 0;
  static  unsigned long long aesl_llvm_cbe_2935_count = 0;
  static  unsigned long long aesl_llvm_cbe_2936_count = 0;
  static  unsigned long long aesl_llvm_cbe_2937_count = 0;
  static  unsigned long long aesl_llvm_cbe_2938_count = 0;
  static  unsigned long long aesl_llvm_cbe_2939_count = 0;
  static  unsigned long long aesl_llvm_cbe_2940_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_2941_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_2_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_2;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2942_count = 0;
  float llvm_cbe_tmp__628;
  float llvm_cbe_tmp__628__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2943_count = 0;
  unsigned long long llvm_cbe_tmp__629;
  static  unsigned long long aesl_llvm_cbe_2944_count = 0;
  float *llvm_cbe_tmp__630;
  static  unsigned long long aesl_llvm_cbe_2945_count = 0;
  float llvm_cbe_tmp__631;
  static  unsigned long long aesl_llvm_cbe_2946_count = 0;
  float *llvm_cbe_tmp__632;
  static  unsigned long long aesl_llvm_cbe_2947_count = 0;
  float llvm_cbe_tmp__633;
  static  unsigned long long aesl_llvm_cbe_2948_count = 0;
  float llvm_cbe_tmp__634;
  static  unsigned long long aesl_llvm_cbe_2949_count = 0;
  float llvm_cbe_tmp__635;
  static  unsigned long long aesl_llvm_cbe_2950_count = 0;
  static  unsigned long long aesl_llvm_cbe_2951_count = 0;
  static  unsigned long long aesl_llvm_cbe_2952_count = 0;
  static  unsigned long long aesl_llvm_cbe_2953_count = 0;
  static  unsigned long long aesl_llvm_cbe_2954_count = 0;
  unsigned int llvm_cbe_tmp__636;
  static  unsigned long long aesl_llvm_cbe_2955_count = 0;
  static  unsigned long long aesl_llvm_cbe_2956_count = 0;
  static  unsigned long long aesl_llvm_cbe_2957_count = 0;
  static  unsigned long long aesl_llvm_cbe_2958_count = 0;
  static  unsigned long long aesl_llvm_cbe_2959_count = 0;
  static  unsigned long long aesl_llvm_cbe_2960_count = 0;
  static  unsigned long long aesl_llvm_cbe_2961_count = 0;
  static  unsigned long long aesl_llvm_cbe_2962_count = 0;
  static  unsigned long long aesl_llvm_cbe_2963_count = 0;
  static  unsigned long long aesl_llvm_cbe_2964_count = 0;
  static  unsigned long long aesl_llvm_cbe_2965_count = 0;
  static  unsigned long long aesl_llvm_cbe_2966_count = 0;
  static  unsigned long long aesl_llvm_cbe_2967_count = 0;
  static  unsigned long long aesl_llvm_cbe_2968_count = 0;
  static  unsigned long long aesl_llvm_cbe_2969_count = 0;
  static  unsigned long long aesl_llvm_cbe_2970_count = 0;
  static  unsigned long long aesl_llvm_cbe_2971_count = 0;
  static  unsigned long long aesl_llvm_cbe_2972_count = 0;
  static  unsigned long long aesl_llvm_cbe_2973_count = 0;
  static  unsigned long long aesl_llvm_cbe_2974_count = 0;
  static  unsigned long long aesl_llvm_cbe_2975_count = 0;
  static  unsigned long long aesl_llvm_cbe_2976_count = 0;
  static  unsigned long long aesl_llvm_cbe_2977_count = 0;
  static  unsigned long long aesl_llvm_cbe_2978_count = 0;
  static  unsigned long long aesl_llvm_cbe_2979_count = 0;
  static  unsigned long long aesl_llvm_cbe_2980_count = 0;
  static  unsigned long long aesl_llvm_cbe_2981_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_2982_count = 0;
  static  unsigned long long aesl_llvm_cbe_2983_count = 0;
  static  unsigned long long aesl_llvm_cbe_2984_count = 0;
  static  unsigned long long aesl_llvm_cbe_2985_count = 0;
  static  unsigned long long aesl_llvm_cbe_2986_count = 0;
  static  unsigned long long aesl_llvm_cbe_2987_count = 0;
  static  unsigned long long aesl_llvm_cbe_2988_count = 0;
  static  unsigned long long aesl_llvm_cbe_2989_count = 0;
  static  unsigned long long aesl_llvm_cbe_2990_count = 0;
  static  unsigned long long aesl_llvm_cbe_2991_count = 0;
  static  unsigned long long aesl_llvm_cbe_2992_count = 0;
  static  unsigned long long aesl_llvm_cbe_2993_count = 0;
  static  unsigned long long aesl_llvm_cbe_2994_count = 0;
  static  unsigned long long aesl_llvm_cbe_2995_count = 0;
  static  unsigned long long aesl_llvm_cbe_2996_count = 0;
  static  unsigned long long aesl_llvm_cbe_2997_count = 0;
  static  unsigned long long aesl_llvm_cbe_2998_count = 0;
  float llvm_cbe_tmp__637;
  static  unsigned long long aesl_llvm_cbe_2999_count = 0;
  float *llvm_cbe_tmp__638;
  static  unsigned long long aesl_llvm_cbe_3000_count = 0;
  static  unsigned long long aesl_llvm_cbe_3001_count = 0;
  unsigned int llvm_cbe_tmp__639;
  static  unsigned long long aesl_llvm_cbe_3002_count = 0;
  static  unsigned long long aesl_llvm_cbe_3003_count = 0;
  static  unsigned long long aesl_llvm_cbe_3004_count = 0;
  static  unsigned long long aesl_llvm_cbe_3005_count = 0;
  static  unsigned long long aesl_llvm_cbe_3006_count = 0;
  static  unsigned long long aesl_llvm_cbe_3007_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond29_count = 0;
  static  unsigned long long aesl_llvm_cbe_3008_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv4\n");
  llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader17;

  do {     /* Syntactic loop '.preheader17' to make GCC happy */
llvm_cbe__2e_preheader17:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i32 [ 0, %%0 ], [ %%49, %%48  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned int )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%X",llvm_cbe_storemerge19);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__564);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge19 to i64, !dbg !19 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2437_count);
  llvm_cbe_tmp__522 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__522);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add nsw i32 %%storemerge19, -2, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2439_count);
  llvm_cbe_tmp__523 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__523&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2440_count);
  llvm_cbe_tmp__524 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__523);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__524);
  llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader15;

llvm_cbe_tmp__640:
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add nsw i32 %%storemerge19, 1, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2646_count);
  llvm_cbe_tmp__564 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__564&4294967295ull)));
  if (((llvm_cbe_tmp__564&4294967295U) == (12u&4294967295U))) {
    goto llvm_cbe_tmp__641;
  } else {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__564;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  }

  do {     /* Syntactic loop '.preheader15' to make GCC happy */
llvm_cbe__2e_preheader15:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge118 = phi i32 [ 0, %%.preheader17 ], [ %%47, %%.loopexit  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge118_count);
  llvm_cbe_storemerge118 = (unsigned int )llvm_cbe_storemerge118__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge118 = 0x%X",llvm_cbe_storemerge118);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__563);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge118 to i64, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2468_count);
  llvm_cbe_tmp__525 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge118);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__525);
  llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__642;

llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = add nsw i32 %%storemerge118, 1, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2634_count);
  llvm_cbe_tmp__563 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__563&4294967295ull)));
  if (((llvm_cbe_tmp__563&4294967295U) == (12u&4294967295U))) {
    goto llvm_cbe_tmp__640;
  } else {
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__563;   /* for PHI node */
    goto llvm_cbe__2e_preheader15;
  }

llvm_cbe_tmp__643:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = and i1 %%2, %%31, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((signed int )llvm_cbe_storemerge19) > ((signed int )1u)) & (((signed int )llvm_cbe_storemerge118) > ((signed int )1u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe__2e_preheader13;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__642:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge216 = phi i32 [ 0, %%.preheader15 ], [ %%29, %%6  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge216_count);
  llvm_cbe_storemerge216 = (unsigned int )llvm_cbe_storemerge216__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge216 = 0x%X",llvm_cbe_storemerge216);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__548);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%storemerge216 to i64, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2470_count);
  llvm_cbe_tmp__526 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge216);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__526);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2471_count);
  llvm_cbe_tmp__527 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__526) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load float* %%8, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2472_count);
  llvm_cbe_tmp__528 = (float )*llvm_cbe_tmp__527;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__528, *(int*)(&llvm_cbe_tmp__528));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2473_count);
  llvm_cbe_tmp__529 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%9, float* %%10, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2474_count);
  *llvm_cbe_tmp__529 = llvm_cbe_tmp__528;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__528);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2475_count);
  llvm_cbe_tmp__530 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__526) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2476_count);
  llvm_cbe_tmp__531 = (float )*llvm_cbe_tmp__530;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__531, *(int*)(&llvm_cbe_tmp__531));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%12, float* %%8, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2477_count);
  *llvm_cbe_tmp__527 = llvm_cbe_tmp__531;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__531);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2478_count);
  llvm_cbe_tmp__532 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__526) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2479_count);
  llvm_cbe_tmp__533 = (float )*llvm_cbe_tmp__532;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__533, *(int*)(&llvm_cbe_tmp__533));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2480_count);
  llvm_cbe_tmp__534 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%14, float* %%15, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2481_count);
  *llvm_cbe_tmp__534 = llvm_cbe_tmp__533;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__533);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2482_count);
  llvm_cbe_tmp__535 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__526) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load float* %%16, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2483_count);
  llvm_cbe_tmp__536 = (float )*llvm_cbe_tmp__535;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__536, *(int*)(&llvm_cbe_tmp__536));

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%17, float* %%13, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2484_count);
  *llvm_cbe_tmp__532 = llvm_cbe_tmp__536;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__536);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2485_count);
  llvm_cbe_tmp__537 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__526) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load float* %%18, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2486_count);
  llvm_cbe_tmp__538 = (float )*llvm_cbe_tmp__537;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__538, *(int*)(&llvm_cbe_tmp__538));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2487_count);
  llvm_cbe_tmp__539 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%19, float* %%20, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2488_count);
  *llvm_cbe_tmp__539 = llvm_cbe_tmp__538;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__538);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2489_count);
  llvm_cbe_tmp__540 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__526) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2490_count);
  llvm_cbe_tmp__541 = (float )*llvm_cbe_tmp__540;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__541, *(int*)(&llvm_cbe_tmp__541));

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%22, float* %%18, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2491_count);
  *llvm_cbe_tmp__537 = llvm_cbe_tmp__541;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__541);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [2 x [12 x [32 x float]]]* @aesl_internal_conv4.line_buf, i64 0, i64 0, i64 %%5, i64 %%7, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2492_count);
  llvm_cbe_tmp__542 = (float *)(&aesl_internal_conv4_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__525))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__525));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv4.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__525) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv4.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__526) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv4.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* %%23, align 4, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2493_count);
  llvm_cbe_tmp__543 = (float )*llvm_cbe_tmp__542;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__543, *(int*)(&llvm_cbe_tmp__543));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [2 x [12 x [32 x float]]]* @aesl_internal_conv4.line_buf, i64 0, i64 1, i64 %%5, i64 %%7, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2496_count);
  llvm_cbe_tmp__544 = (float *)(&aesl_internal_conv4_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__525))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__526))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__525));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv4.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__525) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv4.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__526) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv4.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load float* %%25, align 4, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2497_count);
  llvm_cbe_tmp__545 = (float )*llvm_cbe_tmp__544;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__545, *(int*)(&llvm_cbe_tmp__545));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%1, i64 %%5, i64 %%7, !dbg !19 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2501_count);
  llvm_cbe_tmp__546 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__522))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__525))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__526))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__522));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__525));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__526));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__525) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__526) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !19 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2502_count);
  llvm_cbe_tmp__547 = (float )*llvm_cbe_tmp__546;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__547, *(int*)(&llvm_cbe_tmp__547));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv4.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__525) < 12 && "Write access out of array 'aesl_internal_conv4.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'aesl_internal_conv4.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%23, align 4, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2506_count);
  *llvm_cbe_tmp__542 = llvm_cbe_tmp__545;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__545);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv4.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__525) < 12 && "Write access out of array 'aesl_internal_conv4.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'aesl_internal_conv4.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%25, align 4, !dbg !23 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2507_count);
  *llvm_cbe_tmp__544 = llvm_cbe_tmp__547;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__547);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* %%11, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2508_count);
  *llvm_cbe_tmp__530 = llvm_cbe_tmp__543;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__543);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%16, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2509_count);
  *llvm_cbe_tmp__535 = llvm_cbe_tmp__545;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__545);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__526) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%21, align 4, !dbg !24 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2510_count);
  *llvm_cbe_tmp__540 = llvm_cbe_tmp__547;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__547);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add nsw i32 %%storemerge216, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2511_count);
  llvm_cbe_tmp__548 = (unsigned int )((unsigned int )(llvm_cbe_storemerge216&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__548&4294967295ull)));
  if (((llvm_cbe_tmp__548&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__643;
  } else {
    llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__548;   /* for PHI node */
    goto llvm_cbe_tmp__642;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader8' to make GCC happy */
llvm_cbe__2e_preheader8:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge314 = phi i32 [ 0, %%.preheader13 ], [ %%127, %%123  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge314_count);
  llvm_cbe_storemerge314 = (unsigned int )llvm_cbe_storemerge314__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge314 = 0x%X",llvm_cbe_storemerge314);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__639);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%storemerge314 to i64, !dbg !22 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2550_count);
  llvm_cbe_tmp__551 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge314);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__551);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds float* %%bias, i64 %%34, !dbg !22 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2551_count);
  llvm_cbe_tmp__552 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__551))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !22 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2552_count);
  llvm_cbe_tmp__553 = (float )*llvm_cbe_tmp__552;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__553, *(int*)(&llvm_cbe_tmp__553));
  llvm_cbe_storemerge67__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__554__PHI_TEMPORARY = (float )llvm_cbe_tmp__553;   /* for PHI node */
  goto llvm_cbe_tmp__644;

llvm_cbe_tmp__645:
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = select i1 %%124, float 0.000000e+00, float %%121, !dbg !26 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2998_count);
  llvm_cbe_tmp__637 = (float )(((llvm_fcmp_olt(llvm_cbe_tmp__635, 0x0p0))) ? ((float )0x0p0) : ((float )llvm_cbe_tmp__635));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__637, *(int*)(&llvm_cbe_tmp__637));
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = getelementptr inbounds [10 x [32 x float]]* %%out, i64 %%4, i64 %%33, i64 %%34, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2999_count);
  llvm_cbe_tmp__638 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__524))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__550))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__551))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__524));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__550));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__550) < 10 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__551) < 32 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%125, float* %%126, align 4, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_3000_count);
  *llvm_cbe_tmp__638 = llvm_cbe_tmp__637;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__637);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = add nsw i32 %%storemerge314, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_3001_count);
  llvm_cbe_tmp__639 = (unsigned int )((unsigned int )(llvm_cbe_storemerge314&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__639&4294967295ull)));
  if (((llvm_cbe_tmp__639&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__639;   /* for PHI node */
    goto llvm_cbe__2e_preheader8;
  }

  do {     /* Syntactic loop '.preheader.2.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_2_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.2.2 = phi i32 [ %%122, %%.preheader.2.2 ], [ 0, %%.preheader.1.2  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge67_2e_2_2e_2_count);
  llvm_cbe_storemerge67_2e_2_2e_2 = (unsigned int )llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.2.2 = 0x%X",llvm_cbe_storemerge67_2e_2_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__636);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = phi float [ %%121, %%.preheader.2.2 ], [ %%112, %%.preheader.1.2  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2942_count);
  llvm_cbe_tmp__628 = (float )llvm_cbe_tmp__628__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__628);
printf("\n = %f",llvm_cbe_tmp__635);
printf("\n = %f",llvm_cbe_tmp__626);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = sext i32 %%storemerge67.2.2 to i64, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2943_count);
  llvm_cbe_tmp__629 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_2_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__629);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 %%115, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2944_count);
  llvm_cbe_tmp__630 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__629))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__629));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__629) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load float* %%116, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2945_count);
  llvm_cbe_tmp__631 = (float )*llvm_cbe_tmp__630;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__631, *(int*)(&llvm_cbe_tmp__631));
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%115, i64 2, i64 2, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2946_count);
  llvm_cbe_tmp__632 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__551))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__629))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__629));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__629) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = load float* %%118, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2947_count);
  llvm_cbe_tmp__633 = (float )*llvm_cbe_tmp__632;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__633, *(int*)(&llvm_cbe_tmp__633));
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = fmul float %%117, %%119, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2948_count);
  llvm_cbe_tmp__634 = (float )((float )(llvm_cbe_tmp__631 * llvm_cbe_tmp__633));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__634, *(int*)(&llvm_cbe_tmp__634));
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = fadd float %%114, %%120, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2949_count);
  llvm_cbe_tmp__635 = (float )((float )(llvm_cbe_tmp__628 + llvm_cbe_tmp__634));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__635, *(int*)(&llvm_cbe_tmp__635));
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = add nsw i32 %%storemerge67.2.2, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2954_count);
  llvm_cbe_tmp__636 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_2_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__636&4294967295ull)));
  if (((llvm_cbe_tmp__636&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__645;
  } else {
    llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__636;   /* for PHI node */
    llvm_cbe_tmp__628__PHI_TEMPORARY = (float )llvm_cbe_tmp__635;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader.2.2' */
  do {     /* Syntactic loop '.preheader.1.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_1_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.1.2 = phi i32 [ %%113, %%.preheader.1.2 ], [ 0, %%.preheader8.2  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge67_2e_1_2e_2_count);
  llvm_cbe_storemerge67_2e_1_2e_2 = (unsigned int )llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.1.2 = 0x%X",llvm_cbe_storemerge67_2e_1_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__627);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = phi float [ %%112, %%.preheader.1.2 ], [ %%103, %%.preheader8.2  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2901_count);
  llvm_cbe_tmp__619 = (float )llvm_cbe_tmp__619__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__619);
printf("\n = %f",llvm_cbe_tmp__626);
printf("\n = %f",llvm_cbe_tmp__617);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = sext i32 %%storemerge67.1.2 to i64, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2902_count);
  llvm_cbe_tmp__620 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_1_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__620);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 %%106, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2903_count);
  llvm_cbe_tmp__621 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__620))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__620));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__620) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = load float* %%107, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2904_count);
  llvm_cbe_tmp__622 = (float )*llvm_cbe_tmp__621;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__622, *(int*)(&llvm_cbe_tmp__622));
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%106, i64 2, i64 1, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2905_count);
  llvm_cbe_tmp__623 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__551))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__620))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__620));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__620) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = load float* %%109, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2906_count);
  llvm_cbe_tmp__624 = (float )*llvm_cbe_tmp__623;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__624, *(int*)(&llvm_cbe_tmp__624));
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = fmul float %%108, %%110, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2907_count);
  llvm_cbe_tmp__625 = (float )((float )(llvm_cbe_tmp__622 * llvm_cbe_tmp__624));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__625, *(int*)(&llvm_cbe_tmp__625));
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = fadd float %%105, %%111, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2908_count);
  llvm_cbe_tmp__626 = (float )((float )(llvm_cbe_tmp__619 + llvm_cbe_tmp__625));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__626, *(int*)(&llvm_cbe_tmp__626));
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = add nsw i32 %%storemerge67.1.2, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2913_count);
  llvm_cbe_tmp__627 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_1_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__627&4294967295ull)));
  if (((llvm_cbe_tmp__627&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__628__PHI_TEMPORARY = (float )llvm_cbe_tmp__626;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__627;   /* for PHI node */
    llvm_cbe_tmp__619__PHI_TEMPORARY = (float )llvm_cbe_tmp__626;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader.1.2' */
  do {     /* Syntactic loop '.preheader8.2' to make GCC happy */
llvm_cbe__2e_preheader8_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.227 = phi i32 [ %%104, %%.preheader8.2 ], [ 0, %%.preheader.2.1  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge67_2e_227_count);
  llvm_cbe_storemerge67_2e_227 = (unsigned int )llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.227 = 0x%X",llvm_cbe_storemerge67_2e_227);
printf("\n = 0x%X",llvm_cbe_tmp__618);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = phi float [ %%103, %%.preheader8.2 ], [ %%94, %%.preheader.2.1  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2860_count);
  llvm_cbe_tmp__610 = (float )llvm_cbe_tmp__610__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__610);
printf("\n = %f",llvm_cbe_tmp__617);
printf("\n = %f",llvm_cbe_tmp__608);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = sext i32 %%storemerge67.227 to i64, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2861_count);
  llvm_cbe_tmp__611 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_227);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__611);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 %%97, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2862_count);
  llvm_cbe_tmp__612 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__611))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__611));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__611) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = load float* %%98, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2863_count);
  llvm_cbe_tmp__613 = (float )*llvm_cbe_tmp__612;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__613, *(int*)(&llvm_cbe_tmp__613));
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%97, i64 2, i64 0, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2864_count);
  llvm_cbe_tmp__614 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__551))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__611))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__611));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__611) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = load float* %%100, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2865_count);
  llvm_cbe_tmp__615 = (float )*llvm_cbe_tmp__614;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__615, *(int*)(&llvm_cbe_tmp__615));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = fmul float %%99, %%101, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2866_count);
  llvm_cbe_tmp__616 = (float )((float )(llvm_cbe_tmp__613 * llvm_cbe_tmp__615));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__616, *(int*)(&llvm_cbe_tmp__616));
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = fadd float %%96, %%102, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2867_count);
  llvm_cbe_tmp__617 = (float )((float )(llvm_cbe_tmp__610 + llvm_cbe_tmp__616));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__617, *(int*)(&llvm_cbe_tmp__617));
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = add nsw i32 %%storemerge67.227, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2872_count);
  llvm_cbe_tmp__618 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_227&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__618&4294967295ull)));
  if (((llvm_cbe_tmp__618&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__619__PHI_TEMPORARY = (float )llvm_cbe_tmp__617;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__618;   /* for PHI node */
    llvm_cbe_tmp__610__PHI_TEMPORARY = (float )llvm_cbe_tmp__617;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader8.2' */
  do {     /* Syntactic loop '.preheader.2.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_2_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.2.1 = phi i32 [ %%95, %%.preheader.2.1 ], [ 0, %%.preheader.1.1  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge67_2e_2_2e_1_count);
  llvm_cbe_storemerge67_2e_2_2e_1 = (unsigned int )llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.2.1 = 0x%X",llvm_cbe_storemerge67_2e_2_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__609);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = phi float [ %%94, %%.preheader.2.1 ], [ %%85, %%.preheader.1.1  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2819_count);
  llvm_cbe_tmp__601 = (float )llvm_cbe_tmp__601__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__601);
printf("\n = %f",llvm_cbe_tmp__608);
printf("\n = %f",llvm_cbe_tmp__599);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = sext i32 %%storemerge67.2.1 to i64, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2820_count);
  llvm_cbe_tmp__602 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_2_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__602);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 %%88, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2821_count);
  llvm_cbe_tmp__603 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__602))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__602));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__602) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load float* %%89, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2822_count);
  llvm_cbe_tmp__604 = (float )*llvm_cbe_tmp__603;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__604, *(int*)(&llvm_cbe_tmp__604));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%88, i64 1, i64 2, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2823_count);
  llvm_cbe_tmp__605 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__551))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__602))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__602));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__602) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = load float* %%91, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2824_count);
  llvm_cbe_tmp__606 = (float )*llvm_cbe_tmp__605;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__606, *(int*)(&llvm_cbe_tmp__606));
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = fmul float %%90, %%92, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2825_count);
  llvm_cbe_tmp__607 = (float )((float )(llvm_cbe_tmp__604 * llvm_cbe_tmp__606));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__607, *(int*)(&llvm_cbe_tmp__607));
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = fadd float %%87, %%93, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2826_count);
  llvm_cbe_tmp__608 = (float )((float )(llvm_cbe_tmp__601 + llvm_cbe_tmp__607));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__608, *(int*)(&llvm_cbe_tmp__608));
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = add nsw i32 %%storemerge67.2.1, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2831_count);
  llvm_cbe_tmp__609 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_2_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__609&4294967295ull)));
  if (((llvm_cbe_tmp__609&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__610__PHI_TEMPORARY = (float )llvm_cbe_tmp__608;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__609;   /* for PHI node */
    llvm_cbe_tmp__601__PHI_TEMPORARY = (float )llvm_cbe_tmp__608;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader.2.1' */
  do {     /* Syntactic loop '.preheader.1.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_1_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.1.1 = phi i32 [ %%86, %%.preheader.1.1 ], [ 0, %%.preheader8.1  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge67_2e_1_2e_1_count);
  llvm_cbe_storemerge67_2e_1_2e_1 = (unsigned int )llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.1.1 = 0x%X",llvm_cbe_storemerge67_2e_1_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__600);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = phi float [ %%85, %%.preheader.1.1 ], [ %%76, %%.preheader8.1  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2778_count);
  llvm_cbe_tmp__592 = (float )llvm_cbe_tmp__592__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__592);
printf("\n = %f",llvm_cbe_tmp__599);
printf("\n = %f",llvm_cbe_tmp__590);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = sext i32 %%storemerge67.1.1 to i64, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2779_count);
  llvm_cbe_tmp__593 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_1_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__593);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 %%79, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2780_count);
  llvm_cbe_tmp__594 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__593))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__593));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__593) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load float* %%80, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2781_count);
  llvm_cbe_tmp__595 = (float )*llvm_cbe_tmp__594;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__595, *(int*)(&llvm_cbe_tmp__595));
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%79, i64 1, i64 1, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2782_count);
  llvm_cbe_tmp__596 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__551))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__593))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__593));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__593) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load float* %%82, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2783_count);
  llvm_cbe_tmp__597 = (float )*llvm_cbe_tmp__596;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__597, *(int*)(&llvm_cbe_tmp__597));
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = fmul float %%81, %%83, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2784_count);
  llvm_cbe_tmp__598 = (float )((float )(llvm_cbe_tmp__595 * llvm_cbe_tmp__597));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__598, *(int*)(&llvm_cbe_tmp__598));
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = fadd float %%78, %%84, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2785_count);
  llvm_cbe_tmp__599 = (float )((float )(llvm_cbe_tmp__592 + llvm_cbe_tmp__598));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__599, *(int*)(&llvm_cbe_tmp__599));
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = add nsw i32 %%storemerge67.1.1, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2790_count);
  llvm_cbe_tmp__600 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_1_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__600&4294967295ull)));
  if (((llvm_cbe_tmp__600&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__601__PHI_TEMPORARY = (float )llvm_cbe_tmp__599;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_1;
  } else {
    llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__600;   /* for PHI node */
    llvm_cbe_tmp__592__PHI_TEMPORARY = (float )llvm_cbe_tmp__599;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader.1.1' */
  do {     /* Syntactic loop '.preheader8.1' to make GCC happy */
llvm_cbe__2e_preheader8_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.124 = phi i32 [ %%77, %%.preheader8.1 ], [ 0, %%.preheader.2  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge67_2e_124_count);
  llvm_cbe_storemerge67_2e_124 = (unsigned int )llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.124 = 0x%X",llvm_cbe_storemerge67_2e_124);
printf("\n = 0x%X",llvm_cbe_tmp__591);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = phi float [ %%76, %%.preheader8.1 ], [ %%67, %%.preheader.2  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2737_count);
  llvm_cbe_tmp__583 = (float )llvm_cbe_tmp__583__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__583);
printf("\n = %f",llvm_cbe_tmp__590);
printf("\n = %f",llvm_cbe_tmp__581);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = sext i32 %%storemerge67.124 to i64, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2738_count);
  llvm_cbe_tmp__584 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_124);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__584);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 %%70, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2739_count);
  llvm_cbe_tmp__585 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__584))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__584));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__584) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load float* %%71, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2740_count);
  llvm_cbe_tmp__586 = (float )*llvm_cbe_tmp__585;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__586, *(int*)(&llvm_cbe_tmp__586));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%70, i64 1, i64 0, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2741_count);
  llvm_cbe_tmp__587 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__551))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__584))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__584));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__584) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load float* %%73, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2742_count);
  llvm_cbe_tmp__588 = (float )*llvm_cbe_tmp__587;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__588, *(int*)(&llvm_cbe_tmp__588));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = fmul float %%72, %%74, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2743_count);
  llvm_cbe_tmp__589 = (float )((float )(llvm_cbe_tmp__586 * llvm_cbe_tmp__588));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__589, *(int*)(&llvm_cbe_tmp__589));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = fadd float %%69, %%75, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2744_count);
  llvm_cbe_tmp__590 = (float )((float )(llvm_cbe_tmp__583 + llvm_cbe_tmp__589));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__590, *(int*)(&llvm_cbe_tmp__590));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add nsw i32 %%storemerge67.124, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2749_count);
  llvm_cbe_tmp__591 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_124&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__591&4294967295ull)));
  if (((llvm_cbe_tmp__591&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__592__PHI_TEMPORARY = (float )llvm_cbe_tmp__590;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_1;
  } else {
    llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__591;   /* for PHI node */
    llvm_cbe_tmp__583__PHI_TEMPORARY = (float )llvm_cbe_tmp__590;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader8.1' */
  do {     /* Syntactic loop '.preheader.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.2 = phi i32 [ %%68, %%.preheader.2 ], [ 0, %%.preheader.1  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge67_2e_2_count);
  llvm_cbe_storemerge67_2e_2 = (unsigned int )llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.2 = 0x%X",llvm_cbe_storemerge67_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__582);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = phi float [ %%67, %%.preheader.2 ], [ %%58, %%.preheader.1  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2696_count);
  llvm_cbe_tmp__574 = (float )llvm_cbe_tmp__574__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__574);
printf("\n = %f",llvm_cbe_tmp__581);
printf("\n = %f",llvm_cbe_tmp__572);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = sext i32 %%storemerge67.2 to i64, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2697_count);
  llvm_cbe_tmp__575 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__575);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 %%61, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2698_count);
  llvm_cbe_tmp__576 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__575))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__575));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__575) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load float* %%62, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2699_count);
  llvm_cbe_tmp__577 = (float )*llvm_cbe_tmp__576;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__577, *(int*)(&llvm_cbe_tmp__577));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%61, i64 0, i64 2, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2700_count);
  llvm_cbe_tmp__578 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__551))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__575))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__575));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__575) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = load float* %%64, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2701_count);
  llvm_cbe_tmp__579 = (float )*llvm_cbe_tmp__578;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__579, *(int*)(&llvm_cbe_tmp__579));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = fmul float %%63, %%65, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2702_count);
  llvm_cbe_tmp__580 = (float )((float )(llvm_cbe_tmp__577 * llvm_cbe_tmp__579));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__580, *(int*)(&llvm_cbe_tmp__580));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = fadd float %%60, %%66, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2703_count);
  llvm_cbe_tmp__581 = (float )((float )(llvm_cbe_tmp__574 + llvm_cbe_tmp__580));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__581, *(int*)(&llvm_cbe_tmp__581));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = add nsw i32 %%storemerge67.2, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2708_count);
  llvm_cbe_tmp__582 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__582&4294967295ull)));
  if (((llvm_cbe_tmp__582&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__583__PHI_TEMPORARY = (float )llvm_cbe_tmp__581;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_1;
  } else {
    llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__582;   /* for PHI node */
    llvm_cbe_tmp__574__PHI_TEMPORARY = (float )llvm_cbe_tmp__581;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader.2' */
  do {     /* Syntactic loop '.preheader.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.1 = phi i32 [ %%59, %%.preheader.1 ], [ 0, %%37  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge67_2e_1_count);
  llvm_cbe_storemerge67_2e_1 = (unsigned int )llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.1 = 0x%X",llvm_cbe_storemerge67_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__573);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = phi float [ %%58, %%.preheader.1 ], [ %%45, %%37  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2655_count);
  llvm_cbe_tmp__565 = (float )llvm_cbe_tmp__565__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__565);
printf("\n = %f",llvm_cbe_tmp__572);
printf("\n = %f",llvm_cbe_tmp__561);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = sext i32 %%storemerge67.1 to i64, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2656_count);
  llvm_cbe_tmp__566 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__566);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 %%52, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2657_count);
  llvm_cbe_tmp__567 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__566))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__566));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__566) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2658_count);
  llvm_cbe_tmp__568 = (float )*llvm_cbe_tmp__567;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__568, *(int*)(&llvm_cbe_tmp__568));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%52, i64 0, i64 1, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2659_count);
  llvm_cbe_tmp__569 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__551))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__566))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__566));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__566) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2660_count);
  llvm_cbe_tmp__570 = (float )*llvm_cbe_tmp__569;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__570, *(int*)(&llvm_cbe_tmp__570));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = fmul float %%54, %%56, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2661_count);
  llvm_cbe_tmp__571 = (float )((float )(llvm_cbe_tmp__568 * llvm_cbe_tmp__570));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__571, *(int*)(&llvm_cbe_tmp__571));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = fadd float %%51, %%57, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2662_count);
  llvm_cbe_tmp__572 = (float )((float )(llvm_cbe_tmp__565 + llvm_cbe_tmp__571));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__572, *(int*)(&llvm_cbe_tmp__572));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add nsw i32 %%storemerge67.1, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2667_count);
  llvm_cbe_tmp__573 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__573&4294967295ull)));
  if (((llvm_cbe_tmp__573&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__574__PHI_TEMPORARY = (float )llvm_cbe_tmp__572;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__573;   /* for PHI node */
    llvm_cbe_tmp__565__PHI_TEMPORARY = (float )llvm_cbe_tmp__572;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader.1' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__644:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67 = phi i32 [ 0, %%.preheader8 ], [ %%46, %%37  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge67_count);
  llvm_cbe_storemerge67 = (unsigned int )llvm_cbe_storemerge67__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67 = 0x%X",llvm_cbe_storemerge67);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__562);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = phi float [ %%36, %%.preheader8 ], [ %%45, %%37  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2593_count);
  llvm_cbe_tmp__554 = (float )llvm_cbe_tmp__554__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__554);
printf("\n = %f",llvm_cbe_tmp__553);
printf("\n = %f",llvm_cbe_tmp__561);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = sext i32 %%storemerge67 to i64, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2594_count);
  llvm_cbe_tmp__555 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__555);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 %%39, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2595_count);
  llvm_cbe_tmp__556 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__555))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__555));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__555) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load float* %%40, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2596_count);
  llvm_cbe_tmp__557 = (float )*llvm_cbe_tmp__556;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__557, *(int*)(&llvm_cbe_tmp__557));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%39, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2597_count);
  llvm_cbe_tmp__558 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__551))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__555))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__551));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__555));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__555) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* %%42, align 4, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2598_count);
  llvm_cbe_tmp__559 = (float )*llvm_cbe_tmp__558;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__559, *(int*)(&llvm_cbe_tmp__559));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = fmul float %%41, %%43, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2599_count);
  llvm_cbe_tmp__560 = (float )((float )(llvm_cbe_tmp__557 * llvm_cbe_tmp__559));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__560, *(int*)(&llvm_cbe_tmp__560));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = fadd float %%38, %%44, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2600_count);
  llvm_cbe_tmp__561 = (float )((float )(llvm_cbe_tmp__554 + llvm_cbe_tmp__560));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__561, *(int*)(&llvm_cbe_tmp__561));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = add nsw i32 %%storemerge67, 1, !dbg !25 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2605_count);
  llvm_cbe_tmp__562 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__562&4294967295ull)));
  if (((llvm_cbe_tmp__562&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__565__PHI_TEMPORARY = (float )llvm_cbe_tmp__561;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1;
  } else {
    llvm_cbe_storemerge67__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__562;   /* for PHI node */
    llvm_cbe_tmp__554__PHI_TEMPORARY = (float )llvm_cbe_tmp__561;   /* for PHI node */
    goto llvm_cbe_tmp__644;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader8' */
llvm_cbe__2e_preheader13:
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add nsw i32 %%storemerge118, -2, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2547_count);
  llvm_cbe_tmp__549 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__549&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = sext i32 %%32 to i64, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_2548_count);
  llvm_cbe_tmp__550 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__549);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__550);
  llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader8;

  } while (1); /* end of syntactic loop '.preheader15' */
  } while (1); /* end of syntactic loop '.preheader17' */
llvm_cbe_tmp__641:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv4}\n");
  return;
}


void conv5(float (*llvm_cbe_in)[10][32], float (*llvm_cbe_out)[8][32], float (*llvm_cbe_kernel)[32][3][3], float *llvm_cbe_bias) {
  static  unsigned long long aesl_llvm_cbe_win_buf_count = 0;
  float llvm_cbe_win_buf[3][3][32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_3009_count = 0;
  static  unsigned long long aesl_llvm_cbe_3010_count = 0;
  static  unsigned long long aesl_llvm_cbe_3011_count = 0;
  static  unsigned long long aesl_llvm_cbe_3012_count = 0;
  static  unsigned long long aesl_llvm_cbe_3013_count = 0;
  static  unsigned long long aesl_llvm_cbe_3014_count = 0;
  static  unsigned long long aesl_llvm_cbe_3015_count = 0;
  static  unsigned long long aesl_llvm_cbe_3016_count = 0;
  static  unsigned long long aesl_llvm_cbe_3017_count = 0;
  static  unsigned long long aesl_llvm_cbe_3018_count = 0;
  static  unsigned long long aesl_llvm_cbe_3019_count = 0;
  static  unsigned long long aesl_llvm_cbe_3020_count = 0;
  static  unsigned long long aesl_llvm_cbe_3021_count = 0;
  static  unsigned long long aesl_llvm_cbe_3022_count = 0;
  static  unsigned long long aesl_llvm_cbe_3023_count = 0;
  static  unsigned long long aesl_llvm_cbe_3024_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned int llvm_cbe_storemerge19;
  unsigned int llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3025_count = 0;
  static  unsigned long long aesl_llvm_cbe_3026_count = 0;
  static  unsigned long long aesl_llvm_cbe_3027_count = 0;
  static  unsigned long long aesl_llvm_cbe_3028_count = 0;
  static  unsigned long long aesl_llvm_cbe_3029_count = 0;
  static  unsigned long long aesl_llvm_cbe_3030_count = 0;
  static  unsigned long long aesl_llvm_cbe_3031_count = 0;
  static  unsigned long long aesl_llvm_cbe_3032_count = 0;
  static  unsigned long long aesl_llvm_cbe_3033_count = 0;
  static  unsigned long long aesl_llvm_cbe_3034_count = 0;
  unsigned long long llvm_cbe_tmp__646;
  static  unsigned long long aesl_llvm_cbe_3035_count = 0;
  static  unsigned long long aesl_llvm_cbe_3036_count = 0;
  unsigned int llvm_cbe_tmp__647;
  static  unsigned long long aesl_llvm_cbe_3037_count = 0;
  unsigned long long llvm_cbe_tmp__648;
  static  unsigned long long aesl_llvm_cbe_3038_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge118_count = 0;
  unsigned int llvm_cbe_storemerge118;
  unsigned int llvm_cbe_storemerge118__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3039_count = 0;
  static  unsigned long long aesl_llvm_cbe_3040_count = 0;
  static  unsigned long long aesl_llvm_cbe_3041_count = 0;
  static  unsigned long long aesl_llvm_cbe_3042_count = 0;
  static  unsigned long long aesl_llvm_cbe_3043_count = 0;
  static  unsigned long long aesl_llvm_cbe_3044_count = 0;
  static  unsigned long long aesl_llvm_cbe_3045_count = 0;
  static  unsigned long long aesl_llvm_cbe_3046_count = 0;
  static  unsigned long long aesl_llvm_cbe_3047_count = 0;
  static  unsigned long long aesl_llvm_cbe_3048_count = 0;
  static  unsigned long long aesl_llvm_cbe_3049_count = 0;
  static  unsigned long long aesl_llvm_cbe_3050_count = 0;
  static  unsigned long long aesl_llvm_cbe_3051_count = 0;
  static  unsigned long long aesl_llvm_cbe_3052_count = 0;
  static  unsigned long long aesl_llvm_cbe_3053_count = 0;
  static  unsigned long long aesl_llvm_cbe_3054_count = 0;
  static  unsigned long long aesl_llvm_cbe_3055_count = 0;
  static  unsigned long long aesl_llvm_cbe_3056_count = 0;
  static  unsigned long long aesl_llvm_cbe_3057_count = 0;
  static  unsigned long long aesl_llvm_cbe_3058_count = 0;
  static  unsigned long long aesl_llvm_cbe_3059_count = 0;
  static  unsigned long long aesl_llvm_cbe_3060_count = 0;
  static  unsigned long long aesl_llvm_cbe_3061_count = 0;
  static  unsigned long long aesl_llvm_cbe_3062_count = 0;
  static  unsigned long long aesl_llvm_cbe_3063_count = 0;
  static  unsigned long long aesl_llvm_cbe_3064_count = 0;
  static  unsigned long long aesl_llvm_cbe_3065_count = 0;
  unsigned long long llvm_cbe_tmp__649;
  static  unsigned long long aesl_llvm_cbe_3066_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge216_count = 0;
  unsigned int llvm_cbe_storemerge216;
  unsigned int llvm_cbe_storemerge216__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3067_count = 0;
  unsigned long long llvm_cbe_tmp__650;
  static  unsigned long long aesl_llvm_cbe_3068_count = 0;
  float *llvm_cbe_tmp__651;
  static  unsigned long long aesl_llvm_cbe_3069_count = 0;
  float llvm_cbe_tmp__652;
  static  unsigned long long aesl_llvm_cbe_3070_count = 0;
  float *llvm_cbe_tmp__653;
  static  unsigned long long aesl_llvm_cbe_3071_count = 0;
  static  unsigned long long aesl_llvm_cbe_3072_count = 0;
  float *llvm_cbe_tmp__654;
  static  unsigned long long aesl_llvm_cbe_3073_count = 0;
  float llvm_cbe_tmp__655;
  static  unsigned long long aesl_llvm_cbe_3074_count = 0;
  static  unsigned long long aesl_llvm_cbe_3075_count = 0;
  float *llvm_cbe_tmp__656;
  static  unsigned long long aesl_llvm_cbe_3076_count = 0;
  float llvm_cbe_tmp__657;
  static  unsigned long long aesl_llvm_cbe_3077_count = 0;
  float *llvm_cbe_tmp__658;
  static  unsigned long long aesl_llvm_cbe_3078_count = 0;
  static  unsigned long long aesl_llvm_cbe_3079_count = 0;
  float *llvm_cbe_tmp__659;
  static  unsigned long long aesl_llvm_cbe_3080_count = 0;
  float llvm_cbe_tmp__660;
  static  unsigned long long aesl_llvm_cbe_3081_count = 0;
  static  unsigned long long aesl_llvm_cbe_3082_count = 0;
  float *llvm_cbe_tmp__661;
  static  unsigned long long aesl_llvm_cbe_3083_count = 0;
  float llvm_cbe_tmp__662;
  static  unsigned long long aesl_llvm_cbe_3084_count = 0;
  float *llvm_cbe_tmp__663;
  static  unsigned long long aesl_llvm_cbe_3085_count = 0;
  static  unsigned long long aesl_llvm_cbe_3086_count = 0;
  float *llvm_cbe_tmp__664;
  static  unsigned long long aesl_llvm_cbe_3087_count = 0;
  float llvm_cbe_tmp__665;
  static  unsigned long long aesl_llvm_cbe_3088_count = 0;
  static  unsigned long long aesl_llvm_cbe_3089_count = 0;
  float *llvm_cbe_tmp__666;
  static  unsigned long long aesl_llvm_cbe_3090_count = 0;
  float llvm_cbe_tmp__667;
  static  unsigned long long aesl_llvm_cbe_3091_count = 0;
  static  unsigned long long aesl_llvm_cbe_3092_count = 0;
  static  unsigned long long aesl_llvm_cbe_3093_count = 0;
  float *llvm_cbe_tmp__668;
  static  unsigned long long aesl_llvm_cbe_3094_count = 0;
  float llvm_cbe_tmp__669;
  static  unsigned long long aesl_llvm_cbe_3095_count = 0;
  static  unsigned long long aesl_llvm_cbe_3096_count = 0;
  static  unsigned long long aesl_llvm_cbe_3097_count = 0;
  static  unsigned long long aesl_llvm_cbe_3098_count = 0;
  float *llvm_cbe_tmp__670;
  static  unsigned long long aesl_llvm_cbe_3099_count = 0;
  float llvm_cbe_tmp__671;
  static  unsigned long long aesl_llvm_cbe_3100_count = 0;
  static  unsigned long long aesl_llvm_cbe_3101_count = 0;
  static  unsigned long long aesl_llvm_cbe_3102_count = 0;
  static  unsigned long long aesl_llvm_cbe_3103_count = 0;
  static  unsigned long long aesl_llvm_cbe_3104_count = 0;
  static  unsigned long long aesl_llvm_cbe_3105_count = 0;
  static  unsigned long long aesl_llvm_cbe_3106_count = 0;
  static  unsigned long long aesl_llvm_cbe_3107_count = 0;
  static  unsigned long long aesl_llvm_cbe_3108_count = 0;
  unsigned int llvm_cbe_tmp__672;
  static  unsigned long long aesl_llvm_cbe_3109_count = 0;
  static  unsigned long long aesl_llvm_cbe_3110_count = 0;
  static  unsigned long long aesl_llvm_cbe_3111_count = 0;
  static  unsigned long long aesl_llvm_cbe_3112_count = 0;
  static  unsigned long long aesl_llvm_cbe_3113_count = 0;
  static  unsigned long long aesl_llvm_cbe_3114_count = 0;
  static  unsigned long long aesl_llvm_cbe_3115_count = 0;
  static  unsigned long long aesl_llvm_cbe_3116_count = 0;
  static  unsigned long long aesl_llvm_cbe_3117_count = 0;
  static  unsigned long long aesl_llvm_cbe_3118_count = 0;
  static  unsigned long long aesl_llvm_cbe_3119_count = 0;
  static  unsigned long long aesl_llvm_cbe_3120_count = 0;
  static  unsigned long long aesl_llvm_cbe_3121_count = 0;
  static  unsigned long long aesl_llvm_cbe_3122_count = 0;
  static  unsigned long long aesl_llvm_cbe_3123_count = 0;
  static  unsigned long long aesl_llvm_cbe_3124_count = 0;
  static  unsigned long long aesl_llvm_cbe_3125_count = 0;
  static  unsigned long long aesl_llvm_cbe_3126_count = 0;
  static  unsigned long long aesl_llvm_cbe_3127_count = 0;
  static  unsigned long long aesl_llvm_cbe_3128_count = 0;
  static  unsigned long long aesl_llvm_cbe_3129_count = 0;
  static  unsigned long long aesl_llvm_cbe_3130_count = 0;
  static  unsigned long long aesl_llvm_cbe_3131_count = 0;
  static  unsigned long long aesl_llvm_cbe_3132_count = 0;
  static  unsigned long long aesl_llvm_cbe_3133_count = 0;
  static  unsigned long long aesl_llvm_cbe_3134_count = 0;
  static  unsigned long long aesl_llvm_cbe_3135_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond30_count = 0;
  static  unsigned long long aesl_llvm_cbe_3136_count = 0;
  static  unsigned long long aesl_llvm_cbe_3137_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_3138_count = 0;
  static  unsigned long long aesl_llvm_cbe_3139_count = 0;
  static  unsigned long long aesl_llvm_cbe_3140_count = 0;
  static  unsigned long long aesl_llvm_cbe_3141_count = 0;
  static  unsigned long long aesl_llvm_cbe_3142_count = 0;
  static  unsigned long long aesl_llvm_cbe_3143_count = 0;
  static  unsigned long long aesl_llvm_cbe_3144_count = 0;
  unsigned int llvm_cbe_tmp__673;
  static  unsigned long long aesl_llvm_cbe_3145_count = 0;
  unsigned long long llvm_cbe_tmp__674;
  static  unsigned long long aesl_llvm_cbe_3146_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge314_count = 0;
  unsigned int llvm_cbe_storemerge314;
  unsigned int llvm_cbe_storemerge314__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3147_count = 0;
  unsigned long long llvm_cbe_tmp__675;
  static  unsigned long long aesl_llvm_cbe_3148_count = 0;
  float *llvm_cbe_tmp__676;
  static  unsigned long long aesl_llvm_cbe_3149_count = 0;
  float llvm_cbe_tmp__677;
  static  unsigned long long aesl_llvm_cbe_3150_count = 0;
  static  unsigned long long aesl_llvm_cbe_3151_count = 0;
  static  unsigned long long aesl_llvm_cbe_3152_count = 0;
  static  unsigned long long aesl_llvm_cbe_3153_count = 0;
  static  unsigned long long aesl_llvm_cbe_3154_count = 0;
  static  unsigned long long aesl_llvm_cbe_3155_count = 0;
  static  unsigned long long aesl_llvm_cbe_3156_count = 0;
  static  unsigned long long aesl_llvm_cbe_3157_count = 0;
  static  unsigned long long aesl_llvm_cbe_3158_count = 0;
  static  unsigned long long aesl_llvm_cbe_3159_count = 0;
  static  unsigned long long aesl_llvm_cbe_3160_count = 0;
  static  unsigned long long aesl_llvm_cbe_3161_count = 0;
  static  unsigned long long aesl_llvm_cbe_3162_count = 0;
  static  unsigned long long aesl_llvm_cbe_3163_count = 0;
  static  unsigned long long aesl_llvm_cbe_3164_count = 0;
  static  unsigned long long aesl_llvm_cbe_3165_count = 0;
  static  unsigned long long aesl_llvm_cbe_3166_count = 0;
  static  unsigned long long aesl_llvm_cbe_3167_count = 0;
  static  unsigned long long aesl_llvm_cbe_3168_count = 0;
  static  unsigned long long aesl_llvm_cbe_3169_count = 0;
  static  unsigned long long aesl_llvm_cbe_3170_count = 0;
  static  unsigned long long aesl_llvm_cbe_3171_count = 0;
  static  unsigned long long aesl_llvm_cbe_3172_count = 0;
  static  unsigned long long aesl_llvm_cbe_3173_count = 0;
  static  unsigned long long aesl_llvm_cbe_3174_count = 0;
  static  unsigned long long aesl_llvm_cbe_3175_count = 0;
  static  unsigned long long aesl_llvm_cbe_3176_count = 0;
  static  unsigned long long aesl_llvm_cbe_3177_count = 0;
  static  unsigned long long aesl_llvm_cbe_3178_count = 0;
  static  unsigned long long aesl_llvm_cbe_3179_count = 0;
  static  unsigned long long aesl_llvm_cbe_3180_count = 0;
  static  unsigned long long aesl_llvm_cbe_3181_count = 0;
  static  unsigned long long aesl_llvm_cbe_3182_count = 0;
  static  unsigned long long aesl_llvm_cbe_3183_count = 0;
  static  unsigned long long aesl_llvm_cbe_3184_count = 0;
  static  unsigned long long aesl_llvm_cbe_3185_count = 0;
  static  unsigned long long aesl_llvm_cbe_3186_count = 0;
  static  unsigned long long aesl_llvm_cbe_3187_count = 0;
  static  unsigned long long aesl_llvm_cbe_3188_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_count = 0;
  unsigned int llvm_cbe_storemerge67;
  unsigned int llvm_cbe_storemerge67__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3189_count = 0;
  float llvm_cbe_tmp__678;
  float llvm_cbe_tmp__678__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3190_count = 0;
  unsigned long long llvm_cbe_tmp__679;
  static  unsigned long long aesl_llvm_cbe_3191_count = 0;
  float *llvm_cbe_tmp__680;
  static  unsigned long long aesl_llvm_cbe_3192_count = 0;
  float llvm_cbe_tmp__681;
  static  unsigned long long aesl_llvm_cbe_3193_count = 0;
  float *llvm_cbe_tmp__682;
  static  unsigned long long aesl_llvm_cbe_3194_count = 0;
  float llvm_cbe_tmp__683;
  static  unsigned long long aesl_llvm_cbe_3195_count = 0;
  float llvm_cbe_tmp__684;
  static  unsigned long long aesl_llvm_cbe_3196_count = 0;
  float llvm_cbe_tmp__685;
  static  unsigned long long aesl_llvm_cbe_3197_count = 0;
  static  unsigned long long aesl_llvm_cbe_3198_count = 0;
  static  unsigned long long aesl_llvm_cbe_3199_count = 0;
  static  unsigned long long aesl_llvm_cbe_3200_count = 0;
  unsigned int llvm_cbe_tmp__686;
  static  unsigned long long aesl_llvm_cbe_3201_count = 0;
  static  unsigned long long aesl_llvm_cbe_3202_count = 0;
  static  unsigned long long aesl_llvm_cbe_3203_count = 0;
  static  unsigned long long aesl_llvm_cbe_3204_count = 0;
  static  unsigned long long aesl_llvm_cbe_3205_count = 0;
  static  unsigned long long aesl_llvm_cbe_3206_count = 0;
  static  unsigned long long aesl_llvm_cbe_3207_count = 0;
  static  unsigned long long aesl_llvm_cbe_3208_count = 0;
  static  unsigned long long aesl_llvm_cbe_3209_count = 0;
  static  unsigned long long aesl_llvm_cbe_3210_count = 0;
  static  unsigned long long aesl_llvm_cbe_3211_count = 0;
  static  unsigned long long aesl_llvm_cbe_3212_count = 0;
  static  unsigned long long aesl_llvm_cbe_3213_count = 0;
  static  unsigned long long aesl_llvm_cbe_3214_count = 0;
  static  unsigned long long aesl_llvm_cbe_3215_count = 0;
  static  unsigned long long aesl_llvm_cbe_3216_count = 0;
  static  unsigned long long aesl_llvm_cbe_3217_count = 0;
  static  unsigned long long aesl_llvm_cbe_3218_count = 0;
  static  unsigned long long aesl_llvm_cbe_3219_count = 0;
  static  unsigned long long aesl_llvm_cbe_3220_count = 0;
  static  unsigned long long aesl_llvm_cbe_3221_count = 0;
  static  unsigned long long aesl_llvm_cbe_3222_count = 0;
  static  unsigned long long aesl_llvm_cbe_3223_count = 0;
  static  unsigned long long aesl_llvm_cbe_3224_count = 0;
  static  unsigned long long aesl_llvm_cbe_3225_count = 0;
  static  unsigned long long aesl_llvm_cbe_3226_count = 0;
  static  unsigned long long aesl_llvm_cbe_3227_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_3228_count = 0;
  static  unsigned long long aesl_llvm_cbe_3229_count = 0;
  unsigned int llvm_cbe_tmp__687;
  static  unsigned long long aesl_llvm_cbe_3230_count = 0;
  static  unsigned long long aesl_llvm_cbe_3231_count = 0;
  static  unsigned long long aesl_llvm_cbe_3232_count = 0;
  static  unsigned long long aesl_llvm_cbe_3233_count = 0;
  static  unsigned long long aesl_llvm_cbe_3234_count = 0;
  static  unsigned long long aesl_llvm_cbe_3235_count = 0;
  static  unsigned long long aesl_llvm_cbe_3236_count = 0;
  static  unsigned long long aesl_llvm_cbe_3237_count = 0;
  static  unsigned long long aesl_llvm_cbe_3238_count = 0;
  static  unsigned long long aesl_llvm_cbe_3239_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond31_count = 0;
  static  unsigned long long aesl_llvm_cbe_3240_count = 0;
  static  unsigned long long aesl_llvm_cbe_3241_count = 0;
  unsigned int llvm_cbe_tmp__688;
  static  unsigned long long aesl_llvm_cbe_3242_count = 0;
  static  unsigned long long aesl_llvm_cbe_3243_count = 0;
  static  unsigned long long aesl_llvm_cbe_3244_count = 0;
  static  unsigned long long aesl_llvm_cbe_3245_count = 0;
  static  unsigned long long aesl_llvm_cbe_3246_count = 0;
  static  unsigned long long aesl_llvm_cbe_3247_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond32_count = 0;
  static  unsigned long long aesl_llvm_cbe_3248_count = 0;
  static  unsigned long long aesl_llvm_cbe_3249_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_1;
  unsigned int llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3250_count = 0;
  float llvm_cbe_tmp__689;
  float llvm_cbe_tmp__689__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3251_count = 0;
  unsigned long long llvm_cbe_tmp__690;
  static  unsigned long long aesl_llvm_cbe_3252_count = 0;
  float *llvm_cbe_tmp__691;
  static  unsigned long long aesl_llvm_cbe_3253_count = 0;
  float llvm_cbe_tmp__692;
  static  unsigned long long aesl_llvm_cbe_3254_count = 0;
  float *llvm_cbe_tmp__693;
  static  unsigned long long aesl_llvm_cbe_3255_count = 0;
  float llvm_cbe_tmp__694;
  static  unsigned long long aesl_llvm_cbe_3256_count = 0;
  float llvm_cbe_tmp__695;
  static  unsigned long long aesl_llvm_cbe_3257_count = 0;
  float llvm_cbe_tmp__696;
  static  unsigned long long aesl_llvm_cbe_3258_count = 0;
  static  unsigned long long aesl_llvm_cbe_3259_count = 0;
  static  unsigned long long aesl_llvm_cbe_3260_count = 0;
  static  unsigned long long aesl_llvm_cbe_3261_count = 0;
  unsigned int llvm_cbe_tmp__697;
  static  unsigned long long aesl_llvm_cbe_3262_count = 0;
  static  unsigned long long aesl_llvm_cbe_3263_count = 0;
  static  unsigned long long aesl_llvm_cbe_3264_count = 0;
  static  unsigned long long aesl_llvm_cbe_3265_count = 0;
  static  unsigned long long aesl_llvm_cbe_3266_count = 0;
  static  unsigned long long aesl_llvm_cbe_3267_count = 0;
  static  unsigned long long aesl_llvm_cbe_3268_count = 0;
  static  unsigned long long aesl_llvm_cbe_3269_count = 0;
  static  unsigned long long aesl_llvm_cbe_3270_count = 0;
  static  unsigned long long aesl_llvm_cbe_3271_count = 0;
  static  unsigned long long aesl_llvm_cbe_3272_count = 0;
  static  unsigned long long aesl_llvm_cbe_3273_count = 0;
  static  unsigned long long aesl_llvm_cbe_3274_count = 0;
  static  unsigned long long aesl_llvm_cbe_3275_count = 0;
  static  unsigned long long aesl_llvm_cbe_3276_count = 0;
  static  unsigned long long aesl_llvm_cbe_3277_count = 0;
  static  unsigned long long aesl_llvm_cbe_3278_count = 0;
  static  unsigned long long aesl_llvm_cbe_3279_count = 0;
  static  unsigned long long aesl_llvm_cbe_3280_count = 0;
  static  unsigned long long aesl_llvm_cbe_3281_count = 0;
  static  unsigned long long aesl_llvm_cbe_3282_count = 0;
  static  unsigned long long aesl_llvm_cbe_3283_count = 0;
  static  unsigned long long aesl_llvm_cbe_3284_count = 0;
  static  unsigned long long aesl_llvm_cbe_3285_count = 0;
  static  unsigned long long aesl_llvm_cbe_3286_count = 0;
  static  unsigned long long aesl_llvm_cbe_3287_count = 0;
  static  unsigned long long aesl_llvm_cbe_3288_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_3289_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_2;
  unsigned int llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3290_count = 0;
  float llvm_cbe_tmp__698;
  float llvm_cbe_tmp__698__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3291_count = 0;
  unsigned long long llvm_cbe_tmp__699;
  static  unsigned long long aesl_llvm_cbe_3292_count = 0;
  float *llvm_cbe_tmp__700;
  static  unsigned long long aesl_llvm_cbe_3293_count = 0;
  float llvm_cbe_tmp__701;
  static  unsigned long long aesl_llvm_cbe_3294_count = 0;
  float *llvm_cbe_tmp__702;
  static  unsigned long long aesl_llvm_cbe_3295_count = 0;
  float llvm_cbe_tmp__703;
  static  unsigned long long aesl_llvm_cbe_3296_count = 0;
  float llvm_cbe_tmp__704;
  static  unsigned long long aesl_llvm_cbe_3297_count = 0;
  float llvm_cbe_tmp__705;
  static  unsigned long long aesl_llvm_cbe_3298_count = 0;
  static  unsigned long long aesl_llvm_cbe_3299_count = 0;
  static  unsigned long long aesl_llvm_cbe_3300_count = 0;
  static  unsigned long long aesl_llvm_cbe_3301_count = 0;
  unsigned int llvm_cbe_tmp__706;
  static  unsigned long long aesl_llvm_cbe_3302_count = 0;
  static  unsigned long long aesl_llvm_cbe_3303_count = 0;
  static  unsigned long long aesl_llvm_cbe_3304_count = 0;
  static  unsigned long long aesl_llvm_cbe_3305_count = 0;
  static  unsigned long long aesl_llvm_cbe_3306_count = 0;
  static  unsigned long long aesl_llvm_cbe_3307_count = 0;
  static  unsigned long long aesl_llvm_cbe_3308_count = 0;
  static  unsigned long long aesl_llvm_cbe_3309_count = 0;
  static  unsigned long long aesl_llvm_cbe_3310_count = 0;
  static  unsigned long long aesl_llvm_cbe_3311_count = 0;
  static  unsigned long long aesl_llvm_cbe_3312_count = 0;
  static  unsigned long long aesl_llvm_cbe_3313_count = 0;
  static  unsigned long long aesl_llvm_cbe_3314_count = 0;
  static  unsigned long long aesl_llvm_cbe_3315_count = 0;
  static  unsigned long long aesl_llvm_cbe_3316_count = 0;
  static  unsigned long long aesl_llvm_cbe_3317_count = 0;
  static  unsigned long long aesl_llvm_cbe_3318_count = 0;
  static  unsigned long long aesl_llvm_cbe_3319_count = 0;
  static  unsigned long long aesl_llvm_cbe_3320_count = 0;
  static  unsigned long long aesl_llvm_cbe_3321_count = 0;
  static  unsigned long long aesl_llvm_cbe_3322_count = 0;
  static  unsigned long long aesl_llvm_cbe_3323_count = 0;
  static  unsigned long long aesl_llvm_cbe_3324_count = 0;
  static  unsigned long long aesl_llvm_cbe_3325_count = 0;
  static  unsigned long long aesl_llvm_cbe_3326_count = 0;
  static  unsigned long long aesl_llvm_cbe_3327_count = 0;
  static  unsigned long long aesl_llvm_cbe_3328_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3329_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_124_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_124;
  unsigned int llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3330_count = 0;
  float llvm_cbe_tmp__707;
  float llvm_cbe_tmp__707__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3331_count = 0;
  unsigned long long llvm_cbe_tmp__708;
  static  unsigned long long aesl_llvm_cbe_3332_count = 0;
  float *llvm_cbe_tmp__709;
  static  unsigned long long aesl_llvm_cbe_3333_count = 0;
  float llvm_cbe_tmp__710;
  static  unsigned long long aesl_llvm_cbe_3334_count = 0;
  float *llvm_cbe_tmp__711;
  static  unsigned long long aesl_llvm_cbe_3335_count = 0;
  float llvm_cbe_tmp__712;
  static  unsigned long long aesl_llvm_cbe_3336_count = 0;
  float llvm_cbe_tmp__713;
  static  unsigned long long aesl_llvm_cbe_3337_count = 0;
  float llvm_cbe_tmp__714;
  static  unsigned long long aesl_llvm_cbe_3338_count = 0;
  static  unsigned long long aesl_llvm_cbe_3339_count = 0;
  static  unsigned long long aesl_llvm_cbe_3340_count = 0;
  static  unsigned long long aesl_llvm_cbe_3341_count = 0;
  unsigned int llvm_cbe_tmp__715;
  static  unsigned long long aesl_llvm_cbe_3342_count = 0;
  static  unsigned long long aesl_llvm_cbe_3343_count = 0;
  static  unsigned long long aesl_llvm_cbe_3344_count = 0;
  static  unsigned long long aesl_llvm_cbe_3345_count = 0;
  static  unsigned long long aesl_llvm_cbe_3346_count = 0;
  static  unsigned long long aesl_llvm_cbe_3347_count = 0;
  static  unsigned long long aesl_llvm_cbe_3348_count = 0;
  static  unsigned long long aesl_llvm_cbe_3349_count = 0;
  static  unsigned long long aesl_llvm_cbe_3350_count = 0;
  static  unsigned long long aesl_llvm_cbe_3351_count = 0;
  static  unsigned long long aesl_llvm_cbe_3352_count = 0;
  static  unsigned long long aesl_llvm_cbe_3353_count = 0;
  static  unsigned long long aesl_llvm_cbe_3354_count = 0;
  static  unsigned long long aesl_llvm_cbe_3355_count = 0;
  static  unsigned long long aesl_llvm_cbe_3356_count = 0;
  static  unsigned long long aesl_llvm_cbe_3357_count = 0;
  static  unsigned long long aesl_llvm_cbe_3358_count = 0;
  static  unsigned long long aesl_llvm_cbe_3359_count = 0;
  static  unsigned long long aesl_llvm_cbe_3360_count = 0;
  static  unsigned long long aesl_llvm_cbe_3361_count = 0;
  static  unsigned long long aesl_llvm_cbe_3362_count = 0;
  static  unsigned long long aesl_llvm_cbe_3363_count = 0;
  static  unsigned long long aesl_llvm_cbe_3364_count = 0;
  static  unsigned long long aesl_llvm_cbe_3365_count = 0;
  static  unsigned long long aesl_llvm_cbe_3366_count = 0;
  static  unsigned long long aesl_llvm_cbe_3367_count = 0;
  static  unsigned long long aesl_llvm_cbe_3368_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_3369_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_1_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_1;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3370_count = 0;
  float llvm_cbe_tmp__716;
  float llvm_cbe_tmp__716__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3371_count = 0;
  unsigned long long llvm_cbe_tmp__717;
  static  unsigned long long aesl_llvm_cbe_3372_count = 0;
  float *llvm_cbe_tmp__718;
  static  unsigned long long aesl_llvm_cbe_3373_count = 0;
  float llvm_cbe_tmp__719;
  static  unsigned long long aesl_llvm_cbe_3374_count = 0;
  float *llvm_cbe_tmp__720;
  static  unsigned long long aesl_llvm_cbe_3375_count = 0;
  float llvm_cbe_tmp__721;
  static  unsigned long long aesl_llvm_cbe_3376_count = 0;
  float llvm_cbe_tmp__722;
  static  unsigned long long aesl_llvm_cbe_3377_count = 0;
  float llvm_cbe_tmp__723;
  static  unsigned long long aesl_llvm_cbe_3378_count = 0;
  static  unsigned long long aesl_llvm_cbe_3379_count = 0;
  static  unsigned long long aesl_llvm_cbe_3380_count = 0;
  static  unsigned long long aesl_llvm_cbe_3381_count = 0;
  unsigned int llvm_cbe_tmp__724;
  static  unsigned long long aesl_llvm_cbe_3382_count = 0;
  static  unsigned long long aesl_llvm_cbe_3383_count = 0;
  static  unsigned long long aesl_llvm_cbe_3384_count = 0;
  static  unsigned long long aesl_llvm_cbe_3385_count = 0;
  static  unsigned long long aesl_llvm_cbe_3386_count = 0;
  static  unsigned long long aesl_llvm_cbe_3387_count = 0;
  static  unsigned long long aesl_llvm_cbe_3388_count = 0;
  static  unsigned long long aesl_llvm_cbe_3389_count = 0;
  static  unsigned long long aesl_llvm_cbe_3390_count = 0;
  static  unsigned long long aesl_llvm_cbe_3391_count = 0;
  static  unsigned long long aesl_llvm_cbe_3392_count = 0;
  static  unsigned long long aesl_llvm_cbe_3393_count = 0;
  static  unsigned long long aesl_llvm_cbe_3394_count = 0;
  static  unsigned long long aesl_llvm_cbe_3395_count = 0;
  static  unsigned long long aesl_llvm_cbe_3396_count = 0;
  static  unsigned long long aesl_llvm_cbe_3397_count = 0;
  static  unsigned long long aesl_llvm_cbe_3398_count = 0;
  static  unsigned long long aesl_llvm_cbe_3399_count = 0;
  static  unsigned long long aesl_llvm_cbe_3400_count = 0;
  static  unsigned long long aesl_llvm_cbe_3401_count = 0;
  static  unsigned long long aesl_llvm_cbe_3402_count = 0;
  static  unsigned long long aesl_llvm_cbe_3403_count = 0;
  static  unsigned long long aesl_llvm_cbe_3404_count = 0;
  static  unsigned long long aesl_llvm_cbe_3405_count = 0;
  static  unsigned long long aesl_llvm_cbe_3406_count = 0;
  static  unsigned long long aesl_llvm_cbe_3407_count = 0;
  static  unsigned long long aesl_llvm_cbe_3408_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_3409_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_2_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_1;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3410_count = 0;
  float llvm_cbe_tmp__725;
  float llvm_cbe_tmp__725__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3411_count = 0;
  unsigned long long llvm_cbe_tmp__726;
  static  unsigned long long aesl_llvm_cbe_3412_count = 0;
  float *llvm_cbe_tmp__727;
  static  unsigned long long aesl_llvm_cbe_3413_count = 0;
  float llvm_cbe_tmp__728;
  static  unsigned long long aesl_llvm_cbe_3414_count = 0;
  float *llvm_cbe_tmp__729;
  static  unsigned long long aesl_llvm_cbe_3415_count = 0;
  float llvm_cbe_tmp__730;
  static  unsigned long long aesl_llvm_cbe_3416_count = 0;
  float llvm_cbe_tmp__731;
  static  unsigned long long aesl_llvm_cbe_3417_count = 0;
  float llvm_cbe_tmp__732;
  static  unsigned long long aesl_llvm_cbe_3418_count = 0;
  static  unsigned long long aesl_llvm_cbe_3419_count = 0;
  static  unsigned long long aesl_llvm_cbe_3420_count = 0;
  static  unsigned long long aesl_llvm_cbe_3421_count = 0;
  unsigned int llvm_cbe_tmp__733;
  static  unsigned long long aesl_llvm_cbe_3422_count = 0;
  static  unsigned long long aesl_llvm_cbe_3423_count = 0;
  static  unsigned long long aesl_llvm_cbe_3424_count = 0;
  static  unsigned long long aesl_llvm_cbe_3425_count = 0;
  static  unsigned long long aesl_llvm_cbe_3426_count = 0;
  static  unsigned long long aesl_llvm_cbe_3427_count = 0;
  static  unsigned long long aesl_llvm_cbe_3428_count = 0;
  static  unsigned long long aesl_llvm_cbe_3429_count = 0;
  static  unsigned long long aesl_llvm_cbe_3430_count = 0;
  static  unsigned long long aesl_llvm_cbe_3431_count = 0;
  static  unsigned long long aesl_llvm_cbe_3432_count = 0;
  static  unsigned long long aesl_llvm_cbe_3433_count = 0;
  static  unsigned long long aesl_llvm_cbe_3434_count = 0;
  static  unsigned long long aesl_llvm_cbe_3435_count = 0;
  static  unsigned long long aesl_llvm_cbe_3436_count = 0;
  static  unsigned long long aesl_llvm_cbe_3437_count = 0;
  static  unsigned long long aesl_llvm_cbe_3438_count = 0;
  static  unsigned long long aesl_llvm_cbe_3439_count = 0;
  static  unsigned long long aesl_llvm_cbe_3440_count = 0;
  static  unsigned long long aesl_llvm_cbe_3441_count = 0;
  static  unsigned long long aesl_llvm_cbe_3442_count = 0;
  static  unsigned long long aesl_llvm_cbe_3443_count = 0;
  static  unsigned long long aesl_llvm_cbe_3444_count = 0;
  static  unsigned long long aesl_llvm_cbe_3445_count = 0;
  static  unsigned long long aesl_llvm_cbe_3446_count = 0;
  static  unsigned long long aesl_llvm_cbe_3447_count = 0;
  static  unsigned long long aesl_llvm_cbe_3448_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_3449_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_227_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_227;
  unsigned int llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3450_count = 0;
  float llvm_cbe_tmp__734;
  float llvm_cbe_tmp__734__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3451_count = 0;
  unsigned long long llvm_cbe_tmp__735;
  static  unsigned long long aesl_llvm_cbe_3452_count = 0;
  float *llvm_cbe_tmp__736;
  static  unsigned long long aesl_llvm_cbe_3453_count = 0;
  float llvm_cbe_tmp__737;
  static  unsigned long long aesl_llvm_cbe_3454_count = 0;
  float *llvm_cbe_tmp__738;
  static  unsigned long long aesl_llvm_cbe_3455_count = 0;
  float llvm_cbe_tmp__739;
  static  unsigned long long aesl_llvm_cbe_3456_count = 0;
  float llvm_cbe_tmp__740;
  static  unsigned long long aesl_llvm_cbe_3457_count = 0;
  float llvm_cbe_tmp__741;
  static  unsigned long long aesl_llvm_cbe_3458_count = 0;
  static  unsigned long long aesl_llvm_cbe_3459_count = 0;
  static  unsigned long long aesl_llvm_cbe_3460_count = 0;
  static  unsigned long long aesl_llvm_cbe_3461_count = 0;
  unsigned int llvm_cbe_tmp__742;
  static  unsigned long long aesl_llvm_cbe_3462_count = 0;
  static  unsigned long long aesl_llvm_cbe_3463_count = 0;
  static  unsigned long long aesl_llvm_cbe_3464_count = 0;
  static  unsigned long long aesl_llvm_cbe_3465_count = 0;
  static  unsigned long long aesl_llvm_cbe_3466_count = 0;
  static  unsigned long long aesl_llvm_cbe_3467_count = 0;
  static  unsigned long long aesl_llvm_cbe_3468_count = 0;
  static  unsigned long long aesl_llvm_cbe_3469_count = 0;
  static  unsigned long long aesl_llvm_cbe_3470_count = 0;
  static  unsigned long long aesl_llvm_cbe_3471_count = 0;
  static  unsigned long long aesl_llvm_cbe_3472_count = 0;
  static  unsigned long long aesl_llvm_cbe_3473_count = 0;
  static  unsigned long long aesl_llvm_cbe_3474_count = 0;
  static  unsigned long long aesl_llvm_cbe_3475_count = 0;
  static  unsigned long long aesl_llvm_cbe_3476_count = 0;
  static  unsigned long long aesl_llvm_cbe_3477_count = 0;
  static  unsigned long long aesl_llvm_cbe_3478_count = 0;
  static  unsigned long long aesl_llvm_cbe_3479_count = 0;
  static  unsigned long long aesl_llvm_cbe_3480_count = 0;
  static  unsigned long long aesl_llvm_cbe_3481_count = 0;
  static  unsigned long long aesl_llvm_cbe_3482_count = 0;
  static  unsigned long long aesl_llvm_cbe_3483_count = 0;
  static  unsigned long long aesl_llvm_cbe_3484_count = 0;
  static  unsigned long long aesl_llvm_cbe_3485_count = 0;
  static  unsigned long long aesl_llvm_cbe_3486_count = 0;
  static  unsigned long long aesl_llvm_cbe_3487_count = 0;
  static  unsigned long long aesl_llvm_cbe_3488_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_3489_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_1_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_2;
  unsigned int llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3490_count = 0;
  float llvm_cbe_tmp__743;
  float llvm_cbe_tmp__743__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3491_count = 0;
  unsigned long long llvm_cbe_tmp__744;
  static  unsigned long long aesl_llvm_cbe_3492_count = 0;
  float *llvm_cbe_tmp__745;
  static  unsigned long long aesl_llvm_cbe_3493_count = 0;
  float llvm_cbe_tmp__746;
  static  unsigned long long aesl_llvm_cbe_3494_count = 0;
  float *llvm_cbe_tmp__747;
  static  unsigned long long aesl_llvm_cbe_3495_count = 0;
  float llvm_cbe_tmp__748;
  static  unsigned long long aesl_llvm_cbe_3496_count = 0;
  float llvm_cbe_tmp__749;
  static  unsigned long long aesl_llvm_cbe_3497_count = 0;
  float llvm_cbe_tmp__750;
  static  unsigned long long aesl_llvm_cbe_3498_count = 0;
  static  unsigned long long aesl_llvm_cbe_3499_count = 0;
  static  unsigned long long aesl_llvm_cbe_3500_count = 0;
  static  unsigned long long aesl_llvm_cbe_3501_count = 0;
  unsigned int llvm_cbe_tmp__751;
  static  unsigned long long aesl_llvm_cbe_3502_count = 0;
  static  unsigned long long aesl_llvm_cbe_3503_count = 0;
  static  unsigned long long aesl_llvm_cbe_3504_count = 0;
  static  unsigned long long aesl_llvm_cbe_3505_count = 0;
  static  unsigned long long aesl_llvm_cbe_3506_count = 0;
  static  unsigned long long aesl_llvm_cbe_3507_count = 0;
  static  unsigned long long aesl_llvm_cbe_3508_count = 0;
  static  unsigned long long aesl_llvm_cbe_3509_count = 0;
  static  unsigned long long aesl_llvm_cbe_3510_count = 0;
  static  unsigned long long aesl_llvm_cbe_3511_count = 0;
  static  unsigned long long aesl_llvm_cbe_3512_count = 0;
  static  unsigned long long aesl_llvm_cbe_3513_count = 0;
  static  unsigned long long aesl_llvm_cbe_3514_count = 0;
  static  unsigned long long aesl_llvm_cbe_3515_count = 0;
  static  unsigned long long aesl_llvm_cbe_3516_count = 0;
  static  unsigned long long aesl_llvm_cbe_3517_count = 0;
  static  unsigned long long aesl_llvm_cbe_3518_count = 0;
  static  unsigned long long aesl_llvm_cbe_3519_count = 0;
  static  unsigned long long aesl_llvm_cbe_3520_count = 0;
  static  unsigned long long aesl_llvm_cbe_3521_count = 0;
  static  unsigned long long aesl_llvm_cbe_3522_count = 0;
  static  unsigned long long aesl_llvm_cbe_3523_count = 0;
  static  unsigned long long aesl_llvm_cbe_3524_count = 0;
  static  unsigned long long aesl_llvm_cbe_3525_count = 0;
  static  unsigned long long aesl_llvm_cbe_3526_count = 0;
  static  unsigned long long aesl_llvm_cbe_3527_count = 0;
  static  unsigned long long aesl_llvm_cbe_3528_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3529_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge67_2e_2_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_2;
  unsigned int llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3530_count = 0;
  float llvm_cbe_tmp__752;
  float llvm_cbe_tmp__752__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3531_count = 0;
  unsigned long long llvm_cbe_tmp__753;
  static  unsigned long long aesl_llvm_cbe_3532_count = 0;
  float *llvm_cbe_tmp__754;
  static  unsigned long long aesl_llvm_cbe_3533_count = 0;
  float llvm_cbe_tmp__755;
  static  unsigned long long aesl_llvm_cbe_3534_count = 0;
  float *llvm_cbe_tmp__756;
  static  unsigned long long aesl_llvm_cbe_3535_count = 0;
  float llvm_cbe_tmp__757;
  static  unsigned long long aesl_llvm_cbe_3536_count = 0;
  float llvm_cbe_tmp__758;
  static  unsigned long long aesl_llvm_cbe_3537_count = 0;
  float llvm_cbe_tmp__759;
  static  unsigned long long aesl_llvm_cbe_3538_count = 0;
  static  unsigned long long aesl_llvm_cbe_3539_count = 0;
  static  unsigned long long aesl_llvm_cbe_3540_count = 0;
  static  unsigned long long aesl_llvm_cbe_3541_count = 0;
  unsigned int llvm_cbe_tmp__760;
  static  unsigned long long aesl_llvm_cbe_3542_count = 0;
  static  unsigned long long aesl_llvm_cbe_3543_count = 0;
  static  unsigned long long aesl_llvm_cbe_3544_count = 0;
  static  unsigned long long aesl_llvm_cbe_3545_count = 0;
  static  unsigned long long aesl_llvm_cbe_3546_count = 0;
  static  unsigned long long aesl_llvm_cbe_3547_count = 0;
  static  unsigned long long aesl_llvm_cbe_3548_count = 0;
  static  unsigned long long aesl_llvm_cbe_3549_count = 0;
  static  unsigned long long aesl_llvm_cbe_3550_count = 0;
  static  unsigned long long aesl_llvm_cbe_3551_count = 0;
  static  unsigned long long aesl_llvm_cbe_3552_count = 0;
  static  unsigned long long aesl_llvm_cbe_3553_count = 0;
  static  unsigned long long aesl_llvm_cbe_3554_count = 0;
  static  unsigned long long aesl_llvm_cbe_3555_count = 0;
  static  unsigned long long aesl_llvm_cbe_3556_count = 0;
  static  unsigned long long aesl_llvm_cbe_3557_count = 0;
  static  unsigned long long aesl_llvm_cbe_3558_count = 0;
  static  unsigned long long aesl_llvm_cbe_3559_count = 0;
  static  unsigned long long aesl_llvm_cbe_3560_count = 0;
  static  unsigned long long aesl_llvm_cbe_3561_count = 0;
  static  unsigned long long aesl_llvm_cbe_3562_count = 0;
  static  unsigned long long aesl_llvm_cbe_3563_count = 0;
  static  unsigned long long aesl_llvm_cbe_3564_count = 0;
  static  unsigned long long aesl_llvm_cbe_3565_count = 0;
  static  unsigned long long aesl_llvm_cbe_3566_count = 0;
  static  unsigned long long aesl_llvm_cbe_3567_count = 0;
  static  unsigned long long aesl_llvm_cbe_3568_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3569_count = 0;
  static  unsigned long long aesl_llvm_cbe_3570_count = 0;
  static  unsigned long long aesl_llvm_cbe_3571_count = 0;
  static  unsigned long long aesl_llvm_cbe_3572_count = 0;
  static  unsigned long long aesl_llvm_cbe_3573_count = 0;
  static  unsigned long long aesl_llvm_cbe_3574_count = 0;
  static  unsigned long long aesl_llvm_cbe_3575_count = 0;
  static  unsigned long long aesl_llvm_cbe_3576_count = 0;
  static  unsigned long long aesl_llvm_cbe_3577_count = 0;
  static  unsigned long long aesl_llvm_cbe_3578_count = 0;
  static  unsigned long long aesl_llvm_cbe_3579_count = 0;
  static  unsigned long long aesl_llvm_cbe_3580_count = 0;
  float *llvm_cbe_tmp__761;
  static  unsigned long long aesl_llvm_cbe_3581_count = 0;
  static  unsigned long long aesl_llvm_cbe_3582_count = 0;
  unsigned int llvm_cbe_tmp__762;
  static  unsigned long long aesl_llvm_cbe_3583_count = 0;
  static  unsigned long long aesl_llvm_cbe_3584_count = 0;
  static  unsigned long long aesl_llvm_cbe_3585_count = 0;
  static  unsigned long long aesl_llvm_cbe_3586_count = 0;
  static  unsigned long long aesl_llvm_cbe_3587_count = 0;
  static  unsigned long long aesl_llvm_cbe_3588_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond29_count = 0;
  static  unsigned long long aesl_llvm_cbe_3589_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv5\n");
  llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader17;

  do {     /* Syntactic loop '.preheader17' to make GCC happy */
llvm_cbe__2e_preheader17:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i32 [ 0, %%0 ], [ %%49, %%48  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned int )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%X",llvm_cbe_storemerge19);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__688);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge19 to i64, !dbg !19 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3034_count);
  llvm_cbe_tmp__646 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__646);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add nsw i32 %%storemerge19, -2, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3036_count);
  llvm_cbe_tmp__647 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__647&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3037_count);
  llvm_cbe_tmp__648 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__647);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__648);
  llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader15;

llvm_cbe_tmp__763:
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add nsw i32 %%storemerge19, 1, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3241_count);
  llvm_cbe_tmp__688 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__688&4294967295ull)));
  if (((llvm_cbe_tmp__688&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe_tmp__764;
  } else {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__688;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  }

  do {     /* Syntactic loop '.preheader15' to make GCC happy */
llvm_cbe__2e_preheader15:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge118 = phi i32 [ 0, %%.preheader17 ], [ %%47, %%.loopexit  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge118_count);
  llvm_cbe_storemerge118 = (unsigned int )llvm_cbe_storemerge118__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge118 = 0x%X",llvm_cbe_storemerge118);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__687);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge118 to i64, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3065_count);
  llvm_cbe_tmp__649 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge118);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__649);
  llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__765;

llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = add nsw i32 %%storemerge118, 1, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3229_count);
  llvm_cbe_tmp__687 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__687&4294967295ull)));
  if (((llvm_cbe_tmp__687&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe_tmp__763;
  } else {
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__687;   /* for PHI node */
    goto llvm_cbe__2e_preheader15;
  }

llvm_cbe_tmp__766:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = and i1 %%2, %%31, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((signed int )llvm_cbe_storemerge19) > ((signed int )1u)) & (((signed int )llvm_cbe_storemerge118) > ((signed int )1u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe__2e_preheader13;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__765:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge216 = phi i32 [ 0, %%.preheader15 ], [ %%29, %%6  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge216_count);
  llvm_cbe_storemerge216 = (unsigned int )llvm_cbe_storemerge216__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge216 = 0x%X",llvm_cbe_storemerge216);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__672);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%storemerge216 to i64, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3067_count);
  llvm_cbe_tmp__650 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge216);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__650);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3068_count);
  llvm_cbe_tmp__651 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__650) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load float* %%8, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3069_count);
  llvm_cbe_tmp__652 = (float )*llvm_cbe_tmp__651;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__652, *(int*)(&llvm_cbe_tmp__652));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3070_count);
  llvm_cbe_tmp__653 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%9, float* %%10, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3071_count);
  *llvm_cbe_tmp__653 = llvm_cbe_tmp__652;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__652);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3072_count);
  llvm_cbe_tmp__654 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__650) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3073_count);
  llvm_cbe_tmp__655 = (float )*llvm_cbe_tmp__654;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__655, *(int*)(&llvm_cbe_tmp__655));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%12, float* %%8, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3074_count);
  *llvm_cbe_tmp__651 = llvm_cbe_tmp__655;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__655);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3075_count);
  llvm_cbe_tmp__656 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__650) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3076_count);
  llvm_cbe_tmp__657 = (float )*llvm_cbe_tmp__656;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__657, *(int*)(&llvm_cbe_tmp__657));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3077_count);
  llvm_cbe_tmp__658 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%14, float* %%15, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3078_count);
  *llvm_cbe_tmp__658 = llvm_cbe_tmp__657;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__657);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3079_count);
  llvm_cbe_tmp__659 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__650) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load float* %%16, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3080_count);
  llvm_cbe_tmp__660 = (float )*llvm_cbe_tmp__659;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__660, *(int*)(&llvm_cbe_tmp__660));

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%17, float* %%13, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3081_count);
  *llvm_cbe_tmp__656 = llvm_cbe_tmp__660;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__660);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3082_count);
  llvm_cbe_tmp__661 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__650) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load float* %%18, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3083_count);
  llvm_cbe_tmp__662 = (float )*llvm_cbe_tmp__661;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__662, *(int*)(&llvm_cbe_tmp__662));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3084_count);
  llvm_cbe_tmp__663 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%19, float* %%20, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3085_count);
  *llvm_cbe_tmp__663 = llvm_cbe_tmp__662;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__662);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 %%7, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3086_count);
  llvm_cbe_tmp__664 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__650) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3087_count);
  llvm_cbe_tmp__665 = (float )*llvm_cbe_tmp__664;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__665, *(int*)(&llvm_cbe_tmp__665));

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%22, float* %%18, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3088_count);
  *llvm_cbe_tmp__661 = llvm_cbe_tmp__665;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__665);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [2 x [10 x [32 x float]]]* @aesl_internal_conv5.line_buf, i64 0, i64 0, i64 %%5, i64 %%7, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3089_count);
  llvm_cbe_tmp__666 = (float *)(&aesl_internal_conv5_OC_line_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__649))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__649));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv5.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__649) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv5.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__650) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv5.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* %%23, align 4, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3090_count);
  llvm_cbe_tmp__667 = (float )*llvm_cbe_tmp__666;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__667, *(int*)(&llvm_cbe_tmp__667));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [2 x [10 x [32 x float]]]* @aesl_internal_conv5.line_buf, i64 0, i64 1, i64 %%5, i64 %%7, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3093_count);
  llvm_cbe_tmp__668 = (float *)(&aesl_internal_conv5_OC_line_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
][(((signed long long )llvm_cbe_tmp__649))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__650))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__649));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv5.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__649) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv5.line_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__650) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_conv5.line_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load float* %%25, align 4, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3094_count);
  llvm_cbe_tmp__669 = (float )*llvm_cbe_tmp__668;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__669, *(int*)(&llvm_cbe_tmp__669));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%1, i64 %%5, i64 %%7, !dbg !19 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3098_count);
  llvm_cbe_tmp__670 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__646))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__649))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__650))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__646));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__649));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__650));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__649) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__650) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !19 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3099_count);
  llvm_cbe_tmp__671 = (float )*llvm_cbe_tmp__670;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__671, *(int*)(&llvm_cbe_tmp__671));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'aesl_internal_conv5.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__649) < 10 && "Write access out of array 'aesl_internal_conv5.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'aesl_internal_conv5.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%23, align 4, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3103_count);
  *llvm_cbe_tmp__666 = llvm_cbe_tmp__669;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__669);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'aesl_internal_conv5.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__649) < 10 && "Write access out of array 'aesl_internal_conv5.line_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'aesl_internal_conv5.line_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%25, align 4, !dbg !23 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3104_count);
  *llvm_cbe_tmp__668 = llvm_cbe_tmp__671;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__671);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* %%11, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3105_count);
  *llvm_cbe_tmp__654 = llvm_cbe_tmp__667;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__667);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%16, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3106_count);
  *llvm_cbe_tmp__659 = llvm_cbe_tmp__669;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__669);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )2ull) < 3 && "Write access out of array 'win_buf' bound?");
  assert(((signed long long )llvm_cbe_tmp__650) < 32 && "Write access out of array 'win_buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%21, align 4, !dbg !24 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3107_count);
  *llvm_cbe_tmp__664 = llvm_cbe_tmp__671;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__671);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add nsw i32 %%storemerge216, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3108_count);
  llvm_cbe_tmp__672 = (unsigned int )((unsigned int )(llvm_cbe_storemerge216&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__672&4294967295ull)));
  if (((llvm_cbe_tmp__672&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__766;
  } else {
    llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__672;   /* for PHI node */
    goto llvm_cbe_tmp__765;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader8' to make GCC happy */
llvm_cbe__2e_preheader8:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge314 = phi i32 [ 0, %%.preheader13 ], [ %%125, %%123  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge314_count);
  llvm_cbe_storemerge314 = (unsigned int )llvm_cbe_storemerge314__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge314 = 0x%X",llvm_cbe_storemerge314);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__762);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%storemerge314 to i64, !dbg !22 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3147_count);
  llvm_cbe_tmp__675 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge314);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__675);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds float* %%bias, i64 %%34, !dbg !22 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3148_count);
  llvm_cbe_tmp__676 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__675))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !22 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3149_count);
  llvm_cbe_tmp__677 = (float )*llvm_cbe_tmp__676;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__677, *(int*)(&llvm_cbe_tmp__677));
  llvm_cbe_storemerge67__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__678__PHI_TEMPORARY = (float )llvm_cbe_tmp__677;   /* for PHI node */
  goto llvm_cbe_tmp__767;

llvm_cbe_tmp__768:
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = getelementptr inbounds [8 x [32 x float]]* %%out, i64 %%4, i64 %%33, i64 %%34, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3580_count);
  llvm_cbe_tmp__761 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__648))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__674))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__675))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__648));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__674));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__674) < 8 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__675) < 32 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%121, float* %%124, align 4, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3581_count);
  *llvm_cbe_tmp__761 = llvm_cbe_tmp__759;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__759);
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = add nsw i32 %%storemerge314, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3582_count);
  llvm_cbe_tmp__762 = (unsigned int )((unsigned int )(llvm_cbe_storemerge314&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__762&4294967295ull)));
  if (((llvm_cbe_tmp__762&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__762;   /* for PHI node */
    goto llvm_cbe__2e_preheader8;
  }

  do {     /* Syntactic loop '.preheader.2.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_2_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.2.2 = phi i32 [ %%122, %%.preheader.2.2 ], [ 0, %%.preheader.1.2  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge67_2e_2_2e_2_count);
  llvm_cbe_storemerge67_2e_2_2e_2 = (unsigned int )llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.2.2 = 0x%X",llvm_cbe_storemerge67_2e_2_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__760);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = phi float [ %%121, %%.preheader.2.2 ], [ %%112, %%.preheader.1.2  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3530_count);
  llvm_cbe_tmp__752 = (float )llvm_cbe_tmp__752__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__752);
printf("\n = %f",llvm_cbe_tmp__759);
printf("\n = %f",llvm_cbe_tmp__750);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = sext i32 %%storemerge67.2.2 to i64, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3531_count);
  llvm_cbe_tmp__753 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_2_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__753);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 2, i64 %%115, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3532_count);
  llvm_cbe_tmp__754 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__753))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__753));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__753) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load float* %%116, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3533_count);
  llvm_cbe_tmp__755 = (float )*llvm_cbe_tmp__754;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__755, *(int*)(&llvm_cbe_tmp__755));
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%115, i64 2, i64 2, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3534_count);
  llvm_cbe_tmp__756 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__675))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__753))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__753));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__753) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = load float* %%118, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3535_count);
  llvm_cbe_tmp__757 = (float )*llvm_cbe_tmp__756;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__757, *(int*)(&llvm_cbe_tmp__757));
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = fmul float %%117, %%119, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3536_count);
  llvm_cbe_tmp__758 = (float )((float )(llvm_cbe_tmp__755 * llvm_cbe_tmp__757));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__758, *(int*)(&llvm_cbe_tmp__758));
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = fadd float %%114, %%120, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3537_count);
  llvm_cbe_tmp__759 = (float )((float )(llvm_cbe_tmp__752 + llvm_cbe_tmp__758));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__759, *(int*)(&llvm_cbe_tmp__759));
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = add nsw i32 %%storemerge67.2.2, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3541_count);
  llvm_cbe_tmp__760 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_2_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__760&4294967295ull)));
  if (((llvm_cbe_tmp__760&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__768;
  } else {
    llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__760;   /* for PHI node */
    llvm_cbe_tmp__752__PHI_TEMPORARY = (float )llvm_cbe_tmp__759;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader.2.2' */
  do {     /* Syntactic loop '.preheader.1.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_1_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.1.2 = phi i32 [ %%113, %%.preheader.1.2 ], [ 0, %%.preheader8.2  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge67_2e_1_2e_2_count);
  llvm_cbe_storemerge67_2e_1_2e_2 = (unsigned int )llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.1.2 = 0x%X",llvm_cbe_storemerge67_2e_1_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__751);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = phi float [ %%112, %%.preheader.1.2 ], [ %%103, %%.preheader8.2  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3490_count);
  llvm_cbe_tmp__743 = (float )llvm_cbe_tmp__743__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__743);
printf("\n = %f",llvm_cbe_tmp__750);
printf("\n = %f",llvm_cbe_tmp__741);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = sext i32 %%storemerge67.1.2 to i64, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3491_count);
  llvm_cbe_tmp__744 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_1_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__744);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 1, i64 %%106, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3492_count);
  llvm_cbe_tmp__745 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__744))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__744));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__744) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = load float* %%107, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3493_count);
  llvm_cbe_tmp__746 = (float )*llvm_cbe_tmp__745;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__746, *(int*)(&llvm_cbe_tmp__746));
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%106, i64 2, i64 1, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3494_count);
  llvm_cbe_tmp__747 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__675))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__744))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__744));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__744) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = load float* %%109, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3495_count);
  llvm_cbe_tmp__748 = (float )*llvm_cbe_tmp__747;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__748, *(int*)(&llvm_cbe_tmp__748));
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = fmul float %%108, %%110, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3496_count);
  llvm_cbe_tmp__749 = (float )((float )(llvm_cbe_tmp__746 * llvm_cbe_tmp__748));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__749, *(int*)(&llvm_cbe_tmp__749));
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = fadd float %%105, %%111, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3497_count);
  llvm_cbe_tmp__750 = (float )((float )(llvm_cbe_tmp__743 + llvm_cbe_tmp__749));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__750, *(int*)(&llvm_cbe_tmp__750));
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = add nsw i32 %%storemerge67.1.2, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3501_count);
  llvm_cbe_tmp__751 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_1_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__751&4294967295ull)));
  if (((llvm_cbe_tmp__751&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_2_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__752__PHI_TEMPORARY = (float )llvm_cbe_tmp__750;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__751;   /* for PHI node */
    llvm_cbe_tmp__743__PHI_TEMPORARY = (float )llvm_cbe_tmp__750;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader.1.2' */
  do {     /* Syntactic loop '.preheader8.2' to make GCC happy */
llvm_cbe__2e_preheader8_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.227 = phi i32 [ %%104, %%.preheader8.2 ], [ 0, %%.preheader.2.1  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge67_2e_227_count);
  llvm_cbe_storemerge67_2e_227 = (unsigned int )llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.227 = 0x%X",llvm_cbe_storemerge67_2e_227);
printf("\n = 0x%X",llvm_cbe_tmp__742);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = phi float [ %%103, %%.preheader8.2 ], [ %%94, %%.preheader.2.1  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3450_count);
  llvm_cbe_tmp__734 = (float )llvm_cbe_tmp__734__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__734);
printf("\n = %f",llvm_cbe_tmp__741);
printf("\n = %f",llvm_cbe_tmp__732);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = sext i32 %%storemerge67.227 to i64, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3451_count);
  llvm_cbe_tmp__735 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_227);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__735);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 2, i64 0, i64 %%97, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3452_count);
  llvm_cbe_tmp__736 = (float *)(&llvm_cbe_win_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__735))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__735));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__735) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = load float* %%98, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3453_count);
  llvm_cbe_tmp__737 = (float )*llvm_cbe_tmp__736;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__737, *(int*)(&llvm_cbe_tmp__737));
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%97, i64 2, i64 0, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3454_count);
  llvm_cbe_tmp__738 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__675))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__735))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__735));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__735) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = load float* %%100, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3455_count);
  llvm_cbe_tmp__739 = (float )*llvm_cbe_tmp__738;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__739, *(int*)(&llvm_cbe_tmp__739));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = fmul float %%99, %%101, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3456_count);
  llvm_cbe_tmp__740 = (float )((float )(llvm_cbe_tmp__737 * llvm_cbe_tmp__739));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__740, *(int*)(&llvm_cbe_tmp__740));
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = fadd float %%96, %%102, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3457_count);
  llvm_cbe_tmp__741 = (float )((float )(llvm_cbe_tmp__734 + llvm_cbe_tmp__740));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__741, *(int*)(&llvm_cbe_tmp__741));
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = add nsw i32 %%storemerge67.227, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3461_count);
  llvm_cbe_tmp__742 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_227&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__742&4294967295ull)));
  if (((llvm_cbe_tmp__742&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_1_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__743__PHI_TEMPORARY = (float )llvm_cbe_tmp__741;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__742;   /* for PHI node */
    llvm_cbe_tmp__734__PHI_TEMPORARY = (float )llvm_cbe_tmp__741;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader8.2' */
  do {     /* Syntactic loop '.preheader.2.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_2_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.2.1 = phi i32 [ %%95, %%.preheader.2.1 ], [ 0, %%.preheader.1.1  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge67_2e_2_2e_1_count);
  llvm_cbe_storemerge67_2e_2_2e_1 = (unsigned int )llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.2.1 = 0x%X",llvm_cbe_storemerge67_2e_2_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__733);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = phi float [ %%94, %%.preheader.2.1 ], [ %%85, %%.preheader.1.1  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3410_count);
  llvm_cbe_tmp__725 = (float )llvm_cbe_tmp__725__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__725);
printf("\n = %f",llvm_cbe_tmp__732);
printf("\n = %f",llvm_cbe_tmp__723);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = sext i32 %%storemerge67.2.1 to i64, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3411_count);
  llvm_cbe_tmp__726 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_2_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__726);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 2, i64 %%88, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3412_count);
  llvm_cbe_tmp__727 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__726))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__726));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__726) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load float* %%89, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3413_count);
  llvm_cbe_tmp__728 = (float )*llvm_cbe_tmp__727;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__728, *(int*)(&llvm_cbe_tmp__728));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%88, i64 1, i64 2, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3414_count);
  llvm_cbe_tmp__729 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__675))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__726))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__726));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__726) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = load float* %%91, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3415_count);
  llvm_cbe_tmp__730 = (float )*llvm_cbe_tmp__729;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__730, *(int*)(&llvm_cbe_tmp__730));
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = fmul float %%90, %%92, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3416_count);
  llvm_cbe_tmp__731 = (float )((float )(llvm_cbe_tmp__728 * llvm_cbe_tmp__730));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__731, *(int*)(&llvm_cbe_tmp__731));
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = fadd float %%87, %%93, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3417_count);
  llvm_cbe_tmp__732 = (float )((float )(llvm_cbe_tmp__725 + llvm_cbe_tmp__731));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__732, *(int*)(&llvm_cbe_tmp__732));
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = add nsw i32 %%storemerge67.2.1, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3421_count);
  llvm_cbe_tmp__733 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_2_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__733&4294967295ull)));
  if (((llvm_cbe_tmp__733&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_227__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__734__PHI_TEMPORARY = (float )llvm_cbe_tmp__732;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__733;   /* for PHI node */
    llvm_cbe_tmp__725__PHI_TEMPORARY = (float )llvm_cbe_tmp__732;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader.2.1' */
  do {     /* Syntactic loop '.preheader.1.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_1_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.1.1 = phi i32 [ %%86, %%.preheader.1.1 ], [ 0, %%.preheader8.1  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge67_2e_1_2e_1_count);
  llvm_cbe_storemerge67_2e_1_2e_1 = (unsigned int )llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.1.1 = 0x%X",llvm_cbe_storemerge67_2e_1_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__724);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = phi float [ %%85, %%.preheader.1.1 ], [ %%76, %%.preheader8.1  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3370_count);
  llvm_cbe_tmp__716 = (float )llvm_cbe_tmp__716__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__716);
printf("\n = %f",llvm_cbe_tmp__723);
printf("\n = %f",llvm_cbe_tmp__714);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = sext i32 %%storemerge67.1.1 to i64, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3371_count);
  llvm_cbe_tmp__717 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_1_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__717);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 1, i64 %%79, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3372_count);
  llvm_cbe_tmp__718 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__717))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__717));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__717) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load float* %%80, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3373_count);
  llvm_cbe_tmp__719 = (float )*llvm_cbe_tmp__718;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__719, *(int*)(&llvm_cbe_tmp__719));
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%79, i64 1, i64 1, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3374_count);
  llvm_cbe_tmp__720 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__675))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__717))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__717));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__717) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load float* %%82, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3375_count);
  llvm_cbe_tmp__721 = (float )*llvm_cbe_tmp__720;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__721, *(int*)(&llvm_cbe_tmp__721));
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = fmul float %%81, %%83, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3376_count);
  llvm_cbe_tmp__722 = (float )((float )(llvm_cbe_tmp__719 * llvm_cbe_tmp__721));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__722, *(int*)(&llvm_cbe_tmp__722));
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = fadd float %%78, %%84, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3377_count);
  llvm_cbe_tmp__723 = (float )((float )(llvm_cbe_tmp__716 + llvm_cbe_tmp__722));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__723, *(int*)(&llvm_cbe_tmp__723));
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = add nsw i32 %%storemerge67.1.1, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3381_count);
  llvm_cbe_tmp__724 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_1_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__724&4294967295ull)));
  if (((llvm_cbe_tmp__724&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_2_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__725__PHI_TEMPORARY = (float )llvm_cbe_tmp__723;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2_2e_1;
  } else {
    llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__724;   /* for PHI node */
    llvm_cbe_tmp__716__PHI_TEMPORARY = (float )llvm_cbe_tmp__723;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader.1.1' */
  do {     /* Syntactic loop '.preheader8.1' to make GCC happy */
llvm_cbe__2e_preheader8_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.124 = phi i32 [ %%77, %%.preheader8.1 ], [ 0, %%.preheader.2  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge67_2e_124_count);
  llvm_cbe_storemerge67_2e_124 = (unsigned int )llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.124 = 0x%X",llvm_cbe_storemerge67_2e_124);
printf("\n = 0x%X",llvm_cbe_tmp__715);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = phi float [ %%76, %%.preheader8.1 ], [ %%67, %%.preheader.2  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3330_count);
  llvm_cbe_tmp__707 = (float )llvm_cbe_tmp__707__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__707);
printf("\n = %f",llvm_cbe_tmp__714);
printf("\n = %f",llvm_cbe_tmp__705);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = sext i32 %%storemerge67.124 to i64, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3331_count);
  llvm_cbe_tmp__708 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_124);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__708);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 1, i64 0, i64 %%70, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3332_count);
  llvm_cbe_tmp__709 = (float *)(&llvm_cbe_win_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__708))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__708));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__708) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load float* %%71, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3333_count);
  llvm_cbe_tmp__710 = (float )*llvm_cbe_tmp__709;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__710, *(int*)(&llvm_cbe_tmp__710));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%70, i64 1, i64 0, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3334_count);
  llvm_cbe_tmp__711 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__675))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__708))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__708));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__708) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load float* %%73, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3335_count);
  llvm_cbe_tmp__712 = (float )*llvm_cbe_tmp__711;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__712, *(int*)(&llvm_cbe_tmp__712));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = fmul float %%72, %%74, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3336_count);
  llvm_cbe_tmp__713 = (float )((float )(llvm_cbe_tmp__710 * llvm_cbe_tmp__712));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__713, *(int*)(&llvm_cbe_tmp__713));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = fadd float %%69, %%75, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3337_count);
  llvm_cbe_tmp__714 = (float )((float )(llvm_cbe_tmp__707 + llvm_cbe_tmp__713));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__714, *(int*)(&llvm_cbe_tmp__714));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add nsw i32 %%storemerge67.124, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3341_count);
  llvm_cbe_tmp__715 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_124&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__715&4294967295ull)));
  if (((llvm_cbe_tmp__715&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_1_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__716__PHI_TEMPORARY = (float )llvm_cbe_tmp__714;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1_2e_1;
  } else {
    llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__715;   /* for PHI node */
    llvm_cbe_tmp__707__PHI_TEMPORARY = (float )llvm_cbe_tmp__714;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader8.1' */
  do {     /* Syntactic loop '.preheader.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.2 = phi i32 [ %%68, %%.preheader.2 ], [ 0, %%.preheader.1  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge67_2e_2_count);
  llvm_cbe_storemerge67_2e_2 = (unsigned int )llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.2 = 0x%X",llvm_cbe_storemerge67_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__706);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = phi float [ %%67, %%.preheader.2 ], [ %%58, %%.preheader.1  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3290_count);
  llvm_cbe_tmp__698 = (float )llvm_cbe_tmp__698__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__698);
printf("\n = %f",llvm_cbe_tmp__705);
printf("\n = %f",llvm_cbe_tmp__696);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = sext i32 %%storemerge67.2 to i64, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3291_count);
  llvm_cbe_tmp__699 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__699);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 2, i64 %%61, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3292_count);
  llvm_cbe_tmp__700 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__699))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__699));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__699) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load float* %%62, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3293_count);
  llvm_cbe_tmp__701 = (float )*llvm_cbe_tmp__700;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__701, *(int*)(&llvm_cbe_tmp__701));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%61, i64 0, i64 2, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3294_count);
  llvm_cbe_tmp__702 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__675))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__699))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__699));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__699) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = load float* %%64, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3295_count);
  llvm_cbe_tmp__703 = (float )*llvm_cbe_tmp__702;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__703, *(int*)(&llvm_cbe_tmp__703));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = fmul float %%63, %%65, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3296_count);
  llvm_cbe_tmp__704 = (float )((float )(llvm_cbe_tmp__701 * llvm_cbe_tmp__703));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__704, *(int*)(&llvm_cbe_tmp__704));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = fadd float %%60, %%66, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3297_count);
  llvm_cbe_tmp__705 = (float )((float )(llvm_cbe_tmp__698 + llvm_cbe_tmp__704));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__705, *(int*)(&llvm_cbe_tmp__705));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = add nsw i32 %%storemerge67.2, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3301_count);
  llvm_cbe_tmp__706 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__706&4294967295ull)));
  if (((llvm_cbe_tmp__706&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_124__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__707__PHI_TEMPORARY = (float )llvm_cbe_tmp__705;   /* for PHI node */
    goto llvm_cbe__2e_preheader8_2e_1;
  } else {
    llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__706;   /* for PHI node */
    llvm_cbe_tmp__698__PHI_TEMPORARY = (float )llvm_cbe_tmp__705;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader.2' */
  do {     /* Syntactic loop '.preheader.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67.1 = phi i32 [ %%59, %%.preheader.1 ], [ 0, %%37  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge67_2e_1_count);
  llvm_cbe_storemerge67_2e_1 = (unsigned int )llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67.1 = 0x%X",llvm_cbe_storemerge67_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__697);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = phi float [ %%58, %%.preheader.1 ], [ %%45, %%37  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3250_count);
  llvm_cbe_tmp__689 = (float )llvm_cbe_tmp__689__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__689);
printf("\n = %f",llvm_cbe_tmp__696);
printf("\n = %f",llvm_cbe_tmp__685);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = sext i32 %%storemerge67.1 to i64, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3251_count);
  llvm_cbe_tmp__690 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__690);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 1, i64 %%52, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3252_count);
  llvm_cbe_tmp__691 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__690))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__690));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__690) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3253_count);
  llvm_cbe_tmp__692 = (float )*llvm_cbe_tmp__691;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__692, *(int*)(&llvm_cbe_tmp__692));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%52, i64 0, i64 1, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3254_count);
  llvm_cbe_tmp__693 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__675))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__690))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__690));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__690) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3255_count);
  llvm_cbe_tmp__694 = (float )*llvm_cbe_tmp__693;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__694, *(int*)(&llvm_cbe_tmp__694));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = fmul float %%54, %%56, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3256_count);
  llvm_cbe_tmp__695 = (float )((float )(llvm_cbe_tmp__692 * llvm_cbe_tmp__694));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__695, *(int*)(&llvm_cbe_tmp__695));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = fadd float %%51, %%57, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3257_count);
  llvm_cbe_tmp__696 = (float )((float )(llvm_cbe_tmp__689 + llvm_cbe_tmp__695));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__696, *(int*)(&llvm_cbe_tmp__696));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add nsw i32 %%storemerge67.1, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3261_count);
  llvm_cbe_tmp__697 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__697&4294967295ull)));
  if (((llvm_cbe_tmp__697&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__698__PHI_TEMPORARY = (float )llvm_cbe_tmp__696;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2;
  } else {
    llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__697;   /* for PHI node */
    llvm_cbe_tmp__689__PHI_TEMPORARY = (float )llvm_cbe_tmp__696;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader.1' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__767:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge67 = phi i32 [ 0, %%.preheader8 ], [ %%46, %%37  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge67_count);
  llvm_cbe_storemerge67 = (unsigned int )llvm_cbe_storemerge67__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge67 = 0x%X",llvm_cbe_storemerge67);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__686);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = phi float [ %%36, %%.preheader8 ], [ %%45, %%37  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3189_count);
  llvm_cbe_tmp__678 = (float )llvm_cbe_tmp__678__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__678);
printf("\n = %f",llvm_cbe_tmp__677);
printf("\n = %f",llvm_cbe_tmp__685);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = sext i32 %%storemerge67 to i64, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3190_count);
  llvm_cbe_tmp__679 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge67);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__679);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds [3 x [3 x [32 x float]]]* %%win_buf, i64 0, i64 0, i64 0, i64 %%39, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3191_count);
  llvm_cbe_tmp__680 = (float *)(&llvm_cbe_win_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__679))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__679));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__679) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'win_buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load float* %%40, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3192_count);
  llvm_cbe_tmp__681 = (float )*llvm_cbe_tmp__680;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__681, *(int*)(&llvm_cbe_tmp__681));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%34, i64 %%39, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3193_count);
  llvm_cbe_tmp__682 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__675))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__679))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__675));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__679));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__679) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* %%42, align 4, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3194_count);
  llvm_cbe_tmp__683 = (float )*llvm_cbe_tmp__682;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__683, *(int*)(&llvm_cbe_tmp__683));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = fmul float %%41, %%43, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3195_count);
  llvm_cbe_tmp__684 = (float )((float )(llvm_cbe_tmp__681 * llvm_cbe_tmp__683));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__684, *(int*)(&llvm_cbe_tmp__684));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = fadd float %%38, %%44, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3196_count);
  llvm_cbe_tmp__685 = (float )((float )(llvm_cbe_tmp__678 + llvm_cbe_tmp__684));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__685, *(int*)(&llvm_cbe_tmp__685));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = add nsw i32 %%storemerge67, 1, !dbg !25 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3200_count);
  llvm_cbe_tmp__686 = (unsigned int )((unsigned int )(llvm_cbe_storemerge67&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__686&4294967295ull)));
  if (((llvm_cbe_tmp__686&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge67_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__689__PHI_TEMPORARY = (float )llvm_cbe_tmp__685;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1;
  } else {
    llvm_cbe_storemerge67__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__686;   /* for PHI node */
    llvm_cbe_tmp__678__PHI_TEMPORARY = (float )llvm_cbe_tmp__685;   /* for PHI node */
    goto llvm_cbe_tmp__767;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader8' */
llvm_cbe__2e_preheader13:
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add nsw i32 %%storemerge118, -2, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3144_count);
  llvm_cbe_tmp__673 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__673&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = sext i32 %%32 to i64, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_3145_count);
  llvm_cbe_tmp__674 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__673);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__674);
  llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader8;

  } while (1); /* end of syntactic loop '.preheader15' */
  } while (1); /* end of syntactic loop '.preheader17' */
llvm_cbe_tmp__764:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv5}\n");
  return;
}


float sigmoid(float llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_3590_count = 0;
  static  unsigned long long aesl_llvm_cbe_3591_count = 0;
  static  unsigned long long aesl_llvm_cbe_3592_count = 0;
  float llvm_cbe_tmp__769;
  static  unsigned long long aesl_llvm_cbe_3593_count = 0;
  float llvm_cbe_tmp__770;
  static  unsigned long long aesl_llvm_cbe_3594_count = 0;
  float llvm_cbe_tmp__771;
  static  unsigned long long aesl_llvm_cbe_3595_count = 0;
  float llvm_cbe_tmp__772;
  static  unsigned long long aesl_llvm_cbe_3596_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sigmoid\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = fsub float -0.000000e+00, %%x, !dbg !19 for 0x%I64xth hint within @sigmoid  --> \n", ++aesl_llvm_cbe_3592_count);
  llvm_cbe_tmp__769 = (float )((float )(-(llvm_cbe_x)));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__769, *(int*)(&llvm_cbe_tmp__769));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = tail call float @expf(float %%1) nounwind, !dbg !19 for 0x%I64xth hint within @sigmoid  --> \n", ++aesl_llvm_cbe_3593_count);
  llvm_cbe_tmp__770 = (float ) /*tail*/ expf(llvm_cbe_tmp__769);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__769, *(int*)(&llvm_cbe_tmp__769));
printf("\nReturn  = %f",llvm_cbe_tmp__770);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = fadd float %%2, 1.000000e+00, !dbg !19 for 0x%I64xth hint within @sigmoid  --> \n", ++aesl_llvm_cbe_3594_count);
  llvm_cbe_tmp__771 = (float )((float )(llvm_cbe_tmp__770 + 0x1p0));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__771, *(int*)(&llvm_cbe_tmp__771));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = fdiv float 1.000000e+00, %%3, !dbg !19 for 0x%I64xth hint within @sigmoid  --> \n", ++aesl_llvm_cbe_3595_count);
  llvm_cbe_tmp__772 = (float )((float )(0x1p0 / llvm_cbe_tmp__771));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__772, *(int*)(&llvm_cbe_tmp__772));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sigmoid}\n");
  return llvm_cbe_tmp__772;
}


void detection_head(float (*llvm_cbe_in)[8][32], float (*llvm_cbe_out)[8][16], float (*llvm_cbe_kernel)[32][1][1], float *llvm_cbe_bias) {
  static  unsigned long long aesl_llvm_cbe_3597_count = 0;
  static  unsigned long long aesl_llvm_cbe_3598_count = 0;
  static  unsigned long long aesl_llvm_cbe_3599_count = 0;
  static  unsigned long long aesl_llvm_cbe_3600_count = 0;
  static  unsigned long long aesl_llvm_cbe_3601_count = 0;
  static  unsigned long long aesl_llvm_cbe_3602_count = 0;
  static  unsigned long long aesl_llvm_cbe_3603_count = 0;
  static  unsigned long long aesl_llvm_cbe_3604_count = 0;
  static  unsigned long long aesl_llvm_cbe_3605_count = 0;
  static  unsigned long long aesl_llvm_cbe_3606_count = 0;
  static  unsigned long long aesl_llvm_cbe_3607_count = 0;
  static  unsigned long long aesl_llvm_cbe_3608_count = 0;
  static  unsigned long long aesl_llvm_cbe_3609_count = 0;
  static  unsigned long long aesl_llvm_cbe_3610_count = 0;
  static  unsigned long long aesl_llvm_cbe_3611_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge8_count = 0;
  unsigned int llvm_cbe_storemerge8;
  unsigned int llvm_cbe_storemerge8__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3612_count = 0;
  static  unsigned long long aesl_llvm_cbe_3613_count = 0;
  static  unsigned long long aesl_llvm_cbe_3614_count = 0;
  static  unsigned long long aesl_llvm_cbe_3615_count = 0;
  static  unsigned long long aesl_llvm_cbe_3616_count = 0;
  unsigned long long llvm_cbe_tmp__773;
  static  unsigned long long aesl_llvm_cbe_3617_count = 0;
  float *llvm_cbe_tmp__774;
  static  unsigned long long aesl_llvm_cbe_3618_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge17_count = 0;
  unsigned int llvm_cbe_storemerge17;
  unsigned int llvm_cbe_storemerge17__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3619_count = 0;
  static  unsigned long long aesl_llvm_cbe_3620_count = 0;
  static  unsigned long long aesl_llvm_cbe_3621_count = 0;
  static  unsigned long long aesl_llvm_cbe_3622_count = 0;
  static  unsigned long long aesl_llvm_cbe_3623_count = 0;
  unsigned long long llvm_cbe_tmp__775;
  static  unsigned long long aesl_llvm_cbe_3624_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_count = 0;
  unsigned int llvm_cbe_storemerge25;
  unsigned int llvm_cbe_storemerge25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3625_count = 0;
  float llvm_cbe_tmp__776;
  static  unsigned long long aesl_llvm_cbe_3626_count = 0;
  static  unsigned long long aesl_llvm_cbe_3627_count = 0;
  static  unsigned long long aesl_llvm_cbe_3628_count = 0;
  static  unsigned long long aesl_llvm_cbe_3629_count = 0;
  static  unsigned long long aesl_llvm_cbe_3630_count = 0;
  static  unsigned long long aesl_llvm_cbe_3631_count = 0;
  static  unsigned long long aesl_llvm_cbe_3632_count = 0;
  static  unsigned long long aesl_llvm_cbe_3633_count = 0;
  static  unsigned long long aesl_llvm_cbe_3634_count = 0;
  unsigned long long llvm_cbe_tmp__777;
  static  unsigned long long aesl_llvm_cbe_3635_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge34_count = 0;
  unsigned int llvm_cbe_storemerge34;
  unsigned int llvm_cbe_storemerge34__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3636_count = 0;
  float llvm_cbe_tmp__778;
  float llvm_cbe_tmp__778__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3637_count = 0;
  unsigned long long llvm_cbe_tmp__779;
  static  unsigned long long aesl_llvm_cbe_3638_count = 0;
  float *llvm_cbe_tmp__780;
  static  unsigned long long aesl_llvm_cbe_3639_count = 0;
  float llvm_cbe_tmp__781;
  static  unsigned long long aesl_llvm_cbe_3640_count = 0;
  float *llvm_cbe_tmp__782;
  static  unsigned long long aesl_llvm_cbe_3641_count = 0;
  float llvm_cbe_tmp__783;
  static  unsigned long long aesl_llvm_cbe_3642_count = 0;
  float llvm_cbe_tmp__784;
  static  unsigned long long aesl_llvm_cbe_3643_count = 0;
  float llvm_cbe_tmp__785;
  static  unsigned long long aesl_llvm_cbe_3644_count = 0;
  static  unsigned long long aesl_llvm_cbe_3645_count = 0;
  static  unsigned long long aesl_llvm_cbe_3646_count = 0;
  static  unsigned long long aesl_llvm_cbe_3647_count = 0;
  unsigned int llvm_cbe_tmp__786;
  static  unsigned long long aesl_llvm_cbe_3648_count = 0;
  static  unsigned long long aesl_llvm_cbe_3649_count = 0;
  static  unsigned long long aesl_llvm_cbe_3650_count = 0;
  static  unsigned long long aesl_llvm_cbe_3651_count = 0;
  static  unsigned long long aesl_llvm_cbe_3652_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_3653_count = 0;
  static  unsigned long long aesl_llvm_cbe_3654_count = 0;
  float llvm_cbe_tmp__787;
  static  unsigned long long aesl_llvm_cbe_3655_count = 0;
  float *llvm_cbe_tmp__788;
  static  unsigned long long aesl_llvm_cbe_3656_count = 0;
  static  unsigned long long aesl_llvm_cbe_3657_count = 0;
  unsigned int llvm_cbe_tmp__789;
  static  unsigned long long aesl_llvm_cbe_3658_count = 0;
  static  unsigned long long aesl_llvm_cbe_3659_count = 0;
  static  unsigned long long aesl_llvm_cbe_3660_count = 0;
  static  unsigned long long aesl_llvm_cbe_3661_count = 0;
  static  unsigned long long aesl_llvm_cbe_3662_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond9_count = 0;
  static  unsigned long long aesl_llvm_cbe_3663_count = 0;
  static  unsigned long long aesl_llvm_cbe_3664_count = 0;
  unsigned int llvm_cbe_tmp__790;
  static  unsigned long long aesl_llvm_cbe_3665_count = 0;
  static  unsigned long long aesl_llvm_cbe_3666_count = 0;
  static  unsigned long long aesl_llvm_cbe_3667_count = 0;
  static  unsigned long long aesl_llvm_cbe_3668_count = 0;
  static  unsigned long long aesl_llvm_cbe_3669_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond10_count = 0;
  static  unsigned long long aesl_llvm_cbe_3670_count = 0;
  static  unsigned long long aesl_llvm_cbe_3671_count = 0;
  unsigned int llvm_cbe_tmp__791;
  static  unsigned long long aesl_llvm_cbe_3672_count = 0;
  static  unsigned long long aesl_llvm_cbe_3673_count = 0;
  static  unsigned long long aesl_llvm_cbe_3674_count = 0;
  static  unsigned long long aesl_llvm_cbe_3675_count = 0;
  static  unsigned long long aesl_llvm_cbe_3676_count = 0;
  static  unsigned long long aesl_llvm_cbe_3677_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond11_count = 0;
  static  unsigned long long aesl_llvm_cbe_3678_count = 0;
  static  unsigned long long aesl_llvm_cbe_3679_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @detection_head\n");
  llvm_cbe_storemerge8__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader6;

  do {     /* Syntactic loop '.preheader6' to make GCC happy */
llvm_cbe__2e_preheader6:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge8 = phi i32 [ 0, %%0 ], [ %%24, %%23  for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_storemerge8_count);
  llvm_cbe_storemerge8 = (unsigned int )llvm_cbe_storemerge8__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge8 = 0x%X",llvm_cbe_storemerge8);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__791);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge8 to i64, !dbg !21 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3616_count);
  llvm_cbe_tmp__773 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge8);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__773);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds float* %%bias, i64 %%1, !dbg !21 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3617_count);
  llvm_cbe_tmp__774 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__773))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__773));
}
  llvm_cbe_storemerge17__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

llvm_cbe_tmp__792:
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add nsw i32 %%storemerge8, 1, !dbg !21 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3671_count);
  llvm_cbe_tmp__791 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__791&4294967295ull)));
  if (((llvm_cbe_tmp__791&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__793;
  } else {
    llvm_cbe_storemerge8__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__791;   /* for PHI node */
    goto llvm_cbe__2e_preheader6;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge17 = phi i32 [ 0, %%.preheader6 ], [ %%22, %%21  for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_storemerge17_count);
  llvm_cbe_storemerge17 = (unsigned int )llvm_cbe_storemerge17__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge17 = 0x%X",llvm_cbe_storemerge17);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__790);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge17 to i64, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3623_count);
  llvm_cbe_tmp__775 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge17);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__775);
  llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__794;

llvm_cbe_tmp__795:
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add nsw i32 %%storemerge17, 1, !dbg !22 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3664_count);
  llvm_cbe_tmp__790 = (unsigned int )((unsigned int )(llvm_cbe_storemerge17&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__790&4294967295ull)));
  if (((llvm_cbe_tmp__790&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__792;
  } else {
    llvm_cbe_storemerge17__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__790;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__794:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25 = phi i32 [ 0, %%.preheader ], [ %%20, %%17  for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_storemerge25_count);
  llvm_cbe_storemerge25 = (unsigned int )llvm_cbe_storemerge25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%X",llvm_cbe_storemerge25);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__789);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%2, align 4, !dbg !21 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3625_count);
  llvm_cbe_tmp__776 = (float )*llvm_cbe_tmp__774;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__776, *(int*)(&llvm_cbe_tmp__776));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%storemerge25 to i64, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3634_count);
  llvm_cbe_tmp__777 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge25);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__777);
  llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__778__PHI_TEMPORARY = (float )llvm_cbe_tmp__776;   /* for PHI node */
  goto llvm_cbe_tmp__796;

llvm_cbe_tmp__797:
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = tail call float @sigmoid(float %%15), !dbg !20 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3654_count);
  llvm_cbe_tmp__787 = (float ) /*tail*/ sigmoid(llvm_cbe_tmp__785);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__785, *(int*)(&llvm_cbe_tmp__785));
printf("\nReturn  = %f",llvm_cbe_tmp__787);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [8 x [16 x float]]* %%out, i64 %%3, i64 %%6, i64 %%1, !dbg !20 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3655_count);
  llvm_cbe_tmp__788 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__775))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__777))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__773))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__775));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__777));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__773));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__777) < 8 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__773) < 16 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%18, float* %%19, align 4, !dbg !20 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3656_count);
  *llvm_cbe_tmp__788 = llvm_cbe_tmp__787;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__787);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%storemerge25, 1, !dbg !22 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3657_count);
  llvm_cbe_tmp__789 = (unsigned int )((unsigned int )(llvm_cbe_storemerge25&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__789&4294967295ull)));
  if (((llvm_cbe_tmp__789&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__795;
  } else {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__789;   /* for PHI node */
    goto llvm_cbe_tmp__794;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__796:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge34 = phi i32 [ 0, %%4 ], [ %%16, %%7  for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_storemerge34_count);
  llvm_cbe_storemerge34 = (unsigned int )llvm_cbe_storemerge34__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34 = 0x%X",llvm_cbe_storemerge34);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__786);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = phi float [ %%5, %%4 ], [ %%15, %%7  for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3636_count);
  llvm_cbe_tmp__778 = (float )llvm_cbe_tmp__778__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__778);
printf("\n = %f",llvm_cbe_tmp__776);
printf("\n = %f",llvm_cbe_tmp__785);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%storemerge34 to i64, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3637_count);
  llvm_cbe_tmp__779 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge34);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__779);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [8 x [32 x float]]* %%in, i64 %%3, i64 %%6, i64 %%9, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3638_count);
  llvm_cbe_tmp__780 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__775))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__777))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__779))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__775));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__777));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__779));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__777) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__779) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load float* %%10, align 4, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3639_count);
  llvm_cbe_tmp__781 = (float )*llvm_cbe_tmp__780;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__781, *(int*)(&llvm_cbe_tmp__781));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [32 x [1 x [1 x float]]]* %%kernel, i64 %%1, i64 %%9, i64 0, i64 0, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3640_count);
  llvm_cbe_tmp__782 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__773))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__779))
#ifdef AESL_BC_SIM
 % 1
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__773));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__779));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__779) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 1)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 1)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load float* %%12, align 4, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3641_count);
  llvm_cbe_tmp__783 = (float )*llvm_cbe_tmp__782;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__783, *(int*)(&llvm_cbe_tmp__783));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = fmul float %%11, %%13, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3642_count);
  llvm_cbe_tmp__784 = (float )((float )(llvm_cbe_tmp__781 * llvm_cbe_tmp__783));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__784, *(int*)(&llvm_cbe_tmp__784));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = fadd float %%8, %%14, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3643_count);
  llvm_cbe_tmp__785 = (float )((float )(llvm_cbe_tmp__778 + llvm_cbe_tmp__784));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__785, *(int*)(&llvm_cbe_tmp__785));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add nsw i32 %%storemerge34, 1, !dbg !22 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_3647_count);
  llvm_cbe_tmp__786 = (unsigned int )((unsigned int )(llvm_cbe_storemerge34&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__786&4294967295ull)));
  if (((llvm_cbe_tmp__786&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__797;
  } else {
    llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__786;   /* for PHI node */
    llvm_cbe_tmp__778__PHI_TEMPORARY = (float )llvm_cbe_tmp__785;   /* for PHI node */
    goto llvm_cbe_tmp__796;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '.preheader6' */
llvm_cbe_tmp__793:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @detection_head}\n");
  return;
}


void topp(float (*llvm_cbe_image)[64][3], float (*llvm_cbe_output)[8][16]) {
  static  unsigned long long aesl_llvm_cbe_3680_count = 0;
  static  unsigned long long aesl_llvm_cbe_3681_count = 0;
  static  unsigned long long aesl_llvm_cbe_3682_count = 0;
  static  unsigned long long aesl_llvm_cbe_3683_count = 0;
  static  unsigned long long aesl_llvm_cbe_3684_count = 0;
  static  unsigned long long aesl_llvm_cbe_3685_count = 0;
  static  unsigned long long aesl_llvm_cbe_3686_count = 0;
  static  unsigned long long aesl_llvm_cbe_3687_count = 0;
  static  unsigned long long aesl_llvm_cbe_3688_count = 0;
  static  unsigned long long aesl_llvm_cbe_3689_count = 0;
  static  unsigned long long aesl_llvm_cbe_3690_count = 0;
  static  unsigned long long aesl_llvm_cbe_3691_count = 0;
  static  unsigned long long aesl_llvm_cbe_3692_count = 0;
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @topp\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @conv1([64 x [3 x float]]* %%image, [62 x [8 x float]]* getelementptr inbounds ([62 x [62 x [8 x float]]]* @aesl_internal_topp.f1, i64 0, i64 0), [3 x [3 x [3 x float]]]* getelementptr inbounds ([8 x [3 x [3 x [3 x float]]]]* @W1, i64 0, i64 0), float* getelementptr inbounds ([8 x float]* @B1, i64 0, i64 0)), !dbg !20 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_3684_count);
   /*tail*/ conv1(llvm_cbe_image, ((&aesl_internal_topp_OC_f1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 62
#endif
])), ((&W1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), (float *)((&B1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @maxpool1([62 x [8 x float]]* getelementptr inbounds ([62 x [62 x [8 x float]]]* @aesl_internal_topp.f1, i64 0, i64 0), [31 x [8 x float]]* getelementptr inbounds ([31 x [31 x [8 x float]]]* @aesl_internal_topp.p1, i64 0, i64 0)), !dbg !20 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_3685_count);
   /*tail*/ maxpool1(((&aesl_internal_topp_OC_f1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 62
#endif
])), ((&aesl_internal_topp_OC_p1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 31
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @conv2([31 x [8 x float]]* getelementptr inbounds ([31 x [31 x [8 x float]]]* @aesl_internal_topp.p1, i64 0, i64 0), [29 x [16 x float]]* getelementptr inbounds ([29 x [29 x [16 x float]]]* @aesl_internal_topp.f2, i64 0, i64 0), [8 x [3 x [3 x float]]]* getelementptr inbounds ([16 x [8 x [3 x [3 x float]]]]* @W2, i64 0, i64 0), float* getelementptr inbounds ([16 x float]* @B2, i64 0, i64 0)), !dbg !20 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_3686_count);
   /*tail*/ conv2(((&aesl_internal_topp_OC_p1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 31
#endif
])), ((&aesl_internal_topp_OC_f2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])), ((&W2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
])), (float *)((&B2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @maxpool2([29 x [16 x float]]* getelementptr inbounds ([29 x [29 x [16 x float]]]* @aesl_internal_topp.f2, i64 0, i64 0), [14 x [16 x float]]* getelementptr inbounds ([14 x [14 x [16 x float]]]* @aesl_internal_topp.p2, i64 0, i64 0)), !dbg !20 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_3687_count);
   /*tail*/ maxpool2(((&aesl_internal_topp_OC_f2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])), ((&aesl_internal_topp_OC_p2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @conv3([14 x [16 x float]]* getelementptr inbounds ([14 x [14 x [16 x float]]]* @aesl_internal_topp.p2, i64 0, i64 0), [12 x [32 x float]]* getelementptr inbounds ([12 x [12 x [32 x float]]]* @aesl_internal_topp.f3, i64 0, i64 0), [16 x [3 x [3 x float]]]* getelementptr inbounds ([32 x [16 x [3 x [3 x float]]]]* @W3, i64 0, i64 0), float* getelementptr inbounds ([32 x float]* @B3, i64 0, i64 0)), !dbg !20 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_3688_count);
   /*tail*/ conv3(((&aesl_internal_topp_OC_p2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
])), ((&aesl_internal_topp_OC_f3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])), ((&W3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
])), (float *)((&B3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @conv4([12 x [32 x float]]* getelementptr inbounds ([12 x [12 x [32 x float]]]* @aesl_internal_topp.f3, i64 0, i64 0), [10 x [32 x float]]* getelementptr inbounds ([10 x [10 x [32 x float]]]* @aesl_internal_topp.f4, i64 0, i64 0), [32 x [3 x [3 x float]]]* getelementptr inbounds ([32 x [32 x [3 x [3 x float]]]]* @W4, i64 0, i64 0), float* getelementptr inbounds ([32 x float]* @B4, i64 0, i64 0)), !dbg !20 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_3689_count);
   /*tail*/ conv4(((&aesl_internal_topp_OC_f3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])), ((&aesl_internal_topp_OC_f4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])), ((&W4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
])), (float *)((&B4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @conv5([10 x [32 x float]]* getelementptr inbounds ([10 x [10 x [32 x float]]]* @aesl_internal_topp.f4, i64 0, i64 0), [8 x [32 x float]]* getelementptr inbounds ([8 x [8 x [32 x float]]]* @aesl_internal_topp.f5, i64 0, i64 0), [32 x [3 x [3 x float]]]* getelementptr inbounds ([32 x [32 x [3 x [3 x float]]]]* @W5, i64 0, i64 0), float* getelementptr inbounds ([32 x float]* @B5, i64 0, i64 0)), !dbg !20 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_3690_count);
   /*tail*/ conv5(((&aesl_internal_topp_OC_f4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])), ((&aesl_internal_topp_OC_f5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), ((&W5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
])), (float *)((&B5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @detection_head([8 x [32 x float]]* getelementptr inbounds ([8 x [8 x [32 x float]]]* @aesl_internal_topp.f5, i64 0, i64 0), [8 x [16 x float]]* %%output, [32 x [1 x [1 x float]]]* getelementptr inbounds ([16 x [32 x [1 x [1 x float]]]]* @WH, i64 0, i64 0), float* getelementptr inbounds ([16 x float]* @BH, i64 0, i64 0)), !dbg !19 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_3691_count);
   /*tail*/ detection_head(((&aesl_internal_topp_OC_f5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), llvm_cbe_output, ((&WH[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
])), (float *)((&BH[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
])));
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @topp}\n");
  return;
}


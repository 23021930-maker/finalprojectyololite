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
static float aesl_internal_topp_OC_f1[62][62][8];
static float aesl_internal_topp_OC_p1[31][31][8];
static float aesl_internal_topp_OC_f2[29][29][16];
static float aesl_internal_topp_OC_p2[14][14][16];
static float aesl_internal_topp_OC_f3[12][12][32];
static float aesl_internal_topp_OC_f4[10][10][32];
static float aesl_internal_topp_OC_f5[8][8][32];
float W1[8][3][3][3] __ATTRIBUTE_WEAK__;
float B1[8] __ATTRIBUTE_WEAK__;
float W2[16][8][3][3] __ATTRIBUTE_WEAK__;
float W3[32][16][3][3] __ATTRIBUTE_WEAK__;
float B3[32] __ATTRIBUTE_WEAK__;
float B5[32] __ATTRIBUTE_WEAK__;
float B4[32] __ATTRIBUTE_WEAK__;
float BH[16] __ATTRIBUTE_WEAK__;
float B2[16] __ATTRIBUTE_WEAK__;
float WH[16][32][1][1] __ATTRIBUTE_WEAK__;
float W5[32][32][3][3] __ATTRIBUTE_WEAK__;
float W4[32][32][3][3] __ATTRIBUTE_WEAK__;


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
  static  unsigned long long aesl_llvm_cbe_storemerge16_count = 0;
  unsigned int llvm_cbe_storemerge16;
  unsigned int llvm_cbe_storemerge16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  unsigned long long llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  float *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge115_count = 0;
  unsigned int llvm_cbe_storemerge115;
  unsigned int llvm_cbe_storemerge115__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge213_count = 0;
  unsigned int llvm_cbe_storemerge213;
  unsigned int llvm_cbe_storemerge213__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  float llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  unsigned long long llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  unsigned long long llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge311_count = 0;
  unsigned int llvm_cbe_storemerge311;
  unsigned int llvm_cbe_storemerge311__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  float llvm_cbe_tmp__8;
  float llvm_cbe_tmp__8__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  unsigned long long llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  float *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  float llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  float *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  float llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  float llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  float llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  unsigned int llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  unsigned long long llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  float *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  float llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  float *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  float llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  float llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  float llvm_cbe_tmp__23;
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
  unsigned int llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  float *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  float llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  float *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  float llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  float llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  float llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  unsigned long long llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  float *llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  float llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  float *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  float llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  float llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  float llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  float *llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  float llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  float *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  float llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  float llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  float llvm_cbe_tmp__45;
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
  float *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  float llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  float *llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  float llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  float llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  float llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  float *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  float llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  float *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  float llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  float llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  float llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  float *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  float llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  float *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  float llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  float llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  float llvm_cbe_tmp__63;
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
  float *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  float llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  float *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  float llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  float llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  float llvm_cbe_tmp__69;
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
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  unsigned int llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  float llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  float *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond17_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond18_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond19_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv1\n");
  llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader14;

  do {     /* Syntactic loop '.preheader14' to make GCC happy */
llvm_cbe__2e_preheader14:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge16 = phi i32 [ 0, %%0 ], [ %%78, %%77  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_storemerge16_count);
  llvm_cbe_storemerge16 = (unsigned int )llvm_cbe_storemerge16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge16 = 0x%X",llvm_cbe_storemerge16);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__73);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge16 to i64, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__1 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds float* %%bias, i64 %%1, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__2 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}
  llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader12;

llvm_cbe_tmp__74:
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = add nsw i32 %%storemerge16, 1, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_244_count);
  llvm_cbe_tmp__73 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__73&4294967295ull)));
  if (((llvm_cbe_tmp__73&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__75;
  } else {
    llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__73;   /* for PHI node */
    goto llvm_cbe__2e_preheader14;
  }

  do {     /* Syntactic loop '.preheader12' to make GCC happy */
llvm_cbe__2e_preheader12:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge115 = phi i32 [ 0, %%.preheader14 ], [ %%33, %%76  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_storemerge115_count);
  llvm_cbe_storemerge115 = (unsigned int )llvm_cbe_storemerge115__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge115 = 0x%X",llvm_cbe_storemerge115);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__32);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge115 to i64, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__3 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge115);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
  llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__76;

llvm_cbe_tmp__77:
  if (((llvm_cbe_tmp__32&4294967295U) == (62u&4294967295U))) {
    goto llvm_cbe_tmp__74;
  } else {
    llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__32;   /* for PHI node */
    goto llvm_cbe__2e_preheader12;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__76:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge213 = phi i32 [ 0, %%.preheader12 ], [ %%17, %%72  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_storemerge213_count);
  llvm_cbe_storemerge213 = (unsigned int )llvm_cbe_storemerge213__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge213 = 0x%X",llvm_cbe_storemerge213);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%2, align 4, !dbg !20 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__4 = (float )*llvm_cbe_tmp__2;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__4, *(int*)(&llvm_cbe_tmp__4));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add nsw i32 %%storemerge115, 2, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__5 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__5&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%6 to i64, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__6 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%storemerge213 to i64, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_41_count);
  llvm_cbe_tmp__7 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge213);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__7);
  llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__8__PHI_TEMPORARY = (float )llvm_cbe_tmp__4;   /* for PHI node */
  goto llvm_cbe__2e_preheader7;

llvm_cbe_tmp__78:
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = select i1 %%73, float 0.000000e+00, float %%70, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_229_count);
  llvm_cbe_tmp__71 = (float )(((llvm_fcmp_olt(llvm_cbe_tmp__69, 0x0p0))) ? ((float )0x0p0) : ((float )llvm_cbe_tmp__69));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__71, *(int*)(&llvm_cbe_tmp__71));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [62 x [8 x float]]* %%out, i64 %%3, i64 %%8, i64 %%1, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_230_count);
  llvm_cbe_tmp__72 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__7))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__7));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__7) < 62 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__1) < 8 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%74, float* %%75, align 4, !dbg !19 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_231_count);
  *llvm_cbe_tmp__72 = llvm_cbe_tmp__71;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__71);
  if (((llvm_cbe_tmp__16&4294967295U) == (62u&4294967295U))) {
    goto llvm_cbe_tmp__77;
  } else {
    llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__16;   /* for PHI node */
    goto llvm_cbe_tmp__76;
  }

  do {     /* Syntactic loop '.preheader7' to make GCC happy */
llvm_cbe__2e_preheader7:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge311 = phi i32 [ 0, %%4 ], [ %%71, %%.preheader7  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_storemerge311_count);
  llvm_cbe_storemerge311 = (unsigned int )llvm_cbe_storemerge311__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge311 = 0x%X",llvm_cbe_storemerge311);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__70);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi float [ %%5, %%4 ], [ %%70, %%.preheader7  for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__8 = (float )llvm_cbe_tmp__8__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__8);
printf("\n = %f",llvm_cbe_tmp__4);
printf("\n = %f",llvm_cbe_tmp__69);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%storemerge311 to i64, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_48_count);
  llvm_cbe_tmp__9 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge311);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%3, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__10 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__7))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__7));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__7) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__11 = (float )*llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__11, *(int*)(&llvm_cbe_tmp__11));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 0, i64 0, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__12 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__1))
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
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__13 = (float )*llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__13, *(int*)(&llvm_cbe_tmp__13));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = fmul float %%12, %%14, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__14 = (float )((float )(llvm_cbe_tmp__11 * llvm_cbe_tmp__13));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__14, *(int*)(&llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = fadd float %%9, %%15, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__15 = (float )((float )(llvm_cbe_tmp__8 + llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__15, *(int*)(&llvm_cbe_tmp__15));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge213, 1, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_68_count);
  llvm_cbe_tmp__16 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__16&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%17 to i64, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__17 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%3, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__18 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__17))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__17));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__17) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* %%19, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__19 = (float )*llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__19, *(int*)(&llvm_cbe_tmp__19));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 0, i64 1, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__20 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__1))
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
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__21 = (float )*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__21, *(int*)(&llvm_cbe_tmp__21));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = fmul float %%20, %%22, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__22 = (float )((float )(llvm_cbe_tmp__19 * llvm_cbe_tmp__21));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__22, *(int*)(&llvm_cbe_tmp__22));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = fadd float %%16, %%23, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__23 = (float )((float )(llvm_cbe_tmp__15 + llvm_cbe_tmp__22));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__23, *(int*)(&llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add nsw i32 %%storemerge213, 2, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__24 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__24&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%25 to i64, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__25 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%3, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__26 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__25))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__25));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__25) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__27 = (float )*llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__27, *(int*)(&llvm_cbe_tmp__27));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 0, i64 2, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_89_count);
  llvm_cbe_tmp__28 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__1))
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
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* %%29, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__29 = (float )*llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__29, *(int*)(&llvm_cbe_tmp__29));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = fmul float %%28, %%30, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_91_count);
  llvm_cbe_tmp__30 = (float )((float )(llvm_cbe_tmp__27 * llvm_cbe_tmp__29));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__30, *(int*)(&llvm_cbe_tmp__30));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = fadd float %%24, %%31, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__31 = (float )((float )(llvm_cbe_tmp__23 + llvm_cbe_tmp__30));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__31, *(int*)(&llvm_cbe_tmp__31));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%storemerge115, 1, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__32 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__32&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%33 to i64, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__33 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%34, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__34 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__33))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__7))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__7));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__7) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__35 = (float )*llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__35, *(int*)(&llvm_cbe_tmp__35));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 1, i64 0, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__36 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__1))
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
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__37 = (float )*llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__37, *(int*)(&llvm_cbe_tmp__37));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = fmul float %%36, %%38, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__38 = (float )((float )(llvm_cbe_tmp__35 * llvm_cbe_tmp__37));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__38, *(int*)(&llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = fadd float %%32, %%39, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__39 = (float )((float )(llvm_cbe_tmp__31 + llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__39, *(int*)(&llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%34, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_128_count);
  llvm_cbe_tmp__40 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__33))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__17))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__17));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__17) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* %%41, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_129_count);
  llvm_cbe_tmp__41 = (float )*llvm_cbe_tmp__40;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__41, *(int*)(&llvm_cbe_tmp__41));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 1, i64 1, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_130_count);
  llvm_cbe_tmp__42 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__1))
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
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load float* %%43, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__43 = (float )*llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__43, *(int*)(&llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = fmul float %%42, %%44, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__44 = (float )((float )(llvm_cbe_tmp__41 * llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__44, *(int*)(&llvm_cbe_tmp__44));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = fadd float %%40, %%45, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__45 = (float )((float )(llvm_cbe_tmp__39 + llvm_cbe_tmp__44));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__45, *(int*)(&llvm_cbe_tmp__45));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%34, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__46 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__33))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__25))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__25));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__25) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load float* %%47, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__47 = (float )*llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__47, *(int*)(&llvm_cbe_tmp__47));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 1, i64 2, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_145_count);
  llvm_cbe_tmp__48 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__1))
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
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load float* %%49, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__49 = (float )*llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__49, *(int*)(&llvm_cbe_tmp__49));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = fmul float %%48, %%50, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__50 = (float )((float )(llvm_cbe_tmp__47 * llvm_cbe_tmp__49));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__50, *(int*)(&llvm_cbe_tmp__50));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = fadd float %%46, %%51, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__51 = (float )((float )(llvm_cbe_tmp__45 + llvm_cbe_tmp__50));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__51, *(int*)(&llvm_cbe_tmp__51));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%7, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_167_count);
  llvm_cbe_tmp__52 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__6))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__7))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__7));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__7) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__53 = (float )*llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 2, i64 0, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__54 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__1))
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
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__55 = (float )*llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__55, *(int*)(&llvm_cbe_tmp__55));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = fmul float %%54, %%56, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__56 = (float )((float )(llvm_cbe_tmp__53 * llvm_cbe_tmp__55));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__56, *(int*)(&llvm_cbe_tmp__56));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = fadd float %%52, %%57, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__57 = (float )((float )(llvm_cbe_tmp__51 + llvm_cbe_tmp__56));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__57, *(int*)(&llvm_cbe_tmp__57));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%7, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__58 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__6))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__17))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__17));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__17) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load float* %%59, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__59 = (float )*llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__59, *(int*)(&llvm_cbe_tmp__59));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 2, i64 1, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__60 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__1))
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
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load float* %%61, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__61 = (float )*llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__61, *(int*)(&llvm_cbe_tmp__61));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = fmul float %%60, %%62, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__62 = (float )((float )(llvm_cbe_tmp__59 * llvm_cbe_tmp__61));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__62, *(int*)(&llvm_cbe_tmp__62));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = fadd float %%58, %%63, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__63 = (float )((float )(llvm_cbe_tmp__57 + llvm_cbe_tmp__62));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__63, *(int*)(&llvm_cbe_tmp__63));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds [64 x [3 x float]]* %%in, i64 %%7, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__64 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__6))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )llvm_cbe_tmp__25))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__25));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__25) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* %%65, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__65 = (float )*llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__65, *(int*)(&llvm_cbe_tmp__65));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = getelementptr inbounds [3 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 2, i64 2, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__66 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__1))
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
][(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load float* %%67, align 4, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__67 = (float )*llvm_cbe_tmp__66;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__67, *(int*)(&llvm_cbe_tmp__67));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = fmul float %%66, %%68, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__68 = (float )((float )(llvm_cbe_tmp__65 * llvm_cbe_tmp__67));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__68, *(int*)(&llvm_cbe_tmp__68));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = fadd float %%64, %%69, !dbg !18 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__69 = (float )((float )(llvm_cbe_tmp__63 + llvm_cbe_tmp__68));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__69, *(int*)(&llvm_cbe_tmp__69));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = add nsw i32 %%storemerge311, 1, !dbg !21 for 0x%I64xth hint within @conv1  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__70 = (unsigned int )((unsigned int )(llvm_cbe_storemerge311&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__70&4294967295ull)));
  if (((llvm_cbe_tmp__70&4294967295U) == (3u&4294967295U))) {
    goto llvm_cbe_tmp__78;
  } else {
    llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__70;   /* for PHI node */
    llvm_cbe_tmp__8__PHI_TEMPORARY = (float )llvm_cbe_tmp__69;   /* for PHI node */
    goto llvm_cbe__2e_preheader7;
  }

  } while (1); /* end of syntactic loop '.preheader7' */
  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader12' */
  } while (1); /* end of syntactic loop '.preheader14' */
llvm_cbe_tmp__75:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv1}\n");
  return;
}


void maxpool1(float (*llvm_cbe_in)[62][8], float (*llvm_cbe_out)[31][8]) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  unsigned long long llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge111_count = 0;
  unsigned int llvm_cbe_storemerge111;
  unsigned int llvm_cbe_storemerge111__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  unsigned int llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  unsigned long long llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  unsigned long long llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  unsigned int llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  unsigned long long llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge29_count = 0;
  unsigned int llvm_cbe_storemerge29;
  unsigned int llvm_cbe_storemerge29__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  unsigned int llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  unsigned long long llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  float *llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  float llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  unsigned int llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  unsigned long long llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  float *llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  float llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  float llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  float *llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  float llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  float llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  float *llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  float llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  float llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  unsigned long long llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  float *llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  unsigned int llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  unsigned int llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond13_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  unsigned int llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond14_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @maxpool1\n");
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader10;

  do {     /* Syntactic loop '.preheader10' to make GCC happy */
llvm_cbe__2e_preheader10:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%0 ], [ %%31, %%30  for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__104);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge12 to i64, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_270_count);
  llvm_cbe_tmp__79 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__79);
  llvm_cbe_storemerge111__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader8;

llvm_cbe_tmp__105:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add nsw i32 %%storemerge12, 1, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_385_count);
  llvm_cbe_tmp__104 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__104&4294967295ull)));
  if (((llvm_cbe_tmp__104&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__106;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__104;   /* for PHI node */
    goto llvm_cbe__2e_preheader10;
  }

  do {     /* Syntactic loop '.preheader8' to make GCC happy */
llvm_cbe__2e_preheader8:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge111 = phi i32 [ 0, %%.preheader10 ], [ %%29, %%28  for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_storemerge111_count);
  llvm_cbe_storemerge111 = (unsigned int )llvm_cbe_storemerge111__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge111 = 0x%X",llvm_cbe_storemerge111);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__103);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl nsw i32 %%storemerge111, 1, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_277_count);
  llvm_cbe_tmp__80 = (unsigned int )llvm_cbe_storemerge111 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%2 to i64, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_278_count);
  llvm_cbe_tmp__81 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge111 to i64, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_279_count);
  llvm_cbe_tmp__82 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge111);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = or i32 %%2, 1, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_280_count);
  llvm_cbe_tmp__83 = (unsigned int )llvm_cbe_tmp__80 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%5 to i64, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_281_count);
  llvm_cbe_tmp__84 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__84);
  llvm_cbe_storemerge29__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

llvm_cbe_tmp__107:
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add nsw i32 %%storemerge111, 1, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_377_count);
  llvm_cbe_tmp__103 = (unsigned int )((unsigned int )(llvm_cbe_storemerge111&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__103&4294967295ull)));
  if (((llvm_cbe_tmp__103&4294967295U) == (31u&4294967295U))) {
    goto llvm_cbe_tmp__105;
  } else {
    llvm_cbe_storemerge111__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__103;   /* for PHI node */
    goto llvm_cbe__2e_preheader8;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge29 = phi i32 [ 0, %%.preheader8 ], [ %%27, %%.preheader  for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_storemerge29_count);
  llvm_cbe_storemerge29 = (unsigned int )llvm_cbe_storemerge29__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge29 = 0x%X",llvm_cbe_storemerge29);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__102);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = shl nsw i32 %%storemerge29, 1, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_283_count);
  llvm_cbe_tmp__85 = (unsigned int )llvm_cbe_storemerge29 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%7 to i64, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_284_count);
  llvm_cbe_tmp__86 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [62 x [8 x float]]* %%in, i64 %%3, i64 %%8, i64 %%1, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_285_count);
  llvm_cbe_tmp__87 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__81))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__86))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__79))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__81));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__86));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__86) < 62)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__79) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load float* %%9, align 4, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__88 = (float )*llvm_cbe_tmp__87;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__88, *(int*)(&llvm_cbe_tmp__88));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = or i32 %%7, 1, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__89 = (unsigned int )llvm_cbe_tmp__85 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sext i32 %%11 to i64, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_309_count);
  llvm_cbe_tmp__90 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [62 x [8 x float]]* %%in, i64 %%3, i64 %%12, i64 %%1, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_310_count);
  llvm_cbe_tmp__91 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__81))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__79))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__81));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__90) < 62)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__79) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_311_count);
  llvm_cbe_tmp__92 = (float )*llvm_cbe_tmp__91;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__92, *(int*)(&llvm_cbe_tmp__92));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = select i1 %%15, float %%14, float %%10, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_319_count);
  llvm_cbe_tmp__93 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__92, llvm_cbe_tmp__88))) ? ((float )llvm_cbe_tmp__92) : ((float )llvm_cbe_tmp__88));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__93, *(int*)(&llvm_cbe_tmp__93));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [62 x [8 x float]]* %%in, i64 %%6, i64 %%8, i64 %%1, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_332_count);
  llvm_cbe_tmp__94 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__84))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__86))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__79))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__84));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__86));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__86) < 62)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__79) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* %%17, align 4, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_333_count);
  llvm_cbe_tmp__95 = (float )*llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__95, *(int*)(&llvm_cbe_tmp__95));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = select i1 %%19, float %%18, float %%16, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__96 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__95, llvm_cbe_tmp__93))) ? ((float )llvm_cbe_tmp__95) : ((float )llvm_cbe_tmp__93));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__96, *(int*)(&llvm_cbe_tmp__96));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [62 x [8 x float]]* %%in, i64 %%6, i64 %%12, i64 %%1, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_347_count);
  llvm_cbe_tmp__97 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__84))
#ifdef AESL_BC_SIM
 % 62
#endif
][(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__79))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__84));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__90) < 62)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__79) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !18 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_348_count);
  llvm_cbe_tmp__98 = (float )*llvm_cbe_tmp__97;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__98, *(int*)(&llvm_cbe_tmp__98));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = select i1 %%23, float %%22, float %%20, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_356_count);
  llvm_cbe_tmp__99 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__98, llvm_cbe_tmp__96))) ? ((float )llvm_cbe_tmp__98) : ((float )llvm_cbe_tmp__96));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__99, *(int*)(&llvm_cbe_tmp__99));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = sext i32 %%storemerge29 to i64, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_366_count);
  llvm_cbe_tmp__100 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge29);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds [31 x [8 x float]]* %%out, i64 %%4, i64 %%25, i64 %%1, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_367_count);
  llvm_cbe_tmp__101 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__82))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__100))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__79))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__82));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__100));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__100) < 31 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__79) < 8 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* %%26, align 4, !dbg !19 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_368_count);
  *llvm_cbe_tmp__101 = llvm_cbe_tmp__99;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = add nsw i32 %%storemerge29, 1, !dbg !20 for 0x%I64xth hint within @maxpool1  --> \n", ++aesl_llvm_cbe_369_count);
  llvm_cbe_tmp__102 = (unsigned int )((unsigned int )(llvm_cbe_storemerge29&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__102&4294967295ull)));
  if (((llvm_cbe_tmp__102&4294967295U) == (31u&4294967295U))) {
    goto llvm_cbe_tmp__107;
  } else {
    llvm_cbe_storemerge29__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__102;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '.preheader8' */
  } while (1); /* end of syntactic loop '.preheader10' */
llvm_cbe_tmp__106:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @maxpool1}\n");
  return;
}


void conv2(float (*llvm_cbe_in)[31][8], float (*llvm_cbe_out)[29][16], float (*llvm_cbe_kernel)[8][3][3], float *llvm_cbe_bias) {
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_storemerge16_count = 0;
  unsigned int llvm_cbe_storemerge16;
  unsigned int llvm_cbe_storemerge16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  unsigned long long llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  float *llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge115_count = 0;
  unsigned int llvm_cbe_storemerge115;
  unsigned int llvm_cbe_storemerge115__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  unsigned long long llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge213_count = 0;
  unsigned int llvm_cbe_storemerge213;
  unsigned int llvm_cbe_storemerge213__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  float llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  unsigned int llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  unsigned long long llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  unsigned long long llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge311_count = 0;
  unsigned int llvm_cbe_storemerge311;
  unsigned int llvm_cbe_storemerge311__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  float llvm_cbe_tmp__115;
  float llvm_cbe_tmp__115__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  unsigned long long llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  float *llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  float llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  float *llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  float llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  float llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  float llvm_cbe_tmp__122;
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
  unsigned int llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  unsigned long long llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  float *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  float llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  float *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  float llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  float llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  float llvm_cbe_tmp__130;
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
  unsigned int llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  unsigned long long llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  float *llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  float llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  float *llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  float llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  float llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  float llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  unsigned int llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  unsigned long long llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  float *llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  float llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  float *llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  float llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  float llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  float llvm_cbe_tmp__146;
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
  float *llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  float llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  float *llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  float llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  float llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  float llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  float *llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  float llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  float *llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  float llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  float llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  float llvm_cbe_tmp__158;
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
  float *llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  float llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  float *llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  float llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  float llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  float llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  float *llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  float llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  float *llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  float llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  float llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  float llvm_cbe_tmp__170;
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
  float *llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  float llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  float *llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  float llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  float llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  float llvm_cbe_tmp__176;
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
  unsigned int llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  float llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  float *llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond17_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond18_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  unsigned int llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond19_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv2\n");
  llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader14;

  do {     /* Syntactic loop '.preheader14' to make GCC happy */
llvm_cbe__2e_preheader14:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge16 = phi i32 [ 0, %%0 ], [ %%78, %%77  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge16_count);
  llvm_cbe_storemerge16 = (unsigned int )llvm_cbe_storemerge16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge16 = 0x%X",llvm_cbe_storemerge16);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__180);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge16 to i64, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_413_count);
  llvm_cbe_tmp__108 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds float* %%bias, i64 %%1, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_414_count);
  llvm_cbe_tmp__109 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__108))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
}
  llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader12;

llvm_cbe_tmp__181:
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = add nsw i32 %%storemerge16, 1, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_637_count);
  llvm_cbe_tmp__180 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__180&4294967295ull)));
  if (((llvm_cbe_tmp__180&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__182;
  } else {
    llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__180;   /* for PHI node */
    goto llvm_cbe__2e_preheader14;
  }

  do {     /* Syntactic loop '.preheader12' to make GCC happy */
llvm_cbe__2e_preheader12:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge115 = phi i32 [ 0, %%.preheader14 ], [ %%33, %%76  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge115_count);
  llvm_cbe_storemerge115 = (unsigned int )llvm_cbe_storemerge115__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge115 = 0x%X",llvm_cbe_storemerge115);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__139);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge115 to i64, !dbg !19 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__110 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge115);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__110);
  llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__183;

llvm_cbe_tmp__184:
  if (((llvm_cbe_tmp__139&4294967295U) == (29u&4294967295U))) {
    goto llvm_cbe_tmp__181;
  } else {
    llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__139;   /* for PHI node */
    goto llvm_cbe__2e_preheader12;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__183:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge213 = phi i32 [ 0, %%.preheader12 ], [ %%17, %%72  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge213_count);
  llvm_cbe_storemerge213 = (unsigned int )llvm_cbe_storemerge213__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge213 = 0x%X",llvm_cbe_storemerge213);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__123);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%2, align 4, !dbg !20 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_422_count);
  llvm_cbe_tmp__111 = (float )*llvm_cbe_tmp__109;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__111, *(int*)(&llvm_cbe_tmp__111));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add nsw i32 %%storemerge115, 2, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_432_count);
  llvm_cbe_tmp__112 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__112&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%6 to i64, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_433_count);
  llvm_cbe_tmp__113 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%storemerge213 to i64, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_434_count);
  llvm_cbe_tmp__114 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge213);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__114);
  llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__115__PHI_TEMPORARY = (float )llvm_cbe_tmp__111;   /* for PHI node */
  goto llvm_cbe__2e_preheader7;

llvm_cbe_tmp__185:
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = select i1 %%73, float 0.000000e+00, float %%70, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_622_count);
  llvm_cbe_tmp__178 = (float )(((llvm_fcmp_olt(llvm_cbe_tmp__176, 0x0p0))) ? ((float )0x0p0) : ((float )llvm_cbe_tmp__176));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__178, *(int*)(&llvm_cbe_tmp__178));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [29 x [16 x float]]* %%out, i64 %%3, i64 %%8, i64 %%1, !dbg !19 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_623_count);
  llvm_cbe_tmp__179 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__110))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__114))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__108))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__110));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__114));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__114) < 29 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__108) < 16 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%74, float* %%75, align 4, !dbg !19 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_624_count);
  *llvm_cbe_tmp__179 = llvm_cbe_tmp__178;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__178);
  if (((llvm_cbe_tmp__123&4294967295U) == (29u&4294967295U))) {
    goto llvm_cbe_tmp__184;
  } else {
    llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__123;   /* for PHI node */
    goto llvm_cbe_tmp__183;
  }

  do {     /* Syntactic loop '.preheader7' to make GCC happy */
llvm_cbe__2e_preheader7:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge311 = phi i32 [ 0, %%4 ], [ %%71, %%.preheader7  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_storemerge311_count);
  llvm_cbe_storemerge311 = (unsigned int )llvm_cbe_storemerge311__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge311 = 0x%X",llvm_cbe_storemerge311);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__177);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi float [ %%5, %%4 ], [ %%70, %%.preheader7  for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_436_count);
  llvm_cbe_tmp__115 = (float )llvm_cbe_tmp__115__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__115);
printf("\n = %f",llvm_cbe_tmp__111);
printf("\n = %f",llvm_cbe_tmp__176);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%storemerge311 to i64, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_441_count);
  llvm_cbe_tmp__116 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge311);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%3, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_446_count);
  llvm_cbe_tmp__117 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__110))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__114))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__110));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__114));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__114) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_447_count);
  llvm_cbe_tmp__118 = (float )*llvm_cbe_tmp__117;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__118, *(int*)(&llvm_cbe_tmp__118));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 0, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_448_count);
  llvm_cbe_tmp__119 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__108))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_449_count);
  llvm_cbe_tmp__120 = (float )*llvm_cbe_tmp__119;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__120, *(int*)(&llvm_cbe_tmp__120));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = fmul float %%12, %%14, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_450_count);
  llvm_cbe_tmp__121 = (float )((float )(llvm_cbe_tmp__118 * llvm_cbe_tmp__120));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__121, *(int*)(&llvm_cbe_tmp__121));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = fadd float %%9, %%15, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_451_count);
  llvm_cbe_tmp__122 = (float )((float )(llvm_cbe_tmp__115 + llvm_cbe_tmp__121));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__122, *(int*)(&llvm_cbe_tmp__122));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge213, 1, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_461_count);
  llvm_cbe_tmp__123 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__123&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%17 to i64, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_462_count);
  llvm_cbe_tmp__124 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%3, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_463_count);
  llvm_cbe_tmp__125 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__110))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__124))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__110));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__124));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__124) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* %%19, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_464_count);
  llvm_cbe_tmp__126 = (float )*llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__126, *(int*)(&llvm_cbe_tmp__126));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 1, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_465_count);
  llvm_cbe_tmp__127 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__108))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_466_count);
  llvm_cbe_tmp__128 = (float )*llvm_cbe_tmp__127;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__128, *(int*)(&llvm_cbe_tmp__128));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = fmul float %%20, %%22, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_467_count);
  llvm_cbe_tmp__129 = (float )((float )(llvm_cbe_tmp__126 * llvm_cbe_tmp__128));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__129, *(int*)(&llvm_cbe_tmp__129));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = fadd float %%16, %%23, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_468_count);
  llvm_cbe_tmp__130 = (float )((float )(llvm_cbe_tmp__122 + llvm_cbe_tmp__129));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__130, *(int*)(&llvm_cbe_tmp__130));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add nsw i32 %%storemerge213, 2, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_478_count);
  llvm_cbe_tmp__131 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__131&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%25 to i64, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_479_count);
  llvm_cbe_tmp__132 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__132);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%3, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_480_count);
  llvm_cbe_tmp__133 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__110))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__132))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__110));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__132));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__132) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_481_count);
  llvm_cbe_tmp__134 = (float )*llvm_cbe_tmp__133;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__134, *(int*)(&llvm_cbe_tmp__134));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 2, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_482_count);
  llvm_cbe_tmp__135 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__108))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* %%29, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_483_count);
  llvm_cbe_tmp__136 = (float )*llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__136, *(int*)(&llvm_cbe_tmp__136));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = fmul float %%28, %%30, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_484_count);
  llvm_cbe_tmp__137 = (float )((float )(llvm_cbe_tmp__134 * llvm_cbe_tmp__136));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__137, *(int*)(&llvm_cbe_tmp__137));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = fadd float %%24, %%31, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_485_count);
  llvm_cbe_tmp__138 = (float )((float )(llvm_cbe_tmp__130 + llvm_cbe_tmp__137));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__138, *(int*)(&llvm_cbe_tmp__138));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%storemerge115, 1, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_504_count);
  llvm_cbe_tmp__139 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__139&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%33 to i64, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_505_count);
  llvm_cbe_tmp__140 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__140);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%34, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_506_count);
  llvm_cbe_tmp__141 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__140))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__114))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__140));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__114));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__114) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_507_count);
  llvm_cbe_tmp__142 = (float )*llvm_cbe_tmp__141;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__142, *(int*)(&llvm_cbe_tmp__142));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 0, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_508_count);
  llvm_cbe_tmp__143 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__108))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_509_count);
  llvm_cbe_tmp__144 = (float )*llvm_cbe_tmp__143;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__144, *(int*)(&llvm_cbe_tmp__144));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = fmul float %%36, %%38, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_510_count);
  llvm_cbe_tmp__145 = (float )((float )(llvm_cbe_tmp__142 * llvm_cbe_tmp__144));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__145, *(int*)(&llvm_cbe_tmp__145));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = fadd float %%32, %%39, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_511_count);
  llvm_cbe_tmp__146 = (float )((float )(llvm_cbe_tmp__138 + llvm_cbe_tmp__145));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__146, *(int*)(&llvm_cbe_tmp__146));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%34, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_521_count);
  llvm_cbe_tmp__147 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__140))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__124))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__140));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__124));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__124) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* %%41, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_522_count);
  llvm_cbe_tmp__148 = (float )*llvm_cbe_tmp__147;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__148, *(int*)(&llvm_cbe_tmp__148));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 1, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_523_count);
  llvm_cbe_tmp__149 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__108))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load float* %%43, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_524_count);
  llvm_cbe_tmp__150 = (float )*llvm_cbe_tmp__149;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__150, *(int*)(&llvm_cbe_tmp__150));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = fmul float %%42, %%44, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_525_count);
  llvm_cbe_tmp__151 = (float )((float )(llvm_cbe_tmp__148 * llvm_cbe_tmp__150));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__151, *(int*)(&llvm_cbe_tmp__151));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = fadd float %%40, %%45, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_526_count);
  llvm_cbe_tmp__152 = (float )((float )(llvm_cbe_tmp__146 + llvm_cbe_tmp__151));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__152, *(int*)(&llvm_cbe_tmp__152));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%34, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_536_count);
  llvm_cbe_tmp__153 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__140))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__132))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__140));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__132));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__132) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load float* %%47, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_537_count);
  llvm_cbe_tmp__154 = (float )*llvm_cbe_tmp__153;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__154, *(int*)(&llvm_cbe_tmp__154));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 2, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_538_count);
  llvm_cbe_tmp__155 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__108))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load float* %%49, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_539_count);
  llvm_cbe_tmp__156 = (float )*llvm_cbe_tmp__155;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__156, *(int*)(&llvm_cbe_tmp__156));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = fmul float %%48, %%50, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_540_count);
  llvm_cbe_tmp__157 = (float )((float )(llvm_cbe_tmp__154 * llvm_cbe_tmp__156));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__157, *(int*)(&llvm_cbe_tmp__157));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = fadd float %%46, %%51, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_541_count);
  llvm_cbe_tmp__158 = (float )((float )(llvm_cbe_tmp__152 + llvm_cbe_tmp__157));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__158, *(int*)(&llvm_cbe_tmp__158));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%7, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_560_count);
  llvm_cbe_tmp__159 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__113))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__114))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__113));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__114));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__114) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_561_count);
  llvm_cbe_tmp__160 = (float )*llvm_cbe_tmp__159;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__160, *(int*)(&llvm_cbe_tmp__160));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 0, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_562_count);
  llvm_cbe_tmp__161 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__108))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_563_count);
  llvm_cbe_tmp__162 = (float )*llvm_cbe_tmp__161;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__162, *(int*)(&llvm_cbe_tmp__162));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = fmul float %%54, %%56, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_564_count);
  llvm_cbe_tmp__163 = (float )((float )(llvm_cbe_tmp__160 * llvm_cbe_tmp__162));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__163, *(int*)(&llvm_cbe_tmp__163));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = fadd float %%52, %%57, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_565_count);
  llvm_cbe_tmp__164 = (float )((float )(llvm_cbe_tmp__158 + llvm_cbe_tmp__163));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__164, *(int*)(&llvm_cbe_tmp__164));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%7, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_575_count);
  llvm_cbe_tmp__165 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__113))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__124))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__113));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__124));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__124) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load float* %%59, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_576_count);
  llvm_cbe_tmp__166 = (float )*llvm_cbe_tmp__165;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__166, *(int*)(&llvm_cbe_tmp__166));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 1, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_577_count);
  llvm_cbe_tmp__167 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__108))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load float* %%61, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_578_count);
  llvm_cbe_tmp__168 = (float )*llvm_cbe_tmp__167;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__168, *(int*)(&llvm_cbe_tmp__168));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = fmul float %%60, %%62, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_579_count);
  llvm_cbe_tmp__169 = (float )((float )(llvm_cbe_tmp__166 * llvm_cbe_tmp__168));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__169, *(int*)(&llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = fadd float %%58, %%63, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_580_count);
  llvm_cbe_tmp__170 = (float )((float )(llvm_cbe_tmp__164 + llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__170, *(int*)(&llvm_cbe_tmp__170));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds [31 x [8 x float]]* %%in, i64 %%7, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_590_count);
  llvm_cbe_tmp__171 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__113))
#ifdef AESL_BC_SIM
 % 31
#endif
][(((signed long long )llvm_cbe_tmp__132))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__113));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__132));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__132) < 31)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* %%65, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_591_count);
  llvm_cbe_tmp__172 = (float )*llvm_cbe_tmp__171;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__172, *(int*)(&llvm_cbe_tmp__172));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = getelementptr inbounds [8 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 2, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_592_count);
  llvm_cbe_tmp__173 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__108))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__116))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__108));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__116));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__116) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load float* %%67, align 4, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_593_count);
  llvm_cbe_tmp__174 = (float )*llvm_cbe_tmp__173;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__174, *(int*)(&llvm_cbe_tmp__174));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = fmul float %%66, %%68, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_594_count);
  llvm_cbe_tmp__175 = (float )((float )(llvm_cbe_tmp__172 * llvm_cbe_tmp__174));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__175, *(int*)(&llvm_cbe_tmp__175));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = fadd float %%64, %%69, !dbg !18 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_595_count);
  llvm_cbe_tmp__176 = (float )((float )(llvm_cbe_tmp__170 + llvm_cbe_tmp__175));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__176, *(int*)(&llvm_cbe_tmp__176));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = add nsw i32 %%storemerge311, 1, !dbg !21 for 0x%I64xth hint within @conv2  --> \n", ++aesl_llvm_cbe_610_count);
  llvm_cbe_tmp__177 = (unsigned int )((unsigned int )(llvm_cbe_storemerge311&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__177&4294967295ull)));
  if (((llvm_cbe_tmp__177&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__185;
  } else {
    llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__177;   /* for PHI node */
    llvm_cbe_tmp__115__PHI_TEMPORARY = (float )llvm_cbe_tmp__176;   /* for PHI node */
    goto llvm_cbe__2e_preheader7;
  }

  } while (1); /* end of syntactic loop '.preheader7' */
  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader12' */
  } while (1); /* end of syntactic loop '.preheader14' */
llvm_cbe_tmp__182:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv2}\n");
  return;
}


void maxpool2(float (*llvm_cbe_in)[29][16], float (*llvm_cbe_out)[14][16]) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  unsigned long long llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge111_count = 0;
  unsigned int llvm_cbe_storemerge111;
  unsigned int llvm_cbe_storemerge111__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  unsigned int llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  unsigned long long llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  unsigned long long llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  unsigned int llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  unsigned long long llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge29_count = 0;
  unsigned int llvm_cbe_storemerge29;
  unsigned int llvm_cbe_storemerge29__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  unsigned int llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  unsigned long long llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  float *llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  float llvm_cbe_tmp__195;
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
  unsigned int llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  unsigned long long llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  float *llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  float llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  float llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
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
  float *llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  float llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  float llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  float *llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  float llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  float llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  unsigned long long llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  float *llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  unsigned int llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  unsigned int llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond13_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  unsigned int llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond14_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @maxpool2\n");
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader10;

  do {     /* Syntactic loop '.preheader10' to make GCC happy */
llvm_cbe__2e_preheader10:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%0 ], [ %%31, %%30  for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__211);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge12 to i64, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_663_count);
  llvm_cbe_tmp__186 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__186);
  llvm_cbe_storemerge111__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader8;

llvm_cbe_tmp__212:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add nsw i32 %%storemerge12, 1, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_778_count);
  llvm_cbe_tmp__211 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__211&4294967295ull)));
  if (((llvm_cbe_tmp__211&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__213;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__211;   /* for PHI node */
    goto llvm_cbe__2e_preheader10;
  }

  do {     /* Syntactic loop '.preheader8' to make GCC happy */
llvm_cbe__2e_preheader8:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge111 = phi i32 [ 0, %%.preheader10 ], [ %%29, %%28  for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_storemerge111_count);
  llvm_cbe_storemerge111 = (unsigned int )llvm_cbe_storemerge111__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge111 = 0x%X",llvm_cbe_storemerge111);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__210);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl nsw i32 %%storemerge111, 1, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_670_count);
  llvm_cbe_tmp__187 = (unsigned int )llvm_cbe_storemerge111 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__187);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%2 to i64, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_671_count);
  llvm_cbe_tmp__188 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__187);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__188);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge111 to i64, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_672_count);
  llvm_cbe_tmp__189 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge111);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__189);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = or i32 %%2, 1, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_673_count);
  llvm_cbe_tmp__190 = (unsigned int )llvm_cbe_tmp__187 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%5 to i64, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_674_count);
  llvm_cbe_tmp__191 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__191);
  llvm_cbe_storemerge29__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

llvm_cbe_tmp__214:
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add nsw i32 %%storemerge111, 1, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_770_count);
  llvm_cbe_tmp__210 = (unsigned int )((unsigned int )(llvm_cbe_storemerge111&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__210&4294967295ull)));
  if (((llvm_cbe_tmp__210&4294967295U) == (14u&4294967295U))) {
    goto llvm_cbe_tmp__212;
  } else {
    llvm_cbe_storemerge111__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__210;   /* for PHI node */
    goto llvm_cbe__2e_preheader8;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge29 = phi i32 [ 0, %%.preheader8 ], [ %%27, %%.preheader  for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_storemerge29_count);
  llvm_cbe_storemerge29 = (unsigned int )llvm_cbe_storemerge29__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge29 = 0x%X",llvm_cbe_storemerge29);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__209);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = shl nsw i32 %%storemerge29, 1, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_676_count);
  llvm_cbe_tmp__192 = (unsigned int )llvm_cbe_storemerge29 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%7 to i64, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_677_count);
  llvm_cbe_tmp__193 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__193);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [29 x [16 x float]]* %%in, i64 %%3, i64 %%8, i64 %%1, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_678_count);
  llvm_cbe_tmp__194 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__188))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__193))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__186))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__188));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__193));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__186));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__193) < 29)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__186) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load float* %%9, align 4, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_679_count);
  llvm_cbe_tmp__195 = (float )*llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__195, *(int*)(&llvm_cbe_tmp__195));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = or i32 %%7, 1, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_701_count);
  llvm_cbe_tmp__196 = (unsigned int )llvm_cbe_tmp__192 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__196);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sext i32 %%11 to i64, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_702_count);
  llvm_cbe_tmp__197 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__196);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__197);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [29 x [16 x float]]* %%in, i64 %%3, i64 %%12, i64 %%1, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_703_count);
  llvm_cbe_tmp__198 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__188))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__197))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__186))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__188));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__197));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__186));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__197) < 29)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__186) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_704_count);
  llvm_cbe_tmp__199 = (float )*llvm_cbe_tmp__198;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__199, *(int*)(&llvm_cbe_tmp__199));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = select i1 %%15, float %%14, float %%10, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_712_count);
  llvm_cbe_tmp__200 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__199, llvm_cbe_tmp__195))) ? ((float )llvm_cbe_tmp__199) : ((float )llvm_cbe_tmp__195));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__200, *(int*)(&llvm_cbe_tmp__200));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [29 x [16 x float]]* %%in, i64 %%6, i64 %%8, i64 %%1, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_725_count);
  llvm_cbe_tmp__201 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__191))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__193))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__186))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__191));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__193));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__186));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__193) < 29)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__186) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* %%17, align 4, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_726_count);
  llvm_cbe_tmp__202 = (float )*llvm_cbe_tmp__201;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__202, *(int*)(&llvm_cbe_tmp__202));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = select i1 %%19, float %%18, float %%16, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_734_count);
  llvm_cbe_tmp__203 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__202, llvm_cbe_tmp__200))) ? ((float )llvm_cbe_tmp__202) : ((float )llvm_cbe_tmp__200));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__203, *(int*)(&llvm_cbe_tmp__203));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [29 x [16 x float]]* %%in, i64 %%6, i64 %%12, i64 %%1, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_740_count);
  llvm_cbe_tmp__204 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__191))
#ifdef AESL_BC_SIM
 % 29
#endif
][(((signed long long )llvm_cbe_tmp__197))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__186))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__191));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__197));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__186));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__197) < 29)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__186) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !18 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_741_count);
  llvm_cbe_tmp__205 = (float )*llvm_cbe_tmp__204;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__205, *(int*)(&llvm_cbe_tmp__205));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = select i1 %%23, float %%22, float %%20, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_749_count);
  llvm_cbe_tmp__206 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__205, llvm_cbe_tmp__203))) ? ((float )llvm_cbe_tmp__205) : ((float )llvm_cbe_tmp__203));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__206, *(int*)(&llvm_cbe_tmp__206));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = sext i32 %%storemerge29 to i64, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_759_count);
  llvm_cbe_tmp__207 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge29);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds [14 x [16 x float]]* %%out, i64 %%4, i64 %%25, i64 %%1, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_760_count);
  llvm_cbe_tmp__208 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__189))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__207))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__186))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__189));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__207));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__186));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__207) < 14 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__186) < 16 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* %%26, align 4, !dbg !19 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_761_count);
  *llvm_cbe_tmp__208 = llvm_cbe_tmp__206;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = add nsw i32 %%storemerge29, 1, !dbg !20 for 0x%I64xth hint within @maxpool2  --> \n", ++aesl_llvm_cbe_762_count);
  llvm_cbe_tmp__209 = (unsigned int )((unsigned int )(llvm_cbe_storemerge29&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__209&4294967295ull)));
  if (((llvm_cbe_tmp__209&4294967295U) == (14u&4294967295U))) {
    goto llvm_cbe_tmp__214;
  } else {
    llvm_cbe_storemerge29__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__209;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '.preheader8' */
  } while (1); /* end of syntactic loop '.preheader10' */
llvm_cbe_tmp__213:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @maxpool2}\n");
  return;
}


void conv3(float (*llvm_cbe_in)[14][16], float (*llvm_cbe_out)[12][32], float (*llvm_cbe_kernel)[16][3][3], float *llvm_cbe_bias) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge16_count = 0;
  unsigned int llvm_cbe_storemerge16;
  unsigned int llvm_cbe_storemerge16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  unsigned long long llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  float *llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge115_count = 0;
  unsigned int llvm_cbe_storemerge115;
  unsigned int llvm_cbe_storemerge115__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  unsigned long long llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge213_count = 0;
  unsigned int llvm_cbe_storemerge213;
  unsigned int llvm_cbe_storemerge213__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  float llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  unsigned int llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  unsigned long long llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  unsigned long long llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge311_count = 0;
  unsigned int llvm_cbe_storemerge311;
  unsigned int llvm_cbe_storemerge311__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  float llvm_cbe_tmp__222;
  float llvm_cbe_tmp__222__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  unsigned long long llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  float *llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  float llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  float *llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  float llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  float llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  float llvm_cbe_tmp__229;
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
  unsigned int llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  unsigned long long llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  float *llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  float llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  float *llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  float llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  float llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  float llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  unsigned int llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  unsigned long long llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  float *llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  float llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  float *llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  float llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  float llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  float llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  unsigned int llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  unsigned long long llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  float *llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  float llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  float *llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  float llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  float llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  float llvm_cbe_tmp__253;
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
  float *llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  float llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
  float *llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  float llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  float llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  float llvm_cbe_tmp__259;
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
  float *llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  float llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
  float *llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  float llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  float llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  float llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  float *llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  float llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  float *llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  float llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  float llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  float llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  float *llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  float llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  float *llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  float llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  float llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  float llvm_cbe_tmp__277;
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
  float *llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;
  float llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_985_count = 0;
  float *llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_986_count = 0;
  float llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  float llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  float llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
  static  unsigned long long aesl_llvm_cbe_991_count = 0;
  static  unsigned long long aesl_llvm_cbe_992_count = 0;
  static  unsigned long long aesl_llvm_cbe_993_count = 0;
  static  unsigned long long aesl_llvm_cbe_994_count = 0;
  static  unsigned long long aesl_llvm_cbe_995_count = 0;
  static  unsigned long long aesl_llvm_cbe_996_count = 0;
  static  unsigned long long aesl_llvm_cbe_997_count = 0;
  static  unsigned long long aesl_llvm_cbe_998_count = 0;
  static  unsigned long long aesl_llvm_cbe_999_count = 0;
  static  unsigned long long aesl_llvm_cbe_1000_count = 0;
  static  unsigned long long aesl_llvm_cbe_1001_count = 0;
  static  unsigned long long aesl_llvm_cbe_1002_count = 0;
  static  unsigned long long aesl_llvm_cbe_1003_count = 0;
  unsigned int llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_1004_count = 0;
  static  unsigned long long aesl_llvm_cbe_1005_count = 0;
  static  unsigned long long aesl_llvm_cbe_1006_count = 0;
  static  unsigned long long aesl_llvm_cbe_1007_count = 0;
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  static  unsigned long long aesl_llvm_cbe_1015_count = 0;
  float llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_1016_count = 0;
  float *llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_1017_count = 0;
  static  unsigned long long aesl_llvm_cbe_1018_count = 0;
  static  unsigned long long aesl_llvm_cbe_1019_count = 0;
  static  unsigned long long aesl_llvm_cbe_1020_count = 0;
  static  unsigned long long aesl_llvm_cbe_1021_count = 0;
  static  unsigned long long aesl_llvm_cbe_1022_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond17_count = 0;
  static  unsigned long long aesl_llvm_cbe_1023_count = 0;
  static  unsigned long long aesl_llvm_cbe_1024_count = 0;
  static  unsigned long long aesl_llvm_cbe_1025_count = 0;
  static  unsigned long long aesl_llvm_cbe_1026_count = 0;
  static  unsigned long long aesl_llvm_cbe_1027_count = 0;
  static  unsigned long long aesl_llvm_cbe_1028_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond18_count = 0;
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  unsigned int llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond19_count = 0;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv3\n");
  llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader14;

  do {     /* Syntactic loop '.preheader14' to make GCC happy */
llvm_cbe__2e_preheader14:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge16 = phi i32 [ 0, %%0 ], [ %%78, %%77  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge16_count);
  llvm_cbe_storemerge16 = (unsigned int )llvm_cbe_storemerge16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge16 = 0x%X",llvm_cbe_storemerge16);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__287);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge16 to i64, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_806_count);
  llvm_cbe_tmp__215 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds float* %%bias, i64 %%1, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_807_count);
  llvm_cbe_tmp__216 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__215))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
}
  llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader12;

llvm_cbe_tmp__288:
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = add nsw i32 %%storemerge16, 1, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1030_count);
  llvm_cbe_tmp__287 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__287&4294967295ull)));
  if (((llvm_cbe_tmp__287&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__289;
  } else {
    llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__287;   /* for PHI node */
    goto llvm_cbe__2e_preheader14;
  }

  do {     /* Syntactic loop '.preheader12' to make GCC happy */
llvm_cbe__2e_preheader12:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge115 = phi i32 [ 0, %%.preheader14 ], [ %%33, %%76  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge115_count);
  llvm_cbe_storemerge115 = (unsigned int )llvm_cbe_storemerge115__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge115 = 0x%X",llvm_cbe_storemerge115);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__246);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge115 to i64, !dbg !19 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_813_count);
  llvm_cbe_tmp__217 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge115);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__217);
  llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__290;

llvm_cbe_tmp__291:
  if (((llvm_cbe_tmp__246&4294967295U) == (12u&4294967295U))) {
    goto llvm_cbe_tmp__288;
  } else {
    llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__246;   /* for PHI node */
    goto llvm_cbe__2e_preheader12;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__290:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge213 = phi i32 [ 0, %%.preheader12 ], [ %%17, %%72  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge213_count);
  llvm_cbe_storemerge213 = (unsigned int )llvm_cbe_storemerge213__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge213 = 0x%X",llvm_cbe_storemerge213);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__230);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%2, align 4, !dbg !20 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_815_count);
  llvm_cbe_tmp__218 = (float )*llvm_cbe_tmp__216;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__218, *(int*)(&llvm_cbe_tmp__218));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add nsw i32 %%storemerge115, 2, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_825_count);
  llvm_cbe_tmp__219 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__219&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%6 to i64, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_826_count);
  llvm_cbe_tmp__220 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%storemerge213 to i64, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_827_count);
  llvm_cbe_tmp__221 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge213);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__221);
  llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__222__PHI_TEMPORARY = (float )llvm_cbe_tmp__218;   /* for PHI node */
  goto llvm_cbe__2e_preheader7;

llvm_cbe_tmp__292:
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = select i1 %%73, float 0.000000e+00, float %%70, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1015_count);
  llvm_cbe_tmp__285 = (float )(((llvm_fcmp_olt(llvm_cbe_tmp__283, 0x0p0))) ? ((float )0x0p0) : ((float )llvm_cbe_tmp__283));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__285, *(int*)(&llvm_cbe_tmp__285));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [12 x [32 x float]]* %%out, i64 %%3, i64 %%8, i64 %%1, !dbg !19 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1016_count);
  llvm_cbe_tmp__286 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__217))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__221))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__215))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__217));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__221));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__221) < 12 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__215) < 32 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%74, float* %%75, align 4, !dbg !19 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1017_count);
  *llvm_cbe_tmp__286 = llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__285);
  if (((llvm_cbe_tmp__230&4294967295U) == (12u&4294967295U))) {
    goto llvm_cbe_tmp__291;
  } else {
    llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__230;   /* for PHI node */
    goto llvm_cbe_tmp__290;
  }

  do {     /* Syntactic loop '.preheader7' to make GCC happy */
llvm_cbe__2e_preheader7:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge311 = phi i32 [ 0, %%4 ], [ %%71, %%.preheader7  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_storemerge311_count);
  llvm_cbe_storemerge311 = (unsigned int )llvm_cbe_storemerge311__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge311 = 0x%X",llvm_cbe_storemerge311);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__284);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi float [ %%5, %%4 ], [ %%70, %%.preheader7  for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_829_count);
  llvm_cbe_tmp__222 = (float )llvm_cbe_tmp__222__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__222);
printf("\n = %f",llvm_cbe_tmp__218);
printf("\n = %f",llvm_cbe_tmp__283);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%storemerge311 to i64, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_834_count);
  llvm_cbe_tmp__223 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge311);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__223);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%3, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_839_count);
  llvm_cbe_tmp__224 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__217))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__221))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__217));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__221));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__221) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_840_count);
  llvm_cbe_tmp__225 = (float )*llvm_cbe_tmp__224;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__225, *(int*)(&llvm_cbe_tmp__225));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 0, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_841_count);
  llvm_cbe_tmp__226 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__215))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_842_count);
  llvm_cbe_tmp__227 = (float )*llvm_cbe_tmp__226;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__227, *(int*)(&llvm_cbe_tmp__227));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = fmul float %%12, %%14, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_843_count);
  llvm_cbe_tmp__228 = (float )((float )(llvm_cbe_tmp__225 * llvm_cbe_tmp__227));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__228, *(int*)(&llvm_cbe_tmp__228));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = fadd float %%9, %%15, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_844_count);
  llvm_cbe_tmp__229 = (float )((float )(llvm_cbe_tmp__222 + llvm_cbe_tmp__228));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__229, *(int*)(&llvm_cbe_tmp__229));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge213, 1, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_854_count);
  llvm_cbe_tmp__230 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__230&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%17 to i64, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_855_count);
  llvm_cbe_tmp__231 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__230);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__231);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%3, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_856_count);
  llvm_cbe_tmp__232 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__217))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__231))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__217));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__231));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__231) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* %%19, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_857_count);
  llvm_cbe_tmp__233 = (float )*llvm_cbe_tmp__232;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__233, *(int*)(&llvm_cbe_tmp__233));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 1, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_858_count);
  llvm_cbe_tmp__234 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__215))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_859_count);
  llvm_cbe_tmp__235 = (float )*llvm_cbe_tmp__234;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__235, *(int*)(&llvm_cbe_tmp__235));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = fmul float %%20, %%22, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_860_count);
  llvm_cbe_tmp__236 = (float )((float )(llvm_cbe_tmp__233 * llvm_cbe_tmp__235));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__236, *(int*)(&llvm_cbe_tmp__236));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = fadd float %%16, %%23, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_861_count);
  llvm_cbe_tmp__237 = (float )((float )(llvm_cbe_tmp__229 + llvm_cbe_tmp__236));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__237, *(int*)(&llvm_cbe_tmp__237));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add nsw i32 %%storemerge213, 2, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_871_count);
  llvm_cbe_tmp__238 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__238&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%25 to i64, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_872_count);
  llvm_cbe_tmp__239 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__238);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%3, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_873_count);
  llvm_cbe_tmp__240 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__217))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__239))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__217));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__239));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__239) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_874_count);
  llvm_cbe_tmp__241 = (float )*llvm_cbe_tmp__240;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__241, *(int*)(&llvm_cbe_tmp__241));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 2, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_875_count);
  llvm_cbe_tmp__242 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__215))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* %%29, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_876_count);
  llvm_cbe_tmp__243 = (float )*llvm_cbe_tmp__242;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__243, *(int*)(&llvm_cbe_tmp__243));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = fmul float %%28, %%30, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_877_count);
  llvm_cbe_tmp__244 = (float )((float )(llvm_cbe_tmp__241 * llvm_cbe_tmp__243));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__244, *(int*)(&llvm_cbe_tmp__244));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = fadd float %%24, %%31, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_878_count);
  llvm_cbe_tmp__245 = (float )((float )(llvm_cbe_tmp__237 + llvm_cbe_tmp__244));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__245, *(int*)(&llvm_cbe_tmp__245));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%storemerge115, 1, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_897_count);
  llvm_cbe_tmp__246 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__246&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%33 to i64, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_898_count);
  llvm_cbe_tmp__247 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__246);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__247);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%34, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_899_count);
  llvm_cbe_tmp__248 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__247))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__221))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__247));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__221));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__221) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_900_count);
  llvm_cbe_tmp__249 = (float )*llvm_cbe_tmp__248;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__249, *(int*)(&llvm_cbe_tmp__249));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 0, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_901_count);
  llvm_cbe_tmp__250 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__215))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_902_count);
  llvm_cbe_tmp__251 = (float )*llvm_cbe_tmp__250;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__251, *(int*)(&llvm_cbe_tmp__251));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = fmul float %%36, %%38, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_903_count);
  llvm_cbe_tmp__252 = (float )((float )(llvm_cbe_tmp__249 * llvm_cbe_tmp__251));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__252, *(int*)(&llvm_cbe_tmp__252));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = fadd float %%32, %%39, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_904_count);
  llvm_cbe_tmp__253 = (float )((float )(llvm_cbe_tmp__245 + llvm_cbe_tmp__252));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__253, *(int*)(&llvm_cbe_tmp__253));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%34, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_914_count);
  llvm_cbe_tmp__254 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__247))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__231))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__247));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__231));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__231) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* %%41, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_915_count);
  llvm_cbe_tmp__255 = (float )*llvm_cbe_tmp__254;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__255, *(int*)(&llvm_cbe_tmp__255));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 1, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_916_count);
  llvm_cbe_tmp__256 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__215))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load float* %%43, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_917_count);
  llvm_cbe_tmp__257 = (float )*llvm_cbe_tmp__256;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__257, *(int*)(&llvm_cbe_tmp__257));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = fmul float %%42, %%44, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_918_count);
  llvm_cbe_tmp__258 = (float )((float )(llvm_cbe_tmp__255 * llvm_cbe_tmp__257));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__258, *(int*)(&llvm_cbe_tmp__258));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = fadd float %%40, %%45, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_919_count);
  llvm_cbe_tmp__259 = (float )((float )(llvm_cbe_tmp__253 + llvm_cbe_tmp__258));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__259, *(int*)(&llvm_cbe_tmp__259));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%34, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_929_count);
  llvm_cbe_tmp__260 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__247))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__239))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__247));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__239));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__239) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load float* %%47, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_930_count);
  llvm_cbe_tmp__261 = (float )*llvm_cbe_tmp__260;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__261, *(int*)(&llvm_cbe_tmp__261));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 2, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_931_count);
  llvm_cbe_tmp__262 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__215))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load float* %%49, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_932_count);
  llvm_cbe_tmp__263 = (float )*llvm_cbe_tmp__262;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__263, *(int*)(&llvm_cbe_tmp__263));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = fmul float %%48, %%50, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_933_count);
  llvm_cbe_tmp__264 = (float )((float )(llvm_cbe_tmp__261 * llvm_cbe_tmp__263));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__264, *(int*)(&llvm_cbe_tmp__264));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = fadd float %%46, %%51, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_934_count);
  llvm_cbe_tmp__265 = (float )((float )(llvm_cbe_tmp__259 + llvm_cbe_tmp__264));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__265, *(int*)(&llvm_cbe_tmp__265));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%7, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_953_count);
  llvm_cbe_tmp__266 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__220))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__221))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__220));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__221));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__221) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_954_count);
  llvm_cbe_tmp__267 = (float )*llvm_cbe_tmp__266;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__267, *(int*)(&llvm_cbe_tmp__267));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 0, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_955_count);
  llvm_cbe_tmp__268 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__215))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_956_count);
  llvm_cbe_tmp__269 = (float )*llvm_cbe_tmp__268;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__269, *(int*)(&llvm_cbe_tmp__269));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = fmul float %%54, %%56, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_957_count);
  llvm_cbe_tmp__270 = (float )((float )(llvm_cbe_tmp__267 * llvm_cbe_tmp__269));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__270, *(int*)(&llvm_cbe_tmp__270));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = fadd float %%52, %%57, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_958_count);
  llvm_cbe_tmp__271 = (float )((float )(llvm_cbe_tmp__265 + llvm_cbe_tmp__270));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__271, *(int*)(&llvm_cbe_tmp__271));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%7, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_968_count);
  llvm_cbe_tmp__272 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__220))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__231))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__220));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__231));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__231) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load float* %%59, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_969_count);
  llvm_cbe_tmp__273 = (float )*llvm_cbe_tmp__272;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__273, *(int*)(&llvm_cbe_tmp__273));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 1, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_970_count);
  llvm_cbe_tmp__274 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__215))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load float* %%61, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_971_count);
  llvm_cbe_tmp__275 = (float )*llvm_cbe_tmp__274;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__275, *(int*)(&llvm_cbe_tmp__275));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = fmul float %%60, %%62, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_972_count);
  llvm_cbe_tmp__276 = (float )((float )(llvm_cbe_tmp__273 * llvm_cbe_tmp__275));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__276, *(int*)(&llvm_cbe_tmp__276));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = fadd float %%58, %%63, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_973_count);
  llvm_cbe_tmp__277 = (float )((float )(llvm_cbe_tmp__271 + llvm_cbe_tmp__276));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__277, *(int*)(&llvm_cbe_tmp__277));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds [14 x [16 x float]]* %%in, i64 %%7, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_983_count);
  llvm_cbe_tmp__278 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__220))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__239))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__220));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__239));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__239) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* %%65, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_984_count);
  llvm_cbe_tmp__279 = (float )*llvm_cbe_tmp__278;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__279, *(int*)(&llvm_cbe_tmp__279));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = getelementptr inbounds [16 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 2, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_985_count);
  llvm_cbe_tmp__280 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__215))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__223))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__215));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__223));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__223) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load float* %%67, align 4, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_986_count);
  llvm_cbe_tmp__281 = (float )*llvm_cbe_tmp__280;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__281, *(int*)(&llvm_cbe_tmp__281));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = fmul float %%66, %%68, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_987_count);
  llvm_cbe_tmp__282 = (float )((float )(llvm_cbe_tmp__279 * llvm_cbe_tmp__281));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__282, *(int*)(&llvm_cbe_tmp__282));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = fadd float %%64, %%69, !dbg !18 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_988_count);
  llvm_cbe_tmp__283 = (float )((float )(llvm_cbe_tmp__277 + llvm_cbe_tmp__282));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__283, *(int*)(&llvm_cbe_tmp__283));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = add nsw i32 %%storemerge311, 1, !dbg !21 for 0x%I64xth hint within @conv3  --> \n", ++aesl_llvm_cbe_1003_count);
  llvm_cbe_tmp__284 = (unsigned int )((unsigned int )(llvm_cbe_storemerge311&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__284&4294967295ull)));
  if (((llvm_cbe_tmp__284&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__292;
  } else {
    llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__284;   /* for PHI node */
    llvm_cbe_tmp__222__PHI_TEMPORARY = (float )llvm_cbe_tmp__283;   /* for PHI node */
    goto llvm_cbe__2e_preheader7;
  }

  } while (1); /* end of syntactic loop '.preheader7' */
  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader12' */
  } while (1); /* end of syntactic loop '.preheader14' */
llvm_cbe_tmp__289:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv3}\n");
  return;
}


void conv4(float (*llvm_cbe_in)[12][32], float (*llvm_cbe_out)[10][32], float (*llvm_cbe_kernel)[32][3][3], float *llvm_cbe_bias) {
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
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge16_count = 0;
  unsigned int llvm_cbe_storemerge16;
  unsigned int llvm_cbe_storemerge16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  unsigned long long llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  float *llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge115_count = 0;
  unsigned int llvm_cbe_storemerge115;
  unsigned int llvm_cbe_storemerge115__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  unsigned long long llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge213_count = 0;
  unsigned int llvm_cbe_storemerge213;
  unsigned int llvm_cbe_storemerge213__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  float llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  unsigned int llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  unsigned long long llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  unsigned long long llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge311_count = 0;
  unsigned int llvm_cbe_storemerge311;
  unsigned int llvm_cbe_storemerge311__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  float llvm_cbe_tmp__300;
  float llvm_cbe_tmp__300__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  unsigned long long llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  float *llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  float llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  float *llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  float llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  float llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  float llvm_cbe_tmp__307;
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
  unsigned int llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  unsigned long long llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  float *llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  float llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  float *llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  float llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;
  float llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  float llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  unsigned int llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  unsigned long long llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
  float *llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  float llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  float *llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
  float llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  float llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  float llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  unsigned int llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  unsigned long long llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  float *llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  float llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  float *llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  float llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;
  float llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_1156_count = 0;
  float llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_1157_count = 0;
  static  unsigned long long aesl_llvm_cbe_1158_count = 0;
  static  unsigned long long aesl_llvm_cbe_1159_count = 0;
  static  unsigned long long aesl_llvm_cbe_1160_count = 0;
  static  unsigned long long aesl_llvm_cbe_1161_count = 0;
  static  unsigned long long aesl_llvm_cbe_1162_count = 0;
  static  unsigned long long aesl_llvm_cbe_1163_count = 0;
  static  unsigned long long aesl_llvm_cbe_1164_count = 0;
  static  unsigned long long aesl_llvm_cbe_1165_count = 0;
  static  unsigned long long aesl_llvm_cbe_1166_count = 0;
  float *llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_1167_count = 0;
  float llvm_cbe_tmp__333;
  static  unsigned long long aesl_llvm_cbe_1168_count = 0;
  float *llvm_cbe_tmp__334;
  static  unsigned long long aesl_llvm_cbe_1169_count = 0;
  float llvm_cbe_tmp__335;
  static  unsigned long long aesl_llvm_cbe_1170_count = 0;
  float llvm_cbe_tmp__336;
  static  unsigned long long aesl_llvm_cbe_1171_count = 0;
  float llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_1172_count = 0;
  static  unsigned long long aesl_llvm_cbe_1173_count = 0;
  static  unsigned long long aesl_llvm_cbe_1174_count = 0;
  static  unsigned long long aesl_llvm_cbe_1175_count = 0;
  static  unsigned long long aesl_llvm_cbe_1176_count = 0;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  float *llvm_cbe_tmp__338;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  float llvm_cbe_tmp__339;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  float *llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  float llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  float llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  float llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
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
  float *llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  float llvm_cbe_tmp__345;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  float *llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  float llvm_cbe_tmp__347;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  float llvm_cbe_tmp__348;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  float llvm_cbe_tmp__349;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  float *llvm_cbe_tmp__350;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  float llvm_cbe_tmp__351;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  float *llvm_cbe_tmp__352;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  float llvm_cbe_tmp__353;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  float llvm_cbe_tmp__354;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  float llvm_cbe_tmp__355;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  float *llvm_cbe_tmp__356;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  float llvm_cbe_tmp__357;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  float *llvm_cbe_tmp__358;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  float llvm_cbe_tmp__359;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
  float llvm_cbe_tmp__360;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  float llvm_cbe_tmp__361;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  unsigned int llvm_cbe_tmp__362;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
  float llvm_cbe_tmp__363;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  float *llvm_cbe_tmp__364;
  static  unsigned long long aesl_llvm_cbe_1269_count = 0;
  static  unsigned long long aesl_llvm_cbe_1270_count = 0;
  static  unsigned long long aesl_llvm_cbe_1271_count = 0;
  static  unsigned long long aesl_llvm_cbe_1272_count = 0;
  static  unsigned long long aesl_llvm_cbe_1273_count = 0;
  static  unsigned long long aesl_llvm_cbe_1274_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond17_count = 0;
  static  unsigned long long aesl_llvm_cbe_1275_count = 0;
  static  unsigned long long aesl_llvm_cbe_1276_count = 0;
  static  unsigned long long aesl_llvm_cbe_1277_count = 0;
  static  unsigned long long aesl_llvm_cbe_1278_count = 0;
  static  unsigned long long aesl_llvm_cbe_1279_count = 0;
  static  unsigned long long aesl_llvm_cbe_1280_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond18_count = 0;
  static  unsigned long long aesl_llvm_cbe_1281_count = 0;
  static  unsigned long long aesl_llvm_cbe_1282_count = 0;
  unsigned int llvm_cbe_tmp__365;
  static  unsigned long long aesl_llvm_cbe_1283_count = 0;
  static  unsigned long long aesl_llvm_cbe_1284_count = 0;
  static  unsigned long long aesl_llvm_cbe_1285_count = 0;
  static  unsigned long long aesl_llvm_cbe_1286_count = 0;
  static  unsigned long long aesl_llvm_cbe_1287_count = 0;
  static  unsigned long long aesl_llvm_cbe_1288_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond19_count = 0;
  static  unsigned long long aesl_llvm_cbe_1289_count = 0;
  static  unsigned long long aesl_llvm_cbe_1290_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv4\n");
  llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader14;

  do {     /* Syntactic loop '.preheader14' to make GCC happy */
llvm_cbe__2e_preheader14:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge16 = phi i32 [ 0, %%0 ], [ %%78, %%77  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge16_count);
  llvm_cbe_storemerge16 = (unsigned int )llvm_cbe_storemerge16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge16 = 0x%X",llvm_cbe_storemerge16);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__365);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge16 to i64, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1058_count);
  llvm_cbe_tmp__293 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__293);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds float* %%bias, i64 %%1, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1059_count);
  llvm_cbe_tmp__294 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__293))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
}
  llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader12;

llvm_cbe_tmp__366:
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = add nsw i32 %%storemerge16, 1, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1282_count);
  llvm_cbe_tmp__365 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__365&4294967295ull)));
  if (((llvm_cbe_tmp__365&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__367;
  } else {
    llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__365;   /* for PHI node */
    goto llvm_cbe__2e_preheader14;
  }

  do {     /* Syntactic loop '.preheader12' to make GCC happy */
llvm_cbe__2e_preheader12:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge115 = phi i32 [ 0, %%.preheader14 ], [ %%33, %%76  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge115_count);
  llvm_cbe_storemerge115 = (unsigned int )llvm_cbe_storemerge115__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge115 = 0x%X",llvm_cbe_storemerge115);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__324);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge115 to i64, !dbg !19 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1065_count);
  llvm_cbe_tmp__295 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge115);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__295);
  llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__368;

llvm_cbe_tmp__369:
  if (((llvm_cbe_tmp__324&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe_tmp__366;
  } else {
    llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__324;   /* for PHI node */
    goto llvm_cbe__2e_preheader12;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__368:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge213 = phi i32 [ 0, %%.preheader12 ], [ %%17, %%72  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge213_count);
  llvm_cbe_storemerge213 = (unsigned int )llvm_cbe_storemerge213__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge213 = 0x%X",llvm_cbe_storemerge213);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__308);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%2, align 4, !dbg !20 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1067_count);
  llvm_cbe_tmp__296 = (float )*llvm_cbe_tmp__294;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__296, *(int*)(&llvm_cbe_tmp__296));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add nsw i32 %%storemerge115, 2, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1077_count);
  llvm_cbe_tmp__297 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__297&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%6 to i64, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1078_count);
  llvm_cbe_tmp__298 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__297);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__298);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%storemerge213 to i64, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1079_count);
  llvm_cbe_tmp__299 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge213);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__299);
  llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__300__PHI_TEMPORARY = (float )llvm_cbe_tmp__296;   /* for PHI node */
  goto llvm_cbe__2e_preheader7;

llvm_cbe_tmp__370:
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = select i1 %%73, float 0.000000e+00, float %%70, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1267_count);
  llvm_cbe_tmp__363 = (float )(((llvm_fcmp_olt(llvm_cbe_tmp__361, 0x0p0))) ? ((float )0x0p0) : ((float )llvm_cbe_tmp__361));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__363, *(int*)(&llvm_cbe_tmp__363));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [10 x [32 x float]]* %%out, i64 %%3, i64 %%8, i64 %%1, !dbg !19 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1268_count);
  llvm_cbe_tmp__364 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__295))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__293))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__295));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__299) < 10 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__293) < 32 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%74, float* %%75, align 4, !dbg !19 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1269_count);
  *llvm_cbe_tmp__364 = llvm_cbe_tmp__363;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__363);
  if (((llvm_cbe_tmp__308&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe_tmp__369;
  } else {
    llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__308;   /* for PHI node */
    goto llvm_cbe_tmp__368;
  }

  do {     /* Syntactic loop '.preheader7' to make GCC happy */
llvm_cbe__2e_preheader7:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge311 = phi i32 [ 0, %%4 ], [ %%71, %%.preheader7  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_storemerge311_count);
  llvm_cbe_storemerge311 = (unsigned int )llvm_cbe_storemerge311__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge311 = 0x%X",llvm_cbe_storemerge311);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__362);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi float [ %%5, %%4 ], [ %%70, %%.preheader7  for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1081_count);
  llvm_cbe_tmp__300 = (float )llvm_cbe_tmp__300__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__300);
printf("\n = %f",llvm_cbe_tmp__296);
printf("\n = %f",llvm_cbe_tmp__361);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%storemerge311 to i64, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1086_count);
  llvm_cbe_tmp__301 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge311);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__301);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%3, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1091_count);
  llvm_cbe_tmp__302 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__295))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__295));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__299) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1092_count);
  llvm_cbe_tmp__303 = (float )*llvm_cbe_tmp__302;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__303, *(int*)(&llvm_cbe_tmp__303));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 0, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1093_count);
  llvm_cbe_tmp__304 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__293))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1094_count);
  llvm_cbe_tmp__305 = (float )*llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__305, *(int*)(&llvm_cbe_tmp__305));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = fmul float %%12, %%14, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1095_count);
  llvm_cbe_tmp__306 = (float )((float )(llvm_cbe_tmp__303 * llvm_cbe_tmp__305));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__306, *(int*)(&llvm_cbe_tmp__306));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = fadd float %%9, %%15, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1096_count);
  llvm_cbe_tmp__307 = (float )((float )(llvm_cbe_tmp__300 + llvm_cbe_tmp__306));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__307, *(int*)(&llvm_cbe_tmp__307));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge213, 1, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1106_count);
  llvm_cbe_tmp__308 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__308&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%17 to i64, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1107_count);
  llvm_cbe_tmp__309 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__308);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__309);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%3, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1108_count);
  llvm_cbe_tmp__310 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__295))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__309))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__295));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__309));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__309) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* %%19, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1109_count);
  llvm_cbe_tmp__311 = (float )*llvm_cbe_tmp__310;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__311, *(int*)(&llvm_cbe_tmp__311));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 1, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1110_count);
  llvm_cbe_tmp__312 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__293))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1111_count);
  llvm_cbe_tmp__313 = (float )*llvm_cbe_tmp__312;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__313, *(int*)(&llvm_cbe_tmp__313));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = fmul float %%20, %%22, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1112_count);
  llvm_cbe_tmp__314 = (float )((float )(llvm_cbe_tmp__311 * llvm_cbe_tmp__313));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__314, *(int*)(&llvm_cbe_tmp__314));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = fadd float %%16, %%23, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1113_count);
  llvm_cbe_tmp__315 = (float )((float )(llvm_cbe_tmp__307 + llvm_cbe_tmp__314));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__315, *(int*)(&llvm_cbe_tmp__315));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add nsw i32 %%storemerge213, 2, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1123_count);
  llvm_cbe_tmp__316 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__316&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%25 to i64, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1124_count);
  llvm_cbe_tmp__317 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__316);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__317);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%3, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1125_count);
  llvm_cbe_tmp__318 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__295))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__317))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__295));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__317));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__317) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1126_count);
  llvm_cbe_tmp__319 = (float )*llvm_cbe_tmp__318;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__319, *(int*)(&llvm_cbe_tmp__319));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 2, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1127_count);
  llvm_cbe_tmp__320 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__293))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* %%29, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1128_count);
  llvm_cbe_tmp__321 = (float )*llvm_cbe_tmp__320;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__321, *(int*)(&llvm_cbe_tmp__321));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = fmul float %%28, %%30, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1129_count);
  llvm_cbe_tmp__322 = (float )((float )(llvm_cbe_tmp__319 * llvm_cbe_tmp__321));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__322, *(int*)(&llvm_cbe_tmp__322));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = fadd float %%24, %%31, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1130_count);
  llvm_cbe_tmp__323 = (float )((float )(llvm_cbe_tmp__315 + llvm_cbe_tmp__322));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__323, *(int*)(&llvm_cbe_tmp__323));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%storemerge115, 1, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1149_count);
  llvm_cbe_tmp__324 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__324&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%33 to i64, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1150_count);
  llvm_cbe_tmp__325 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__324);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%34, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1151_count);
  llvm_cbe_tmp__326 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__325))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__325));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__299) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1152_count);
  llvm_cbe_tmp__327 = (float )*llvm_cbe_tmp__326;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__327, *(int*)(&llvm_cbe_tmp__327));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 0, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1153_count);
  llvm_cbe_tmp__328 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__293))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1154_count);
  llvm_cbe_tmp__329 = (float )*llvm_cbe_tmp__328;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__329, *(int*)(&llvm_cbe_tmp__329));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = fmul float %%36, %%38, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1155_count);
  llvm_cbe_tmp__330 = (float )((float )(llvm_cbe_tmp__327 * llvm_cbe_tmp__329));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__330, *(int*)(&llvm_cbe_tmp__330));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = fadd float %%32, %%39, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1156_count);
  llvm_cbe_tmp__331 = (float )((float )(llvm_cbe_tmp__323 + llvm_cbe_tmp__330));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__331, *(int*)(&llvm_cbe_tmp__331));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%34, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1166_count);
  llvm_cbe_tmp__332 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__325))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__309))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__325));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__309));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__309) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* %%41, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1167_count);
  llvm_cbe_tmp__333 = (float )*llvm_cbe_tmp__332;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__333, *(int*)(&llvm_cbe_tmp__333));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 1, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1168_count);
  llvm_cbe_tmp__334 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__293))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load float* %%43, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1169_count);
  llvm_cbe_tmp__335 = (float )*llvm_cbe_tmp__334;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__335, *(int*)(&llvm_cbe_tmp__335));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = fmul float %%42, %%44, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1170_count);
  llvm_cbe_tmp__336 = (float )((float )(llvm_cbe_tmp__333 * llvm_cbe_tmp__335));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__336, *(int*)(&llvm_cbe_tmp__336));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = fadd float %%40, %%45, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1171_count);
  llvm_cbe_tmp__337 = (float )((float )(llvm_cbe_tmp__331 + llvm_cbe_tmp__336));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__337, *(int*)(&llvm_cbe_tmp__337));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%34, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1181_count);
  llvm_cbe_tmp__338 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__325))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__317))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__325));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__317));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__317) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load float* %%47, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1182_count);
  llvm_cbe_tmp__339 = (float )*llvm_cbe_tmp__338;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__339, *(int*)(&llvm_cbe_tmp__339));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 2, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1183_count);
  llvm_cbe_tmp__340 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__293))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load float* %%49, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1184_count);
  llvm_cbe_tmp__341 = (float )*llvm_cbe_tmp__340;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__341, *(int*)(&llvm_cbe_tmp__341));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = fmul float %%48, %%50, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1185_count);
  llvm_cbe_tmp__342 = (float )((float )(llvm_cbe_tmp__339 * llvm_cbe_tmp__341));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__342, *(int*)(&llvm_cbe_tmp__342));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = fadd float %%46, %%51, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1186_count);
  llvm_cbe_tmp__343 = (float )((float )(llvm_cbe_tmp__337 + llvm_cbe_tmp__342));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__343, *(int*)(&llvm_cbe_tmp__343));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%7, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1205_count);
  llvm_cbe_tmp__344 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__298))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__299))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__298));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__299));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__299) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1206_count);
  llvm_cbe_tmp__345 = (float )*llvm_cbe_tmp__344;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__345, *(int*)(&llvm_cbe_tmp__345));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 0, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1207_count);
  llvm_cbe_tmp__346 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__293))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1208_count);
  llvm_cbe_tmp__347 = (float )*llvm_cbe_tmp__346;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__347, *(int*)(&llvm_cbe_tmp__347));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = fmul float %%54, %%56, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1209_count);
  llvm_cbe_tmp__348 = (float )((float )(llvm_cbe_tmp__345 * llvm_cbe_tmp__347));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__348, *(int*)(&llvm_cbe_tmp__348));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = fadd float %%52, %%57, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1210_count);
  llvm_cbe_tmp__349 = (float )((float )(llvm_cbe_tmp__343 + llvm_cbe_tmp__348));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__349, *(int*)(&llvm_cbe_tmp__349));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%7, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1220_count);
  llvm_cbe_tmp__350 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__298))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__309))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__298));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__309));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__309) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load float* %%59, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1221_count);
  llvm_cbe_tmp__351 = (float )*llvm_cbe_tmp__350;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__351, *(int*)(&llvm_cbe_tmp__351));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 1, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1222_count);
  llvm_cbe_tmp__352 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__293))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load float* %%61, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1223_count);
  llvm_cbe_tmp__353 = (float )*llvm_cbe_tmp__352;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__353, *(int*)(&llvm_cbe_tmp__353));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = fmul float %%60, %%62, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1224_count);
  llvm_cbe_tmp__354 = (float )((float )(llvm_cbe_tmp__351 * llvm_cbe_tmp__353));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__354, *(int*)(&llvm_cbe_tmp__354));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = fadd float %%58, %%63, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1225_count);
  llvm_cbe_tmp__355 = (float )((float )(llvm_cbe_tmp__349 + llvm_cbe_tmp__354));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__355, *(int*)(&llvm_cbe_tmp__355));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds [12 x [32 x float]]* %%in, i64 %%7, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1235_count);
  llvm_cbe_tmp__356 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__298))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__317))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__298));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__317));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__317) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* %%65, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1236_count);
  llvm_cbe_tmp__357 = (float )*llvm_cbe_tmp__356;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__357, *(int*)(&llvm_cbe_tmp__357));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 2, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1237_count);
  llvm_cbe_tmp__358 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__293))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load float* %%67, align 4, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1238_count);
  llvm_cbe_tmp__359 = (float )*llvm_cbe_tmp__358;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__359, *(int*)(&llvm_cbe_tmp__359));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = fmul float %%66, %%68, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1239_count);
  llvm_cbe_tmp__360 = (float )((float )(llvm_cbe_tmp__357 * llvm_cbe_tmp__359));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__360, *(int*)(&llvm_cbe_tmp__360));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = fadd float %%64, %%69, !dbg !18 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1240_count);
  llvm_cbe_tmp__361 = (float )((float )(llvm_cbe_tmp__355 + llvm_cbe_tmp__360));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__361, *(int*)(&llvm_cbe_tmp__361));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = add nsw i32 %%storemerge311, 1, !dbg !21 for 0x%I64xth hint within @conv4  --> \n", ++aesl_llvm_cbe_1255_count);
  llvm_cbe_tmp__362 = (unsigned int )((unsigned int )(llvm_cbe_storemerge311&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__362&4294967295ull)));
  if (((llvm_cbe_tmp__362&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__370;
  } else {
    llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__362;   /* for PHI node */
    llvm_cbe_tmp__300__PHI_TEMPORARY = (float )llvm_cbe_tmp__361;   /* for PHI node */
    goto llvm_cbe__2e_preheader7;
  }

  } while (1); /* end of syntactic loop '.preheader7' */
  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader12' */
  } while (1); /* end of syntactic loop '.preheader14' */
llvm_cbe_tmp__367:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv4}\n");
  return;
}


void conv5(float (*llvm_cbe_in)[10][32], float (*llvm_cbe_out)[8][32], float (*llvm_cbe_kernel)[32][3][3], float *llvm_cbe_bias) {
  static  unsigned long long aesl_llvm_cbe_1291_count = 0;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;
  static  unsigned long long aesl_llvm_cbe_1293_count = 0;
  static  unsigned long long aesl_llvm_cbe_1294_count = 0;
  static  unsigned long long aesl_llvm_cbe_1295_count = 0;
  static  unsigned long long aesl_llvm_cbe_1296_count = 0;
  static  unsigned long long aesl_llvm_cbe_1297_count = 0;
  static  unsigned long long aesl_llvm_cbe_1298_count = 0;
  static  unsigned long long aesl_llvm_cbe_1299_count = 0;
  static  unsigned long long aesl_llvm_cbe_1300_count = 0;
  static  unsigned long long aesl_llvm_cbe_1301_count = 0;
  static  unsigned long long aesl_llvm_cbe_1302_count = 0;
  static  unsigned long long aesl_llvm_cbe_1303_count = 0;
  static  unsigned long long aesl_llvm_cbe_1304_count = 0;
  static  unsigned long long aesl_llvm_cbe_1305_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge16_count = 0;
  unsigned int llvm_cbe_storemerge16;
  unsigned int llvm_cbe_storemerge16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1306_count = 0;
  static  unsigned long long aesl_llvm_cbe_1307_count = 0;
  static  unsigned long long aesl_llvm_cbe_1308_count = 0;
  static  unsigned long long aesl_llvm_cbe_1309_count = 0;
  static  unsigned long long aesl_llvm_cbe_1310_count = 0;
  unsigned long long llvm_cbe_tmp__371;
  static  unsigned long long aesl_llvm_cbe_1311_count = 0;
  float *llvm_cbe_tmp__372;
  static  unsigned long long aesl_llvm_cbe_1312_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge115_count = 0;
  unsigned int llvm_cbe_storemerge115;
  unsigned int llvm_cbe_storemerge115__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1313_count = 0;
  static  unsigned long long aesl_llvm_cbe_1314_count = 0;
  static  unsigned long long aesl_llvm_cbe_1315_count = 0;
  static  unsigned long long aesl_llvm_cbe_1316_count = 0;
  static  unsigned long long aesl_llvm_cbe_1317_count = 0;
  unsigned long long llvm_cbe_tmp__373;
  static  unsigned long long aesl_llvm_cbe_1318_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge213_count = 0;
  unsigned int llvm_cbe_storemerge213;
  unsigned int llvm_cbe_storemerge213__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1319_count = 0;
  float llvm_cbe_tmp__374;
  static  unsigned long long aesl_llvm_cbe_1320_count = 0;
  static  unsigned long long aesl_llvm_cbe_1321_count = 0;
  static  unsigned long long aesl_llvm_cbe_1322_count = 0;
  static  unsigned long long aesl_llvm_cbe_1323_count = 0;
  static  unsigned long long aesl_llvm_cbe_1324_count = 0;
  static  unsigned long long aesl_llvm_cbe_1325_count = 0;
  static  unsigned long long aesl_llvm_cbe_1326_count = 0;
  static  unsigned long long aesl_llvm_cbe_1327_count = 0;
  static  unsigned long long aesl_llvm_cbe_1328_count = 0;
  unsigned int llvm_cbe_tmp__375;
  static  unsigned long long aesl_llvm_cbe_1329_count = 0;
  unsigned long long llvm_cbe_tmp__376;
  static  unsigned long long aesl_llvm_cbe_1330_count = 0;
  unsigned long long llvm_cbe_tmp__377;
  static  unsigned long long aesl_llvm_cbe_1331_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge311_count = 0;
  unsigned int llvm_cbe_storemerge311;
  unsigned int llvm_cbe_storemerge311__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1332_count = 0;
  float llvm_cbe_tmp__378;
  float llvm_cbe_tmp__378__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1333_count = 0;
  static  unsigned long long aesl_llvm_cbe_1334_count = 0;
  static  unsigned long long aesl_llvm_cbe_1335_count = 0;
  static  unsigned long long aesl_llvm_cbe_1336_count = 0;
  static  unsigned long long aesl_llvm_cbe_1337_count = 0;
  unsigned long long llvm_cbe_tmp__379;
  static  unsigned long long aesl_llvm_cbe_1338_count = 0;
  static  unsigned long long aesl_llvm_cbe_1339_count = 0;
  static  unsigned long long aesl_llvm_cbe_1340_count = 0;
  static  unsigned long long aesl_llvm_cbe_1341_count = 0;
  static  unsigned long long aesl_llvm_cbe_1342_count = 0;
  float *llvm_cbe_tmp__380;
  static  unsigned long long aesl_llvm_cbe_1343_count = 0;
  float llvm_cbe_tmp__381;
  static  unsigned long long aesl_llvm_cbe_1344_count = 0;
  float *llvm_cbe_tmp__382;
  static  unsigned long long aesl_llvm_cbe_1345_count = 0;
  float llvm_cbe_tmp__383;
  static  unsigned long long aesl_llvm_cbe_1346_count = 0;
  float llvm_cbe_tmp__384;
  static  unsigned long long aesl_llvm_cbe_1347_count = 0;
  float llvm_cbe_tmp__385;
  static  unsigned long long aesl_llvm_cbe_1348_count = 0;
  static  unsigned long long aesl_llvm_cbe_1349_count = 0;
  static  unsigned long long aesl_llvm_cbe_1350_count = 0;
  static  unsigned long long aesl_llvm_cbe_1351_count = 0;
  static  unsigned long long aesl_llvm_cbe_1352_count = 0;
  static  unsigned long long aesl_llvm_cbe_1353_count = 0;
  static  unsigned long long aesl_llvm_cbe_1354_count = 0;
  static  unsigned long long aesl_llvm_cbe_1355_count = 0;
  static  unsigned long long aesl_llvm_cbe_1356_count = 0;
  unsigned int llvm_cbe_tmp__386;
  static  unsigned long long aesl_llvm_cbe_1357_count = 0;
  unsigned long long llvm_cbe_tmp__387;
  static  unsigned long long aesl_llvm_cbe_1358_count = 0;
  float *llvm_cbe_tmp__388;
  static  unsigned long long aesl_llvm_cbe_1359_count = 0;
  float llvm_cbe_tmp__389;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  float *llvm_cbe_tmp__390;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  float llvm_cbe_tmp__391;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  float llvm_cbe_tmp__392;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
  float llvm_cbe_tmp__393;
  static  unsigned long long aesl_llvm_cbe_1364_count = 0;
  static  unsigned long long aesl_llvm_cbe_1365_count = 0;
  static  unsigned long long aesl_llvm_cbe_1366_count = 0;
  static  unsigned long long aesl_llvm_cbe_1367_count = 0;
  static  unsigned long long aesl_llvm_cbe_1368_count = 0;
  static  unsigned long long aesl_llvm_cbe_1369_count = 0;
  static  unsigned long long aesl_llvm_cbe_1370_count = 0;
  static  unsigned long long aesl_llvm_cbe_1371_count = 0;
  static  unsigned long long aesl_llvm_cbe_1372_count = 0;
  unsigned int llvm_cbe_tmp__394;
  static  unsigned long long aesl_llvm_cbe_1373_count = 0;
  unsigned long long llvm_cbe_tmp__395;
  static  unsigned long long aesl_llvm_cbe_1374_count = 0;
  float *llvm_cbe_tmp__396;
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
  float llvm_cbe_tmp__397;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
  float *llvm_cbe_tmp__398;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
  float llvm_cbe_tmp__399;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  float llvm_cbe_tmp__400;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  float llvm_cbe_tmp__401;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
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
  unsigned int llvm_cbe_tmp__402;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
  unsigned long long llvm_cbe_tmp__403;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  float *llvm_cbe_tmp__404;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  float llvm_cbe_tmp__405;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  float *llvm_cbe_tmp__406;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  float llvm_cbe_tmp__407;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  float llvm_cbe_tmp__408;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  float llvm_cbe_tmp__409;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  float *llvm_cbe_tmp__410;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  float llvm_cbe_tmp__411;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;
  float *llvm_cbe_tmp__412;
  static  unsigned long long aesl_llvm_cbe_1416_count = 0;
  float llvm_cbe_tmp__413;
  static  unsigned long long aesl_llvm_cbe_1417_count = 0;
  float llvm_cbe_tmp__414;
  static  unsigned long long aesl_llvm_cbe_1418_count = 0;
  float llvm_cbe_tmp__415;
  static  unsigned long long aesl_llvm_cbe_1419_count = 0;
  static  unsigned long long aesl_llvm_cbe_1420_count = 0;
  static  unsigned long long aesl_llvm_cbe_1421_count = 0;
  static  unsigned long long aesl_llvm_cbe_1422_count = 0;
  static  unsigned long long aesl_llvm_cbe_1423_count = 0;
  static  unsigned long long aesl_llvm_cbe_1424_count = 0;
  static  unsigned long long aesl_llvm_cbe_1425_count = 0;
  static  unsigned long long aesl_llvm_cbe_1426_count = 0;
  static  unsigned long long aesl_llvm_cbe_1427_count = 0;
  float *llvm_cbe_tmp__416;
  static  unsigned long long aesl_llvm_cbe_1428_count = 0;
  float llvm_cbe_tmp__417;
  static  unsigned long long aesl_llvm_cbe_1429_count = 0;
  float *llvm_cbe_tmp__418;
  static  unsigned long long aesl_llvm_cbe_1430_count = 0;
  float llvm_cbe_tmp__419;
  static  unsigned long long aesl_llvm_cbe_1431_count = 0;
  float llvm_cbe_tmp__420;
  static  unsigned long long aesl_llvm_cbe_1432_count = 0;
  float llvm_cbe_tmp__421;
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
  float *llvm_cbe_tmp__422;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  float llvm_cbe_tmp__423;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
  float *llvm_cbe_tmp__424;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  float llvm_cbe_tmp__425;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
  float llvm_cbe_tmp__426;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  float llvm_cbe_tmp__427;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  static  unsigned long long aesl_llvm_cbe_1457_count = 0;
  static  unsigned long long aesl_llvm_cbe_1458_count = 0;
  static  unsigned long long aesl_llvm_cbe_1459_count = 0;
  static  unsigned long long aesl_llvm_cbe_1460_count = 0;
  static  unsigned long long aesl_llvm_cbe_1461_count = 0;
  static  unsigned long long aesl_llvm_cbe_1462_count = 0;
  static  unsigned long long aesl_llvm_cbe_1463_count = 0;
  static  unsigned long long aesl_llvm_cbe_1464_count = 0;
  float *llvm_cbe_tmp__428;
  static  unsigned long long aesl_llvm_cbe_1465_count = 0;
  float llvm_cbe_tmp__429;
  static  unsigned long long aesl_llvm_cbe_1466_count = 0;
  float *llvm_cbe_tmp__430;
  static  unsigned long long aesl_llvm_cbe_1467_count = 0;
  float llvm_cbe_tmp__431;
  static  unsigned long long aesl_llvm_cbe_1468_count = 0;
  float llvm_cbe_tmp__432;
  static  unsigned long long aesl_llvm_cbe_1469_count = 0;
  float llvm_cbe_tmp__433;
  static  unsigned long long aesl_llvm_cbe_1470_count = 0;
  static  unsigned long long aesl_llvm_cbe_1471_count = 0;
  static  unsigned long long aesl_llvm_cbe_1472_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  float *llvm_cbe_tmp__434;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  float llvm_cbe_tmp__435;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  float *llvm_cbe_tmp__436;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  float llvm_cbe_tmp__437;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  float llvm_cbe_tmp__438;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  float llvm_cbe_tmp__439;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  unsigned int llvm_cbe_tmp__440;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
  static  unsigned long long aesl_llvm_cbe_1499_count = 0;
  static  unsigned long long aesl_llvm_cbe_1500_count = 0;
  static  unsigned long long aesl_llvm_cbe_1501_count = 0;
  static  unsigned long long aesl_llvm_cbe_1502_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1503_count = 0;
  static  unsigned long long aesl_llvm_cbe_1504_count = 0;
  float *llvm_cbe_tmp__441;
  static  unsigned long long aesl_llvm_cbe_1505_count = 0;
  static  unsigned long long aesl_llvm_cbe_1506_count = 0;
  static  unsigned long long aesl_llvm_cbe_1507_count = 0;
  static  unsigned long long aesl_llvm_cbe_1508_count = 0;
  static  unsigned long long aesl_llvm_cbe_1509_count = 0;
  static  unsigned long long aesl_llvm_cbe_1510_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond17_count = 0;
  static  unsigned long long aesl_llvm_cbe_1511_count = 0;
  static  unsigned long long aesl_llvm_cbe_1512_count = 0;
  static  unsigned long long aesl_llvm_cbe_1513_count = 0;
  static  unsigned long long aesl_llvm_cbe_1514_count = 0;
  static  unsigned long long aesl_llvm_cbe_1515_count = 0;
  static  unsigned long long aesl_llvm_cbe_1516_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond18_count = 0;
  static  unsigned long long aesl_llvm_cbe_1517_count = 0;
  static  unsigned long long aesl_llvm_cbe_1518_count = 0;
  unsigned int llvm_cbe_tmp__442;
  static  unsigned long long aesl_llvm_cbe_1519_count = 0;
  static  unsigned long long aesl_llvm_cbe_1520_count = 0;
  static  unsigned long long aesl_llvm_cbe_1521_count = 0;
  static  unsigned long long aesl_llvm_cbe_1522_count = 0;
  static  unsigned long long aesl_llvm_cbe_1523_count = 0;
  static  unsigned long long aesl_llvm_cbe_1524_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond19_count = 0;
  static  unsigned long long aesl_llvm_cbe_1525_count = 0;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv5\n");
  llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader14;

  do {     /* Syntactic loop '.preheader14' to make GCC happy */
llvm_cbe__2e_preheader14:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge16 = phi i32 [ 0, %%0 ], [ %%76, %%75  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge16_count);
  llvm_cbe_storemerge16 = (unsigned int )llvm_cbe_storemerge16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge16 = 0x%X",llvm_cbe_storemerge16);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__442);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge16 to i64, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1310_count);
  llvm_cbe_tmp__371 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__371);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds float* %%bias, i64 %%1, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1311_count);
  llvm_cbe_tmp__372 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__371))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
}
  llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader12;

llvm_cbe_tmp__443:
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = add nsw i32 %%storemerge16, 1, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1518_count);
  llvm_cbe_tmp__442 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__442&4294967295ull)));
  if (((llvm_cbe_tmp__442&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__444;
  } else {
    llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__442;   /* for PHI node */
    goto llvm_cbe__2e_preheader14;
  }

  do {     /* Syntactic loop '.preheader12' to make GCC happy */
llvm_cbe__2e_preheader12:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge115 = phi i32 [ 0, %%.preheader14 ], [ %%33, %%74  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge115_count);
  llvm_cbe_storemerge115 = (unsigned int )llvm_cbe_storemerge115__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge115 = 0x%X",llvm_cbe_storemerge115);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__402);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge115 to i64, !dbg !19 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1317_count);
  llvm_cbe_tmp__373 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge115);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__373);
  llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__445;

llvm_cbe_tmp__446:
  if (((llvm_cbe_tmp__402&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__443;
  } else {
    llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__402;   /* for PHI node */
    goto llvm_cbe__2e_preheader12;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__445:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge213 = phi i32 [ 0, %%.preheader12 ], [ %%17, %%72  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge213_count);
  llvm_cbe_storemerge213 = (unsigned int )llvm_cbe_storemerge213__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge213 = 0x%X",llvm_cbe_storemerge213);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__386);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%2, align 4, !dbg !20 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1319_count);
  llvm_cbe_tmp__374 = (float )*llvm_cbe_tmp__372;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__374, *(int*)(&llvm_cbe_tmp__374));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add nsw i32 %%storemerge115, 2, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1328_count);
  llvm_cbe_tmp__375 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__375&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%6 to i64, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1329_count);
  llvm_cbe_tmp__376 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__375);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__376);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%storemerge213 to i64, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1330_count);
  llvm_cbe_tmp__377 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge213);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__377);
  llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__378__PHI_TEMPORARY = (float )llvm_cbe_tmp__374;   /* for PHI node */
  goto llvm_cbe__2e_preheader7;

llvm_cbe_tmp__447:
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [8 x [32 x float]]* %%out, i64 %%3, i64 %%8, i64 %%1, !dbg !19 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1504_count);
  llvm_cbe_tmp__441 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__373))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__377))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__371))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__373));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__377));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__377) < 8 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__371) < 32 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%70, float* %%73, align 4, !dbg !19 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1505_count);
  *llvm_cbe_tmp__441 = llvm_cbe_tmp__439;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__439);
  if (((llvm_cbe_tmp__386&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__446;
  } else {
    llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__386;   /* for PHI node */
    goto llvm_cbe_tmp__445;
  }

  do {     /* Syntactic loop '.preheader7' to make GCC happy */
llvm_cbe__2e_preheader7:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge311 = phi i32 [ 0, %%4 ], [ %%71, %%.preheader7  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_storemerge311_count);
  llvm_cbe_storemerge311 = (unsigned int )llvm_cbe_storemerge311__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge311 = 0x%X",llvm_cbe_storemerge311);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__440);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi float [ %%5, %%4 ], [ %%70, %%.preheader7  for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1332_count);
  llvm_cbe_tmp__378 = (float )llvm_cbe_tmp__378__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__378);
printf("\n = %f",llvm_cbe_tmp__374);
printf("\n = %f",llvm_cbe_tmp__439);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%storemerge311 to i64, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1337_count);
  llvm_cbe_tmp__379 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge311);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__379);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%3, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1342_count);
  llvm_cbe_tmp__380 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__373))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__377))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__373));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__377));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__377) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1343_count);
  llvm_cbe_tmp__381 = (float )*llvm_cbe_tmp__380;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__381, *(int*)(&llvm_cbe_tmp__381));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 0, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1344_count);
  llvm_cbe_tmp__382 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1345_count);
  llvm_cbe_tmp__383 = (float )*llvm_cbe_tmp__382;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__383, *(int*)(&llvm_cbe_tmp__383));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = fmul float %%12, %%14, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1346_count);
  llvm_cbe_tmp__384 = (float )((float )(llvm_cbe_tmp__381 * llvm_cbe_tmp__383));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__384, *(int*)(&llvm_cbe_tmp__384));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = fadd float %%9, %%15, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1347_count);
  llvm_cbe_tmp__385 = (float )((float )(llvm_cbe_tmp__378 + llvm_cbe_tmp__384));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__385, *(int*)(&llvm_cbe_tmp__385));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge213, 1, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1356_count);
  llvm_cbe_tmp__386 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__386&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%17 to i64, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1357_count);
  llvm_cbe_tmp__387 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__386);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__387);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%3, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1358_count);
  llvm_cbe_tmp__388 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__373))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__387))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__373));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__387));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__387) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* %%19, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1359_count);
  llvm_cbe_tmp__389 = (float )*llvm_cbe_tmp__388;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__389, *(int*)(&llvm_cbe_tmp__389));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 1, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1360_count);
  llvm_cbe_tmp__390 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1361_count);
  llvm_cbe_tmp__391 = (float )*llvm_cbe_tmp__390;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__391, *(int*)(&llvm_cbe_tmp__391));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = fmul float %%20, %%22, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1362_count);
  llvm_cbe_tmp__392 = (float )((float )(llvm_cbe_tmp__389 * llvm_cbe_tmp__391));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__392, *(int*)(&llvm_cbe_tmp__392));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = fadd float %%16, %%23, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1363_count);
  llvm_cbe_tmp__393 = (float )((float )(llvm_cbe_tmp__385 + llvm_cbe_tmp__392));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__393, *(int*)(&llvm_cbe_tmp__393));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add nsw i32 %%storemerge213, 2, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1372_count);
  llvm_cbe_tmp__394 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__394&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%25 to i64, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1373_count);
  llvm_cbe_tmp__395 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__394);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__395);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%3, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1374_count);
  llvm_cbe_tmp__396 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__373))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__395))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__373));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__395));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__395) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1375_count);
  llvm_cbe_tmp__397 = (float )*llvm_cbe_tmp__396;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__397, *(int*)(&llvm_cbe_tmp__397));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 0, i64 2, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1376_count);
  llvm_cbe_tmp__398 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* %%29, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1377_count);
  llvm_cbe_tmp__399 = (float )*llvm_cbe_tmp__398;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__399, *(int*)(&llvm_cbe_tmp__399));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = fmul float %%28, %%30, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1378_count);
  llvm_cbe_tmp__400 = (float )((float )(llvm_cbe_tmp__397 * llvm_cbe_tmp__399));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__400, *(int*)(&llvm_cbe_tmp__400));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = fadd float %%24, %%31, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1379_count);
  llvm_cbe_tmp__401 = (float )((float )(llvm_cbe_tmp__393 + llvm_cbe_tmp__400));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__401, *(int*)(&llvm_cbe_tmp__401));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%storemerge115, 1, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1397_count);
  llvm_cbe_tmp__402 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__402&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%33 to i64, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1398_count);
  llvm_cbe_tmp__403 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__402);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__403);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%34, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1399_count);
  llvm_cbe_tmp__404 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__403))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__377))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__403));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__377));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__377) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1400_count);
  llvm_cbe_tmp__405 = (float )*llvm_cbe_tmp__404;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__405, *(int*)(&llvm_cbe_tmp__405));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 0, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1401_count);
  llvm_cbe_tmp__406 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1402_count);
  llvm_cbe_tmp__407 = (float )*llvm_cbe_tmp__406;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__407, *(int*)(&llvm_cbe_tmp__407));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = fmul float %%36, %%38, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1403_count);
  llvm_cbe_tmp__408 = (float )((float )(llvm_cbe_tmp__405 * llvm_cbe_tmp__407));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__408, *(int*)(&llvm_cbe_tmp__408));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = fadd float %%32, %%39, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1404_count);
  llvm_cbe_tmp__409 = (float )((float )(llvm_cbe_tmp__401 + llvm_cbe_tmp__408));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__409, *(int*)(&llvm_cbe_tmp__409));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%34, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1413_count);
  llvm_cbe_tmp__410 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__403))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__387))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__403));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__387));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__387) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* %%41, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1414_count);
  llvm_cbe_tmp__411 = (float )*llvm_cbe_tmp__410;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__411, *(int*)(&llvm_cbe_tmp__411));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 1, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1415_count);
  llvm_cbe_tmp__412 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load float* %%43, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1416_count);
  llvm_cbe_tmp__413 = (float )*llvm_cbe_tmp__412;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__413, *(int*)(&llvm_cbe_tmp__413));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = fmul float %%42, %%44, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1417_count);
  llvm_cbe_tmp__414 = (float )((float )(llvm_cbe_tmp__411 * llvm_cbe_tmp__413));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__414, *(int*)(&llvm_cbe_tmp__414));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = fadd float %%40, %%45, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1418_count);
  llvm_cbe_tmp__415 = (float )((float )(llvm_cbe_tmp__409 + llvm_cbe_tmp__414));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__415, *(int*)(&llvm_cbe_tmp__415));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%34, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1427_count);
  llvm_cbe_tmp__416 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__403))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__395))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__403));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__395));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__395) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load float* %%47, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1428_count);
  llvm_cbe_tmp__417 = (float )*llvm_cbe_tmp__416;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__417, *(int*)(&llvm_cbe_tmp__417));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 1, i64 2, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1429_count);
  llvm_cbe_tmp__418 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load float* %%49, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1430_count);
  llvm_cbe_tmp__419 = (float )*llvm_cbe_tmp__418;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__419, *(int*)(&llvm_cbe_tmp__419));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = fmul float %%48, %%50, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1431_count);
  llvm_cbe_tmp__420 = (float )((float )(llvm_cbe_tmp__417 * llvm_cbe_tmp__419));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__420, *(int*)(&llvm_cbe_tmp__420));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = fadd float %%46, %%51, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1432_count);
  llvm_cbe_tmp__421 = (float )((float )(llvm_cbe_tmp__415 + llvm_cbe_tmp__420));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__421, *(int*)(&llvm_cbe_tmp__421));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%7, i64 %%8, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1450_count);
  llvm_cbe_tmp__422 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__376))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__377))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__376));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__377));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__377) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1451_count);
  llvm_cbe_tmp__423 = (float )*llvm_cbe_tmp__422;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__423, *(int*)(&llvm_cbe_tmp__423));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 0, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1452_count);
  llvm_cbe_tmp__424 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1453_count);
  llvm_cbe_tmp__425 = (float )*llvm_cbe_tmp__424;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__425, *(int*)(&llvm_cbe_tmp__425));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = fmul float %%54, %%56, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1454_count);
  llvm_cbe_tmp__426 = (float )((float )(llvm_cbe_tmp__423 * llvm_cbe_tmp__425));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__426, *(int*)(&llvm_cbe_tmp__426));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = fadd float %%52, %%57, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1455_count);
  llvm_cbe_tmp__427 = (float )((float )(llvm_cbe_tmp__421 + llvm_cbe_tmp__426));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__427, *(int*)(&llvm_cbe_tmp__427));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%7, i64 %%18, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1464_count);
  llvm_cbe_tmp__428 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__376))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__387))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__376));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__387));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__387) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load float* %%59, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1465_count);
  llvm_cbe_tmp__429 = (float )*llvm_cbe_tmp__428;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__429, *(int*)(&llvm_cbe_tmp__429));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 1, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1466_count);
  llvm_cbe_tmp__430 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load float* %%61, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1467_count);
  llvm_cbe_tmp__431 = (float )*llvm_cbe_tmp__430;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__431, *(int*)(&llvm_cbe_tmp__431));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = fmul float %%60, %%62, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1468_count);
  llvm_cbe_tmp__432 = (float )((float )(llvm_cbe_tmp__429 * llvm_cbe_tmp__431));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__432, *(int*)(&llvm_cbe_tmp__432));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = fadd float %%58, %%63, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1469_count);
  llvm_cbe_tmp__433 = (float )((float )(llvm_cbe_tmp__427 + llvm_cbe_tmp__432));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__433, *(int*)(&llvm_cbe_tmp__433));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds [10 x [32 x float]]* %%in, i64 %%7, i64 %%26, i64 %%10, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1478_count);
  llvm_cbe_tmp__434 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__376))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__395))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__376));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__395));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__395) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* %%65, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1479_count);
  llvm_cbe_tmp__435 = (float )*llvm_cbe_tmp__434;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__435, *(int*)(&llvm_cbe_tmp__435));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = getelementptr inbounds [32 x [3 x [3 x float]]]* %%kernel, i64 %%1, i64 %%10, i64 2, i64 2, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1480_count);
  llvm_cbe_tmp__436 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__371))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__379))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__371));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__379));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__379) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load float* %%67, align 4, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1481_count);
  llvm_cbe_tmp__437 = (float )*llvm_cbe_tmp__436;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__437, *(int*)(&llvm_cbe_tmp__437));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = fmul float %%66, %%68, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1482_count);
  llvm_cbe_tmp__438 = (float )((float )(llvm_cbe_tmp__435 * llvm_cbe_tmp__437));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__438, *(int*)(&llvm_cbe_tmp__438));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = fadd float %%64, %%69, !dbg !18 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1483_count);
  llvm_cbe_tmp__439 = (float )((float )(llvm_cbe_tmp__433 + llvm_cbe_tmp__438));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__439, *(int*)(&llvm_cbe_tmp__439));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = add nsw i32 %%storemerge311, 1, !dbg !21 for 0x%I64xth hint within @conv5  --> \n", ++aesl_llvm_cbe_1497_count);
  llvm_cbe_tmp__440 = (unsigned int )((unsigned int )(llvm_cbe_storemerge311&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__440&4294967295ull)));
  if (((llvm_cbe_tmp__440&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__447;
  } else {
    llvm_cbe_storemerge311__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__440;   /* for PHI node */
    llvm_cbe_tmp__378__PHI_TEMPORARY = (float )llvm_cbe_tmp__439;   /* for PHI node */
    goto llvm_cbe__2e_preheader7;
  }

  } while (1); /* end of syntactic loop '.preheader7' */
  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader12' */
  } while (1); /* end of syntactic loop '.preheader14' */
llvm_cbe_tmp__444:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv5}\n");
  return;
}


float sigmoid(float llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;
  static  unsigned long long aesl_llvm_cbe_1528_count = 0;
  static  unsigned long long aesl_llvm_cbe_1529_count = 0;
  float llvm_cbe_tmp__448;
  static  unsigned long long aesl_llvm_cbe_1530_count = 0;
  float llvm_cbe_tmp__449;
  static  unsigned long long aesl_llvm_cbe_1531_count = 0;
  float llvm_cbe_tmp__450;
  static  unsigned long long aesl_llvm_cbe_1532_count = 0;
  float llvm_cbe_tmp__451;
  static  unsigned long long aesl_llvm_cbe_1533_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sigmoid\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = fsub float -0.000000e+00, %%x, !dbg !18 for 0x%I64xth hint within @sigmoid  --> \n", ++aesl_llvm_cbe_1529_count);
  llvm_cbe_tmp__448 = (float )((float )(-(llvm_cbe_x)));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__448, *(int*)(&llvm_cbe_tmp__448));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = tail call float @expf(float %%1) nounwind, !dbg !18 for 0x%I64xth hint within @sigmoid  --> \n", ++aesl_llvm_cbe_1530_count);
  llvm_cbe_tmp__449 = (float ) /*tail*/ expf(llvm_cbe_tmp__448);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__448, *(int*)(&llvm_cbe_tmp__448));
printf("\nReturn  = %f",llvm_cbe_tmp__449);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = fadd float %%2, 1.000000e+00, !dbg !18 for 0x%I64xth hint within @sigmoid  --> \n", ++aesl_llvm_cbe_1531_count);
  llvm_cbe_tmp__450 = (float )((float )(llvm_cbe_tmp__449 + 0x1p0));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__450, *(int*)(&llvm_cbe_tmp__450));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = fdiv float 1.000000e+00, %%3, !dbg !18 for 0x%I64xth hint within @sigmoid  --> \n", ++aesl_llvm_cbe_1532_count);
  llvm_cbe_tmp__451 = (float )((float )(0x1p0 / llvm_cbe_tmp__450));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__451, *(int*)(&llvm_cbe_tmp__451));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sigmoid}\n");
  return llvm_cbe_tmp__451;
}


void detection_head(float (*llvm_cbe_in)[8][32], float (*llvm_cbe_out)[8][16], float (*llvm_cbe_kernel)[32][1][1], float *llvm_cbe_bias) {
  static  unsigned long long aesl_llvm_cbe_1534_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_storemerge8_count = 0;
  unsigned int llvm_cbe_storemerge8;
  unsigned int llvm_cbe_storemerge8__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1549_count = 0;
  static  unsigned long long aesl_llvm_cbe_1550_count = 0;
  static  unsigned long long aesl_llvm_cbe_1551_count = 0;
  static  unsigned long long aesl_llvm_cbe_1552_count = 0;
  static  unsigned long long aesl_llvm_cbe_1553_count = 0;
  unsigned long long llvm_cbe_tmp__452;
  static  unsigned long long aesl_llvm_cbe_1554_count = 0;
  float *llvm_cbe_tmp__453;
  static  unsigned long long aesl_llvm_cbe_1555_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge17_count = 0;
  unsigned int llvm_cbe_storemerge17;
  unsigned int llvm_cbe_storemerge17__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1556_count = 0;
  static  unsigned long long aesl_llvm_cbe_1557_count = 0;
  static  unsigned long long aesl_llvm_cbe_1558_count = 0;
  static  unsigned long long aesl_llvm_cbe_1559_count = 0;
  static  unsigned long long aesl_llvm_cbe_1560_count = 0;
  unsigned long long llvm_cbe_tmp__454;
  static  unsigned long long aesl_llvm_cbe_1561_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_count = 0;
  unsigned int llvm_cbe_storemerge25;
  unsigned int llvm_cbe_storemerge25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1562_count = 0;
  float llvm_cbe_tmp__455;
  static  unsigned long long aesl_llvm_cbe_1563_count = 0;
  static  unsigned long long aesl_llvm_cbe_1564_count = 0;
  static  unsigned long long aesl_llvm_cbe_1565_count = 0;
  static  unsigned long long aesl_llvm_cbe_1566_count = 0;
  static  unsigned long long aesl_llvm_cbe_1567_count = 0;
  static  unsigned long long aesl_llvm_cbe_1568_count = 0;
  static  unsigned long long aesl_llvm_cbe_1569_count = 0;
  static  unsigned long long aesl_llvm_cbe_1570_count = 0;
  static  unsigned long long aesl_llvm_cbe_1571_count = 0;
  unsigned long long llvm_cbe_tmp__456;
  static  unsigned long long aesl_llvm_cbe_1572_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge34_count = 0;
  unsigned int llvm_cbe_storemerge34;
  unsigned int llvm_cbe_storemerge34__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1573_count = 0;
  float llvm_cbe_tmp__457;
  float llvm_cbe_tmp__457__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1574_count = 0;
  unsigned long long llvm_cbe_tmp__458;
  static  unsigned long long aesl_llvm_cbe_1575_count = 0;
  float *llvm_cbe_tmp__459;
  static  unsigned long long aesl_llvm_cbe_1576_count = 0;
  float llvm_cbe_tmp__460;
  static  unsigned long long aesl_llvm_cbe_1577_count = 0;
  float *llvm_cbe_tmp__461;
  static  unsigned long long aesl_llvm_cbe_1578_count = 0;
  float llvm_cbe_tmp__462;
  static  unsigned long long aesl_llvm_cbe_1579_count = 0;
  float llvm_cbe_tmp__463;
  static  unsigned long long aesl_llvm_cbe_1580_count = 0;
  float llvm_cbe_tmp__464;
  static  unsigned long long aesl_llvm_cbe_1581_count = 0;
  static  unsigned long long aesl_llvm_cbe_1582_count = 0;
  static  unsigned long long aesl_llvm_cbe_1583_count = 0;
  static  unsigned long long aesl_llvm_cbe_1584_count = 0;
  unsigned int llvm_cbe_tmp__465;
  static  unsigned long long aesl_llvm_cbe_1585_count = 0;
  static  unsigned long long aesl_llvm_cbe_1586_count = 0;
  static  unsigned long long aesl_llvm_cbe_1587_count = 0;
  static  unsigned long long aesl_llvm_cbe_1588_count = 0;
  static  unsigned long long aesl_llvm_cbe_1589_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1590_count = 0;
  static  unsigned long long aesl_llvm_cbe_1591_count = 0;
  float llvm_cbe_tmp__466;
  static  unsigned long long aesl_llvm_cbe_1592_count = 0;
  float *llvm_cbe_tmp__467;
  static  unsigned long long aesl_llvm_cbe_1593_count = 0;
  static  unsigned long long aesl_llvm_cbe_1594_count = 0;
  unsigned int llvm_cbe_tmp__468;
  static  unsigned long long aesl_llvm_cbe_1595_count = 0;
  static  unsigned long long aesl_llvm_cbe_1596_count = 0;
  static  unsigned long long aesl_llvm_cbe_1597_count = 0;
  static  unsigned long long aesl_llvm_cbe_1598_count = 0;
  static  unsigned long long aesl_llvm_cbe_1599_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond9_count = 0;
  static  unsigned long long aesl_llvm_cbe_1600_count = 0;
  static  unsigned long long aesl_llvm_cbe_1601_count = 0;
  unsigned int llvm_cbe_tmp__469;
  static  unsigned long long aesl_llvm_cbe_1602_count = 0;
  static  unsigned long long aesl_llvm_cbe_1603_count = 0;
  static  unsigned long long aesl_llvm_cbe_1604_count = 0;
  static  unsigned long long aesl_llvm_cbe_1605_count = 0;
  static  unsigned long long aesl_llvm_cbe_1606_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond10_count = 0;
  static  unsigned long long aesl_llvm_cbe_1607_count = 0;
  static  unsigned long long aesl_llvm_cbe_1608_count = 0;
  unsigned int llvm_cbe_tmp__470;
  static  unsigned long long aesl_llvm_cbe_1609_count = 0;
  static  unsigned long long aesl_llvm_cbe_1610_count = 0;
  static  unsigned long long aesl_llvm_cbe_1611_count = 0;
  static  unsigned long long aesl_llvm_cbe_1612_count = 0;
  static  unsigned long long aesl_llvm_cbe_1613_count = 0;
  static  unsigned long long aesl_llvm_cbe_1614_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond11_count = 0;
  static  unsigned long long aesl_llvm_cbe_1615_count = 0;
  static  unsigned long long aesl_llvm_cbe_1616_count = 0;

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
printf("\n = 0x%X",llvm_cbe_tmp__470);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge8 to i64, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1553_count);
  llvm_cbe_tmp__452 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge8);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__452);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds float* %%bias, i64 %%1, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1554_count);
  llvm_cbe_tmp__453 = (float *)(&llvm_cbe_bias[(((signed long long )llvm_cbe_tmp__452))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__452));
}
  llvm_cbe_storemerge17__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

llvm_cbe_tmp__471:
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add nsw i32 %%storemerge8, 1, !dbg !20 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1608_count);
  llvm_cbe_tmp__470 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__470&4294967295ull)));
  if (((llvm_cbe_tmp__470&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__472;
  } else {
    llvm_cbe_storemerge8__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__470;   /* for PHI node */
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
printf("\n = 0x%X",llvm_cbe_tmp__469);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge17 to i64, !dbg !18 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1560_count);
  llvm_cbe_tmp__454 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge17);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__454);
  llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__473;

llvm_cbe_tmp__474:
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add nsw i32 %%storemerge17, 1, !dbg !20 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1601_count);
  llvm_cbe_tmp__469 = (unsigned int )((unsigned int )(llvm_cbe_storemerge17&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__469&4294967295ull)));
  if (((llvm_cbe_tmp__469&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__471;
  } else {
    llvm_cbe_storemerge17__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__469;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__473:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25 = phi i32 [ 0, %%.preheader ], [ %%20, %%17  for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_storemerge25_count);
  llvm_cbe_storemerge25 = (unsigned int )llvm_cbe_storemerge25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%X",llvm_cbe_storemerge25);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__468);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%2, align 4, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1562_count);
  llvm_cbe_tmp__455 = (float )*llvm_cbe_tmp__453;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__455, *(int*)(&llvm_cbe_tmp__455));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%storemerge25 to i64, !dbg !18 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1571_count);
  llvm_cbe_tmp__456 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge25);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__456);
  llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__457__PHI_TEMPORARY = (float )llvm_cbe_tmp__455;   /* for PHI node */
  goto llvm_cbe_tmp__475;

llvm_cbe_tmp__476:
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = tail call float @sigmoid(float %%15), !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1591_count);
  llvm_cbe_tmp__466 = (float ) /*tail*/ sigmoid(llvm_cbe_tmp__464);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__464, *(int*)(&llvm_cbe_tmp__464));
printf("\nReturn  = %f",llvm_cbe_tmp__466);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [8 x [16 x float]]* %%out, i64 %%3, i64 %%6, i64 %%1, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1592_count);
  llvm_cbe_tmp__467 = (float *)(&llvm_cbe_out[(((signed long long )llvm_cbe_tmp__454))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__456))
#ifdef AESL_BC_SIM
 % 16
#endif
][(((signed long long )llvm_cbe_tmp__452))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__454));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__456));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__452));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__456) < 8 && "Write access out of array 'out' bound?");
  assert(((signed long long )llvm_cbe_tmp__452) < 16 && "Write access out of array 'out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%18, float* %%19, align 4, !dbg !19 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1593_count);
  *llvm_cbe_tmp__467 = llvm_cbe_tmp__466;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__466);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%storemerge25, 1, !dbg !20 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1594_count);
  llvm_cbe_tmp__468 = (unsigned int )((unsigned int )(llvm_cbe_storemerge25&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__468&4294967295ull)));
  if (((llvm_cbe_tmp__468&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__474;
  } else {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__468;   /* for PHI node */
    goto llvm_cbe_tmp__473;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__475:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge34 = phi i32 [ 0, %%4 ], [ %%16, %%7  for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_storemerge34_count);
  llvm_cbe_storemerge34 = (unsigned int )llvm_cbe_storemerge34__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34 = 0x%X",llvm_cbe_storemerge34);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__465);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = phi float [ %%5, %%4 ], [ %%15, %%7  for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1573_count);
  llvm_cbe_tmp__457 = (float )llvm_cbe_tmp__457__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__457);
printf("\n = %f",llvm_cbe_tmp__455);
printf("\n = %f",llvm_cbe_tmp__464);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%storemerge34 to i64, !dbg !18 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1574_count);
  llvm_cbe_tmp__458 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge34);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__458);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [8 x [32 x float]]* %%in, i64 %%3, i64 %%6, i64 %%9, !dbg !18 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1575_count);
  llvm_cbe_tmp__459 = (float *)(&llvm_cbe_in[(((signed long long )llvm_cbe_tmp__454))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__456))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__458))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__454));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__456));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__458));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__456) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__458) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load float* %%10, align 4, !dbg !18 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1576_count);
  llvm_cbe_tmp__460 = (float )*llvm_cbe_tmp__459;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__460, *(int*)(&llvm_cbe_tmp__460));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [32 x [1 x [1 x float]]]* %%kernel, i64 %%1, i64 %%9, i64 0, i64 0, !dbg !18 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1577_count);
  llvm_cbe_tmp__461 = (float *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__452))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__458))
#ifdef AESL_BC_SIM
 % 1
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__452));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__458));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__458) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 1)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 1)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load float* %%12, align 4, !dbg !18 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1578_count);
  llvm_cbe_tmp__462 = (float )*llvm_cbe_tmp__461;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__462, *(int*)(&llvm_cbe_tmp__462));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = fmul float %%11, %%13, !dbg !18 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1579_count);
  llvm_cbe_tmp__463 = (float )((float )(llvm_cbe_tmp__460 * llvm_cbe_tmp__462));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__463, *(int*)(&llvm_cbe_tmp__463));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = fadd float %%8, %%14, !dbg !18 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1580_count);
  llvm_cbe_tmp__464 = (float )((float )(llvm_cbe_tmp__457 + llvm_cbe_tmp__463));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__464, *(int*)(&llvm_cbe_tmp__464));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add nsw i32 %%storemerge34, 1, !dbg !21 for 0x%I64xth hint within @detection_head  --> \n", ++aesl_llvm_cbe_1584_count);
  llvm_cbe_tmp__465 = (unsigned int )((unsigned int )(llvm_cbe_storemerge34&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__465&4294967295ull)));
  if (((llvm_cbe_tmp__465&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__476;
  } else {
    llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__465;   /* for PHI node */
    llvm_cbe_tmp__457__PHI_TEMPORARY = (float )llvm_cbe_tmp__464;   /* for PHI node */
    goto llvm_cbe_tmp__475;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '.preheader6' */
llvm_cbe_tmp__472:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @detection_head}\n");
  return;
}


void topp(float (*llvm_cbe_image)[64][3], float (*llvm_cbe_output)[8][16]) {
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
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @topp\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @conv1([64 x [3 x float]]* %%image, [62 x [8 x float]]* getelementptr inbounds ([62 x [62 x [8 x float]]]* @aesl_internal_topp.f1, i64 0, i64 0), [3 x [3 x [3 x float]]]* getelementptr inbounds ([8 x [3 x [3 x [3 x float]]]]* @W1, i64 0, i64 0), float* getelementptr inbounds ([8 x float]* @B1, i64 0, i64 0)), !dbg !18 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_1621_count);
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
printf("\n  tail call void @maxpool1([62 x [8 x float]]* getelementptr inbounds ([62 x [62 x [8 x float]]]* @aesl_internal_topp.f1, i64 0, i64 0), [31 x [8 x float]]* getelementptr inbounds ([31 x [31 x [8 x float]]]* @aesl_internal_topp.p1, i64 0, i64 0)), !dbg !18 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_1622_count);
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
printf("\n  tail call void @conv2([31 x [8 x float]]* getelementptr inbounds ([31 x [31 x [8 x float]]]* @aesl_internal_topp.p1, i64 0, i64 0), [29 x [16 x float]]* getelementptr inbounds ([29 x [29 x [16 x float]]]* @aesl_internal_topp.f2, i64 0, i64 0), [8 x [3 x [3 x float]]]* getelementptr inbounds ([16 x [8 x [3 x [3 x float]]]]* @W2, i64 0, i64 0), float* getelementptr inbounds ([16 x float]* @B2, i64 0, i64 0)), !dbg !18 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_1623_count);
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
printf("\n  tail call void @maxpool2([29 x [16 x float]]* getelementptr inbounds ([29 x [29 x [16 x float]]]* @aesl_internal_topp.f2, i64 0, i64 0), [14 x [16 x float]]* getelementptr inbounds ([14 x [14 x [16 x float]]]* @aesl_internal_topp.p2, i64 0, i64 0)), !dbg !18 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_1624_count);
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
printf("\n  tail call void @conv3([14 x [16 x float]]* getelementptr inbounds ([14 x [14 x [16 x float]]]* @aesl_internal_topp.p2, i64 0, i64 0), [12 x [32 x float]]* getelementptr inbounds ([12 x [12 x [32 x float]]]* @aesl_internal_topp.f3, i64 0, i64 0), [16 x [3 x [3 x float]]]* getelementptr inbounds ([32 x [16 x [3 x [3 x float]]]]* @W3, i64 0, i64 0), float* getelementptr inbounds ([32 x float]* @B3, i64 0, i64 0)), !dbg !19 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_1625_count);
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
printf("\n  tail call void @conv4([12 x [32 x float]]* getelementptr inbounds ([12 x [12 x [32 x float]]]* @aesl_internal_topp.f3, i64 0, i64 0), [10 x [32 x float]]* getelementptr inbounds ([10 x [10 x [32 x float]]]* @aesl_internal_topp.f4, i64 0, i64 0), [32 x [3 x [3 x float]]]* getelementptr inbounds ([32 x [32 x [3 x [3 x float]]]]* @W4, i64 0, i64 0), float* getelementptr inbounds ([32 x float]* @B4, i64 0, i64 0)), !dbg !19 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_1626_count);
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
printf("\n  tail call void @conv5([10 x [32 x float]]* getelementptr inbounds ([10 x [10 x [32 x float]]]* @aesl_internal_topp.f4, i64 0, i64 0), [8 x [32 x float]]* getelementptr inbounds ([8 x [8 x [32 x float]]]* @aesl_internal_topp.f5, i64 0, i64 0), [32 x [3 x [3 x float]]]* getelementptr inbounds ([32 x [32 x [3 x [3 x float]]]]* @W5, i64 0, i64 0), float* getelementptr inbounds ([32 x float]* @B5, i64 0, i64 0)), !dbg !19 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_1627_count);
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
printf("\n  tail call void @detection_head([8 x [32 x float]]* getelementptr inbounds ([8 x [8 x [32 x float]]]* @aesl_internal_topp.f5, i64 0, i64 0), [8 x [16 x float]]* %%output, [32 x [1 x [1 x float]]]* getelementptr inbounds ([16 x [32 x [1 x [1 x float]]]]* @WH, i64 0, i64 0), float* getelementptr inbounds ([16 x float]* @BH, i64 0, i64 0)), !dbg !18 for 0x%I64xth hint within @topp  --> \n", ++aesl_llvm_cbe_1628_count);
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


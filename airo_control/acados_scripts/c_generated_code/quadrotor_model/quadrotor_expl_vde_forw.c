/* This file was automatically generated by CasADi 3.6.3.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) quadrotor_expl_vde_forw_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[12] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s1[75] = {8, 8, 0, 8, 16, 24, 32, 40, 48, 56, 64, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s2[30] = {8, 3, 0, 8, 16, 24, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s3[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s4[8] = {4, 1, 0, 4, 0, 1, 2, 3};

/* quadrotor_expl_vde_forw:(i0[8],i1[8x8],i2[8x3],i3[3],i4[4])->(o0[8],o1[8x8],o2[8x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][3] : 0;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0]? arg[0][4] : 0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0]? arg[0][5] : 0;
  if (res[0]!=0) res[0][2]=a0;
  a0=9.8066499999999994e+00;
  a1=arg[0]? arg[0][6] : 0;
  a2=cos(a1);
  a3=arg[0]? arg[0][7] : 0;
  a4=sin(a3);
  a5=(a2*a4);
  a6=arg[4]? arg[4][3] : 0;
  a7=cos(a6);
  a5=(a5*a7);
  a8=sin(a1);
  a9=sin(a6);
  a8=(a8*a9);
  a5=(a5+a8);
  a8=arg[3]? arg[3][0] : 0;
  a10=(a5*a8);
  a11=arg[4]? arg[4][0] : 0;
  a10=(a10/a11);
  a10=(a0*a10);
  if (res[0]!=0) res[0][3]=a10;
  a10=cos(a1);
  a12=sin(a3);
  a13=(a10*a12);
  a14=sin(a6);
  a13=(a13*a14);
  a15=sin(a1);
  a6=cos(a6);
  a15=(a15*a6);
  a13=(a13-a15);
  a15=(a13*a8);
  a15=(a15/a11);
  a15=(a0*a15);
  if (res[0]!=0) res[0][4]=a15;
  a15=-9.8066499999999994e+00;
  a16=cos(a3);
  a17=cos(a1);
  a18=(a16*a17);
  a19=(a18*a8);
  a19=(a19/a11);
  a19=(a0*a19);
  a15=(a15+a19);
  if (res[0]!=0) res[0][5]=a15;
  a15=arg[3]? arg[3][1] : 0;
  a15=(a15-a1);
  a19=arg[4]? arg[4][1] : 0;
  a15=(a15/a19);
  if (res[0]!=0) res[0][6]=a15;
  a15=arg[3]? arg[3][2] : 0;
  a15=(a15-a3);
  a20=arg[4]? arg[4][2] : 0;
  a15=(a15/a20);
  if (res[0]!=0) res[0][7]=a15;
  a15=arg[1]? arg[1][3] : 0;
  if (res[1]!=0) res[1][0]=a15;
  a15=arg[1]? arg[1][4] : 0;
  if (res[1]!=0) res[1][1]=a15;
  a15=arg[1]? arg[1][5] : 0;
  if (res[1]!=0) res[1][2]=a15;
  a15=cos(a3);
  a21=arg[1]? arg[1][7] : 0;
  a22=(a15*a21);
  a22=(a2*a22);
  a23=sin(a1);
  a24=arg[1]? arg[1][6] : 0;
  a25=(a23*a24);
  a25=(a4*a25);
  a22=(a22-a25);
  a22=(a7*a22);
  a25=cos(a1);
  a26=(a25*a24);
  a26=(a9*a26);
  a22=(a22+a26);
  a22=(a8*a22);
  a22=(a22/a11);
  a22=(a0*a22);
  if (res[1]!=0) res[1][3]=a22;
  a22=cos(a3);
  a26=(a22*a21);
  a26=(a10*a26);
  a27=sin(a1);
  a28=(a27*a24);
  a28=(a12*a28);
  a26=(a26-a28);
  a26=(a14*a26);
  a28=cos(a1);
  a29=(a28*a24);
  a29=(a6*a29);
  a26=(a26-a29);
  a26=(a8*a26);
  a26=(a26/a11);
  a26=(a0*a26);
  if (res[1]!=0) res[1][4]=a26;
  a26=sin(a3);
  a29=(a26*a21);
  a29=(a17*a29);
  a30=sin(a1);
  a31=(a30*a24);
  a31=(a16*a31);
  a29=(a29+a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  a29=(-a29);
  if (res[1]!=0) res[1][5]=a29;
  a24=(a24/a19);
  a24=(-a24);
  if (res[1]!=0) res[1][6]=a24;
  a21=(a21/a20);
  a21=(-a21);
  if (res[1]!=0) res[1][7]=a21;
  a21=arg[1]? arg[1][11] : 0;
  if (res[1]!=0) res[1][8]=a21;
  a21=arg[1]? arg[1][12] : 0;
  if (res[1]!=0) res[1][9]=a21;
  a21=arg[1]? arg[1][13] : 0;
  if (res[1]!=0) res[1][10]=a21;
  a21=arg[1]? arg[1][15] : 0;
  a24=(a15*a21);
  a24=(a2*a24);
  a29=arg[1]? arg[1][14] : 0;
  a31=(a23*a29);
  a31=(a4*a31);
  a24=(a24-a31);
  a24=(a7*a24);
  a31=(a25*a29);
  a31=(a9*a31);
  a24=(a24+a31);
  a24=(a8*a24);
  a24=(a24/a11);
  a24=(a0*a24);
  if (res[1]!=0) res[1][11]=a24;
  a24=(a22*a21);
  a24=(a10*a24);
  a31=(a27*a29);
  a31=(a12*a31);
  a24=(a24-a31);
  a24=(a14*a24);
  a31=(a28*a29);
  a31=(a6*a31);
  a24=(a24-a31);
  a24=(a8*a24);
  a24=(a24/a11);
  a24=(a0*a24);
  if (res[1]!=0) res[1][12]=a24;
  a24=(a26*a21);
  a24=(a17*a24);
  a31=(a30*a29);
  a31=(a16*a31);
  a24=(a24+a31);
  a24=(a8*a24);
  a24=(a24/a11);
  a24=(a0*a24);
  a24=(-a24);
  if (res[1]!=0) res[1][13]=a24;
  a29=(a29/a19);
  a29=(-a29);
  if (res[1]!=0) res[1][14]=a29;
  a21=(a21/a20);
  a21=(-a21);
  if (res[1]!=0) res[1][15]=a21;
  a21=arg[1]? arg[1][19] : 0;
  if (res[1]!=0) res[1][16]=a21;
  a21=arg[1]? arg[1][20] : 0;
  if (res[1]!=0) res[1][17]=a21;
  a21=arg[1]? arg[1][21] : 0;
  if (res[1]!=0) res[1][18]=a21;
  a21=arg[1]? arg[1][23] : 0;
  a29=(a15*a21);
  a29=(a2*a29);
  a24=arg[1]? arg[1][22] : 0;
  a31=(a23*a24);
  a31=(a4*a31);
  a29=(a29-a31);
  a29=(a7*a29);
  a31=(a25*a24);
  a31=(a9*a31);
  a29=(a29+a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  if (res[1]!=0) res[1][19]=a29;
  a29=(a22*a21);
  a29=(a10*a29);
  a31=(a27*a24);
  a31=(a12*a31);
  a29=(a29-a31);
  a29=(a14*a29);
  a31=(a28*a24);
  a31=(a6*a31);
  a29=(a29-a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  if (res[1]!=0) res[1][20]=a29;
  a29=(a26*a21);
  a29=(a17*a29);
  a31=(a30*a24);
  a31=(a16*a31);
  a29=(a29+a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  a29=(-a29);
  if (res[1]!=0) res[1][21]=a29;
  a24=(a24/a19);
  a24=(-a24);
  if (res[1]!=0) res[1][22]=a24;
  a21=(a21/a20);
  a21=(-a21);
  if (res[1]!=0) res[1][23]=a21;
  a21=arg[1]? arg[1][27] : 0;
  if (res[1]!=0) res[1][24]=a21;
  a21=arg[1]? arg[1][28] : 0;
  if (res[1]!=0) res[1][25]=a21;
  a21=arg[1]? arg[1][29] : 0;
  if (res[1]!=0) res[1][26]=a21;
  a21=arg[1]? arg[1][31] : 0;
  a24=(a15*a21);
  a24=(a2*a24);
  a29=arg[1]? arg[1][30] : 0;
  a31=(a23*a29);
  a31=(a4*a31);
  a24=(a24-a31);
  a24=(a7*a24);
  a31=(a25*a29);
  a31=(a9*a31);
  a24=(a24+a31);
  a24=(a8*a24);
  a24=(a24/a11);
  a24=(a0*a24);
  if (res[1]!=0) res[1][27]=a24;
  a24=(a22*a21);
  a24=(a10*a24);
  a31=(a27*a29);
  a31=(a12*a31);
  a24=(a24-a31);
  a24=(a14*a24);
  a31=(a28*a29);
  a31=(a6*a31);
  a24=(a24-a31);
  a24=(a8*a24);
  a24=(a24/a11);
  a24=(a0*a24);
  if (res[1]!=0) res[1][28]=a24;
  a24=(a26*a21);
  a24=(a17*a24);
  a31=(a30*a29);
  a31=(a16*a31);
  a24=(a24+a31);
  a24=(a8*a24);
  a24=(a24/a11);
  a24=(a0*a24);
  a24=(-a24);
  if (res[1]!=0) res[1][29]=a24;
  a29=(a29/a19);
  a29=(-a29);
  if (res[1]!=0) res[1][30]=a29;
  a21=(a21/a20);
  a21=(-a21);
  if (res[1]!=0) res[1][31]=a21;
  a21=arg[1]? arg[1][35] : 0;
  if (res[1]!=0) res[1][32]=a21;
  a21=arg[1]? arg[1][36] : 0;
  if (res[1]!=0) res[1][33]=a21;
  a21=arg[1]? arg[1][37] : 0;
  if (res[1]!=0) res[1][34]=a21;
  a21=arg[1]? arg[1][39] : 0;
  a29=(a15*a21);
  a29=(a2*a29);
  a24=arg[1]? arg[1][38] : 0;
  a31=(a23*a24);
  a31=(a4*a31);
  a29=(a29-a31);
  a29=(a7*a29);
  a31=(a25*a24);
  a31=(a9*a31);
  a29=(a29+a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  if (res[1]!=0) res[1][35]=a29;
  a29=(a22*a21);
  a29=(a10*a29);
  a31=(a27*a24);
  a31=(a12*a31);
  a29=(a29-a31);
  a29=(a14*a29);
  a31=(a28*a24);
  a31=(a6*a31);
  a29=(a29-a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  if (res[1]!=0) res[1][36]=a29;
  a29=(a26*a21);
  a29=(a17*a29);
  a31=(a30*a24);
  a31=(a16*a31);
  a29=(a29+a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  a29=(-a29);
  if (res[1]!=0) res[1][37]=a29;
  a24=(a24/a19);
  a24=(-a24);
  if (res[1]!=0) res[1][38]=a24;
  a21=(a21/a20);
  a21=(-a21);
  if (res[1]!=0) res[1][39]=a21;
  a21=arg[1]? arg[1][43] : 0;
  if (res[1]!=0) res[1][40]=a21;
  a21=arg[1]? arg[1][44] : 0;
  if (res[1]!=0) res[1][41]=a21;
  a21=arg[1]? arg[1][45] : 0;
  if (res[1]!=0) res[1][42]=a21;
  a21=arg[1]? arg[1][47] : 0;
  a24=(a15*a21);
  a24=(a2*a24);
  a29=arg[1]? arg[1][46] : 0;
  a31=(a23*a29);
  a31=(a4*a31);
  a24=(a24-a31);
  a24=(a7*a24);
  a31=(a25*a29);
  a31=(a9*a31);
  a24=(a24+a31);
  a24=(a8*a24);
  a24=(a24/a11);
  a24=(a0*a24);
  if (res[1]!=0) res[1][43]=a24;
  a24=(a22*a21);
  a24=(a10*a24);
  a31=(a27*a29);
  a31=(a12*a31);
  a24=(a24-a31);
  a24=(a14*a24);
  a31=(a28*a29);
  a31=(a6*a31);
  a24=(a24-a31);
  a24=(a8*a24);
  a24=(a24/a11);
  a24=(a0*a24);
  if (res[1]!=0) res[1][44]=a24;
  a24=(a26*a21);
  a24=(a17*a24);
  a31=(a30*a29);
  a31=(a16*a31);
  a24=(a24+a31);
  a24=(a8*a24);
  a24=(a24/a11);
  a24=(a0*a24);
  a24=(-a24);
  if (res[1]!=0) res[1][45]=a24;
  a29=(a29/a19);
  a29=(-a29);
  if (res[1]!=0) res[1][46]=a29;
  a21=(a21/a20);
  a21=(-a21);
  if (res[1]!=0) res[1][47]=a21;
  a21=arg[1]? arg[1][51] : 0;
  if (res[1]!=0) res[1][48]=a21;
  a21=arg[1]? arg[1][52] : 0;
  if (res[1]!=0) res[1][49]=a21;
  a21=arg[1]? arg[1][53] : 0;
  if (res[1]!=0) res[1][50]=a21;
  a21=arg[1]? arg[1][55] : 0;
  a29=(a15*a21);
  a29=(a2*a29);
  a24=arg[1]? arg[1][54] : 0;
  a31=(a23*a24);
  a31=(a4*a31);
  a29=(a29-a31);
  a29=(a7*a29);
  a31=(a25*a24);
  a31=(a9*a31);
  a29=(a29+a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  if (res[1]!=0) res[1][51]=a29;
  a29=(a22*a21);
  a29=(a10*a29);
  a31=(a27*a24);
  a31=(a12*a31);
  a29=(a29-a31);
  a29=(a14*a29);
  a31=(a28*a24);
  a31=(a6*a31);
  a29=(a29-a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  if (res[1]!=0) res[1][52]=a29;
  a29=(a26*a21);
  a29=(a17*a29);
  a31=(a30*a24);
  a31=(a16*a31);
  a29=(a29+a31);
  a29=(a8*a29);
  a29=(a29/a11);
  a29=(a0*a29);
  a29=(-a29);
  if (res[1]!=0) res[1][53]=a29;
  a24=(a24/a19);
  a24=(-a24);
  if (res[1]!=0) res[1][54]=a24;
  a21=(a21/a20);
  a21=(-a21);
  if (res[1]!=0) res[1][55]=a21;
  a21=arg[1]? arg[1][59] : 0;
  if (res[1]!=0) res[1][56]=a21;
  a21=arg[1]? arg[1][60] : 0;
  if (res[1]!=0) res[1][57]=a21;
  a21=arg[1]? arg[1][61] : 0;
  if (res[1]!=0) res[1][58]=a21;
  a21=arg[1]? arg[1][63] : 0;
  a15=(a15*a21);
  a15=(a2*a15);
  a24=arg[1]? arg[1][62] : 0;
  a23=(a23*a24);
  a23=(a4*a23);
  a15=(a15-a23);
  a15=(a7*a15);
  a25=(a25*a24);
  a25=(a9*a25);
  a15=(a15+a25);
  a15=(a8*a15);
  a15=(a15/a11);
  a15=(a0*a15);
  if (res[1]!=0) res[1][59]=a15;
  a22=(a22*a21);
  a22=(a10*a22);
  a27=(a27*a24);
  a27=(a12*a27);
  a22=(a22-a27);
  a22=(a14*a22);
  a28=(a28*a24);
  a28=(a6*a28);
  a22=(a22-a28);
  a22=(a8*a22);
  a22=(a22/a11);
  a22=(a0*a22);
  if (res[1]!=0) res[1][60]=a22;
  a26=(a26*a21);
  a26=(a17*a26);
  a30=(a30*a24);
  a30=(a16*a30);
  a26=(a26+a30);
  a26=(a8*a26);
  a26=(a26/a11);
  a26=(a0*a26);
  a26=(-a26);
  if (res[1]!=0) res[1][61]=a26;
  a24=(a24/a19);
  a24=(-a24);
  if (res[1]!=0) res[1][62]=a24;
  a21=(a21/a20);
  a21=(-a21);
  if (res[1]!=0) res[1][63]=a21;
  a21=arg[2]? arg[2][3] : 0;
  if (res[2]!=0) res[2][0]=a21;
  a21=arg[2]? arg[2][4] : 0;
  if (res[2]!=0) res[2][1]=a21;
  a21=arg[2]? arg[2][5] : 0;
  if (res[2]!=0) res[2][2]=a21;
  a5=(a5/a11);
  a5=(a0*a5);
  a21=cos(a3);
  a24=arg[2]? arg[2][7] : 0;
  a26=(a21*a24);
  a26=(a2*a26);
  a30=sin(a1);
  a22=arg[2]? arg[2][6] : 0;
  a28=(a30*a22);
  a28=(a4*a28);
  a26=(a26-a28);
  a26=(a7*a26);
  a28=cos(a1);
  a27=(a28*a22);
  a27=(a9*a27);
  a26=(a26+a27);
  a26=(a8*a26);
  a26=(a26/a11);
  a26=(a0*a26);
  a5=(a5+a26);
  if (res[2]!=0) res[2][3]=a5;
  a13=(a13/a11);
  a13=(a0*a13);
  a5=cos(a3);
  a26=(a5*a24);
  a26=(a10*a26);
  a27=sin(a1);
  a15=(a27*a22);
  a15=(a12*a15);
  a26=(a26-a15);
  a26=(a14*a26);
  a15=cos(a1);
  a25=(a15*a22);
  a25=(a6*a25);
  a26=(a26-a25);
  a26=(a8*a26);
  a26=(a26/a11);
  a26=(a0*a26);
  a13=(a13+a26);
  if (res[2]!=0) res[2][4]=a13;
  a18=(a18/a11);
  a18=(a0*a18);
  a3=sin(a3);
  a13=(a3*a24);
  a13=(a17*a13);
  a1=sin(a1);
  a26=(a1*a22);
  a26=(a16*a26);
  a13=(a13+a26);
  a13=(a8*a13);
  a13=(a13/a11);
  a13=(a0*a13);
  a18=(a18-a13);
  if (res[2]!=0) res[2][5]=a18;
  a22=(a22/a19);
  a22=(-a22);
  if (res[2]!=0) res[2][6]=a22;
  a24=(a24/a20);
  a24=(-a24);
  if (res[2]!=0) res[2][7]=a24;
  a24=arg[2]? arg[2][11] : 0;
  if (res[2]!=0) res[2][8]=a24;
  a24=arg[2]? arg[2][12] : 0;
  if (res[2]!=0) res[2][9]=a24;
  a24=arg[2]? arg[2][13] : 0;
  if (res[2]!=0) res[2][10]=a24;
  a24=arg[2]? arg[2][15] : 0;
  a22=(a21*a24);
  a22=(a2*a22);
  a18=arg[2]? arg[2][14] : 0;
  a13=(a30*a18);
  a13=(a4*a13);
  a22=(a22-a13);
  a22=(a7*a22);
  a13=(a28*a18);
  a13=(a9*a13);
  a22=(a22+a13);
  a22=(a8*a22);
  a22=(a22/a11);
  a22=(a0*a22);
  if (res[2]!=0) res[2][11]=a22;
  a22=(a5*a24);
  a22=(a10*a22);
  a13=(a27*a18);
  a13=(a12*a13);
  a22=(a22-a13);
  a22=(a14*a22);
  a13=(a15*a18);
  a13=(a6*a13);
  a22=(a22-a13);
  a22=(a8*a22);
  a22=(a22/a11);
  a22=(a0*a22);
  if (res[2]!=0) res[2][12]=a22;
  a22=(a3*a24);
  a22=(a17*a22);
  a13=(a1*a18);
  a13=(a16*a13);
  a22=(a22+a13);
  a22=(a8*a22);
  a22=(a22/a11);
  a22=(a0*a22);
  a22=(-a22);
  if (res[2]!=0) res[2][13]=a22;
  a22=(1./a19);
  a18=(a18/a19);
  a22=(a22-a18);
  if (res[2]!=0) res[2][14]=a22;
  a24=(a24/a20);
  a24=(-a24);
  if (res[2]!=0) res[2][15]=a24;
  a24=arg[2]? arg[2][19] : 0;
  if (res[2]!=0) res[2][16]=a24;
  a24=arg[2]? arg[2][20] : 0;
  if (res[2]!=0) res[2][17]=a24;
  a24=arg[2]? arg[2][21] : 0;
  if (res[2]!=0) res[2][18]=a24;
  a24=arg[2]? arg[2][23] : 0;
  a21=(a21*a24);
  a2=(a2*a21);
  a21=arg[2]? arg[2][22] : 0;
  a30=(a30*a21);
  a4=(a4*a30);
  a2=(a2-a4);
  a7=(a7*a2);
  a28=(a28*a21);
  a9=(a9*a28);
  a7=(a7+a9);
  a7=(a8*a7);
  a7=(a7/a11);
  a7=(a0*a7);
  if (res[2]!=0) res[2][19]=a7;
  a5=(a5*a24);
  a10=(a10*a5);
  a27=(a27*a21);
  a12=(a12*a27);
  a10=(a10-a12);
  a14=(a14*a10);
  a15=(a15*a21);
  a6=(a6*a15);
  a14=(a14-a6);
  a14=(a8*a14);
  a14=(a14/a11);
  a14=(a0*a14);
  if (res[2]!=0) res[2][20]=a14;
  a3=(a3*a24);
  a17=(a17*a3);
  a1=(a1*a21);
  a16=(a16*a1);
  a17=(a17+a16);
  a8=(a8*a17);
  a8=(a8/a11);
  a0=(a0*a8);
  a0=(-a0);
  if (res[2]!=0) res[2][21]=a0;
  a21=(a21/a19);
  a21=(-a21);
  if (res[2]!=0) res[2][22]=a21;
  a21=(1./a20);
  a24=(a24/a20);
  a21=(a21-a24);
  if (res[2]!=0) res[2][23]=a21;
  return 0;
}

CASADI_SYMBOL_EXPORT int quadrotor_expl_vde_forw(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int quadrotor_expl_vde_forw_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int quadrotor_expl_vde_forw_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void quadrotor_expl_vde_forw_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int quadrotor_expl_vde_forw_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void quadrotor_expl_vde_forw_release(int mem) {
}

CASADI_SYMBOL_EXPORT void quadrotor_expl_vde_forw_incref(void) {
}

CASADI_SYMBOL_EXPORT void quadrotor_expl_vde_forw_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int quadrotor_expl_vde_forw_n_in(void) { return 5;}

CASADI_SYMBOL_EXPORT casadi_int quadrotor_expl_vde_forw_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_real quadrotor_expl_vde_forw_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* quadrotor_expl_vde_forw_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* quadrotor_expl_vde_forw_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* quadrotor_expl_vde_forw_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s3;
    case 4: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* quadrotor_expl_vde_forw_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int quadrotor_expl_vde_forw_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 5;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
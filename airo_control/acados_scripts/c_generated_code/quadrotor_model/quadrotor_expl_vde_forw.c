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

/* quadrotor_expl_vde_forw:(i0[8],i1[8x8],i2[8x3],i3[3],i4[3])->(o0[8],o1[8x8],o2[8x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][3] : 0;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0]? arg[0][4] : 0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0]? arg[0][5] : 0;
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0]? arg[0][6] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][7] : 0;
  a3=sin(a2);
  a4=(a1*a3);
  a5=arg[4]? arg[4][2] : 0;
  a6=cos(a5);
  a4=(a4*a6);
  a7=sin(a0);
  a8=sin(a5);
  a7=(a7*a8);
  a4=(a4+a7);
  a7=arg[3]? arg[3][0] : 0;
  a9=(a4*a7);
  if (res[0]!=0) res[0][3]=a9;
  a9=cos(a0);
  a10=sin(a2);
  a11=(a9*a10);
  a12=sin(a5);
  a11=(a11*a12);
  a13=sin(a0);
  a5=cos(a5);
  a13=(a13*a5);
  a11=(a11-a13);
  a13=(a11*a7);
  if (res[0]!=0) res[0][4]=a13;
  a13=-9.8066499999999994e+00;
  a14=cos(a2);
  a15=cos(a0);
  a16=(a14*a15);
  a17=(a16*a7);
  a13=(a13+a17);
  if (res[0]!=0) res[0][5]=a13;
  a13=arg[3]? arg[3][1] : 0;
  a13=(a13-a0);
  a17=arg[4]? arg[4][0] : 0;
  a13=(a13/a17);
  if (res[0]!=0) res[0][6]=a13;
  a13=arg[3]? arg[3][2] : 0;
  a13=(a13-a2);
  a18=arg[4]? arg[4][1] : 0;
  a13=(a13/a18);
  if (res[0]!=0) res[0][7]=a13;
  a13=arg[1]? arg[1][3] : 0;
  if (res[1]!=0) res[1][0]=a13;
  a13=arg[1]? arg[1][4] : 0;
  if (res[1]!=0) res[1][1]=a13;
  a13=arg[1]? arg[1][5] : 0;
  if (res[1]!=0) res[1][2]=a13;
  a13=cos(a2);
  a19=arg[1]? arg[1][7] : 0;
  a20=(a13*a19);
  a20=(a1*a20);
  a21=sin(a0);
  a22=arg[1]? arg[1][6] : 0;
  a23=(a21*a22);
  a23=(a3*a23);
  a20=(a20-a23);
  a20=(a6*a20);
  a23=cos(a0);
  a24=(a23*a22);
  a24=(a8*a24);
  a20=(a20+a24);
  a20=(a7*a20);
  if (res[1]!=0) res[1][3]=a20;
  a20=cos(a2);
  a24=(a20*a19);
  a24=(a9*a24);
  a25=sin(a0);
  a26=(a25*a22);
  a26=(a10*a26);
  a24=(a24-a26);
  a24=(a12*a24);
  a26=cos(a0);
  a27=(a26*a22);
  a27=(a5*a27);
  a24=(a24-a27);
  a24=(a7*a24);
  if (res[1]!=0) res[1][4]=a24;
  a24=sin(a2);
  a27=(a24*a19);
  a27=(a15*a27);
  a28=sin(a0);
  a29=(a28*a22);
  a29=(a14*a29);
  a27=(a27+a29);
  a27=(a7*a27);
  a27=(-a27);
  if (res[1]!=0) res[1][5]=a27;
  a22=(a22/a17);
  a22=(-a22);
  if (res[1]!=0) res[1][6]=a22;
  a19=(a19/a18);
  a19=(-a19);
  if (res[1]!=0) res[1][7]=a19;
  a19=arg[1]? arg[1][11] : 0;
  if (res[1]!=0) res[1][8]=a19;
  a19=arg[1]? arg[1][12] : 0;
  if (res[1]!=0) res[1][9]=a19;
  a19=arg[1]? arg[1][13] : 0;
  if (res[1]!=0) res[1][10]=a19;
  a19=arg[1]? arg[1][15] : 0;
  a22=(a13*a19);
  a22=(a1*a22);
  a27=arg[1]? arg[1][14] : 0;
  a29=(a21*a27);
  a29=(a3*a29);
  a22=(a22-a29);
  a22=(a6*a22);
  a29=(a23*a27);
  a29=(a8*a29);
  a22=(a22+a29);
  a22=(a7*a22);
  if (res[1]!=0) res[1][11]=a22;
  a22=(a20*a19);
  a22=(a9*a22);
  a29=(a25*a27);
  a29=(a10*a29);
  a22=(a22-a29);
  a22=(a12*a22);
  a29=(a26*a27);
  a29=(a5*a29);
  a22=(a22-a29);
  a22=(a7*a22);
  if (res[1]!=0) res[1][12]=a22;
  a22=(a24*a19);
  a22=(a15*a22);
  a29=(a28*a27);
  a29=(a14*a29);
  a22=(a22+a29);
  a22=(a7*a22);
  a22=(-a22);
  if (res[1]!=0) res[1][13]=a22;
  a27=(a27/a17);
  a27=(-a27);
  if (res[1]!=0) res[1][14]=a27;
  a19=(a19/a18);
  a19=(-a19);
  if (res[1]!=0) res[1][15]=a19;
  a19=arg[1]? arg[1][19] : 0;
  if (res[1]!=0) res[1][16]=a19;
  a19=arg[1]? arg[1][20] : 0;
  if (res[1]!=0) res[1][17]=a19;
  a19=arg[1]? arg[1][21] : 0;
  if (res[1]!=0) res[1][18]=a19;
  a19=arg[1]? arg[1][23] : 0;
  a27=(a13*a19);
  a27=(a1*a27);
  a22=arg[1]? arg[1][22] : 0;
  a29=(a21*a22);
  a29=(a3*a29);
  a27=(a27-a29);
  a27=(a6*a27);
  a29=(a23*a22);
  a29=(a8*a29);
  a27=(a27+a29);
  a27=(a7*a27);
  if (res[1]!=0) res[1][19]=a27;
  a27=(a20*a19);
  a27=(a9*a27);
  a29=(a25*a22);
  a29=(a10*a29);
  a27=(a27-a29);
  a27=(a12*a27);
  a29=(a26*a22);
  a29=(a5*a29);
  a27=(a27-a29);
  a27=(a7*a27);
  if (res[1]!=0) res[1][20]=a27;
  a27=(a24*a19);
  a27=(a15*a27);
  a29=(a28*a22);
  a29=(a14*a29);
  a27=(a27+a29);
  a27=(a7*a27);
  a27=(-a27);
  if (res[1]!=0) res[1][21]=a27;
  a22=(a22/a17);
  a22=(-a22);
  if (res[1]!=0) res[1][22]=a22;
  a19=(a19/a18);
  a19=(-a19);
  if (res[1]!=0) res[1][23]=a19;
  a19=arg[1]? arg[1][27] : 0;
  if (res[1]!=0) res[1][24]=a19;
  a19=arg[1]? arg[1][28] : 0;
  if (res[1]!=0) res[1][25]=a19;
  a19=arg[1]? arg[1][29] : 0;
  if (res[1]!=0) res[1][26]=a19;
  a19=arg[1]? arg[1][31] : 0;
  a22=(a13*a19);
  a22=(a1*a22);
  a27=arg[1]? arg[1][30] : 0;
  a29=(a21*a27);
  a29=(a3*a29);
  a22=(a22-a29);
  a22=(a6*a22);
  a29=(a23*a27);
  a29=(a8*a29);
  a22=(a22+a29);
  a22=(a7*a22);
  if (res[1]!=0) res[1][27]=a22;
  a22=(a20*a19);
  a22=(a9*a22);
  a29=(a25*a27);
  a29=(a10*a29);
  a22=(a22-a29);
  a22=(a12*a22);
  a29=(a26*a27);
  a29=(a5*a29);
  a22=(a22-a29);
  a22=(a7*a22);
  if (res[1]!=0) res[1][28]=a22;
  a22=(a24*a19);
  a22=(a15*a22);
  a29=(a28*a27);
  a29=(a14*a29);
  a22=(a22+a29);
  a22=(a7*a22);
  a22=(-a22);
  if (res[1]!=0) res[1][29]=a22;
  a27=(a27/a17);
  a27=(-a27);
  if (res[1]!=0) res[1][30]=a27;
  a19=(a19/a18);
  a19=(-a19);
  if (res[1]!=0) res[1][31]=a19;
  a19=arg[1]? arg[1][35] : 0;
  if (res[1]!=0) res[1][32]=a19;
  a19=arg[1]? arg[1][36] : 0;
  if (res[1]!=0) res[1][33]=a19;
  a19=arg[1]? arg[1][37] : 0;
  if (res[1]!=0) res[1][34]=a19;
  a19=arg[1]? arg[1][39] : 0;
  a27=(a13*a19);
  a27=(a1*a27);
  a22=arg[1]? arg[1][38] : 0;
  a29=(a21*a22);
  a29=(a3*a29);
  a27=(a27-a29);
  a27=(a6*a27);
  a29=(a23*a22);
  a29=(a8*a29);
  a27=(a27+a29);
  a27=(a7*a27);
  if (res[1]!=0) res[1][35]=a27;
  a27=(a20*a19);
  a27=(a9*a27);
  a29=(a25*a22);
  a29=(a10*a29);
  a27=(a27-a29);
  a27=(a12*a27);
  a29=(a26*a22);
  a29=(a5*a29);
  a27=(a27-a29);
  a27=(a7*a27);
  if (res[1]!=0) res[1][36]=a27;
  a27=(a24*a19);
  a27=(a15*a27);
  a29=(a28*a22);
  a29=(a14*a29);
  a27=(a27+a29);
  a27=(a7*a27);
  a27=(-a27);
  if (res[1]!=0) res[1][37]=a27;
  a22=(a22/a17);
  a22=(-a22);
  if (res[1]!=0) res[1][38]=a22;
  a19=(a19/a18);
  a19=(-a19);
  if (res[1]!=0) res[1][39]=a19;
  a19=arg[1]? arg[1][43] : 0;
  if (res[1]!=0) res[1][40]=a19;
  a19=arg[1]? arg[1][44] : 0;
  if (res[1]!=0) res[1][41]=a19;
  a19=arg[1]? arg[1][45] : 0;
  if (res[1]!=0) res[1][42]=a19;
  a19=arg[1]? arg[1][47] : 0;
  a22=(a13*a19);
  a22=(a1*a22);
  a27=arg[1]? arg[1][46] : 0;
  a29=(a21*a27);
  a29=(a3*a29);
  a22=(a22-a29);
  a22=(a6*a22);
  a29=(a23*a27);
  a29=(a8*a29);
  a22=(a22+a29);
  a22=(a7*a22);
  if (res[1]!=0) res[1][43]=a22;
  a22=(a20*a19);
  a22=(a9*a22);
  a29=(a25*a27);
  a29=(a10*a29);
  a22=(a22-a29);
  a22=(a12*a22);
  a29=(a26*a27);
  a29=(a5*a29);
  a22=(a22-a29);
  a22=(a7*a22);
  if (res[1]!=0) res[1][44]=a22;
  a22=(a24*a19);
  a22=(a15*a22);
  a29=(a28*a27);
  a29=(a14*a29);
  a22=(a22+a29);
  a22=(a7*a22);
  a22=(-a22);
  if (res[1]!=0) res[1][45]=a22;
  a27=(a27/a17);
  a27=(-a27);
  if (res[1]!=0) res[1][46]=a27;
  a19=(a19/a18);
  a19=(-a19);
  if (res[1]!=0) res[1][47]=a19;
  a19=arg[1]? arg[1][51] : 0;
  if (res[1]!=0) res[1][48]=a19;
  a19=arg[1]? arg[1][52] : 0;
  if (res[1]!=0) res[1][49]=a19;
  a19=arg[1]? arg[1][53] : 0;
  if (res[1]!=0) res[1][50]=a19;
  a19=arg[1]? arg[1][55] : 0;
  a27=(a13*a19);
  a27=(a1*a27);
  a22=arg[1]? arg[1][54] : 0;
  a29=(a21*a22);
  a29=(a3*a29);
  a27=(a27-a29);
  a27=(a6*a27);
  a29=(a23*a22);
  a29=(a8*a29);
  a27=(a27+a29);
  a27=(a7*a27);
  if (res[1]!=0) res[1][51]=a27;
  a27=(a20*a19);
  a27=(a9*a27);
  a29=(a25*a22);
  a29=(a10*a29);
  a27=(a27-a29);
  a27=(a12*a27);
  a29=(a26*a22);
  a29=(a5*a29);
  a27=(a27-a29);
  a27=(a7*a27);
  if (res[1]!=0) res[1][52]=a27;
  a27=(a24*a19);
  a27=(a15*a27);
  a29=(a28*a22);
  a29=(a14*a29);
  a27=(a27+a29);
  a27=(a7*a27);
  a27=(-a27);
  if (res[1]!=0) res[1][53]=a27;
  a22=(a22/a17);
  a22=(-a22);
  if (res[1]!=0) res[1][54]=a22;
  a19=(a19/a18);
  a19=(-a19);
  if (res[1]!=0) res[1][55]=a19;
  a19=arg[1]? arg[1][59] : 0;
  if (res[1]!=0) res[1][56]=a19;
  a19=arg[1]? arg[1][60] : 0;
  if (res[1]!=0) res[1][57]=a19;
  a19=arg[1]? arg[1][61] : 0;
  if (res[1]!=0) res[1][58]=a19;
  a19=arg[1]? arg[1][63] : 0;
  a13=(a13*a19);
  a13=(a1*a13);
  a22=arg[1]? arg[1][62] : 0;
  a21=(a21*a22);
  a21=(a3*a21);
  a13=(a13-a21);
  a13=(a6*a13);
  a23=(a23*a22);
  a23=(a8*a23);
  a13=(a13+a23);
  a13=(a7*a13);
  if (res[1]!=0) res[1][59]=a13;
  a20=(a20*a19);
  a20=(a9*a20);
  a25=(a25*a22);
  a25=(a10*a25);
  a20=(a20-a25);
  a20=(a12*a20);
  a26=(a26*a22);
  a26=(a5*a26);
  a20=(a20-a26);
  a20=(a7*a20);
  if (res[1]!=0) res[1][60]=a20;
  a24=(a24*a19);
  a24=(a15*a24);
  a28=(a28*a22);
  a28=(a14*a28);
  a24=(a24+a28);
  a24=(a7*a24);
  a24=(-a24);
  if (res[1]!=0) res[1][61]=a24;
  a22=(a22/a17);
  a22=(-a22);
  if (res[1]!=0) res[1][62]=a22;
  a19=(a19/a18);
  a19=(-a19);
  if (res[1]!=0) res[1][63]=a19;
  a19=arg[2]? arg[2][3] : 0;
  if (res[2]!=0) res[2][0]=a19;
  a19=arg[2]? arg[2][4] : 0;
  if (res[2]!=0) res[2][1]=a19;
  a19=arg[2]? arg[2][5] : 0;
  if (res[2]!=0) res[2][2]=a19;
  a19=cos(a2);
  a22=arg[2]? arg[2][7] : 0;
  a24=(a19*a22);
  a24=(a1*a24);
  a28=sin(a0);
  a20=arg[2]? arg[2][6] : 0;
  a26=(a28*a20);
  a26=(a3*a26);
  a24=(a24-a26);
  a24=(a6*a24);
  a26=cos(a0);
  a25=(a26*a20);
  a25=(a8*a25);
  a24=(a24+a25);
  a24=(a7*a24);
  a4=(a4+a24);
  if (res[2]!=0) res[2][3]=a4;
  a4=cos(a2);
  a24=(a4*a22);
  a24=(a9*a24);
  a25=sin(a0);
  a13=(a25*a20);
  a13=(a10*a13);
  a24=(a24-a13);
  a24=(a12*a24);
  a13=cos(a0);
  a23=(a13*a20);
  a23=(a5*a23);
  a24=(a24-a23);
  a24=(a7*a24);
  a11=(a11+a24);
  if (res[2]!=0) res[2][4]=a11;
  a2=sin(a2);
  a11=(a2*a22);
  a11=(a15*a11);
  a0=sin(a0);
  a24=(a0*a20);
  a24=(a14*a24);
  a11=(a11+a24);
  a11=(a7*a11);
  a16=(a16-a11);
  if (res[2]!=0) res[2][5]=a16;
  a20=(a20/a17);
  a20=(-a20);
  if (res[2]!=0) res[2][6]=a20;
  a22=(a22/a18);
  a22=(-a22);
  if (res[2]!=0) res[2][7]=a22;
  a22=arg[2]? arg[2][11] : 0;
  if (res[2]!=0) res[2][8]=a22;
  a22=arg[2]? arg[2][12] : 0;
  if (res[2]!=0) res[2][9]=a22;
  a22=arg[2]? arg[2][13] : 0;
  if (res[2]!=0) res[2][10]=a22;
  a22=arg[2]? arg[2][15] : 0;
  a20=(a19*a22);
  a20=(a1*a20);
  a16=arg[2]? arg[2][14] : 0;
  a11=(a28*a16);
  a11=(a3*a11);
  a20=(a20-a11);
  a20=(a6*a20);
  a11=(a26*a16);
  a11=(a8*a11);
  a20=(a20+a11);
  a20=(a7*a20);
  if (res[2]!=0) res[2][11]=a20;
  a20=(a4*a22);
  a20=(a9*a20);
  a11=(a25*a16);
  a11=(a10*a11);
  a20=(a20-a11);
  a20=(a12*a20);
  a11=(a13*a16);
  a11=(a5*a11);
  a20=(a20-a11);
  a20=(a7*a20);
  if (res[2]!=0) res[2][12]=a20;
  a20=(a2*a22);
  a20=(a15*a20);
  a11=(a0*a16);
  a11=(a14*a11);
  a20=(a20+a11);
  a20=(a7*a20);
  a20=(-a20);
  if (res[2]!=0) res[2][13]=a20;
  a20=(1./a17);
  a16=(a16/a17);
  a20=(a20-a16);
  if (res[2]!=0) res[2][14]=a20;
  a22=(a22/a18);
  a22=(-a22);
  if (res[2]!=0) res[2][15]=a22;
  a22=arg[2]? arg[2][19] : 0;
  if (res[2]!=0) res[2][16]=a22;
  a22=arg[2]? arg[2][20] : 0;
  if (res[2]!=0) res[2][17]=a22;
  a22=arg[2]? arg[2][21] : 0;
  if (res[2]!=0) res[2][18]=a22;
  a22=arg[2]? arg[2][23] : 0;
  a19=(a19*a22);
  a1=(a1*a19);
  a19=arg[2]? arg[2][22] : 0;
  a28=(a28*a19);
  a3=(a3*a28);
  a1=(a1-a3);
  a6=(a6*a1);
  a26=(a26*a19);
  a8=(a8*a26);
  a6=(a6+a8);
  a6=(a7*a6);
  if (res[2]!=0) res[2][19]=a6;
  a4=(a4*a22);
  a9=(a9*a4);
  a25=(a25*a19);
  a10=(a10*a25);
  a9=(a9-a10);
  a12=(a12*a9);
  a13=(a13*a19);
  a5=(a5*a13);
  a12=(a12-a5);
  a12=(a7*a12);
  if (res[2]!=0) res[2][20]=a12;
  a2=(a2*a22);
  a15=(a15*a2);
  a0=(a0*a19);
  a14=(a14*a0);
  a15=(a15+a14);
  a7=(a7*a15);
  a7=(-a7);
  if (res[2]!=0) res[2][21]=a7;
  a19=(a19/a17);
  a19=(-a19);
  if (res[2]!=0) res[2][22]=a19;
  a19=(1./a18);
  a22=(a22/a18);
  a19=(a19-a22);
  if (res[2]!=0) res[2][23]=a19;
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
    case 4: return casadi_s3;
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

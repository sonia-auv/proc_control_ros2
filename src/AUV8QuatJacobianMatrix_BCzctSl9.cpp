//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: AUV8QuatJacobianMatrix_BCzctSl9.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "AUV8QuatJacobianMatrix_BCzctSl9.h"
#include <cmath>
#include <emmintrin.h>
#include <cstring>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "cmath"

// Function for MATLAB Function: '<S217>/NLMPC'
void AUV8QuatJacobianMatrix_BCzctSl9(const real_T in1[13], real_T Anqv[169])
{
  __m128d tmp_0;
  __m128d tmp_1;
  __m128d tmp_2;
  __m128d tmp_3;
  __m128d tmp_4;
  __m128d tmp_5;
  __m128d tmp_6;
  __m128d tmp_7;
  __m128d tmp_8;
  __m128d tmp_9;
  __m128d tmp_a;
  __m128d tmp_b;
  __m128d tmp_c;
  __m128d tmp_d;
  __m128d tmp_e;
  __m128d tmp_f;
  __m128d tmp_g;
  __m128d tmp_h;
  __m128d tmp_i;
  real_T tmp[2];
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t2;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t3;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t33;
  real_T t34;
  real_T t37;
  real_T t39;
  real_T t4;
  real_T t40;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45;
  real_T t5;
  real_T t55;
  real_T t56;
  real_T t57;
  real_T t58;
  real_T t59;
  real_T t6;
  real_T t61;
  real_T t62;
  real_T t65;
  real_T t68;
  real_T t7;
  real_T t8;
  real_T t9;
  t2 = std::abs(in1[10]);
  t3 = std::abs(in1[11]);
  t4 = std::abs(in1[12]);
  t5 = std::abs(in1[7]);
  t6 = std::abs(in1[8]);
  t7 = std::abs(in1[9]);
  if (std::isnan(in1[10])) {
    t8 = (rtNaN);
  } else if (in1[10] < 0.0) {
    t8 = -1.0;
  } else {
    t8 = (in1[10] > 0.0);
  }

  if (std::isnan(in1[11])) {
    t9 = (rtNaN);
  } else if (in1[11] < 0.0) {
    t9 = -1.0;
  } else {
    t9 = (in1[11] > 0.0);
  }

  if (std::isnan(in1[12])) {
    t10 = (rtNaN);
  } else if (in1[12] < 0.0) {
    t10 = -1.0;
  } else {
    t10 = (in1[12] > 0.0);
  }

  if (std::isnan(in1[7])) {
    t11 = (rtNaN);
  } else if (in1[7] < 0.0) {
    t11 = -1.0;
  } else {
    t11 = (in1[7] > 0.0);
  }

  if (std::isnan(in1[8])) {
    t12 = (rtNaN);
  } else if (in1[8] < 0.0) {
    t12 = -1.0;
  } else {
    t12 = (in1[8] > 0.0);
  }

  if (std::isnan(in1[9])) {
    t13 = (rtNaN);
  } else if (in1[9] < 0.0) {
    t13 = -1.0;
  } else {
    t13 = (in1[9] > 0.0);
  }

  tmp_0 = _mm_set1_pd(2.0);
  tmp_4 = _mm_set1_pd(in1[4]);
  tmp_h = _mm_loadu_pd(&in1[5]);
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(tmp_4, tmp_h), tmp_0));
  t17 = tmp[0];
  t18 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(_mm_set_pd(in1[3], in1[5]),
    _mm_set_pd(in1[4], in1[6])), tmp_0));
  t19 = tmp[0];
  t20 = tmp[1];
  tmp_5 = _mm_set1_pd(in1[3]);
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(tmp_5, tmp_h), tmp_0));
  t21 = tmp[0];
  t22 = tmp[1];
  tmp_h = _mm_set1_pd(in1[7]);
  tmp_i = _mm_loadu_pd(&in1[4]);
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(tmp_i, tmp_h), tmp_0));
  t23 = tmp[0];
  t24 = tmp[1];
  tmp_1 = _mm_set_pd(in1[3], in1[6]);
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(tmp_1, tmp_h), tmp_0));
  t25 = tmp[0];
  t26 = tmp[1];
  tmp_2 = _mm_set1_pd(in1[8]);
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(tmp_i, tmp_2), tmp_0));
  t27 = tmp[0];
  t28 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(tmp_1, tmp_2), tmp_0));
  t29 = tmp[0];
  t30 = tmp[1];
  tmp_3 = _mm_set1_pd(in1[9]);
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(tmp_i, tmp_3), tmp_0));
  t31 = tmp[0];
  t32 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(tmp_1, tmp_3), tmp_0));
  t33 = tmp[0];
  t34 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_div_pd(tmp_i, tmp_0));
  t39 = tmp[0];
  t40 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_div_pd(tmp_1, tmp_0));
  t41 = tmp[0];
  t42 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_div_pd(_mm_loadu_pd(&in1[10]), tmp_0));
  t43 = tmp[0];
  t44 = tmp[1];
  t45 = in1[12] / 2.0;
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_set_pd(in1[11], in1[12]), _mm_set_pd
    (9.7602896722846373E-5, 1.0571299073092789E-5)));
  t55 = tmp[0];
  t56 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_set_pd(in1[7], in1[8]), _mm_set_pd
    (0.00477039452928936, 0.01129023503850542)));
  t57 = tmp[0];
  t58 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_set_pd(in1[9], in1[10]), _mm_set_pd
    (0.143523560675718, 9.1703771260780813E-5)));
  t59 = tmp[0];
  t61 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_set_pd(in1[9], in1[7]), _mm_set_pd
    (0.069014505171846527, 0.00568699616459184)));
  t62 = tmp[0];
  t65 = tmp[1];
  t68 = in1[8] * 0.0071670223909459834;
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(tmp_i, tmp_i), tmp_0));
  t37 = in1[6] * in1[6] * 2.0;
  std::memset(&Anqv[0], 0, 39U * sizeof(real_T));
  Anqv[39] = -t29 + t32;
  Anqv[40] = t25 - t31;
  Anqv[41] = -t24 + t27;
  Anqv[42] = 0.0;
  Anqv[43] = t43;
  Anqv[44] = t44;
  Anqv[45] = t45;
  tmp_0 = _mm_set1_pd(in1[5]);
  tmp_1 = _mm_set_pd(0.00099202109956931486, 0.4138016519122657);
  _mm_storeu_pd(&Anqv[46], _mm_add_pd(_mm_mul_pd(tmp_4, _mm_set_pd
    (-0.51979016069898065, -0.0013017970932508)), _mm_mul_pd(tmp_0, tmp_1)));
  tmp_i = _mm_set_pd(1.0, -1.0);
  tmp_7 = _mm_set_pd(0.1138522338822895, 0.0058758415205803329);
  _mm_storeu_pd(&Anqv[48], _mm_add_pd(_mm_mul_pd(tmp_4, _mm_set_pd
    (-25.242114556122988, 0.033540735888224739)), _mm_mul_pd(_mm_mul_pd(tmp_0,
    tmp_7), tmp_i)));
  tmp_9 = _mm_set_pd(0.65361132374006825, 8.6371397256799973);
  tmp_a = _mm_set_pd(0.38451002147839958, 0.1184627304742461);
  _mm_storeu_pd(&Anqv[50], _mm_add_pd(_mm_mul_pd(tmp_4, tmp_a), _mm_mul_pd
    (_mm_mul_pd(tmp_0, tmp_9), tmp_i)));
  Anqv[52] = t28 + t33;
  tmp_g = _mm_set1_pd(4.0);
  _mm_storeu_pd(&Anqv[53], _mm_sub_pd(_mm_add_pd(_mm_set_pd(t25, t24),
    _mm_mul_pd(_mm_set_pd(t30, t34), tmp_i)), _mm_mul_pd(_mm_mul_pd(tmp_4,
    _mm_loadu_pd(&in1[8])), tmp_g)));
  Anqv[55] = -t43;
  Anqv[56] = 0.0;
  Anqv[57] = -t45;
  Anqv[58] = t44;
  tmp_6 = _mm_set1_pd(in1[6]);
  tmp_b = _mm_set_pd(-0.05386046241846134, -0.01263905936484723);
  tmp_c = _mm_set_pd(0.51979016069898065, 0.0013017970932508);
  _mm_storeu_pd(&Anqv[59], _mm_sub_pd(_mm_sub_pd(_mm_mul_pd(tmp_4, tmp_b),
    _mm_mul_pd(tmp_6, tmp_1)), _mm_mul_pd(tmp_5, tmp_c)));
  tmp_8 = _mm_set_pd(-1.0, 1.0);
  tmp_d = _mm_set_pd(-4.2094140168137981, 0.37271497842704371);
  tmp_e = _mm_set_pd(25.242114556122988, 0.033540735888224739);
  _mm_storeu_pd(&Anqv[61], _mm_add_pd(_mm_add_pd(_mm_mul_pd(tmp_4, tmp_d),
    _mm_mul_pd(_mm_mul_pd(tmp_6, tmp_7), tmp_8)), _mm_mul_pd(_mm_mul_pd(tmp_5,
    tmp_e), tmp_8)));
  tmp_f = _mm_set_pd(0.009785912146552939, 0.73643595165049924);
  _mm_storeu_pd(&Anqv[63], _mm_add_pd(_mm_add_pd(_mm_mul_pd(tmp_4, tmp_f),
    _mm_mul_pd(_mm_mul_pd(tmp_6, tmp_9), tmp_8)), _mm_mul_pd(tmp_5, tmp_a)));
  Anqv[65] = (t27 + t34) - in1[5] * in1[7] * 4.0;
  Anqv[66] = t23 + t33;
  Anqv[67] = (-t26 + t29) - in1[5] * in1[9] * 4.0;
  Anqv[68] = -t44;
  Anqv[69] = t45;
  Anqv[70] = 0.0;
  Anqv[71] = -t43;
  _mm_storeu_pd(&Anqv[72], _mm_add_pd(_mm_sub_pd(_mm_mul_pd(tmp_0, tmp_b),
    _mm_mul_pd(tmp_6, tmp_c)), _mm_mul_pd(tmp_5, tmp_1)));
  _mm_storeu_pd(&Anqv[74], _mm_add_pd(_mm_add_pd(_mm_mul_pd(tmp_0, tmp_d),
    _mm_mul_pd(_mm_mul_pd(tmp_6, tmp_e), tmp_8)), _mm_mul_pd(_mm_mul_pd(tmp_5,
    tmp_7), tmp_i)));
  _mm_storeu_pd(&Anqv[76], _mm_add_pd(_mm_add_pd(_mm_mul_pd(tmp_0, tmp_f),
    _mm_mul_pd(tmp_6, tmp_a)), _mm_mul_pd(_mm_mul_pd(tmp_5, tmp_9), tmp_i)));
  _mm_storeu_pd(&Anqv[78], _mm_sub_pd(_mm_add_pd(_mm_set_pd(t26, -t30),
    _mm_set_pd(t32, t31)), _mm_mul_pd(_mm_mul_pd(tmp_6, _mm_loadu_pd(&in1[7])),
    tmp_g)));
  Anqv[80] = t23 + t28;
  Anqv[81] = -t45;
  Anqv[82] = -t44;
  Anqv[83] = t43;
  Anqv[84] = 0.0;
  _mm_storeu_pd(&Anqv[85], _mm_sub_pd(_mm_mul_pd(tmp_4, _mm_set_pd
    (-0.00099202109956931486, -0.4138016519122657)), _mm_mul_pd(tmp_0, tmp_c)));
  _mm_storeu_pd(&Anqv[87], _mm_add_pd(_mm_mul_pd(tmp_4, _mm_set_pd
    (-0.1138522338822895, 0.0058758415205803329)), _mm_mul_pd(_mm_mul_pd(tmp_0,
    tmp_e), tmp_8)));
  _mm_storeu_pd(&Anqv[89], _mm_add_pd(_mm_mul_pd(tmp_4, _mm_set_pd
    (-0.65361132374006825, 8.6371397256799973)), _mm_mul_pd(tmp_0, tmp_a)));
  Anqv[91] = (-tmp[1] - t37) + 1.0;
  Anqv[92] = t17 + t22;
  Anqv[93] = t18 - t21;
  Anqv[94] = 0.0;
  Anqv[95] = 0.0;
  Anqv[96] = 0.0;
  Anqv[97] = 0.0;
  t23 = t11 * in1[7];
  Anqv[98] = (((((t5 * -0.036243063166504788 + t55) + t56) - t57) - t61) - t23 *
              0.036243063166504788) - 0.46465465598083061;
  tmp_0 = _mm_set_pd(7.9830677445685858E-6, 1.109195745194835E-6);
  tmp_4 = _mm_set1_pd(in1[11]);
  tmp_5 = _mm_set1_pd(in1[12]);
  _mm_storeu_pd(&Anqv[99], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_mul_pd(tmp_2, _mm_set_pd(-5.890830655932608E-5, 0.00477039452928936)),
     _mm_mul_pd(_mm_mul_pd(tmp_3, _mm_set_pd(0.00568699616459184,
    0.001468966557066211)), tmp_i)), _mm_mul_pd(_mm_mul_pd(_mm_mul_pd
    (_mm_set1_pd(t11), tmp_h), tmp_0), tmp_i)), _mm_mul_pd(_mm_set_pd
    (0.0001023470223662639, 1.422045827172866E-5), tmp_i)), _mm_add_pd
    (_mm_sub_pd(_mm_mul_pd(tmp_4, _mm_set_pd(0.69409782663856512,
    0.00041592787873873338)), _mm_mul_pd(tmp_5, _mm_set_pd
    (0.00032422410747795261, 0.74121409319149256))), _mm_mul_pd(_mm_mul_pd
    (_mm_set1_pd(t5), tmp_0), tmp_i))));
  Anqv[101] = (((in1[11] * 0.032506453976272241 + in1[12] * 0.24400486517334929)
                - t5 * 0.0001525121428377004) + ((in1[8] * 0.044446246736648841
    - in1[9] * 0.1148218101592509) - t23 * 0.0001525121428377004)) -
    0.0019552838825346208;
  Anqv[102] = (((in1[8] * 1.7911420833141059E-5 + in1[9] * 8.3502908029033716) +
                t23 * 0.011738978516892359) + 0.150499724575543) + ((in1[11] *
    -0.00568699616459184 - in1[12] * 0.001145088836853196) + t5 *
    0.011738978516892359);
  Anqv[103] = (((in1[11] * -7.5569972812640509E-5 - in1[12] *
                 0.00477039452928936) - t5 * 0.0011846302503005471) + ((in1[8] *
    -5.91169722427816 - in1[9] * 2.2977499514997389E-5) - t23 *
    0.0011846302503005471)) - 0.015187567311545479;
  Anqv[104] = t17 - t22;
  Anqv[105] = (-tmp[0] - t37) + 1.0;
  Anqv[106] = t19 + t20;
  Anqv[107] = 0.0;
  Anqv[108] = 0.0;
  Anqv[109] = 0.0;
  Anqv[110] = 0.0;
  t23 = t12 * in1[8];
  Anqv[111] = (((in1[10] * -2.1519484922730651E-5 + in1[12] * 1.3454180758607359)
                - t6 * 7.7738505218783331E-7) - in1[7] * 0.01129023503850542) +
    ((in1[9] * -0.00041111798914172931 - t23 * 7.7738505218783331E-7) -
     1.8960611028971542E-5);
  Anqv[112] = (((((t6 * -0.01903042325061665 + t55) + t58) - t59) - t65) - t23 *
               0.01903042325061665) - 0.46415666464918648;
  Anqv[113] = (((in1[7] * -5.890830655932608E-5 + in1[9] * 0.0071670223909459834)
                + t23 * 2.3842573459475649E-5) + 0.00058152618193843065) +
    ((in1[10] * -0.93255469429176219 - in1[12] * 7.6083411800115719E-5) + t6 *
     2.3842573459475649E-5);
  Anqv[114] = (((in1[10] * -0.0071670223909459834 + in1[12] *
                 0.00145353196782447) - t6 * 0.017943464992838758) + ((in1[7] *
    0.044446246736648841 - in1[9] * 5.3937622658585171) - t23 *
    0.017943464992838758)) - 0.4376454876302136;
  Anqv[115] = (((in1[10] * 0.0012538688125934979 - in1[12] * 0.1118794885864644)
                + t6 * 8.4206769578830268E-5) + in1[7] * 1.7911420833141059E-5)
    + ((t23 * 8.4206769578830268E-5 + in1[9] * 0.025315910649035739) +
       0.0020538236482641531);
  Anqv[116] = (((in1[10] * 1.6661666253314429E-5 + in1[12] * 0.01129023503850542)
                + t6 * 0.00035080205133418912) + ((in1[7] * -5.91169722427816 +
    in1[9] * 0.01257120723021817) + t23 * 0.00035080205133418912)) +
    0.0085561475935168052;
  Anqv[117] = t18 + t21;
  Anqv[118] = t19 - t20;
  Anqv[119] = (-tmp[0] - tmp[1]) + 1.0;
  Anqv[120] = 0.0;
  Anqv[121] = 0.0;
  Anqv[122] = 0.0;
  Anqv[123] = 0.0;
  t23 = t13 * in1[9];
  Anqv[124] = (((in1[10] * 2.989993556213668E-6 - in1[11] * 1.4431163638272659)
                + t7 * 5.1582899272597018E-6) - in1[7] * 0.143523560675718) +
    ((t23 * 5.1582899272597018E-6 + in1[8] * -0.00041111798914172931) +
     0.0001592064792364106);
  Anqv[125] = (((in1[10] * 1.0731951852318531 - in1[11] * 1.356129262930646E-5)
                + t7 * 2.1981689677272681E-5) + ((in1[7] * -0.001468966557066211
    - in1[8] * 0.069014505171846527) + t23 * 2.1981689677272681E-5)) +
    0.00067844721226150231;
  Anqv[126] = (((((t7 * -0.01616685726098728 + t56) - t59) + t62) + t68) - t23 *
               0.01616685726098728) - 0.49897707595639768;
  tmp_0 = _mm_set_pd(0.00030055639757781919, 0.00171795837774031);
  tmp_1 = _mm_set1_pd(in1[10]);
  _mm_storeu_pd(&Anqv[127], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_mul_pd(tmp_1, _mm_set_pd(-0.00032387772021301561, 0.069014505171846527)),
     _mm_mul_pd(_mm_mul_pd(tmp_4, _mm_set_pd(0.143523560675718,
    0.0018646499569661989)), tmp_i)), _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(t7),
    tmp_0), tmp_8)), _mm_add_pd(_mm_add_pd(_mm_mul_pd(tmp_h, _mm_set_pd
    (8.3502908029033716, -0.1148218101592509)), _mm_mul_pd(_mm_mul_pd(tmp_2,
    _mm_set_pd(0.025315910649035739, 5.3937622658585171)), tmp_i)), _mm_mul_pd
    (_mm_mul_pd(_mm_mul_pd(_mm_set1_pd(t13), tmp_3), tmp_0), tmp_8))),
    _mm_mul_pd(_mm_set_pd(0.0092764320240067664, 0.053023406720379938), tmp_8)));
  Anqv[129] = (((in1[10] * -0.0013492616947596331 - in1[11] *
                 0.01448357294143097) - t7 * 3.993855127780116E-6) - in1[7] *
               2.2977499514997389E-5) + ((in1[8] * 0.01257120723021817 - t23 *
    3.993855127780116E-6) - 0.00012326713357346041);
  Anqv[130] = 0.0;
  Anqv[131] = 0.0;
  Anqv[132] = 0.0;
  Anqv[133] = -t39;
  Anqv[134] = t42;
  Anqv[135] = t41;
  Anqv[136] = -t40;
  t23 = in1[10] * t8;
  Anqv[137] = (((in1[10] * -0.00010396365424827521 - in1[11] *
                 0.0030560301354578762) - in1[12] * 0.030270009262121408) - t2 *
               2.1768827225552109E-5) + (((in1[8] * -2.1519484922730651E-5 +
    in1[9] * 2.989993556213668E-6) - t23 * 2.1768827225552109E-5) -
    0.00043450752945213789);
  Anqv[138] = ((((in1[10] * 0.0028513455484883 - in1[11] *
                  0.00032316342950661811) + in1[12] * 4.2079285691049859E-5) -
                t2 * 0.0036543398217122828) + ((in1[8] * -9.1703771260780813E-5
    + in1[9] * 1.0731951852318531) - t23 * 0.0036543398217122828)) -
    0.072940914605035587;
  Anqv[139] = (((in1[10] * 0.023864851221217471 + in1[11] *
                 4.0426879502317728E-6) - in1[12] * 0.00016269010774240791) +
               ((t2 * 0.0003794960966701478 - in1[8] * 0.93255469429176219) -
                in1[9] * 9.1703771260780813E-5)) + (t23 * 0.0003794960966701478
    + 0.007574772388625705);
  Anqv[140] = ((((t2 * -0.28560141361437341 + t65) - t68) - t23 *
                0.28560141361437341) - 5.7006270182509668) + ((in1[10] *
    0.00017692814721597281 - in1[11] * 0.00301187450220627) + in1[12] *
    0.0032852614324183722);
  tmp_0 = _mm_set_pd(0.00066564938883491385, 0.0013404854555911631);
  _mm_storeu_pd(&Anqv[141], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_mul_pd(tmp_1, _mm_set_pd(-0.0085297096290247246, 0.005100926963153893)),
     _mm_mul_pd(_mm_mul_pd(tmp_4, _mm_set_pd(0.59953739020136265,
    7.54282242443926E-5)), tmp_8)), _mm_mul_pd(_mm_mul_pd(tmp_5, _mm_set_pd
    (6.8948828938803766E-5, 0.76112100692746432)), tmp_8)), _mm_sub_pd
    (_mm_add_pd(_mm_mul_pd(_mm_set1_pd(t2), tmp_0), _mm_mul_pd(tmp_2, _mm_set_pd
    (1.6661666253314429E-5, 0.0012538688125934979))), _mm_mul_pd(tmp_3,
    _mm_set_pd(0.0013492616947596331, 0.00032387772021301561)))), _mm_add_pd
    (_mm_mul_pd(_mm_mul_pd(tmp_1, _mm_set1_pd(t8)), tmp_0), _mm_set_pd
     (0.013286414946804669, 0.026756196718386482))));
  Anqv[143] = 0.0;
  Anqv[144] = 0.0;
  Anqv[145] = 0.0;
  Anqv[146] = -t40;
  Anqv[147] = -t41;
  Anqv[148] = t42;
  Anqv[149] = t39;
  t23 = in1[11] * t9;
  Anqv[150] = ((((in1[10] * -0.0030560301354578762 + in1[11] *
                  0.001929418735906703) + in1[12] * 6.2884941489263073E-5) + t3 *
                0.001003331497170287) + ((in1[7] * 9.7602896722846373E-5 - in1[9]
    * 1.4431163638272659) + t23 * 0.001003331497170287)) + 0.0234110682673067;
  Anqv[151] = (((in1[10] * -0.00032316342950661811 + in1[11] *
                 4.5292476302332957E-6) - in1[12] * 0.016528998001422841) + t3 *
               1.026911824132076E-5) + (((in1[7] * 0.00041592787873873338 - in1
    [9] * 1.356129262930646E-5) + t23 * 1.026911824132076E-5) +
    0.00023961275896415121);
  tmp_0 = _mm_set_pd(0.00080268590155159437, -3.9756137245743291E-5);
  _mm_storeu_pd(&Anqv[152], _mm_add_pd(_mm_add_pd(_mm_sub_pd(_mm_add_pd
    (_mm_mul_pd(tmp_1, _mm_set_pd(-0.00301187450220627, 4.0426879502317728E-6)),
     _mm_mul_pd(tmp_4, _mm_set_pd(0.00082864946354184129, 0.023860477346842442))),
    _mm_mul_pd(tmp_5, _mm_set_pd(0.291807921220024, 0.000941018323416786))),
    _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_set1_pd(t3), tmp_0), _mm_mul_pd(tmp_h,
    _mm_set_pd(0.032506453976272241, 0.69409782663856512))), _mm_mul_pd
               (_mm_mul_pd(tmp_3, _mm_set_pd(0.0018646499569661989,
    9.7602896722846373E-5)), tmp_8))), _mm_add_pd(_mm_mul_pd(_mm_mul_pd(tmp_4,
    _mm_set1_pd(t9)), tmp_0), _mm_mul_pd(_mm_set_pd(0.018729337702870542,
    0.00092764320240067675), tmp_i))));
  Anqv[154] = ((((t3 * -0.058374455968341669 + t61) - t62) - t23 *
                0.058374455968341669) - 1.362070639261306) + ((in1[10] *
    7.54282242443926E-5 - in1[11] * 0.00019446645525741661) - in1[12] *
    0.003324115892995542);
  Anqv[155] = ((((t3 * 1.6062902063655571E-7 - in1[7] * 7.5569972812640509E-5) -
                 in1[9] * 0.01448357294143097) + t23 * 1.6062902063655571E-7) +
               ((in1[10] * -0.59953739020136265 + in1[11] *
                 0.0085432434746820687) + in1[12] * 0.0030111351640179931)) +
    3.7480104815196341E-6;
  Anqv[156] = 0.0;
  Anqv[157] = 0.0;
  Anqv[158] = 0.0;
  Anqv[159] = -t41;
  Anqv[160] = t40;
  Anqv[161] = -t39;
  Anqv[162] = t42;
  tmp_0 = _mm_set_pd(4.3636352726935713E-5, 0.0001032754577185093);
  _mm_storeu_pd(&Anqv[163], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_mul_pd(tmp_1, _mm_set_pd(4.2079285691049859E-5, -0.030270009262121408)),
     _mm_mul_pd(_mm_mul_pd(tmp_4, _mm_set_pd(0.016528998001422841,
    6.2884941489263073E-5)), tmp_8)), _mm_mul_pd(tmp_5, _mm_set_pd
    (0.00283488707941543, 0.0020006959490984312))), _mm_mul_pd(_mm_mul_pd
    (_mm_set1_pd(t4), tmp_0), tmp_i)), _mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_mul_pd(tmp_h, _mm_set_pd(-0.74121409319149256, 1.0571299073092789E-5)),
     _mm_mul_pd(tmp_2, _mm_set_pd(1.0571299073092789E-5, 1.3454180758607359))),
    _mm_mul_pd(_mm_mul_pd(_mm_mul_pd(tmp_5, _mm_set1_pd(t10)), tmp_0), tmp_i)),
    _mm_mul_pd(_mm_set_pd(0.0021390368983792022, 0.0050625224371818262), tmp_i))));
  t23 = in1[12] * t10;
  Anqv[165] = ((((t4 * -5.3885346962112674E-7 - in1[7] * 0.00032422410747795261)
                 - in1[8] * 7.6083411800115719E-5) - t23 * 5.3885346962112674E-7)
               + ((in1[10] * -0.00016269010774240791 - in1[11] *
                   0.000941018323416786) - in1[12] * 2.6641242336162E-6)) -
    2.6414385765741509E-5;
  Anqv[166] = (((in1[10] * 0.0032852614324183722 - in1[11] * 0.291807921220024)
                - in1[12] * 0.00063467747547131872) + ((t4 *
    0.00040656429737222281 + in1[7] * 0.24400486517334929) + in1[8] *
    0.00145353196782447)) + (t23 * 0.00040656429737222281 + 0.019929622420207);
  Anqv[167] = ((((t4 * 1.6384160104928689E-7 - in1[7] * 0.001145088836853196) -
                 in1[8] * 0.1118794885864644) + t23 * 1.6384160104928689E-7) +
               ((in1[10] * 0.76112100692746432 - in1[11] * 0.003324115892995542)
                - in1[12] * 0.005288701994301117)) + 8.0314510318277867E-6;
  Anqv[168] = ((((t4 * -0.054076220260104418 + t57) - t58) - t23 *
                0.054076220260104418) - 2.6507951107894319) + ((in1[10] *
    -6.8948828938803766E-5 + in1[11] * 0.0030111351640179931) + in1[12] *
    1.7711862430984169E-5);
}

//
// File trailer for generated code.
//
// [EOF]
//

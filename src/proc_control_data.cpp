//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control_data.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.202
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Nov 27 16:37:06 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "proc_control.h"

// Block parameters (default storage)
P_proc_control_T proc_control::proc_control_P = {
  // Variable: physics
  //  Referenced by: '<S73>/MATLAB System'

  {
    35.42,
    0.0365,
    998.0,
    9.81,
    0.1435,
    0.3,

    { 0.502, -0.0013, -0.0094, -0.0013, 1.5266, -0.0021, -0.009, -0.0021, 1.6682
    },

    { 0.502, -0.0013, -0.0094, -0.0013, 1.5266, -0.0021, -0.0094, -0.0021,
      1.6682 },

    { 0.0028, 0.0001, 0.0222 },

    { 0.003, -0.0002, 0.021 },

    { 15.0, 20.0, 23.3, 3.33, 2.33, 5.0 },

    { 1.17, 0.82, 0.756, 0.167, 0.1, 0.102 },

    { 0.12, 0.22, 0.292 },

    { -1.4648, -6.6156, -15.7695, -0.1164, -0.3493, -0.3493 },

    { 0.0, -0.136, 0.178 },

    { 0.16, 0.0, 0.155 },

    { 0.2, 0.0, -0.155 },

    { 0.0, 3.1415926535897931, 1.5707963267948966 },

    {
      { 0.292, -0.292, -0.292, 0.292, 0.181, -0.181, -0.181, 0.181, 0.173, 0.173,
        -0.173, -0.173, 0.159, 0.159, -0.159, -0.159, 0.082, 0.082, 0.082, 0.082,
        0.082, 0.082, 0.082, 0.082, -45.0, 45.0, -45.0, 45.0, 0.0, 0.0, 0.0, 0.0,
        -90.0, -90.0, -90.0, -90.0, 0.0, 180.0, 0.0, 180.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0 },

      { 0.292, 0.173, 0.082, -45.0, -90.0, 0.0, -0.292, 0.173, 0.082, 45.0,
        -90.0, 0.0, -0.292, -0.173, 0.082, -45.0, -90.0, 0.0, 0.292, -0.173,
        0.082, 45.0, -90.0, 0.0, 0.181, 0.159, 0.082, 0.0, 0.0, 0.0, -0.181,
        0.159, 0.082, 0.0, 180.0, 0.0, -0.181, -0.159, 0.082, 0.0, 0.0, 0.0,
        0.181, -0.159, 0.082, 0.0, 180.0, 0.0 },
      0.1,
      -0.81873075307798182,
      0.18126924692201818
    }
  },

  // Variable: mode
  //  Referenced by: '<S45>/MATLAB System'

  {
    0.0,

    {
      { 10.0, 11.0, 19.0, 31.0 },

      { 20.0, 21.0 },
      30.0,
      31.0,
      40.0,
      41.0
    },

    {
      10.0,

      { 11.0, 30.0, 31.0, 40.0, 41.0 },

      { 19.0, 20.0, 21.0 }
    }
  },

  // Variable: N
  //  Referenced by:
  //    '<S70>/N to A'
  //    '<S70>/n-D Lookup Table1'

  { -39.921561783600005, -39.7361560536, -39.4691718024, -38.8907059248,
    -38.267742672, -37.956261045599994, -37.5112872936, -37.288800417600008,
    -36.7993292904, -36.4433502888, -35.8648844112, -35.1974237832,
    -34.5299631552, -33.8625025272, -33.328534024800007, -32.483083896000004,
    -31.9046180184, -31.4151468912, -30.480702012000002, -29.813241384,
    -29.368267632, -28.834299129600005, -28.077843751199996, -27.6773673744,
    -27.1878962472, -26.5649329944, -26.075461867200005, -25.319006488800007,
    -25.0075248624, -24.6070484856, -24.073079983200003, -23.361121980000004,
    -23.094137728800003, -22.337682350399998, -21.937205973599998,
    -21.5367295968, -20.780274218400002, -20.4242952168, -19.8458293392,
    -19.400855587200002, -19.0448765856, -18.243923832, -17.79895008,
    -17.309478952800003, -16.6865157, -16.375034073600002, -15.796568196,
    -15.262599693600002, -14.8621233168, -14.5951390656, -14.1056679384,
    -13.705191561600001, -13.215720434400001, -12.7707466824, -12.3257729304,
    -11.791804428, -11.3913280512, -10.9908516744, -10.812862173600001,
    -10.3233910464, -10.011909420000002, -9.6114330432000017, -9.2554540416,
    -8.8549776648, -8.5434960384, -8.0540249112, -7.6980459095999993,
    -7.2975695328, -7.0305852816000005, -6.67460628, -6.3631246536,
    -6.0516430272000008, -5.6956640256, -5.2951876488, -5.0282033976,
    -4.7167217712000005, -4.3607427696, -4.0937585184000005, -3.782276892,
    -3.4707952656000005, -3.1593136392, -2.8923293880000003, -2.5363503863999997,
    -2.3138635104, -2.0468792592000002, -1.7798950080000002, -1.4684133816000002,
    -1.2459265056000004, -1.0234396296000001, -0.84545012880000014, -0.667460628,
    -0.4894711272, -0.3559790016, -0.0007, -0.0006, -0.0005, -0.0004, -0.0003,
    -0.0002, -0.0001, 0.0, 0.0001, 0.0002, 0.0003, 0.0004, 0.0005, 0.0006,
    0.0007, 0.4004763768, 0.5339685024, 0.7564553784000001, 0.9789422544,
    1.2459265056, 1.5129107568, 1.779895008, 2.1358740096, 2.4473556359999997,
    2.8478320128, 3.1593136392, 3.5152926408000003, 3.9157690176, 4.2717480192,
    4.6277270208, 5.0282033976, 5.4731771496, 5.9181509016, 6.2741299032,
    6.67460628, 7.0750826568, 7.6090511592000007, 8.009527536, 8.5434960384,
    8.89947504, 9.299951416799999, 9.7449251688, 10.145401545599999,
    10.7683647984, 11.213338550400001, 11.6138149272, 12.1477834296,
    12.5482598064, 13.037730933600002, 13.6161968112, 14.1056679384,
    14.5506416904, 15.084610192800001, 15.574081320000001, 16.197044572800003,
    16.5975209496, 17.2649815776, 17.887944830400002, 18.421913332800003,
    18.955881835200003, 19.534347712800002, 20.068316215200003,
    20.824771593600005, 21.358740096000005, 21.759216472800002,
    22.337682350400005, 23.361121980000004, 23.8505931072, 24.696043236000005,
    25.274509113600004, 26.030964492000006, 26.787419870400004,
    27.054404121600005, 27.855356875200005, 28.3448280024, 29.190278131200003,
    29.9467335096, 30.480702012000005, 31.103665264800004, 31.548639016800003,
    32.394089145600006, 33.1060471488, 33.5510209008, 34.4409684048,
    35.375413284000004, 36.1318686624, 36.6658371648, 37.4667899184,
    38.134250546400004, 38.801711174400005, 39.825150804, 40.670600932800006,
    41.738537937600007, 42.228009064800005, 42.984464443200004,
    44.230390948800007, 44.4083804496, 45.609809580000004, 46.188275457600007,
    46.944730836000005, 47.434201963199996, 48.368646842400004,
    49.169599596000005, 49.7925628488, 50.4600234768, 50.771505103200006,
    51.2164788552, 51.4537981896 },

  // Variable: binv
  //  Referenced by: '<S73>/MATLAB System'

  { 0.3536294235804977, 0.35362942358049776, 0.35347735760604904,
    0.35347735760604893, -0.082596685082873031, -0.082596685082872837,
    0.082596685082872726, 0.082596685082873017, -0.35568231423555624,
    0.35142446695099122, -0.351424466950991, 0.35568231423555613,
    -0.0940251572327045, 0.094025157232704409, 0.094025157232704562,
    -0.0940251572327043, -2.7916987706326951E-17, -7.0001962863246363E-18,
    9.1761937789952957E-17, 1.5050203754637648E-17, -0.25402463601931968,
    0.24628982938948552, -0.24597536398068048, 0.25371017061051454,
    5.7789095089493325E-16, -4.9982206549614118E-16, 4.3462500735056523E-16,
    -5.2186312597082734E-16, -1.572327044025158, 1.5723270440251578,
    1.5723270440251575, -1.5723270440251582, 4.7217365889951761E-16,
    -5.371931861074821E-16, -8.0750570199894264E-16, 8.1106126261044317E-16,
    1.381215469613259, 1.3812154696132597, -1.381215469613259,
    -1.3812154696132595, -0.76032987224359927, -0.76032987224359927,
    0.76032987224359938, 0.76032987224359916, -6.15079078863519E-19,
    -2.98904026077196E-16, -2.3443333774644704E-17, 2.13424102270383E-16 },

  // Variable: A
  //  Referenced by: '<S70>/N to A'

  { 24U, 24U, 24U, 23U, 23U, 22U, 21U, 21U, 20U, 20U, 19U, 19U, 18U, 18U, 17U,
    16U, 16U, 15U, 15U, 14U, 14U, 14U, 13U, 13U, 12U, 12U, 12U, 11U, 11U, 11U,
    10U, 10U, 10U, 9U, 9U, 9U, 8U, 8U, 8U, 7U, 7U, 7U, 6U, 6U, 6U, 6U, 5U, 5U,
    5U, 5U, 4U, 4U, 4U, 4U, 4U, 3U, 3U, 3U, 3U, 3U, 2U, 2U, 2U, 2U, 2U, 2U, 2U,
    2U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 1U, 1U, 1U,
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 3U, 3U, 3U,
    3U, 3U, 4U, 4U, 4U, 4U, 4U, 5U, 5U, 5U, 5U, 5U, 6U, 6U, 6U, 6U, 7U, 7U, 7U,
    8U, 8U, 8U, 9U, 9U, 9U, 10U, 10U, 10U, 11U, 11U, 11U, 12U, 12U, 12U, 13U,
    13U, 14U, 14U, 14U, 15U, 15U, 16U, 16U, 17U, 17U, 18U, 19U, 19U, 20U, 20U,
    21U, 21U, 22U, 22U, 23U, 23U, 24U, 24U },

  // Variable: PWM
  //  Referenced by: '<S70>/n-D Lookup Table1'

  { 1100U, 1104U, 1108U, 1112U, 1116U, 1120U, 1124U, 1128U, 1132U, 1136U, 1140U,
    1144U, 1148U, 1152U, 1156U, 1160U, 1164U, 1168U, 1172U, 1176U, 1180U, 1184U,
    1188U, 1192U, 1196U, 1200U, 1204U, 1208U, 1212U, 1216U, 1220U, 1224U, 1228U,
    1232U, 1236U, 1240U, 1244U, 1248U, 1252U, 1256U, 1260U, 1264U, 1268U, 1272U,
    1276U, 1280U, 1284U, 1288U, 1292U, 1296U, 1300U, 1304U, 1308U, 1312U, 1316U,
    1320U, 1324U, 1328U, 1332U, 1336U, 1340U, 1344U, 1348U, 1352U, 1356U, 1360U,
    1364U, 1368U, 1372U, 1376U, 1380U, 1384U, 1388U, 1392U, 1396U, 1400U, 1404U,
    1408U, 1412U, 1416U, 1420U, 1424U, 1428U, 1432U, 1436U, 1440U, 1444U, 1448U,
    1452U, 1456U, 1460U, 1464U, 1468U, 1472U, 1476U, 1480U, 1484U, 1488U, 1492U,
    1496U, 1500U, 1504U, 1508U, 1512U, 1516U, 1520U, 1524U, 1528U, 1532U, 1536U,
    1540U, 1544U, 1548U, 1552U, 1556U, 1560U, 1564U, 1568U, 1572U, 1576U, 1580U,
    1584U, 1588U, 1592U, 1596U, 1600U, 1604U, 1608U, 1612U, 1616U, 1620U, 1624U,
    1628U, 1632U, 1636U, 1640U, 1644U, 1648U, 1652U, 1656U, 1660U, 1664U, 1668U,
    1672U, 1676U, 1680U, 1684U, 1688U, 1692U, 1696U, 1700U, 1704U, 1708U, 1712U,
    1716U, 1720U, 1724U, 1728U, 1732U, 1736U, 1740U, 1744U, 1748U, 1752U, 1756U,
    1760U, 1764U, 1768U, 1772U, 1776U, 1780U, 1784U, 1788U, 1792U, 1796U, 1800U,
    1804U, 1808U, 1812U, 1816U, 1820U, 1824U, 1828U, 1832U, 1836U, 1840U, 1844U,
    1848U, 1852U, 1856U, 1860U, 1864U, 1868U, 1872U, 1876U, 1880U, 1884U, 1888U,
    1892U, 1896U, 1900U },

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S145>/UD'

  0.0,

  // Mask Parameter: MinMaxRunningResettable_vinit
  //  Referenced by:
  //    '<S36>/Initial Condition'
  //    '<S36>/Memory'

  false,

  // Mask Parameter: MinMaxRunningResettable1_vinit
  //  Referenced by:
  //    '<S37>/Initial Condition'
  //    '<S37>/Memory'

  false,

  // Mask Parameter: DetectRisePositive_vinit
  //  Referenced by: '<S240>/Delay Input1'

  false,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S174>/Out1'

  {
    {
      {
        {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        } }
      ,                                // dim

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // dim_SL_Info
      0U                               // data_offset
    },                                 // layout

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // data

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    }                                  // data_SL_Info
  },

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S172>/Constant'

  {
    {
      {
        {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // label_SL_Info
          0U,                          // size
          0U                           // stride
        } }
      ,                                // dim

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // dim_SL_Info
      0U                               // data_offset
    },                                 // layout

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // data

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    }                                  // data_SL_Info
  },

  // Computed Parameter: Constant_Value_k
  //  Referenced by: '<S22>/Constant'

  {
    false,                             // is_mpc_alive
    false,                             // target_reached
    false,                             // is_trajectory_done

    {
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false }
    ,                                  // thrusters_status

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // thrusters_status_SL_Info
    0,                                 // mpc_status
    0U,                                // mpc_mode

    {
      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0 }
      ,                                // ov

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // ov_SL_Info

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0 }
      ,                                // mv

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // mv_SL_Info

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0 }
      ,                                // mvr

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // mvr_SL_Info
      0.0,                             // max_thrust
      0.0                              // min_thrust
    }                                  // current_gains
  },

  // Computed Parameter: Out1_Y0_b
  //  Referenced by: '<S173>/Out1'

  {
    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // ov

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // ov_SL_Info

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // mv

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // mv_SL_Info

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // mvr

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // mvr_SL_Info
    0.0,                               // max_thrust
    0.0                                // min_thrust
  },

  // Computed Parameter: Constant_Value_h
  //  Referenced by: '<S171>/Constant'

  {
    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // ov

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // ov_SL_Info

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // mv

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // mv_SL_Info

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // mvr

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // mvr_SL_Info
    0.0,                               // max_thrust
    0.0                                // min_thrust
  },

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S248>/Out1'

  {
    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      } }
    ,                                  // transforms

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // transforms_SL_Info

    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      } }
    ,                                  // velocities

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // velocities_SL_Info

    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      } }
    ,                                  // accelerations

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // accelerations_SL_Info

    {
      0,                               // sec
      0U                               // nanosec
    }                                  // time_from_start
  },

  // Computed Parameter: Constant_Value_g
  //  Referenced by: '<S247>/Constant'

  {
    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // translation

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // rotation
      } }
    ,                                  // transforms

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // transforms_SL_Info

    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      } }
    ,                                  // velocities

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // velocities_SL_Info

    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      }, {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      } }
    ,                                  // accelerations

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // accelerations_SL_Info

    {
      0,                               // sec
      0U                               // nanosec
    }                                  // time_from_start
  },

  // Computed Parameter: mpcParams_Y0
  //  Referenced by: '<S44>/mpcParams'

  {
    {
      {
        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        ,                              // OV

        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        ,                              // MV

        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        // MVR
      },                               // predefined

      {
        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        ,                              // OV

        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        ,                              // MV

        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        // MVR
      },                               // c10

      {
        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        ,                              // OV

        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        ,                              // MV

        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        // MVR
      },                               // c11

      {
        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        ,                              // OV

        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        ,                              // MV

        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        // MVR
      },                               // c19

      {
        {
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
        // MV
      },                               // noDvl
      0.0,                             // p
      0.0,                             // m
      0.0,                             // tmax
      0.0                              // tmin
    },                                 // gains

    {
      0.0,                             // linearTol
      0.0,                             // angularTol
      0.0                              // timeInTol
    }                                  // targetReached
  },

  // Computed Parameter: Constant_Value_g3
  //  Referenced by: '<S12>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // child_frame_id

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // child_frame_id_SL_Info

    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // position

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // orientation
      },                               // pose

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // covariance
    },                                 // pose

    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      },                               // twist

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // covariance
    }                                  // twist
  },

  // Computed Parameter: Constant_Value_f
  //  Referenced by: '<S109>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // child_frame_id

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // child_frame_id_SL_Info

    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // position

        {
          0.0,                         // x
          0.0,                         // y
          0.0,                         // z
          0.0                          // w
        }                              // orientation
      },                               // pose

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // covariance
    },                                 // pose

    {
      {
        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        },                             // linear

        {
          0.0,                         // x
          0.0,                         // y
          0.0                          // z
        }                              // angular
      },                               // twist

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // covariance
    }                                  // twist
  },

  // Computed Parameter: physicsConstants_Y0
  //  Referenced by: '<S44>/physicsConstants'

  {
    0.0,                               // rho
    0.0,                               // g
    0.0,                               // mass
    0.0,                               // volume
    0.0,                               // sub_height

    {
      0.0, 0.0, 0.0 }
    ,                                  // rg

    {
      0.0, 0.0, 0.0 }
    ,                                  // rb

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // cdl

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // cdq

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // added_mass

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // I

    {
      0.0, 0.0, 0.0 }
    ,                                  // depth_pose

    {
      0.0, 0.0, 0.0 }
    ,                                  // hydro_pose

    {
      0.0, 0.0, 0.0 }
    ,                                  // sonar_pose

    {
      0.0, 0.0, 0.0 }
    ,                                  // dvl_rotation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0 }
    ,                                  // thrusters
    0.0                                // dvl_lost_override
  },

  // Computed Parameter: Out1_Y0_no
  //  Referenced by: '<S41>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    },                                 // orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // orientation_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // angular_velocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // angular_velocity_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear_acceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // linear_acceleration_covariance
  },

  // Computed Parameter: Constant_Value_i
  //  Referenced by: '<S38>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    },                                 // orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // orientation_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // angular_velocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // angular_velocity_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear_acceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // linear_acceleration_covariance
  },

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S30>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    },                                 // orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // orientation_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // angular_velocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // angular_velocity_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear_acceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // linear_acceleration_covariance
  },

  // Computed Parameter: Constant_Value_j
  //  Referenced by: '<S27>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    },                                 // orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // orientation_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // angular_velocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // angular_velocity_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear_acceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // linear_acceleration_covariance
  },

  // Computed Parameter: MPCparam_Y0
  //  Referenced by: '<S69>/MPC param'

  {
    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // mvmin

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // mvmax

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // ywt

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // mvwt

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // dmwwt

    {
      false, false, false, false, false, false, false, false }
    ,                                  // thrustersStatus
    false,                             // kill
    0.0,                               // p
    0.0                                // m
  },

  // Computed Parameter: Out1_Y0_p
  //  Referenced by: '<S42>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0.0,                               // x_vel_btm
    0.0,                               // y_vel_btm
    0.0,                               // z_vel_btm
    0.0,                               // e_vel_btm
    0.0,                               // velocity1
    0.0,                               // velocity2
    0.0,                               // velocity3
    0.0                                // velocity4
  },

  // Computed Parameter: Constant_Value_e
  //  Referenced by: '<S39>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0.0,                               // x_vel_btm
    0.0,                               // y_vel_btm
    0.0,                               // z_vel_btm
    0.0,                               // e_vel_btm
    0.0,                               // velocity1
    0.0,                               // velocity2
    0.0,                               // velocity3
    0.0                                // velocity4
  },

  // Computed Parameter: Out1_Y0_g
  //  Referenced by: '<S31>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0.0,                               // x_vel_btm
    0.0,                               // y_vel_btm
    0.0,                               // z_vel_btm
    0.0,                               // e_vel_btm
    0.0,                               // velocity1
    0.0,                               // velocity2
    0.0,                               // velocity3
    0.0                                // velocity4
  },

  // Computed Parameter: Constant_Value_p
  //  Referenced by: '<S28>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0.0,                               // x_vel_btm
    0.0,                               // y_vel_btm
    0.0,                               // z_vel_btm
    0.0,                               // e_vel_btm
    0.0,                               // velocity1
    0.0,                               // velocity2
    0.0,                               // velocity3
    0.0                                // velocity4
  },

  // Computed Parameter: Output_Y0
  //  Referenced by: '<S1>/Output'

  {
    {
      0.0, 0.0, 0.0 }
    ,                                  // WorldPosition

    {
      0.0, 0.0, 0.0, 0.0 }
    ,                                  // qS2W

    {
      0.0, 0.0, 0.0, 0.0 }
    ,                                  // qW2S

    {
      0.0, 0.0, 0.0 }
    ,                                  // Body_Velocity

    {
      0.0, 0.0, 0.0 }
    // Angular_Rate
  },

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S255>/Out1'

  {
    0U,                                // frame
    0U,                                // speed

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // position

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // orientation
    0.0,                               // fine
    false                              // rotation
  },

  // Computed Parameter: Constant_Value_f4
  //  Referenced by: '<S252>/Constant'

  {
    0U,                                // frame
    0U,                                // speed

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // position

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // orientation
    0.0,                               // fine
    false                              // rotation
  },

  // Computed Parameter: Out1_Y0_a
  //  Referenced by: '<S64>/Out1'

  {
    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // position

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    }                                  // orientation
  },

  // Computed Parameter: Constant_Value_ja
  //  Referenced by: '<S58>/Constant'

  {
    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // position

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    }                                  // orientation
  },

  // Computed Parameter: DVLMeasurements_Y0
  //  Referenced by: '<S177>/DVL Measurements'

  {
    {
      0.0, 0.0, 0.0 }
    ,                                  // Body_Velocity

    {
      0.0, 0.0, 0.0 }
    ,                                  // error
    0.0                                // enable
  },

  // Computed Parameter: Out1_Y0_f
  //  Referenced by: '<S246>/Out1'

  {
    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    }                                  // angular
  },

  // Computed Parameter: Constant_Value_o
  //  Referenced by: '<S245>/Constant'

  {
    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    }                                  // angular
  },

  // Computed Parameter: Out1_Y0_o
  //  Referenced by: '<S63>/Out1'

  {
    false                              // status
  },

  // Computed Parameter: Constant_Value_eb
  //  Referenced by: '<S57>/Constant'

  {
    false                              // status
  },

  // Computed Parameter: Constant_Value_c
  //  Referenced by: '<S10>/Constant'

  {
    false                              // data
  },

  // Computed Parameter: Out1_Y0_e
  //  Referenced by: '<S65>/Out1'

  {
    false                              // data
  },

  // Computed Parameter: Out1_Y0_dr
  //  Referenced by: '<S66>/Out1'

  {
    false                              // data
  },

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S67>/Out1'

  {
    false                              // data
  },

  // Computed Parameter: Constant_Value_oy
  //  Referenced by: '<S61>/Constant'

  {
    false                              // data
  },

  // Computed Parameter: Constant_Value_oc
  //  Referenced by: '<S59>/Constant'

  {
    false                              // data
  },

  // Computed Parameter: Constant_Value_ha
  //  Referenced by: '<S60>/Constant'

  {
    false                              // data
  },

  // Computed Parameter: Out1_Y0_oo
  //  Referenced by: '<S43>/Out1'

  {
    0.0F                               // data
  },

  // Computed Parameter: Constant_Value_d
  //  Referenced by: '<S40>/Constant'

  {
    0.0F                               // data
  },

  // Computed Parameter: Out1_Y0_bc
  //  Referenced by: '<S32>/Out1'

  {
    0.0F                               // data
  },

  // Computed Parameter: Constant_Value_er
  //  Referenced by: '<S29>/Constant'

  {
    0.0F                               // data
  },

  // Computed Parameter: Out1_Y0_fy
  //  Referenced by: '<S62>/Out1'

  {
    0U                                 // data
  },

  // Computed Parameter: Constant_Value_dx
  //  Referenced by: '<S56>/Constant'

  {
    0U                                 // data
  },

  // Expression: InsertTimeStamp
  //  Referenced by: '<S13>/Constant'

  1.0,

  // Expression: SetFrameID
  //  Referenced by: '<S13>/Constant1'

  1.0,

  // Expression: zeros(1, 36)
  //  Referenced by: '<S9>/Constant'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Computed Parameter: thrust_Y0
  //  Referenced by: '<S2>/thrust'

  0.0,

  // Expression: zeros(1,120)
  //  Referenced by: '<S21>/Constant'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,115)
  //  Referenced by: '<S21>/Constant1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,120)
  //  Referenced by: '<S21>/Constant3'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,120)
  //  Referenced by: '<S21>/Constant4'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Computed Parameter: y_Y0
  //  Referenced by: '<S25>/y'

  0.0,

  // Expression: 0
  //  Referenced by: '<S25>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S25>/Constant1'

  0.0,

  // Expression: InsertTimeStamp
  //  Referenced by: '<S110>/Constant'

  1.0,

  // Expression: SetFrameID
  //  Referenced by: '<S110>/Constant1'

  1.0,

  // Expression: zeros(MPC.nu,1)
  //  Referenced by: '<S71>/Delay'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,8)
  //  Referenced by: '<S76>/E_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,13)
  //  Referenced by: '<S76>/F_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S76>/G_zero'

  0.0,

  // Computed Parameter: Constant_Value_aa
  //  Referenced by: '<S79>/Constant'

  10.0,

  // Expression: lastPcov
  //  Referenced by: '<S79>/LastPcov'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S76>/ext.mv_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: RMVscale
  //  Referenced by: '<S79>/ext.mv_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: lastu+uoff
  //  Referenced by: '<S79>/last_mv'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,6)
  //  Referenced by: '<S71>/Constant'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,2)
  //  Referenced by: '<S71>/Constant1'

  { 0.0, 0.0 },

  // Expression: zeros(nym,1)
  //  Referenced by: '<S79>/ym_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S76>/md_zero'

  0.0,

  // Expression: zeros(13,1)
  //  Referenced by: '<S76>/ymin_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S76>/ymax_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: MVscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S79>/umin_scale4'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: Yscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S79>/ymin_scale1'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S76>/S_zero'

  0.0,

  // Expression: MDscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S79>/ymin_scale2'

  1.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S76>/switch_zero'

  0.0,

  // Expression: zeros(8,1)
  //  Referenced by: '<S76>/mv.target_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: RMVscale
  //  Referenced by: '<S79>/uref_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S76>/ecr.wt_zero'

  0.0,

  // Expression: MVscale
  //  Referenced by: '<S79>/u_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: 1
  //  Referenced by: '<S71>/Pulse Generator'

  1.0,

  // Expression: 2
  //  Referenced by: '<S71>/Pulse Generator'

  2.0,

  // Expression: 1
  //  Referenced by: '<S71>/Pulse Generator'

  1.0,

  // Expression: 0
  //  Referenced by: '<S71>/Pulse Generator'

  0.0,

  // Expression: 40
  //  Referenced by: '<S73>/MATLAB System'

  40.0,

  // Expression: 0
  //  Referenced by: '<S73>/Constant1'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S145>/TSamp'

  10.0,

  // Expression: zeros(1,8)
  //  Referenced by: '<S112>/E_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,13)
  //  Referenced by: '<S112>/F_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S112>/G_zero'

  0.0,

  // Expression: lastPcov
  //  Referenced by: '<S115>/LastPcov'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S112>/ext.mv_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: RMVscale
  //  Referenced by: '<S115>/ext.mv_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: lastu+uoff
  //  Referenced by: '<S115>/last_mv'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,8)
  //  Referenced by: '<S72>/Constant2'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(nym,1)
  //  Referenced by: '<S115>/ym_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S112>/md_zero'

  0.0,

  // Expression: zeros(13,1)
  //  Referenced by: '<S112>/ymin_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S112>/ymax_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: MVscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S115>/umin_scale4'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: Yscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S115>/ymin_scale1'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S112>/S_zero'

  0.0,

  // Expression: MDscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S115>/ymin_scale2'

  1.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S112>/switch_zero'

  0.0,

  // Expression: zeros(8,1)
  //  Referenced by: '<S112>/mv.target_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: RMVscale
  //  Referenced by: '<S115>/uref_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S112>/ecr.wt_zero'

  0.0,

  // Expression: zeros(11,8)
  //  Referenced by: '<S72>/Delay1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: repmat(MPC.Xi.',11,1)
  //  Referenced by: '<S72>/Delay'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3,
    0.3, 0.3, 0.3, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: MPC.Ts
  //  Referenced by: '<S72>/Constant'

  0.1,

  // Expression: MPC.dts
  //  Referenced by: '<S72>/Constant1'

  10.0,

  // Expression: MVscale
  //  Referenced by: '<S115>/u_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: MVscale(:,ones(1,p+1))'
  //  Referenced by: '<S115>/useq_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: Yscale(:,ones(1,p+1))'
  //  Referenced by: '<S115>/useq_scale1'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: 1
  //  Referenced by: '<S72>/Pulse Generator'

  1.0,

  // Expression: 2
  //  Referenced by: '<S72>/Pulse Generator'

  2.0,

  // Expression: 1
  //  Referenced by: '<S72>/Pulse Generator'

  1.0,

  // Expression: 0
  //  Referenced by: '<S72>/Pulse Generator'

  0.0,

  // Expression: zeros(MPC.nu,1)
  //  Referenced by: '<S75>/Delay'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S147>/md_zero'

  0.0,

  // Expression: zeros(8,1)
  //  Referenced by: '<S147>/mv.target_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S147>/y.min_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S147>/y.max_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S147>/dmv.min_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S147>/dmv.max_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S147>/x.min_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S147>/x.max_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S147>/ecr.wt_zero'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S147>/params_zero'

  0.0,

  // Expression: ones(PredictionHorizon+1,1)
  //  Referenced by: '<S149>/ones'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: 2:max(2,PredictionHorizon)
  //  Referenced by: '<S149>/Constant1'

  { 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 },

  // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
  //  Referenced by: '<S149>/Constant'

  { 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S147>/e.init_zero'

  0.0,

  // Expression: 1
  //  Referenced by: '<S75>/Pulse Generator'

  1.0,

  // Expression: 20
  //  Referenced by: '<S75>/Pulse Generator'

  20.0,

  // Expression: 10
  //  Referenced by: '<S75>/Pulse Generator'

  10.0,

  // Expression: 0
  //  Referenced by: '<S75>/Pulse Generator'

  0.0,

  // Expression: zeros(1,MPC.nu)
  //  Referenced by: '<S74>/Constant'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S74>/Constant2'

  0.0,

  // Computed Parameter: Quat_Y0
  //  Referenced by: '<S205>/Quat'

  0.0,

  // Expression: 0.5
  //  Referenced by: '<S206>/1//2'

  0.5,

  // Expression: simulation.sensors.dvl.maxSpeedThres
  //  Referenced by: '<S177>/Constant'

  10.0,

  // Expression: 0
  //  Referenced by: '<S202>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S202>/Delay'

  1.0,

  // Expression: 0.5
  //  Referenced by: '<S208>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S208>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S208>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S208>/Gain2'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S209>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S209>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S209>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S209>/Gain2'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S210>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S210>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S210>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S210>/Gain2'

  2.0,

  // Computed Parameter: DepthMeasurements_Y0
  //  Referenced by: '<S178>/Depth Measurements'

  0.0,

  // Expression: 0.5
  //  Referenced by: '<S218>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S218>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S218>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S218>/Gain2'

  2.0,

  // Expression: 1
  //  Referenced by: '<S179>/Constant'

  1.0,

  // Computed Parameter: xhat_Y0
  //  Referenced by: '<S179>/xhat'

  0.0,

  // Expression: p.Q
  //  Referenced by: '<S221>/Q'

  { 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 10.0 },

  // Expression: p.R{3}
  //  Referenced by: '<S221>/R3'

  0.31622776601683794,

  // Expression: 1
  //  Referenced by: '<S221>/MeasurementFcn3Inputs'

  1.0,

  // Expression: p.R{2}
  //  Referenced by: '<S221>/R2'

  { 0.1, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.1 },

  // Expression: 1
  //  Referenced by: '<S221>/MeasurementFcn2Inputs'

  1.0,

  // Expression: p.R{1}
  //  Referenced by: '<S221>/R1'

  { 0.1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.1 },

  // Expression: 0
  //  Referenced by: '<S221>/MeasurementFcn1Inputs'

  0.0,

  // Expression: 0
  //  Referenced by: '<S179>/Switch'

  0.0,

  // Expression: p.InitialCovariance
  //  Referenced by: '<S221>/DataStoreMemory - P'

  { 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    3.1622776601683795 },

  // Expression: p.InitialState
  //  Referenced by: '<S221>/DataStoreMemory - x'

  { 0.0, 0.0, 0.3, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0 0 0 1 0 0 0]
  //  Referenced by: '<S235>/Constant'

  { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 },

  // Expression: MPC.p
  //  Referenced by: '<S235>/Constant1'

  10.0,

  // Computed Parameter: Out1_Y0_j3
  //  Referenced by: '<S249>/Out1'

  0.0,

  // Expression: .25
  //  Referenced by: '<S238>/MATLAB System1'

  0.25,

  // Expression: .22
  //  Referenced by: '<S238>/MATLAB System1'

  0.22,

  // Expression: 2
  //  Referenced by: '<S238>/MATLAB System1'

  2.0,

  // Computed Parameter: linWpts_Y0
  //  Referenced by: '<S250>/linWpts'

  0.0,

  // Computed Parameter: RotWpts_Y0
  //  Referenced by: '<S250>/RotWpts'

  0.0,

  // Computed Parameter: time_Y0
  //  Referenced by: '<S250>/time'

  0.0,

  // Computed Parameter: target_Y0
  //  Referenced by: '<S250>/target'

  0.0,

  // Expression: 0
  //  Referenced by: '<S250>/Constant'

  0.0,

  // Expression: zeros( 3, 2 )
  //  Referenced by: '<S254>/Polynomial Trajectory'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 1
  //  Referenced by: '<S251>/Constant'

  1.0,

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<S251>/Discrete-Time Integrator'

  0.01,

  // Expression: 0
  //  Referenced by: '<S251>/Discrete-Time Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S238>/Constant'

  0.0,

  // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
  //  Referenced by: '<S231>/Constant'

  { 0.0, 0.0, 0.3, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: MPC.p
  //  Referenced by: '<S231>/Constant1'

  10.0,

  // Expression: [0,0,0,0,0,0,0,0]
  //  Referenced by: '<S181>/Delay'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S45>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S3>/Delay'

  0.0,

  // Expression: -1
  //  Referenced by: '<S236>/Gain'

  -1.0,

  // Computed Parameter: Merge_1_InitialOutput
  //  Referenced by: '<S7>/Merge'

  0.0,

  // Computed Parameter: Merge_1_InitialOutput_i
  //  Referenced by: '<S68>/Merge'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S70>/Delay'

  0.0,

  // Computed Parameter: Merge_3_InitialOutput
  //  Referenced by: '<S68>/Merge'

  0.0,

  // Computed Parameter: Merge_4_InitialOutput
  //  Referenced by: '<S7>/Merge'

  0.0,

  // Expression: FrameID
  //  Referenced by: '<S13>/String Constant1'

  "NED",

  // Expression: FrameID
  //  Referenced by: '<S110>/String Constant1'

  "NED",

  // Expression: Ndis
  //  Referenced by: '<S143>/FixedHorizonOptimizer'

  0,

  // Expression: uint32(MPC.nu)
  //  Referenced by: '<S21>/Constant2'

  8U,

  // Expression: uint32(MPC.nx)
  //  Referenced by: '<S21>/Constant5'

  13U,

  // Expression: uint32(MPC.nu)
  //  Referenced by: '<S21>/Constant6'

  8U,

  // Expression: uint32(MPC.nu)
  //  Referenced by: '<S21>/Constant7'

  8U,

  // Computed Parameter: mv_Y0
  //  Referenced by: '<S2>/mv'

  0U,

  // Computed Parameter: Delay_InitialCondition_e
  //  Referenced by: '<S5>/Delay'

  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  // Expression: iA
  //  Referenced by: '<S79>/Memory'

  { false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false },

  // Expression: iA
  //  Referenced by: '<S115>/Memory'

  { false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false },

  // Computed Parameter: yBlockOrdering_Y0
  //  Referenced by: '<S222>/yBlockOrdering'

  false,

  // Computed Parameter: yBlockOrdering_Y0_l
  //  Referenced by: '<S223>/yBlockOrdering'

  false,

  // Computed Parameter: yBlockOrdering_Y0_h
  //  Referenced by: '<S224>/yBlockOrdering'

  false,

  // Expression: true()
  //  Referenced by: '<S221>/BlockOrdering'

  true,

  // Expression: true()
  //  Referenced by: '<S221>/Enable1'

  true,

  // Expression: true()
  //  Referenced by: '<S221>/Enable3'

  true,

  // Expression: false
  //  Referenced by: '<S235>/Constant2'

  false,

  // Expression: false
  //  Referenced by: '<S235>/Constant3'

  false,

  // Computed Parameter: Constant_Value_pl
  //  Referenced by: '<S241>/Constant'

  false,

  // Computed Parameter: Delay_InitialCondition_az
  //  Referenced by: '<S238>/Delay'

  false,

  // Expression: false
  //  Referenced by: '<S238>/Constant1'

  false,

  // Expression: false
  //  Referenced by: '<S231>/Constant2'

  false,

  // Expression: false
  //  Referenced by: '<S231>/Constant3'

  false,

  // Computed Parameter: Merge_2_InitialOutput
  //  Referenced by: '<S7>/Merge'

  false,

  // Computed Parameter: Merge_3_InitialOutput_i
  //  Referenced by: '<S7>/Merge'

  false,

  // Expression: int8(0)
  //  Referenced by: '<S73>/Constant'

  0,

  // Expression: int8(0)
  //  Referenced by: '<S74>/Constant1'

  0,

  // Computed Parameter: Merge_2_InitialOutput_i
  //  Referenced by: '<S68>/Merge'

  0
};

//
// File trailer for generated code.
//
// [EOF]
//

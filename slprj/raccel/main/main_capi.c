#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "main_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "main.h"
#include "main_capi.h"
#include "main_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 9 , TARGET_STRING (
"main/R2D2.1/look ahead" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1
, 0 , TARGET_STRING ( "main/Thrusters/  " ) , TARGET_STRING (
"4 thruster \ncommands" ) , 0 , 0 , 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"main/add noise/Sum" ) , TARGET_STRING ( "measurement" ) , 0 , 0 , 2 , 0 , 0
} , { 3 , 0 , TARGET_STRING ( "main/estimated state/scaling gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"main/noisy measurement/scaling gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 ,
0 , 0 } , { 5 , 19 , TARGET_STRING ( "main/state preprocessing/world 2 body2"
) , TARGET_STRING ( "velocity" ) , 0 , 0 , 2 , 0 , 1 } , { 6 , 0 ,
TARGET_STRING ( "main/state preprocessing/Sum" ) , TARGET_STRING (
"velocity error\n(body-fixed frame)" ) , 0 , 0 , 2 , 0 , 0 } , { 7 , 0 ,
TARGET_STRING ( "main/state preprocessing/Sum3" ) , TARGET_STRING (
"velocity error \n(world-fixed frame)" ) , 0 , 0 , 2 , 0 , 0 } , { 8 , 0 ,
TARGET_STRING ( "main/Extended Kalman Filter/Kalman Filter/IC" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/IC1" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Rate Transition2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 11 , 8 , TARGET_STRING (
"main/Extended Kalman Filter/input linearization/body 2 world 1" ) ,
TARGET_STRING ( "force" ) , 0 , 0 , 2 , 0 , 0 } , { 12 , 10 , TARGET_STRING (
"main/R2D2.1/traj generator/trajectory gens" ) , TARGET_STRING ( "" ) , 2 , 0
, 4 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"main/Thrusters/compute additional pitch error/Abs" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"main/Thrusters/compute additional pitch error/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 4 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"main/Thrusters/compute pitch error/Sum1" ) , TARGET_STRING ( "pitch error" )
, 0 , 0 , 4 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"main/Thrusters/low-level PID/gain scaling" ) , TARGET_STRING ( "" ) , 0 , 0
, 4 , 0 , 2 } , { 17 , 11 , TARGET_STRING (
"main/X-Wing Model/X-wing Model/forward dynamic" ) , TARGET_STRING ( "dnu" )
, 0 , 0 , 2 , 0 , 0 } , { 18 , 12 , TARGET_STRING (
"main/X-Wing Model/X-wing Model/velocity transformation" ) , TARGET_STRING (
"v" ) , 0 , 0 , 2 , 0 , 0 } , { 19 , 15 , TARGET_STRING (
"main/add noise/Measurement Noise/Gaussian Noise" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"main/add noise/Measurement Noise/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 5
, 0 , 2 } , { 21 , 1 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/CalculatePL" ) ,
TARGET_STRING ( "" ) , 3 , 0 , 6 , 0 , 3 } , { 22 , 13 , TARGET_STRING (
"main/X-Wing Model/gravitational force/Subsystem/Gravitational Force" ) ,
TARGET_STRING ( "z-axis \ngravitational force" ) , 0 , 0 , 4 , 0 , 0 } , { 23
, 0 , TARGET_STRING (
"main/Electromagnet Gyro/Gyros PID/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"main/Electromagnet Gyro/Gyros PID/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
 "main/Electromagnet Gyro/Gyros PID/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
 "main/Electromagnet Gyro/Gyros PID/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 27 , 1 , TARGET_STRING (
 "main/Extended Kalman Filter/Kalman Filter/Kalman Filter/CalculatePL/Discrete-Time SqrtKF - Calculate SLMZ"
) , TARGET_STRING ( "" ) , 3 , 0 , 6 , 0 , 3 } , { 28 , 4 , TARGET_STRING (
 "main/Extended Kalman Filter/Kalman Filter/Kalman Filter/Observer/MeasurementUpdate"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 29 , 0 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/Observer/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 30 , 6 , TARGET_STRING (
 "main/Extended Kalman Filter/Kalman Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 31 , 0 , TARGET_STRING (
 "main/Extended Kalman Filter/Kalman Filter/Kalman Filter/UseCurrentEstimator/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 32 , 0 , TARGET_STRING (
"main/Repulsorlift/Repulsorlift PID/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
 "main/Repulsorlift/Repulsorlift PID/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"main/Thrusters/low-level PID/gain adaptation/if = 6/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 0 } , { 35 , 4 , TARGET_STRING (
 "main/Extended Kalman Filter/Kalman Filter/Kalman Filter/Observer/MeasurementUpdate/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 36 , 6 , TARGET_STRING (
 "main/Extended Kalman Filter/Kalman Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 37 , 0 , TARGET_STRING (
 "main/Thrusters/additional pitch PID/pitch PID1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
 "main/Thrusters/additional pitch PID/pitch PID1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"main/Thrusters/low-level PID/forward PID/I Gain/External Parameters/IProd Out"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"main/Thrusters/low-level PID/forward PID/N Gain/External Parameters/NProd Out"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"main/Thrusters/low-level PID/pitch PID/I Gain/External Parameters/IProd Out"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"main/Thrusters/low-level PID/pitch PID/N Gain/External Parameters/NProd Out"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"main/Thrusters/low-level PID/yaw PID/I Gain/External Parameters/IProd Out" )
, TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
"main/Thrusters/low-level PID/yaw PID/N Gain/External Parameters/NProd Out" )
, TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL )
, 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 45 , TARGET_STRING ( "main/Data Store Memory" ) ,
TARGET_STRING ( "InitialValue" ) , 0 , 4 , 0 } , { 46 , TARGET_STRING (
"main/Electromagnet Gyro/Gyros PID" ) , TARGET_STRING ( "P" ) , 0 , 4 , 0 } ,
{ 47 , TARGET_STRING ( "main/Electromagnet Gyro/Gyros PID" ) , TARGET_STRING
( "I" ) , 0 , 4 , 0 } , { 48 , TARGET_STRING (
"main/Electromagnet Gyro/Gyros PID" ) , TARGET_STRING ( "D" ) , 0 , 4 , 0 } ,
{ 49 , TARGET_STRING ( "main/Electromagnet Gyro/Gyros PID" ) , TARGET_STRING
( "N" ) , 0 , 4 , 0 } , { 50 , TARGET_STRING (
"main/Electromagnet Gyro/Gyros PID" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 4 , 0 } , { 51 , TARGET_STRING (
"main/Electromagnet Gyro/Gyros PID" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 4 , 0 } , { 52 , TARGET_STRING (
"main/Electromagnet Gyro/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 4 , 0
} , { 53 , TARGET_STRING ( "main/Electromagnet Gyro/directional constrain" )
, TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 54 , TARGET_STRING (
"main/Electromagnet Gyro/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , {
55 , TARGET_STRING ( "main/R2D2.1/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 4 , 0 } , { 56 , TARGET_STRING ( "main/R2D2.1/Saturation" ) , TARGET_STRING
( "UpperLimit" ) , 0 , 4 , 0 } , { 57 , TARGET_STRING (
"main/R2D2.1/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 4 , 0 } , {
58 , TARGET_STRING ( "main/R2D2.1/Saturation1" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 4 , 0 } , { 59 , TARGET_STRING (
"main/R2D2.1/Saturation1" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 4 , 0 } ,
{ 60 , TARGET_STRING ( "main/Repulsorlift/Repulsorlift PID" ) , TARGET_STRING
( "P" ) , 0 , 4 , 0 } , { 61 , TARGET_STRING (
"main/Repulsorlift/Repulsorlift PID" ) , TARGET_STRING ( "I" ) , 0 , 4 , 0 }
, { 62 , TARGET_STRING ( "main/Repulsorlift/Repulsorlift PID" ) ,
TARGET_STRING ( "D" ) , 0 , 4 , 0 } , { 63 , TARGET_STRING (
"main/Repulsorlift/Repulsorlift PID" ) , TARGET_STRING ( "N" ) , 0 , 4 , 0 }
, { 64 , TARGET_STRING ( "main/Repulsorlift/Repulsorlift PID" ) ,
TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 4 , 0 } , { 65 ,
TARGET_STRING ( "main/Repulsorlift/Repulsorlift PID" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 4 , 0 } , { 66 , TARGET_STRING (
"main/Repulsorlift/directional constrain" ) , TARGET_STRING ( "Value" ) , 0 ,
2 , 0 } , { 67 , TARGET_STRING ( "main/Repulsorlift/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 68 , TARGET_STRING (
"main/Repulsorlift/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 4 , 0
} , { 69 , TARGET_STRING ( "main/Repulsorlift/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 4 , 0 } , { 70 , TARGET_STRING ( "main/Thrusters/Kd" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 71 , TARGET_STRING (
"main/Thrusters/Ki" ) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 72 ,
TARGET_STRING ( "main/Thrusters/Kp" ) , TARGET_STRING ( "Value" ) , 0 , 4 , 0
} , { 73 , TARGET_STRING ( "main/Thrusters/N" ) , TARGET_STRING ( "Value" ) ,
0 , 4 , 0 } , { 74 , TARGET_STRING ( "main/Thrusters/selection matrix" ) ,
TARGET_STRING ( "Value" ) , 0 , 7 , 0 } , { 75 , TARGET_STRING (
"main/Thrusters/thrust matrix" ) , TARGET_STRING ( "Value" ) , 0 , 8 , 0 } ,
{ 76 , TARGET_STRING ( "main/Thrusters/Gain" ) , TARGET_STRING ( "Gain" ) , 0
, 4 , 0 } , { 77 , TARGET_STRING ( "main/X-Wing Model/innertia <kg m2>" ) ,
TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 78 , TARGET_STRING (
"main/X-Wing Model/mass <kg>" ) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , {
79 , TARGET_STRING ( "main/estimated state/scaling gain" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 80 , TARGET_STRING (
"main/noisy measurement/scaling gain" ) , TARGET_STRING ( "Gain" ) , 0 , 4 ,
0 } , { 81 , TARGET_STRING ( "main/Extended Kalman Filter/Kalman Filter/IC" )
, TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 82 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/IC1" ) , TARGET_STRING ( "Value" )
, 0 , 2 , 0 } , { 83 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Rate Transition2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 84 , TARGET_STRING (
"main/R2D2.1/traj generator/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 4 , 0 } , { 85 , TARGET_STRING (
"main/Thrusters/additional pitch PID/pitch PID1" ) , TARGET_STRING ( "P" ) ,
0 , 4 , 0 } , { 86 , TARGET_STRING (
"main/Thrusters/additional pitch PID/pitch PID1" ) , TARGET_STRING ( "I" ) ,
0 , 4 , 0 } , { 87 , TARGET_STRING (
"main/Thrusters/additional pitch PID/pitch PID1" ) , TARGET_STRING ( "D" ) ,
0 , 4 , 0 } , { 88 , TARGET_STRING (
"main/Thrusters/additional pitch PID/pitch PID1" ) , TARGET_STRING ( "N" ) ,
0 , 4 , 0 } , { 89 , TARGET_STRING (
"main/Thrusters/additional pitch PID/pitch PID1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 4 , 0 } , { 90 , TARGET_STRING (
"main/Thrusters/additional pitch PID/pitch PID1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 4 , 0 } , { 91 , TARGET_STRING (
"main/Thrusters/additional pitch PID/Gain1" ) , TARGET_STRING ( "Gain" ) , 0
, 4 , 0 } , { 92 , TARGET_STRING (
"main/Thrusters/compute additional pitch error/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 4 , 0 } , { 93 , TARGET_STRING (
"main/Thrusters/compute additional pitch error/Saturation" ) , TARGET_STRING
( "UpperLimit" ) , 0 , 4 , 0 } , { 94 , TARGET_STRING (
"main/Thrusters/compute additional pitch error/Saturation" ) , TARGET_STRING
( "LowerLimit" ) , 0 , 4 , 0 } , { 95 , TARGET_STRING (
"main/Thrusters/compute additional pitch error/Switch" ) , TARGET_STRING (
"Threshold" ) , 0 , 4 , 0 } , { 96 , TARGET_STRING (
"main/Thrusters/compute pitch error/Constant2" ) , TARGET_STRING ( "Value" )
, 0 , 4 , 0 } , { 97 , TARGET_STRING (
"main/Thrusters/low-level PID/forward PID" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 4 , 0 } , { 98 , TARGET_STRING (
"main/Thrusters/low-level PID/forward PID" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 4 , 0 } , { 99 , TARGET_STRING (
"main/Thrusters/low-level PID/pitch PID" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 4 , 0 } , { 100 , TARGET_STRING (
"main/Thrusters/low-level PID/pitch PID" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 4 , 0 } , { 101 , TARGET_STRING (
"main/Thrusters/low-level PID/yaw PID" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 4 , 0 } , { 102 , TARGET_STRING (
"main/Thrusters/low-level PID/yaw PID" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 4 , 0 } , { 103 , TARGET_STRING (
"main/Thrusters/low-level PID/gain scaling" ) , TARGET_STRING ( "Gain" ) , 0
, 4 , 0 } , { 104 , TARGET_STRING ( "main/X-Wing Model/X-wing Model/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 105 , TARGET_STRING (
"main/X-Wing Model/X-wing Model/angular velocity integrater" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 106 , TARGET_STRING (
"main/X-Wing Model/X-wing Model/linear pose integrater" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 2 , 0 } , { 107 , TARGET_STRING (
"main/add noise/Measurement Noise/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 108 , TARGET_STRING ( "main/add noise/Measurement Noise/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 109 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/Enable" ) ,
TARGET_STRING ( "Value" ) , 1 , 4 , 0 } , { 110 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/P0" ) ,
TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 111 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/X0" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 112 , TARGET_STRING (
"main/Thrusters/low-level PID/gain adaptation/initial gain" ) , TARGET_STRING
( "Value" ) , 0 , 4 , 0 } , { 113 , TARGET_STRING (
"main/Thrusters/low-level PID/gain adaptation/final gain" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 114 , TARGET_STRING (
"main/X-Wing Model/gravitational force/Subsystem/directional constrain" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 115 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/ReducedQRN/Bbar_" )
, TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 116 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/ReducedQRN/Qbar_" )
, TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 117 , TARGET_STRING (
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/ReducedQRN/Rbar_" )
, TARGET_STRING ( "Value" ) , 0 , 11 , 0 } , { 118 , TARGET_STRING (
"main/Thrusters/low-level PID/gain adaptation/if = 6/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 119 , TARGET_STRING (
"main/Thrusters/low-level PID/gain adaptation/if = 6/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 120 , TARGET_STRING (
"main/Thrusters/low-level PID/gain adaptation/if = 6/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 121 , TARGET_STRING (
"main/Thrusters/low-level PID/gain adaptation/if = 6/Switch" ) ,
TARGET_STRING ( "Threshold" ) , 0 , 4 , 0 } , { 122 , TARGET_STRING (
 "main/Extended Kalman Filter/Kalman Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/isSqrtUsed"
) , TARGET_STRING ( "Value" ) , 1 , 4 , 0 } , { 123 , TARGET_STRING (
 "main/Extended Kalman Filter/Kalman Filter/Kalman Filter/Observer/MeasurementUpdate/L*(y[k]-yhat[k|k-1])"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 4 , 0 } , { 124 , TARGET_STRING (
 "main/Extended Kalman Filter/Kalman Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem/deltax"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 4 , 0 } , { 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static
const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0
, 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0
, 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ge0blvxvmu [ 0 ] , & rtB .
g3wfsmzd40 [ 0 ] , & rtB . ecgwuotvgr [ 0 ] , & rtB . mlfgrwy0vh [ 0 ] , &
rtB . pcbagnzchm [ 0 ] , & rtB . gjsiilr2qy [ 0 ] , & rtB . bxcypv55tm [ 0 ]
, & rtB . jtc3cuors3 [ 0 ] , & rtB . hxwp4pp2vw [ 0 ] , & rtB . ebkydsk0r2 [
0 ] , & rtB . b3mb05k43e [ 0 ] , & rtB . fyjipolnqh [ 0 ] , & rtB .
pnipjtlxdg , & rtB . g513sj0mdc , & rtB . mnwxpzx3lu , & rtB . mao5cuyexx , &
rtB . h03fxlsmaz , & rtB . id54yto2nt [ 0 ] , & rtB . abn2o32zty [ 0 ] , &
rtB . hkthjp0hwn [ 0 ] , & rtB . c22d1mz0mp [ 0 ] , & rtB . jsl5x2irnt [ 0 ]
, & rtB . efxu1t2ca5 , & rtB . cmg5lcy35n , & rtB . gx53sbrfe2 , & rtB .
b33ayb4udb , & rtB . gut2rdh4at , & rtB . jsl5x2irnt [ 0 ] , & rtB .
lleulw554r [ 0 ] , & rtB . joz0jerjx5 [ 0 ] , & rtB . ek4aiuqc1q [ 0 ] , &
rtB . pbhd3ebigk [ 0 ] , & rtB . npkf4jvhmc , & rtB . lpzww2w4t4 , & rtB .
fbfaby5zgo , & rtB . lleulw554r [ 0 ] , & rtB . ek4aiuqc1q [ 0 ] , & rtB .
m13v3tzjvr , & rtB . gx2sxhuagj , & rtB . hgnhmbw1ey , & rtB . hvwc1pvt1x , &
rtB . kelpqvssw3 , & rtB . hsrcc0wrus , & rtB . l1p2rzuxov , & rtB .
mwtoyjgicn , & rtP . DataStoreMemory_InitialValue , & rtP . GyrosPID_P , &
rtP . GyrosPID_I , & rtP . GyrosPID_D , & rtP . GyrosPID_N , & rtP .
GyrosPID_InitialConditionForIntegrator , & rtP .
GyrosPID_InitialConditionForFilter , & rtP . Constant_Value_p1gsoflfkl , &
rtP . directionalconstrain_Value [ 0 ] , & rtP . Gain_Gain , & rtP .
Constant_Value , & rtP . Saturation_UpperSat , & rtP . Saturation_LowerSat ,
& rtP . Saturation1_UpperSat , & rtP . Saturation1_LowerSat , & rtP .
RepulsorliftPID_P , & rtP . RepulsorliftPID_I , & rtP . RepulsorliftPID_D , &
rtP . RepulsorliftPID_N , & rtP .
RepulsorliftPID_InitialConditionForIntegrator , & rtP .
RepulsorliftPID_InitialConditionForFilter , & rtP .
directionalconstrain_Value_dkx1fe5fvu [ 0 ] , & rtP . Gain_Gain_fcqolhm04o ,
& rtP . Saturation_UpperSat_onxkxwe4f4 , & rtP .
Saturation_LowerSat_oxbf5pkgup , & rtP . Kd_Value , & rtP . Ki_Value , & rtP
. Kp_Value , & rtP . N_Value , & rtP . selectionmatrix_Value [ 0 ] , & rtP .
thrustmatrix_Value [ 0 ] , & rtP . Gain_Gain_dndn2znysv , & rtP .
innertiakgm2_Value [ 0 ] , & rtP . masskg_Value , & rtP . scalinggain_Gain ,
& rtP . scalinggain_Gain_jupury5wlc , & rtP . IC_Value [ 0 ] , & rtP .
IC1_Value [ 0 ] , & rtP . RateTransition2_InitialCondition , & rtP .
Integrator_IC , & rtP . pitchPID1_P , & rtP . pitchPID1_I , & rtP .
pitchPID1_D , & rtP . pitchPID1_N , & rtP .
pitchPID1_InitialConditionForIntegrator , & rtP .
pitchPID1_InitialConditionForFilter , & rtP . Gain1_Gain , & rtP .
Constant_Value_bg0wdissww , & rtP . Saturation_UpperSat_c14ofn1jjf , & rtP .
Saturation_LowerSat_hrg0ktoepw , & rtP . Switch_Threshold , & rtP .
Constant2_Value , & rtP . forwardPID_InitialConditionForIntegrator , & rtP .
forwardPID_InitialConditionForFilter , & rtP .
pitchPID_InitialConditionForIntegrator , & rtP .
pitchPID_InitialConditionForFilter , & rtP .
yawPID_InitialConditionForIntegrator , & rtP .
yawPID_InitialConditionForFilter , & rtP . gainscaling_Gain , & rtP .
Constant_Value_bjebkj0g0c [ 0 ] , & rtP . angularvelocityintegrater_IC [ 0 ]
, & rtP . linearposeintegrater_IC [ 0 ] , & rtP . Constant_Value_ok5wcdghto [
0 ] , & rtP . Gain_Gain_flo45vukkm , & rtP . Enable_Value , & rtP . P0_Value
[ 0 ] , & rtP . X0_Value [ 0 ] , & rtP . initialgain_Value , & rtP .
finalgain_Gain , & rtP . directionalconstrain_Value_bemiwsq1ta [ 0 ] , & rtP
. Bbar_Value [ 0 ] , & rtP . Qbar_Value [ 0 ] , & rtP . Rbar_Value [ 0 ] , &
rtP . Constant_Value_imyedfi3jl , & rtP . Constant2_Value_hk3avlia0e , & rtP
. Constant3_Value , & rtP . Switch_Threshold_djsbgwglvj , & rtP .
isSqrtUsed_Value , & rtP . Lykyhatkk1_Y0 , & rtP . deltax_Y0 , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_SCALAR , 8 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 10 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 12 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 18 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 20 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 3 , 1 , 4 , 1 , 6 , 1 , 12 , 1 , 1 , 1 , 12 , 12 , 4
, 3 , 6 , 4 , 3 , 3 , 12 , 6 , 6 , 6 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 , 0.005 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } , { ( NULL ) , ( NULL ) , 3 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 2 ,
0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals
, 45 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 80 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 2399090089U , 4253358139U , 2103209435U , 1421672948U } , ( NULL ) , 0 ,
0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
main_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void main_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void main_host_InitializeDataMapInfo ( main_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif

#ifndef RTW_HEADER_main_h_
#define RTW_HEADER_main_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef main_COMMON_INCLUDES_
#define main_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "main_types.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#define MODEL_NAME main
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (44) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (25)   
#elif NCSTATES != 25
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T b3mb05k43e [ 12 ] ; real_T hxwp4pp2vw [ 6 ] ; real_T
mlfgrwy0vh [ 6 ] ; real_T ecgwuotvgr [ 6 ] ; real_T pcbagnzchm [ 6 ] ; real_T
gut2rdh4at ; real_T cmg5lcy35n ; real_T b33ayb4udb ; real_T gx53sbrfe2 ;
real_T ebkydsk0r2 [ 6 ] ; real_T bxcypv55tm [ 6 ] ; real_T hvwc1pvt1x ;
real_T jtc3cuors3 [ 6 ] ; real_T g513sj0mdc ; real_T mnwxpzx3lu ; real_T
gx2sxhuagj ; real_T mao5cuyexx ; real_T hsrcc0wrus ; real_T fbfaby5zgo ;
real_T mwtoyjgicn ; real_T g3wfsmzd40 [ 4 ] ; real_T lpzww2w4t4 ; real_T
joz0jerjx5 [ 12 ] ; real_T pbhd3ebigk [ 12 ] ; real_T npkf4jvhmc ; real_T
m13v3tzjvr ; real_T hgnhmbw1ey ; real_T kelpqvssw3 ; real_T l1p2rzuxov ;
real_T h03fxlsmaz ; real_T c22d1mz0mp [ 6 ] ; real_T gjsiilr2qy [ 6 ] ;
real_T od5pa1hb51 [ 2 ] ; real_T opuaimzh5g [ 2 ] ; real_T hkthjp0hwn [ 6 ] ;
real_T efxu1t2ca5 ; real_T abn2o32zty [ 6 ] ; real_T id54yto2nt [ 6 ] ;
real_T pnipjtlxdg ; real_T ge0blvxvmu [ 3 ] ; real_T fyjipolnqh [ 6 ] ;
real_T ek4aiuqc1q [ 12 ] ; real_T lleulw554r [ 12 ] ; real_T jsl5x2irnt [ 144
] ; } B ; typedef struct { real_T mvxqg1s3mg [ 144 ] ; real_T mmrthbmx33 [ 12
] ; real_T pl5ipvhaac [ 12 ] ; real_T miz1bl3z5w [ 6 ] ; real_T cnj5pialzd [
6 ] ; real_T b51bgum1oo ; struct { void * LoggedData ; } ke4f005qyf ; struct
{ void * LoggedData ; } nf54ksspgo ; uint32_T kiu4ryrenn ; uint32_T
i5ledh1vq3 [ 2 ] ; uint32_T fft0rbdmuo ; uint32_T bhdaoyxpxq ; uint32_T
ejs0vs2amv [ 2 ] ; uint32_T g0l0bbckkp [ 625 ] ; int_T f2qhiy1twx ; int_T
hjw5xpsugz ; int_T a02qvwrxmu ; int_T hiudrndel0 ; int_T hrkn2z2xmi ; int8_T
dyann5lzea ; int8_T lel1glznxf ; boolean_T ltisa2m2wd ; boolean_T md3ol40n3j
; boolean_T cztv4wdtac ; boolean_T olcb4lv2yx ; boolean_T h0pdguc1c3 ;
boolean_T pvze4nq3ec ; boolean_T l5qqunsqzq ; boolean_T ejyd0yr2bi ; } DW ;
typedef struct { real_T db1kkvuurg ; real_T piupepdipv [ 6 ] ; real_T
jbqot5oyvh ; real_T i4smtyjnu1 ; real_T esrigfsrr5 ; real_T bbp1hflh2q ;
real_T jhetqhfcd2 ; real_T jogqt0m4cw ; real_T otroann2mn ; real_T gfyya5hmyh
; real_T iueuvff0dd ; real_T by22pdjj4t ; real_T hxzgewah4h ; real_T
lbg2sxbpot ; real_T knwk44gctl [ 6 ] ; } X ; typedef struct { real_T
db1kkvuurg ; real_T piupepdipv [ 6 ] ; real_T jbqot5oyvh ; real_T i4smtyjnu1
; real_T esrigfsrr5 ; real_T bbp1hflh2q ; real_T jhetqhfcd2 ; real_T
jogqt0m4cw ; real_T otroann2mn ; real_T gfyya5hmyh ; real_T iueuvff0dd ;
real_T by22pdjj4t ; real_T hxzgewah4h ; real_T lbg2sxbpot ; real_T knwk44gctl
[ 6 ] ; } XDot ; typedef struct { boolean_T db1kkvuurg ; boolean_T piupepdipv
[ 6 ] ; boolean_T jbqot5oyvh ; boolean_T i4smtyjnu1 ; boolean_T esrigfsrr5 ;
boolean_T bbp1hflh2q ; boolean_T jhetqhfcd2 ; boolean_T jogqt0m4cw ;
boolean_T otroann2mn ; boolean_T gfyya5hmyh ; boolean_T iueuvff0dd ;
boolean_T by22pdjj4t ; boolean_T hxzgewah4h ; boolean_T lbg2sxbpot ;
boolean_T knwk44gctl [ 6 ] ; } XDis ; typedef struct { real_T db1kkvuurg ;
real_T piupepdipv [ 6 ] ; real_T jbqot5oyvh ; real_T i4smtyjnu1 ; real_T
esrigfsrr5 ; real_T bbp1hflh2q ; real_T jhetqhfcd2 ; real_T jogqt0m4cw ;
real_T otroann2mn ; real_T gfyya5hmyh ; real_T iueuvff0dd ; real_T by22pdjj4t
; real_T hxzgewah4h ; real_T lbg2sxbpot ; real_T knwk44gctl [ 6 ] ; }
CStateAbsTol ; typedef struct { real_T db1kkvuurg ; real_T piupepdipv [ 6 ] ;
real_T jbqot5oyvh ; real_T i4smtyjnu1 ; real_T esrigfsrr5 ; real_T bbp1hflh2q
; real_T jhetqhfcd2 ; real_T jogqt0m4cw ; real_T otroann2mn ; real_T
gfyya5hmyh ; real_T iueuvff0dd ; real_T by22pdjj4t ; real_T hxzgewah4h ;
real_T lbg2sxbpot ; real_T knwk44gctl [ 6 ] ; } CXPtMin ; typedef struct {
real_T db1kkvuurg ; real_T piupepdipv [ 6 ] ; real_T jbqot5oyvh ; real_T
i4smtyjnu1 ; real_T esrigfsrr5 ; real_T bbp1hflh2q ; real_T jhetqhfcd2 ;
real_T jogqt0m4cw ; real_T otroann2mn ; real_T gfyya5hmyh ; real_T iueuvff0dd
; real_T by22pdjj4t ; real_T hxzgewah4h ; real_T lbg2sxbpot ; real_T
knwk44gctl [ 6 ] ; } CXPtMax ; typedef struct { real_T hle3iqlpfy ; real_T
py4b2mr5y2 ; real_T lrwzvdt5pk ; real_T btproyagwd ; real_T cwkigxlodn ;
real_T cp11u0bebn ; real_T hd4ypnhmy5 ; real_T l055x4dnsj ; real_T lv2p1y5qtz
; real_T hci34spajv ; real_T e4vpolq52a ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T GyrosPID_D
; real_T pitchPID1_D ; real_T RepulsorliftPID_D ; real_T GyrosPID_I ; real_T
RepulsorliftPID_I ; real_T pitchPID1_I ; real_T
GyrosPID_InitialConditionForFilter ; real_T
forwardPID_InitialConditionForFilter ; real_T
pitchPID1_InitialConditionForFilter ; real_T
pitchPID_InitialConditionForFilter ; real_T yawPID_InitialConditionForFilter
; real_T RepulsorliftPID_InitialConditionForFilter ; real_T
GyrosPID_InitialConditionForIntegrator ; real_T
forwardPID_InitialConditionForIntegrator ; real_T
pitchPID1_InitialConditionForIntegrator ; real_T
pitchPID_InitialConditionForIntegrator ; real_T
yawPID_InitialConditionForIntegrator ; real_T
RepulsorliftPID_InitialConditionForIntegrator ; real_T GyrosPID_N ; real_T
pitchPID1_N ; real_T RepulsorliftPID_N ; real_T GyrosPID_P ; real_T
pitchPID1_P ; real_T RepulsorliftPID_P ; real_T Lykyhatkk1_Y0 ; real_T
Bbar_Value [ 72 ] ; real_T Qbar_Value [ 144 ] ; real_T Rbar_Value [ 36 ] ;
real_T deltax_Y0 ; real_T Integrator_IC ; real_T
RateTransition2_InitialCondition ; real_T IC_Value [ 6 ] ; real_T
Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T
Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T scalinggain_Gain
; real_T linearposeintegrater_IC [ 6 ] ; real_T scalinggain_Gain_jupury5wlc ;
real_T Gain_Gain ; real_T IC1_Value [ 6 ] ; real_T Switch_Threshold ; real_T
Saturation_UpperSat_c14ofn1jjf ; real_T Saturation_LowerSat_hrg0ktoepw ;
real_T Gain1_Gain ; real_T Switch_Threshold_djsbgwglvj ; real_T
finalgain_Gain ; real_T Gain_Gain_dndn2znysv ; real_T
Saturation_UpperSat_onxkxwe4f4 ; real_T Saturation_LowerSat_oxbf5pkgup ;
real_T Gain_Gain_fcqolhm04o ; real_T angularvelocityintegrater_IC [ 6 ] ;
real_T DataStoreMemory_InitialValue ; real_T Constant_Value ; real_T
Constant_Value_p1gsoflfkl ; real_T directionalconstrain_Value [ 6 ] ; real_T
P0_Value [ 144 ] ; real_T X0_Value [ 12 ] ; real_T
directionalconstrain_Value_dkx1fe5fvu [ 6 ] ; real_T Kd_Value ; real_T
Ki_Value ; real_T Kp_Value ; real_T N_Value ; real_T
Constant_Value_bg0wdissww ; real_T Constant2_Value ; real_T
Constant_Value_imyedfi3jl ; real_T Constant2_Value_hk3avlia0e ; real_T
Constant3_Value ; real_T initialgain_Value ; real_T gainscaling_Gain ; real_T
selectionmatrix_Value [ 12 ] ; real_T thrustmatrix_Value [ 24 ] ; real_T
Constant_Value_bjebkj0g0c [ 6 ] ; real_T masskg_Value ; real_T
innertiakgm2_Value [ 9 ] ; real_T directionalconstrain_Value_bemiwsq1ta [ 6 ]
; real_T Constant_Value_ok5wcdghto [ 6 ] ; real_T Gain_Gain_flo45vukkm ;
boolean_T Enable_Value ; boolean_T isSqrtUsed_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_main_GetDWork ( ) ; extern void
mr_main_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_main_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * main_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif

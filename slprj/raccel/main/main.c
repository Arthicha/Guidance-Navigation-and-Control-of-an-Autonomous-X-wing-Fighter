#include "rt_logging_mmi.h"
#include "main_capi.h"
#include <math.h>
#include "main.h"
#include "main_private.h"
#include "main_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "9.5 (R2021a) 14-Nov-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static real_T ecsvk22nug ( const real_T x [ 3 ] ) ; static real_T
c4n4narftk ( uint32_T state [ 2 ] ) ; static void ee1cm5yxyi ( uint32_T s ,
uint32_T * state , real_T * r ) ; static void h3x12jp3he ( uint32_T mt [ 625
] , uint32_T u [ 2 ] ) ; static real_T ee1cm5yxyix ( uint32_T mt [ 625 ] ) ;
static real_T jya5sqyh1n ( void ) ; static real_T bwekdppcom ( void ) ;
static void cjv2dxlysh ( const real_T A [ 144 ] , const real_T B_i [ 144 ] ,
real_T C [ 144 ] ) ; static real_T pwhwwst2rukz ( int32_T n , const real_T x
[ 288 ] , int32_T ix0 ) ; static int32_T cs4xvlyvovgb ( int32_T m , int32_T n
, const real_T A [ 288 ] , int32_T ia0 ) ; static void py05jpluoiwb ( int32_T
m , int32_T n , const real_T A [ 288 ] , int32_T ia0 , const real_T x [ 288 ]
, int32_T ix0 , real_T y [ 12 ] ) ; static void njqexkdehmr2 ( int32_T m ,
int32_T n , real_T alpha1 , int32_T ix0 , const real_T y [ 12 ] , real_T A [
288 ] , int32_T ia0 ) ; static void bwoz5qtszcs ( int32_T m , int32_T n ,
int32_T iv0 , real_T tau , real_T C [ 288 ] , int32_T ic0 , real_T work [ 12
] ) ; static void oei1x0kbwy14 ( real_T A [ 288 ] , real_T tau [ 12 ] ) ;
static void nrsv2kw5etq ( real_T A [ 288 ] , const real_T tau [ 12 ] ) ;
static void i3s0uecs3gdq ( const real_T A [ 288 ] , real_T Q [ 288 ] , real_T
R [ 144 ] ) ; static void gdm2sitdfzse ( const real_T A [ 144 ] , real_T S [
144 ] , const real_T Ns [ 144 ] ) ; static real_T pwhwwst2ru ( int32_T n ,
const real_T x [ 108 ] , int32_T ix0 ) ; static int32_T cs4xvlyvov ( int32_T
m , int32_T n , const real_T A [ 108 ] , int32_T ia0 ) ; static void
py05jpluoi ( int32_T m , int32_T n , const real_T A [ 108 ] , int32_T ia0 ,
const real_T x [ 108 ] , int32_T ix0 , real_T y [ 6 ] ) ; static void
njqexkdehm ( int32_T m , int32_T n , real_T alpha1 , int32_T ix0 , const
real_T y [ 6 ] , real_T A [ 108 ] , int32_T ia0 ) ; static void oei1x0kbwy (
real_T A [ 108 ] , real_T tau [ 6 ] ) ; static void i3s0uecs3g ( const real_T
A [ 108 ] , real_T Q [ 108 ] , real_T R [ 36 ] ) ; static void gdm2sitdfz (
const real_T A [ 72 ] , const real_T S [ 144 ] , const real_T Ns [ 36 ] ,
real_T b_S [ 36 ] ) ; static void fcxwdc0onc ( const real_T A [ 36 ] , real_T
B_m [ 72 ] ) ; static void fil4k5pxzl ( const real_T A [ 36 ] , const real_T
B_p [ 72 ] , real_T C [ 72 ] ) ; static void fcxwdc0oncs ( const real_T A [
36 ] , real_T B_i [ 72 ] ) ; static void fil4k5pxzly ( const real_T A [ 36 ]
, const real_T B_e [ 72 ] , real_T C [ 72 ] ) ; static real_T pwhwwst2ruk (
int32_T n , const real_T x [ 216 ] , int32_T ix0 ) ; static int32_T
cs4xvlyvovg ( int32_T m , int32_T n , const real_T A [ 216 ] , int32_T ia0 )
; static void py05jpluoiw ( int32_T m , int32_T n , const real_T A [ 216 ] ,
int32_T ia0 , const real_T x [ 216 ] , int32_T ix0 , real_T y [ 12 ] ) ;
static void njqexkdehmr ( int32_T m , int32_T n , real_T alpha1 , int32_T ix0
, const real_T y [ 12 ] , real_T A [ 216 ] , int32_T ia0 ) ; static void
bwoz5qtszc ( int32_T m , int32_T n , int32_T iv0 , real_T tau , real_T C [
216 ] , int32_T ic0 , real_T work [ 12 ] ) ; static void oei1x0kbwy1 ( real_T
A [ 216 ] , real_T tau [ 12 ] ) ; static void nrsv2kw5et ( real_T A [ 216 ] ,
const real_T tau [ 12 ] ) ; static void i3s0uecs3gd ( const real_T A [ 216 ]
, real_T Q [ 216 ] , real_T R [ 144 ] ) ; static void gdm2sitdfzs ( const
real_T A [ 144 ] , real_T S [ 144 ] , const real_T Ns [ 72 ] ) ; static void
kutfclulan ( const real_T x [ 36 ] , real_T y [ 36 ] ) ; static int8_T
ejqzf53mwt ( real_T R [ 144 ] , const real_T x [ 12 ] ) ; static real_T
pwhwwst2rukzh ( int32_T n , const real_T x [ 144 ] , int32_T ix0 ) ; static
void j0ljh1qy4q ( int32_T n , real_T a , real_T x [ 144 ] , int32_T ix0 ) ;
static real_T pwhwwst2rukzhu ( int32_T n , const real_T x [ 12 ] , int32_T
ix0 ) ; static void j0ljh1qy4ql ( int32_T n , real_T a , real_T x [ 12 ] ,
int32_T ix0 ) ; static void hxwyn5jvobs5 ( int32_T n , real_T a , const
real_T x [ 12 ] , int32_T ix0 , real_T y [ 144 ] , int32_T iy0 ) ; static
void hxwyn5jvobs ( int32_T n , real_T a , const real_T x [ 144 ] , int32_T
ix0 , real_T y [ 12 ] , int32_T iy0 ) ; static real_T lqs4tm5svg ( int32_T n
, const real_T x [ 144 ] , int32_T ix0 , const real_T y [ 144 ] , int32_T iy0
) ; static void hxwyn5jvob ( int32_T n , real_T a , int32_T ix0 , real_T y [
144 ] , int32_T iy0 ) ; static void j0ljh1qy4qlb ( real_T a , real_T x [ 144
] , int32_T ix0 ) ; static void mfjl5ukh3k ( real_T x [ 144 ] , int32_T ix0 ,
int32_T iy0 ) ; static void hifwategio ( real_T * a , real_T * b , real_T * c
, real_T * s ) ; static void mgdvrmze2v ( real_T x [ 144 ] , int32_T ix0 ,
int32_T iy0 , real_T c , real_T s ) ; static void o1iqpcejxmf ( const real_T
A [ 144 ] , real_T U [ 144 ] , real_T s [ 12 ] , real_T V [ 144 ] ) ; static
void o1iqpcejxm ( const real_T A [ 144 ] , real_T U [ 144 ] , real_T S [ 144
] , real_T V [ 144 ] ) ; static void nlqsk1o0fh ( const real_T A [ 144 ] ,
real_T R [ 144 ] ) ; static int32_T cs4xvlyvovgbw ( int32_T m , int32_T n ,
const real_T A [ 144 ] , int32_T ia0 ) ; static void py05jpluoiwb0 ( int32_T
m , int32_T n , const real_T A [ 144 ] , int32_T ia0 , const real_T x [ 144 ]
, int32_T ix0 , real_T y [ 12 ] ) ; static void njqexkdehmr2u ( int32_T m ,
int32_T n , real_T alpha1 , int32_T ix0 , const real_T y [ 12 ] , real_T A [
144 ] , int32_T ia0 ) ; static void oei1x0kbwy14d ( real_T A [ 144 ] , real_T
tau [ 12 ] ) ; static void nrsv2kw5etqm ( real_T A [ 144 ] , const real_T tau
[ 12 ] ) ; static void i3s0uecs3gdqp ( const real_T A [ 144 ] , real_T Q [
144 ] , real_T R [ 144 ] ) ; static void br2ebrixap ( real_T S [ 144 ] ,
const real_T U [ 72 ] ) ; static void msq4imazm5 ( real_T * x ) ; static void
pghym3yviy ( real_T * x ) ; static real_T ecsvk22nug ( const real_T x [ 3 ] )
{ real_T absxk ; real_T scale ; real_T t ; real_T y ; scale =
3.3121686421112381E-170 ; absxk = muDoubleScalarAbs ( x [ 0 ] ) ; if ( absxk
> 3.3121686421112381E-170 ) { y = 1.0 ; scale = absxk ; } else { t = absxk /
3.3121686421112381E-170 ; y = t * t ; } absxk = muDoubleScalarAbs ( x [ 1 ] )
; if ( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale =
absxk ; } else { t = absxk / scale ; y += t * t ; } absxk = muDoubleScalarAbs
( x [ 2 ] ) ; if ( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0
; scale = absxk ; } else { t = absxk / scale ; y += t * t ; } return scale *
muDoubleScalarSqrt ( y ) ; } static real_T c4n4narftk ( uint32_T state [ 2 ]
) { real_T r ; real_T s ; real_T x ; real_T y ; int32_T j ; uint32_T icng ;
uint32_T jsr ; uint32_T ui ; static const real_T b [ 65 ] = { 0.340945 ,
0.4573146 , 0.5397793 , 0.6062427 , 0.6631691 , 0.7136975 , 0.7596125 ,
0.8020356 , 0.8417227 , 0.8792102 , 0.9148948 , 0.9490791 , 0.9820005 ,
1.0138492 , 1.044781 , 1.0749254 , 1.1043917 , 1.1332738 , 1.161653 ,
1.189601 , 1.2171815 , 1.2444516 , 1.2714635 , 1.298265 , 1.3249008 ,
1.3514125 , 1.3778399 , 1.4042211 , 1.4305929 , 1.4569915 , 1.4834527 ,
1.5100122 , 1.5367061 , 1.5635712 , 1.5906454 , 1.617968 , 1.6455802 ,
1.6735255 , 1.7018503 , 1.7306045 , 1.7598422 , 1.7896223 , 1.8200099 ,
1.851077 , 1.8829044 , 1.9155831 , 1.9492166 , 1.9839239 , 2.0198431 ,
2.0571356 , 2.095993 , 2.136645 , 2.1793713 , 2.2245175 , 2.2725186 ,
2.3239338 , 2.3795008 , 2.4402218 , 2.5075117 , 2.5834658 , 2.6713916 ,
2.7769942 , 2.7769942 , 2.7769942 , 2.7769942 } ; icng = 69069U * state [ 0 ]
+ 1234567U ; jsr = state [ 1 ] << 13 ^ state [ 1 ] ; jsr ^= jsr >> 17 ; jsr
^= jsr << 5 ; ui = icng + jsr ; j = ( int32_T ) ( ( ui & 63U ) + 1U ) ; r = (
real_T ) ( int32_T ) ui * 4.6566128730773926E-10 * b [ j ] ; if ( ! (
muDoubleScalarAbs ( r ) <= b [ j - 1 ] ) ) { x = ( muDoubleScalarAbs ( r ) -
b [ j - 1 ] ) / ( b [ j ] - b [ j - 1 ] ) ; icng = 69069U * icng + 1234567U ;
jsr ^= jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr << 5 ; y = ( real_T ) (
int32_T ) ( icng + jsr ) * 2.328306436538696E-10 + 0.5 ; s = x + y ; if ( s >
1.301198 ) { if ( r < 0.0 ) { r = 0.4878992 * x - 0.4878992 ; } else { r =
0.4878992 - 0.4878992 * x ; } } else if ( ! ( s <= 0.9689279 ) ) { x =
0.4878992 - 0.4878992 * x ; if ( y > 12.67706 - muDoubleScalarExp ( - 0.5 * x
* x ) * 12.37586 ) { if ( r < 0.0 ) { r = - x ; } else { r = x ; } } else if
( ! ( muDoubleScalarExp ( - 0.5 * b [ j ] * b [ j ] ) + y * 0.01958303 / b [
j ] <= muDoubleScalarExp ( - 0.5 * r * r ) ) ) { do { icng = 69069U * icng +
1234567U ; jsr ^= jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr << 5 ; x =
muDoubleScalarLog ( ( real_T ) ( int32_T ) ( icng + jsr ) *
2.328306436538696E-10 + 0.5 ) / 2.776994 ; icng = 69069U * icng + 1234567U ;
jsr ^= jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr << 5 ; } while ( ! (
muDoubleScalarLog ( ( real_T ) ( int32_T ) ( icng + jsr ) *
2.328306436538696E-10 + 0.5 ) * - 2.0 > x * x ) ) ; if ( r < 0.0 ) { r = x -
2.776994 ; } else { r = 2.776994 - x ; } } } } state [ 0 ] = icng ; state [ 1
] = jsr ; return r ; } static void ee1cm5yxyi ( uint32_T s , uint32_T * state
, real_T * r ) { int32_T hi ; uint32_T test1 ; uint32_T test2 ; hi = (
int32_T ) ( s / 127773U ) ; test1 = ( s - hi * 127773U ) * 16807U ; test2 =
2836U * hi ; if ( test1 < test2 ) { * state = ~ ( test2 - test1 ) &
2147483647U ; } else { * state = test1 - test2 ; } * r = ( real_T ) * state *
4.6566128752457969E-10 ; } static void h3x12jp3he ( uint32_T mt [ 625 ] ,
uint32_T u [ 2 ] ) { int32_T j ; int32_T kk ; uint32_T mti ; uint32_T y ; for
( j = 0 ; j < 2 ; j ++ ) { mti = mt [ 624 ] + 1U ; if ( mt [ 624 ] + 1U >=
625U ) { for ( kk = 0 ; kk < 227 ; kk ++ ) { y = ( mt [ kk + 1 ] &
2147483647U ) | ( mt [ kk ] & 2147483648U ) ; if ( ( y & 1U ) == 0U ) { y >>=
1U ; } else { y = y >> 1U ^ 2567483615U ; } mt [ kk ] = mt [ kk + 397 ] ^ y ;
} for ( kk = 0 ; kk < 396 ; kk ++ ) { y = ( mt [ kk + 227 ] & 2147483648U ) |
( mt [ kk + 228 ] & 2147483647U ) ; if ( ( y & 1U ) == 0U ) { y >>= 1U ; }
else { y = y >> 1U ^ 2567483615U ; } mt [ kk + 227 ] = mt [ kk ] ^ y ; } y =
( mt [ 623 ] & 2147483648U ) | ( mt [ 0 ] & 2147483647U ) ; if ( ( y & 1U )
== 0U ) { y >>= 1U ; } else { y = y >> 1U ^ 2567483615U ; } mt [ 623 ] = mt [
396 ] ^ y ; mti = 1U ; } y = mt [ ( int32_T ) mti - 1 ] ; mt [ 624 ] = mti ;
y ^= y >> 11U ; y ^= y << 7U & 2636928640U ; y ^= y << 15U & 4022730752U ; u
[ j ] = y >> 18U ^ y ; } } static real_T ee1cm5yxyix ( uint32_T mt [ 625 ] )
{ real_T r ; uint32_T u [ 2 ] ; do { h3x12jp3he ( mt , u ) ; r = ( ( real_T )
( u [ 0 ] >> 5U ) * 6.7108864E+7 + ( real_T ) ( u [ 1 ] >> 6U ) ) *
1.1102230246251565E-16 ; } while ( r == 0.0 ) ; return r ; } static real_T
jya5sqyh1n ( void ) { real_T c_u ; real_T r ; real_T x ; int32_T i ; uint32_T
u32 [ 2 ] ; static const real_T b [ 257 ] = { 0.0 , 0.215241895984875 ,
0.286174591792068 , 0.335737519214422 , 0.375121332878378 , 0.408389134611989
, 0.43751840220787 , 0.46363433679088 , 0.487443966139235 , 0.50942332960209
, 0.529909720661557 , 0.549151702327164 , 0.567338257053817 ,
0.584616766106378 , 0.601104617755991 , 0.61689699000775 , 0.63207223638606 ,
0.646695714894993 , 0.660822574244419 , 0.674499822837293 , 0.687767892795788
, 0.700661841106814 , 0.713212285190975 , 0.725446140909999 ,
0.737387211434295 , 0.749056662017815 , 0.760473406430107 , 0.771654424224568
, 0.782615023307232 , 0.793369058840623 , 0.80392911698997 ,
0.814306670135215 , 0.824512208752291 , 0.834555354086381 , 0.844444954909153
, 0.854189171008163 , 0.863795545553308 , 0.87327106808886 ,
0.882622229585165 , 0.891855070732941 , 0.900975224461221 , 0.909987953496718
, 0.91889818364959 , 0.927710533401999 , 0.936429340286575 ,
0.945058684468165 , 0.953602409881086 , 0.96206414322304 , 0.970447311064224
, 0.978755155294224 , 0.986990747099062 , 0.99515699963509 , 1.00325667954467
, 1.01129241744 , 1.01926671746548 , 1.02718196603564 , 1.03504043983344 ,
1.04284431314415 , 1.05059566459093 , 1.05829648333067 , 1.06594867476212 ,
1.07355406579244 , 1.0811144097034 , 1.08863139065398 , 1.09610662785202 ,
1.10354167942464 , 1.11093804601357 , 1.11829717411934 , 1.12562045921553 ,
1.13290924865253 , 1.14016484436815 , 1.14738850542085 , 1.15458145035993 ,
1.16174485944561 , 1.16887987673083 , 1.17598761201545 , 1.18306914268269 ,
1.19012551542669 , 1.19715774787944 , 1.20416683014438 , 1.2111537262437 ,
1.21811937548548 , 1.22506469375653 , 1.23199057474614 , 1.23889789110569 ,
1.24578749554863 , 1.2526602218949 , 1.25951688606371 , 1.26635828701823 ,
1.27318520766536 , 1.27999841571382 , 1.28679866449324 , 1.29358669373695 ,
1.30036323033084 , 1.30712898903073 , 1.31388467315022 , 1.32063097522106 ,
1.32736857762793 , 1.33409815321936 , 1.3408203658964 , 1.34753587118059 ,
1.35424531676263 , 1.36094934303328 , 1.36764858359748 , 1.37434366577317 ,
1.38103521107586 , 1.38772383568998 , 1.39441015092814 , 1.40109476367925 ,
1.4077782768464 , 1.41446128977547 , 1.42114439867531 , 1.42782819703026 ,
1.43451327600589 , 1.44120022484872 , 1.44788963128058 , 1.45458208188841 ,
1.46127816251028 , 1.46797845861808 , 1.47468355569786 , 1.48139403962819 ,
1.48811049705745 , 1.49483351578049 , 1.50156368511546 , 1.50830159628131 ,
1.51504784277671 , 1.521803020761 , 1.52856772943771 , 1.53534257144151 ,
1.542128153229 , 1.54892508547417 , 1.55573398346918 , 1.56255546753104 ,
1.56939016341512 , 1.57623870273591 , 1.58310172339603 , 1.58997987002419 ,
1.59687379442279 , 1.60378415602609 , 1.61071162236983 , 1.61765686957301 ,
1.62462058283303 , 1.63160345693487 , 1.63860619677555 , 1.64562951790478 ,
1.65267414708306 , 1.65974082285818 , 1.66683029616166 , 1.67394333092612 ,
1.68108070472517 , 1.68824320943719 , 1.69543165193456 , 1.70264685479992 ,
1.7098896570713 , 1.71716091501782 , 1.72446150294804 , 1.73179231405296 ,
1.73915426128591 , 1.74654827828172 , 1.75397532031767 , 1.76143636531891 ,
1.76893241491127 , 1.77646449552452 , 1.78403365954944 , 1.79164098655216 ,
1.79928758454972 , 1.80697459135082 , 1.81470317596628 , 1.82247454009388 ,
1.83028991968276 , 1.83815058658281 , 1.84605785028518 , 1.8540130597602 ,
1.86201760539967 , 1.87007292107127 , 1.878180486293 , 1.88634182853678 ,
1.8945585256707 , 1.90283220855043 , 1.91116456377125 , 1.91955733659319 ,
1.92801233405266 , 1.93653142827569 , 1.94511656000868 , 1.95376974238465 ,
1.96249306494436 , 1.97128869793366 , 1.98015889690048 , 1.98910600761744 ,
1.99813247135842 , 2.00724083056053 , 2.0164337349062 , 2.02571394786385 ,
2.03508435372962 , 2.04454796521753 , 2.05410793165065 , 2.06376754781173 ,
2.07353026351874 , 2.0833996939983 , 2.09337963113879 , 2.10347405571488 ,
2.11368715068665 , 2.12402331568952 , 2.13448718284602 , 2.14508363404789 ,
2.15581781987674 , 2.16669518035431 , 2.17772146774029 , 2.18890277162636 ,
2.20024554661128 , 2.21175664288416 , 2.22344334009251 , 2.23531338492992 ,
2.24737503294739 , 2.25963709517379 , 2.27210899022838 , 2.28480080272449 ,
2.29772334890286 , 2.31088825060137 , 2.32430801887113 , 2.33799614879653 ,
2.35196722737914 , 2.36623705671729 , 2.38082279517208 , 2.39574311978193 ,
2.41101841390112 , 2.42667098493715 , 2.44272531820036 , 2.4592083743347 ,
2.47614993967052 , 2.49358304127105 , 2.51154444162669 , 2.53007523215985 ,
2.54922155032478 , 2.56903545268184 , 2.58957598670829 , 2.61091051848882 ,
2.63311639363158 , 2.65628303757674 , 2.68051464328574 , 2.70593365612306 ,
2.73268535904401 , 2.76094400527999 , 2.79092117400193 , 2.82287739682644 ,
2.85713873087322 , 2.89412105361341 , 2.93436686720889 , 2.97860327988184 ,
3.02783779176959 , 3.08352613200214 , 3.147889289518 , 3.2245750520478 ,
3.32024473383983 , 3.44927829856143 , 3.65415288536101 , 3.91075795952492 } ;
static const real_T c [ 257 ] = { 1.0 , 0.977101701267673 , 0.959879091800108
, 0.9451989534423 , 0.932060075959231 , 0.919991505039348 , 0.908726440052131
, 0.898095921898344 , 0.887984660755834 , 0.878309655808918 ,
0.869008688036857 , 0.860033621196332 , 0.851346258458678 , 0.842915653112205
, 0.834716292986884 , 0.826726833946222 , 0.818929191603703 ,
0.811307874312656 , 0.803849483170964 , 0.796542330422959 , 0.789376143566025
, 0.782341832654803 , 0.775431304981187 , 0.768637315798486 ,
0.761953346836795 , 0.755373506507096 , 0.748892447219157 , 0.742505296340151
, 0.736207598126863 , 0.729995264561476 , 0.72386453346863 ,
0.717811932630722 , 0.711834248878248 , 0.705928501332754 , 0.700091918136512
, 0.694321916126117 , 0.688616083004672 , 0.682972161644995 ,
0.677388036218774 , 0.671861719897082 , 0.66639134390875 , 0.660975147776663
, 0.655611470579697 , 0.650298743110817 , 0.645035480820822 ,
0.639820277453057 , 0.634651799287624 , 0.629528779924837 , 0.624450015547027
, 0.619414360605834 , 0.614420723888914 , 0.609468064925773 ,
0.604555390697468 , 0.599681752619125 , 0.594846243767987 , 0.590047996332826
, 0.585286179263371 , 0.580559996100791 , 0.575868682972354 ,
0.571211506735253 , 0.566587763256165 , 0.561996775814525 , 0.557437893618766
, 0.552910490425833 , 0.548413963255266 , 0.543947731190026 ,
0.539511234256952 , 0.535103932380458 , 0.530725304403662 , 0.526374847171684
, 0.522052074672322 , 0.517756517229756 , 0.513487720747327 ,
0.509245245995748 , 0.505028667943468 , 0.500837575126149 , 0.49667156905249
, 0.492530263643869 , 0.488413284705458 , 0.484320269426683 ,
0.480250865909047 , 0.476204732719506 , 0.47218153846773 , 0.468180961405694
, 0.464202689048174 , 0.460246417812843 , 0.456311852678716 ,
0.452398706861849 , 0.448506701507203 , 0.444635565395739 , 0.440785034665804
, 0.436954852547985 , 0.433144769112652 , 0.429354541029442 ,
0.425583931338022 , 0.421832709229496 , 0.418100649837848 , 0.414387534040891
, 0.410693148270188 , 0.407017284329473 , 0.403359739221114 ,
0.399720314980197 , 0.396098818515832 , 0.392495061459315 , 0.388908860018789
, 0.385340034840077 , 0.381788410873393 , 0.378253817245619 ,
0.374736087137891 , 0.371235057668239 , 0.367750569779032 , 0.364282468129004
, 0.360830600989648 , 0.357394820145781 , 0.353974980800077 ,
0.350570941481406 , 0.347182563956794 , 0.343809713146851 , 0.340452257044522
, 0.337110066637006 , 0.333783015830718 , 0.330470981379163 ,
0.327173842813601 , 0.323891482376391 , 0.320623784956905 , 0.317370638029914
, 0.314131931596337 , 0.310907558126286 , 0.307697412504292 ,
0.30450139197665 , 0.301319396100803 , 0.298151326696685 , 0.294997087799962
, 0.291856585617095 , 0.288729728482183 , 0.285616426815502 ,
0.282516593083708 , 0.279430141761638 , 0.276356989295668 , 0.273297054068577
, 0.270250256365875 , 0.267216518343561 , 0.264195763997261 ,
0.261187919132721 , 0.258192911337619 , 0.255210669954662 , 0.252241126055942
, 0.249284212418529 , 0.246339863501264 , 0.24340801542275 ,
0.240488605940501 , 0.237581574431238 , 0.23468686187233 , 0.231804410824339
, 0.228934165414681 , 0.226076071322381 , 0.223230075763918 ,
0.220396127480152 , 0.217574176724331 , 0.214764175251174 , 0.211966076307031
, 0.209179834621125 , 0.206405406397881 , 0.203642749310335 ,
0.200891822494657 , 0.198152586545776 , 0.195425003514135 , 0.192709036903589
, 0.190004651670465 , 0.187311814223801 , 0.1846304924268 , 0.181960655599523
, 0.179302274522848 , 0.176655321443735 , 0.174019770081839 ,
0.171395595637506 , 0.168782774801212 , 0.166181285764482 , 0.163591108232366
, 0.161012223437511 , 0.158444614155925 , 0.15588826472448 ,
0.153343161060263 , 0.150809290681846 , 0.148286642732575 , 0.145775208005994
, 0.143274978973514 , 0.140785949814445 , 0.138308116448551 ,
0.135841476571254 , 0.133386029691669 , 0.130941777173644 , 0.12850872228 ,
0.126086870220186 , 0.123676228201597 , 0.12127680548479 , 0.11888861344291 ,
0.116511665625611 , 0.114145977827839 , 0.111791568163838 , 0.109448457146812
, 0.107116667774684 , 0.104796225622487 , 0.102487158941935 ,
0.10018949876881 , 0.0979032790388625 , 0.095628536713009 , 0.093365311912691
, 0.0911136480663738 , 0.0888735920682759 , 0.0866451944505581 ,
0.0844285095703535 , 0.082223595813203 , 0.0800305158146631 ,
0.0778493367020961 , 0.0756801303589272 , 0.0735229737139814 ,
0.0713779490588905 , 0.0692451443970068 , 0.0671246538277886 ,
0.065016577971243 , 0.0629210244377582 , 0.06083810834954 ,
0.0587679529209339 , 0.0567106901062031 , 0.0546664613248891 ,
0.0526354182767924 , 0.0506177238609479 , 0.0486135532158687 ,
0.0466230949019305 , 0.0446465522512946 , 0.0426841449164746 ,
0.0407361106559411 , 0.0388027074045262 , 0.0368842156885674 ,
0.0349809414617162 , 0.0330932194585786 , 0.0312214171919203 ,
0.0293659397581334 , 0.0275272356696031 , 0.0257058040085489 ,
0.0239022033057959 , 0.0221170627073089 , 0.0203510962300445 ,
0.0186051212757247 , 0.0168800831525432 , 0.0151770883079353 ,
0.0134974506017399 , 0.0118427578579079 , 0.0102149714397015 ,
0.00861658276939875 , 0.00705087547137324 , 0.00552240329925101 ,
0.00403797259336304 , 0.00260907274610216 , 0.0012602859304986 ,
0.000477467764609386 } ; int32_T exitg1 ; do { exitg1 = 0 ; h3x12jp3he ( rtDW
. g0l0bbckkp , u32 ) ; i = ( int32_T ) ( ( u32 [ 1 ] >> 24U ) + 1U ) ; r = (
( ( real_T ) ( u32 [ 0 ] >> 3U ) * 1.6777216E+7 + ( real_T ) ( ( int32_T )
u32 [ 1 ] & 16777215 ) ) * 2.2204460492503131E-16 - 1.0 ) * b [ i ] ; if (
muDoubleScalarAbs ( r ) <= b [ i - 1 ] ) { exitg1 = 1 ; } else if ( i < 256 )
{ x = ee1cm5yxyix ( rtDW . g0l0bbckkp ) ; if ( ( c [ i - 1 ] - c [ i ] ) * x
+ c [ i ] < muDoubleScalarExp ( - 0.5 * r * r ) ) { exitg1 = 1 ; } } else {
do { x = ee1cm5yxyix ( rtDW . g0l0bbckkp ) ; x = muDoubleScalarLog ( x ) *
0.273661237329758 ; c_u = ee1cm5yxyix ( rtDW . g0l0bbckkp ) ; } while ( ! ( -
2.0 * muDoubleScalarLog ( c_u ) > x * x ) ) ; if ( r < 0.0 ) { r = x -
3.65415288536101 ; } else { r = 3.65415288536101 - x ; } exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; return r ; } static real_T bwekdppcom ( void ) {
real_T c_r ; real_T r ; real_T t ; uint32_T b_state ; uint32_T c_state ; if (
rtDW . kiu4ryrenn == 0U ) { if ( rtDW . fft0rbdmuo == 4U ) { c_state = rtDW .
bhdaoyxpxq ; do { ee1cm5yxyi ( c_state , & b_state , & c_r ) ; ee1cm5yxyi (
b_state , & c_state , & t ) ; c_r = 2.0 * c_r - 1.0 ; t = 2.0 * t - 1.0 ; t =
t * t + c_r * c_r ; } while ( ! ( t <= 1.0 ) ) ; r = muDoubleScalarSqrt ( -
2.0 * muDoubleScalarLog ( t ) / t ) * c_r ; rtDW . bhdaoyxpxq = c_state ; }
else if ( rtDW . fft0rbdmuo == 5U ) { r = c4n4narftk ( rtDW . ejs0vs2amv ) ;
} else { r = jya5sqyh1n ( ) ; } } else if ( rtDW . kiu4ryrenn == 4U ) {
c_state = rtDW . i5ledh1vq3 [ 0 ] ; do { ee1cm5yxyi ( c_state , & b_state , &
c_r ) ; ee1cm5yxyi ( b_state , & c_state , & t ) ; c_r = 2.0 * c_r - 1.0 ; t
= 2.0 * t - 1.0 ; t = t * t + c_r * c_r ; } while ( ! ( t <= 1.0 ) ) ; r =
muDoubleScalarSqrt ( - 2.0 * muDoubleScalarLog ( t ) / t ) * c_r ; rtDW .
i5ledh1vq3 [ 0 ] = c_state ; } else { r = c4n4narftk ( rtDW . i5ledh1vq3 ) ;
} return r ; } static void cjv2dxlysh ( const real_T A [ 144 ] , const real_T
B_i [ 144 ] , real_T C [ 144 ] ) { real_T s ; int32_T aoffset ; int32_T
coffset ; int32_T i ; int32_T j ; int32_T k ; for ( j = 0 ; j < 12 ; j ++ ) {
coffset = j * 12 ; for ( i = 0 ; i < 12 ; i ++ ) { aoffset = i * 12 ; s = 0.0
; for ( k = 0 ; k < 12 ; k ++ ) { s += B_i [ k * 12 + j ] * A [ aoffset + k ]
; } C [ coffset + i ] = s ; } } } static real_T pwhwwst2rukz ( int32_T n ,
const real_T x [ 288 ] , int32_T ix0 ) { real_T absxk ; real_T scale ; real_T
t ; real_T y ; int32_T k ; int32_T kend ; y = 0.0 ; scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static
int32_T cs4xvlyvovgb ( int32_T m , int32_T n , const real_T A [ 288 ] ,
int32_T ia0 ) { int32_T coltop ; int32_T exitg1 ; int32_T ia ; int32_T j ;
boolean_T exitg2 ; j = n ; exitg2 = false ; while ( ( ! exitg2 ) && ( j > 0 )
) { coltop = ( j - 1 ) * 24 + ia0 ; ia = coltop ; do { exitg1 = 0 ; if ( ia
<= ( coltop + m ) - 1 ) { if ( A [ ia - 1 ] != 0.0 ) { exitg1 = 1 ; } else {
ia ++ ; } } else { j -- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if (
exitg1 == 1 ) { exitg2 = true ; } } return j ; } static void py05jpluoiwb (
int32_T m , int32_T n , const real_T A [ 288 ] , int32_T ia0 , const real_T x
[ 288 ] , int32_T ix0 , real_T y [ 12 ] ) { real_T c ; int32_T b ; int32_T
b_b ; int32_T b_iy ; int32_T ia ; int32_T iac ; int32_T ix ; if ( n != 0 ) {
for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy = 0 ; b = (
n - 1 ) * 24 + ia0 ; for ( iac = ia0 ; iac <= b ; iac += 24 ) { ix = ix0 ; c
= 0.0 ; b_b = iac + m ; for ( ia = iac ; ia < b_b ; ia ++ ) { c += A [ ia - 1
] * x [ ix - 1 ] ; ix ++ ; } y [ b_iy ] += c ; b_iy ++ ; } } } static void
njqexkdehmr2 ( int32_T m , int32_T n , real_T alpha1 , int32_T ix0 , const
real_T y [ 12 ] , real_T A [ 288 ] , int32_T ia0 ) { real_T temp ; int32_T b
; int32_T ijA ; int32_T ix ; int32_T j ; int32_T jA ; int32_T jy ; if ( ! (
alpha1 == 0.0 ) ) { jA = ia0 - 1 ; jy = 0 ; for ( j = 0 ; j < n ; j ++ ) { if
( y [ jy ] != 0.0 ) { temp = y [ jy ] * alpha1 ; ix = ix0 ; b = m + jA ; for
( ijA = jA ; ijA < b ; ijA ++ ) { A [ ijA ] += A [ ix - 1 ] * temp ; ix ++ ;
} } jy ++ ; jA += 24 ; } } } static void bwoz5qtszcs ( int32_T m , int32_T n
, int32_T iv0 , real_T tau , real_T C [ 288 ] , int32_T ic0 , real_T work [
12 ] ) { int32_T lastc ; int32_T lastv ; if ( tau != 0.0 ) { lastv = m ;
lastc = iv0 + m ; while ( ( lastv > 0 ) && ( C [ lastc - 2 ] == 0.0 ) ) {
lastv -- ; lastc -- ; } lastc = cs4xvlyvovgb ( lastv , n , C , ic0 ) ; } else
{ lastv = 0 ; lastc = 0 ; } if ( lastv > 0 ) { py05jpluoiwb ( lastv , lastc ,
C , ic0 , C , iv0 , work ) ; njqexkdehmr2 ( lastv , lastc , - tau , iv0 ,
work , C , ic0 ) ; } } static void oei1x0kbwy14 ( real_T A [ 288 ] , real_T
tau [ 12 ] ) { real_T work [ 12 ] ; real_T b_atmp ; real_T xnorm ; int32_T
b_k ; int32_T c_k ; int32_T i ; int32_T ii ; int32_T knt ; memset ( & work [
0 ] , 0 , 12U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 12 ; i ++ ) { ii = i
* 24 + i ; b_atmp = A [ ii ] ; tau [ i ] = 0.0 ; xnorm = pwhwwst2rukz ( 23 -
i , A , ii + 2 ) ; if ( xnorm != 0.0 ) { xnorm = muDoubleScalarHypot ( A [ ii
] , xnorm ) ; if ( A [ ii ] >= 0.0 ) { xnorm = - xnorm ; } if (
muDoubleScalarAbs ( xnorm ) < 1.0020841800044864E-292 ) { knt = - 1 ; b_k =
ii - i ; do { knt ++ ; for ( c_k = ii + 1 ; c_k < b_k + 24 ; c_k ++ ) { A [
c_k ] *= 9.9792015476736E+291 ; } xnorm *= 9.9792015476736E+291 ; b_atmp *=
9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( b_atmp ,
pwhwwst2rukz ( 23 - i , A , ii + 2 ) ) ; if ( b_atmp >= 0.0 ) { xnorm = -
xnorm ; } tau [ i ] = ( xnorm - b_atmp ) / xnorm ; b_atmp = 1.0 / ( b_atmp -
xnorm ) ; b_k = ii - i ; for ( c_k = ii + 1 ; c_k < b_k + 24 ; c_k ++ ) { A [
c_k ] *= b_atmp ; } for ( b_k = 0 ; b_k <= knt ; b_k ++ ) { xnorm *=
1.0020841800044864E-292 ; } b_atmp = xnorm ; } else { tau [ i ] = ( xnorm - A
[ ii ] ) / xnorm ; b_atmp = 1.0 / ( A [ ii ] - xnorm ) ; knt = ii - i ; for (
b_k = ii + 1 ; b_k < knt + 24 ; b_k ++ ) { A [ b_k ] *= b_atmp ; } b_atmp =
xnorm ; } } A [ ii ] = b_atmp ; if ( i + 1 < 12 ) { b_atmp = A [ ii ] ; A [
ii ] = 1.0 ; bwoz5qtszcs ( 24 - i , 11 - i , ii + 1 , tau [ i ] , A , ii + 25
, work ) ; A [ ii ] = b_atmp ; } } } static void nrsv2kw5etq ( real_T A [ 288
] , const real_T tau [ 12 ] ) { real_T work [ 12 ] ; int32_T b ; int32_T b_k
; int32_T i ; int32_T iaii ; memset ( & work [ 0 ] , 0 , 12U * sizeof (
real_T ) ) ; for ( i = 11 ; i >= 0 ; i -- ) { iaii = i * 24 + i ; if ( i + 1
< 12 ) { A [ iaii ] = 1.0 ; bwoz5qtszcs ( 24 - i , 11 - i , iaii + 1 , tau [
i ] , A , iaii + 25 , work ) ; } b = ( iaii - i ) + 24 ; for ( b_k = iaii + 1
; b_k < b ; b_k ++ ) { A [ b_k ] *= - tau [ i ] ; } A [ iaii ] = 1.0 - tau [
i ] ; for ( b = 0 ; b < i ; b ++ ) { A [ ( iaii - b ) - 1 ] = 0.0 ; } } }
static void i3s0uecs3gdq ( const real_T A [ 288 ] , real_T Q [ 288 ] , real_T
R [ 144 ] ) { real_T b_A [ 288 ] ; real_T tau [ 12 ] ; int32_T i ; int32_T j
; memcpy ( & b_A [ 0 ] , & A [ 0 ] , 288U * sizeof ( real_T ) ) ;
oei1x0kbwy14 ( b_A , tau ) ; for ( j = 0 ; j < 12 ; j ++ ) { for ( i = 0 ; i
<= j ; i ++ ) { R [ i + 12 * j ] = b_A [ 24 * j + i ] ; } for ( i = j + 1 ; i
+ 1 < 13 ; i ++ ) { R [ i + 12 * j ] = 0.0 ; } } nrsv2kw5etq ( b_A , tau ) ;
for ( j = 0 ; j < 12 ; j ++ ) { memcpy ( & Q [ j * 24 ] , & b_A [ j * 24 ] ,
24U * sizeof ( real_T ) ) ; } } static void gdm2sitdfzse ( const real_T A [
144 ] , real_T S [ 144 ] , const real_T Ns [ 144 ] ) { real_T a__1 [ 288 ] ;
real_T tmp [ 288 ] ; real_T R [ 144 ] ; int32_T i ; int32_T i_p ; cjv2dxlysh
( S , A , R ) ; for ( i_p = 0 ; i_p < 12 ; i_p ++ ) { for ( i = 0 ; i < 12 ;
i ++ ) { tmp [ i + 24 * i_p ] = R [ 12 * i_p + i ] ; tmp [ ( i + 24 * i_p ) +
12 ] = Ns [ 12 * i + i_p ] ; } } i3s0uecs3gdq ( tmp , a__1 , R ) ; for ( i_p
= 0 ; i_p < 12 ; i_p ++ ) { for ( i = 0 ; i < 12 ; i ++ ) { S [ i + 12 * i_p
] = R [ 12 * i + i_p ] ; } } } static real_T pwhwwst2ru ( int32_T n , const
real_T x [ 108 ] , int32_T ix0 ) { real_T absxk ; real_T scale ; real_T t ;
real_T y ; int32_T k ; int32_T kend ; y = 0.0 ; scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static
int32_T cs4xvlyvov ( int32_T m , int32_T n , const real_T A [ 108 ] , int32_T
ia0 ) { int32_T coltop ; int32_T exitg1 ; int32_T ia ; int32_T j ; boolean_T
exitg2 ; j = n ; exitg2 = false ; while ( ( ! exitg2 ) && ( j > 0 ) ) {
coltop = ( j - 1 ) * 18 + ia0 ; ia = coltop ; do { exitg1 = 0 ; if ( ia <= (
coltop + m ) - 1 ) { if ( A [ ia - 1 ] != 0.0 ) { exitg1 = 1 ; } else { ia ++
; } } else { j -- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1
) { exitg2 = true ; } } return j ; } static void py05jpluoi ( int32_T m ,
int32_T n , const real_T A [ 108 ] , int32_T ia0 , const real_T x [ 108 ] ,
int32_T ix0 , real_T y [ 6 ] ) { real_T c ; int32_T b ; int32_T b_b ; int32_T
b_iy ; int32_T ia ; int32_T iac ; int32_T ix ; if ( n != 0 ) { for ( b_iy = 0
; b_iy < n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy = 0 ; b = ( n - 1 ) * 18 +
ia0 ; for ( iac = ia0 ; iac <= b ; iac += 18 ) { ix = ix0 ; c = 0.0 ; b_b =
iac + m ; for ( ia = iac ; ia < b_b ; ia ++ ) { c += A [ ia - 1 ] * x [ ix -
1 ] ; ix ++ ; } y [ b_iy ] += c ; b_iy ++ ; } } } static void njqexkdehm (
int32_T m , int32_T n , real_T alpha1 , int32_T ix0 , const real_T y [ 6 ] ,
real_T A [ 108 ] , int32_T ia0 ) { real_T temp ; int32_T b ; int32_T ijA ;
int32_T ix ; int32_T j ; int32_T jA ; int32_T jy ; if ( ! ( alpha1 == 0.0 ) )
{ jA = ia0 - 1 ; jy = 0 ; for ( j = 0 ; j < n ; j ++ ) { if ( y [ jy ] != 0.0
) { temp = y [ jy ] * alpha1 ; ix = ix0 ; b = m + jA ; for ( ijA = jA ; ijA <
b ; ijA ++ ) { A [ ijA ] += A [ ix - 1 ] * temp ; ix ++ ; } } jy ++ ; jA +=
18 ; } } } static void oei1x0kbwy ( real_T A [ 108 ] , real_T tau [ 6 ] ) {
real_T work [ 6 ] ; real_T b_atmp ; real_T xnorm ; int32_T c_k ; int32_T i ;
int32_T ii ; int32_T knt ; int32_T lastc ; for ( i = 0 ; i < 6 ; i ++ ) {
work [ i ] = 0.0 ; } for ( i = 0 ; i < 6 ; i ++ ) { ii = i * 18 + i ; b_atmp
= A [ ii ] ; tau [ i ] = 0.0 ; xnorm = pwhwwst2ru ( 17 - i , A , ii + 2 ) ;
if ( xnorm != 0.0 ) { xnorm = muDoubleScalarHypot ( A [ ii ] , xnorm ) ; if (
A [ ii ] >= 0.0 ) { xnorm = - xnorm ; } if ( muDoubleScalarAbs ( xnorm ) <
1.0020841800044864E-292 ) { knt = - 1 ; lastc = ii - i ; do { knt ++ ; for (
c_k = ii + 1 ; c_k < lastc + 18 ; c_k ++ ) { A [ c_k ] *=
9.9792015476736E+291 ; } xnorm *= 9.9792015476736E+291 ; b_atmp *=
9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( b_atmp ,
pwhwwst2ru ( 17 - i , A , ii + 2 ) ) ; if ( b_atmp >= 0.0 ) { xnorm = - xnorm
; } tau [ i ] = ( xnorm - b_atmp ) / xnorm ; b_atmp = 1.0 / ( b_atmp - xnorm
) ; lastc = ii - i ; for ( c_k = ii + 1 ; c_k < lastc + 18 ; c_k ++ ) { A [
c_k ] *= b_atmp ; } for ( lastc = 0 ; lastc <= knt ; lastc ++ ) { xnorm *=
1.0020841800044864E-292 ; } b_atmp = xnorm ; } else { tau [ i ] = ( xnorm - A
[ ii ] ) / xnorm ; b_atmp = 1.0 / ( A [ ii ] - xnorm ) ; knt = ii - i ; for (
lastc = ii + 1 ; lastc < knt + 18 ; lastc ++ ) { A [ lastc ] *= b_atmp ; }
b_atmp = xnorm ; } } A [ ii ] = b_atmp ; if ( i + 1 < 6 ) { b_atmp = A [ ii ]
; A [ ii ] = 1.0 ; if ( tau [ i ] != 0.0 ) { knt = 18 - i ; lastc = ii - i ;
while ( ( knt > 0 ) && ( A [ lastc + 17 ] == 0.0 ) ) { knt -- ; lastc -- ; }
lastc = cs4xvlyvov ( knt , 5 - i , A , ii + 19 ) ; } else { knt = 0 ; lastc =
0 ; } if ( knt > 0 ) { py05jpluoi ( knt , lastc , A , ii + 19 , A , ii + 1 ,
work ) ; njqexkdehm ( knt , lastc , - tau [ i ] , ii + 1 , work , A , ii + 19
) ; } A [ ii ] = b_atmp ; } } } static void i3s0uecs3g ( const real_T A [ 108
] , real_T Q [ 108 ] , real_T R [ 36 ] ) { real_T b_A [ 108 ] ; real_T tau [
6 ] ; real_T work [ 6 ] ; int32_T d_i ; int32_T itau ; int32_T lastc ;
int32_T lastv ; memcpy ( & b_A [ 0 ] , & A [ 0 ] , 108U * sizeof ( real_T ) )
; oei1x0kbwy ( b_A , tau ) ; for ( itau = 0 ; itau < 6 ; itau ++ ) { for (
d_i = 0 ; d_i <= itau ; d_i ++ ) { R [ d_i + 6 * itau ] = b_A [ 18 * itau +
d_i ] ; } for ( d_i = itau + 1 ; d_i + 1 < 7 ; d_i ++ ) { R [ d_i + 6 * itau
] = 0.0 ; } work [ itau ] = 0.0 ; } for ( d_i = 5 ; d_i >= 0 ; d_i -- ) {
itau = ( d_i * 18 + d_i ) + 19 ; if ( d_i + 1 < 6 ) { b_A [ itau - 19 ] = 1.0
; if ( tau [ d_i ] != 0.0 ) { lastv = 18 - d_i ; lastc = itau - d_i ; while (
( lastv > 0 ) && ( b_A [ lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; }
lastc = cs4xvlyvov ( lastv , 5 - d_i , b_A , itau ) ; } else { lastv = 0 ;
lastc = 0 ; } if ( lastv > 0 ) { py05jpluoi ( lastv , lastc , b_A , itau ,
b_A , itau - 18 , work ) ; njqexkdehm ( lastv , lastc , - tau [ d_i ] , itau
- 18 , work , b_A , itau ) ; } } lastv = ( itau - d_i ) - 1 ; for ( lastc =
itau - 18 ; lastc < lastv ; lastc ++ ) { b_A [ lastc ] *= - tau [ d_i ] ; }
b_A [ itau - 19 ] = 1.0 - tau [ d_i ] ; for ( lastv = 0 ; lastv < d_i ; lastv
++ ) { b_A [ ( itau - lastv ) - 20 ] = 0.0 ; } } for ( itau = 0 ; itau < 6 ;
itau ++ ) { memcpy ( & Q [ itau * 18 ] , & b_A [ itau * 18 ] , 18U * sizeof (
real_T ) ) ; } } static void gdm2sitdfz ( const real_T A [ 72 ] , const
real_T S [ 144 ] , const real_T Ns [ 36 ] , real_T b_S [ 36 ] ) { real_T a__1
[ 108 ] ; real_T y_p [ 108 ] ; real_T y [ 72 ] ; real_T R [ 36 ] ; real_T s ;
int32_T aoffset ; int32_T coffset ; int32_T i ; int32_T j ; int32_T k ; for (
j = 0 ; j < 6 ; j ++ ) { coffset = j * 12 ; for ( i = 0 ; i < 12 ; i ++ ) {
aoffset = i * 12 ; s = 0.0 ; for ( k = 0 ; k < 12 ; k ++ ) { s += A [ k * 6 +
j ] * S [ aoffset + k ] ; } y [ coffset + i ] = s ; y_p [ i + 18 * j ] = y [
12 * j + i ] ; } } for ( j = 0 ; j < 6 ; j ++ ) { for ( coffset = 0 ; coffset
< 6 ; coffset ++ ) { y_p [ ( coffset + 18 * j ) + 12 ] = Ns [ 6 * coffset + j
] ; } } i3s0uecs3g ( y_p , a__1 , R ) ; for ( j = 0 ; j < 6 ; j ++ ) { for (
coffset = 0 ; coffset < 6 ; coffset ++ ) { b_S [ coffset + 6 * j ] = R [ 6 *
coffset + j ] ; } } } static void fcxwdc0onc ( const real_T A [ 36 ] , real_T
B_m [ 72 ] ) { int32_T i ; int32_T j ; int32_T jBcol ; int32_T k ; int32_T
kAcol ; for ( j = 0 ; j < 12 ; j ++ ) { jBcol = 6 * j ; for ( k = 0 ; k < 6 ;
k ++ ) { kAcol = 6 * k ; if ( B_m [ k + jBcol ] != 0.0 ) { B_m [ k + jBcol ]
/= A [ k + kAcol ] ; for ( i = k + 2 ; i < 7 ; i ++ ) { B_m [ ( i + jBcol ) -
1 ] -= A [ ( i + kAcol ) - 1 ] * B_m [ k + jBcol ] ; } } } } } static void
fil4k5pxzl ( const real_T A [ 36 ] , const real_T B_p [ 72 ] , real_T C [ 72
] ) { int32_T i ; int32_T j ; for ( j = 0 ; j < 12 ; j ++ ) { for ( i = 0 ; i
< 6 ; i ++ ) { C [ i + 6 * j ] = B_p [ 6 * j + i ] ; } } fcxwdc0onc ( A , C )
; } static void fcxwdc0oncs ( const real_T A [ 36 ] , real_T B_i [ 72 ] ) {
int32_T i ; int32_T j ; int32_T jBcol ; int32_T k ; int32_T kAcol ; for ( j =
0 ; j < 12 ; j ++ ) { jBcol = 6 * j ; for ( k = 5 ; k >= 0 ; k -- ) { kAcol =
6 * k ; if ( B_i [ k + jBcol ] != 0.0 ) { B_i [ k + jBcol ] /= A [ k + kAcol
] ; for ( i = 0 ; i < k ; i ++ ) { B_i [ i + jBcol ] -= B_i [ k + jBcol ] * A
[ i + kAcol ] ; } } } } } static void fil4k5pxzly ( const real_T A [ 36 ] ,
const real_T B_e [ 72 ] , real_T C [ 72 ] ) { int32_T i ; int32_T j ; for ( j
= 0 ; j < 12 ; j ++ ) { for ( i = 0 ; i < 6 ; i ++ ) { C [ i + 6 * j ] = B_e
[ 6 * j + i ] ; } } fcxwdc0oncs ( A , C ) ; } static real_T pwhwwst2ruk (
int32_T n , const real_T x [ 216 ] , int32_T ix0 ) { real_T absxk ; real_T
scale ; real_T t ; real_T y ; int32_T k ; int32_T kend ; y = 0.0 ; scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static
int32_T cs4xvlyvovg ( int32_T m , int32_T n , const real_T A [ 216 ] ,
int32_T ia0 ) { int32_T coltop ; int32_T exitg1 ; int32_T ia ; int32_T j ;
boolean_T exitg2 ; j = n ; exitg2 = false ; while ( ( ! exitg2 ) && ( j > 0 )
) { coltop = ( j - 1 ) * 18 + ia0 ; ia = coltop ; do { exitg1 = 0 ; if ( ia
<= ( coltop + m ) - 1 ) { if ( A [ ia - 1 ] != 0.0 ) { exitg1 = 1 ; } else {
ia ++ ; } } else { j -- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if (
exitg1 == 1 ) { exitg2 = true ; } } return j ; } static void py05jpluoiw (
int32_T m , int32_T n , const real_T A [ 216 ] , int32_T ia0 , const real_T x
[ 216 ] , int32_T ix0 , real_T y [ 12 ] ) { real_T c ; int32_T b ; int32_T
b_b ; int32_T b_iy ; int32_T ia ; int32_T iac ; int32_T ix ; if ( n != 0 ) {
for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy = 0 ; b = (
n - 1 ) * 18 + ia0 ; for ( iac = ia0 ; iac <= b ; iac += 18 ) { ix = ix0 ; c
= 0.0 ; b_b = iac + m ; for ( ia = iac ; ia < b_b ; ia ++ ) { c += A [ ia - 1
] * x [ ix - 1 ] ; ix ++ ; } y [ b_iy ] += c ; b_iy ++ ; } } } static void
njqexkdehmr ( int32_T m , int32_T n , real_T alpha1 , int32_T ix0 , const
real_T y [ 12 ] , real_T A [ 216 ] , int32_T ia0 ) { real_T temp ; int32_T b
; int32_T ijA ; int32_T ix ; int32_T j ; int32_T jA ; int32_T jy ; if ( ! (
alpha1 == 0.0 ) ) { jA = ia0 - 1 ; jy = 0 ; for ( j = 0 ; j < n ; j ++ ) { if
( y [ jy ] != 0.0 ) { temp = y [ jy ] * alpha1 ; ix = ix0 ; b = m + jA ; for
( ijA = jA ; ijA < b ; ijA ++ ) { A [ ijA ] += A [ ix - 1 ] * temp ; ix ++ ;
} } jy ++ ; jA += 18 ; } } } static void bwoz5qtszc ( int32_T m , int32_T n ,
int32_T iv0 , real_T tau , real_T C [ 216 ] , int32_T ic0 , real_T work [ 12
] ) { int32_T lastc ; int32_T lastv ; if ( tau != 0.0 ) { lastv = m ; lastc =
iv0 + m ; while ( ( lastv > 0 ) && ( C [ lastc - 2 ] == 0.0 ) ) { lastv -- ;
lastc -- ; } lastc = cs4xvlyvovg ( lastv , n , C , ic0 ) ; } else { lastv = 0
; lastc = 0 ; } if ( lastv > 0 ) { py05jpluoiw ( lastv , lastc , C , ic0 , C
, iv0 , work ) ; njqexkdehmr ( lastv , lastc , - tau , iv0 , work , C , ic0 )
; } } static void oei1x0kbwy1 ( real_T A [ 216 ] , real_T tau [ 12 ] ) {
real_T work [ 12 ] ; real_T b_atmp ; real_T xnorm ; int32_T b_k ; int32_T c_k
; int32_T i ; int32_T ii ; int32_T knt ; memset ( & work [ 0 ] , 0 , 12U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 12 ; i ++ ) { ii = i * 18 + i ;
b_atmp = A [ ii ] ; tau [ i ] = 0.0 ; xnorm = pwhwwst2ruk ( 17 - i , A , ii +
2 ) ; if ( xnorm != 0.0 ) { xnorm = muDoubleScalarHypot ( A [ ii ] , xnorm )
; if ( A [ ii ] >= 0.0 ) { xnorm = - xnorm ; } if ( muDoubleScalarAbs ( xnorm
) < 1.0020841800044864E-292 ) { knt = - 1 ; b_k = ii - i ; do { knt ++ ; for
( c_k = ii + 1 ; c_k < b_k + 18 ; c_k ++ ) { A [ c_k ] *=
9.9792015476736E+291 ; } xnorm *= 9.9792015476736E+291 ; b_atmp *=
9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( b_atmp ,
pwhwwst2ruk ( 17 - i , A , ii + 2 ) ) ; if ( b_atmp >= 0.0 ) { xnorm = -
xnorm ; } tau [ i ] = ( xnorm - b_atmp ) / xnorm ; b_atmp = 1.0 / ( b_atmp -
xnorm ) ; b_k = ii - i ; for ( c_k = ii + 1 ; c_k < b_k + 18 ; c_k ++ ) { A [
c_k ] *= b_atmp ; } for ( b_k = 0 ; b_k <= knt ; b_k ++ ) { xnorm *=
1.0020841800044864E-292 ; } b_atmp = xnorm ; } else { tau [ i ] = ( xnorm - A
[ ii ] ) / xnorm ; b_atmp = 1.0 / ( A [ ii ] - xnorm ) ; knt = ii - i ; for (
b_k = ii + 1 ; b_k < knt + 18 ; b_k ++ ) { A [ b_k ] *= b_atmp ; } b_atmp =
xnorm ; } } A [ ii ] = b_atmp ; if ( i + 1 < 12 ) { b_atmp = A [ ii ] ; A [
ii ] = 1.0 ; bwoz5qtszc ( 18 - i , 11 - i , ii + 1 , tau [ i ] , A , ii + 19
, work ) ; A [ ii ] = b_atmp ; } } } static void nrsv2kw5et ( real_T A [ 216
] , const real_T tau [ 12 ] ) { real_T work [ 12 ] ; int32_T i ; int32_T iaii
; int32_T lastc ; int32_T lastv ; memset ( & work [ 0 ] , 0 , 12U * sizeof (
real_T ) ) ; for ( i = 11 ; i >= 0 ; i -- ) { iaii = ( i * 18 + i ) + 19 ; if
( i + 1 < 12 ) { A [ iaii - 19 ] = 1.0 ; if ( tau [ i ] != 0.0 ) { lastv = 18
- i ; lastc = iaii - i ; while ( ( lastv > 0 ) && ( A [ lastc - 2 ] == 0.0 )
) { lastv -- ; lastc -- ; } lastc = cs4xvlyvovg ( lastv , 11 - i , A , iaii )
; } else { lastv = 0 ; lastc = 0 ; } if ( lastv > 0 ) { py05jpluoiw ( lastv ,
lastc , A , iaii , A , iaii - 18 , work ) ; njqexkdehmr ( lastv , lastc , -
tau [ i ] , iaii - 18 , work , A , iaii ) ; } } lastv = ( iaii - i ) - 1 ;
for ( lastc = iaii - 18 ; lastc < lastv ; lastc ++ ) { A [ lastc ] *= - tau [
i ] ; } A [ iaii - 19 ] = 1.0 - tau [ i ] ; for ( lastv = 0 ; lastv < i ;
lastv ++ ) { A [ ( iaii - lastv ) - 20 ] = 0.0 ; } } } static void
i3s0uecs3gd ( const real_T A [ 216 ] , real_T Q [ 216 ] , real_T R [ 144 ] )
{ real_T b_A [ 216 ] ; real_T tau [ 12 ] ; int32_T i ; int32_T j ; memcpy ( &
b_A [ 0 ] , & A [ 0 ] , 216U * sizeof ( real_T ) ) ; oei1x0kbwy1 ( b_A , tau
) ; for ( j = 0 ; j < 12 ; j ++ ) { for ( i = 0 ; i <= j ; i ++ ) { R [ i +
12 * j ] = b_A [ 18 * j + i ] ; } for ( i = j + 1 ; i + 1 < 13 ; i ++ ) { R [
i + 12 * j ] = 0.0 ; } } nrsv2kw5et ( b_A , tau ) ; for ( j = 0 ; j < 12 ; j
++ ) { memcpy ( & Q [ j * 18 ] , & b_A [ j * 18 ] , 18U * sizeof ( real_T ) )
; } } static void gdm2sitdfzs ( const real_T A [ 144 ] , real_T S [ 144 ] ,
const real_T Ns [ 72 ] ) { real_T a__1 [ 216 ] ; real_T tmp [ 216 ] ; real_T
R [ 144 ] ; int32_T i ; int32_T i_p ; cjv2dxlysh ( S , A , R ) ; for ( i_p =
0 ; i_p < 12 ; i_p ++ ) { memcpy ( & tmp [ i_p * 18 ] , & R [ i_p * 12 ] ,
12U * sizeof ( real_T ) ) ; } for ( i_p = 0 ; i_p < 12 ; i_p ++ ) { for ( i =
0 ; i < 6 ; i ++ ) { tmp [ ( i + 18 * i_p ) + 12 ] = Ns [ 12 * i + i_p ] ; }
} i3s0uecs3gd ( tmp , a__1 , R ) ; for ( i_p = 0 ; i_p < 12 ; i_p ++ ) { for
( i = 0 ; i < 12 ; i ++ ) { S [ i + 12 * i_p ] = R [ 12 * i + i_p ] ; } } }
static void kutfclulan ( const real_T x [ 36 ] , real_T y [ 36 ] ) { real_T A
[ 36 ] ; real_T b_y ; real_T smax ; int32_T b_b ; int32_T c_ix ; int32_T c_j
; int32_T d_k ; int32_T ijA ; int32_T ix ; int32_T iy ; int32_T pipk ; int8_T
ipiv [ 6 ] ; int8_T p [ 6 ] ; int8_T ipiv_p ; for ( c_j = 0 ; c_j < 36 ; c_j
++ ) { y [ c_j ] = 0.0 ; A [ c_j ] = x [ c_j ] ; } for ( c_j = 0 ; c_j < 6 ;
c_j ++ ) { ipiv [ c_j ] = ( int8_T ) ( c_j + 1 ) ; } for ( c_j = 0 ; c_j < 5
; c_j ++ ) { pipk = c_j * 7 ; iy = 0 ; ix = pipk ; smax = muDoubleScalarAbs (
A [ pipk ] ) ; for ( d_k = 2 ; d_k <= 6 - c_j ; d_k ++ ) { ix ++ ; b_y =
muDoubleScalarAbs ( A [ ix ] ) ; if ( b_y > smax ) { iy = d_k - 1 ; smax =
b_y ; } } if ( A [ pipk + iy ] != 0.0 ) { if ( iy != 0 ) { ipiv [ c_j ] = (
int8_T ) ( ( c_j + iy ) + 1 ) ; iy += c_j ; for ( d_k = 0 ; d_k < 6 ; d_k ++
) { smax = A [ d_k * 6 + c_j ] ; A [ c_j + d_k * 6 ] = A [ d_k * 6 + iy ] ; A
[ iy + d_k * 6 ] = smax ; } } iy = ( pipk - c_j ) + 6 ; for ( ix = pipk + 1 ;
ix < iy ; ix ++ ) { A [ ix ] /= A [ pipk ] ; } } iy = pipk ; ix = pipk + 6 ;
for ( d_k = 0 ; d_k <= 4 - c_j ; d_k ++ ) { smax = A [ ix ] ; if ( A [ ix ]
!= 0.0 ) { c_ix = pipk + 1 ; b_b = iy - c_j ; for ( ijA = iy + 7 ; ijA < b_b
+ 12 ; ijA ++ ) { A [ ijA ] += A [ c_ix ] * - smax ; c_ix ++ ; } } ix += 6 ;
iy += 6 ; } } for ( c_j = 0 ; c_j < 6 ; c_j ++ ) { p [ c_j ] = ( int8_T ) (
c_j + 1 ) ; } for ( c_j = 0 ; c_j < 5 ; c_j ++ ) { ipiv_p = ipiv [ c_j ] ; if
( ipiv_p > c_j + 1 ) { pipk = p [ ipiv_p - 1 ] ; p [ ipiv_p - 1 ] = p [ c_j ]
; p [ c_j ] = ( int8_T ) pipk ; } } for ( c_j = 0 ; c_j < 6 ; c_j ++ ) { pipk
= p [ c_j ] - 1 ; y [ c_j + 6 * ( p [ c_j ] - 1 ) ] = 1.0 ; for ( iy = c_j ;
iy + 1 < 7 ; iy ++ ) { if ( y [ 6 * pipk + iy ] != 0.0 ) { for ( ix = iy + 1
; ix + 1 < 7 ; ix ++ ) { y [ ix + 6 * pipk ] -= y [ 6 * pipk + iy ] * A [ 6 *
iy + ix ] ; } } } } for ( c_j = 0 ; c_j < 6 ; c_j ++ ) { pipk = 6 * c_j ; for
( iy = 5 ; iy >= 0 ; iy -- ) { ix = 6 * iy ; if ( y [ iy + pipk ] != 0.0 ) {
y [ iy + pipk ] /= A [ iy + ix ] ; for ( d_k = 0 ; d_k < iy ; d_k ++ ) { y [
d_k + pipk ] -= y [ iy + pipk ] * A [ d_k + ix ] ; } } } } } static int8_T
ejqzf53mwt ( real_T R [ 144 ] , const real_T x [ 12 ] ) { real_T b_x [ 12 ] ;
real_T c [ 12 ] ; real_T s [ 12 ] ; real_T absxk ; real_T rho ; real_T scale
; real_T t ; real_T temp ; int32_T b_k ; int32_T i ; int32_T iAcol ; int8_T p
; boolean_T errorCondition ; for ( i = 0 ; i < 12 ; i ++ ) { for ( iAcol = 0
; iAcol <= 10 - i ; iAcol ++ ) { R [ ( ( i + iAcol ) + 12 * i ) + 1 ] = 0.0 ;
} } p = 0 ; errorCondition = false ; for ( i = 0 ; i < 12 ; i ++ ) { if (
errorCondition || ( R [ 12 * i + i ] == 0.0 ) ) { errorCondition = true ; } }
if ( errorCondition ) { p = 2 ; } else { memcpy ( & b_x [ 0 ] , & x [ 0 ] ,
12U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 12 ; i ++ ) { iAcol = 12 * i ;
temp = b_x [ i ] ; for ( b_k = 0 ; b_k < i ; b_k ++ ) { temp -= R [ b_k +
iAcol ] * b_x [ b_k ] ; } b_x [ i ] = temp / R [ i + iAcol ] ; } temp = 0.0 ;
scale = 3.3121686421112381E-170 ; for ( i = 0 ; i < 12 ; i ++ ) { absxk =
muDoubleScalarAbs ( b_x [ i ] ) ; if ( absxk > scale ) { t = scale / absxk ;
temp = temp * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; temp
+= t * t ; } } temp = scale * muDoubleScalarSqrt ( temp ) ; if ( temp >= 1.0
) { p = 1 ; } else { scale = muDoubleScalarSqrt ( 1.0 - temp * temp ) ; for (
i = 11 ; i >= 0 ; i -- ) { t = b_x [ i ] ; temp = muDoubleScalarAbs ( scale )
; absxk = muDoubleScalarAbs ( t ) ; if ( absxk == 0.0 ) { c [ i ] = 1.0 ; s [
i ] = 0.0 ; } else if ( temp == 0.0 ) { c [ i ] = 0.0 ; s [ i ] = 1.0 ; scale
= t ; } else { temp += absxk ; scale /= temp ; absxk = t / temp ; t =
muDoubleScalarAbs ( scale ) ; rho = muDoubleScalarHypot ( t ,
muDoubleScalarAbs ( absxk ) ) ; c [ i ] = t / rho ; scale /= t ; s [ i ] =
scale * absxk / rho ; rho *= temp ; scale *= rho ; } b_x [ i ] = 0.0 ; } for
( i = 0 ; i < 12 ; i ++ ) { for ( iAcol = i ; iAcol + 1 > 0 ; iAcol -- ) {
temp = R [ 12 * i + iAcol ] * s [ iAcol ] ; R [ iAcol + 12 * i ] = R [ 12 * i
+ iAcol ] * c [ iAcol ] - s [ iAcol ] * b_x [ i ] ; b_x [ i ] = c [ iAcol ] *
b_x [ i ] + temp ; } } } } return p ; } static real_T pwhwwst2rukzh ( int32_T
n , const real_T x [ 144 ] , int32_T ix0 ) { real_T absxk ; real_T scale ;
real_T t ; real_T y ; int32_T k ; int32_T kend ; y = 0.0 ; if ( n >= 1 ) { if
( n == 1 ) { y = muDoubleScalarAbs ( x [ ix0 - 1 ] ) ; } else { scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt ( y ) ; } } return y
; } static void j0ljh1qy4q ( int32_T n , real_T a , real_T x [ 144 ] ,
int32_T ix0 ) { int32_T b ; int32_T k ; b = ix0 + n ; for ( k = ix0 ; k < b ;
k ++ ) { x [ k - 1 ] *= a ; } } static real_T pwhwwst2rukzhu ( int32_T n ,
const real_T x [ 12 ] , int32_T ix0 ) { real_T absxk ; real_T scale ; real_T
t ; real_T y ; int32_T k ; int32_T kend ; y = 0.0 ; scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static
void j0ljh1qy4ql ( int32_T n , real_T a , real_T x [ 12 ] , int32_T ix0 ) {
int32_T b ; int32_T k ; b = ix0 + n ; for ( k = ix0 ; k < b ; k ++ ) { x [ k
- 1 ] *= a ; } } static void hxwyn5jvobs5 ( int32_T n , real_T a , const
real_T x [ 12 ] , int32_T ix0 , real_T y [ 144 ] , int32_T iy0 ) { int32_T ix
; int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) ) { ix = ix0 - 1 ; iy = iy0 -
1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a * x [ ix ] ; ix ++ ; iy ++ ;
} } } static void hxwyn5jvobs ( int32_T n , real_T a , const real_T x [ 144 ]
, int32_T ix0 , real_T y [ 12 ] , int32_T iy0 ) { int32_T ix ; int32_T iy ;
int32_T k ; if ( ! ( a == 0.0 ) ) { ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0
; k < n ; k ++ ) { y [ iy ] += a * x [ ix ] ; ix ++ ; iy ++ ; } } } static
real_T lqs4tm5svg ( int32_T n , const real_T x [ 144 ] , int32_T ix0 , const
real_T y [ 144 ] , int32_T iy0 ) { real_T d ; int32_T ix ; int32_T iy ;
int32_T k ; d = 0.0 ; ix = ix0 ; iy = iy0 ; for ( k = 0 ; k < n ; k ++ ) { d
+= x [ ix - 1 ] * y [ iy - 1 ] ; ix ++ ; iy ++ ; } return d ; } static void
hxwyn5jvob ( int32_T n , real_T a , int32_T ix0 , real_T y [ 144 ] , int32_T
iy0 ) { int32_T ix ; int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) ) { ix =
ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a * y [
ix ] ; ix ++ ; iy ++ ; } } } static void j0ljh1qy4qlb ( real_T a , real_T x [
144 ] , int32_T ix0 ) { int32_T k ; for ( k = ix0 ; k <= ix0 + 11 ; k ++ ) {
x [ k - 1 ] *= a ; } } static void mfjl5ukh3k ( real_T x [ 144 ] , int32_T
ix0 , int32_T iy0 ) { real_T temp ; int32_T k ; for ( k = 0 ; k < 12 ; k ++ )
{ temp = x [ ( ix0 + k ) - 1 ] ; x [ ( ix0 + k ) - 1 ] = x [ ( iy0 + k ) - 1
] ; x [ ( iy0 + k ) - 1 ] = temp ; } } static void hifwategio ( real_T * a ,
real_T * b , real_T * c , real_T * s ) { real_T absa ; real_T absb ; real_T
ads ; real_T bds ; real_T roe ; real_T scale ; roe = * b ; absa =
muDoubleScalarAbs ( * a ) ; absb = muDoubleScalarAbs ( * b ) ; if ( absa >
absb ) { roe = * a ; } scale = absa + absb ; if ( scale == 0.0 ) { * s = 0.0
; * c = 1.0 ; * b = 0.0 ; } else { ads = absa / scale ; bds = absb / scale ;
scale *= muDoubleScalarSqrt ( ads * ads + bds * bds ) ; if ( roe < 0.0 ) {
scale = - scale ; } * c = * a / scale ; * s = * b / scale ; if ( absa > absb
) { * b = * s ; } else if ( * c != 0.0 ) { * b = 1.0 / * c ; } else { * b =
1.0 ; } } * a = scale ; } static void mgdvrmze2v ( real_T x [ 144 ] , int32_T
ix0 , int32_T iy0 , real_T c , real_T s ) { real_T temp ; int32_T k ; for ( k
= 0 ; k < 12 ; k ++ ) { temp = x [ ( ix0 + k ) - 1 ] * c + x [ ( iy0 + k ) -
1 ] * s ; x [ ( iy0 + k ) - 1 ] = x [ ( iy0 + k ) - 1 ] * c - x [ ( ix0 + k )
- 1 ] * s ; x [ ( ix0 + k ) - 1 ] = temp ; } } static void o1iqpcejxmf (
const real_T A [ 144 ] , real_T U [ 144 ] , real_T s [ 12 ] , real_T V [ 144
] ) { real_T b_A [ 144 ] ; real_T e [ 12 ] ; real_T work [ 12 ] ; real_T emm1
; real_T nrm ; real_T rt ; real_T shift ; real_T smm1 ; real_T sqds ; real_T
ztest ; int32_T exitg1 ; int32_T i ; int32_T k_ii ; int32_T qjj ; int32_T
qp1jj ; int32_T qp1q ; int32_T qq ; boolean_T apply_transform ; boolean_T
exitg2 ; memcpy ( & b_A [ 0 ] , & A [ 0 ] , 144U * sizeof ( real_T ) ) ;
memset ( & s [ 0 ] , 0 , 12U * sizeof ( real_T ) ) ; memset ( & e [ 0 ] , 0 ,
12U * sizeof ( real_T ) ) ; memset ( & work [ 0 ] , 0 , 12U * sizeof ( real_T
) ) ; memset ( & U [ 0 ] , 0 , 144U * sizeof ( real_T ) ) ; memset ( & V [ 0
] , 0 , 144U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 11 ; i ++ ) { qq = 12
* i + i ; apply_transform = false ; nrm = pwhwwst2rukzh ( 12 - i , b_A , qq +
1 ) ; if ( nrm > 0.0 ) { apply_transform = true ; if ( b_A [ qq ] < 0.0 ) { s
[ i ] = - nrm ; } else { s [ i ] = nrm ; } if ( muDoubleScalarAbs ( s [ i ] )
>= 1.0020841800044864E-292 ) { j0ljh1qy4q ( 12 - i , 1.0 / s [ i ] , b_A , qq
+ 1 ) ; } else { qp1q = ( qq - i ) + 12 ; for ( qjj = qq ; qjj < qp1q ; qjj
++ ) { b_A [ qjj ] /= s [ i ] ; } } b_A [ qq ] ++ ; s [ i ] = - s [ i ] ; }
else { s [ i ] = 0.0 ; } for ( qp1q = i + 1 ; qp1q + 1 < 13 ; qp1q ++ ) { qjj
= 12 * qp1q + i ; if ( apply_transform ) { hxwyn5jvob ( 12 - i , - (
lqs4tm5svg ( 12 - i , b_A , qq + 1 , b_A , qjj + 1 ) / b_A [ i + 12 * i ] ) ,
qq + 1 , b_A , qjj + 1 ) ; } e [ qp1q ] = b_A [ qjj ] ; } for ( qq = i ; qq +
1 < 13 ; qq ++ ) { U [ qq + 12 * i ] = b_A [ 12 * i + qq ] ; } if ( i + 1 <=
10 ) { nrm = pwhwwst2rukzhu ( 11 - i , e , i + 2 ) ; if ( nrm == 0.0 ) { e [
i ] = 0.0 ; } else { if ( e [ i + 1 ] < 0.0 ) { e [ i ] = - nrm ; } else { e
[ i ] = nrm ; } nrm = e [ i ] ; if ( muDoubleScalarAbs ( e [ i ] ) >=
1.0020841800044864E-292 ) { j0ljh1qy4ql ( 11 - i , 1.0 / e [ i ] , e , i + 2
) ; } else { for ( qq = i + 1 ; qq < 12 ; qq ++ ) { e [ qq ] /= nrm ; } } e [
i + 1 ] ++ ; e [ i ] = - e [ i ] ; for ( qq = i + 1 ; qq + 1 < 13 ; qq ++ ) {
work [ qq ] = 0.0 ; } for ( qq = i + 1 ; qq + 1 < 13 ; qq ++ ) { hxwyn5jvobs
( 11 - i , e [ qq ] , b_A , ( i + 12 * qq ) + 2 , work , i + 2 ) ; } for ( qq
= i + 1 ; qq + 1 < 13 ; qq ++ ) { hxwyn5jvobs5 ( 11 - i , - e [ qq ] / e [ i
+ 1 ] , work , i + 2 , b_A , ( i + 12 * qq ) + 2 ) ; } } for ( qq = i + 1 ;
qq + 1 < 13 ; qq ++ ) { V [ qq + 12 * i ] = e [ qq ] ; } } } i = 10 ; s [ 11
] = b_A [ 143 ] ; e [ 10 ] = b_A [ 142 ] ; e [ 11 ] = 0.0 ; memset ( & U [
132 ] , 0 , 12U * sizeof ( real_T ) ) ; U [ 143 ] = 1.0 ; for ( qp1q = 10 ;
qp1q >= 0 ; qp1q -- ) { qq = 12 * qp1q + qp1q ; if ( s [ qp1q ] != 0.0 ) {
for ( qp1jj = qp1q + 1 ; qp1jj + 1 < 13 ; qp1jj ++ ) { qjj = ( 12 * qp1jj +
qp1q ) + 1 ; hxwyn5jvob ( 12 - qp1q , - ( lqs4tm5svg ( 12 - qp1q , U , qq + 1
, U , qjj ) / U [ qq ] ) , qq + 1 , U , qjj ) ; } for ( qjj = qp1q ; qjj + 1
< 13 ; qjj ++ ) { U [ qjj + 12 * qp1q ] = - U [ 12 * qp1q + qjj ] ; } U [ qq
] ++ ; for ( qq = 0 ; qq < qp1q ; qq ++ ) { U [ qq + 12 * qp1q ] = 0.0 ; } }
else { memset ( & U [ qp1q * 12 ] , 0 , 12U * sizeof ( real_T ) ) ; U [ qq ]
= 1.0 ; } } for ( qq = 11 ; qq >= 0 ; qq -- ) { if ( ( qq + 1 <= 10 ) && ( e
[ qq ] != 0.0 ) ) { qp1q = ( 12 * qq + qq ) + 2 ; for ( qjj = qq + 1 ; qjj +
1 < 13 ; qjj ++ ) { qp1jj = ( 12 * qjj + qq ) + 2 ; hxwyn5jvob ( 11 - qq , -
( lqs4tm5svg ( 11 - qq , V , qp1q , V , qp1jj ) / V [ qp1q - 1 ] ) , qp1q , V
, qp1jj ) ; } } memset ( & V [ qq * 12 ] , 0 , 12U * sizeof ( real_T ) ) ; V
[ qq + 12 * qq ] = 1.0 ; } for ( qq = 0 ; qq < 12 ; qq ++ ) { ztest = e [ qq
] ; if ( s [ qq ] != 0.0 ) { rt = muDoubleScalarAbs ( s [ qq ] ) ; nrm = s [
qq ] / rt ; s [ qq ] = rt ; if ( qq + 1 < 12 ) { ztest /= nrm ; }
j0ljh1qy4qlb ( nrm , U , 12 * qq + 1 ) ; } if ( ( qq + 1 < 12 ) && ( ztest !=
0.0 ) ) { rt = muDoubleScalarAbs ( ztest ) ; nrm = rt / ztest ; ztest = rt ;
s [ qq + 1 ] *= nrm ; j0ljh1qy4qlb ( nrm , V , 12 * ( qq + 1 ) + 1 ) ; } e [
qq ] = ztest ; } qq = 0 ; nrm = 0.0 ; for ( qp1q = 0 ; qp1q < 12 ; qp1q ++ )
{ nrm = muDoubleScalarMax ( nrm , muDoubleScalarMax ( muDoubleScalarAbs ( s [
qp1q ] ) , muDoubleScalarAbs ( e [ qp1q ] ) ) ) ; } while ( ( i + 2 > 0 ) &&
( qq < 75 ) ) { qp1jj = i + 1 ; do { exitg1 = 0 ; qp1q = qp1jj ; if ( qp1jj
== 0 ) { exitg1 = 1 ; } else { rt = muDoubleScalarAbs ( e [ qp1jj - 1 ] ) ;
if ( ( rt <= ( muDoubleScalarAbs ( s [ qp1jj - 1 ] ) + muDoubleScalarAbs ( s
[ qp1jj ] ) ) * 2.2204460492503131E-16 ) || ( ( rt <= 1.0020841800044864E-292
) || ( ( qq > 20 ) && ( rt <= 2.2204460492503131E-16 * nrm ) ) ) ) { e [
qp1jj - 1 ] = 0.0 ; exitg1 = 1 ; } else { qp1jj -- ; } } } while ( exitg1 ==
0 ) ; if ( i + 1 == qp1jj ) { qp1jj = 4 ; } else { qjj = i + 2 ; k_ii = i + 2
; exitg2 = false ; while ( ( ! exitg2 ) && ( k_ii >= qp1jj ) ) { qjj = k_ii ;
if ( k_ii == qp1jj ) { exitg2 = true ; } else { rt = 0.0 ; if ( k_ii < i + 2
) { rt = muDoubleScalarAbs ( e [ k_ii - 1 ] ) ; } if ( k_ii > qp1jj + 1 ) {
rt += muDoubleScalarAbs ( e [ k_ii - 2 ] ) ; } ztest = muDoubleScalarAbs ( s
[ k_ii - 1 ] ) ; if ( ( ztest <= 2.2204460492503131E-16 * rt ) || ( ztest <=
1.0020841800044864E-292 ) ) { s [ k_ii - 1 ] = 0.0 ; exitg2 = true ; } else {
k_ii -- ; } } } if ( qjj == qp1jj ) { qp1jj = 3 ; } else if ( i + 2 == qjj )
{ qp1jj = 1 ; } else { qp1jj = 2 ; qp1q = qjj ; } } switch ( qp1jj ) { case 1
: rt = e [ i ] ; e [ i ] = 0.0 ; for ( qjj = i ; qjj + 1 >= qp1q + 1 ; qjj --
) { hifwategio ( & s [ qjj ] , & rt , & ztest , & sqds ) ; if ( qjj + 1 >
qp1q + 1 ) { rt = e [ qjj - 1 ] * - sqds ; e [ qjj - 1 ] *= ztest ; }
mgdvrmze2v ( V , 12 * qjj + 1 , 12 * ( i + 1 ) + 1 , ztest , sqds ) ; } break
; case 2 : rt = e [ qp1q - 1 ] ; e [ qp1q - 1 ] = 0.0 ; for ( qjj = qp1q ;
qjj < i + 2 ; qjj ++ ) { hifwategio ( & s [ qjj ] , & rt , & ztest , & sqds )
; rt = - sqds * e [ qjj ] ; e [ qjj ] *= ztest ; mgdvrmze2v ( U , 12 * qjj +
1 , 12 * ( qp1q - 1 ) + 1 , ztest , sqds ) ; } break ; case 3 : ztest =
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( muDoubleScalarAbs ( s [ i + 1 ] ) , muDoubleScalarAbs ( s [ i ] ) ) ,
muDoubleScalarAbs ( e [ i ] ) ) , muDoubleScalarAbs ( s [ qp1q ] ) ) ,
muDoubleScalarAbs ( e [ qp1q ] ) ) ; rt = s [ i + 1 ] / ztest ; smm1 = s [ i
] / ztest ; emm1 = e [ i ] / ztest ; sqds = s [ qp1q ] / ztest ; smm1 = ( (
smm1 + rt ) * ( smm1 - rt ) + emm1 * emm1 ) / 2.0 ; emm1 *= rt ; emm1 *= emm1
; if ( ( smm1 != 0.0 ) || ( emm1 != 0.0 ) ) { shift = muDoubleScalarSqrt (
smm1 * smm1 + emm1 ) ; if ( smm1 < 0.0 ) { shift = - shift ; } shift = emm1 /
( smm1 + shift ) ; } else { shift = 0.0 ; } rt = ( sqds + rt ) * ( sqds - rt
) + shift ; ztest = e [ qp1q ] / ztest * sqds ; for ( qjj = qp1q + 1 ; qjj <=
i + 1 ; qjj ++ ) { hifwategio ( & rt , & ztest , & sqds , & smm1 ) ; if ( qjj
> qp1q + 1 ) { e [ qjj - 2 ] = rt ; } rt = s [ qjj - 1 ] * sqds + e [ qjj - 1
] * smm1 ; e [ qjj - 1 ] = e [ qjj - 1 ] * sqds - s [ qjj - 1 ] * smm1 ;
ztest = smm1 * s [ qjj ] ; s [ qjj ] *= sqds ; mgdvrmze2v ( V , 12 * ( qjj -
1 ) + 1 , 12 * qjj + 1 , sqds , smm1 ) ; hifwategio ( & rt , & ztest , & sqds
, & smm1 ) ; s [ qjj - 1 ] = rt ; rt = e [ qjj - 1 ] * sqds + smm1 * s [ qjj
] ; s [ qjj ] = e [ qjj - 1 ] * - smm1 + sqds * s [ qjj ] ; ztest = smm1 * e
[ qjj ] ; e [ qjj ] *= sqds ; mgdvrmze2v ( U , 12 * ( qjj - 1 ) + 1 , 12 *
qjj + 1 , sqds , smm1 ) ; } e [ i ] = rt ; qq ++ ; break ; default : if ( s [
qp1q ] < 0.0 ) { s [ qp1q ] = - s [ qp1q ] ; j0ljh1qy4qlb ( - 1.0 , V , 12 *
qp1q + 1 ) ; } qq = qp1q + 1 ; while ( ( qp1q + 1 < 12 ) && ( s [ qp1q ] < s
[ qq ] ) ) { rt = s [ qp1q ] ; s [ qp1q ] = s [ qq ] ; s [ qq ] = rt ;
mfjl5ukh3k ( V , 12 * qp1q + 1 , 12 * ( qp1q + 1 ) + 1 ) ; mfjl5ukh3k ( U ,
12 * qp1q + 1 , 12 * ( qp1q + 1 ) + 1 ) ; qp1q = qq ; qq ++ ; } qq = 0 ; i --
; break ; } } } static void o1iqpcejxm ( const real_T A [ 144 ] , real_T U [
144 ] , real_T S [ 144 ] , real_T V [ 144 ] ) { real_T U1 [ 144 ] ; real_T V1
[ 144 ] ; real_T tmp [ 144 ] ; real_T s [ 12 ] ; real_T A_p ; int32_T i ;
boolean_T p ; p = true ; for ( i = 0 ; i < 144 ; i ++ ) { A_p = A [ i ] ; if
( p && ( ( ! muDoubleScalarIsInf ( A_p ) ) && ( ! muDoubleScalarIsNaN ( A_p )
) ) ) { } else { p = false ; } } if ( p ) { o1iqpcejxmf ( A , U , s , V ) ; }
else { memset ( & tmp [ 0 ] , 0 , 144U * sizeof ( real_T ) ) ; o1iqpcejxmf (
tmp , U1 , s , V1 ) ; for ( i = 0 ; i < 144 ; i ++ ) { U [ i ] = ( rtNaN ) ;
} for ( i = 0 ; i < 12 ; i ++ ) { s [ i ] = ( rtNaN ) ; } for ( i = 0 ; i <
144 ; i ++ ) { V [ i ] = ( rtNaN ) ; } } memset ( & S [ 0 ] , 0 , 144U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 12 ; i ++ ) { S [ i + 12 * i ] = s [
i ] ; } } static void nlqsk1o0fh ( const real_T A [ 144 ] , real_T R [ 144 ]
) { real_T Ss [ 144 ] ; real_T V [ 144 ] ; real_T a__1 [ 144 ] ; int32_T i ;
int32_T i_p ; int32_T k ; o1iqpcejxm ( A , a__1 , Ss , V ) ; for ( k = 0 ; k
< 144 ; k ++ ) { Ss [ k ] = muDoubleScalarSqrt ( Ss [ k ] ) ; } for ( k = 0 ;
k < 12 ; k ++ ) { for ( i = 0 ; i < 12 ; i ++ ) { R [ i + 12 * k ] = 0.0 ;
for ( i_p = 0 ; i_p < 12 ; i_p ++ ) { R [ i + 12 * k ] += V [ 12 * i_p + i ]
* Ss [ 12 * k + i_p ] ; } } } } static int32_T cs4xvlyvovgbw ( int32_T m ,
int32_T n , const real_T A [ 144 ] , int32_T ia0 ) { int32_T coltop ; int32_T
exitg1 ; int32_T ia ; int32_T j ; boolean_T exitg2 ; j = n ; exitg2 = false ;
while ( ( ! exitg2 ) && ( j > 0 ) ) { coltop = ( j - 1 ) * 12 + ia0 ; ia =
coltop ; do { exitg1 = 0 ; if ( ia <= ( coltop + m ) - 1 ) { if ( A [ ia - 1
] != 0.0 ) { exitg1 = 1 ; } else { ia ++ ; } } else { j -- ; exitg1 = 2 ; } }
while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } return j ; }
static void py05jpluoiwb0 ( int32_T m , int32_T n , const real_T A [ 144 ] ,
int32_T ia0 , const real_T x [ 144 ] , int32_T ix0 , real_T y [ 12 ] ) {
real_T c ; int32_T b ; int32_T b_b ; int32_T b_iy ; int32_T ia ; int32_T iac
; int32_T ix ; if ( n != 0 ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [
b_iy ] = 0.0 ; } b_iy = 0 ; b = ( n - 1 ) * 12 + ia0 ; for ( iac = ia0 ; iac
<= b ; iac += 12 ) { ix = ix0 ; c = 0.0 ; b_b = iac + m ; for ( ia = iac ; ia
< b_b ; ia ++ ) { c += A [ ia - 1 ] * x [ ix - 1 ] ; ix ++ ; } y [ b_iy ] +=
c ; b_iy ++ ; } } } static void njqexkdehmr2u ( int32_T m , int32_T n ,
real_T alpha1 , int32_T ix0 , const real_T y [ 12 ] , real_T A [ 144 ] ,
int32_T ia0 ) { real_T temp ; int32_T b ; int32_T ijA ; int32_T ix ; int32_T
j ; int32_T jA ; int32_T jy ; if ( ! ( alpha1 == 0.0 ) ) { jA = ia0 - 1 ; jy
= 0 ; for ( j = 0 ; j < n ; j ++ ) { if ( y [ jy ] != 0.0 ) { temp = y [ jy ]
* alpha1 ; ix = ix0 ; b = m + jA ; for ( ijA = jA ; ijA < b ; ijA ++ ) { A [
ijA ] += A [ ix - 1 ] * temp ; ix ++ ; } } jy ++ ; jA += 12 ; } } } static
void oei1x0kbwy14d ( real_T A [ 144 ] , real_T tau [ 12 ] ) { real_T work [
12 ] ; real_T b_atmp ; real_T xnorm ; int32_T c_k ; int32_T i ; int32_T ii ;
int32_T knt ; int32_T lastc ; memset ( & tau [ 0 ] , 0 , 12U * sizeof (
real_T ) ) ; memset ( & work [ 0 ] , 0 , 12U * sizeof ( real_T ) ) ; for ( i
= 0 ; i < 12 ; i ++ ) { ii = i * 12 + i ; if ( i + 1 < 12 ) { b_atmp = A [ ii
] ; tau [ i ] = 0.0 ; xnorm = pwhwwst2rukzh ( 11 - i , A , ii + 2 ) ; if (
xnorm != 0.0 ) { xnorm = muDoubleScalarHypot ( A [ ii ] , xnorm ) ; if ( A [
ii ] >= 0.0 ) { xnorm = - xnorm ; } if ( muDoubleScalarAbs ( xnorm ) <
1.0020841800044864E-292 ) { knt = - 1 ; lastc = ii - i ; do { knt ++ ; for (
c_k = ii + 1 ; c_k < lastc + 12 ; c_k ++ ) { A [ c_k ] *=
9.9792015476736E+291 ; } xnorm *= 9.9792015476736E+291 ; b_atmp *=
9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( b_atmp ,
pwhwwst2rukzh ( 11 - i , A , ii + 2 ) ) ; if ( b_atmp >= 0.0 ) { xnorm = -
xnorm ; } tau [ i ] = ( xnorm - b_atmp ) / xnorm ; b_atmp = 1.0 / ( b_atmp -
xnorm ) ; lastc = ii - i ; for ( c_k = ii + 1 ; c_k < lastc + 12 ; c_k ++ ) {
A [ c_k ] *= b_atmp ; } for ( lastc = 0 ; lastc <= knt ; lastc ++ ) { xnorm
*= 1.0020841800044864E-292 ; } b_atmp = xnorm ; } else { tau [ i ] = ( xnorm
- A [ ii ] ) / xnorm ; b_atmp = 1.0 / ( A [ ii ] - xnorm ) ; knt = ii - i ;
for ( lastc = ii + 1 ; lastc < knt + 12 ; lastc ++ ) { A [ lastc ] *= b_atmp
; } b_atmp = xnorm ; } } A [ ii ] = b_atmp ; b_atmp = A [ ii ] ; A [ ii ] =
1.0 ; if ( tau [ i ] != 0.0 ) { knt = 12 - i ; lastc = ii - i ; while ( ( knt
> 0 ) && ( A [ lastc + 11 ] == 0.0 ) ) { knt -- ; lastc -- ; } lastc =
cs4xvlyvovgbw ( knt , 11 - i , A , ii + 13 ) ; } else { knt = 0 ; lastc = 0 ;
} if ( knt > 0 ) { py05jpluoiwb0 ( knt , lastc , A , ii + 13 , A , ii + 1 ,
work ) ; njqexkdehmr2u ( knt , lastc , - tau [ i ] , ii + 1 , work , A , ii +
13 ) ; } A [ ii ] = b_atmp ; } else { tau [ 11 ] = 0.0 ; } } } static void
nrsv2kw5etqm ( real_T A [ 144 ] , const real_T tau [ 12 ] ) { real_T work [
12 ] ; int32_T i ; int32_T iaii ; int32_T lastc ; int32_T lastv ; memset ( &
work [ 0 ] , 0 , 12U * sizeof ( real_T ) ) ; for ( i = 11 ; i >= 0 ; i -- ) {
iaii = ( i * 12 + i ) + 13 ; if ( i + 1 < 12 ) { A [ iaii - 13 ] = 1.0 ; if (
tau [ i ] != 0.0 ) { lastv = 12 - i ; lastc = iaii - i ; while ( ( lastv > 0
) && ( A [ lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc =
cs4xvlyvovgbw ( lastv , 11 - i , A , iaii ) ; } else { lastv = 0 ; lastc = 0
; } if ( lastv > 0 ) { py05jpluoiwb0 ( lastv , lastc , A , iaii , A , iaii -
12 , work ) ; njqexkdehmr2u ( lastv , lastc , - tau [ i ] , iaii - 12 , work
, A , iaii ) ; } lastv = ( iaii - i ) - 1 ; for ( lastc = iaii - 12 ; lastc <
lastv ; lastc ++ ) { A [ lastc ] *= - tau [ i ] ; } } A [ iaii - 13 ] = 1.0 -
tau [ i ] ; for ( lastv = 0 ; lastv < i ; lastv ++ ) { A [ ( iaii - lastv ) -
14 ] = 0.0 ; } } } static void i3s0uecs3gdqp ( const real_T A [ 144 ] ,
real_T Q [ 144 ] , real_T R [ 144 ] ) { real_T b_A [ 144 ] ; real_T tau [ 12
] ; int32_T i ; int32_T j ; memcpy ( & b_A [ 0 ] , & A [ 0 ] , 144U * sizeof
( real_T ) ) ; oei1x0kbwy14d ( b_A , tau ) ; for ( j = 0 ; j < 12 ; j ++ ) {
for ( i = 0 ; i <= j ; i ++ ) { R [ i + 12 * j ] = b_A [ 12 * j + i ] ; } for
( i = j + 1 ; i + 1 < 13 ; i ++ ) { R [ i + 12 * j ] = 0.0 ; } } nrsv2kw5etqm
( b_A , tau ) ; for ( j = 0 ; j < 12 ; j ++ ) { memcpy ( & Q [ j * 12 ] , &
b_A [ j * 12 ] , 12U * sizeof ( real_T ) ) ; } } static void br2ebrixap (
real_T S [ 144 ] , const real_T U [ 72 ] ) { real_T S_e [ 144 ] ; real_T S_p
[ 144 ] ; real_T U_p [ 144 ] ; int32_T b_i ; int32_T exitg1 ; int32_T i ;
int32_T i_p ; int32_T j ; int8_T p ; boolean_T b_p ; boolean_T exitg2 ; for (
i = 0 ; i < 6 ; i ++ ) { p = ejqzf53mwt ( S , & U [ 12 * i ] ) ; if ( p != 0
) { for ( j = 0 ; j < 12 ; j ++ ) { for ( b_i = 0 ; b_i < 12 ; b_i ++ ) { S_p
[ j + 12 * b_i ] = 0.0 ; for ( i_p = 0 ; i_p < 12 ; i_p ++ ) { S_p [ j + 12 *
b_i ] += S [ 12 * j + i_p ] * S [ 12 * b_i + i_p ] ; } U_p [ b_i + 12 * j ] =
U [ 12 * i + b_i ] * U [ 12 * i + j ] ; } } for ( j = 0 ; j < 144 ; j ++ ) {
S_e [ j ] = S_p [ j ] - U_p [ j ] ; } nlqsk1o0fh ( S_e , S_p ) ; for ( j = 0
; j < 12 ; j ++ ) { for ( b_i = 0 ; b_i < 12 ; b_i ++ ) { S [ b_i + 12 * j ]
= S_p [ 12 * b_i + j ] ; } } b_p = true ; j = 0 ; exitg2 = false ; while ( (
! exitg2 ) && ( j < 12 ) ) { b_i = j + 1 ; do { exitg1 = 0 ; if ( b_i + 1 <
13 ) { if ( ! ( S [ 12 * j + b_i ] == 0.0 ) ) { b_p = false ; exitg1 = 1 ; }
else { b_i ++ ; } } else { j ++ ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if
( exitg1 == 1 ) { exitg2 = true ; } } if ( ! b_p ) { memcpy ( & S_e [ 0 ] , &
S [ 0 ] , 144U * sizeof ( real_T ) ) ; i3s0uecs3gdqp ( S_e , S_p , S ) ; } }
} for ( j = 0 ; j < 12 ; j ++ ) { for ( b_i = 0 ; b_i < 12 ; b_i ++ ) { S_p [
b_i + 12 * j ] = S [ 12 * b_i + j ] ; } } memcpy ( & S [ 0 ] , & S_p [ 0 ] ,
144U * sizeof ( real_T ) ) ; } static void msq4imazm5 ( real_T * x ) { real_T
absx ; real_T b_x ; int8_T n ; if ( muDoubleScalarIsInf ( * x ) ||
muDoubleScalarIsNaN ( * x ) ) { * x = ( rtNaN ) ; } else { b_x =
muDoubleScalarRem ( * x , 360.0 ) ; absx = muDoubleScalarAbs ( b_x ) ; if (
absx > 180.0 ) { if ( b_x > 0.0 ) { b_x -= 360.0 ; } else { b_x += 360.0 ; }
absx = muDoubleScalarAbs ( b_x ) ; } if ( absx <= 45.0 ) { b_x *=
0.017453292519943295 ; * x = muDoubleScalarCos ( b_x ) ; } else { if ( absx
<= 135.0 ) { if ( b_x > 0.0 ) { b_x = ( b_x - 90.0 ) * 0.017453292519943295 ;
n = 1 ; } else { b_x = ( b_x + 90.0 ) * 0.017453292519943295 ; n = - 1 ; } }
else if ( b_x > 0.0 ) { b_x = ( b_x - 180.0 ) * 0.017453292519943295 ; n = 2
; } else { b_x = ( b_x + 180.0 ) * 0.017453292519943295 ; n = - 2 ; } if ( n
== 1 ) { * x = - muDoubleScalarSin ( b_x ) ; } else if ( n == - 1 ) { * x =
muDoubleScalarSin ( b_x ) ; } else { * x = - muDoubleScalarCos ( b_x ) ; } }
} } static void pghym3yviy ( real_T * x ) { real_T absx ; real_T c_x ; int8_T
n ; if ( muDoubleScalarIsInf ( * x ) || muDoubleScalarIsNaN ( * x ) ) { * x =
( rtNaN ) ; } else { c_x = muDoubleScalarRem ( * x , 360.0 ) ; absx =
muDoubleScalarAbs ( c_x ) ; if ( absx > 180.0 ) { if ( c_x > 0.0 ) { c_x -=
360.0 ; } else { c_x += 360.0 ; } absx = muDoubleScalarAbs ( c_x ) ; } if (
absx <= 45.0 ) { c_x *= 0.017453292519943295 ; * x = muDoubleScalarSin ( c_x
) ; } else { if ( absx <= 135.0 ) { if ( c_x > 0.0 ) { c_x = ( c_x - 90.0 ) *
0.017453292519943295 ; n = 1 ; } else { c_x = ( c_x + 90.0 ) *
0.017453292519943295 ; n = - 1 ; } } else if ( c_x > 0.0 ) { c_x = ( c_x -
180.0 ) * 0.017453292519943295 ; n = 2 ; } else { c_x = ( c_x + 180.0 ) *
0.017453292519943295 ; n = - 2 ; } if ( n == 1 ) { * x = muDoubleScalarCos (
c_x ) ; } else if ( n == - 1 ) { * x = - muDoubleScalarCos ( c_x ) ; } else {
* x = - muDoubleScalarSin ( c_x ) ; } } } } void MdlInitialize ( void ) {
int32_T i ; static const uint32_T tmp [ 625 ] = { 5489U , 1301868182U ,
2938499221U , 2950281878U , 1875628136U , 751856242U , 944701696U ,
2243192071U , 694061057U , 219885934U , 2066767472U , 3182869408U ,
485472502U , 2336857883U , 1071588843U , 3418470598U , 951210697U ,
3693558366U , 2923482051U , 1793174584U , 2982310801U , 1586906132U ,
1951078751U , 1808158765U , 1733897588U , 431328322U , 4202539044U ,
530658942U , 1714810322U , 3025256284U , 3342585396U , 1937033938U ,
2640572511U , 1654299090U , 3692403553U , 4233871309U , 3497650794U ,
862629010U , 2943236032U , 2426458545U , 1603307207U , 1133453895U ,
3099196360U , 2208657629U , 2747653927U , 931059398U , 761573964U ,
3157853227U , 785880413U , 730313442U , 124945756U , 2937117055U ,
3295982469U , 1724353043U , 3021675344U , 3884886417U , 4010150098U ,
4056961966U , 699635835U , 2681338818U , 1339167484U , 720757518U ,
2800161476U , 2376097373U , 1532957371U , 3902664099U , 1238982754U ,
3725394514U , 3449176889U , 3570962471U , 4287636090U , 4087307012U ,
3603343627U , 202242161U , 2995682783U , 1620962684U , 3704723357U ,
371613603U , 2814834333U , 2111005706U , 624778151U , 2094172212U ,
4284947003U , 1211977835U , 991917094U , 1570449747U , 2962370480U ,
1259410321U , 170182696U , 146300961U , 2836829791U , 619452428U ,
2723670296U , 1881399711U , 1161269684U , 1675188680U , 4132175277U ,
780088327U , 3409462821U , 1036518241U , 1834958505U , 3048448173U ,
161811569U , 618488316U , 44795092U , 3918322701U , 1924681712U , 3239478144U
, 383254043U , 4042306580U , 2146983041U , 3992780527U , 3518029708U ,
3545545436U , 3901231469U , 1896136409U , 2028528556U , 2339662006U ,
501326714U , 2060962201U , 2502746480U , 561575027U , 581893337U ,
3393774360U , 1778912547U , 3626131687U , 2175155826U , 319853231U ,
986875531U , 819755096U , 2915734330U , 2688355739U , 3482074849U , 2736559U
, 2296975761U , 1029741190U , 2876812646U , 690154749U , 579200347U ,
4027461746U , 1285330465U , 2701024045U , 4117700889U , 759495121U ,
3332270341U , 2313004527U , 2277067795U , 4131855432U , 2722057515U ,
1264804546U , 3848622725U , 2211267957U , 4100593547U , 959123777U ,
2130745407U , 3194437393U , 486673947U , 1377371204U , 17472727U , 352317554U
, 3955548058U , 159652094U , 1232063192U , 3835177280U , 49423123U ,
3083993636U , 733092U , 2120519771U , 2573409834U , 1112952433U , 3239502554U
, 761045320U , 1087580692U , 2540165110U , 641058802U , 1792435497U ,
2261799288U , 1579184083U , 627146892U , 2165744623U , 2200142389U ,
2167590760U , 2381418376U , 1793358889U , 3081659520U , 1663384067U ,
2009658756U , 2689600308U , 739136266U , 2304581039U , 3529067263U ,
591360555U , 525209271U , 3131882996U , 294230224U , 2076220115U ,
3113580446U , 1245621585U , 1386885462U , 3203270426U , 123512128U ,
12350217U , 354956375U , 4282398238U , 3356876605U , 3888857667U , 157639694U
, 2616064085U , 1563068963U , 2762125883U , 4045394511U , 4180452559U ,
3294769488U , 1684529556U , 1002945951U , 3181438866U , 22506664U ,
691783457U , 2685221343U , 171579916U , 3878728600U , 2475806724U ,
2030324028U , 3331164912U , 1708711359U , 1970023127U , 2859691344U ,
2588476477U , 2748146879U , 136111222U , 2967685492U , 909517429U ,
2835297809U , 3206906216U , 3186870716U , 341264097U , 2542035121U ,
3353277068U , 548223577U , 3170936588U , 1678403446U , 297435620U ,
2337555430U , 466603495U , 1132321815U , 1208589219U , 696392160U ,
894244439U , 2562678859U , 470224582U , 3306867480U , 201364898U ,
2075966438U , 1767227936U , 2929737987U , 3674877796U , 2654196643U ,
3692734598U , 3528895099U , 2796780123U , 3048728353U , 842329300U ,
191554730U , 2922459673U , 3489020079U , 3979110629U , 1022523848U ,
2202932467U , 3583655201U , 3565113719U , 587085778U , 4176046313U ,
3013713762U , 950944241U , 396426791U , 3784844662U , 3477431613U ,
3594592395U , 2782043838U , 3392093507U , 3106564952U , 2829419931U ,
1358665591U , 2206918825U , 3170783123U , 31522386U , 2988194168U ,
1782249537U , 1105080928U , 843500134U , 1225290080U , 1521001832U ,
3605886097U , 2802786495U , 2728923319U , 3996284304U , 903417639U ,
1171249804U , 1020374987U , 2824535874U , 423621996U , 1988534473U ,
2493544470U , 1008604435U , 1756003503U , 1488867287U , 1386808992U ,
732088248U , 1780630732U , 2482101014U , 976561178U , 1543448953U ,
2602866064U , 2021139923U , 1952599828U , 2360242564U , 2117959962U ,
2753061860U , 2388623612U , 4138193781U , 2962920654U , 2284970429U ,
766920861U , 3457264692U , 2879611383U , 815055854U , 2332929068U ,
1254853997U , 3740375268U , 3799380844U , 4091048725U , 2006331129U ,
1982546212U , 686850534U , 1907447564U , 2682801776U , 2780821066U ,
998290361U , 1342433871U , 4195430425U , 607905174U , 3902331779U ,
2454067926U , 1708133115U , 1170874362U , 2008609376U , 3260320415U ,
2211196135U , 433538229U , 2728786374U , 2189520818U , 262554063U ,
1182318347U , 3710237267U , 1221022450U , 715966018U , 2417068910U ,
2591870721U , 2870691989U , 3418190842U , 4238214053U , 1540704231U ,
1575580968U , 2095917976U , 4078310857U , 2313532447U , 2110690783U ,
4056346629U , 4061784526U , 1123218514U , 551538993U , 597148360U ,
4120175196U , 3581618160U , 3181170517U , 422862282U , 3227524138U ,
1713114790U , 662317149U , 1230418732U , 928171837U , 1324564878U ,
1928816105U , 1786535431U , 2878099422U , 3290185549U , 539474248U ,
1657512683U , 552370646U , 1671741683U , 3655312128U , 1552739510U ,
2605208763U , 1441755014U , 181878989U , 3124053868U , 1447103986U ,
3183906156U , 1728556020U , 3502241336U , 3055466967U , 1013272474U ,
818402132U , 1715099063U , 2900113506U , 397254517U , 4194863039U ,
1009068739U , 232864647U , 2540223708U , 2608288560U , 2415367765U ,
478404847U , 3455100648U , 3182600021U , 2115988978U , 434269567U ,
4117179324U , 3461774077U , 887256537U , 3545801025U , 286388911U ,
3451742129U , 1981164769U , 786667016U , 3310123729U , 3097811076U ,
2224235657U , 2959658883U , 3370969234U , 2514770915U , 3345656436U ,
2677010851U , 2206236470U , 271648054U , 2342188545U , 4292848611U ,
3646533909U , 3754009956U , 3803931226U , 4160647125U , 1477814055U ,
4043852216U , 1876372354U , 3133294443U , 3871104810U , 3177020907U ,
2074304428U , 3479393793U , 759562891U , 164128153U , 1839069216U ,
2114162633U , 3989947309U , 3611054956U , 1333547922U , 835429831U ,
494987340U , 171987910U , 1252001001U , 370809172U , 3508925425U ,
2535703112U , 1276855041U , 1922855120U , 835673414U , 3030664304U ,
613287117U , 171219893U , 3423096126U , 3376881639U , 2287770315U ,
1658692645U , 1262815245U , 3957234326U , 1168096164U , 2968737525U ,
2655813712U , 2132313144U , 3976047964U , 326516571U , 353088456U ,
3679188938U , 3205649712U , 2654036126U , 1249024881U , 880166166U ,
691800469U , 2229503665U , 1673458056U , 4032208375U , 1851778863U ,
2563757330U , 376742205U , 1794655231U , 340247333U , 1505873033U ,
396524441U , 879666767U , 3335579166U , 3260764261U , 3335999539U ,
506221798U , 4214658741U , 975887814U , 2080536343U , 3360539560U ,
571586418U , 138896374U , 4234352651U , 2737620262U , 3928362291U ,
1516365296U , 38056726U , 3599462320U , 3585007266U , 3850961033U ,
471667319U , 1536883193U , 2310166751U , 1861637689U , 2530999841U ,
4139843801U , 2710569485U , 827578615U , 2012334720U , 2907369459U ,
3029312804U , 2820112398U , 1965028045U , 35518606U , 2478379033U ,
643747771U , 1924139484U , 4123405127U , 3811735531U , 3429660832U ,
3285177704U , 1948416081U , 1311525291U , 1183517742U , 1739192232U ,
3979815115U , 2567840007U , 4116821529U , 213304419U , 4125718577U ,
1473064925U , 2442436592U , 1893310111U , 4195361916U , 3747569474U ,
828465101U , 2991227658U , 750582866U , 1205170309U , 1409813056U ,
678418130U , 1171531016U , 3821236156U , 354504587U , 4202874632U ,
3882511497U , 1893248677U , 1903078632U , 26340130U , 2069166240U ,
3657122492U , 3725758099U , 831344905U , 811453383U , 3447711422U ,
2434543565U , 4166886888U , 3358210805U , 4142984013U , 2988152326U ,
3527824853U , 982082992U , 2809155763U , 190157081U , 3340214818U ,
2365432395U , 2548636180U , 2894533366U , 3474657421U , 2372634704U ,
2845748389U , 43024175U , 2774226648U , 1987702864U , 3186502468U ,
453610222U , 4204736567U , 1392892630U , 2471323686U , 2470534280U ,
3541393095U , 4269885866U , 3909911300U , 759132955U , 1482612480U ,
667715263U , 1795580598U , 2337923983U , 3390586366U , 581426223U ,
1515718634U , 476374295U , 705213300U , 363062054U , 2084697697U ,
2407503428U , 2292957699U , 2426213835U , 2199989172U , 1987356470U ,
4026755612U , 2147252133U , 270400031U , 1367820199U , 2369854699U ,
2844269403U , 79981964U , 624U } ; rtX . db1kkvuurg = rtP . Integrator_IC ;
for ( i = 0 ; i < 12 ; i ++ ) { rtDW . pl5ipvhaac [ i ] = rtP .
RateTransition2_InitialCondition ; } rtX . jbqot5oyvh = rtP .
GyrosPID_InitialConditionForIntegrator ; rtX . i4smtyjnu1 = rtP .
GyrosPID_InitialConditionForFilter ; rtDW . cztv4wdtac = true ; rtDW .
olcb4lv2yx = true ; rtX . esrigfsrr5 = rtP .
forwardPID_InitialConditionForIntegrator ; rtX . bbp1hflh2q = rtP .
forwardPID_InitialConditionForFilter ; rtX . jhetqhfcd2 = rtP .
pitchPID1_InitialConditionForIntegrator ; rtX . jogqt0m4cw = rtP .
pitchPID1_InitialConditionForFilter ; rtX . otroann2mn = rtP .
pitchPID_InitialConditionForIntegrator ; rtX . gfyya5hmyh = rtP .
pitchPID_InitialConditionForFilter ; rtX . iueuvff0dd = rtP .
yawPID_InitialConditionForIntegrator ; rtX . by22pdjj4t = rtP .
yawPID_InitialConditionForFilter ; rtX . hxzgewah4h = rtP .
RepulsorliftPID_InitialConditionForIntegrator ; rtX . lbg2sxbpot = rtP .
RepulsorliftPID_InitialConditionForFilter ; for ( i = 0 ; i < 6 ; i ++ ) {
rtX . piupepdipv [ i ] = rtP . linearposeintegrater_IC [ i ] ; rtX .
knwk44gctl [ i ] = rtP . angularvelocityintegrater_IC [ i ] ; } memcpy ( &
rtDW . g0l0bbckkp [ 0 ] , & tmp [ 0 ] , 625U * sizeof ( uint32_T ) ) ; rtDW .
kiu4ryrenn = 0U ; rtDW . fft0rbdmuo = 7U ; rtDW . bhdaoyxpxq = 1144108930U ;
rtDW . i5ledh1vq3 [ 0 ] = 362436069U ; rtDW . ejs0vs2amv [ 0 ] = 362436069U ;
rtDW . i5ledh1vq3 [ 1 ] = 521288629U ; rtDW . ejs0vs2amv [ 1 ] = 521288629U ;
for ( i = 0 ; i < 12 ; i ++ ) { rtB . lleulw554r [ i ] = rtP . Lykyhatkk1_Y0
; rtB . ek4aiuqc1q [ i ] = rtP . deltax_Y0 ; } } void MdlStart ( void ) {
int32_T i ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} for ( i = 0 ; i < 12 ; i ++ ) { rtB . b3mb05k43e [ i ] = rtP .
RateTransition2_InitialCondition ; } rtDW . ltisa2m2wd = true ; for ( i = 0 ;
i < 6 ; i ++ ) { rtB . hxwp4pp2vw [ i ] = rtP . IC_Value [ i ] ; rtB .
ebkydsk0r2 [ i ] = rtP . IC1_Value [ i ] ; } rtDW . md3ol40n3j = true ; rtDW
. ejyd0yr2bi = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
rtDW . l5qqunsqzq = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; rtDW . b51bgum1oo = rtP . DataStoreMemory_InitialValue ; MdlInitialize (
) ; } void MdlOutputs ( int_T tid ) { real_T STemp [ 144 ] ; real_T STemp_p [
144 ] ; real_T evw5tfqr1v [ 144 ] ; real_T hnuoz2ilas [ 144 ] ; real_T b [ 72
] ; real_T b1xhrq4i0u [ 72 ] ; real_T bxn3nzccbx [ 72 ] ; real_T c [ 72 ] ;
real_T de1rhaq4wx [ 72 ] ; real_T eh3usb0kan [ 72 ] ; real_T g13v1nzkmv [ 36
] ; real_T yCovSqrt [ 36 ] ; real_T dqd1z5myor [ 12 ] ; real_T nlkygcqeqs [
12 ] ; real_T oofds5vrh4 [ 12 ] ; real_T R [ 9 ] ; real_T b_p [ 9 ] ; real_T
current_idx_e [ 9 ] ; real_T current_idx_i [ 9 ] ; real_T current_idx_m [ 9 ]
; real_T current_idx_p [ 9 ] ; real_T gain [ 9 ] ; real_T j [ 9 ] ; real_T
j_e [ 9 ] ; real_T j_p [ 9 ] ; real_T l_p [ 9 ] ; real_T btqkf3upex [ 6 ] ;
real_T ehzfkqx0lz [ 6 ] ; real_T fbp0ca0c4q [ 6 ] ; real_T gmbh5tro2i [ 6 ] ;
real_T gpmbq2p42y [ 6 ] ; real_T mvkf1m0kkx [ 6 ] ; real_T pnol0drln2 [ 6 ] ;
real_T pxhrw3m3vw [ 6 ] ; real_T pzagxswsew [ 6 ] ; real_T a1ergrurzm [ 3 ] ;
real_T control_points [ 3 ] ; real_T emj0xnzbno [ 3 ] ; real_T l [ 3 ] ;
real_T auusl3kzou ; real_T current_idx ; real_T d_idx_0 ; real_T f ; real_T
h3zcclxc4m ; real_T jfrutirrrj ; real_T ljknvbkcpz ; real_T m ; real_T o ;
real_T p ; real_T q ; real_T r ; int32_T aoffset ; int32_T b_a ; int32_T c_ix
; int32_T d_b ; int32_T i ; int32_T ijA ; int32_T ix ; int32_T pvt ; int8_T
ipiv [ 6 ] ; int8_T p_p [ 6 ] ; int8_T jpvt [ 3 ] ; int8_T b_e ; static const
real_T control_points_p [ 36 ] = { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 1000.0
, 0.0 , 5.0 , 4000.0 , 4000.0 , 100.0 , 1000.0 , 1000.0 , 5.0 , 700.0 , 700.0
, 5.0 , 400.0 , 400.0 , 3.0 , 0.0 , 0.0 , 3.0 , 0.0 , 0.0 , 0.17 , 0.0 , 0.0
, 0.17 , 0.0 , 0.0 , 0.17 , 0.0 , 0.0 , 0.17 } ; static const real_T y [ 9 ]
= { 0.005 , 0.0 , 0.0 , 0.0 , 0.005 , 0.0 , 0.0 , 0.0 , 0.005 } ; static
const int8_T b_i [ 9 ] = { 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 } ; static const
real_T c_p [ 9 ] = { 5.0E-7 , 0.0 , 0.0 , 0.0 , 5.0E-7 , 0.0 , 0.0 , 0.0 ,
5.0E-7 } ; static const real_T b_y [ 9 ] = { 1.3833171946327293E-7 , -
2.6959605045491529E-12 , 1.0527431676822127E-20 , 0.0 , 4.294133903719219E-8
, - 1.6768124461114624E-16 , 0.0 , - 1.676812446111462E-16 ,
5.5193559585341072E-8 } ; static const int8_T b_m [ 3 ] = { 1 , 0 , 0 } ;
srClearBC ( rtDW . lel1glznxf ) ; srClearBC ( rtDW . dyann5lzea ) ; rtDW .
b51bgum1oo = rtX . db1kkvuurg ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { memcpy ( & rtB . b3mb05k43e [ 0 ] , & rtDW
. pl5ipvhaac [ 0 ] , 12U * sizeof ( real_T ) ) ; } pxhrw3m3vw [ 0 ] = rtB .
b3mb05k43e [ 0 ] ; pxhrw3m3vw [ 3 ] = rtB . b3mb05k43e [ 6 ] ; pxhrw3m3vw [ 1
] = rtB . b3mb05k43e [ 1 ] ; pxhrw3m3vw [ 4 ] = rtB . b3mb05k43e [ 7 ] ;
pxhrw3m3vw [ 2 ] = rtB . b3mb05k43e [ 2 ] ; pxhrw3m3vw [ 5 ] = rtB .
b3mb05k43e [ 8 ] ; if ( rtDW . ltisa2m2wd ) { rtDW . ltisa2m2wd = false ; for
( i = 0 ; i < 6 ; i ++ ) { rtB . hxwp4pp2vw [ i ] = rtP . IC_Value [ i ] ; }
} else { for ( i = 0 ; i < 6 ; i ++ ) { rtB . hxwp4pp2vw [ i ] = pxhrw3m3vw [
i ] ; } } } d_idx_0 = 0.0 ; if ( rtX . db1kkvuurg < 0.0 ) { current_idx =
muDoubleScalarCeil ( rtX . db1kkvuurg ) ; } else { current_idx =
muDoubleScalarFloor ( rtX . db1kkvuurg ) ; } control_points [ 0 ] =
control_points_p [ ( ( int32_T ) current_idx - 1 ) * 3 ] - rtB . hxwp4pp2vw [
0 ] ; control_points [ 1 ] = control_points_p [ ( ( int32_T ) current_idx - 1
) * 3 + 1 ] - rtB . hxwp4pp2vw [ 1 ] ; control_points [ 2 ] =
control_points_p [ ( ( int32_T ) current_idx - 1 ) * 3 + 2 ] - rtB .
hxwp4pp2vw [ 2 ] ; r = ecsvk22nug ( control_points ) ; i = ( int32_T )
current_idx ; a1ergrurzm [ 0 ] = control_points_p [ ( ( int32_T ) (
current_idx - 1.0 ) - 1 ) * 3 ] ; emj0xnzbno [ 0 ] = control_points_p [ ( (
int32_T ) current_idx - 1 ) * 3 ] ; a1ergrurzm [ 1 ] = control_points_p [ ( (
int32_T ) ( current_idx - 1.0 ) - 1 ) * 3 + 1 ] ; emj0xnzbno [ 1 ] =
control_points_p [ ( ( int32_T ) current_idx - 1 ) * 3 + 1 ] ; while ( ( r <
200.0 ) && ( current_idx < 11.0 ) ) { d_idx_0 ++ ; r = rtX . db1kkvuurg +
d_idx_0 ; if ( r < 0.0 ) { current_idx = muDoubleScalarCeil ( r ) ; } else {
current_idx = muDoubleScalarFloor ( r ) ; } control_points [ 0 ] =
control_points_p [ ( ( int32_T ) current_idx - 1 ) * 3 ] - rtB . hxwp4pp2vw [
0 ] ; control_points [ 1 ] = control_points_p [ ( ( int32_T ) current_idx - 1
) * 3 + 1 ] - rtB . hxwp4pp2vw [ 1 ] ; control_points [ 2 ] =
control_points_p [ ( ( int32_T ) current_idx - 1 ) * 3 + 2 ] - rtB .
hxwp4pp2vw [ 2 ] ; r = ecsvk22nug ( control_points ) ; } rtB . pnipjtlxdg =
d_idx_0 ; current_idx = control_points_p [ ( i - 1 ) * 3 + 1 ] ; jfrutirrrj =
emj0xnzbno [ 0 ] - a1ergrurzm [ 0 ] ; control_points [ 0 ] = jfrutirrrj +
1.0E-10 ; d_idx_0 = ( rtB . hxwp4pp2vw [ 0 ] - a1ergrurzm [ 0 ] ) *
jfrutirrrj ; l [ 0 ] = jfrutirrrj ; jfrutirrrj = current_idx - a1ergrurzm [ 1
] ; control_points [ 1 ] = jfrutirrrj + 1.0E-10 ; d_idx_0 += ( rtB .
hxwp4pp2vw [ 1 ] - a1ergrurzm [ 1 ] ) * jfrutirrrj ; l [ 1 ] = jfrutirrrj ;
control_points [ 2 ] = 1.0E-10 ; l [ 2 ] = 0.0 ; r = ecsvk22nug (
control_points ) ; r = d_idx_0 / ( r * r ) ; d_idx_0 = ecsvk22nug ( l ) +
1.0E-10 ; rtB . ge0blvxvmu [ 0 ] = ( 100.0 * l [ 0 ] / d_idx_0 + a1ergrurzm [
0 ] ) + r * l [ 0 ] ; l [ 0 ] = rtB . ge0blvxvmu [ 0 ] - a1ergrurzm [ 0 ] ;
control_points [ 0 ] = emj0xnzbno [ 0 ] - a1ergrurzm [ 0 ] ; rtB . ge0blvxvmu
[ 1 ] = ( 100.0 * jfrutirrrj / d_idx_0 + a1ergrurzm [ 1 ] ) + r * jfrutirrrj
; l [ 1 ] = rtB . ge0blvxvmu [ 1 ] - a1ergrurzm [ 1 ] ; control_points [ 1 ]
= current_idx - a1ergrurzm [ 1 ] ; rtB . ge0blvxvmu [ 2 ] = 0.0 / d_idx_0 + r
* 0.0 ; l [ 2 ] = rtB . ge0blvxvmu [ 2 ] ; control_points [ 2 ] = 0.0 ; if (
ecsvk22nug ( l ) > ecsvk22nug ( control_points ) ) { rtB . ge0blvxvmu [ 0 ] =
emj0xnzbno [ 0 ] ; rtB . ge0blvxvmu [ 1 ] = current_idx ; rtB . ge0blvxvmu [
2 ] = 0.0 ; } rtB . ge0blvxvmu [ 0 ] = rtB . hxwp4pp2vw [ 0 ] - rtB .
ge0blvxvmu [ 0 ] ; rtB . ge0blvxvmu [ 1 ] = rtB . hxwp4pp2vw [ 1 ] - rtB .
ge0blvxvmu [ 1 ] ; rtB . ge0blvxvmu [ 2 ] = 0.0 - rtB . ge0blvxvmu [ 2 ] ;
d_idx_0 = ecsvk22nug ( rtB . ge0blvxvmu ) + 1.0E-10 ; rtB . ge0blvxvmu [ 0 ]
/= d_idx_0 ; rtB . ge0blvxvmu [ 0 ] *= - 100.0 ; rtB . ge0blvxvmu [ 1 ] /=
d_idx_0 ; rtB . ge0blvxvmu [ 1 ] *= - 100.0 ; rtB . ge0blvxvmu [ 2 ] /=
d_idx_0 ; rtB . ge0blvxvmu [ 2 ] *= - 100.0 ; rtB . ge0blvxvmu [ 2 ] =
control_points_p [ ( i - 1 ) * 3 + 2 ] - rtB . hxwp4pp2vw [ 2 ] ; if ( rtB .
ge0blvxvmu [ 2 ] > 10000.0 ) { rtB . ge0blvxvmu [ 2 ] = 10000.0 ; } if ( rtB
. ge0blvxvmu [ 2 ] < - 10000.0 ) { rtB . ge0blvxvmu [ 2 ] = - 10000.0 ; } if
( rtX . db1kkvuurg >= 7.0 ) { current_idx = emj0xnzbno [ 0 ] - a1ergrurzm [ 0
] ; jpvt [ 0 ] = 1 ; d_idx_0 = current_idx ; a1ergrurzm [ 0 ] = current_idx ;
r = muDoubleScalarAbs ( current_idx ) ; current_idx = emj0xnzbno [ 1 ] -
a1ergrurzm [ 1 ] ; jpvt [ 1 ] = 2 ; a1ergrurzm [ 1 ] = current_idx ; jpvt [ 2
] = 3 ; a1ergrurzm [ 2 ] = 0.0 ; pvt = 0 ; if ( muDoubleScalarAbs (
current_idx ) > r ) { pvt = 1 ; } if ( pvt + 1 != 1 ) { d_idx_0 = a1ergrurzm
[ pvt ] ; jpvt [ 0 ] = jpvt [ pvt ] ; } i = 0 ; if ( ! ( muDoubleScalarAbs (
d_idx_0 ) <= 6.6613381477509392E-15 * muDoubleScalarAbs ( d_idx_0 ) ) ) { i =
1 ; } memset ( & R [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; if ( 0 <= i - 1 ) {
R [ jpvt [ 0 ] - 1 ] = rtB . hxwp4pp2vw [ 0 ] - emj0xnzbno [ 0 ] ; } aoffset
= i ; while ( aoffset > 0 ) { R [ jpvt [ 0 ] - 1 ] /= d_idx_0 ; aoffset = 0 ;
} if ( 0 <= i - 1 ) { R [ jpvt [ 0 ] + 2 ] = rtB . hxwp4pp2vw [ 1 ] -
emj0xnzbno [ 1 ] ; } aoffset = i ; while ( aoffset > 0 ) { R [ jpvt [ 0 ] + 2
] /= d_idx_0 ; aoffset = 0 ; } if ( 0 <= i - 1 ) { R [ jpvt [ 0 ] + 5 ] = 0.0
; } aoffset = i ; while ( aoffset > 0 ) { R [ jpvt [ 0 ] + 5 ] /= d_idx_0 ;
aoffset = 0 ; } for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { gain [ 3 * pvt ] = R [
pvt ] ; gain [ 3 * pvt + 1 ] = R [ pvt + 3 ] ; gain [ 3 * pvt + 2 ] = R [ pvt
+ 6 ] ; } rtB . ge0blvxvmu [ 0 ] *= gain [ 0 ] + 0.001 ; rtB . ge0blvxvmu [ 1
] *= gain [ 1 ] + 0.001 ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
f2qhiy1twx = rtB . ge0blvxvmu [ 0 ] >= rtP . Saturation_UpperSat ? 1 : rtB .
ge0blvxvmu [ 0 ] > rtP . Saturation_LowerSat ? 0 : - 1 ; } current_idx = rtDW
. f2qhiy1twx == 1 ? rtP . Saturation_UpperSat : rtDW . f2qhiy1twx == - 1 ?
rtP . Saturation_LowerSat : rtB . ge0blvxvmu [ 0 ] ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . hjw5xpsugz = rtB . ge0blvxvmu [ 1 ] >= rtP .
Saturation1_UpperSat ? 1 : rtB . ge0blvxvmu [ 1 ] > rtP .
Saturation1_LowerSat ? 0 : - 1 ; } jfrutirrrj = rtDW . hjw5xpsugz == 1 ? rtP
. Saturation1_UpperSat : rtDW . hjw5xpsugz == - 1 ? rtP .
Saturation1_LowerSat : rtB . ge0blvxvmu [ 1 ] ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB . mlfgrwy0vh [ i ] = rtP .
scalinggain_Gain * rtB . hxwp4pp2vw [ i ] ; } } for ( i = 0 ; i < 6 ; i ++ )
{ pxhrw3m3vw [ i ] = rtX . piupepdipv [ i ] ; } if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { for ( pvt = 0 ; pvt < 6 ; pvt ++ ) { r = bwekdppcom ( ) ; rtB .
hkthjp0hwn [ pvt ] = r * rtB . c22d1mz0mp [ pvt ] ; if ( rtB . c22d1mz0mp [
pvt ] < 0.0 ) { rtB . hkthjp0hwn [ pvt ] = ( rtNaN ) ; } } } for ( i = 0 ; i
< 6 ; i ++ ) { rtB . ecgwuotvgr [ i ] = rtX . piupepdipv [ i ] + rtB .
hkthjp0hwn [ i ] ; rtB . pcbagnzchm [ i ] = rtP . scalinggain_Gain_jupury5wlc
* rtB . ecgwuotvgr [ i ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
auusl3kzou = rtP . Constant_Value_p1gsoflfkl - rtB . hxwp4pp2vw [ 3 ] ; rtB .
gut2rdh4at = rtP . GyrosPID_P * auusl3kzou ; rtB . cmg5lcy35n = rtP .
GyrosPID_D * auusl3kzou ; rtB . gx53sbrfe2 = rtP . GyrosPID_I * auusl3kzou ;
} rtB . b33ayb4udb = ( rtB . cmg5lcy35n - rtX . i4smtyjnu1 ) * rtP .
GyrosPID_N ; r = ( ( rtB . gut2rdh4at + rtX . jbqot5oyvh ) + rtB . b33ayb4udb
) * rtP . Gain_Gain ; for ( i = 0 ; i < 6 ; i ++ ) { ehzfkqx0lz [ i ] = rtP .
directionalconstrain_Value [ i ] * r ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ gpmbq2p42y [ 0 ] = rtB . b3mb05k43e [ 3 ] ; gpmbq2p42y [ 3 ] = rtB .
b3mb05k43e [ 9 ] ; gpmbq2p42y [ 1 ] = rtB . b3mb05k43e [ 4 ] ; gpmbq2p42y [ 4
] = rtB . b3mb05k43e [ 10 ] ; gpmbq2p42y [ 2 ] = rtB . b3mb05k43e [ 5 ] ;
gpmbq2p42y [ 5 ] = rtB . b3mb05k43e [ 11 ] ; if ( rtDW . md3ol40n3j ) { rtDW
. md3ol40n3j = false ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . ebkydsk0r2 [ i ]
= rtP . IC1_Value [ i ] ; } } else { for ( i = 0 ; i < 6 ; i ++ ) { rtB .
ebkydsk0r2 [ i ] = gpmbq2p42y [ i ] ; } } } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { auusl3kzou = y [ 3 * pvt ] ; b_e =
b_i [ 3 * pvt ] ; hnuoz2ilas [ 12 * pvt ] = b_e ; hnuoz2ilas [ 12 * ( pvt + 3
) ] = auusl3kzou ; hnuoz2ilas [ 12 * ( pvt + 6 ) ] = 0.0 ; hnuoz2ilas [ 12 *
( pvt + 9 ) ] = 0.0 ; hnuoz2ilas [ 12 * pvt + 3 ] = 0.0 ; hnuoz2ilas [ 12 * (
pvt + 3 ) + 3 ] = b_e ; hnuoz2ilas [ 12 * ( pvt + 6 ) + 3 ] = 0.0 ;
hnuoz2ilas [ 12 * ( pvt + 9 ) + 3 ] = 0.0 ; hnuoz2ilas [ 12 * pvt + 6 ] = 0.0
; hnuoz2ilas [ 12 * ( pvt + 3 ) + 6 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt + 6 ) +
6 ] = b_e ; hnuoz2ilas [ 12 * ( pvt + 9 ) + 6 ] = auusl3kzou ; hnuoz2ilas [
12 * pvt + 9 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt + 3 ) + 9 ] = 0.0 ; hnuoz2ilas
[ 12 * ( pvt + 6 ) + 9 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt + 9 ) + 9 ] = b_e ;
b1xhrq4i0u [ 12 * pvt ] = 0.0 ; b1xhrq4i0u [ 12 * ( pvt + 3 ) ] = 0.0 ;
b1xhrq4i0u [ 12 * pvt + 3 ] = c_p [ 3 * pvt ] ; b1xhrq4i0u [ 12 * ( pvt + 3 )
+ 3 ] = 0.0 ; b1xhrq4i0u [ 12 * pvt + 6 ] = 0.0 ; b1xhrq4i0u [ 12 * ( pvt + 3
) + 6 ] = 0.0 ; b1xhrq4i0u [ 12 * pvt + 9 ] = 0.0 ; b1xhrq4i0u [ 12 * ( pvt +
3 ) + 9 ] = b_y [ 3 * pvt ] ; eh3usb0kan [ 6 * pvt ] = b_e ; eh3usb0kan [ 6 *
( pvt + 3 ) ] = 0.0 ; eh3usb0kan [ 6 * ( pvt + 6 ) ] = 0.0 ; eh3usb0kan [ 6 *
( pvt + 9 ) ] = 0.0 ; eh3usb0kan [ 6 * pvt + 3 ] = 0.0 ; eh3usb0kan [ 6 * (
pvt + 3 ) + 3 ] = 0.0 ; eh3usb0kan [ 6 * ( pvt + 6 ) + 3 ] = b_e ; eh3usb0kan
[ 6 * ( pvt + 9 ) + 3 ] = 0.0 ; auusl3kzou = y [ 3 * pvt + 1 ] ; b_e = b_i [
3 * pvt + 1 ] ; hnuoz2ilas [ 12 * pvt + 1 ] = b_e ; hnuoz2ilas [ 12 * ( pvt +
3 ) + 1 ] = auusl3kzou ; hnuoz2ilas [ 12 * ( pvt + 6 ) + 1 ] = 0.0 ;
hnuoz2ilas [ 12 * ( pvt + 9 ) + 1 ] = 0.0 ; hnuoz2ilas [ 12 * pvt + 4 ] = 0.0
; hnuoz2ilas [ 12 * ( pvt + 3 ) + 4 ] = b_e ; hnuoz2ilas [ 12 * ( pvt + 6 ) +
4 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt + 9 ) + 4 ] = 0.0 ; hnuoz2ilas [ 12 * pvt
+ 7 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt + 3 ) + 7 ] = 0.0 ; hnuoz2ilas [ 12 * (
pvt + 6 ) + 7 ] = b_e ; hnuoz2ilas [ 12 * ( pvt + 9 ) + 7 ] = auusl3kzou ;
hnuoz2ilas [ 12 * pvt + 10 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt + 3 ) + 10 ] =
0.0 ; hnuoz2ilas [ 12 * ( pvt + 6 ) + 10 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt +
9 ) + 10 ] = b_e ; b1xhrq4i0u [ 12 * pvt + 1 ] = 0.0 ; b1xhrq4i0u [ 12 * (
pvt + 3 ) + 1 ] = 0.0 ; b1xhrq4i0u [ 12 * pvt + 4 ] = c_p [ 3 * pvt + 1 ] ;
b1xhrq4i0u [ 12 * ( pvt + 3 ) + 4 ] = 0.0 ; b1xhrq4i0u [ 12 * pvt + 7 ] = 0.0
; b1xhrq4i0u [ 12 * ( pvt + 3 ) + 7 ] = 0.0 ; b1xhrq4i0u [ 12 * pvt + 10 ] =
0.0 ; b1xhrq4i0u [ 12 * ( pvt + 3 ) + 10 ] = b_y [ 3 * pvt + 1 ] ; eh3usb0kan
[ 6 * pvt + 1 ] = b_e ; eh3usb0kan [ 6 * ( pvt + 3 ) + 1 ] = 0.0 ; eh3usb0kan
[ 6 * ( pvt + 6 ) + 1 ] = 0.0 ; eh3usb0kan [ 6 * ( pvt + 9 ) + 1 ] = 0.0 ;
eh3usb0kan [ 6 * pvt + 4 ] = 0.0 ; eh3usb0kan [ 6 * ( pvt + 3 ) + 4 ] = 0.0 ;
eh3usb0kan [ 6 * ( pvt + 6 ) + 4 ] = b_e ; eh3usb0kan [ 6 * ( pvt + 9 ) + 4 ]
= 0.0 ; auusl3kzou = y [ 3 * pvt + 2 ] ; b_e = b_i [ 3 * pvt + 2 ] ;
hnuoz2ilas [ 12 * pvt + 2 ] = b_e ; hnuoz2ilas [ 12 * ( pvt + 3 ) + 2 ] =
auusl3kzou ; hnuoz2ilas [ 12 * ( pvt + 6 ) + 2 ] = 0.0 ; hnuoz2ilas [ 12 * (
pvt + 9 ) + 2 ] = 0.0 ; hnuoz2ilas [ 12 * pvt + 5 ] = 0.0 ; hnuoz2ilas [ 12 *
( pvt + 3 ) + 5 ] = b_e ; hnuoz2ilas [ 12 * ( pvt + 6 ) + 5 ] = 0.0 ;
hnuoz2ilas [ 12 * ( pvt + 9 ) + 5 ] = 0.0 ; hnuoz2ilas [ 12 * pvt + 8 ] = 0.0
; hnuoz2ilas [ 12 * ( pvt + 3 ) + 8 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt + 6 ) +
8 ] = b_e ; hnuoz2ilas [ 12 * ( pvt + 9 ) + 8 ] = auusl3kzou ; hnuoz2ilas [
12 * pvt + 11 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt + 3 ) + 11 ] = 0.0 ;
hnuoz2ilas [ 12 * ( pvt + 6 ) + 11 ] = 0.0 ; hnuoz2ilas [ 12 * ( pvt + 9 ) +
11 ] = b_e ; b1xhrq4i0u [ 12 * pvt + 2 ] = 0.0 ; b1xhrq4i0u [ 12 * ( pvt + 3
) + 2 ] = 0.0 ; b1xhrq4i0u [ 12 * pvt + 5 ] = c_p [ 3 * pvt + 2 ] ;
b1xhrq4i0u [ 12 * ( pvt + 3 ) + 5 ] = 0.0 ; b1xhrq4i0u [ 12 * pvt + 8 ] = 0.0
; b1xhrq4i0u [ 12 * ( pvt + 3 ) + 8 ] = 0.0 ; b1xhrq4i0u [ 12 * pvt + 11 ] =
0.0 ; b1xhrq4i0u [ 12 * ( pvt + 3 ) + 11 ] = b_y [ 3 * pvt + 2 ] ; eh3usb0kan
[ 6 * pvt + 2 ] = b_e ; eh3usb0kan [ 6 * ( pvt + 3 ) + 2 ] = 0.0 ; eh3usb0kan
[ 6 * ( pvt + 6 ) + 2 ] = 0.0 ; eh3usb0kan [ 6 * ( pvt + 9 ) + 2 ] = 0.0 ;
eh3usb0kan [ 6 * pvt + 5 ] = 0.0 ; eh3usb0kan [ 6 * ( pvt + 3 ) + 5 ] = 0.0 ;
eh3usb0kan [ 6 * ( pvt + 6 ) + 5 ] = b_e ; eh3usb0kan [ 6 * ( pvt + 9 ) + 5 ]
= 0.0 ; } if ( rtDW . cztv4wdtac ) { memcpy ( & rtDW . mvxqg1s3mg [ 0 ] , &
rtP . P0_Value [ 0 ] , 144U * sizeof ( real_T ) ) ; } if ( rtP . Enable_Value
) { gdm2sitdfz ( eh3usb0kan , rtDW . mvxqg1s3mg , rtP . Rbar_Value , yCovSqrt
) ; for ( pvt = 0 ; pvt < 12 ; pvt ++ ) { for ( i = 0 ; i < 12 ; i ++ ) {
STemp [ pvt + 12 * i ] = 0.0 ; for ( aoffset = 0 ; aoffset < 12 ; aoffset ++
) { STemp [ pvt + 12 * i ] += rtDW . mvxqg1s3mg [ 12 * aoffset + pvt ] * rtDW
. mvxqg1s3mg [ 12 * aoffset + i ] ; } } for ( i = 0 ; i < 6 ; i ++ ) {
bxn3nzccbx [ pvt + 12 * i ] = 0.0 ; for ( aoffset = 0 ; aoffset < 12 ;
aoffset ++ ) { bxn3nzccbx [ pvt + 12 * i ] += STemp [ 12 * aoffset + pvt ] *
eh3usb0kan [ 6 * aoffset + i ] ; } } } for ( pvt = 0 ; pvt < 6 ; pvt ++ ) {
for ( i = 0 ; i < 12 ; i ++ ) { d_idx_0 = 0.0 ; for ( aoffset = 0 ; aoffset <
12 ; aoffset ++ ) { d_idx_0 += hnuoz2ilas [ 12 * aoffset + i ] * bxn3nzccbx [
12 * pvt + aoffset ] ; } de1rhaq4wx [ pvt + 6 * i ] = rtP . Bbar_Value [ 12 *
pvt + i ] + d_idx_0 ; } } fil4k5pxzl ( yCovSqrt , de1rhaq4wx , b ) ; for (
pvt = 0 ; pvt < 6 ; pvt ++ ) { for ( i = 0 ; i < 6 ; i ++ ) { g13v1nzkmv [ i
+ 6 * pvt ] = yCovSqrt [ 6 * i + pvt ] ; } } fil4k5pxzly ( g13v1nzkmv , b , c
) ; for ( pvt = 0 ; pvt < 6 ; pvt ++ ) { for ( i = 0 ; i < 12 ; i ++ ) {
de1rhaq4wx [ i + 12 * pvt ] = c [ 6 * i + pvt ] ; } } for ( pvt = 0 ; pvt <
12 ; pvt ++ ) { for ( i = 0 ; i < 6 ; i ++ ) { c [ i + 6 * pvt ] = bxn3nzccbx
[ 12 * i + pvt ] ; } } fil4k5pxzl ( yCovSqrt , c , b ) ; for ( pvt = 0 ; pvt
< 6 ; pvt ++ ) { for ( i = 0 ; i < 6 ; i ++ ) { g13v1nzkmv [ i + 6 * pvt ] =
yCovSqrt [ 6 * i + pvt ] ; } } fil4k5pxzly ( g13v1nzkmv , b , c ) ; for ( pvt
= 0 ; pvt < 6 ; pvt ++ ) { for ( i = 0 ; i < 12 ; i ++ ) { bxn3nzccbx [ i +
12 * pvt ] = c [ 6 * i + pvt ] ; } } memset ( & STemp [ 0 ] , 0 , 144U *
sizeof ( real_T ) ) ; for ( ix = 0 ; ix < 12 ; ix ++ ) { STemp [ ix + 12 * ix
] = 1.0 ; } memcpy ( & evw5tfqr1v [ 0 ] , & rtDW . mvxqg1s3mg [ 0 ] , 144U *
sizeof ( real_T ) ) ; for ( pvt = 0 ; pvt < 12 ; pvt ++ ) { for ( i = 0 ; i <
12 ; i ++ ) { d_idx_0 = 0.0 ; for ( aoffset = 0 ; aoffset < 6 ; aoffset ++ )
{ d_idx_0 += bxn3nzccbx [ 12 * aoffset + pvt ] * eh3usb0kan [ 6 * i + aoffset
] ; } STemp_p [ pvt + 12 * i ] = STemp [ 12 * i + pvt ] - d_idx_0 ; } for ( i
= 0 ; i < 6 ; i ++ ) { c [ pvt + 12 * i ] = 0.0 ; for ( aoffset = 0 ; aoffset
< 6 ; aoffset ++ ) { c [ pvt + 12 * i ] += bxn3nzccbx [ 12 * aoffset + pvt ]
* rtP . Rbar_Value [ 6 * i + aoffset ] ; } } } gdm2sitdfzs ( STemp_p ,
evw5tfqr1v , c ) ; kutfclulan ( rtP . Rbar_Value , yCovSqrt ) ; memcpy ( &
STemp [ 0 ] , & evw5tfqr1v [ 0 ] , 144U * sizeof ( real_T ) ) ; for ( pvt = 0
; pvt < 6 ; pvt ++ ) { for ( i = 0 ; i < 6 ; i ++ ) { g13v1nzkmv [ pvt + 6 *
i ] = 0.0 ; for ( aoffset = 0 ; aoffset < 6 ; aoffset ++ ) { g13v1nzkmv [ pvt
+ 6 * i ] += yCovSqrt [ 6 * pvt + aoffset ] * yCovSqrt [ 6 * i + aoffset ] ;
} } } for ( pvt = 0 ; pvt < 12 ; pvt ++ ) { for ( i = 0 ; i < 6 ; i ++ ) { b
[ pvt + 12 * i ] = 0.0 ; for ( aoffset = 0 ; aoffset < 6 ; aoffset ++ ) { b [
pvt + 12 * i ] += rtP . Bbar_Value [ 12 * aoffset + pvt ] * g13v1nzkmv [ 6 *
i + aoffset ] ; } } for ( i = 0 ; i < 12 ; i ++ ) { d_idx_0 = 0.0 ; for (
aoffset = 0 ; aoffset < 6 ; aoffset ++ ) { d_idx_0 += b [ 12 * aoffset + pvt
] * eh3usb0kan [ 6 * i + aoffset ] ; } evw5tfqr1v [ pvt + 12 * i ] =
hnuoz2ilas [ 12 * i + pvt ] - d_idx_0 ; } } gdm2sitdfzse ( evw5tfqr1v , STemp
, rtP . Qbar_Value ) ; for ( pvt = 0 ; pvt < 12 ; pvt ++ ) { for ( i = 0 ; i
< 12 ; i ++ ) { rtB . jsl5x2irnt [ i + 12 * pvt ] = STemp [ 12 * i + pvt ] ;
} for ( i = 0 ; i < 6 ; i ++ ) { b [ pvt + 12 * i ] = 0.0 ; for ( aoffset = 0
; aoffset < 6 ; aoffset ++ ) { b [ pvt + 12 * i ] += rtP . Bbar_Value [ 12 *
aoffset + pvt ] * yCovSqrt [ 6 * aoffset + i ] ; } } } br2ebrixap ( rtB .
jsl5x2irnt , b ) ; } else { memset ( & de1rhaq4wx [ 0 ] , 0 , 72U * sizeof (
real_T ) ) ; memset ( & bxn3nzccbx [ 0 ] , 0 , 72U * sizeof ( real_T ) ) ;
memcpy ( & rtB . jsl5x2irnt [ 0 ] , & rtDW . mvxqg1s3mg [ 0 ] , 144U * sizeof
( real_T ) ) ; gdm2sitdfzse ( hnuoz2ilas , rtB . jsl5x2irnt , rtP .
Qbar_Value ) ; } if ( rtDW . olcb4lv2yx ) { memcpy ( & rtDW . mmrthbmx33 [ 0
] , & rtP . X0_Value [ 0 ] , 12U * sizeof ( real_T ) ) ; } for ( i = 0 ; i <
12 ; i ++ ) { nlkygcqeqs [ i ] = rtDW . mmrthbmx33 [ i ] ; oofds5vrh4 [ i ] =
0.0 ; for ( pvt = 0 ; pvt < 12 ; pvt ++ ) { oofds5vrh4 [ i ] += hnuoz2ilas [
12 * pvt + i ] * rtDW . mmrthbmx33 [ pvt ] ; } } } gmbh5tro2i [ 0 ] =
current_idx ; gmbh5tro2i [ 1 ] = jfrutirrrj ; gmbh5tro2i [ 2 ] = rtB .
ge0blvxvmu [ 2 ] ; gmbh5tro2i [ 3 ] = rtP . Constant_Value ; gmbh5tro2i [ 4 ]
= rtP . Constant_Value ; gmbh5tro2i [ 5 ] = rtP . Constant_Value ; auusl3kzou
= 57.295779513082323 * rtB . hxwp4pp2vw [ 5 ] ; r = 57.295779513082323 * rtB
. hxwp4pp2vw [ 4 ] ; d_idx_0 = 57.295779513082323 * rtB . hxwp4pp2vw [ 3 ] ;
current_idx_p [ 0 ] = auusl3kzou ; msq4imazm5 ( & current_idx_p [ 0 ] ) ; f =
auusl3kzou ; pghym3yviy ( & f ) ; current_idx_p [ 1 ] = auusl3kzou ;
pghym3yviy ( & current_idx_p [ 1 ] ) ; msq4imazm5 ( & auusl3kzou ) ; j [ 0 ]
= r ; msq4imazm5 ( & j [ 0 ] ) ; j [ 6 ] = r ; pghym3yviy ( & j [ 6 ] ) ; m =
r ; pghym3yviy ( & m ) ; msq4imazm5 ( & r ) ; o = d_idx_0 ; msq4imazm5 ( & o
) ; p = d_idx_0 ; pghym3yviy ( & p ) ; q = d_idx_0 ; pghym3yviy ( & q ) ;
msq4imazm5 ( & d_idx_0 ) ; current_idx_p [ 3 ] = - f ; current_idx_p [ 6 ] =
0.0 ; current_idx_p [ 4 ] = auusl3kzou ; current_idx_p [ 7 ] = 0.0 ; j [ 3 ]
= 0.0 ; current_idx_p [ 2 ] = 0.0 ; j [ 1 ] = 0.0 ; current_idx_p [ 5 ] = 0.0
; j [ 4 ] = 1.0 ; current_idx_p [ 8 ] = 1.0 ; j [ 7 ] = 0.0 ; j [ 2 ] = - m ;
j [ 5 ] = 0.0 ; j [ 8 ] = r ; for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { for ( i =
0 ; i < 3 ; i ++ ) { gain [ pvt + 3 * i ] = 0.0 ; gain [ pvt + 3 * i ] += j [
3 * i ] * current_idx_p [ pvt ] ; gain [ pvt + 3 * i ] += j [ 3 * i + 1 ] *
current_idx_p [ pvt + 3 ] ; gain [ pvt + 3 * i ] += j [ 3 * i + 2 ] *
current_idx_p [ pvt + 6 ] ; } b_p [ 3 * pvt ] = b_m [ pvt ] ; } b_p [ 1 ] =
0.0 ; b_p [ 4 ] = o ; b_p [ 7 ] = - p ; b_p [ 2 ] = 0.0 ; b_p [ 5 ] = q ; b_p
[ 8 ] = d_idx_0 ; for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { for ( i = 0 ; i < 3 ;
i ++ ) { R [ i + 3 * pvt ] = 0.0 ; R [ i + 3 * pvt ] += b_p [ 3 * pvt ] *
gain [ i ] ; R [ i + 3 * pvt ] += b_p [ 3 * pvt + 1 ] * gain [ i + 3 ] ; R [
i + 3 * pvt ] += b_p [ 3 * pvt + 2 ] * gain [ i + 6 ] ; } } for ( pvt = 0 ;
pvt < 3 ; pvt ++ ) { aoffset = pvt * 3 ; btqkf3upex [ pvt ] = ( R [ aoffset +
1 ] * jfrutirrrj + R [ aoffset ] * current_idx ) + R [ aoffset + 2 ] *
gmbh5tro2i [ 2 ] ; btqkf3upex [ pvt + 3 ] = gmbh5tro2i [ pvt + 3 ] ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { auusl3kzou = 57.295779513082323 * rtB .
hxwp4pp2vw [ 5 ] ; r = 57.295779513082323 * rtB . hxwp4pp2vw [ 4 ] ; d_idx_0
= 57.295779513082323 * rtB . hxwp4pp2vw [ 3 ] ; current_idx_e [ 0 ] =
auusl3kzou ; msq4imazm5 ( & current_idx_e [ 0 ] ) ; f = auusl3kzou ;
pghym3yviy ( & f ) ; current_idx_e [ 1 ] = auusl3kzou ; pghym3yviy ( &
current_idx_e [ 1 ] ) ; msq4imazm5 ( & auusl3kzou ) ; j_p [ 0 ] = r ;
msq4imazm5 ( & j_p [ 0 ] ) ; j_p [ 6 ] = r ; pghym3yviy ( & j_p [ 6 ] ) ; m =
r ; pghym3yviy ( & m ) ; msq4imazm5 ( & r ) ; o = d_idx_0 ; msq4imazm5 ( & o
) ; p = d_idx_0 ; pghym3yviy ( & p ) ; q = d_idx_0 ; pghym3yviy ( & q ) ;
msq4imazm5 ( & d_idx_0 ) ; current_idx_e [ 3 ] = - f ; current_idx_e [ 6 ] =
0.0 ; current_idx_e [ 4 ] = auusl3kzou ; current_idx_e [ 7 ] = 0.0 ; j_p [ 3
] = 0.0 ; current_idx_e [ 2 ] = 0.0 ; j_p [ 1 ] = 0.0 ; current_idx_e [ 5 ] =
0.0 ; j_p [ 4 ] = 1.0 ; current_idx_e [ 8 ] = 1.0 ; j_p [ 7 ] = 0.0 ; j_p [ 2
] = - m ; j_p [ 5 ] = 0.0 ; j_p [ 8 ] = r ; for ( pvt = 0 ; pvt < 3 ; pvt ++
) { for ( i = 0 ; i < 3 ; i ++ ) { current_idx_p [ pvt + 3 * i ] = 0.0 ;
current_idx_p [ pvt + 3 * i ] += j_p [ 3 * i ] * current_idx_e [ pvt ] ;
current_idx_p [ pvt + 3 * i ] += j_p [ 3 * i + 1 ] * current_idx_e [ pvt + 3
] ; current_idx_p [ pvt + 3 * i ] += j_p [ 3 * i + 2 ] * current_idx_e [ pvt
+ 6 ] ; } b_p [ 3 * pvt ] = b_m [ pvt ] ; } b_p [ 1 ] = 0.0 ; b_p [ 4 ] = o ;
b_p [ 7 ] = - p ; b_p [ 2 ] = 0.0 ; b_p [ 5 ] = q ; b_p [ 8 ] = d_idx_0 ; for
( pvt = 0 ; pvt < 3 ; pvt ++ ) { for ( i = 0 ; i < 3 ; i ++ ) { R [ i + 3 *
pvt ] = 0.0 ; R [ i + 3 * pvt ] += b_p [ 3 * pvt ] * current_idx_p [ i ] ; R
[ i + 3 * pvt ] += b_p [ 3 * pvt + 1 ] * current_idx_p [ i + 3 ] ; R [ i + 3
* pvt ] += b_p [ 3 * pvt + 2 ] * current_idx_p [ i + 6 ] ; } } for ( pvt = 0
; pvt < 3 ; pvt ++ ) { aoffset = pvt * 3 ; rtB . gjsiilr2qy [ pvt ] = ( R [
aoffset + 1 ] * rtB . ebkydsk0r2 [ 1 ] + R [ aoffset ] * rtB . ebkydsk0r2 [ 0
] ) + R [ aoffset + 2 ] * rtB . ebkydsk0r2 [ 2 ] ; rtB . gjsiilr2qy [ pvt + 3
] = rtB . ebkydsk0r2 [ pvt + 3 ] ; } } for ( i = 0 ; i < 6 ; i ++ ) { rtB .
bxcypv55tm [ i ] = btqkf3upex [ i ] - rtB . gjsiilr2qy [ i ] ; } rtB .
hvwc1pvt1x = ( rtB . bxcypv55tm [ 0 ] * rtP . Kd_Value - rtX . bbp1hflh2q ) *
rtP . N_Value ; emj0xnzbno [ 0 ] = ( rtB . bxcypv55tm [ 0 ] * rtP . Kp_Value
+ rtX . esrigfsrr5 ) + rtB . hvwc1pvt1x ; rtB . jtc3cuors3 [ 0 ] =
current_idx - rtB . ebkydsk0r2 [ 0 ] ; rtB . jtc3cuors3 [ 1 ] = jfrutirrrj -
rtB . ebkydsk0r2 [ 1 ] ; rtB . jtc3cuors3 [ 2 ] = rtB . ge0blvxvmu [ 2 ] -
rtB . ebkydsk0r2 [ 2 ] ; rtB . jtc3cuors3 [ 3 ] = rtP . Constant_Value - rtB
. ebkydsk0r2 [ 3 ] ; rtB . jtc3cuors3 [ 4 ] = rtP . Constant_Value - rtB .
ebkydsk0r2 [ 4 ] ; rtB . jtc3cuors3 [ 5 ] = rtP . Constant_Value - rtB .
ebkydsk0r2 [ 5 ] ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . a02qvwrxmu
= ( rtB . jtc3cuors3 [ 2 ] >= 0.0 ) ; } rtB . g513sj0mdc = rtDW . a02qvwrxmu
> 0 ? rtB . jtc3cuors3 [ 2 ] : - rtB . jtc3cuors3 [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . h0pdguc1c3 = ( rtB . g513sj0mdc > rtP .
Switch_Threshold ) ; } if ( rtDW . h0pdguc1c3 ) { rtB . mnwxpzx3lu = rtB .
jtc3cuors3 [ 2 ] ; } else { rtB . mnwxpzx3lu = rtP .
Constant_Value_bg0wdissww ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
hiudrndel0 = rtB . mnwxpzx3lu >= rtP . Saturation_UpperSat_c14ofn1jjf ? 1 :
rtB . mnwxpzx3lu > rtP . Saturation_LowerSat_hrg0ktoepw ? 0 : - 1 ; }
current_idx = rtDW . hiudrndel0 == 1 ? rtP . Saturation_UpperSat_c14ofn1jjf :
rtDW . hiudrndel0 == - 1 ? rtP . Saturation_LowerSat_hrg0ktoepw : rtB .
mnwxpzx3lu ; rtB . gx2sxhuagj = ( rtP . pitchPID1_D * current_idx - rtX .
jogqt0m4cw ) * rtP . pitchPID1_N ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB
. mao5cuyexx = rtP . Constant2_Value - rtB . hxwp4pp2vw [ 4 ] ; } jfrutirrrj
= ( ( rtP . pitchPID1_P * current_idx + rtX . jhetqhfcd2 ) + rtB . gx2sxhuagj
) * rtP . Gain1_Gain + rtB . mao5cuyexx ; rtB . hsrcc0wrus = ( jfrutirrrj *
rtP . Kd_Value - rtX . gfyya5hmyh ) * rtP . N_Value ; emj0xnzbno [ 1 ] = (
jfrutirrrj * rtP . Kp_Value + rtX . otroann2mn ) + rtB . hsrcc0wrus ; rtB .
fbfaby5zgo = rtDW . b51bgum1oo - rtP . Constant_Value_imyedfi3jl ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . pvze4nq3ec = ( rtB . fbfaby5zgo > rtP .
Switch_Threshold_djsbgwglvj ) ; } if ( rtDW . pvze4nq3ec ) { d_idx_0 = rtP .
Constant2_Value_hk3avlia0e ; } else { d_idx_0 = rtP . Constant3_Value ; } rtB
. mwtoyjgicn = ( ( rtP . finalgain_Gain * d_idx_0 + rtP . initialgain_Value )
* rtP . Kd_Value * btqkf3upex [ 1 ] - rtX . by22pdjj4t ) * rtP . N_Value ;
emj0xnzbno [ 2 ] = ( btqkf3upex [ 1 ] * rtB . h03fxlsmaz + rtX . iueuvff0dd )
+ rtB . mwtoyjgicn ; for ( pvt = 0 ; pvt < 4 ; pvt ++ ) { rtB . g3wfsmzd40 [
pvt ] = 0.0 ; rtB . g3wfsmzd40 [ pvt ] += rtP . selectionmatrix_Value [ pvt ]
* emj0xnzbno [ 0 ] ; rtB . g3wfsmzd40 [ pvt ] += rtP . selectionmatrix_Value
[ pvt + 4 ] * emj0xnzbno [ 1 ] ; rtB . g3wfsmzd40 [ pvt ] += rtP .
selectionmatrix_Value [ pvt + 8 ] * emj0xnzbno [ 2 ] ; } if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . hrkn2z2xmi = rtB . bxcypv55tm [ 2 ] >=
rtP . Saturation_UpperSat_onxkxwe4f4 ? 1 : rtB . bxcypv55tm [ 2 ] > rtP .
Saturation_LowerSat_oxbf5pkgup ? 0 : - 1 ; } ljknvbkcpz = rtDW . hrkn2z2xmi
== 1 ? rtP . Saturation_UpperSat_onxkxwe4f4 : rtDW . hrkn2z2xmi == - 1 ? rtP
. Saturation_LowerSat_oxbf5pkgup : rtB . bxcypv55tm [ 2 ] ; rtB . lpzww2w4t4
= ( rtP . RepulsorliftPID_D * ljknvbkcpz - rtX . lbg2sxbpot ) * rtP .
RepulsorliftPID_N ; h3zcclxc4m = ( ( rtP . RepulsorliftPID_P * ljknvbkcpz +
rtX . hxzgewah4h ) + rtB . lpzww2w4t4 ) * rtP . Gain_Gain_fcqolhm04o ; r = (
pxhrw3m3vw [ 2 ] + 6.38E+6 ) * 100.0 ; rtB . efxu1t2ca5 = 6.67259E-11 * rtP .
masskg_Value * 5.98E+24 / ( r * r ) ; for ( i = 0 ; i < 6 ; i ++ ) {
gmbh5tro2i [ i ] = rtP . directionalconstrain_Value_bemiwsq1ta [ i ] * rtB .
efxu1t2ca5 ; } auusl3kzou = 57.295779513082323 * pxhrw3m3vw [ 5 ] ; r =
57.295779513082323 * pxhrw3m3vw [ 4 ] ; d_idx_0 = 57.295779513082323 *
pxhrw3m3vw [ 3 ] ; current_idx_i [ 0 ] = auusl3kzou ; msq4imazm5 ( &
current_idx_i [ 0 ] ) ; f = auusl3kzou ; pghym3yviy ( & f ) ; current_idx_i [
1 ] = auusl3kzou ; pghym3yviy ( & current_idx_i [ 1 ] ) ; msq4imazm5 ( &
auusl3kzou ) ; j_e [ 0 ] = r ; msq4imazm5 ( & j_e [ 0 ] ) ; j_e [ 6 ] = r ;
pghym3yviy ( & j_e [ 6 ] ) ; m = r ; pghym3yviy ( & m ) ; msq4imazm5 ( & r )
; o = d_idx_0 ; msq4imazm5 ( & o ) ; p = d_idx_0 ; pghym3yviy ( & p ) ; q =
d_idx_0 ; pghym3yviy ( & q ) ; msq4imazm5 ( & d_idx_0 ) ; current_idx_i [ 3 ]
= - f ; current_idx_i [ 6 ] = 0.0 ; current_idx_i [ 4 ] = auusl3kzou ;
current_idx_i [ 7 ] = 0.0 ; j_e [ 3 ] = 0.0 ; current_idx_i [ 2 ] = 0.0 ; j_e
[ 1 ] = 0.0 ; current_idx_i [ 5 ] = 0.0 ; j_e [ 4 ] = 1.0 ; current_idx_i [ 8
] = 1.0 ; j_e [ 7 ] = 0.0 ; j_e [ 2 ] = - m ; j_e [ 5 ] = 0.0 ; j_e [ 8 ] = r
; for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { for ( i = 0 ; i < 3 ; i ++ ) {
current_idx_p [ pvt + 3 * i ] = 0.0 ; current_idx_p [ pvt + 3 * i ] += j_e [
3 * i ] * current_idx_i [ pvt ] ; current_idx_p [ pvt + 3 * i ] += j_e [ 3 *
i + 1 ] * current_idx_i [ pvt + 3 ] ; current_idx_p [ pvt + 3 * i ] += j_e [
3 * i + 2 ] * current_idx_i [ pvt + 6 ] ; } b_p [ 3 * pvt ] = b_m [ pvt ] ; }
b_p [ 1 ] = 0.0 ; b_p [ 4 ] = o ; b_p [ 7 ] = - p ; b_p [ 2 ] = 0.0 ; b_p [ 5
] = q ; b_p [ 8 ] = d_idx_0 ; for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { for ( i =
0 ; i < 3 ; i ++ ) { R [ i + 3 * pvt ] = 0.0 ; R [ i + 3 * pvt ] += b_p [ 3 *
pvt ] * current_idx_p [ i ] ; R [ i + 3 * pvt ] += b_p [ 3 * pvt + 1 ] *
current_idx_p [ i + 3 ] ; R [ i + 3 * pvt ] += b_p [ 3 * pvt + 2 ] *
current_idx_p [ i + 6 ] ; } } for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { aoffset =
pvt * 3 ; gpmbq2p42y [ pvt ] = ( R [ aoffset + 1 ] * gmbh5tro2i [ 1 ] + R [
aoffset ] * gmbh5tro2i [ 0 ] ) + R [ aoffset + 2 ] * gmbh5tro2i [ 2 ] ;
gpmbq2p42y [ pvt + 3 ] = gmbh5tro2i [ pvt + 3 ] ; } for ( i = 0 ; i < 6 ; i
++ ) { auusl3kzou = gpmbq2p42y [ i ] ; d_idx_0 = ( rtP . Gain_Gain_dndn2znysv
* ( rtP . thrustmatrix_Value [ i + 18 ] * rtB . g3wfsmzd40 [ 3 ] + ( rtP .
thrustmatrix_Value [ i + 12 ] * rtB . g3wfsmzd40 [ 2 ] + ( rtP .
thrustmatrix_Value [ i + 6 ] * rtB . g3wfsmzd40 [ 1 ] + rtP .
thrustmatrix_Value [ i ] * rtB . g3wfsmzd40 [ 0 ] ) ) ) + ehzfkqx0lz [ i ] )
+ ( rtP . directionalconstrain_Value_dkx1fe5fvu [ i ] * h3zcclxc4m -
auusl3kzou ) ; gmbh5tro2i [ i ] = d_idx_0 ; ehzfkqx0lz [ i ] = d_idx_0 +
auusl3kzou ; } auusl3kzou = 57.295779513082323 * rtB . hxwp4pp2vw [ 5 ] ; r =
57.295779513082323 * rtB . hxwp4pp2vw [ 4 ] ; d_idx_0 = 57.295779513082323 *
rtB . hxwp4pp2vw [ 3 ] ; current_idx_m [ 0 ] = auusl3kzou ; msq4imazm5 ( &
current_idx_m [ 0 ] ) ; f = auusl3kzou ; pghym3yviy ( & f ) ; current_idx_m [
1 ] = auusl3kzou ; pghym3yviy ( & current_idx_m [ 1 ] ) ; msq4imazm5 ( &
auusl3kzou ) ; l_p [ 0 ] = r ; msq4imazm5 ( & l_p [ 0 ] ) ; l_p [ 6 ] = r ;
pghym3yviy ( & l_p [ 6 ] ) ; p = r ; pghym3yviy ( & p ) ; msq4imazm5 ( & r )
; m = d_idx_0 ; msq4imazm5 ( & m ) ; q = d_idx_0 ; pghym3yviy ( & q ) ; o =
d_idx_0 ; pghym3yviy ( & o ) ; msq4imazm5 ( & d_idx_0 ) ; current_idx_m [ 3 ]
= - f ; current_idx_m [ 6 ] = 0.0 ; current_idx_m [ 4 ] = auusl3kzou ;
current_idx_m [ 7 ] = 0.0 ; l_p [ 3 ] = 0.0 ; current_idx_m [ 2 ] = 0.0 ; l_p
[ 1 ] = 0.0 ; current_idx_m [ 5 ] = 0.0 ; l_p [ 4 ] = 1.0 ; current_idx_m [ 8
] = 1.0 ; l_p [ 7 ] = 0.0 ; l_p [ 2 ] = - p ; l_p [ 5 ] = 0.0 ; l_p [ 8 ] = r
; for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { for ( i = 0 ; i < 3 ; i ++ ) {
current_idx_p [ pvt + 3 * i ] = 0.0 ; current_idx_p [ pvt + 3 * i ] += l_p [
3 * i ] * current_idx_m [ pvt ] ; current_idx_p [ pvt + 3 * i ] += l_p [ 3 *
i + 1 ] * current_idx_m [ pvt + 3 ] ; current_idx_p [ pvt + 3 * i ] += l_p [
3 * i + 2 ] * current_idx_m [ pvt + 6 ] ; } b_p [ 3 * pvt ] = b_m [ pvt ] ; }
b_p [ 1 ] = 0.0 ; b_p [ 4 ] = m ; b_p [ 7 ] = - q ; b_p [ 2 ] = 0.0 ; b_p [ 5
] = o ; b_p [ 8 ] = d_idx_0 ; for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { a1ergrurzm
[ pvt ] = 0.0 ; emj0xnzbno [ pvt ] = 0.0 ; for ( i = 0 ; i < 3 ; i ++ ) { R [
pvt + 3 * i ] = 0.0 ; R [ pvt + 3 * i ] += b_p [ 3 * i ] * current_idx_p [
pvt ] ; R [ pvt + 3 * i ] += b_p [ 3 * i + 1 ] * current_idx_p [ pvt + 3 ] ;
R [ pvt + 3 * i ] += b_p [ 3 * i + 2 ] * current_idx_p [ pvt + 6 ] ;
a1ergrurzm [ pvt ] += R [ 3 * i + pvt ] * ehzfkqx0lz [ i ] ; emj0xnzbno [ pvt
] += R [ 3 * i + pvt ] * ehzfkqx0lz [ i + 3 ] ; } rtB . fyjipolnqh [ pvt ] =
a1ergrurzm [ pvt ] ; rtB . fyjipolnqh [ pvt + 3 ] = emj0xnzbno [ pvt ] ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i
= 0 ; i < 6 ; i ++ ) { rtDW . miz1bl3z5w [ i ] = rtB . fyjipolnqh [ i ] ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) {
mvkf1m0kkx [ i ] = rtDW . miz1bl3z5w [ i ] ; } for ( pvt = 0 ; pvt < 12 ; pvt
++ ) { dqd1z5myor [ pvt ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { dqd1z5myor [
pvt ] += b1xhrq4i0u [ 12 * i + pvt ] * rtDW . miz1bl3z5w [ i ] ; } } } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i =
0 ; i < 6 ; i ++ ) { rtDW . cnj5pialzd [ i ] = rtB . ecgwuotvgr [ i ] ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) {
ehzfkqx0lz [ i ] = rtDW . cnj5pialzd [ i ] ; } if ( ssIsMajorTimeStep ( rtS )
) { if ( rtP . Enable_Value ) { if ( ! rtDW . ejyd0yr2bi ) { if (
ssGetTaskTime ( rtS , 2 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . ejyd0yr2bi =
true ; } } else if ( rtDW . ejyd0yr2bi ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; for ( i = 0 ; i < 12 ; i
++ ) { rtB . lleulw554r [ i ] = rtP . Lykyhatkk1_Y0 ; } rtDW . ejyd0yr2bi =
false ; } } if ( rtDW . ejyd0yr2bi ) { for ( pvt = 0 ; pvt < 6 ; pvt ++ ) {
pzagxswsew [ pvt ] = 0.0 ; for ( i = 0 ; i < 12 ; i ++ ) { pzagxswsew [ pvt ]
+= eh3usb0kan [ 6 * i + pvt ] * nlkygcqeqs [ i ] ; } fbp0ca0c4q [ pvt ] = 0.0
; for ( i = 0 ; i < 6 ; i ++ ) { fbp0ca0c4q [ pvt ] += 0.0 * mvkf1m0kkx [ i ]
; } pnol0drln2 [ pvt ] = ehzfkqx0lz [ pvt ] - ( pzagxswsew [ pvt ] +
fbp0ca0c4q [ pvt ] ) ; } for ( pvt = 0 ; pvt < 12 ; pvt ++ ) { rtB .
lleulw554r [ pvt ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . lleulw554r [
pvt ] += de1rhaq4wx [ 12 * i + pvt ] * pnol0drln2 [ i ] ; } } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . lel1glznxf ) ; } } for ( i
= 0 ; i < 12 ; i ++ ) { rtB . joz0jerjx5 [ i ] = ( dqd1z5myor [ i ] +
oofds5vrh4 [ i ] ) + rtB . lleulw554r [ i ] ; } if ( ssIsMajorTimeStep ( rtS
) ) { if ( rtP . Enable_Value ) { if ( ! rtDW . l5qqunsqzq ) { if (
ssGetTaskTime ( rtS , 2 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . l5qqunsqzq =
true ; } } else if ( rtDW . l5qqunsqzq ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; for ( i = 0 ; i < 12 ; i
++ ) { rtB . ek4aiuqc1q [ i ] = rtP . deltax_Y0 ; } rtDW . l5qqunsqzq = false
; } } if ( rtDW . l5qqunsqzq ) { for ( pvt = 0 ; pvt < 6 ; pvt ++ ) { d_idx_0
= 0.0 ; for ( i = 0 ; i < 12 ; i ++ ) { d_idx_0 += eh3usb0kan [ 6 * i + pvt ]
* nlkygcqeqs [ i ] ; } fbp0ca0c4q [ pvt ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++
) { fbp0ca0c4q [ pvt ] += 0.0 * mvkf1m0kkx [ i ] ; } pnol0drln2 [ pvt ] = (
ehzfkqx0lz [ pvt ] - d_idx_0 ) - fbp0ca0c4q [ pvt ] ; } for ( pvt = 0 ; pvt <
12 ; pvt ++ ) { rtB . ek4aiuqc1q [ pvt ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ )
{ rtB . ek4aiuqc1q [ pvt ] += bxn3nzccbx [ 12 * i + pvt ] * pnol0drln2 [ i ]
; } } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . dyann5lzea ) ; }
} for ( i = 0 ; i < 12 ; i ++ ) { rtB . pbhd3ebigk [ i ] = rtB . ek4aiuqc1q [
i ] + nlkygcqeqs [ i ] ; } } rtB . npkf4jvhmc = rtP . RepulsorliftPID_I *
ljknvbkcpz ; rtB . m13v3tzjvr = rtP . pitchPID1_I * current_idx ; rtB .
hgnhmbw1ey = rtB . bxcypv55tm [ 0 ] * rtP . Ki_Value ; rtB . kelpqvssw3 =
jfrutirrrj * rtP . Ki_Value ; rtB . l1p2rzuxov = btqkf3upex [ 1 ] * rtP .
Ki_Value ; for ( i = 0 ; i < 6 ; i ++ ) { mvkf1m0kkx [ i ] = rtP .
Constant_Value_bjebkj0g0c [ i ] * rtX . knwk44gctl [ i ] ; } memset ( & R [ 0
] , 0 , 9U * sizeof ( real_T ) ) ; R [ 3 ] = - mvkf1m0kkx [ 5 ] ; R [ 6 ] =
mvkf1m0kkx [ 4 ] ; R [ 1 ] = mvkf1m0kkx [ 5 ] ; R [ 7 ] = - mvkf1m0kkx [ 3 ]
; R [ 2 ] = - mvkf1m0kkx [ 4 ] ; R [ 5 ] = mvkf1m0kkx [ 3 ] ; for ( pvt = 0 ;
pvt < 3 ; pvt ++ ) { emj0xnzbno [ pvt ] = rtP . innertiakgm2_Value [ pvt + 6
] * mvkf1m0kkx [ 5 ] + ( rtP . innertiakgm2_Value [ pvt + 3 ] * mvkf1m0kkx [
4 ] + rtP . innertiakgm2_Value [ pvt ] * mvkf1m0kkx [ 3 ] ) ; } memset ( &
gain [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; gain [ 3 ] = - emj0xnzbno [ 2 ] ;
gain [ 6 ] = emj0xnzbno [ 1 ] ; gain [ 1 ] = emj0xnzbno [ 2 ] ; gain [ 7 ] =
- emj0xnzbno [ 0 ] ; gain [ 2 ] = - emj0xnzbno [ 1 ] ; gain [ 5 ] =
emj0xnzbno [ 0 ] ; memset ( & g13v1nzkmv [ 0 ] , 0 , 36U * sizeof ( real_T )
) ; for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { yCovSqrt [ 6 * pvt ] = ( real_T )
b_i [ 3 * pvt ] * rtP . masskg_Value ; yCovSqrt [ 6 * ( pvt + 3 ) ] = 0.0 ;
yCovSqrt [ 6 * pvt + 3 ] = 0.0 ; yCovSqrt [ 6 * ( pvt + 3 ) + 3 ] = rtP .
innertiakgm2_Value [ 3 * pvt ] ; yCovSqrt [ 6 * pvt + 1 ] = ( real_T ) b_i [
3 * pvt + 1 ] * rtP . masskg_Value ; yCovSqrt [ 6 * ( pvt + 3 ) + 1 ] = 0.0 ;
yCovSqrt [ 6 * pvt + 4 ] = 0.0 ; yCovSqrt [ 6 * ( pvt + 3 ) + 4 ] = rtP .
innertiakgm2_Value [ 3 * pvt + 1 ] ; yCovSqrt [ 6 * pvt + 2 ] = ( real_T )
b_i [ 3 * pvt + 2 ] * rtP . masskg_Value ; yCovSqrt [ 6 * ( pvt + 3 ) + 2 ] =
0.0 ; yCovSqrt [ 6 * pvt + 5 ] = 0.0 ; yCovSqrt [ 6 * ( pvt + 3 ) + 5 ] = rtP
. innertiakgm2_Value [ 3 * pvt + 2 ] ; } for ( pvt = 0 ; pvt < 6 ; pvt ++ ) {
ipiv [ pvt ] = ( int8_T ) ( pvt + 1 ) ; } for ( pvt = 0 ; pvt < 5 ; pvt ++ )
{ aoffset = pvt * 7 ; b_a = 0 ; ix = aoffset ; r = muDoubleScalarAbs (
yCovSqrt [ aoffset ] ) ; for ( i = 2 ; i <= 6 - pvt ; i ++ ) { ix ++ ;
auusl3kzou = muDoubleScalarAbs ( yCovSqrt [ ix ] ) ; if ( auusl3kzou > r ) {
b_a = i - 1 ; r = auusl3kzou ; } } if ( yCovSqrt [ aoffset + b_a ] != 0.0 ) {
if ( b_a != 0 ) { ipiv [ pvt ] = ( int8_T ) ( ( pvt + b_a ) + 1 ) ; i = pvt +
b_a ; for ( b_a = 0 ; b_a < 6 ; b_a ++ ) { auusl3kzou = yCovSqrt [ b_a * 6 +
pvt ] ; yCovSqrt [ pvt + b_a * 6 ] = yCovSqrt [ b_a * 6 + i ] ; yCovSqrt [ i
+ b_a * 6 ] = auusl3kzou ; } } ix = ( aoffset - pvt ) + 6 ; for ( i = aoffset
+ 1 ; i < ix ; i ++ ) { yCovSqrt [ i ] /= yCovSqrt [ aoffset ] ; } } ix =
aoffset ; i = aoffset + 6 ; for ( b_a = 0 ; b_a <= 4 - pvt ; b_a ++ ) { if (
yCovSqrt [ i ] != 0.0 ) { auusl3kzou = - yCovSqrt [ i ] ; c_ix = aoffset + 1
; d_b = ix - pvt ; for ( ijA = ix + 7 ; ijA < d_b + 12 ; ijA ++ ) { yCovSqrt
[ ijA ] += yCovSqrt [ c_ix ] * auusl3kzou ; c_ix ++ ; } } i += 6 ; ix += 6 ;
} } for ( pvt = 0 ; pvt < 6 ; pvt ++ ) { p_p [ pvt ] = ( int8_T ) ( pvt + 1 )
; } for ( ix = 0 ; ix < 5 ; ix ++ ) { b_e = ipiv [ ix ] ; if ( b_e > ix + 1 )
{ pvt = p_p [ b_e - 1 ] ; p_p [ b_e - 1 ] = p_p [ ix ] ; p_p [ ix ] = (
int8_T ) pvt ; } } for ( ix = 0 ; ix < 6 ; ix ++ ) { i = p_p [ ix ] - 1 ;
g13v1nzkmv [ ix + 6 * ( p_p [ ix ] - 1 ) ] = 1.0 ; for ( aoffset = ix ;
aoffset + 1 < 7 ; aoffset ++ ) { if ( g13v1nzkmv [ 6 * i + aoffset ] != 0.0 )
{ for ( pvt = aoffset + 1 ; pvt + 1 < 7 ; pvt ++ ) { g13v1nzkmv [ pvt + 6 * i
] -= g13v1nzkmv [ 6 * i + aoffset ] * yCovSqrt [ 6 * aoffset + pvt ] ; } } }
} for ( aoffset = 0 ; aoffset < 6 ; aoffset ++ ) { ix = 6 * aoffset ; for (
pvt = 5 ; pvt >= 0 ; pvt -- ) { i = 6 * pvt ; if ( g13v1nzkmv [ pvt + ix ] !=
0.0 ) { g13v1nzkmv [ pvt + ix ] /= yCovSqrt [ pvt + i ] ; for ( b_a = 0 ; b_a
< pvt ; b_a ++ ) { g13v1nzkmv [ b_a + ix ] -= g13v1nzkmv [ pvt + ix ] *
yCovSqrt [ b_a + i ] ; } } } } for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { yCovSqrt
[ 6 * pvt ] = R [ 3 * pvt ] * rtP . masskg_Value ; yCovSqrt [ 6 * ( pvt + 3 )
] = 0.0 ; yCovSqrt [ 6 * pvt + 3 ] = 0.0 ; yCovSqrt [ 6 * ( pvt + 3 ) + 3 ] =
- gain [ 3 * pvt ] ; yCovSqrt [ 6 * pvt + 1 ] = R [ 3 * pvt + 1 ] * rtP .
masskg_Value ; yCovSqrt [ 6 * ( pvt + 3 ) + 1 ] = 0.0 ; yCovSqrt [ 6 * pvt +
4 ] = 0.0 ; yCovSqrt [ 6 * ( pvt + 3 ) + 4 ] = - gain [ 3 * pvt + 1 ] ;
yCovSqrt [ 6 * pvt + 2 ] = R [ 3 * pvt + 2 ] * rtP . masskg_Value ; yCovSqrt
[ 6 * ( pvt + 3 ) + 2 ] = 0.0 ; yCovSqrt [ 6 * pvt + 5 ] = 0.0 ; yCovSqrt [ 6
* ( pvt + 3 ) + 5 ] = - gain [ 3 * pvt + 2 ] ; } for ( pvt = 0 ; pvt < 6 ;
pvt ++ ) { d_idx_0 = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { d_idx_0 += yCovSqrt
[ 6 * i + pvt ] * mvkf1m0kkx [ i ] ; } ehzfkqx0lz [ pvt ] = ( gmbh5tro2i [
pvt ] + gpmbq2p42y [ pvt ] ) - d_idx_0 ; rtB . id54yto2nt [ pvt ] = 0.0 ; }
for ( pvt = 0 ; pvt < 6 ; pvt ++ ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB .
id54yto2nt [ pvt ] += g13v1nzkmv [ 6 * i + pvt ] * ehzfkqx0lz [ i ] ; } } R [
0 ] = muDoubleScalarCos ( pxhrw3m3vw [ 5 ] ) ; R [ 3 ] = - muDoubleScalarSin
( pxhrw3m3vw [ 5 ] ) ; R [ 6 ] = 0.0 ; R [ 1 ] = muDoubleScalarSin (
pxhrw3m3vw [ 5 ] ) ; R [ 4 ] = muDoubleScalarCos ( pxhrw3m3vw [ 5 ] ) ; R [ 7
] = 0.0 ; current_idx_p [ 0 ] = muDoubleScalarCos ( pxhrw3m3vw [ 4 ] ) ;
current_idx_p [ 3 ] = 0.0 ; current_idx_p [ 6 ] = muDoubleScalarSin (
pxhrw3m3vw [ 4 ] ) ; R [ 2 ] = 0.0 ; current_idx_p [ 1 ] = 0.0 ; R [ 5 ] =
0.0 ; current_idx_p [ 4 ] = 1.0 ; R [ 8 ] = 1.0 ; current_idx_p [ 7 ] = 0.0 ;
current_idx_p [ 2 ] = - muDoubleScalarSin ( pxhrw3m3vw [ 4 ] ) ;
current_idx_p [ 5 ] = 0.0 ; current_idx_p [ 8 ] = muDoubleScalarCos (
pxhrw3m3vw [ 4 ] ) ; for ( pvt = 0 ; pvt < 3 ; pvt ++ ) { for ( i = 0 ; i < 3
; i ++ ) { j [ pvt + 3 * i ] = 0.0 ; j [ pvt + 3 * i ] += current_idx_p [ 3 *
i ] * R [ pvt ] ; j [ pvt + 3 * i ] += current_idx_p [ 3 * i + 1 ] * R [ pvt
+ 3 ] ; j [ pvt + 3 * i ] += current_idx_p [ 3 * i + 2 ] * R [ pvt + 6 ] ; }
current_idx_e [ 3 * pvt ] = b_m [ pvt ] ; } current_idx_e [ 1 ] = 0.0 ;
current_idx_e [ 4 ] = muDoubleScalarCos ( pxhrw3m3vw [ 3 ] ) ; current_idx_e
[ 7 ] = - muDoubleScalarSin ( pxhrw3m3vw [ 3 ] ) ; current_idx_e [ 2 ] = 0.0
; current_idx_e [ 5 ] = muDoubleScalarSin ( pxhrw3m3vw [ 3 ] ) ;
current_idx_e [ 8 ] = muDoubleScalarCos ( pxhrw3m3vw [ 3 ] ) ; for ( pvt = 0
; pvt < 3 ; pvt ++ ) { for ( i = 0 ; i < 3 ; i ++ ) { R [ i + 3 * pvt ] = 0.0
; R [ i + 3 * pvt ] += current_idx_e [ 3 * pvt ] * j [ i ] ; R [ i + 3 * pvt
] += current_idx_e [ 3 * pvt + 1 ] * j [ i + 3 ] ; R [ i + 3 * pvt ] +=
current_idx_e [ 3 * pvt + 2 ] * j [ i + 6 ] ; } } for ( pvt = 0 ; pvt < 3 ;
pvt ++ ) { yCovSqrt [ 6 * pvt ] = R [ 3 * pvt ] ; yCovSqrt [ 6 * ( pvt + 3 )
] = 0.0 ; yCovSqrt [ 6 * pvt + 3 ] = 0.0 ; yCovSqrt [ 6 * pvt + 1 ] = R [ 3 *
pvt + 1 ] ; yCovSqrt [ 6 * ( pvt + 3 ) + 1 ] = 0.0 ; yCovSqrt [ 6 * pvt + 4 ]
= 0.0 ; yCovSqrt [ 6 * pvt + 2 ] = R [ 3 * pvt + 2 ] ; yCovSqrt [ 6 * ( pvt +
3 ) + 2 ] = 0.0 ; yCovSqrt [ 6 * pvt + 5 ] = 0.0 ; } yCovSqrt [ 21 ] = 1.0 ;
yCovSqrt [ 27 ] = muDoubleScalarSin ( pxhrw3m3vw [ 3 ] ) * muDoubleScalarTan
( pxhrw3m3vw [ 4 ] ) ; yCovSqrt [ 33 ] = muDoubleScalarCos ( pxhrw3m3vw [ 3 ]
) * muDoubleScalarTan ( pxhrw3m3vw [ 4 ] ) ; yCovSqrt [ 22 ] = 0.0 ; yCovSqrt
[ 28 ] = muDoubleScalarCos ( pxhrw3m3vw [ 3 ] ) ; yCovSqrt [ 34 ] = -
muDoubleScalarSin ( pxhrw3m3vw [ 3 ] ) ; yCovSqrt [ 23 ] = 0.0 ; yCovSqrt [
29 ] = muDoubleScalarSin ( pxhrw3m3vw [ 3 ] ) / muDoubleScalarCos (
pxhrw3m3vw [ 4 ] ) ; yCovSqrt [ 35 ] = muDoubleScalarCos ( pxhrw3m3vw [ 3 ] )
/ muDoubleScalarCos ( pxhrw3m3vw [ 4 ] ) ; for ( pvt = 0 ; pvt < 6 ; pvt ++ )
{ rtB . abn2o32zty [ pvt ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { rtB .
abn2o32zty [ pvt ] += yCovSqrt [ 6 * i + pvt ] * mvkf1m0kkx [ i ] ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) { int32_T i ;
rtB . h03fxlsmaz = rtP . gainscaling_Gain * rtP . Kp_Value ; for ( i = 0 ; i
< 6 ; i ++ ) { rtB . c22d1mz0mp [ i ] = rtP . Gain_Gain_flo45vukkm * rtP .
Constant_Value_ok5wcdghto [ i ] ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { memcpy ( &
rtDW . pl5ipvhaac [ 0 ] , & rtB . pbhd3ebigk [ 0 ] , 12U * sizeof ( real_T )
) ; rtDW . cztv4wdtac = false ; memcpy ( & rtDW . mvxqg1s3mg [ 0 ] , & rtB .
jsl5x2irnt [ 0 ] , 144U * sizeof ( real_T ) ) ; rtDW . olcb4lv2yx = false ;
memcpy ( & rtDW . mmrthbmx33 [ 0 ] , & rtB . joz0jerjx5 [ 0 ] , 12U * sizeof
( real_T ) ) ; } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot *
_rtXdot ; int32_T i ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot ->
db1kkvuurg = rtB . pnipjtlxdg ; _rtXdot -> jbqot5oyvh = rtB . gx53sbrfe2 ;
_rtXdot -> i4smtyjnu1 = rtB . b33ayb4udb ; _rtXdot -> esrigfsrr5 = rtB .
hgnhmbw1ey ; _rtXdot -> bbp1hflh2q = rtB . hvwc1pvt1x ; _rtXdot -> jhetqhfcd2
= rtB . m13v3tzjvr ; _rtXdot -> jogqt0m4cw = rtB . gx2sxhuagj ; _rtXdot ->
otroann2mn = rtB . kelpqvssw3 ; _rtXdot -> gfyya5hmyh = rtB . hsrcc0wrus ;
_rtXdot -> iueuvff0dd = rtB . l1p2rzuxov ; _rtXdot -> by22pdjj4t = rtB .
mwtoyjgicn ; _rtXdot -> hxzgewah4h = rtB . npkf4jvhmc ; _rtXdot -> lbg2sxbpot
= rtB . lpzww2w4t4 ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot -> piupepdipv [ i
] = rtB . abn2o32zty [ i ] ; _rtXdot -> knwk44gctl [ i ] = rtB . id54yto2nt [
i ] ; } } void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) {
ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ;
_rtZCSV -> hle3iqlpfy = rtB . ge0blvxvmu [ 0 ] - rtP . Saturation_UpperSat ;
_rtZCSV -> py4b2mr5y2 = rtB . ge0blvxvmu [ 0 ] - rtP . Saturation_LowerSat ;
_rtZCSV -> lrwzvdt5pk = rtB . ge0blvxvmu [ 1 ] - rtP . Saturation1_UpperSat ;
_rtZCSV -> btproyagwd = rtB . ge0blvxvmu [ 1 ] - rtP . Saturation1_LowerSat ;
_rtZCSV -> cwkigxlodn = rtB . jtc3cuors3 [ 2 ] ; _rtZCSV -> cp11u0bebn = rtB
. g513sj0mdc - rtP . Switch_Threshold ; _rtZCSV -> hd4ypnhmy5 = rtB .
mnwxpzx3lu - rtP . Saturation_UpperSat_c14ofn1jjf ; _rtZCSV -> l055x4dnsj =
rtB . mnwxpzx3lu - rtP . Saturation_LowerSat_hrg0ktoepw ; _rtZCSV ->
lv2p1y5qtz = rtB . fbfaby5zgo - rtP . Switch_Threshold_djsbgwglvj ; _rtZCSV
-> hci34spajv = rtB . bxcypv55tm [ 2 ] - rtP . Saturation_UpperSat_onxkxwe4f4
; _rtZCSV -> e4vpolq52a = rtB . bxcypv55tm [ 2 ] - rtP .
Saturation_LowerSat_oxbf5pkgup ; } void MdlTerminate ( void ) { } static void
mr_main_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const
void * srcData , size_t numBytes ) ; static void mr_main_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1
, numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData (
newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber (
destArray , i , j , newArray ) ; } static void mr_main_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_main_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_main_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) ; static void mr_main_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static
uint_T mr_main_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_main_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_main_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_main_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_main_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_main_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_main_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_main_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber
( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal )
) ; } static uint_T mr_main_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_main_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_main_GetDWork ( ) { static const char * ssDWFieldNames [ 3
] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_main_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 27 ] = {
"rtDW.mvxqg1s3mg" , "rtDW.mmrthbmx33" , "rtDW.pl5ipvhaac" , "rtDW.miz1bl3z5w"
, "rtDW.cnj5pialzd" , "rtDW.b51bgum1oo" , "rtDW.kiu4ryrenn" ,
"rtDW.i5ledh1vq3" , "rtDW.fft0rbdmuo" , "rtDW.bhdaoyxpxq" , "rtDW.ejs0vs2amv"
, "rtDW.g0l0bbckkp" , "rtDW.f2qhiy1twx" , "rtDW.hjw5xpsugz" ,
"rtDW.a02qvwrxmu" , "rtDW.hiudrndel0" , "rtDW.hrkn2z2xmi" , "rtDW.dyann5lzea"
, "rtDW.lel1glznxf" , "rtDW.ltisa2m2wd" , "rtDW.md3ol40n3j" ,
"rtDW.cztv4wdtac" , "rtDW.olcb4lv2yx" , "rtDW.h0pdguc1c3" , "rtDW.pvze4nq3ec"
, "rtDW.l5qqunsqzq" , "rtDW.ejyd0yr2bi" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 27 , rtdwDataFieldNames ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW .
mvxqg1s3mg ) , sizeof ( rtDW . mvxqg1s3mg ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( rtDW . mmrthbmx33 ) , sizeof ( rtDW .
mmrthbmx33 ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void
* ) & ( rtDW . pl5ipvhaac ) , sizeof ( rtDW . pl5ipvhaac ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW .
miz1bl3z5w ) , sizeof ( rtDW . miz1bl3z5w ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( rtDW . cnj5pialzd ) , sizeof ( rtDW .
cnj5pialzd ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void
* ) & ( rtDW . b51bgum1oo ) , sizeof ( rtDW . b51bgum1oo ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW .
kiu4ryrenn ) , sizeof ( rtDW . kiu4ryrenn ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( rtDW . i5ledh1vq3 ) , sizeof ( rtDW .
i5ledh1vq3 ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void
* ) & ( rtDW . fft0rbdmuo ) , sizeof ( rtDW . fft0rbdmuo ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW .
bhdaoyxpxq ) , sizeof ( rtDW . bhdaoyxpxq ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( rtDW . ejs0vs2amv ) , sizeof ( rtDW
. ejs0vs2amv ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( rtDW . g0l0bbckkp ) , sizeof ( rtDW . g0l0bbckkp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & ( rtDW .
f2qhiy1twx ) , sizeof ( rtDW . f2qhiy1twx ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 13 , ( const void * ) & ( rtDW . hjw5xpsugz ) , sizeof ( rtDW
. hjw5xpsugz ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( rtDW . a02qvwrxmu ) , sizeof ( rtDW . a02qvwrxmu ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & ( rtDW .
hiudrndel0 ) , sizeof ( rtDW . hiudrndel0 ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 16 , ( const void * ) & ( rtDW . hrkn2z2xmi ) , sizeof ( rtDW
. hrkn2z2xmi ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( rtDW . dyann5lzea ) , sizeof ( rtDW . dyann5lzea ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & ( rtDW .
lel1glznxf ) , sizeof ( rtDW . lel1glznxf ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 19 , ( const void * ) & ( rtDW . ltisa2m2wd ) , sizeof ( rtDW
. ltisa2m2wd ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const
void * ) & ( rtDW . md3ol40n3j ) , sizeof ( rtDW . md3ol40n3j ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & ( rtDW .
cztv4wdtac ) , sizeof ( rtDW . cztv4wdtac ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 22 , ( const void * ) & ( rtDW . olcb4lv2yx ) , sizeof ( rtDW
. olcb4lv2yx ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const
void * ) & ( rtDW . h0pdguc1c3 ) , sizeof ( rtDW . h0pdguc1c3 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & ( rtDW .
pvze4nq3ec ) , sizeof ( rtDW . pvze4nq3ec ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( rtDW . l5qqunsqzq ) , sizeof ( rtDW
. l5qqunsqzq ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const
void * ) & ( rtDW . ejyd0yr2bi ) , sizeof ( rtDW . ejyd0yr2bi ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_main_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 , sizeof
( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 )
; mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . mvxqg1s3mg ) ,
rtdwData , 0 , 0 , sizeof ( rtDW . mvxqg1s3mg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . mmrthbmx33 ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . mmrthbmx33 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . pl5ipvhaac ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . pl5ipvhaac ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . miz1bl3z5w ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . miz1bl3z5w ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . cnj5pialzd ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . cnj5pialzd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . b51bgum1oo ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . b51bgum1oo ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . kiu4ryrenn ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . kiu4ryrenn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . i5ledh1vq3 ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . i5ledh1vq3 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . fft0rbdmuo ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . fft0rbdmuo ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . bhdaoyxpxq ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . bhdaoyxpxq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . ejs0vs2amv ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . ejs0vs2amv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . g0l0bbckkp ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . g0l0bbckkp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . f2qhiy1twx ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . f2qhiy1twx ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . hjw5xpsugz ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . hjw5xpsugz ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . a02qvwrxmu ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . a02qvwrxmu ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . hiudrndel0 ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . hiudrndel0 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . hrkn2z2xmi ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . hrkn2z2xmi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . dyann5lzea ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . dyann5lzea ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . lel1glznxf ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . lel1glznxf ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . ltisa2m2wd ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . ltisa2m2wd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . md3ol40n3j ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . md3ol40n3j ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . cztv4wdtac ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . cztv4wdtac ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . olcb4lv2yx ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . olcb4lv2yx ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . h0pdguc1c3 ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . h0pdguc1c3 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . pvze4nq3ec ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . pvze4nq3ec ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . l5qqunsqzq ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . l5qqunsqzq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( rtDW . ejyd0yr2bi ) ,
rtdwData , 0 , 26 , sizeof ( rtDW . ejyd0yr2bi ) ) ; } } mxArray *
mr_main_GetSimStateDisallowedBlocks ( ) { mxArray * data = mxCreateCellMatrix
( 2 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const char * blockType [ 2
] = { "Scope" , "Scope" , } ; static const char * blockPath [ 2 ] = {
"main/Thrusters/Scope" ,
"main/X-Wing Model/gravitational force/gravitational force visualization" , }
; static const int reason [ 2 ] = { 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [
0 ] < 2 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 25 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 187 ) ; ssSetNumBlockIO ( rtS , 44 ) ;
ssSetNumBlockParams ( rtS , 570 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.005 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2399090089U ) ;
ssSetChecksumVal ( rtS , 1 , 4253358139U ) ; ssSetChecksumVal ( rtS , 2 ,
2103209435U ) ; ssSetChecksumVal ( rtS , 3 , 1421672948U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
main_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS , true )
; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 )
; ssSetModelName ( rtS , "main" ) ; ssSetPath ( rtS , "main" ) ; ssSetTStart
( rtS , 0.0 ) ; ssSetTFinal ( rtS , 220.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 6 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 6 , 144 , 12 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static
int_T rt_LoggedStateDimensions [ ] = { 1 , 6 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 6 , 144 , 12 } ; static boolean_T rt_LoggedStateIsVarDims [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE
, SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) }
; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "DSTATE" ,
"DSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
"main/R2D2.1/traj generator/Integrator" ,
"main/X-Wing Model/X-wing Model/linear pose integrater" ,
"main/Electromagnet Gyro/Gyros PID/Integrator/Continuous/Integrator" ,
"main/Electromagnet Gyro/Gyros PID/Filter/Cont. Filter/Filter" ,
"main/Thrusters/low-level PID/forward PID/Integrator/Continuous/Integrator" ,
"main/Thrusters/low-level PID/forward PID/Filter/Cont. Filter/Filter" ,
 "main/Thrusters/additional pitch PID/pitch PID1/Integrator/Continuous/Integrator"
, "main/Thrusters/additional pitch PID/pitch PID1/Filter/Cont. Filter/Filter"
, "main/Thrusters/low-level PID/pitch PID/Integrator/Continuous/Integrator" ,
"main/Thrusters/low-level PID/pitch PID/Filter/Cont. Filter/Filter" ,
"main/Thrusters/low-level PID/yaw PID/Integrator/Continuous/Integrator" ,
"main/Thrusters/low-level PID/yaw PID/Filter/Cont. Filter/Filter" ,
"main/Repulsorlift/Repulsorlift PID/Integrator/Continuous/Integrator" ,
"main/Repulsorlift/Repulsorlift PID/Filter/Cont. Filter/Filter" ,
"main/X-Wing Model/X-wing Model/angular velocity integrater" ,
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/MemoryP" ,
"main/Extended Kalman Filter/Kalman Filter/Kalman Filter/MemoryX" } ; static
const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "DSTATE" , "DSTATE" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ,
10 , 11 , 12 , 13 , 14 , 0 , 1 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 17 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 17 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . db1kkvuurg ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . piupepdipv [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . jbqot5oyvh ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . i4smtyjnu1 ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . esrigfsrr5 ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . bbp1hflh2q ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . jhetqhfcd2 ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . jogqt0m4cw ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . otroann2mn ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . gfyya5hmyh ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . iueuvff0dd ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . by22pdjj4t ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . hxzgewah4h ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . lbg2sxbpot ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . knwk44gctl [ 0 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) rtDW . mvxqg1s3mg ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) rtDW . mmrthbmx33 ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 25 ] ;
static real_T absTol [ 25 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 25 ] = {
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 25 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 25 ] ; static uint8_T zcAttributes [ 11 ] =
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 7 ] = { { 1 * sizeof ( real_T ) ,
( char * ) ( & rtB . mao5cuyexx ) , ( NULL ) } , { 6 * sizeof ( real_T ) , (
char * ) ( & rtB . ebkydsk0r2 [ 0 ] ) , ( NULL ) } , { 1 * sizeof ( real_T )
, ( char * ) ( & rtB . gx53sbrfe2 ) , ( NULL ) } , { 1 * sizeof ( real_T ) ,
( char * ) ( & rtB . cmg5lcy35n ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . gut2rdh4at ) , ( NULL ) } , { 6 * sizeof ( real_T ) , (
char * ) ( & rtB . hxwp4pp2vw [ 0 ] ) , ( NULL ) } , { 6 * sizeof ( real_T )
, ( char * ) ( & rtB . gjsiilr2qy [ 0 ] ) , ( NULL ) } } ; { int i ; for ( i
= 0 ; i < 25 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.005 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
7 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode45" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol )
; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 11 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 11 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 2399090089U ) ; ssSetChecksumVal ( rtS , 1 ,
4253358139U ) ; ssSetChecksumVal ( rtS , 2 , 2103209435U ) ; ssSetChecksumVal
( rtS , 3 , 1421672948U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 20 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = ( sysRanDType * ) & rtDW . lel1glznxf ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = ( sysRanDType * ) & rtDW . dyann5lzea ;
systemRan [ 7 ] = & rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ;
systemRan [ 9 ] = & rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ;
systemRan [ 11 ] = & rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ;
systemRan [ 13 ] = & rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ;
systemRan [ 15 ] = & rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ;
systemRan [ 17 ] = & rtAlwaysEnabled ; systemRan [ 18 ] = & rtAlwaysEnabled ;
systemRan [ 19 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_main_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_main_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS , mr_main_SetDWork )
; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS )
) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }

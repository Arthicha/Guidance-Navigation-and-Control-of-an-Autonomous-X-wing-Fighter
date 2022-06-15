#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } } ; static uint_T rtDataTypeSizes [ ] = {
sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof (
uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( void * ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) }
; static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" } ; static DataTypeTransition rtBTransitions [ ] = { {
( char_T * ) ( & rtB . b3mb05k43e [ 0 ] ) , 0 , 0 , 314 } , { ( char_T * ) (
& rtDW . mvxqg1s3mg [ 0 ] ) , 0 , 0 , 181 } , { ( char_T * ) ( & rtDW .
ke4f005qyf . LoggedData ) , 11 , 0 , 2 } , { ( char_T * ) ( & rtDW .
kiu4ryrenn ) , 7 , 0 , 632 } , { ( char_T * ) ( & rtDW . f2qhiy1twx ) , 10 ,
0 , 5 } , { ( char_T * ) ( & rtDW . dyann5lzea ) , 2 , 0 , 2 } , { ( char_T *
) ( & rtDW . ltisa2m2wd ) , 8 , 0 , 8 } } ; static DataTypeTransitionTable
rtBTransTable = { 7U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . GyrosPID_D ) , 0 , 0 , 568 }
, { ( char_T * ) ( & rtP . Enable_Value ) , 8 , 0 , 2 } } ; static
DataTypeTransitionTable rtPTransTable = { 2U , rtPTransitions } ;

#include "main.h"
#include "main_private.h"
P rtP = { 1.0 , 0.001 , 0.3 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 100.0 , 100.0 , 100.0 , 0.1 ,
0.0001 , 0.001 , 0.0 , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , { 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 }
, { 10.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 10.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 10.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 10.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 10.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 10.0 } , 0.0 ,
2.0 , 0.0 , { 0.0 , 0.0 , 0.01705 , 0.0 , 0.0 , 0.0 } , 100.0 , - 100.0 ,
100.0 , - 100.0 , 0.0002 , { 0.0 , 0.0 , 0.01705 , 0.0 , 0.0 , 0.0 } , 0.0002
, 10000.0 , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 1.0 , 10.0 , - 10.0 , -
1.0 , 0.1 , 1.0 , 10000.0 , 10.0 , - 10.0 , 10000.0 , { 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , { 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 } , {
3.1622776601683795 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 3.1622776601683795 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 3.1622776601683795 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 3.1622776601683795 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
3.1622776601683795 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 3.1622776601683795 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 3.1622776601683795 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 3.1622776601683795 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
3.1622776601683795 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 3.1622776601683795 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 3.1622776601683795 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 3.1622776601683795 } ,
{ 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , {
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 } , 1.5 , 0.0 , 0.1 , 100.0 , 0.0 , 0.0 ,
6.0 , 1.0 , 0.0 , 0.03 , 0.1 , { 1.0 , 1.0 , 1.0 , 1.0 , - 1.0 , - 1.0 , 1.0
, 1.0 , 1.0 , - 1.0 , 1.0 , - 1.0 } , { 0.25 , 0.0 , 0.0 , 0.0 , - 0.68 ,
1.425 , 0.25 , 0.0 , 0.0 , 0.0 , - 0.68 , - 1.425 , 0.25 , 0.0 , 0.0 , 0.0 ,
0.68 , 1.425 , 0.25 , 0.0 , 0.0 , 0.0 , 0.68 , - 1.425 } , { 1.0 , 0.0 , 1.0
, 1.0 , 1.0 , 1.0 } , 10000.0 , { 36145.0 , 2.26927 , 0.0 , 0.0 ,
116437.915354 , 0.00035374516 , 0.0 , 0.00035374516 , 90590.2796914 } , { 0.0
, 0.0 , - 1.0 , 0.0 , 0.0 , 0.0 } , { 5.0 , 5.0 , 5.0 , 0.1 , 0.1 , 0.1 } ,
1.0 , 1 , 1 } ;

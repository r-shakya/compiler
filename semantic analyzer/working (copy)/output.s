var type char = c
var type integer = a
var type integer = b
array type integer elements 3 = arr1
var type float = f

 
 b  f 
 

 
 string id  f  
 
array type float elements 4 = arr2

 
 a  a 
 

 
 r  r 
 

 
 r  r 
 

 
 1  2 
 

 
 string id  arr2  
 
var type float = g
//////////////////////////////////////
NULL 
id name : a    ,  data_type : integer   ,  id_value   :                           

id name : b    ,  data_type : integer   ,  id_value   :                           

id name : c    ,  data_type : char   ,  id_value   :                           

NULL 
id name : arr1    ,  data_type : integerarray   ,  id_value   :  3                         
id name : arr2    ,  data_type : floatarray   ,  id_value   :  4                         

id name : f    ,  data_type : float   ,  id_value   :                           

id name : g    ,  data_type : float   ,  id_value   :                           

//////////////////////////////////////
var type integer = a
1st scope 

 
 a  a 
 

 
 string id  a  
 
id in arithmetic expr = a
1st scope 
1st scope 

 
 b  b 
 

 
 string id  b  
 
id in arithmetic expr = b
0 + 0
1st scope 
1st scope 

 
 c  c 
 

 
 string id  c  
 
c = 0
1st scope 
1st scope 

 
 c  c 
 

 
 string id  c  
 
id in arithmetic expr = c
1st scope 

 
 a  a 
 

 
 string id  a  
 
a[1] = 0
1st scope 
1st scope 

 
 c  c 
 

 
 string id  c  
 
id in arithmetic expr = c
0 + 1
return from function 1
//////////////////////////////////////
NULL 
id name : a    ,  data_type : integer   ,  id_value   :                           

NULL 
NULL 
//////////////////////////////////////
sumofnumber function executed with send-type integer 

array type integer  elements 5 = arr3

 
 a  a 
 

 
 r  r 
 

 
 r  r 
 

 
 1  3 
 

 
 string id  arr3  
 

 
 a  a 
 

 
 r  r 
 

 
 r  r 
 

 
 2  3 
 

 
 string id  arr3  
 
var type integer = d
var type integer = sum
//////////////////////////////////////
NULL 
id name : a    ,  data_type : integer   ,  id_value   :                           
id name : sum    ,  data_type : integer   ,  id_value   :                           

id name : b    ,  data_type : integer   ,  id_value   :                           

id name : c    ,  data_type : char   ,  id_value   :                           

id name : d    ,  data_type : integer   ,  id_value   :                           

id name : arr1    ,  data_type : integerarray   ,  id_value   :  3                         
id name : arr3    ,  data_type : integerarray   ,  id_value   :  5                         

id name : f    ,  data_type : float   ,  id_value   :                           

id name : g    ,  data_type : float   ,  id_value   :                           

NULL 
NULL 
NULL 
NULL 
NULL 
id name : arr2    ,  data_type : floatarray   ,  id_value   :  4                         

NULL 
NULL 
//////////////////////////////////////
number 1 added in array
number 2 added in array
number 3 added in array
array type integer  elements 3 = a
a[3] = {.....}
var type integer = var1
var type integer = var2

 
 v  v 
 

 
 a  a 
 

 
 r  r 
 

 
 1  2 
 

 
 string id  var2  
 
1st scope 

 
 a  a 
 

 
 string id  a  
 
a = 1
var type integer = i

 
 a  i 
 

 
 string id  i  
 
2 + 1
1st scope 
1st scope 

 
 b  b 
 

 
 string id  b  
 
b = 3
3 + 2
1st scope 
1st scope 

 
 g  g 
 

 
 string id  g  
 
g = 5
1st scope 

 
 a  a 
 

 
 string id  a  
 
id in arithmetic expr = a
1st scope 
1st scope 

 
 b  b 
 

 
 string id  b  
 
id in arithmetic expr = b
0 + 0
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
sum = 0
1 < 2
//////////////////////////////////////
id name : var1    ,  data_type : integer   ,  id_value   :                           
id name : var2    ,  data_type : integer   ,  id_value   :                           

id name : a    ,  data_type : integerarray   ,  id_value   :  3                         
id name : i    ,  data_type : integer   ,  id_value   :                           

NULL 
NULL 
//////////////////////////////////////
1st scope 
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
sum = 2
//////////////////////////////////////
id name : var1    ,  data_type : integer   ,  id_value   :                           
id name : var2    ,  data_type : integer   ,  id_value   :                           

id name : a    ,  data_type : integerarray   ,  id_value   :  3                         
id name : i    ,  data_type : integer   ,  id_value   :                           

NULL 
NULL 
//////////////////////////////////////
1st scope 
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
sum = 4
else statement executed 

//////////////////////////////////////
id name : var1    ,  data_type : integer   ,  id_value   :                           
id name : var2    ,  data_type : integer   ,  id_value   :                           

id name : a    ,  data_type : integerarray   ,  id_value   :  3                         
id name : i    ,  data_type : integer   ,  id_value   :                           

NULL 
NULL 
//////////////////////////////////////
only if statement executed 
3 < 4
//////////////////////////////////////
id name : var1    ,  data_type : integer   ,  id_value   :                           
id name : var2    ,  data_type : integer   ,  id_value   :                           

id name : a    ,  data_type : integerarray   ,  id_value   :  3                         
id name : i    ,  data_type : integer   ,  id_value   :                           

NULL 
NULL 
//////////////////////////////////////
var type integer = var1
1st scope 
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
sum = 4
//////////////////////////////////////
NULL 
id name : a    ,  data_type : integer   ,  id_value   :                           
id name : sum    ,  data_type : integer   ,  id_value   :                           

id name : b    ,  data_type : integer   ,  id_value   :                           

id name : c    ,  data_type : char   ,  id_value   :                           

id name : d    ,  data_type : integer   ,  id_value   :                           

id name : arr1    ,  data_type : integerarray   ,  id_value   :  3                         
id name : arr3    ,  data_type : integerarray   ,  id_value   :  5                         

id name : f    ,  data_type : float   ,  id_value   :                           

id name : g    ,  data_type : float   ,  id_value   :                           

NULL 
NULL 
NULL 
NULL 
NULL 
id name : arr2    ,  data_type : floatarray   ,  id_value   :  4                         

NULL 
NULL 
//////////////////////////////////////
only if statement executed 
1st scope 
array is not defined

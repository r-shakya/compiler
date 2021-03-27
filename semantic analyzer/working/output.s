var type char = c
array type char elements 3 = arr1
var type integer = a
var type integer = b
var type float = f

 
 b  f 
 

 
 string id  f  
 
array type float elements 4 = arr2

 
 a  a 
 

 
 r  r 
 

 
 r  r 
 

 
 1  2 
 

 
 string id  arr2  
 
var type integer : g = 13

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  a                           integer                       
  sumofnumber                 function                      char
  b                           integer                       
  c                           char                          
  arr1                        char                          3
  arr2                        float                         4
  f                           float                         
  g                           integer                       
-------------------------------------------------------------------------------------------------------------
var type char = a
char type parameter added to the function 
 1st scope 
1st scope 

 
 c  c 
 

 
 string id  c  
 
1st scope 

 
 a  a 
 

 
 string id  a  
 
id in arithmetic expr = a
IDENTIFIER c =  
1st scope 

 
 a  a 
 

 
 string id  a  
 
1st scope 
1st scope 

 
 c  c 
 

 
 string id  c  
 
id in arithmetic expr = c
IDENTIFIER a =  
1st scope 
1st scope 

 
 c  c 
 

 
 string id  c  
 
return from function c

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  a                           char                          
-------------------------------------------------------------------------------------------------------------
sumofnumber function executed with send-type char 

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

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  a                           integer                       
  sum                         integer                       
  b                           integer                       
  c                           char                          
  d                           integer                       
  arr1                        char                          3
  arr3                        integer                       5
  f                           float                         
  g                           integer                       
  sumofnumber                 function                      char
  arr2                        float                         4
-------------------------------------------------------------------------------------------------------------
var type integer = var1
var type integer = var2

 
 v  v 
 

 
 a  a 
 

 
 r  r 
 

 
 1  2 
 

 
 string id  var2  
 
1st scope 
1st scope 

 
 a  a 
 

 
 string id  a  
 
IDENTIFIER a =  
var type integer : var3 = 10

 
 v  v 
 

 
 a  a 
 

 
 r  r 
 

 
 1  3 
 

 
 string id  var3  
 

 
 v  v 
 

 
 a  a 
 

 
 r  r 
 

 
 2  3 
 

 
 string id  var3  
 
1st scope 
1st scope 

 
 b  b 
 

 
 string id  b  
 
2 + 1
IDENTIFIER b =  
1st scope 
1st scope 

 
 g  g 
 

 
 string id  g  
 
3 + 2
IDENTIFIER g =  
var type integer = i
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
1st scope 

 
 i  a 
 

 
 string id  a  
 
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
IDENTIFIER sum =  
1 < 2

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var2                        integer                       
  var3                        integer                       
  i                           integer                       
-------------------------------------------------------------------------------------------------------------
1st scope 
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
IDENTIFIER sum =  

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var2                        integer                       
  var3                        integer                       
  i                           integer                       
-------------------------------------------------------------------------------------------------------------
1st scope 
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
IDENTIFIER sum =  
else statement executed 


------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var2                        integer                       
  var3                        integer                       
  i                           integer                       
-------------------------------------------------------------------------------------------------------------
only if statement executed 
3 < 4

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var2                        integer                       
  var3                        integer                       
  i                           integer                       
-------------------------------------------------------------------------------------------------------------
var type integer = var1
1st scope 
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
IDENTIFIER sum =  

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var2                        integer                       
  var3                        integer                       
  i                           integer                       
-------------------------------------------------------------------------------------------------------------
only if statement executed 
1st scope 
1st scope 

 
 b  b 
 

 
 string id  b  
 
id in logical expression = b
1 < 5

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var2                        integer                       
  var3                        integer                       
  i                           integer                       
-------------------------------------------------------------------------------------------------------------
1st scope 
1st scope 

 
 i  a 
 

 
 string id  a  
 
1st scope 

 
 a  a 
 

 
 string id  a  
 
1st scope 
1st scope 

 
 i  a 
 

 
 string id  a  
 
1st scope 

 
 a  a 
 

 
 string id  a  
 
id in arithmetic expr = a
0 + 1
IDENTIFIER a =  

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
while statement executed 


------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var2                        integer                       
  var3                        integer                       
  i                           integer                       
-------------------------------------------------------------------------------------------------------------
1st scope 
1st scope 

 
 i  i 
 

 
 string id  i  
 
IDENTIFIER i =  
1st scope 
1st scope 

 
 i  i 
 

 
 string id  i  
 
id in logical expression = i
1 < 5
1st scope 
1st scope 

 
 i  i 
 

 
 string id  i  
 
1st scope 
1st scope 

 
 i  i 
 

 
 string id  i  
 
id in arithmetic expr = i
0 + 1
IDENTIFIER i =  
1st scope 
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
1st scope 
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 string id  sum  
 
id in arithmetic expr = sum
1st scope 
1st scope 

 
 i  i 
 

 
 string id  i  
 
id in arithmetic expr = i
0 + 0
IDENTIFIER sum =  

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
for statement executed 

1st scope 
1st scope 

 
 a  a 
 

 
 r  r 
 

 
 r  r 
 

 
 1  1 
 

 
 string id  arr1  
 
1st scope 
1st scope 

 
 s  s 
 

 
 u  u 
 

 
 m  m 
 

 
 o  o 
 

 
 f  f 
 

 
 n  n 
 

 
 u  u 
 

 
 m  m 
 

 
 b  b 
 

 
 e  e 
 

 
 r  r 
 

 
 string id  sumofnumber  
 
1st scope 
1st scope 

 
 c  c 
 

 
 string id  c  
 
parameter c in the function call has different data type wrt function declaration
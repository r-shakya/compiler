
------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
t0 = i
t1 = 4 * t0
t2 = &a
t3 = t2 + t1
t4 = *t3
i = t4 
t5 = i
t6 = 1
t7 = t5 + t6
t8 = 4 * t7
t9 = &a
t10 = t9 + t8
t11 = *t10
t12 = i
t13 = 4 * t12
t14 = &a
t15 = t14 + t13
t16 = *t15
t17 = t11 < t16

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var3                        integer                       
  i                           integer                       
  a                           integer                       5
-------------------------------------------------------------------------------------------------------------
if not t17 goto l0
t18 = 0
var3 = t18 

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var3                        integer                       
  i                           integer                       
  a                           integer                       5
-------------------------------------------------------------------------------------------------------------
 
l0:

------------------------------------------SYMBOL-TABLE-------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------
-------------------------------------------------------------------------------------------------------------
  var1                        integer                       
  var3                        integer                       
  i                           integer                       
  a                           integer                       5
-------------------------------------------------------------------------------------------------------------

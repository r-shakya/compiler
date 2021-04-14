  idname =    array   , idvalue  =        ,idtype   =  integer  
   idname =    var1   , idvalue  =        ,idtype   =  integer  
   idname =    var2   , idvalue  =        ,idtype   =  integer  
   idname =    n   , idvalue  =        ,idtype   =  integer  
 t0 = 12
id3 = t0 
t1 = id1
t2 = 4 * t1
t3 = &id0
t4 = t3 + t2
t5 = id2
*t4 = t5
  idname =    a   , idvalue  =        ,idtype   =  char  
   idname =    b   , idvalue  =        ,idtype   =  char  
   idname =    yy   , idvalue  =        ,idtype   =  float  
   idname =    zz   , idvalue  =        ,idtype   =  float  
 t7 = id1
t8 = 4 * t7
t9 = &id0
t10 = t9 + t8
t11 = 2
t12 = 5
t13 = t11 + t12
*t10 = t13
t15 = 2
t16 = id1
t17 = t15 + t16
t18 = 4 * t17
t19 = &id0
t20 = t19 + t18
t21 = id2
*t20 = t21
t23 = id7
id6 = t23 
t24 = id5
id4 = t24 
t25 = id3
id3 = t25 
12         t0
t0         id3
id1         t1
4   t1   *   t2
id0      &   t3
t3   t2   +   t4
id2         t5
t5   *      t4
id1         t7
4   t7   *   t8
id0      &   t9
t9   t8   +   t10
2         t11
5         t12
t11   t12   +   t13
t13   *      t10
2         t15
id1         t16
t15   t16   +   t17
4   t17   *   t18
id0      &   t19
t19   t18   +   t20
id2         t21
t21   *      t20
id7         t23
t23         id6
id5         t24
t24         id4
id3         t25
t25         id3

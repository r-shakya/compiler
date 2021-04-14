  idname =    array   , idvalue  =        ,idtype   =  integer  
   idname =    var1   , idvalue  =        ,idtype   =  integer  
   idname =    var2   , idvalue  =        ,idtype   =  integer  
   idname =    n   , idvalue  =        ,idtype   =  integer  
 t0 = 12
id3 = t0 
t1 = id3
t2 = 12
t3 = t1 > t2
if not t3 goto l0
t4 = id2
t5 = 1
t6 = t4 + t5
id1 = t6 
l0:
12         t0
t0         id3
id3         t1
12         t2
t1   t2   >   t3
t3   $zero   beq   l0
id2         t4
1         t5
t4   t5   +   t6
t6         id1
      :   l0:

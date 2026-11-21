; Unwind@0069faba  0069faba
0069faba  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069fac0  AND EAX,0x800
0069fac5  JZ 0x0069fae0
0069facb  AND dword ptr [EBP + 0xfffffda8],0xfffff7ff
0069fad5  LEA ECX,[EBP + 0xfffffe30]
0069fadb  JMP 0x004a20f0
0069fae0  RET

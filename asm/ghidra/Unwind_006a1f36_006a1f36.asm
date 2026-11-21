; Unwind@006a1f36  006a1f36
006a1f36  MOV EAX,dword ptr [EBP + 0xfffff7ac]
006a1f3c  AND EAX,0x10000
006a1f41  JZ 0x006a1f5c
006a1f47  AND dword ptr [EBP + 0xfffff7ac],0xfffeffff
006a1f51  LEA ECX,[EBP + 0xfffff818]
006a1f57  JMP 0x00484470
006a1f5c  RET

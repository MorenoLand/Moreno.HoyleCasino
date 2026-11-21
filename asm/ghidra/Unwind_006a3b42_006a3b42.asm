; Unwind@006a3b42  006a3b42
006a3b42  MOV EAX,dword ptr [EBP + 0xfffffb50]
006a3b48  AND EAX,0x4000
006a3b4d  JZ 0x006a3b68
006a3b53  AND dword ptr [EBP + 0xfffffb50],0xffffbfff
006a3b5d  LEA ECX,[EBP + 0xfffffb80]
006a3b63  JMP 0x00484470
006a3b68  RET

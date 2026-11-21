; Unwind@006a3c05  006a3c05
006a3c05  MOV EAX,dword ptr [EBP + 0xfffffb50]
006a3c0b  AND EAX,0x80000
006a3c10  JZ 0x006a3c2b
006a3c16  AND dword ptr [EBP + 0xfffffb50],0xfff7ffff
006a3c20  LEA ECX,[EBP + 0xfffffb5c]
006a3c26  JMP 0x004a20f0
006a3c2b  RET

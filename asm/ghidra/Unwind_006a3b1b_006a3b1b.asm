; Unwind@006a3b1b  006a3b1b
006a3b1b  MOV EAX,dword ptr [EBP + 0xfffffb50]
006a3b21  AND EAX,0x2000
006a3b26  JZ 0x006a3b41
006a3b2c  AND dword ptr [EBP + 0xfffffb50],0xffffdfff
006a3b36  LEA ECX,[EBP + 0xfffffb8c]
006a3b3c  JMP 0x004a20f0
006a3b41  RET

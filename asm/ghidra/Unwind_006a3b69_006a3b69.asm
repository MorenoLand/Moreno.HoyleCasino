; Unwind@006a3b69  006a3b69
006a3b69  MOV EAX,dword ptr [EBP + 0xfffffb50]
006a3b6f  AND EAX,0x8000
006a3b74  JZ 0x006a3b8f
006a3b7a  AND dword ptr [EBP + 0xfffffb50],0xffff7fff
006a3b84  LEA ECX,[EBP + 0xfffffb7c]
006a3b8a  JMP 0x004a20f0
006a3b8f  RET

; Unwind@006a3bb7  006a3bb7
006a3bb7  MOV EAX,dword ptr [EBP + 0xfffffb50]
006a3bbd  AND EAX,0x20000
006a3bc2  JZ 0x006a3bdd
006a3bc8  AND dword ptr [EBP + 0xfffffb50],0xfffdffff
006a3bd2  LEA ECX,[EBP + 0xfffffb6c]
006a3bd8  JMP 0x004a20f0
006a3bdd  RET

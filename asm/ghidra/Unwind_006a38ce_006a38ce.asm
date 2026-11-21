; Unwind@006a38ce  006a38ce
006a38ce  MOV EAX,dword ptr [EBP + 0xfffffb54]
006a38d4  AND EAX,0x20000000
006a38d9  JZ 0x006a38f4
006a38df  AND dword ptr [EBP + 0xfffffb54],0xdfffffff
006a38e9  LEA ECX,[EBP + 0xfffffc0c]
006a38ef  JMP 0x004a20f0
006a38f4  RET

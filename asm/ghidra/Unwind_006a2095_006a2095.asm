; Unwind@006a2095  006a2095
006a2095  MOV EAX,dword ptr [EBP + 0xfffff7ac]
006a209b  AND EAX,0x2000000
006a20a0  JZ 0x006a20bb
006a20a6  AND dword ptr [EBP + 0xfffff7ac],0xfdffffff
006a20b0  LEA ECX,[EBP + 0xfffff7d4]
006a20b6  JMP 0x004a20f0
006a20bb  RET

; Unwind@006a20e3  006a20e3
006a20e3  MOV EAX,dword ptr [EBP + 0xfffff7ac]
006a20e9  AND EAX,0x8000000
006a20ee  JZ 0x006a2109
006a20f4  AND dword ptr [EBP + 0xfffff7ac],0xf7ffffff
006a20fe  LEA ECX,[EBP + 0xfffff7c4]
006a2104  JMP 0x004a20f0
006a2109  RET

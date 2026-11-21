; Unwind@006a1f0f  006a1f0f
006a1f0f  MOV EAX,dword ptr [EBP + 0xfffff7ac]
006a1f15  AND EAX,0x8000
006a1f1a  JZ 0x006a1f35
006a1f20  AND dword ptr [EBP + 0xfffff7ac],0xffff7fff
006a1f2a  LEA ECX,[EBP + 0xfffff824]
006a1f30  JMP 0x004a20f0
006a1f35  RET

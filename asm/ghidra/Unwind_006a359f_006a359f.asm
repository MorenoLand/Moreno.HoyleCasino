; Unwind@006a359f  006a359f
006a359f  MOV EAX,dword ptr [EBP + 0xfffffb54]
006a35a5  AND EAX,0x8000
006a35aa  JZ 0x006a35c5
006a35b0  AND dword ptr [EBP + 0xfffffb54],0xffff7fff
006a35ba  LEA ECX,[EBP + 0xfffffd14]
006a35c0  JMP 0x004a20f0
006a35c5  RET

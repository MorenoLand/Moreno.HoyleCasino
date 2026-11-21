; Unwind@006a1ff9  006a1ff9
006a1ff9  MOV EAX,dword ptr [EBP + 0xfffff7ac]
006a1fff  AND EAX,0x200000
006a2004  JZ 0x006a201f
006a200a  AND dword ptr [EBP + 0xfffff7ac],0xffdfffff
006a2014  LEA ECX,[EBP + 0xfffff7f4]
006a201a  JMP 0x004a20f0
006a201f  RET

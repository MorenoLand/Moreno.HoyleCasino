; Unwind@006a309a  006a309a
006a309a  MOV EAX,dword ptr [EBP + 0xfffffdac]
006a30a0  AND EAX,0x8
006a30a3  JZ 0x006a30bb
006a30a9  AND dword ptr [EBP + 0xfffffdac],0xfffffff7
006a30b0  LEA ECX,[EBP + 0xfffffdb4]
006a30b6  JMP 0x004a20f0
006a30bb  RET

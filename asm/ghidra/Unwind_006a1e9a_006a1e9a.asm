; Unwind@006a1e9a  006a1e9a
006a1e9a  MOV EAX,dword ptr [EBP + 0xfffff7ac]
006a1ea0  AND EAX,0x1000
006a1ea5  JZ 0x006a1ec0
006a1eab  AND dword ptr [EBP + 0xfffff7ac],0xffffefff
006a1eb5  LEA ECX,[EBP + 0xfffff838]
006a1ebb  JMP 0x00484470
006a1ec0  RET

; Unwind@006a37e4  006a37e4
006a37e4  MOV EAX,dword ptr [EBP + 0xfffffb54]
006a37ea  AND EAX,0x800000
006a37ef  JZ 0x006a380a
006a37f5  AND dword ptr [EBP + 0xfffffb54],0xff7fffff
006a37ff  LEA ECX,[EBP + 0xfffffc3c]
006a3805  JMP 0x004a20f0
006a380a  RET

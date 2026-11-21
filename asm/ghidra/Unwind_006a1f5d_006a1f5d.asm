; Unwind@006a1f5d  006a1f5d
006a1f5d  MOV EAX,dword ptr [EBP + 0xfffff7ac]
006a1f63  AND EAX,0x20000
006a1f68  JZ 0x006a1f83
006a1f6e  AND dword ptr [EBP + 0xfffff7ac],0xfffdffff
006a1f78  LEA ECX,[EBP + 0xfffff814]
006a1f7e  JMP 0x004a20f0
006a1f83  RET

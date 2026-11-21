; Unwind@006a1dd7  006a1dd7
006a1dd7  MOV EAX,dword ptr [EBP + 0xfffff7ac]
006a1ddd  AND EAX,0x80
006a1de2  JZ 0x006a1dfd
006a1de8  AND dword ptr [EBP + 0xfffff7ac],0xffffff7f
006a1df2  LEA ECX,[EBP + 0xfffff864]
006a1df8  JMP 0x004a20f0
006a1dfd  RET

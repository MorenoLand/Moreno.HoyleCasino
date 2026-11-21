; Unwind@006a049c  006a049c
006a049c  MOV EAX,dword ptr [EBP + -0x40]
006a049f  AND EAX,0x1
006a04a2  JZ 0x006a04b4
006a04a8  AND dword ptr [EBP + -0x40],0xfffffffe
006a04ac  LEA ECX,[EBP + -0x1d]
006a04af  JMP 0x00464210
006a04b4  RET

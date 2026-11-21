; Unwind@006a1592  006a1592
006a1592  MOV EAX,dword ptr [EBP + 0xfffffd78]
006a1598  AND EAX,0x1000
006a159d  JZ 0x006a15b8
006a15a3  AND dword ptr [EBP + 0xfffffd78],0xffffefff
006a15ad  LEA ECX,[EBP + 0xfffffd94]
006a15b3  JMP 0x00464210
006a15b8  RET

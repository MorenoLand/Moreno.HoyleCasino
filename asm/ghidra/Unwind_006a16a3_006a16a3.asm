; Unwind@006a16a3  006a16a3
006a16a3  MOV EAX,dword ptr [EBP + 0xfffffd78]
006a16a9  AND EAX,0x80000
006a16ae  JZ 0x006a16c9
006a16b4  AND dword ptr [EBP + 0xfffffd78],0xfff7ffff
006a16be  LEA ECX,[EBP + 0xfffffd86]
006a16c4  JMP 0x00464210
006a16c9  RET

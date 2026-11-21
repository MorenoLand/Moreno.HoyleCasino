; Unwind@006a16ca  006a16ca
006a16ca  MOV EAX,dword ptr [EBP + 0xfffffd78]
006a16d0  AND EAX,0x100000
006a16d5  JZ 0x006a16f0
006a16db  AND dword ptr [EBP + 0xfffffd78],0xffefffff
006a16e5  LEA ECX,[EBP + 0xfffffd84]
006a16eb  JMP 0x00464210
006a16f0  RET

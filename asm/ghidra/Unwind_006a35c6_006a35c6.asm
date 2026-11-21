; Unwind@006a35c6  006a35c6
006a35c6  MOV EAX,dword ptr [EBP + 0xfffffb54]
006a35cc  AND EAX,0x10000
006a35d1  JZ 0x006a35ec
006a35d7  AND dword ptr [EBP + 0xfffffb54],0xfffeffff
006a35e1  LEA ECX,[EBP + 0xfffffd1c]
006a35e7  JMP 0x00484470
006a35ec  RET

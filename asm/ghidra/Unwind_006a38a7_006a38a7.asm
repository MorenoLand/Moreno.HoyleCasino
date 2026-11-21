; Unwind@006a38a7  006a38a7
006a38a7  MOV EAX,dword ptr [EBP + 0xfffffb54]
006a38ad  AND EAX,0x10000000
006a38b2  JZ 0x006a38cd
006a38b8  AND dword ptr [EBP + 0xfffffb54],0xefffffff
006a38c2  LEA ECX,[EBP + 0xfffffc10]
006a38c8  JMP 0x00484470
006a38cd  RET

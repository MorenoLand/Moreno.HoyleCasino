; Unwind@006a3aa6  006a3aa6
006a3aa6  MOV EAX,dword ptr [EBP + 0xfffffb50]
006a3aac  AND EAX,0x400
006a3ab1  JZ 0x006a3acc
006a3ab7  AND dword ptr [EBP + 0xfffffb50],0xfffffbff
006a3ac1  LEA ECX,[EBP + 0xfffffba0]
006a3ac7  JMP 0x00484470
006a3acc  RET

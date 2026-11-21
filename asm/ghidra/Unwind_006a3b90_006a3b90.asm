; Unwind@006a3b90  006a3b90
006a3b90  MOV EAX,dword ptr [EBP + 0xfffffb50]
006a3b96  AND EAX,0x10000
006a3b9b  JZ 0x006a3bb6
006a3ba1  AND dword ptr [EBP + 0xfffffb50],0xfffeffff
006a3bab  LEA ECX,[EBP + 0xfffffb70]
006a3bb1  JMP 0x00484470
006a3bb6  RET

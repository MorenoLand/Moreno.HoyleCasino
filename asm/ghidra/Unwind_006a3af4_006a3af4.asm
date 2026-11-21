; Unwind@006a3af4  006a3af4
006a3af4  MOV EAX,dword ptr [EBP + 0xfffffb50]
006a3afa  AND EAX,0x1000
006a3aff  JZ 0x006a3b1a
006a3b05  AND dword ptr [EBP + 0xfffffb50],0xffffefff
006a3b0f  LEA ECX,[EBP + 0xfffffb90]
006a3b15  JMP 0x00484470
006a3b1a  RET

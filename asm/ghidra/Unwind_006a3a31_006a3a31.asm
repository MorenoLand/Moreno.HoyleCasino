; Unwind@006a3a31  006a3a31
006a3a31  MOV EAX,dword ptr [EBP + 0xfffffb50]
006a3a37  AND EAX,0x80
006a3a3c  JZ 0x006a3a57
006a3a42  AND dword ptr [EBP + 0xfffffb50],0xffffff7f
006a3a4c  LEA ECX,[EBP + 0xfffffbbc]
006a3a52  JMP 0x004a20f0
006a3a57  RET

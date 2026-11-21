; Unwind@006a18fa  006a18fa
006a18fa  MOV EAX,dword ptr [EBP + 0xfffffb10]
006a1900  AND EAX,0x80
006a1905  JZ 0x006a1920
006a190b  AND dword ptr [EBP + 0xfffffb10],0xffffff7f
006a1915  LEA ECX,[EBP + 0xfffffc70]
006a191b  JMP 0x004a20f0
006a1920  RET

; Unwind@006a180c  006a180c
006a180c  MOV EAX,dword ptr [EBP + 0xfffffb10]
006a1812  AND EAX,0x1
006a1815  JZ 0x006a182d
006a181b  AND dword ptr [EBP + 0xfffffb10],0xfffffffe
006a1822  LEA ECX,[EBP + 0xfffffc8e]
006a1828  JMP 0x004a20f0
006a182d  RET

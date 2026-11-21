; Unwind@0069fca4  0069fca4
0069fca4  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069fcaa  AND EAX,0x800000
0069fcaf  JZ 0x0069fcca
0069fcb5  AND dword ptr [EBP + 0xfffffda8],0xff7fffff
0069fcbf  LEA ECX,[EBP + 0xfffffdc0]
0069fcc5  JMP 0x004a20f0
0069fcca  RET

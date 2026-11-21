; Unwind@0069fb08  0069fb08
0069fb08  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069fb0e  AND EAX,0x2000
0069fb13  JZ 0x0069fb2e
0069fb19  AND dword ptr [EBP + 0xfffffda8],0xffffdfff
0069fb23  LEA ECX,[EBP + 0xfffffe20]
0069fb29  JMP 0x004a20f0
0069fb2e  RET

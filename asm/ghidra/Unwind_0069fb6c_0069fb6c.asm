; Unwind@0069fb6c  0069fb6c
0069fb6c  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069fb72  AND EAX,0x8000
0069fb77  JZ 0x0069fb92
0069fb7d  AND dword ptr [EBP + 0xfffffda8],0xffff7fff
0069fb87  LEA ECX,[EBP + 0xfffffe00]
0069fb8d  JMP 0x004a20f0
0069fb92  RET

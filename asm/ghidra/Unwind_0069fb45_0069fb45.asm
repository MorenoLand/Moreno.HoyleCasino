; Unwind@0069fb45  0069fb45
0069fb45  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069fb4b  AND EAX,0x4000
0069fb50  JZ 0x0069fb6b
0069fb56  AND dword ptr [EBP + 0xfffffda8],0xffffbfff
0069fb60  LEA ECX,[EBP + 0xfffffe04]
0069fb66  JMP 0x00484470
0069fb6b  RET

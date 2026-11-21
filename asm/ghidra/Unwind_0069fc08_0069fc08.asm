; Unwind@0069fc08  0069fc08
0069fc08  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069fc0e  AND EAX,0x80000
0069fc13  JZ 0x0069fc2e
0069fc19  AND dword ptr [EBP + 0xfffffda8],0xfff7ffff
0069fc23  LEA ECX,[EBP + 0xfffffde0]
0069fc29  JMP 0x004a20f0
0069fc2e  RET

; Unwind@0069fc2f  0069fc2f
0069fc2f  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069fc35  AND EAX,0x100000
0069fc3a  JZ 0x0069fc55
0069fc40  AND dword ptr [EBP + 0xfffffda8],0xffefffff
0069fc4a  LEA ECX,[EBP + 0xfffffdd4]
0069fc50  JMP 0x00484470
0069fc55  RET

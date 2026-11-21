; Unwind@0069fccb  0069fccb
0069fccb  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069fcd1  AND EAX,0x1000000
0069fcd6  JZ 0x0069fcf1
0069fcdc  AND dword ptr [EBP + 0xfffffda8],0xfeffffff
0069fce6  LEA ECX,[EBP + 0xfffffdb4]
0069fcec  JMP 0x00484470
0069fcf1  RET

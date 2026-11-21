; Unwind@0069fbba  0069fbba
0069fbba  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069fbc0  AND EAX,0x20000
0069fbc5  JZ 0x0069fbe0
0069fbcb  AND dword ptr [EBP + 0xfffffda8],0xfffdffff
0069fbd5  LEA ECX,[EBP + 0xfffffdf0]
0069fbdb  JMP 0x004a20f0
0069fbe0  RET

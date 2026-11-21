; Unwind@0069f91a  0069f91a
0069f91a  MOV EAX,dword ptr [EBP + 0xfffffda8]
0069f920  AND EAX,0x1
0069f923  JZ 0x0069f93b
0069f929  AND dword ptr [EBP + 0xfffffda8],0xfffffffe
0069f930  LEA ECX,[EBP + 0xfffffe94]
0069f936  JMP 0x00484470
0069f93b  RET

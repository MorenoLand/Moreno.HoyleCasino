; FUN_005cce50  005cce50
005cce50  PUSH EBP
005cce51  MOV EBP,ESP
005cce53  SUB ESP,0xc
005cce56  MOV dword ptr [EBP + -0xc],ECX
005cce59  MOV EAX,dword ptr [EBP + 0x8]
005cce5c  MOVZX ECX,byte ptr [EAX + 0x4]
005cce60  TEST ECX,ECX
005cce62  JZ 0x005cce66
005cce64  JMP 0x005cceb2
005cce66  LEA EDX,[EBP + -0x8]
005cce69  PUSH EDX
005cce6a  LEA EAX,[EBP + -0x4]
005cce6d  PUSH EAX
005cce6e  MOV ECX,dword ptr [EBP + 0x8]
005cce71  PUSH ECX
005cce72  MOV EDX,dword ptr [EBP + -0xc]
005cce75  MOV EAX,dword ptr [EDX]
005cce77  MOV ECX,dword ptr [EBP + -0xc]
005cce7a  MOV EDX,dword ptr [EAX + 0xec]
005cce80  CALL EDX
005cce82  MOVZX EAX,AL
005cce85  TEST EAX,EAX
005cce87  JZ 0x005cceaa
005cce89  MOV ECX,dword ptr [EBP + -0x8]
005cce8c  PUSH ECX
005cce8d  MOV EDX,dword ptr [EBP + -0x4]
005cce90  PUSH EDX
005cce91  MOV EAX,dword ptr [EBP + -0xc]
005cce94  MOV EDX,dword ptr [EAX]
005cce96  MOV ECX,dword ptr [EBP + -0xc]
005cce99  MOV EAX,dword ptr [EDX + 0xf0]
005cce9f  CALL EAX
005ccea1  MOV ECX,dword ptr [EBP + 0x8]
005ccea4  MOV byte ptr [ECX + 0x4],0x1
005ccea8  JMP 0x005cceb2
005cceaa  MOV ECX,dword ptr [EBP + -0xc]
005ccead  CALL 0x005cd330
005cceb2  MOV ESP,EBP
005cceb4  POP EBP
005cceb5  RET 0x4

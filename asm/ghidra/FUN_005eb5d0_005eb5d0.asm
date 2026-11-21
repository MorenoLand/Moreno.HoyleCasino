; FUN_005eb5d0  005eb5d0
005eb5d0  PUSH EBP
005eb5d1  MOV EBP,ESP
005eb5d3  PUSH ECX
005eb5d4  MOV dword ptr [EBP + -0x4],ECX
005eb5d7  MOV EAX,dword ptr [EBP + -0x4]
005eb5da  MOVZX ECX,byte ptr [EAX + 0x16c]
005eb5e1  MOVZX EDX,byte ptr [EBP + 0x8]
005eb5e5  CMP ECX,EDX
005eb5e7  JNZ 0x005eb5eb
005eb5e9  JMP 0x005eb607
005eb5eb  MOV EAX,dword ptr [EBP + -0x4]
005eb5ee  MOV CL,byte ptr [EBP + 0x8]
005eb5f1  MOV byte ptr [EAX + 0x16c],CL
005eb5f7  MOV EDX,dword ptr [EBP + -0x4]
005eb5fa  MOV EAX,dword ptr [EDX]
005eb5fc  MOV ECX,dword ptr [EBP + -0x4]
005eb5ff  MOV EDX,dword ptr [EAX + 0xac]
005eb605  CALL EDX
005eb607  MOV ESP,EBP
005eb609  POP EBP
005eb60a  RET 0x4

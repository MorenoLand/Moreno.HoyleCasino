; FUN_005eb4b0  005eb4b0
005eb4b0  PUSH EBP
005eb4b1  MOV EBP,ESP
005eb4b3  PUSH ECX
005eb4b4  MOV dword ptr [EBP + -0x4],ECX
005eb4b7  MOV EAX,dword ptr [EBP + -0x4]
005eb4ba  CMP dword ptr [EAX + 0x174],0x0
005eb4c1  JZ 0x005eb4e7
005eb4c3  MOV ECX,dword ptr [EBP + -0x4]
005eb4c6  MOV EDX,dword ptr [ECX + 0x15c]
005eb4cc  PUSH EDX
005eb4cd  MOV EAX,dword ptr [EBP + -0x4]
005eb4d0  MOV ECX,dword ptr [EAX + 0x164]
005eb4d6  PUSH ECX
005eb4d7  MOV EDX,dword ptr [EBP + -0x4]
005eb4da  MOV ECX,dword ptr [EDX + 0x174]
005eb4e0  CALL 0x006164d0
005eb4e5  JMP 0x005eb4e9
005eb4e7  XOR EAX,EAX
005eb4e9  MOV ESP,EBP
005eb4eb  POP EBP
005eb4ec  RET

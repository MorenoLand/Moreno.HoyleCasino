; FUN_005fb8b0  005fb8b0
005fb8b0  PUSH EBP
005fb8b1  MOV EBP,ESP
005fb8b3  SUB ESP,0x8
005fb8b6  MOV dword ptr [EBP + -0x8],ECX
005fb8b9  MOV EAX,dword ptr [EBP + 0x8]
005fb8bc  PUSH EAX
005fb8bd  MOV ECX,dword ptr [EBP + -0x8]
005fb8c0  CALL 0x005fb810
005fb8c5  MOV dword ptr [EBP + -0x4],EAX
005fb8c8  CMP dword ptr [EBP + -0x4],0x0
005fb8cc  JZ 0x005fb8e0
005fb8ce  MOV ECX,dword ptr [EBP + -0x4]
005fb8d1  MOV EDX,dword ptr [ECX]
005fb8d3  MOV ECX,dword ptr [EBP + -0x4]
005fb8d6  MOV EAX,dword ptr [EDX + 0xb8]
005fb8dc  CALL EAX
005fb8de  JMP 0x005fb8e2
005fb8e0  XOR EAX,EAX
005fb8e2  MOV ESP,EBP
005fb8e4  POP EBP
005fb8e5  RET 0x4

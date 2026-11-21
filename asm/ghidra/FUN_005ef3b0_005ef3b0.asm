; FUN_005ef3b0  005ef3b0
005ef3b0  PUSH EBP
005ef3b1  MOV EBP,ESP
005ef3b3  PUSH ECX
005ef3b4  MOV dword ptr [EBP + -0x4],ECX
005ef3b7  MOV EAX,dword ptr [EBP + -0x4]
005ef3ba  MOV ECX,dword ptr [EBP + 0x8]
005ef3bd  MOV dword ptr [EAX + 0x84],ECX
005ef3c3  MOV EDX,dword ptr [EBP + -0x4]
005ef3c6  MOV EAX,dword ptr [EDX]
005ef3c8  MOV ECX,dword ptr [EBP + -0x4]
005ef3cb  MOV EDX,dword ptr [EAX + 0xac]
005ef3d1  CALL EDX
005ef3d3  MOV ESP,EBP
005ef3d5  POP EBP
005ef3d6  RET 0x4

; FUN_005eb3d0  005eb3d0
005eb3d0  PUSH EBP
005eb3d1  MOV EBP,ESP
005eb3d3  PUSH ECX
005eb3d4  MOV dword ptr [EBP + -0x4],ECX
005eb3d7  MOV EAX,dword ptr [EBP + -0x4]
005eb3da  MOV EDX,dword ptr [EAX]
005eb3dc  MOV ECX,dword ptr [EBP + -0x4]
005eb3df  MOV EAX,dword ptr [EDX + 0x54]
005eb3e2  CALL EAX
005eb3e4  PUSH EAX
005eb3e5  MOV ECX,dword ptr [EBP + 0x8]
005eb3e8  PUSH ECX
005eb3e9  MOV EDX,dword ptr [EBP + -0x4]
005eb3ec  MOV EAX,dword ptr [EDX]
005eb3ee  MOV ECX,dword ptr [EBP + -0x4]
005eb3f1  MOV EDX,dword ptr [EAX + 0x44]
005eb3f4  CALL EDX
005eb3f6  MOV ESP,EBP
005eb3f8  POP EBP
005eb3f9  RET 0x4

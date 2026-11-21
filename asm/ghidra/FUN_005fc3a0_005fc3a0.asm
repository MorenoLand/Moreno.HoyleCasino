; FUN_005fc3a0  005fc3a0
005fc3a0  PUSH EBP
005fc3a1  MOV EBP,ESP
005fc3a3  PUSH ECX
005fc3a4  MOV dword ptr [EBP + -0x4],ECX
005fc3a7  MOV EAX,dword ptr [EBP + 0x8]
005fc3aa  PUSH EAX
005fc3ab  MOV ECX,dword ptr [EBP + -0x4]
005fc3ae  CALL 0x005fc2a0
005fc3b3  MOV ECX,dword ptr [EBP + -0x4]
005fc3b6  MOV EDX,dword ptr [ECX]
005fc3b8  MOV ECX,dword ptr [EBP + -0x4]
005fc3bb  MOV EAX,dword ptr [EDX + 0x18]
005fc3be  CALL EAX
005fc3c0  MOV ESP,EBP
005fc3c2  POP EBP
005fc3c3  RET 0x4

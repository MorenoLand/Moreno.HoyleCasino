; GetMinSize  005d5de0
005d5de0  PUSH EBP
005d5de1  MOV EBP,ESP
005d5de3  PUSH ECX
005d5de4  MOV dword ptr [EBP + -0x4],ECX
005d5de7  MOV EAX,dword ptr [EBP + -0x4]
005d5dea  MOV ECX,dword ptr [EAX + 0x4bc]
005d5df0  MOV EDX,dword ptr [EAX + 0x4c0]
005d5df6  MOV EAX,dword ptr [EBP + 0x8]
005d5df9  MOV dword ptr [EAX],ECX
005d5dfb  MOV dword ptr [EAX + 0x4],EDX
005d5dfe  MOV ESP,EBP
005d5e00  POP EBP
005d5e01  RET 0x4

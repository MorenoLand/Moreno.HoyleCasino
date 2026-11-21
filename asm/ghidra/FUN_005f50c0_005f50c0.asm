; FUN_005f50c0  005f50c0
005f50c0  PUSH EBP
005f50c1  MOV EBP,ESP
005f50c3  PUSH ECX
005f50c4  MOV dword ptr [EBP + -0x4],ECX
005f50c7  MOV EAX,dword ptr [EBP + -0x4]
005f50ca  MOV EDX,dword ptr [EAX]
005f50cc  MOV ECX,dword ptr [EBP + -0x4]
005f50cf  MOV EAX,dword ptr [EDX + 0x40]
005f50d2  CALL EAX
005f50d4  MOV ECX,dword ptr [EBP + 0xc]
005f50d7  PUSH ECX
005f50d8  MOV EDX,dword ptr [EBP + 0x8]
005f50db  PUSH EDX
005f50dc  MOV EAX,dword ptr [EBP + -0x4]
005f50df  MOV EDX,dword ptr [EAX]
005f50e1  MOV ECX,dword ptr [EBP + -0x4]
005f50e4  MOV EAX,dword ptr [EDX + 0x44]
005f50e7  CALL EAX
005f50e9  MOV ECX,dword ptr [EBP + 0x10]
005f50ec  PUSH ECX
005f50ed  MOV EDX,dword ptr [EBP + -0x4]
005f50f0  MOV EAX,dword ptr [EDX]
005f50f2  MOV ECX,dword ptr [EBP + -0x4]
005f50f5  MOV EDX,dword ptr [EAX + 0x6c]
005f50f8  CALL EDX
005f50fa  MOV EAX,dword ptr [EBP + 0x14]
005f50fd  PUSH EAX
005f50fe  MOV ECX,dword ptr [EBP + -0x4]
005f5101  CALL 0x005f53e0
005f5106  MOV ESP,EBP
005f5108  POP EBP
005f5109  RET 0x10

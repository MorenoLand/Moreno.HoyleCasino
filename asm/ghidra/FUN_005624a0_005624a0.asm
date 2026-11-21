; FUN_005624a0  005624a0
005624a0  PUSH EBP
005624a1  MOV EBP,ESP
005624a3  PUSH ECX
005624a4  MOV dword ptr [EBP + -0x4],ECX
005624a7  MOV EAX,dword ptr [EBP + 0xc]
005624aa  MOV ECX,dword ptr [EBP + -0x4]
005624ad  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
005624b1  MOV AX,word ptr [EBP + 0x8]
005624b5  MOV word ptr [EDX + 0x190],AX
005624bc  MOV ECX,dword ptr [EBP + 0xc]
005624bf  MOV EDX,dword ptr [EBP + -0x4]
005624c2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
005624c6  MOV ECX,dword ptr [EBP + 0xc]
005624c9  MOV EDX,dword ptr [EBP + -0x4]
005624cc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
005624d0  MOV EAX,dword ptr [EAX]
005624d2  MOV EDX,dword ptr [EAX + 0x74]
005624d5  CALL EDX
005624d7  MOV ESP,EBP
005624d9  POP EBP
005624da  RET 0x8

; FUN_005f83d0  005f83d0
005f83d0  PUSH EBP
005f83d1  MOV EBP,ESP
005f83d3  PUSH ECX
005f83d4  MOV dword ptr [EBP + -0x4],ECX
005f83d7  MOV EAX,dword ptr [EBP + -0x4]
005f83da  MOV ECX,dword ptr [EAX + 0x114]
005f83e0  CMP ECX,dword ptr [EBP + 0x8]
005f83e3  JNZ 0x005f83f3
005f83e5  MOV EDX,dword ptr [EBP + -0x4]
005f83e8  MOV EAX,dword ptr [EDX + 0x118]
005f83ee  CMP EAX,dword ptr [EBP + 0xc]
005f83f1  JZ 0x005f8413
005f83f3  MOV ECX,dword ptr [EBP + -0x4]
005f83f6  MOV EDX,dword ptr [EBP + 0x8]
005f83f9  MOV dword ptr [ECX + 0x114],EDX
005f83ff  MOV EAX,dword ptr [EBP + -0x4]
005f8402  MOV ECX,dword ptr [EBP + 0xc]
005f8405  MOV dword ptr [EAX + 0x118],ECX
005f840b  MOV ECX,dword ptr [EBP + -0x4]
005f840e  CALL 0x005f95e0
005f8413  MOV ESP,EBP
005f8415  POP EBP
005f8416  RET 0x8

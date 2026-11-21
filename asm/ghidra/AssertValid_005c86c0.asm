; AssertValid  005c86c0
005c86c0  PUSH EBP
005c86c1  MOV EBP,ESP
005c86c3  PUSH ECX
005c86c4  MOV dword ptr [EBP + -0x4],ECX
005c86c7  MOV ECX,dword ptr [EBP + -0x4]
005c86ca  CALL 0x005d8020
005c86cf  MOV EAX,dword ptr [EBP + -0x4]
005c86d2  CMP dword ptr [EAX + 0x80],0x0
005c86d9  JZ 0x005c86f4
005c86db  MOV ECX,dword ptr [EBP + -0x4]
005c86de  MOV EDX,dword ptr [ECX + 0x80]
005c86e4  MOV EAX,dword ptr [EBP + -0x4]
005c86e7  MOV ECX,dword ptr [EAX + 0x80]
005c86ed  MOV EDX,dword ptr [EDX]
005c86ef  MOV EAX,dword ptr [EDX + 0x8]
005c86f2  CALL EAX
005c86f4  MOV ESP,EBP
005c86f6  POP EBP
005c86f7  RET

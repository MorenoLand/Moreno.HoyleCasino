; FUN_005db290  005db290
005db290  PUSH EBP
005db291  MOV EBP,ESP
005db293  SUB ESP,0xc
005db296  MOV dword ptr [EBP + -0xc],ECX
005db299  MOV dword ptr [EBP + -0x8],0x0
005db2a0  MOV dword ptr [EBP + -0x4],0x0
005db2a7  MOV EAX,dword ptr [EBP + 0x8]
005db2aa  MOV ECX,dword ptr [EBP + -0x8]
005db2ad  MOV dword ptr [EAX],ECX
005db2af  MOV EDX,dword ptr [EBP + -0x4]
005db2b2  MOV dword ptr [EAX + 0x4],EDX
005db2b5  MOV EAX,dword ptr [EBP + 0x8]
005db2b8  MOV ESP,EBP
005db2ba  POP EBP
005db2bb  RET 0x4

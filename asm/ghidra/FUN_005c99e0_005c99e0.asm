; FUN_005c99e0  005c99e0
005c99e0  PUSH EBP
005c99e1  MOV EBP,ESP
005c99e3  SUB ESP,0x8
005c99e6  MOV dword ptr [EBP + -0x8],ECX
005c99e9  MOV EAX,dword ptr [EBP + -0x8]
005c99ec  MOV ECX,dword ptr [EAX + 0xe0]
005c99f2  ADD ECX,dword ptr [EBP + 0x8]
005c99f5  MOV EDX,dword ptr [EBP + -0x8]
005c99f8  MOV dword ptr [EDX + 0xe0],ECX
005c99fe  MOV EAX,dword ptr [EBP + -0x8]
005c9a01  MOV ECX,dword ptr [EAX + 0x4]
005c9a04  MOV dword ptr [EBP + -0x4],ECX
005c9a07  MOV EDX,dword ptr [EBP + -0x4]
005c9a0a  ADD EDX,dword ptr [EBP + 0x8]
005c9a0d  PUSH EDX
005c9a0e  MOV ECX,dword ptr [EBP + -0x8]
005c9a11  CALL 0x005d0a20
005c9a16  MOV ESP,EBP
005c9a18  POP EBP
005c9a19  RET 0x4

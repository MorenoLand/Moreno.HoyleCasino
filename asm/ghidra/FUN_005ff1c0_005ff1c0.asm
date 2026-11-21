; FUN_005ff1c0  005ff1c0
005ff1c0  PUSH EBP
005ff1c1  MOV EBP,ESP
005ff1c3  SUB ESP,0x8
005ff1c6  MOV dword ptr [EBP + -0x4],ECX
005ff1c9  MOV ECX,dword ptr [EBP + -0x4]
005ff1cc  CALL 0x005fc360
005ff1d1  MOV dword ptr [EBP + -0x8],EAX
005ff1d4  CMP dword ptr [EBP + -0x8],0x0
005ff1d8  JZ 0x005ff1e2
005ff1da  CMP dword ptr [EBP + -0x8],0x1
005ff1de  JZ 0x005ff1f5
005ff1e0  JMP 0x005ff200
005ff1e2  PUSH 0x1e
005ff1e4  PUSH 0x1
005ff1e6  MOV EAX,dword ptr [EBP + -0x4]
005ff1e9  MOV EDX,dword ptr [EAX]
005ff1eb  MOV ECX,dword ptr [EBP + -0x4]
005ff1ee  MOV EAX,dword ptr [EDX + 0x8]
005ff1f1  CALL EAX
005ff1f3  JMP 0x005ff200
005ff1f5  MOV ECX,dword ptr [EBP + -0x4]
005ff1f8  MOV ECX,dword ptr [ECX + 0x20]
005ff1fb  CALL 0x005fd330
005ff200  MOV ESP,EBP
005ff202  POP EBP
005ff203  RET

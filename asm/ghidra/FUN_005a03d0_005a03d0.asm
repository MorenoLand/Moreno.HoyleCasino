; FUN_005a03d0  005a03d0
005a03d0  PUSH EBP
005a03d1  MOV EBP,ESP
005a03d3  SUB ESP,0x14
005a03d6  MOV dword ptr [EBP + -0x14],ECX
005a03d9  MOV dword ptr [EBP + -0x10],0x10b
005a03e0  MOV dword ptr [EBP + -0xc],0x10b
005a03e7  MOV dword ptr [EBP + -0x8],0x51
005a03ee  MOV dword ptr [EBP + -0x4],0x51
005a03f5  MOV EAX,dword ptr [EBP + 0x8]
005a03f8  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x10]
005a03fc  MOV ESP,EBP
005a03fe  POP EBP
005a03ff  RET 0x4

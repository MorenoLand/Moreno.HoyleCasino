; FUN_005a0390  005a0390
005a0390  PUSH EBP
005a0391  MOV EBP,ESP
005a0393  SUB ESP,0x14
005a0396  MOV dword ptr [EBP + -0x14],ECX
005a0399  MOV dword ptr [EBP + -0x10],0x1b8
005a03a0  MOV dword ptr [EBP + -0xc],0x62
005a03a7  MOV dword ptr [EBP + -0x8],0x20f
005a03ae  MOV dword ptr [EBP + -0x4],0xc
005a03b5  MOV EAX,dword ptr [EBP + 0x8]
005a03b8  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x10]
005a03bc  MOV ESP,EBP
005a03be  POP EBP
005a03bf  RET 0x4

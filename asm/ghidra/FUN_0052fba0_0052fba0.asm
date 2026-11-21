; FUN_0052fba0  0052fba0
0052fba0  PUSH EBP
0052fba1  MOV EBP,ESP
0052fba3  SUB ESP,0x24
0052fba6  MOV dword ptr [EBP + -0x1c],ECX
0052fba9  MOV dword ptr [EBP + -0x4],0x0
0052fbb0  MOV ECX,dword ptr [EBP + -0x1c]
0052fbb3  CALL 0x005fc360
0052fbb8  MOV dword ptr [EBP + -0x20],EAX
0052fbbb  CMP dword ptr [EBP + -0x20],0xa
0052fbbf  JA 0x0053019c
0052fbc5  MOV EAX,dword ptr [EBP + -0x20]
0052fbc8  JMP dword ptr [EAX*0x4 + 0x5301a0]
0053019c  MOV ESP,EBP
0053019e  POP EBP
0053019f  RET

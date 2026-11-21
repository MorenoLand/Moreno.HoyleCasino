; FUN_0058afb0  0058afb0
0058afb0  PUSH EBP
0058afb1  MOV EBP,ESP
0058afb3  SUB ESP,0x8
0058afb6  MOV dword ptr [EBP + -0x4],ECX
0058afb9  MOV ECX,dword ptr [EBP + -0x4]
0058afbc  CALL 0x005f5400
0058afc1  MOV dword ptr [EBP + -0x8],EAX
0058afc4  CMP dword ptr [EBP + -0x8],0x4
0058afc8  JA 0x0058b05d
0058afce  MOV EAX,dword ptr [EBP + -0x8]
0058afd1  JMP dword ptr [EAX*0x4 + 0x58b064]
0058b05d  MOV ESP,EBP
0058b05f  POP EBP
0058b060  RET

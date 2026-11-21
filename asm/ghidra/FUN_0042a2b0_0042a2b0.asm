; FUN_0042a2b0  0042a2b0
0042a2b0  PUSH EBP
0042a2b1  MOV EBP,ESP
0042a2b3  SUB ESP,0x8
0042a2b6  MOV dword ptr [EBP + -0x8],ECX
0042a2b9  MOV dword ptr [EBP + -0x4],0x0
0042a2c0  JMP 0x0042a2cb
0042a2c2  MOV EAX,dword ptr [EBP + -0x4]
0042a2c5  ADD EAX,0x1
0042a2c8  MOV dword ptr [EBP + -0x4],EAX
0042a2cb  CMP dword ptr [EBP + -0x4],0x4c
0042a2cf  JGE 0x0042a2fc
0042a2d1  MOV ECX,dword ptr [EBP + -0x4]
0042a2d4  MOV EDX,dword ptr [EBP + -0x8]
0042a2d7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x14]
0042a2db  MOV ECX,dword ptr [EAX + 0x178]
0042a2e1  CALL 0x005f5400
0042a2e6  CMP EAX,dword ptr [EBP + 0x8]
0042a2e9  JNZ 0x0042a2fa
0042a2eb  MOV ECX,dword ptr [EBP + -0x4]
0042a2ee  MOV EDX,dword ptr [EBP + -0x8]
0042a2f1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x14]
0042a2f5  CALL 0x0042c410
0042a2fa  JMP 0x0042a2c2
0042a2fc  MOV ESP,EBP
0042a2fe  POP EBP
0042a2ff  RET 0x4

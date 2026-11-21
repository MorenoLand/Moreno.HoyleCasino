; FUN_005d6550  005d6550
005d6550  PUSH EBP
005d6551  MOV EBP,ESP
005d6553  SUB ESP,0x14
005d6556  MOV dword ptr [EBP + -0x10],ECX
005d6559  MOV dword ptr [EBP + -0x4],0x0
005d6560  JMP 0x005d656b
005d6562  MOV EAX,dword ptr [EBP + -0x4]
005d6565  ADD EAX,0x1
005d6568  MOV dword ptr [EBP + -0x4],EAX
005d656b  CMP dword ptr [EBP + -0x4],0x1e
005d656f  JGE 0x005d65ee
005d6571  MOV ECX,dword ptr [EBP + -0x4]
005d6574  MOV EDX,dword ptr [EBP + -0x10]
005d6577  CMP dword ptr [EDX + ECX*0x4 + 0x3ac],0x0
005d657f  JZ 0x005d65e9
005d6581  MOV EAX,dword ptr [EBP + -0x4]
005d6584  MOV ECX,dword ptr [EBP + -0x10]
005d6587  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3ac]
005d658e  MOV EAX,dword ptr [EBP + -0x4]
005d6591  MOV ECX,dword ptr [EBP + -0x10]
005d6594  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x3ac]
005d659b  MOV EDX,dword ptr [EDX]
005d659d  MOV EAX,dword ptr [EDX + 0x70]
005d65a0  CALL EAX
005d65a2  MOV ECX,dword ptr [EBP + -0x4]
005d65a5  MOV EDX,dword ptr [EBP + -0x10]
005d65a8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3ac]
005d65af  MOV dword ptr [EBP + -0xc],EAX
005d65b2  MOV ECX,dword ptr [EBP + -0xc]
005d65b5  MOV dword ptr [EBP + -0x8],ECX
005d65b8  CMP dword ptr [EBP + -0x8],0x0
005d65bc  JZ 0x005d65d1
005d65be  PUSH 0x1
005d65c0  MOV EDX,dword ptr [EBP + -0x8]
005d65c3  MOV EAX,dword ptr [EDX]
005d65c5  MOV ECX,dword ptr [EBP + -0x8]
005d65c8  MOV EDX,dword ptr [EAX]
005d65ca  CALL EDX
005d65cc  MOV dword ptr [EBP + -0x14],EAX
005d65cf  JMP 0x005d65d8
005d65d1  MOV dword ptr [EBP + -0x14],0x0
005d65d8  MOV EAX,dword ptr [EBP + -0x4]
005d65db  MOV ECX,dword ptr [EBP + -0x10]
005d65de  MOV dword ptr [ECX + EAX*0x4 + 0x3ac],0x0
005d65e9  JMP 0x005d6562
005d65ee  MOV ESP,EBP
005d65f0  POP EBP
005d65f1  RET

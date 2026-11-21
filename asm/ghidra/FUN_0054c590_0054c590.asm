; FUN_0054c590  0054c590
0054c590  PUSH EBP
0054c591  MOV EBP,ESP
0054c593  SUB ESP,0x18
0054c596  MOV dword ptr [EBP + -0x18],ECX
0054c599  MOV AX,word ptr [EBP + 0x8]
0054c59d  PUSH EAX
0054c59e  CALL 0x00641280
0054c5a3  ADD ESP,0x4
0054c5a6  MOV dword ptr [EBP + -0x4],EAX
0054c5a9  CMP dword ptr [EBP + -0x4],0xf
0054c5ad  JNZ 0x0054c5b6
0054c5af  MOV EAX,0x14
0054c5b4  JMP 0x0054c619
0054c5b6  CMP dword ptr [EBP + -0x4],0x2
0054c5ba  JNZ 0x0054c616
0054c5bc  MOV ECX,dword ptr [0x007947e0]
0054c5c2  MOV EDX,dword ptr [ECX + 0x4f14]
0054c5c8  MOV dword ptr [EBP + -0x8],EDX
0054c5cb  CMP dword ptr [EBP + -0x8],0x5
0054c5cf  JZ 0x0054c60f
0054c5d1  MOV EAX,[0x007947e0]
0054c5d6  MOV ECX,dword ptr [EAX + 0x4f14]
0054c5dc  MOV dword ptr [EBP + -0xc],ECX
0054c5df  CMP dword ptr [EBP + -0xc],0x6
0054c5e3  JZ 0x0054c60f
0054c5e5  MOV EDX,dword ptr [0x007947e0]
0054c5eb  MOV EAX,dword ptr [EDX + 0x4f14]
0054c5f1  MOV dword ptr [EBP + -0x10],EAX
0054c5f4  CMP dword ptr [EBP + -0x10],0x7
0054c5f8  JZ 0x0054c60f
0054c5fa  MOV ECX,dword ptr [0x007947e0]
0054c600  MOV EDX,dword ptr [ECX + 0x4f14]
0054c606  MOV dword ptr [EBP + -0x14],EDX
0054c609  CMP dword ptr [EBP + -0x14],0xa
0054c60d  JNZ 0x0054c616
0054c60f  MOV dword ptr [EBP + -0x4],0x14
0054c616  MOV EAX,dword ptr [EBP + -0x4]
0054c619  MOV ESP,EBP
0054c61b  POP EBP
0054c61c  RET 0x4

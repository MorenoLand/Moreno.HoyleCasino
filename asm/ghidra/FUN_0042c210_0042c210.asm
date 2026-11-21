; FUN_0042c210  0042c210
0042c210  PUSH EBP
0042c211  MOV EBP,ESP
0042c213  SUB ESP,0x14
0042c216  MOV dword ptr [EBP + -0x14],ECX
0042c219  MOV dword ptr [EBP + -0x10],0x3
0042c220  MOV dword ptr [EBP + -0xc],0x2
0042c227  MOV dword ptr [EBP + -0x8],0x1
0042c22e  MOV dword ptr [EBP + -0x4],0x0
0042c235  MOV EAX,dword ptr [EBP + -0x14]
0042c238  CMP dword ptr [EAX + 0xb0c],0xe
0042c23f  JLE 0x0042c262
0042c241  MOV ECX,dword ptr [EBP + -0x14]
0042c244  CMP dword ptr [ECX + 0xb0c],0x16
0042c24b  JGE 0x0042c262
0042c24d  MOV EDX,dword ptr [EBP + -0x14]
0042c250  MOV EAX,dword ptr [EDX + 0xb0c]
0042c256  MOV EAX,dword ptr [EAX*0x8 + 0x710ec4]
0042c25d  SUB EAX,0x2d
0042c260  JMP 0x0042c2ac
0042c262  MOV ECX,dword ptr [EBP + -0x14]
0042c265  CMP dword ptr [ECX + 0xb0c],0x18
0042c26c  JLE 0x0042c28f
0042c26e  MOV EDX,dword ptr [EBP + -0x14]
0042c271  CMP dword ptr [EDX + 0xb0c],0x20
0042c278  JGE 0x0042c28f
0042c27a  MOV EAX,dword ptr [EBP + -0x14]
0042c27d  MOV ECX,dword ptr [EAX + 0xb0c]
0042c283  MOV EAX,dword ptr [ECX*0x8 + 0x710eac]
0042c28a  SUB EAX,0x2d
0042c28d  JMP 0x0042c2ac
0042c28f  MOV EDX,dword ptr [EBP + -0x14]
0042c292  MOV EAX,dword ptr [EDX + 0xb0c]
0042c298  SHL EAX,0x5
0042c29b  MOV ECX,dword ptr [EBP + 0x8]
0042c29e  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x10]
0042c2a2  MOV EAX,dword ptr [EAX + EDX*0x8 + 0x7105bc]
0042c2a9  SUB EAX,0x2d
0042c2ac  MOV ESP,EBP
0042c2ae  POP EBP
0042c2af  RET 0x8

; FUN_0042c170  0042c170
0042c170  PUSH EBP
0042c171  MOV EBP,ESP
0042c173  SUB ESP,0x14
0042c176  MOV dword ptr [EBP + -0x14],ECX
0042c179  MOV dword ptr [EBP + -0x10],0x3
0042c180  MOV dword ptr [EBP + -0xc],0x2
0042c187  MOV dword ptr [EBP + -0x8],0x1
0042c18e  MOV dword ptr [EBP + -0x4],0x0
0042c195  MOV EAX,dword ptr [EBP + -0x14]
0042c198  CMP dword ptr [EAX + 0xb0c],0xe
0042c19f  JLE 0x0042c1bf
0042c1a1  MOV ECX,dword ptr [EBP + -0x14]
0042c1a4  CMP dword ptr [ECX + 0xb0c],0x16
0042c1ab  JGE 0x0042c1bf
0042c1ad  MOV EDX,dword ptr [EBP + -0x14]
0042c1b0  MOV EAX,dword ptr [EDX + 0xb0c]
0042c1b6  MOV EAX,dword ptr [EAX*0x8 + 0x710ec0]
0042c1bd  JMP 0x0042c203
0042c1bf  MOV ECX,dword ptr [EBP + -0x14]
0042c1c2  CMP dword ptr [ECX + 0xb0c],0x18
0042c1c9  JLE 0x0042c1e9
0042c1cb  MOV EDX,dword ptr [EBP + -0x14]
0042c1ce  CMP dword ptr [EDX + 0xb0c],0x20
0042c1d5  JGE 0x0042c1e9
0042c1d7  MOV EAX,dword ptr [EBP + -0x14]
0042c1da  MOV ECX,dword ptr [EAX + 0xb0c]
0042c1e0  MOV EAX,dword ptr [ECX*0x8 + 0x710ea8]
0042c1e7  JMP 0x0042c203
0042c1e9  MOV EDX,dword ptr [EBP + -0x14]
0042c1ec  MOV EAX,dword ptr [EDX + 0xb0c]
0042c1f2  SHL EAX,0x5
0042c1f5  MOV ECX,dword ptr [EBP + 0x8]
0042c1f8  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x10]
0042c1fc  MOV EAX,dword ptr [EAX + EDX*0x8 + 0x7105b8]
0042c203  MOV ESP,EBP
0042c205  POP EBP
0042c206  RET 0x8

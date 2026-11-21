; FUN_00557fb0  00557fb0
00557fb0  PUSH EBP
00557fb1  MOV EBP,ESP
00557fb3  SUB ESP,0x10
00557fb6  PUSH ESI
00557fb7  MOV dword ptr [EBP + -0x10],ECX
00557fba  MOV dword ptr [EBP + -0x4],0x4
00557fc1  MOV dword ptr [EBP + -0x8],0x0
00557fc8  JMP 0x00557fd3
00557fca  MOV EAX,dword ptr [EBP + -0x8]
00557fcd  ADD EAX,0x1
00557fd0  MOV dword ptr [EBP + -0x8],EAX
00557fd3  CMP dword ptr [EBP + -0x8],0x5
00557fd7  JGE 0x0055802e
00557fd9  MOV ECX,dword ptr [EBP + -0x8]
00557fdc  MOV EDX,dword ptr [EBP + -0x10]
00557fdf  MOVZX EAX,word ptr [EDX + ECX*0x2 + 0x22]
00557fe4  MOVZX ECX,word ptr [EBP + 0x8]
00557fe8  CMP EAX,ECX
00557fea  JNZ 0x0055802c
00557fec  MOV EDX,dword ptr [EBP + -0x8]
00557fef  MOV dword ptr [EBP + -0xc],EDX
00557ff2  JMP 0x00557ffd
00557ff4  MOV EAX,dword ptr [EBP + -0xc]
00557ff7  ADD EAX,0x1
00557ffa  MOV dword ptr [EBP + -0xc],EAX
00557ffd  MOV ECX,dword ptr [EBP + -0xc]
00558000  CMP ECX,dword ptr [EBP + -0x4]
00558003  JGE 0x0055801d
00558005  MOV EDX,dword ptr [EBP + -0xc]
00558008  MOV EAX,dword ptr [EBP + -0x10]
0055800b  MOV ECX,dword ptr [EBP + -0xc]
0055800e  MOV ESI,dword ptr [EBP + -0x10]
00558011  MOV CX,word ptr [ESI + ECX*0x2 + 0x24]
00558016  MOV word ptr [EAX + EDX*0x2 + 0x22],CX
0055801b  JMP 0x00557ff4
0055801d  MOV EDX,dword ptr [EBP + -0x4]
00558020  MOV EAX,dword ptr [EBP + -0x10]
00558023  MOV word ptr [EAX + EDX*0x2 + 0x22],0x0
0055802a  JMP 0x0055802e
0055802c  JMP 0x00557fca
0055802e  POP ESI
0055802f  MOV ESP,EBP
00558031  POP EBP
00558032  RET 0x4

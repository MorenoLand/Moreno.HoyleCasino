; FUN_0060b3c0  0060b3c0
0060b3c0  PUSH EBP
0060b3c1  MOV EBP,ESP
0060b3c3  SUB ESP,0xc
0060b3c6  MOV dword ptr [EBP + -0xc],ECX
0060b3c9  MOV dword ptr [EBP + -0x8],0x0
0060b3d0  JMP 0x0060b3db
0060b3d2  MOV EAX,dword ptr [EBP + -0x8]
0060b3d5  ADD EAX,0x1
0060b3d8  MOV dword ptr [EBP + -0x8],EAX
0060b3db  MOV ECX,dword ptr [EBP + -0x8]
0060b3de  CMP ECX,dword ptr [EBP + 0x10]
0060b3e1  JGE 0x0060b430
0060b3e3  MOV EDX,dword ptr [EBP + -0x8]
0060b3e6  MOV EAX,dword ptr [EBP + 0xc]
0060b3e9  MOVSX ECX,word ptr [EAX + EDX*0x2]
0060b3ed  MOV dword ptr [EBP + -0x4],ECX
0060b3f0  MOV EDX,dword ptr [EBP + -0x8]
0060b3f3  MOV EAX,dword ptr [EBP + 0x8]
0060b3f6  MOVSX ECX,word ptr [EAX + EDX*0x2]
0060b3fa  ADD ECX,dword ptr [EBP + -0x4]
0060b3fd  MOV dword ptr [EBP + -0x4],ECX
0060b400  CMP dword ptr [EBP + -0x4],0x7fff
0060b407  JLE 0x0060b410
0060b409  MOV dword ptr [EBP + -0x4],0x7fff
0060b410  CMP dword ptr [EBP + -0x4],0xffff8000
0060b417  JGE 0x0060b420
0060b419  MOV dword ptr [EBP + -0x4],0xffff8000
0060b420  MOV EDX,dword ptr [EBP + -0x8]
0060b423  MOV EAX,dword ptr [EBP + 0xc]
0060b426  MOV CX,word ptr [EBP + -0x4]
0060b42a  MOV word ptr [EAX + EDX*0x2],CX
0060b42e  JMP 0x0060b3d2
0060b430  MOV ESP,EBP
0060b432  POP EBP
0060b433  RET 0xc

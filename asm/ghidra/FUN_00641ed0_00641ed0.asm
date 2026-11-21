; FUN_00641ed0  00641ed0
00641ed0  PUSH EBP
00641ed1  MOV EBP,ESP
00641ed3  SUB ESP,0xc
00641ed6  PUSH ESI
00641ed7  MOV dword ptr [EBP + -0x4],0x0
00641ede  JMP 0x00641ee9
00641ee0  MOV EAX,dword ptr [EBP + -0x4]
00641ee3  ADD EAX,0x1
00641ee6  MOV dword ptr [EBP + -0x4],EAX
00641ee9  MOV ECX,dword ptr [EBP + -0x4]
00641eec  CMP ECX,dword ptr [EBP + 0xc]
00641eef  JGE 0x00641f6d
00641ef1  MOV dword ptr [EBP + -0xc],0x0
00641ef8  JMP 0x00641f03
00641efa  MOV EDX,dword ptr [EBP + -0xc]
00641efd  ADD EDX,0x1
00641f00  MOV dword ptr [EBP + -0xc],EDX
00641f03  MOV EAX,dword ptr [EBP + 0xc]
00641f06  SUB EAX,0x1
00641f09  CMP dword ptr [EBP + -0xc],EAX
00641f0c  JGE 0x00641f68
00641f0e  MOV ECX,dword ptr [EBP + -0xc]
00641f11  MOV EDX,dword ptr [EBP + 0x8]
00641f14  MOV AX,word ptr [EDX + ECX*0x2 + 0x2]
00641f19  PUSH EAX
00641f1a  MOV ECX,dword ptr [EBP + -0xc]
00641f1d  MOV EDX,dword ptr [EBP + 0x8]
00641f20  MOV AX,word ptr [EDX + ECX*0x2]
00641f24  PUSH EAX
00641f25  CALL 0x00642c20
00641f2a  ADD ESP,0x8
00641f2d  MOVZX ECX,AL
00641f30  TEST ECX,ECX
00641f32  JNZ 0x00641f66
00641f34  MOV EDX,dword ptr [EBP + -0xc]
00641f37  MOV EAX,dword ptr [EBP + 0x8]
00641f3a  MOV CX,word ptr [EAX + EDX*0x2]
00641f3e  MOV word ptr [EBP + -0x8],CX
00641f42  MOV EDX,dword ptr [EBP + -0xc]
00641f45  MOV EAX,dword ptr [EBP + 0x8]
00641f48  MOV ECX,dword ptr [EBP + -0xc]
00641f4b  MOV ESI,dword ptr [EBP + 0x8]
00641f4e  MOV CX,word ptr [ESI + ECX*0x2 + 0x2]
00641f53  MOV word ptr [EAX + EDX*0x2],CX
00641f57  MOV EDX,dword ptr [EBP + -0xc]
00641f5a  MOV EAX,dword ptr [EBP + 0x8]
00641f5d  MOV CX,word ptr [EBP + -0x8]
00641f61  MOV word ptr [EAX + EDX*0x2 + 0x2],CX
00641f66  JMP 0x00641efa
00641f68  JMP 0x00641ee0
00641f6d  POP ESI
00641f6e  MOV ESP,EBP
00641f70  POP EBP
00641f71  RET

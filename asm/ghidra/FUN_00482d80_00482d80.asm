; FUN_00482d80  00482d80
00482d80  PUSH EBP
00482d81  MOV EBP,ESP
00482d83  SUB ESP,0x10
00482d86  PUSH ESI
00482d87  MOV dword ptr [EBP + -0x10],ECX
00482d8a  MOV dword ptr [EBP + -0x4],0x0
00482d91  JMP 0x00482d9c
00482d93  MOV EAX,dword ptr [EBP + -0x4]
00482d96  ADD EAX,0x1
00482d99  MOV dword ptr [EBP + -0x4],EAX
00482d9c  MOV ECX,dword ptr [EBP + -0x4]
00482d9f  CMP ECX,dword ptr [EBP + 0xc]
00482da2  JGE 0x00482e06
00482da4  MOV dword ptr [EBP + -0xc],0x0
00482dab  JMP 0x00482db6
00482dad  MOV EDX,dword ptr [EBP + -0xc]
00482db0  ADD EDX,0x1
00482db3  MOV dword ptr [EBP + -0xc],EDX
00482db6  MOV EAX,dword ptr [EBP + 0xc]
00482db9  SUB EAX,0x1
00482dbc  CMP dword ptr [EBP + -0xc],EAX
00482dbf  JGE 0x00482e04
00482dc1  MOV ECX,dword ptr [EBP + -0xc]
00482dc4  MOV EDX,dword ptr [EBP + 0x8]
00482dc7  MOV EAX,dword ptr [EBP + -0xc]
00482dca  MOV ESI,dword ptr [EBP + 0x8]
00482dcd  MOV ECX,dword ptr [EDX + ECX*0x4]
00482dd0  CMP ECX,dword ptr [ESI + EAX*0x4 + 0x4]
00482dd4  JGE 0x00482e02
00482dd6  MOV EDX,dword ptr [EBP + -0xc]
00482dd9  MOV EAX,dword ptr [EBP + 0x8]
00482ddc  MOV ECX,dword ptr [EAX + EDX*0x4]
00482ddf  MOV dword ptr [EBP + -0x8],ECX
00482de2  MOV EDX,dword ptr [EBP + -0xc]
00482de5  MOV EAX,dword ptr [EBP + 0x8]
00482de8  MOV ECX,dword ptr [EBP + -0xc]
00482deb  MOV ESI,dword ptr [EBP + 0x8]
00482dee  MOV ECX,dword ptr [ESI + ECX*0x4 + 0x4]
00482df2  MOV dword ptr [EAX + EDX*0x4],ECX
00482df5  MOV EDX,dword ptr [EBP + -0xc]
00482df8  MOV EAX,dword ptr [EBP + 0x8]
00482dfb  MOV ECX,dword ptr [EBP + -0x8]
00482dfe  MOV dword ptr [EAX + EDX*0x4 + 0x4],ECX
00482e02  JMP 0x00482dad
00482e04  JMP 0x00482d93
00482e06  POP ESI
00482e07  MOV ESP,EBP
00482e09  POP EBP
00482e0a  RET 0x8

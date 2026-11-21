; FUN_00664d40  00664d40
00664d40  PUSH EBP
00664d41  MOV EBP,ESP
00664d43  SUB ESP,0x14
00664d46  MOV dword ptr [EBP + -0x14],ECX
00664d49  MOV EAX,dword ptr [EBP + 0x8]
00664d4c  PUSH EAX
00664d4d  MOV ECX,dword ptr [EBP + -0x14]
00664d50  CALL 0x00664830
00664d55  MOV dword ptr [EBP + -0x8],EAX
00664d58  MOV ECX,dword ptr [EBP + 0x8]
00664d5b  PUSH ECX
00664d5c  MOV ECX,dword ptr [EBP + -0x14]
00664d5f  CALL 0x006647c0
00664d64  MOV dword ptr [EBP + -0x10],EAX
00664d67  MOV EDX,dword ptr [EBP + -0x8]
00664d6a  MOV EAX,dword ptr [EBP + -0x14]
00664d6d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00664d71  CALL 0x005eb4b0
00664d76  MOV dword ptr [EBP + -0xc],EAX
00664d79  MOV dword ptr [EBP + -0x4],0x1
00664d80  JMP 0x00664d8b
00664d82  MOV ECX,dword ptr [EBP + -0x4]
00664d85  ADD ECX,0x1
00664d88  MOV dword ptr [EBP + -0x4],ECX
00664d8b  MOV EDX,dword ptr [EBP + -0x4]
00664d8e  CMP EDX,dword ptr [EBP + -0x10]
00664d91  JGE 0x00664dc1
00664d93  MOV EAX,dword ptr [EBP + -0x8]
00664d96  ADD EAX,dword ptr [EBP + -0x4]
00664d99  MOV ECX,dword ptr [EBP + -0x14]
00664d9c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
00664da0  CALL 0x005eb4b0
00664da5  CMP dword ptr [EBP + -0xc],EAX
00664da8  JLE 0x00664dbf
00664daa  MOV EDX,dword ptr [EBP + -0x8]
00664dad  ADD EDX,dword ptr [EBP + -0x4]
00664db0  MOV EAX,dword ptr [EBP + -0x14]
00664db3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00664db7  CALL 0x005eb4b0
00664dbc  MOV dword ptr [EBP + -0xc],EAX
00664dbf  JMP 0x00664d82
00664dc1  MOV EAX,dword ptr [EBP + -0xc]
00664dc4  IMUL EAX,EAX,-0x1
00664dc7  MOV ESP,EBP
00664dc9  POP EBP
00664dca  RET 0x4

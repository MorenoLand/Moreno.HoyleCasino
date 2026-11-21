; FUN_00664f50  00664f50
00664f50  PUSH EBP
00664f51  MOV EBP,ESP
00664f53  SUB ESP,0x18
00664f56  MOV dword ptr [EBP + -0x18],ECX
00664f59  MOV EAX,dword ptr [EBP + 0x8]
00664f5c  PUSH EAX
00664f5d  MOV ECX,dword ptr [EBP + -0x18]
00664f60  CALL 0x00664830
00664f65  MOV dword ptr [EBP + -0x8],EAX
00664f68  MOV ECX,dword ptr [EBP + 0x8]
00664f6b  PUSH ECX
00664f6c  MOV ECX,dword ptr [EBP + -0x18]
00664f6f  CALL 0x006647c0
00664f74  MOV dword ptr [EBP + -0x10],EAX
00664f77  MOV EDX,dword ptr [EBP + -0x8]
00664f7a  MOV EAX,dword ptr [EBP + -0x18]
00664f7d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00664f81  CALL 0x005eb470
00664f86  MOV dword ptr [EBP + -0xc],EAX
00664f89  MOV ECX,dword ptr [EBP + -0x8]
00664f8c  MOV EDX,dword ptr [EBP + -0x18]
00664f8f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x5c]
00664f93  CALL 0x005f5550
00664f98  MOV dword ptr [EBP + -0x14],EAX
00664f9b  MOV dword ptr [EBP + -0x4],0x1
00664fa2  JMP 0x00664fad
00664fa4  MOV EAX,dword ptr [EBP + -0x4]
00664fa7  ADD EAX,0x1
00664faa  MOV dword ptr [EBP + -0x4],EAX
00664fad  MOV ECX,dword ptr [EBP + -0x4]
00664fb0  CMP ECX,dword ptr [EBP + -0x10]
00664fb3  JGE 0x0066500f
00664fb5  MOV EDX,dword ptr [EBP + -0x8]
00664fb8  ADD EDX,dword ptr [EBP + -0x4]
00664fbb  MOV EAX,dword ptr [EBP + -0x18]
00664fbe  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00664fc2  CALL 0x005eb470
00664fc7  CMP dword ptr [EBP + -0xc],EAX
00664fca  JLE 0x00664fe1
00664fcc  MOV ECX,dword ptr [EBP + -0x8]
00664fcf  ADD ECX,dword ptr [EBP + -0x4]
00664fd2  MOV EDX,dword ptr [EBP + -0x18]
00664fd5  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x5c]
00664fd9  CALL 0x005eb470
00664fde  MOV dword ptr [EBP + -0xc],EAX
00664fe1  MOV EAX,dword ptr [EBP + -0x8]
00664fe4  ADD EAX,dword ptr [EBP + -0x4]
00664fe7  MOV ECX,dword ptr [EBP + -0x18]
00664fea  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
00664fee  CALL 0x005f5550
00664ff3  CMP dword ptr [EBP + -0x14],EAX
00664ff6  JGE 0x0066500d
00664ff8  MOV EDX,dword ptr [EBP + -0x8]
00664ffb  ADD EDX,dword ptr [EBP + -0x4]
00664ffe  MOV EAX,dword ptr [EBP + -0x18]
00665001  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00665005  CALL 0x005f5550
0066500a  MOV dword ptr [EBP + -0x14],EAX
0066500d  JMP 0x00664fa4
0066500f  MOV ECX,0x64
00665014  SUB ECX,dword ptr [EBP + -0xc]
00665017  SUB ECX,dword ptr [EBP + -0x14]
0066501a  JNS 0x00665020
0066501c  XOR EAX,EAX
0066501e  JMP 0x0066502b
00665020  MOV EAX,0x64
00665025  SUB EAX,dword ptr [EBP + -0xc]
00665028  SUB EAX,dword ptr [EBP + -0x14]
0066502b  MOV ESP,EBP
0066502d  POP EBP
0066502e  RET 0x4

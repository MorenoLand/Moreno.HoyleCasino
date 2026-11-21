; FUN_00418f50  00418f50
00418f50  PUSH EBP
00418f51  MOV EBP,ESP
00418f53  SUB ESP,0x1c
00418f56  PUSH ESI
00418f57  MOV dword ptr [EBP + -0x1c],ECX
00418f5a  MOV dword ptr [EBP + -0x18],0x0
00418f61  MOV dword ptr [EBP + -0x8],0x0
00418f68  MOV dword ptr [EBP + -0x4],0x0
00418f6f  JMP 0x00418f7a
00418f71  MOV EAX,dword ptr [EBP + -0x4]
00418f74  ADD EAX,0x1
00418f77  MOV dword ptr [EBP + -0x4],EAX
00418f7a  CMP dword ptr [EBP + -0x4],0x5
00418f7e  JGE 0x00418f94
00418f80  MOV ECX,dword ptr [EBP + -0x4]
00418f83  PUSH ECX
00418f84  MOV ECX,dword ptr [EBP + -0x1c]
00418f87  CALL 0x00419610
00418f8c  ADD EAX,dword ptr [EBP + -0x18]
00418f8f  MOV dword ptr [EBP + -0x18],EAX
00418f92  JMP 0x00418f71
00418f94  MOV EDX,dword ptr [EBP + -0x1c]
00418f97  MOV EAX,dword ptr [EDX + 0x464]
00418f9d  MOV ECX,dword ptr [EAX + 0x80c]
00418fa3  SUB ECX,dword ptr [EBP + -0x18]
00418fa6  MOV dword ptr [EBP + -0x8],ECX
00418fa9  MOV dword ptr [EBP + -0x4],0x0
00418fb0  JMP 0x00418fbb
00418fb2  MOV EDX,dword ptr [EBP + -0x4]
00418fb5  ADD EDX,0x1
00418fb8  MOV dword ptr [EBP + -0x4],EDX
00418fbb  CMP dword ptr [EBP + -0x4],0x5
00418fbf  JGE 0x00419050
00418fc5  MOV EAX,dword ptr [EBP + -0x1c]
00418fc8  MOV ECX,dword ptr [EAX + 0x464]
00418fce  MOV EDX,dword ptr [ECX + 0x80c]
00418fd4  SUB EDX,0x1
00418fd7  MOV dword ptr [EBP + -0xc],EDX
00418fda  JMP 0x00418fe5
00418fdc  MOV EAX,dword ptr [EBP + -0xc]
00418fdf  SUB EAX,0x1
00418fe2  MOV dword ptr [EBP + -0xc],EAX
00418fe5  CMP dword ptr [EBP + -0xc],0x0
00418fe9  JLE 0x0041904b
00418feb  MOV ECX,dword ptr [EBP + -0x8]
00418fee  PUSH ECX
00418fef  CALL 0x0062fbf0
00418ff4  ADD ESP,0x4
00418ff7  ADD EAX,dword ptr [EBP + -0x18]
00418ffa  MOV dword ptr [EBP + -0x14],EAX
00418ffd  MOV EDX,dword ptr [EBP + -0x1c]
00419000  MOV EAX,dword ptr [EDX + 0x464]
00419006  MOV ECX,dword ptr [EBP + -0x14]
00419009  MOV DX,word ptr [EAX + ECX*0x2 + 0x4]
0041900e  MOV word ptr [EBP + -0x10],DX
00419012  MOV EAX,dword ptr [EBP + -0x1c]
00419015  MOV ECX,dword ptr [EAX + 0x464]
0041901b  MOV EDX,dword ptr [EBP + -0x1c]
0041901e  MOV EAX,dword ptr [EDX + 0x464]
00419024  MOV EDX,dword ptr [EBP + -0x14]
00419027  MOV ESI,dword ptr [EBP + -0xc]
0041902a  MOV CX,word ptr [ECX + ESI*0x2 + 0x4]
0041902f  MOV word ptr [EAX + EDX*0x2 + 0x4],CX
00419034  MOV EDX,dword ptr [EBP + -0x1c]
00419037  MOV EAX,dword ptr [EDX + 0x464]
0041903d  MOV ECX,dword ptr [EBP + -0xc]
00419040  MOV DX,word ptr [EBP + -0x10]
00419044  MOV word ptr [EAX + ECX*0x2 + 0x4],DX
00419049  JMP 0x00418fdc
0041904b  JMP 0x00418fb2
00419050  MOV EAX,dword ptr [EBP + -0x1c]
00419053  MOV ECX,dword ptr [EAX + 0x464]
00419059  MOV EDX,dword ptr [ECX + 0x80c]
0041905f  SUB EDX,0x1
00419062  PUSH EDX
00419063  MOV EAX,dword ptr [EBP + -0x1c]
00419066  MOV ECX,dword ptr [EAX + 0x464]
0041906c  CALL 0x006436a0
00419071  POP ESI
00419072  MOV ESP,EBP
00419074  POP EBP
00419075  RET

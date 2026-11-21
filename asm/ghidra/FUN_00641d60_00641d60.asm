; FUN_00641d60  00641d60
00641d60  PUSH EBP
00641d61  MOV EBP,ESP
00641d63  SUB ESP,0xc
00641d66  PUSH ESI
00641d67  MOV dword ptr [EBP + -0x4],0x0
00641d6e  JMP 0x00641d79
00641d70  MOV EAX,dword ptr [EBP + -0x4]
00641d73  ADD EAX,0x1
00641d76  MOV dword ptr [EBP + -0x4],EAX
00641d79  MOV ECX,dword ptr [EBP + -0x4]
00641d7c  CMP ECX,dword ptr [EBP + 0xc]
00641d7f  JGE 0x00641e11
00641d85  MOV dword ptr [EBP + -0xc],0x0
00641d8c  JMP 0x00641d97
00641d8e  MOV EDX,dword ptr [EBP + -0xc]
00641d91  ADD EDX,0x1
00641d94  MOV dword ptr [EBP + -0xc],EDX
00641d97  MOV EAX,dword ptr [EBP + 0xc]
00641d9a  SUB EAX,0x1
00641d9d  CMP dword ptr [EBP + -0xc],EAX
00641da0  JGE 0x00641e0c
00641da2  MOV ECX,dword ptr [EBP + 0x1c]
00641da5  PUSH ECX
00641da6  MOV EDX,dword ptr [EBP + 0x18]
00641da9  PUSH EDX
00641daa  MOV EAX,dword ptr [EBP + 0x14]
00641dad  PUSH EAX
00641dae  MOV ECX,dword ptr [EBP + 0x10]
00641db1  PUSH ECX
00641db2  MOV EDX,dword ptr [EBP + -0xc]
00641db5  MOV EAX,dword ptr [EBP + 0x8]
00641db8  MOV CX,word ptr [EAX + EDX*0x2 + 0x2]
00641dbd  PUSH ECX
00641dbe  MOV EDX,dword ptr [EBP + -0xc]
00641dc1  MOV EAX,dword ptr [EBP + 0x8]
00641dc4  MOV CX,word ptr [EAX + EDX*0x2]
00641dc8  PUSH ECX
00641dc9  CALL 0x00642aa0
00641dce  ADD ESP,0x18
00641dd1  MOVZX EDX,AL
00641dd4  TEST EDX,EDX
00641dd6  JZ 0x00641e0a
00641dd8  MOV EAX,dword ptr [EBP + -0xc]
00641ddb  MOV ECX,dword ptr [EBP + 0x8]
00641dde  MOV DX,word ptr [ECX + EAX*0x2]
00641de2  MOV word ptr [EBP + -0x8],DX
00641de6  MOV EAX,dword ptr [EBP + -0xc]
00641de9  MOV ECX,dword ptr [EBP + 0x8]
00641dec  MOV EDX,dword ptr [EBP + -0xc]
00641def  MOV ESI,dword ptr [EBP + 0x8]
00641df2  MOV DX,word ptr [ESI + EDX*0x2 + 0x2]
00641df7  MOV word ptr [ECX + EAX*0x2],DX
00641dfb  MOV EAX,dword ptr [EBP + -0xc]
00641dfe  MOV ECX,dword ptr [EBP + 0x8]
00641e01  MOV DX,word ptr [EBP + -0x8]
00641e05  MOV word ptr [ECX + EAX*0x2 + 0x2],DX
00641e0a  JMP 0x00641d8e
00641e0c  JMP 0x00641d70
00641e11  POP ESI
00641e12  MOV ESP,EBP
00641e14  POP EBP
00641e15  RET

; FUN_0054ce10  0054ce10
0054ce10  PUSH EBP
0054ce11  MOV EBP,ESP
0054ce13  SUB ESP,0x14
0054ce16  MOV dword ptr [EBP + -0x14],ECX
0054ce19  MOV dword ptr [EBP + -0xc],0x1
0054ce20  MOV dword ptr [EBP + -0x8],0x1
0054ce27  MOV EAX,dword ptr [EBP + -0x14]
0054ce2a  MOV CX,word ptr [EAX + 0x4]
0054ce2e  PUSH ECX
0054ce2f  CALL 0x00641280
0054ce34  ADD ESP,0x4
0054ce37  MOV dword ptr [EBP + -0x10],EAX
0054ce3a  MOV dword ptr [EBP + -0x4],0x1
0054ce41  JMP 0x0054ce4c
0054ce43  MOV EDX,dword ptr [EBP + -0x4]
0054ce46  ADD EDX,0x1
0054ce49  MOV dword ptr [EBP + -0x4],EDX
0054ce4c  MOV ECX,dword ptr [EBP + -0x14]
0054ce4f  CALL 0x0054c540
0054ce54  CMP dword ptr [EBP + -0x4],EAX
0054ce57  JGE 0x0054ceab
0054ce59  MOV EAX,dword ptr [EBP + -0x4]
0054ce5c  MOV ECX,dword ptr [EBP + -0x14]
0054ce5f  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
0054ce64  PUSH EDX
0054ce65  CALL 0x00641280
0054ce6a  ADD ESP,0x4
0054ce6d  CMP EAX,dword ptr [EBP + -0x10]
0054ce70  JNZ 0x0054ce7d
0054ce72  MOV EAX,dword ptr [EBP + -0xc]
0054ce75  ADD EAX,0x1
0054ce78  MOV dword ptr [EBP + -0xc],EAX
0054ce7b  JMP 0x0054cea9
0054ce7d  MOV ECX,dword ptr [EBP + -0xc]
0054ce80  CMP ECX,dword ptr [EBP + -0x8]
0054ce83  JLE 0x0054ce8b
0054ce85  MOV EDX,dword ptr [EBP + -0xc]
0054ce88  MOV dword ptr [EBP + -0x8],EDX
0054ce8b  MOV dword ptr [EBP + -0xc],0x1
0054ce92  MOV EAX,dword ptr [EBP + -0x4]
0054ce95  MOV ECX,dword ptr [EBP + -0x14]
0054ce98  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
0054ce9d  PUSH EDX
0054ce9e  CALL 0x00641280
0054cea3  ADD ESP,0x4
0054cea6  MOV dword ptr [EBP + -0x10],EAX
0054cea9  JMP 0x0054ce43
0054ceab  MOV EAX,dword ptr [EBP + -0xc]
0054ceae  CMP EAX,dword ptr [EBP + -0x8]
0054ceb1  JLE 0x0054ceb9
0054ceb3  MOV ECX,dword ptr [EBP + -0xc]
0054ceb6  MOV dword ptr [EBP + -0x8],ECX
0054ceb9  MOV EAX,dword ptr [EBP + -0x8]
0054cebc  MOV ESP,EBP
0054cebe  POP EBP
0054cebf  RET

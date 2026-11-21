; FUN_00559c50  00559c50
00559c50  PUSH EBP
00559c51  MOV EBP,ESP
00559c53  SUB ESP,0x14
00559c56  MOV dword ptr [EBP + -0x14],ECX
00559c59  MOV dword ptr [EBP + -0xc],0x1
00559c60  MOV dword ptr [EBP + -0x8],0x1
00559c67  MOV EAX,dword ptr [EBP + -0x14]
00559c6a  MOV CX,word ptr [EAX + 0x4]
00559c6e  PUSH ECX
00559c6f  CALL 0x00641280
00559c74  ADD ESP,0x4
00559c77  MOV dword ptr [EBP + -0x10],EAX
00559c7a  MOV dword ptr [EBP + -0x4],0x1
00559c81  JMP 0x00559c8c
00559c83  MOV EDX,dword ptr [EBP + -0x4]
00559c86  ADD EDX,0x1
00559c89  MOV dword ptr [EBP + -0x4],EDX
00559c8c  MOV ECX,dword ptr [EBP + -0x14]
00559c8f  CALL 0x00559380
00559c94  CMP dword ptr [EBP + -0x4],EAX
00559c97  JGE 0x00559ceb
00559c99  MOV EAX,dword ptr [EBP + -0x4]
00559c9c  MOV ECX,dword ptr [EBP + -0x14]
00559c9f  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00559ca4  PUSH EDX
00559ca5  CALL 0x00641280
00559caa  ADD ESP,0x4
00559cad  CMP EAX,dword ptr [EBP + -0x10]
00559cb0  JNZ 0x00559cbd
00559cb2  MOV EAX,dword ptr [EBP + -0xc]
00559cb5  ADD EAX,0x1
00559cb8  MOV dword ptr [EBP + -0xc],EAX
00559cbb  JMP 0x00559ce9
00559cbd  MOV ECX,dword ptr [EBP + -0xc]
00559cc0  CMP ECX,dword ptr [EBP + -0x8]
00559cc3  JLE 0x00559ccb
00559cc5  MOV EDX,dword ptr [EBP + -0xc]
00559cc8  MOV dword ptr [EBP + -0x8],EDX
00559ccb  MOV dword ptr [EBP + -0xc],0x1
00559cd2  MOV EAX,dword ptr [EBP + -0x4]
00559cd5  MOV ECX,dword ptr [EBP + -0x14]
00559cd8  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00559cdd  PUSH EDX
00559cde  CALL 0x00641280
00559ce3  ADD ESP,0x4
00559ce6  MOV dword ptr [EBP + -0x10],EAX
00559ce9  JMP 0x00559c83
00559ceb  MOV EAX,dword ptr [EBP + -0xc]
00559cee  CMP EAX,dword ptr [EBP + -0x8]
00559cf1  JLE 0x00559cf9
00559cf3  MOV ECX,dword ptr [EBP + -0xc]
00559cf6  MOV dword ptr [EBP + -0x8],ECX
00559cf9  MOV EAX,dword ptr [EBP + -0x8]
00559cfc  MOV ESP,EBP
00559cfe  POP EBP
00559cff  RET

; FUN_00641cb0  00641cb0
00641cb0  PUSH EBP
00641cb1  MOV EBP,ESP
00641cb3  SUB ESP,0xc
00641cb6  PUSH ESI
00641cb7  MOV dword ptr [EBP + -0x4],0x0
00641cbe  JMP 0x00641cc9
00641cc0  MOV EAX,dword ptr [EBP + -0x4]
00641cc3  ADD EAX,0x1
00641cc6  MOV dword ptr [EBP + -0x4],EAX
00641cc9  MOV ECX,dword ptr [EBP + -0x4]
00641ccc  CMP ECX,dword ptr [EBP + 0xc]
00641ccf  JGE 0x00641d55
00641cd5  MOV dword ptr [EBP + -0xc],0x0
00641cdc  JMP 0x00641ce7
00641cde  MOV EDX,dword ptr [EBP + -0xc]
00641ce1  ADD EDX,0x1
00641ce4  MOV dword ptr [EBP + -0xc],EDX
00641ce7  MOV EAX,dword ptr [EBP + 0xc]
00641cea  SUB EAX,0x1
00641ced  CMP dword ptr [EBP + -0xc],EAX
00641cf0  JGE 0x00641d50
00641cf2  MOV ECX,dword ptr [EBP + 0x10]
00641cf5  PUSH ECX
00641cf6  MOV EDX,dword ptr [EBP + -0xc]
00641cf9  MOV EAX,dword ptr [EBP + 0x8]
00641cfc  MOV CX,word ptr [EAX + EDX*0x2 + 0x2]
00641d01  PUSH ECX
00641d02  MOV EDX,dword ptr [EBP + -0xc]
00641d05  MOV EAX,dword ptr [EBP + 0x8]
00641d08  MOV CX,word ptr [EAX + EDX*0x2]
00641d0c  PUSH ECX
00641d0d  CALL 0x006429e0
00641d12  ADD ESP,0xc
00641d15  MOVZX EDX,AL
00641d18  TEST EDX,EDX
00641d1a  JZ 0x00641d4e
00641d1c  MOV EAX,dword ptr [EBP + -0xc]
00641d1f  MOV ECX,dword ptr [EBP + 0x8]
00641d22  MOV DX,word ptr [ECX + EAX*0x2]
00641d26  MOV word ptr [EBP + -0x8],DX
00641d2a  MOV EAX,dword ptr [EBP + -0xc]
00641d2d  MOV ECX,dword ptr [EBP + 0x8]
00641d30  MOV EDX,dword ptr [EBP + -0xc]
00641d33  MOV ESI,dword ptr [EBP + 0x8]
00641d36  MOV DX,word ptr [ESI + EDX*0x2 + 0x2]
00641d3b  MOV word ptr [ECX + EAX*0x2],DX
00641d3f  MOV EAX,dword ptr [EBP + -0xc]
00641d42  MOV ECX,dword ptr [EBP + 0x8]
00641d45  MOV DX,word ptr [EBP + -0x8]
00641d49  MOV word ptr [ECX + EAX*0x2 + 0x2],DX
00641d4e  JMP 0x00641cde
00641d50  JMP 0x00641cc0
00641d55  POP ESI
00641d56  MOV ESP,EBP
00641d58  POP EBP
00641d59  RET

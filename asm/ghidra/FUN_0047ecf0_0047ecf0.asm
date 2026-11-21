; FUN_0047ecf0  0047ecf0
0047ecf0  PUSH EBP
0047ecf1  MOV EBP,ESP
0047ecf3  SUB ESP,0xc
0047ecf6  MOV dword ptr [EBP + -0xc],ECX
0047ecf9  MOV EAX,dword ptr [EBP + -0xc]
0047ecfc  MOV ECX,dword ptr [EAX + 0x488]
0047ed02  MOV EDX,dword ptr [EBP + -0xc]
0047ed05  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0047ed09  CALL 0x004c6180
0047ed0e  MOV ECX,EAX
0047ed10  CALL 0x00646e40
0047ed15  MOV dword ptr [EBP + -0x8],EAX
0047ed18  MOV EAX,dword ptr [EBP + -0xc]
0047ed1b  MOV ECX,dword ptr [EAX + 0x488]
0047ed21  MOV EDX,dword ptr [EBP + -0xc]
0047ed24  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0047ed28  CALL 0x004c6180
0047ed2d  MOV ECX,EAX
0047ed2f  CALL 0x00646e70
0047ed34  MOV dword ptr [EBP + -0x4],EAX
0047ed37  MOV EAX,dword ptr [EBP + -0xc]
0047ed3a  CMP dword ptr [EAX + 0x488],0x2
0047ed41  JL 0x0047ed58
0047ed43  MOV ECX,dword ptr [EBP + -0xc]
0047ed46  CMP dword ptr [ECX + 0x488],0x5
0047ed4d  JG 0x0047ed58
0047ed4f  MOV EDX,dword ptr [EBP + -0x8]
0047ed52  ADD EDX,0x50
0047ed55  MOV dword ptr [EBP + -0x8],EDX
0047ed58  MOV EAX,dword ptr [EBP + -0x4]
0047ed5b  ADD EAX,0x41
0047ed5e  PUSH EAX
0047ed5f  MOV ECX,dword ptr [EBP + -0x8]
0047ed62  PUSH ECX
0047ed63  MOV EDX,dword ptr [EBP + -0xc]
0047ed66  MOV EAX,dword ptr [EDX + 0x49c]
0047ed6c  MOV ECX,dword ptr [EBP + -0xc]
0047ed6f  MOV ECX,dword ptr [ECX + 0x49c]
0047ed75  MOV EDX,dword ptr [EAX]
0047ed77  MOV EAX,dword ptr [EDX + 0x44]
0047ed7a  CALL EAX
0047ed7c  MOV ECX,dword ptr [EBP + -0xc]
0047ed7f  MOV EDX,dword ptr [ECX + 0x49c]
0047ed85  MOV EAX,dword ptr [EBP + -0xc]
0047ed88  MOV ECX,dword ptr [EAX + 0x49c]
0047ed8e  MOV EDX,dword ptr [EDX]
0047ed90  MOV EAX,dword ptr [EDX + 0x74]
0047ed93  CALL EAX
0047ed95  MOV ESP,EBP
0047ed97  POP EBP
0047ed98  RET

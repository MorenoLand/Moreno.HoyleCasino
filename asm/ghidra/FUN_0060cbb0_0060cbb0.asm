; FUN_0060cbb0  0060cbb0
0060cbb0  PUSH EBP
0060cbb1  MOV EBP,ESP
0060cbb3  SUB ESP,0x14
0060cbb6  MOV dword ptr [EBP + -0x14],ECX
0060cbb9  MOV dword ptr [EBP + -0x4],0x0
0060cbc0  JMP 0x0060cbcb
0060cbc2  MOV EAX,dword ptr [EBP + -0x4]
0060cbc5  ADD EAX,0x1
0060cbc8  MOV dword ptr [EBP + -0x4],EAX
0060cbcb  MOV ECX,dword ptr [EBP + -0x14]
0060cbce  MOV EDX,dword ptr [EBP + -0x4]
0060cbd1  CMP EDX,dword ptr [ECX + 0x4]
0060cbd4  JGE 0x0060cc5a
0060cbda  MOV dword ptr [EBP + -0x10],0x0
0060cbe1  JMP 0x0060cbec
0060cbe3  MOV EAX,dword ptr [EBP + -0x10]
0060cbe6  ADD EAX,0x1
0060cbe9  MOV dword ptr [EBP + -0x10],EAX
0060cbec  MOV ECX,dword ptr [EBP + -0x14]
0060cbef  MOV EDX,dword ptr [ECX + 0x4]
0060cbf2  SUB EDX,0x1
0060cbf5  SUB EDX,dword ptr [EBP + -0x4]
0060cbf8  CMP dword ptr [EBP + -0x10],EDX
0060cbfb  JGE 0x0060cc55
0060cbfd  MOV EAX,dword ptr [EBP + -0x10]
0060cc00  PUSH EAX
0060cc01  MOV ECX,dword ptr [EBP + -0x14]
0060cc04  CALL 0x0060ca40
0060cc09  MOV dword ptr [EBP + -0xc],EAX
0060cc0c  MOV ECX,dword ptr [EBP + -0x10]
0060cc0f  ADD ECX,0x1
0060cc12  PUSH ECX
0060cc13  MOV ECX,dword ptr [EBP + -0x14]
0060cc16  CALL 0x0060ca40
0060cc1b  MOV dword ptr [EBP + -0x8],EAX
0060cc1e  MOV EDX,dword ptr [EBP + -0x8]
0060cc21  PUSH EDX
0060cc22  MOV EAX,dword ptr [EBP + -0xc]
0060cc25  PUSH EAX
0060cc26  CALL dword ptr [EBP + 0x8]
0060cc29  ADD ESP,0x8
0060cc2c  TEST EAX,EAX
0060cc2e  JLE 0x0060cc53
0060cc30  MOV ECX,dword ptr [EBP + -0x8]
0060cc33  PUSH ECX
0060cc34  MOV EDX,dword ptr [EBP + -0x10]
0060cc37  PUSH EDX
0060cc38  MOV ECX,dword ptr [EBP + -0x14]
0060cc3b  CALL 0x0060ca70
0060cc40  MOV EAX,dword ptr [EBP + -0xc]
0060cc43  PUSH EAX
0060cc44  MOV ECX,dword ptr [EBP + -0x10]
0060cc47  ADD ECX,0x1
0060cc4a  PUSH ECX
0060cc4b  MOV ECX,dword ptr [EBP + -0x14]
0060cc4e  CALL 0x0060ca70
0060cc53  JMP 0x0060cbe3
0060cc55  JMP 0x0060cbc2
0060cc5a  MOV ESP,EBP
0060cc5c  POP EBP
0060cc5d  RET 0x4

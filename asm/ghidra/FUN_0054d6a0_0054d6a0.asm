; FUN_0054d6a0  0054d6a0
0054d6a0  PUSH EBP
0054d6a1  MOV EBP,ESP
0054d6a3  SUB ESP,0xc
0054d6a6  PUSH ESI
0054d6a7  MOV dword ptr [EBP + -0xc],ECX
0054d6aa  MOV dword ptr [EBP + -0x4],0x0
0054d6b1  JMP 0x0054d6bc
0054d6b3  MOV EAX,dword ptr [EBP + -0x4]
0054d6b6  ADD EAX,0x1
0054d6b9  MOV dword ptr [EBP + -0x4],EAX
0054d6bc  CMP dword ptr [EBP + -0x4],0x5
0054d6c0  JGE 0x0054d6d9
0054d6c2  MOV ECX,dword ptr [EBP + -0x4]
0054d6c5  MOV EDX,dword ptr [EBP + -0xc]
0054d6c8  MOV EAX,dword ptr [EBP + -0x4]
0054d6cb  MOV ESI,dword ptr [EBP + 0xc]
0054d6ce  MOV AX,word ptr [ESI + EAX*0x2]
0054d6d2  MOV word ptr [EDX + ECX*0x2 + 0x4],AX
0054d6d7  JMP 0x0054d6b3
0054d6d9  MOV ECX,dword ptr [EBP + -0xc]
0054d6dc  MOV byte ptr [ECX + 0x19],0x0
0054d6e0  MOV ECX,dword ptr [EBP + -0xc]
0054d6e3  CALL 0x00551960
0054d6e8  MOV EDX,dword ptr [0x007947e0]
0054d6ee  MOV EAX,dword ptr [EDX + 0x4f14]
0054d6f4  MOV dword ptr [EBP + -0x8],EAX
0054d6f7  MOV ECX,dword ptr [EBP + -0xc]
0054d6fa  ADD ECX,0x4
0054d6fd  PUSH ECX
0054d6fe  MOV EDX,dword ptr [EBP + -0x8]
0054d701  PUSH EDX
0054d702  MOV ECX,dword ptr [EBP + -0xc]
0054d705  CALL 0x0054c460
0054d70a  PUSH EAX
0054d70b  MOV ECX,dword ptr [EBP + -0xc]
0054d70e  CALL 0x0054d720
0054d713  MOV EAX,dword ptr [EBP + -0xc]
0054d716  MOV AL,byte ptr [EAX + 0x19]
0054d719  POP ESI
0054d71a  MOV ESP,EBP
0054d71c  POP EBP
0054d71d  RET 0x8

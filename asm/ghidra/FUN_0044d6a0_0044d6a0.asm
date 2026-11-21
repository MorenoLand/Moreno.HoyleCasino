; FUN_0044d6a0  0044d6a0
0044d6a0  PUSH EBP
0044d6a1  MOV EBP,ESP
0044d6a3  PUSH ECX
0044d6a4  MOV dword ptr [EBP + -0x4],ECX
0044d6a7  MOV AL,byte ptr [EBP + 0xc]
0044d6aa  PUSH EAX
0044d6ab  MOV ECX,dword ptr [EBP + 0x8]
0044d6ae  PUSH ECX
0044d6af  MOV ECX,dword ptr [EBP + -0x4]
0044d6b2  CALL 0x0044d5e0
0044d6b7  MOVZX EDX,AL
0044d6ba  TEST EDX,EDX
0044d6bc  JZ 0x0044d6c2
0044d6be  XOR AL,AL
0044d6c0  JMP 0x0044d6f8
0044d6c2  MOV EAX,dword ptr [EBP + -0x4]
0044d6c5  MOV byte ptr [EAX + 0xc8],0x0
0044d6cc  MOV CL,byte ptr [EBP + 0xc]
0044d6cf  PUSH ECX
0044d6d0  MOV EDX,dword ptr [EBP + 0x8]
0044d6d3  PUSH EDX
0044d6d4  MOV ECX,dword ptr [EBP + -0x4]
0044d6d7  CALL 0x0044d510
0044d6dc  MOV EAX,dword ptr [EBP + -0x4]
0044d6df  ADD EAX,dword ptr [EBP + 0x8]
0044d6e2  MOV byte ptr [EAX + 0xc9],0x0
0044d6e9  MOV ECX,dword ptr [EBP + -0x4]
0044d6ec  ADD ECX,dword ptr [EBP + 0x8]
0044d6ef  MOV byte ptr [ECX + 0xcd],0x1
0044d6f6  MOV AL,0x1
0044d6f8  MOV ESP,EBP
0044d6fa  POP EBP
0044d6fb  RET 0x8

; FUN_0054cbf0  0054cbf0
0054cbf0  PUSH EBP
0054cbf1  MOV EBP,ESP
0054cbf3  SUB ESP,0xc
0054cbf6  MOV dword ptr [EBP + -0xc],ECX
0054cbf9  MOV dword ptr [EBP + -0x8],0xfffffffe
0054cc00  MOV ECX,dword ptr [EBP + -0xc]
0054cc03  CALL 0x0054cec0
0054cc08  TEST EAX,EAX
0054cc0a  JNZ 0x0054cc13
0054cc0c  XOR AL,AL
0054cc0e  JMP 0x0054cca7
0054cc13  MOV dword ptr [EBP + -0x4],0x0
0054cc1a  JMP 0x0054cc25
0054cc1c  MOV EAX,dword ptr [EBP + -0x4]
0054cc1f  ADD EAX,0x1
0054cc22  MOV dword ptr [EBP + -0x4],EAX
0054cc25  MOV ECX,dword ptr [EBP + -0xc]
0054cc28  CALL 0x0054c540
0054cc2d  CMP dword ptr [EBP + -0x4],EAX
0054cc30  JGE 0x0054cca5
0054cc32  CMP dword ptr [EBP + -0x8],-0x2
0054cc36  JNZ 0x0054cc6a
0054cc38  MOV ECX,dword ptr [EBP + -0x4]
0054cc3b  MOV EDX,dword ptr [EBP + -0xc]
0054cc3e  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0054cc43  PUSH EAX
0054cc44  MOV ECX,dword ptr [EBP + -0xc]
0054cc47  CALL 0x0054c590
0054cc4c  CMP EAX,0x14
0054cc4f  JZ 0x0054cc68
0054cc51  MOV ECX,dword ptr [EBP + -0x4]
0054cc54  MOV EDX,dword ptr [EBP + -0xc]
0054cc57  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0054cc5c  PUSH EAX
0054cc5d  CALL 0x00641290
0054cc62  ADD ESP,0x4
0054cc65  MOV dword ptr [EBP + -0x8],EAX
0054cc68  JMP 0x0054cca0
0054cc6a  MOV ECX,dword ptr [EBP + -0x4]
0054cc6d  MOV EDX,dword ptr [EBP + -0xc]
0054cc70  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0054cc75  PUSH EAX
0054cc76  MOV ECX,dword ptr [EBP + -0xc]
0054cc79  CALL 0x0054c590
0054cc7e  CMP EAX,0x14
0054cc81  JZ 0x0054cca0
0054cc83  MOV ECX,dword ptr [EBP + -0x4]
0054cc86  MOV EDX,dword ptr [EBP + -0xc]
0054cc89  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0054cc8e  PUSH EAX
0054cc8f  CALL 0x00641290
0054cc94  ADD ESP,0x4
0054cc97  CMP EAX,dword ptr [EBP + -0x8]
0054cc9a  JZ 0x0054cca0
0054cc9c  XOR AL,AL
0054cc9e  JMP 0x0054cca7
0054cca0  JMP 0x0054cc1c
0054cca5  MOV AL,0x1
0054cca7  MOV ESP,EBP
0054cca9  POP EBP
0054ccaa  RET

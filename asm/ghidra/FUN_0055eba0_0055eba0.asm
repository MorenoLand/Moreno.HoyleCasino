; FUN_0055eba0  0055eba0
0055eba0  PUSH EBP
0055eba1  MOV EBP,ESP
0055eba3  SUB ESP,0x10
0055eba6  MOV dword ptr [EBP + -0x10],ECX
0055eba9  MOV dword ptr [EBP + -0x4],0x0
0055ebb0  MOV dword ptr [EBP + -0x8],0x0
0055ebb7  MOV ECX,dword ptr [EBP + -0x10]
0055ebba  CALL 0x005596e0
0055ebbf  MOV dword ptr [EBP + -0x8],EAX
0055ebc2  CMP dword ptr [EBP + -0x8],0x0
0055ebc6  JZ 0x0055ec1b
0055ebc8  MOV dword ptr [EBP + -0xc],0x0
0055ebcf  JMP 0x0055ebda
0055ebd1  MOV EAX,dword ptr [EBP + -0xc]
0055ebd4  ADD EAX,0x1
0055ebd7  MOV dword ptr [EBP + -0xc],EAX
0055ebda  MOV ECX,dword ptr [EBP + -0x10]
0055ebdd  CALL 0x00559380
0055ebe2  CMP dword ptr [EBP + -0xc],EAX
0055ebe5  JGE 0x0055ec17
0055ebe7  MOV ECX,dword ptr [EBP + -0xc]
0055ebea  MOV EDX,dword ptr [EBP + -0x10]
0055ebed  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0055ebf2  PUSH EAX
0055ebf3  CALL 0x00641280
0055ebf8  ADD ESP,0x4
0055ebfb  CMP EAX,dword ptr [EBP + -0x8]
0055ebfe  JNZ 0x0055ec15
0055ec00  MOV ECX,dword ptr [EBP + -0x10]
0055ec03  ADD ECX,dword ptr [EBP + -0x4]
0055ec06  MOV DL,byte ptr [EBP + -0xc]
0055ec09  MOV byte ptr [ECX + 0x14],DL
0055ec0c  MOV EAX,dword ptr [EBP + -0x4]
0055ec0f  ADD EAX,0x1
0055ec12  MOV dword ptr [EBP + -0x4],EAX
0055ec15  JMP 0x0055ebd1
0055ec17  MOV AL,0x1
0055ec19  JMP 0x0055ec1d
0055ec1b  XOR AL,AL
0055ec1d  MOV ESP,EBP
0055ec1f  POP EBP
0055ec20  RET

; FUN_0054ccb0  0054ccb0
0054ccb0  PUSH EBP
0054ccb1  MOV EBP,ESP
0054ccb3  SUB ESP,0x20
0054ccb6  MOV dword ptr [EBP + -0x20],ECX
0054ccb9  MOV dword ptr [EBP + -0x1c],0x0
0054ccc0  MOV dword ptr [EBP + -0x18],0x0
0054ccc7  MOV dword ptr [EBP + -0x14],0x0
0054ccce  MOV dword ptr [EBP + -0x10],0x0
0054ccd5  MOV ECX,dword ptr [EBP + -0x20]
0054ccd8  CALL 0x0054cec0
0054ccdd  MOV dword ptr [EBP + -0xc],EAX
0054cce0  MOV dword ptr [EBP + -0x4],0x0
0054cce7  CMP dword ptr [EBP + -0xc],0x0
0054cceb  JNZ 0x0054ccf4
0054cced  XOR AL,AL
0054ccef  JMP 0x0054cdb2
0054ccf4  CMP dword ptr [EBP + -0xc],0x4
0054ccf8  JL 0x0054cd01
0054ccfa  MOV AL,0x1
0054ccfc  JMP 0x0054cdb2
0054cd01  MOV dword ptr [EBP + -0x8],0x0
0054cd08  JMP 0x0054cd13
0054cd0a  MOV EAX,dword ptr [EBP + -0x8]
0054cd0d  ADD EAX,0x1
0054cd10  MOV dword ptr [EBP + -0x8],EAX
0054cd13  MOV ECX,dword ptr [EBP + -0x20]
0054cd16  CALL 0x0054c540
0054cd1b  CMP dword ptr [EBP + -0x8],EAX
0054cd1e  JGE 0x0054cd85
0054cd20  MOV ECX,dword ptr [EBP + -0x8]
0054cd23  MOV EDX,dword ptr [EBP + -0x20]
0054cd26  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0054cd2b  PUSH EAX
0054cd2c  MOV ECX,dword ptr [EBP + -0x20]
0054cd2f  CALL 0x0054c590
0054cd34  CMP EAX,0x14
0054cd37  JZ 0x0054cd83
0054cd39  MOV ECX,dword ptr [EBP + -0x8]
0054cd3c  MOV EDX,dword ptr [EBP + -0x20]
0054cd3f  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0054cd44  PUSH EAX
0054cd45  CALL 0x00641280
0054cd4a  ADD ESP,0x4
0054cd4d  PUSH EAX
0054cd4e  MOV ECX,dword ptr [EBP + -0x20]
0054cd51  CALL 0x0054cf20
0054cd56  CMP EAX,0x1
0054cd59  JLE 0x0054cd5f
0054cd5b  XOR AL,AL
0054cd5d  JMP 0x0054cdb2
0054cd5f  MOV ECX,dword ptr [EBP + -0x8]
0054cd62  MOV EDX,dword ptr [EBP + -0x20]
0054cd65  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0054cd6a  PUSH EAX
0054cd6b  MOV ECX,dword ptr [EBP + -0x20]
0054cd6e  CALL 0x0054c590
0054cd73  MOV ECX,dword ptr [EBP + -0x4]
0054cd76  MOV dword ptr [EBP + ECX*0x4 + -0x1c],EAX
0054cd7a  MOV EDX,dword ptr [EBP + -0x4]
0054cd7d  ADD EDX,0x1
0054cd80  MOV dword ptr [EBP + -0x4],EDX
0054cd83  JMP 0x0054cd0a
0054cd85  MOV EAX,dword ptr [EBP + -0x4]
0054cd88  CMP dword ptr [EBP + EAX*0x4 + -0x20],0xe
0054cd8d  JNZ 0x0054cd9d
0054cd8f  MOV ECX,dword ptr [EBP + -0x4]
0054cd92  CMP dword ptr [EBP + ECX*0x4 + -0x24],0x5
0054cd97  JG 0x0054cd9d
0054cd99  MOV AL,0x1
0054cd9b  JMP 0x0054cdb2
0054cd9d  MOV EDX,dword ptr [EBP + -0x1c]
0054cda0  ADD EDX,0x4
0054cda3  MOV EAX,dword ptr [EBP + -0x4]
0054cda6  CMP EDX,dword ptr [EBP + EAX*0x4 + -0x20]
0054cdaa  JL 0x0054cdb0
0054cdac  MOV AL,0x1
0054cdae  JMP 0x0054cdb2
0054cdb0  XOR AL,AL
0054cdb2  MOV ESP,EBP
0054cdb4  POP EBP
0054cdb5  RET

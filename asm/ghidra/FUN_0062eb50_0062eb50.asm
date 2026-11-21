; FUN_0062eb50  0062eb50
0062eb50  PUSH EBP
0062eb51  MOV EBP,ESP
0062eb53  SUB ESP,0x10
0062eb56  MOVZX EAX,word ptr [EBP + 0x10]
0062eb5a  MOVZX ECX,word ptr [EBP + 0xc]
0062eb5e  IMUL EAX,ECX
0062eb61  MOV dword ptr [EBP + -0x10],EAX
0062eb64  MOV dword ptr [EBP + -0x4],0x0
0062eb6b  JMP 0x0062eb76
0062eb6d  MOV EDX,dword ptr [EBP + -0x4]
0062eb70  ADD EDX,0x1
0062eb73  MOV dword ptr [EBP + -0x4],EDX
0062eb76  MOVZX EAX,word ptr [EBP + 0xc]
0062eb7a  CMP dword ptr [EBP + -0x4],EAX
0062eb7d  JGE 0x0062ec05
0062eb83  MOV dword ptr [EBP + -0x10],0x0
0062eb8a  JMP 0x0062eb95
0062eb8c  MOV ECX,dword ptr [EBP + -0x10]
0062eb8f  ADD ECX,0x1
0062eb92  MOV dword ptr [EBP + -0x10],ECX
0062eb95  MOVZX EDX,word ptr [EBP + 0x8]
0062eb99  CMP dword ptr [EBP + -0x10],EDX
0062eb9c  JGE 0x0062ebf1
0062eb9e  MOV EAX,dword ptr [EBP + 0x18]
0062eba1  MOV CX,word ptr [EAX]
0062eba4  MOV word ptr [EBP + -0xc],CX
0062eba8  MOV DL,byte ptr [EAX + 0x2]
0062ebab  MOV byte ptr [EBP + -0xa],DL
0062ebae  MOV EAX,dword ptr [EBP + 0x18]
0062ebb1  ADD EAX,0x3
0062ebb4  MOV dword ptr [EBP + 0x18],EAX
0062ebb7  MOV CL,byte ptr [EBP + -0xc]
0062ebba  MOV byte ptr [EBP + -0x5],CL
0062ebbd  MOV DL,byte ptr [EBP + -0xa]
0062ebc0  MOV byte ptr [EBP + -0xc],DL
0062ebc3  MOV AL,byte ptr [EBP + -0x5]
0062ebc6  MOV byte ptr [EBP + -0xa],AL
0062ebc9  PUSH ECX
0062ebca  MOV ECX,ESP
0062ebcc  MOV DX,word ptr [EBP + -0xc]
0062ebd0  MOV word ptr [ECX],DX
0062ebd3  MOV AL,byte ptr [EBP + -0xa]
0062ebd6  MOV byte ptr [ECX + 0x2],AL
0062ebd9  CALL 0x00617af0
0062ebde  ADD ESP,0x4
0062ebe1  MOV ECX,dword ptr [EBP + 0x14]
0062ebe4  MOV dword ptr [ECX],EAX
0062ebe6  MOV EDX,dword ptr [EBP + 0x14]
0062ebe9  ADD EDX,0x4
0062ebec  MOV dword ptr [EBP + 0x14],EDX
0062ebef  JMP 0x0062eb8c
0062ebf1  MOVZX EAX,word ptr [EBP + 0x10]
0062ebf5  SHL EAX,0x2
0062ebf8  MOV ECX,dword ptr [EBP + 0x14]
0062ebfb  SUB ECX,EAX
0062ebfd  MOV dword ptr [EBP + 0x14],ECX
0062ec00  JMP 0x0062eb6d
0062ec05  MOV ESP,EBP
0062ec07  POP EBP
0062ec08  RET

; FUN_0061f650  0061f650
0061f650  PUSH EBP
0061f651  MOV EBP,ESP
0061f653  SUB ESP,0x2c
0061f656  MOV dword ptr [EBP + -0x2c],ECX
0061f659  MOV EAX,dword ptr [EBP + -0x2c]
0061f65c  CMP dword ptr [EAX + 0x31c],0x0
0061f663  JNZ 0x0061f6a6
0061f665  PUSH 0x80000
0061f66a  CALL 0x00686d82
0061f66f  ADD ESP,0x4
0061f672  MOV dword ptr [EBP + -0x28],EAX
0061f675  MOV ECX,dword ptr [EBP + -0x2c]
0061f678  MOV EDX,dword ptr [EBP + -0x28]
0061f67b  MOV dword ptr [ECX + 0x31c],EDX
0061f681  PUSH 0x80000
0061f686  PUSH 0x0
0061f688  MOV EAX,dword ptr [EBP + -0x2c]
0061f68b  MOV ECX,dword ptr [EAX + 0x31c]
0061f691  PUSH ECX
0061f692  CALL 0x00686fa2
0061f697  ADD ESP,0xc
0061f69a  MOV EDX,dword ptr [EBP + -0x2c]
0061f69d  MOV word ptr [EDX + 0x308],0x0
0061f6a6  MOV EAX,dword ptr [EBP + -0x2c]
0061f6a9  ADD EAX,0x8
0061f6ac  MOV dword ptr [EBP + -0xc],EAX
0061f6af  MOV ECX,dword ptr [EBP + 0x10]
0061f6b2  IMUL ECX,dword ptr [EBP + 0xc]
0061f6b6  MOV dword ptr [EBP + -0x10],ECX
0061f6b9  MOV dword ptr [EBP + -0x4],0x0
0061f6c0  JMP 0x0061f6cb
0061f6c2  MOV EDX,dword ptr [EBP + -0x4]
0061f6c5  ADD EDX,dword ptr [EBP + 0xc]
0061f6c8  MOV dword ptr [EBP + -0x4],EDX
0061f6cb  MOV EAX,dword ptr [EBP + -0x4]
0061f6ce  CMP EAX,dword ptr [EBP + -0x10]
0061f6d1  JGE 0x0061f845
0061f6d7  MOV ECX,dword ptr [EBP + -0x4]
0061f6da  ADD ECX,dword ptr [EBP + 0xc]
0061f6dd  MOV dword ptr [EBP + -0x14],ECX
0061f6e0  MOV EDX,dword ptr [EBP + -0x4]
0061f6e3  MOV dword ptr [EBP + -0x8],EDX
0061f6e6  JMP 0x0061f6f1
0061f6e8  MOV EAX,dword ptr [EBP + -0x8]
0061f6eb  ADD EAX,0x1
0061f6ee  MOV dword ptr [EBP + -0x8],EAX
0061f6f1  MOV ECX,dword ptr [EBP + -0x8]
0061f6f4  CMP ECX,dword ptr [EBP + -0x14]
0061f6f7  JGE 0x0061f840
0061f6fd  MOV EDX,dword ptr [EBP + -0x8]
0061f700  MOV EAX,dword ptr [EBP + 0x8]
0061f703  MOV ECX,dword ptr [EAX + EDX*0x4]
0061f706  MOV dword ptr [EBP + -0x18],ECX
0061f709  MOVZX EDX,byte ptr [EBP + -0x15]
0061f70d  TEST EDX,EDX
0061f70f  JZ 0x0061f83b
0061f715  MOVZX EAX,byte ptr [EBP + -0x18]
0061f719  SAR EAX,0x2
0061f71c  SHL EAX,0x6
0061f71f  SHL EAX,0x5
0061f722  MOVZX ECX,byte ptr [EBP + -0x17]
0061f726  SAR ECX,0x2
0061f729  SHL ECX,0x5
0061f72c  ADD EAX,ECX
0061f72e  MOVZX EDX,byte ptr [EBP + -0x16]
0061f732  SAR EDX,0x3
0061f735  ADD EAX,EDX
0061f737  MOV ECX,dword ptr [EBP + -0x2c]
0061f73a  MOV EDX,dword ptr [ECX + 0x31c]
0061f740  LEA EAX,[EDX + EAX*0x4]
0061f743  MOV dword ptr [EBP + -0x1c],EAX
0061f746  MOV ECX,dword ptr [EBP + -0x1c]
0061f749  MOV EDX,dword ptr [ECX]
0061f74b  ADD EDX,0x1
0061f74e  MOV EAX,dword ptr [EBP + -0x1c]
0061f751  MOV dword ptr [EAX],EDX
0061f753  MOV ECX,dword ptr [EBP + -0x2c]
0061f756  MOVZX EDX,word ptr [ECX + 0x308]
0061f75d  CMP EDX,0x100
0061f763  JGE 0x0061f83b
0061f769  MOV byte ptr [EBP + -0x1d],0x0
0061f76d  MOV dword ptr [EBP + -0x24],0x0
0061f774  JMP 0x0061f77f
0061f776  MOV EAX,dword ptr [EBP + -0x24]
0061f779  ADD EAX,0x1
0061f77c  MOV dword ptr [EBP + -0x24],EAX
0061f77f  MOV ECX,dword ptr [EBP + -0x2c]
0061f782  MOVZX EDX,word ptr [ECX + 0x308]
0061f789  CMP dword ptr [EBP + -0x24],EDX
0061f78c  JGE 0x0061f7d7
0061f78e  MOV EAX,dword ptr [EBP + -0x24]
0061f791  IMUL EAX,EAX,0x3
0061f794  MOV ECX,dword ptr [EBP + -0xc]
0061f797  MOVZX EDX,byte ptr [ECX + EAX*0x1]
0061f79b  MOVZX EAX,byte ptr [EBP + -0x18]
0061f79f  CMP EDX,EAX
0061f7a1  JNZ 0x0061f7d5
0061f7a3  MOV ECX,dword ptr [EBP + -0x24]
0061f7a6  IMUL ECX,ECX,0x3
0061f7a9  MOV EDX,dword ptr [EBP + -0xc]
0061f7ac  MOVZX EAX,byte ptr [EDX + ECX*0x1 + 0x1]
0061f7b1  MOVZX ECX,byte ptr [EBP + -0x17]
0061f7b5  CMP EAX,ECX
0061f7b7  JNZ 0x0061f7d5
0061f7b9  MOV EDX,dword ptr [EBP + -0x24]
0061f7bc  IMUL EDX,EDX,0x3
0061f7bf  MOV EAX,dword ptr [EBP + -0xc]
0061f7c2  MOVZX ECX,byte ptr [EAX + EDX*0x1 + 0x2]
0061f7c7  MOVZX EDX,byte ptr [EBP + -0x16]
0061f7cb  CMP ECX,EDX
0061f7cd  JNZ 0x0061f7d5
0061f7cf  MOV byte ptr [EBP + -0x1d],0x1
0061f7d3  JMP 0x0061f7d7
0061f7d5  JMP 0x0061f776
0061f7d7  MOVZX EAX,byte ptr [EBP + -0x1d]
0061f7db  TEST EAX,EAX
0061f7dd  JNZ 0x0061f83b
0061f7df  MOV ECX,dword ptr [EBP + -0x2c]
0061f7e2  MOVZX EDX,word ptr [ECX + 0x308]
0061f7e9  IMUL EDX,EDX,0x3
0061f7ec  MOV EAX,dword ptr [EBP + -0xc]
0061f7ef  MOV CL,byte ptr [EBP + -0x18]
0061f7f2  MOV byte ptr [EAX + EDX*0x1],CL
0061f7f5  MOV EDX,dword ptr [EBP + -0x2c]
0061f7f8  MOVZX EAX,word ptr [EDX + 0x308]
0061f7ff  IMUL EAX,EAX,0x3
0061f802  MOV ECX,dword ptr [EBP + -0xc]
0061f805  MOV DL,byte ptr [EBP + -0x17]
0061f808  MOV byte ptr [ECX + EAX*0x1 + 0x1],DL
0061f80c  MOV EAX,dword ptr [EBP + -0x2c]
0061f80f  MOVZX ECX,word ptr [EAX + 0x308]
0061f816  IMUL ECX,ECX,0x3
0061f819  MOV EDX,dword ptr [EBP + -0xc]
0061f81c  MOV AL,byte ptr [EBP + -0x16]
0061f81f  MOV byte ptr [EDX + ECX*0x1 + 0x2],AL
0061f823  MOV ECX,dword ptr [EBP + -0x2c]
0061f826  MOV DX,word ptr [ECX + 0x308]
0061f82d  ADD DX,0x1
0061f831  MOV EAX,dword ptr [EBP + -0x2c]
0061f834  MOV word ptr [EAX + 0x308],DX
0061f83b  JMP 0x0061f6e8
0061f840  JMP 0x0061f6c2
0061f845  MOV ESP,EBP
0061f847  POP EBP
0061f848  RET 0xc

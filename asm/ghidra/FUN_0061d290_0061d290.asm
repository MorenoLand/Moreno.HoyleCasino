; FUN_0061d290  0061d290
0061d290  PUSH EBP
0061d291  MOV EBP,ESP
0061d293  SUB ESP,0x14
0061d296  MOV EAX,dword ptr [EBP + 0x1c]
0061d299  MOV byte ptr [EAX],0x0
0061d29c  MOV ECX,dword ptr [EBP + 0x20]
0061d29f  MOV byte ptr [ECX],0x0
0061d2a2  MOV EDX,dword ptr [EBP + 0x24]
0061d2a5  MOV byte ptr [EDX],0x1
0061d2a8  MOV EAX,dword ptr [EBP + 0xc]
0061d2ab  SHL EAX,0x4
0061d2ae  MOV ECX,dword ptr [EBP + 0x8]
0061d2b1  MOV EDX,dword ptr [EBP + 0x10]
0061d2b4  MOV ECX,dword ptr [EDX + ECX*0x8 + 0x4]
0061d2b8  MOVSX EDX,word ptr [ECX + EAX*0x1]
0061d2bc  CMP dword ptr [EBP + 0x14],EDX
0061d2bf  JL 0x0061d2c6
0061d2c1  JMP 0x0061d46f
0061d2c6  MOV EAX,dword ptr [EBP + 0xc]
0061d2c9  SHL EAX,0x4
0061d2cc  MOV ECX,dword ptr [EBP + 0x8]
0061d2cf  MOV EDX,dword ptr [EBP + 0x10]
0061d2d2  MOV ECX,dword ptr [EDX + ECX*0x8 + 0x4]
0061d2d6  MOVSX EDX,word ptr [ECX + EAX*0x1 + 0x2]
0061d2db  CMP dword ptr [EBP + 0x18],EDX
0061d2de  JL 0x0061d2e5
0061d2e0  JMP 0x0061d46f
0061d2e5  MOV EAX,dword ptr [EBP + 0x14]
0061d2e8  MOV dword ptr [EBP + -0xc],EAX
0061d2eb  MOV ECX,dword ptr [EBP + 0xc]
0061d2ee  SHL ECX,0x4
0061d2f1  MOV EDX,dword ptr [EBP + 0x8]
0061d2f4  MOV EAX,dword ptr [EBP + 0x10]
0061d2f7  MOV EDX,dword ptr [EAX + EDX*0x8 + 0x4]
0061d2fb  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xc]
0061d2ff  MOV ECX,dword ptr [EBP + 0x18]
0061d302  MOV EDX,dword ptr [EAX + ECX*0x4]
0061d305  MOV dword ptr [EBP + -0x4],EDX
0061d308  MOV EAX,dword ptr [EBP + 0x24]
0061d30b  MOV ECX,dword ptr [EBP + -0x4]
0061d30e  MOV DL,byte ptr [ECX]
0061d310  MOV byte ptr [EAX],DL
0061d312  MOV EAX,dword ptr [EBP + -0x4]
0061d315  ADD EAX,0x1
0061d318  MOV dword ptr [EBP + -0x4],EAX
0061d31b  MOV ECX,dword ptr [EBP + -0x4]
0061d31e  MOV DX,word ptr [ECX]
0061d321  MOV word ptr [EBP + -0x8],DX
0061d325  MOV EAX,dword ptr [EBP + -0x4]
0061d328  ADD EAX,0x2
0061d32b  MOV dword ptr [EBP + -0x4],EAX
0061d32e  MOVZX ECX,word ptr [EBP + -0x8]
0061d332  CMP dword ptr [EBP + -0xc],ECX
0061d335  JL 0x0061d3cd
0061d33b  MOVZX EDX,word ptr [EBP + -0x8]
0061d33f  TEST EDX,EDX
0061d341  JLE 0x0061d3cd
0061d347  MOVZX EAX,word ptr [EBP + -0x8]
0061d34b  MOV ECX,dword ptr [EBP + -0xc]
0061d34e  SUB ECX,EAX
0061d350  MOV dword ptr [EBP + -0xc],ECX
0061d353  MOV EDX,dword ptr [EBP + 0x24]
0061d356  MOVZX EAX,byte ptr [EDX]
0061d359  MOV dword ptr [EBP + -0x10],EAX
0061d35c  MOV ECX,dword ptr [EBP + -0x10]
0061d35f  SUB ECX,0x2
0061d362  MOV dword ptr [EBP + -0x10],ECX
0061d365  CMP dword ptr [EBP + -0x10],0x3e
0061d369  JA 0x0061d3a2
0061d36b  MOV EDX,dword ptr [EBP + -0x10]
0061d36e  MOVZX EAX,byte ptr [EDX + 0x61d484]
0061d375  JMP dword ptr [EAX*0x4 + 0x61d474]
0061d37e  MOVZX ECX,word ptr [EBP + -0x8]
0061d382  ADD ECX,dword ptr [EBP + -0x4]
0061d385  MOV dword ptr [EBP + -0x4],ECX
0061d388  JMP 0x0061d3a2
0061d38a  MOVZX EDX,word ptr [EBP + -0x8]
0061d38e  MOV EAX,dword ptr [EBP + -0x4]
0061d391  LEA ECX,[EAX + EDX*0x2]
0061d394  MOV dword ptr [EBP + -0x4],ECX
0061d397  JMP 0x0061d3a2
0061d399  MOV EDX,dword ptr [EBP + -0x4]
0061d39c  ADD EDX,0x1
0061d39f  MOV dword ptr [EBP + -0x4],EDX
0061d3a2  MOV EAX,dword ptr [EBP + 0x24]
0061d3a5  MOV ECX,dword ptr [EBP + -0x4]
0061d3a8  MOV DL,byte ptr [ECX]
0061d3aa  MOV byte ptr [EAX],DL
0061d3ac  MOV EAX,dword ptr [EBP + -0x4]
0061d3af  ADD EAX,0x1
0061d3b2  MOV dword ptr [EBP + -0x4],EAX
0061d3b5  MOV ECX,dword ptr [EBP + -0x4]
0061d3b8  MOV DX,word ptr [ECX]
0061d3bb  MOV word ptr [EBP + -0x8],DX
0061d3bf  MOV EAX,dword ptr [EBP + -0x4]
0061d3c2  ADD EAX,0x2
0061d3c5  MOV dword ptr [EBP + -0x4],EAX
0061d3c8  JMP 0x0061d32e
0061d3cd  MOVZX ECX,word ptr [EBP + -0x8]
0061d3d1  TEST ECX,ECX
0061d3d3  JLE 0x0061d463
0061d3d9  MOVZX EDX,word ptr [EBP + -0x8]
0061d3dd  SUB EDX,dword ptr [EBP + -0xc]
0061d3e0  MOV word ptr [EBP + -0x8],DX
0061d3e4  MOV EAX,dword ptr [EBP + 0x24]
0061d3e7  MOVZX ECX,byte ptr [EAX]
0061d3ea  MOV dword ptr [EBP + -0x14],ECX
0061d3ed  MOV EDX,dword ptr [EBP + -0x14]
0061d3f0  SUB EDX,0x1
0061d3f3  MOV dword ptr [EBP + -0x14],EDX
0061d3f6  CMP dword ptr [EBP + -0x14],0x3f
0061d3fa  JA 0x0061d461
0061d3fc  MOV EAX,dword ptr [EBP + -0x14]
0061d3ff  MOVZX ECX,byte ptr [EAX + 0x61d4d8]
0061d406  JMP dword ptr [ECX*0x4 + 0x61d4c4]
0061d40d  MOV EDX,dword ptr [EBP + 0x1c]
0061d410  MOV byte ptr [EDX],0x0
0061d413  JMP 0x0061d46f
0061d415  MOV EAX,dword ptr [EBP + -0x4]
0061d418  ADD EAX,dword ptr [EBP + -0xc]
0061d41b  MOV dword ptr [EBP + -0x4],EAX
0061d41e  MOV ECX,dword ptr [EBP + 0x1c]
0061d421  MOV EDX,dword ptr [EBP + -0x4]
0061d424  MOV AL,byte ptr [EDX]
0061d426  MOV byte ptr [ECX],AL
0061d428  JMP 0x0061d46f
0061d42a  MOV ECX,dword ptr [EBP + -0xc]
0061d42d  MOV EDX,dword ptr [EBP + -0x4]
0061d430  LEA EAX,[EDX + ECX*0x2]
0061d433  MOV dword ptr [EBP + -0x4],EAX
0061d436  MOV ECX,dword ptr [EBP + 0x1c]
0061d439  MOV EDX,dword ptr [EBP + -0x4]
0061d43c  MOV AL,byte ptr [EDX]
0061d43e  MOV byte ptr [ECX],AL
0061d440  MOV ECX,dword ptr [EBP + -0x4]
0061d443  ADD ECX,0x1
0061d446  MOV dword ptr [EBP + -0x4],ECX
0061d449  MOV EDX,dword ptr [EBP + 0x20]
0061d44c  MOV EAX,dword ptr [EBP + -0x4]
0061d44f  MOV CL,byte ptr [EAX]
0061d451  MOV byte ptr [EDX],CL
0061d453  JMP 0x0061d46f
0061d455  MOV EDX,dword ptr [EBP + 0x1c]
0061d458  MOV EAX,dword ptr [EBP + -0x4]
0061d45b  MOV CL,byte ptr [EAX]
0061d45d  MOV byte ptr [EDX],CL
0061d45f  JMP 0x0061d46f
0061d461  JMP 0x0061d46f
0061d463  MOV EDX,dword ptr [EBP + 0x1c]
0061d466  MOV byte ptr [EDX],0x0
0061d469  MOV EAX,dword ptr [EBP + 0x24]
0061d46c  MOV byte ptr [EAX],0x1
0061d46f  MOV ESP,EBP
0061d471  POP EBP
0061d472  RET

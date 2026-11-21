; FUN_0068e790  0068e790
0068e790  PUSH EBP
0068e791  MOV EBP,ESP
0068e793  SUB ESP,0x14
0068e796  MOV dword ptr [EBP + -0x14],ECX
0068e799  MOV EAX,dword ptr [EBP + -0x14]
0068e79c  CMP dword ptr [EAX],0x0
0068e79f  JNZ 0x0068e7a7
0068e7a1  CALL dword ptr [0x006b2274]
0068e7a7  MOV ECX,dword ptr [EBP + -0x14]
0068e7aa  MOV EDX,dword ptr [ECX + 0x4]
0068e7ad  MOVSX EAX,byte ptr [EDX + 0x35]
0068e7b1  TEST EAX,EAX
0068e7b3  JZ 0x0068e7c0
0068e7b5  CALL dword ptr [0x006b2274]
0068e7bb  JMP 0x0068e848
0068e7c0  MOV ECX,dword ptr [EBP + -0x14]
0068e7c3  MOV EDX,dword ptr [ECX + 0x4]
0068e7c6  ADD EDX,0x8
0068e7c9  MOV dword ptr [EBP + -0x8],EDX
0068e7cc  MOV EAX,dword ptr [EBP + -0x8]
0068e7cf  MOV ECX,dword ptr [EAX]
0068e7d1  MOVSX EDX,byte ptr [ECX + 0x35]
0068e7d5  TEST EDX,EDX
0068e7d7  JNZ 0x0068e80f
0068e7d9  MOV EAX,dword ptr [EBP + -0x14]
0068e7dc  MOV ECX,dword ptr [EAX + 0x4]
0068e7df  ADD ECX,0x8
0068e7e2  MOV dword ptr [EBP + -0xc],ECX
0068e7e5  MOV EDX,dword ptr [EBP + -0xc]
0068e7e8  MOV EAX,dword ptr [EDX]
0068e7ea  MOV dword ptr [EBP + -0x10],EAX
0068e7ed  MOV ECX,dword ptr [EBP + -0x10]
0068e7f0  MOV EDX,dword ptr [ECX]
0068e7f2  MOVSX EAX,byte ptr [EDX + 0x35]
0068e7f6  TEST EAX,EAX
0068e7f8  JNZ 0x0068e804
0068e7fa  MOV ECX,dword ptr [EBP + -0x10]
0068e7fd  MOV EDX,dword ptr [ECX]
0068e7ff  MOV dword ptr [EBP + -0x10],EDX
0068e802  JMP 0x0068e7ed
0068e804  MOV EAX,dword ptr [EBP + -0x14]
0068e807  MOV ECX,dword ptr [EBP + -0x10]
0068e80a  MOV dword ptr [EAX + 0x4],ECX
0068e80d  JMP 0x0068e848
0068e80f  MOV EDX,dword ptr [EBP + -0x14]
0068e812  MOV EAX,dword ptr [EDX + 0x4]
0068e815  MOV ECX,dword ptr [EAX + 0x4]
0068e818  MOV dword ptr [EBP + -0x4],ECX
0068e81b  MOV EDX,dword ptr [EBP + -0x4]
0068e81e  MOVSX EAX,byte ptr [EDX + 0x35]
0068e822  TEST EAX,EAX
0068e824  JNZ 0x0068e83f
0068e826  MOV ECX,dword ptr [EBP + -0x14]
0068e829  MOV EDX,dword ptr [EBP + -0x4]
0068e82c  MOV EAX,dword ptr [ECX + 0x4]
0068e82f  CMP EAX,dword ptr [EDX + 0x8]
0068e832  JNZ 0x0068e83f
0068e834  MOV ECX,dword ptr [EBP + -0x14]
0068e837  MOV EDX,dword ptr [EBP + -0x4]
0068e83a  MOV dword ptr [ECX + 0x4],EDX
0068e83d  JMP 0x0068e80f
0068e83f  MOV EAX,dword ptr [EBP + -0x14]
0068e842  MOV ECX,dword ptr [EBP + -0x4]
0068e845  MOV dword ptr [EAX + 0x4],ECX
0068e848  MOV ESP,EBP
0068e84a  POP EBP
0068e84b  RET

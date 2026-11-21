; FUN_0062c0c0  0062c0c0
0062c0c0  PUSH EBP
0062c0c1  MOV EBP,ESP
0062c0c3  SUB ESP,0x1c
0062c0c6  PUSH ESI
0062c0c7  MOV dword ptr [EBP + -0x14],ECX
0062c0ca  MOV EAX,dword ptr [EBP + -0x14]
0062c0cd  CMP dword ptr [EAX + 0x8],0x0
0062c0d1  JZ 0x0062c0f5
0062c0d3  XOR ECX,ECX
0062c0d5  JNZ 0x0062c0ee
0062c0d7  PUSH 0x242
0062c0dc  PUSH 0x6d974c
0062c0e1  PUSH 0x6b2f58
0062c0e6  CALL 0x005e9f20
0062c0eb  ADD ESP,0xc
0062c0ee  XOR AL,AL
0062c0f0  JMP 0x0062c36a
0062c0f5  CMP dword ptr [EBP + 0x8],0x0
0062c0f9  JNZ 0x0062c102
0062c0fb  XOR AL,AL
0062c0fd  JMP 0x0062c36a
0062c102  MOV EAX,dword ptr [EBP + -0x14]
0062c105  MOV ECX,dword ptr [EAX + 0xc]
0062c108  PUSH ECX
0062c109  CALL dword ptr [0x006b21a4]
0062c10f  ADD ESP,0x4
0062c112  MOV EDX,dword ptr [EBP + 0x10]
0062c115  PUSH EDX
0062c116  MOV EAX,dword ptr [EBP + 0xc]
0062c119  PUSH EAX
0062c11a  MOV ECX,dword ptr [EBP + -0x14]
0062c11d  CALL 0x0062c820
0062c122  MOV ECX,dword ptr [EBP + -0x14]
0062c125  MOV EDX,dword ptr [ECX + 0x14]
0062c128  MOV EAX,dword ptr [EDX]
0062c12a  MOV dword ptr [EBP + -0x4],EAX
0062c12d  MOV ECX,dword ptr [EBP + -0x14]
0062c130  MOV EDX,dword ptr [ECX + 0x10]
0062c133  MOV EAX,dword ptr [EDX + 0x10]
0062c136  ADD EAX,0x10
0062c139  PUSH EAX
0062c13a  CALL 0x00686d82
0062c13f  ADD ESP,0x4
0062c142  MOV dword ptr [EBP + -0xc],EAX
0062c145  MOV ECX,dword ptr [EBP + -0xc]
0062c148  MOV dword ptr [EBP + -0x8],ECX
0062c14b  MOV EDX,dword ptr [EBP + -0x14]
0062c14e  MOV EAX,dword ptr [EDX + 0x10]
0062c151  MOV ECX,dword ptr [EAX + 0x10]
0062c154  PUSH ECX
0062c155  MOV EDX,dword ptr [EBP + -0x14]
0062c158  MOV EAX,dword ptr [EDX + 0x14]
0062c15b  PUSH EAX
0062c15c  MOV ECX,dword ptr [EBP + -0x8]
0062c15f  PUSH ECX
0062c160  CALL 0x00686fde
0062c165  ADD ESP,0xc
0062c168  MOV EDX,dword ptr [EBP + -0x14]
0062c16b  MOV EAX,dword ptr [EDX + 0x14]
0062c16e  MOV dword ptr [EBP + -0x10],EAX
0062c171  MOV ECX,dword ptr [EBP + -0x10]
0062c174  PUSH ECX
0062c175  CALL 0x00686cae
0062c17a  ADD ESP,0x4
0062c17d  MOV EDX,dword ptr [EBP + -0x14]
0062c180  MOV EAX,dword ptr [EBP + -0x8]
0062c183  MOV dword ptr [EDX + 0x14],EAX
0062c186  MOV ECX,dword ptr [EBP + -0x14]
0062c189  MOV EDX,dword ptr [ECX + 0x10]
0062c18c  MOV EAX,dword ptr [EDX + 0x10]
0062c18f  ADD EAX,0x10
0062c192  MOV ECX,dword ptr [EBP + -0x14]
0062c195  MOV EDX,dword ptr [ECX + 0x10]
0062c198  MOV dword ptr [EDX + 0x10],EAX
0062c19b  MOV EAX,dword ptr [EBP + -0x14]
0062c19e  MOV ECX,dword ptr [EAX + 0x14]
0062c1a1  MOV EDX,dword ptr [ECX]
0062c1a3  ADD EDX,0x1
0062c1a6  MOV EAX,dword ptr [EBP + -0x14]
0062c1a9  MOV ECX,dword ptr [EAX + 0x14]
0062c1ac  MOV dword ptr [ECX],EDX
0062c1ae  MOV EDX,dword ptr [EBP + -0x14]
0062c1b1  MOV EAX,dword ptr [EDX + 0x14]
0062c1b4  MOV ECX,dword ptr [EBP + -0x4]
0062c1b7  SHL ECX,0x4
0062c1ba  MOV EDX,dword ptr [EBP + 0xc]
0062c1bd  MOV dword ptr [EAX + ECX*0x1 + 0x8],EDX
0062c1c1  MOV EAX,dword ptr [EBP + -0x14]
0062c1c4  MOV ECX,dword ptr [EAX + 0x14]
0062c1c7  MOV EDX,dword ptr [EBP + -0x4]
0062c1ca  SHL EDX,0x4
0062c1cd  MOV EAX,dword ptr [EBP + 0x10]
0062c1d0  MOV dword ptr [ECX + EDX*0x1 + 0xc],EAX
0062c1d4  MOV ECX,dword ptr [EBP + -0x14]
0062c1d7  MOV EDX,dword ptr [ECX + 0x14]
0062c1da  MOV EAX,dword ptr [EBP + -0x4]
0062c1dd  SUB EAX,0x1
0062c1e0  SHL EAX,0x4
0062c1e3  MOV ECX,dword ptr [EBP + -0x14]
0062c1e6  MOV ECX,dword ptr [ECX + 0x14]
0062c1e9  MOV ESI,dword ptr [EBP + -0x4]
0062c1ec  SUB ESI,0x1
0062c1ef  SHL ESI,0x4
0062c1f2  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x10]
0062c1f6  ADD EDX,dword ptr [ECX + ESI*0x1 + 0x14]
0062c1fa  MOV EAX,dword ptr [EBP + -0x14]
0062c1fd  MOV ECX,dword ptr [EAX + 0x14]
0062c200  MOV EAX,dword ptr [EBP + -0x4]
0062c203  SHL EAX,0x4
0062c206  MOV dword ptr [ECX + EAX*0x1 + 0x10],EDX
0062c20a  MOV ECX,dword ptr [EBP + -0x14]
0062c20d  MOV EDX,dword ptr [ECX + 0x14]
0062c210  CMP dword ptr [EDX + 0x4],0x0
0062c214  JZ 0x0062c23f
0062c216  CMP dword ptr [EBP + 0x14],0x0
0062c21a  JZ 0x0062c230
0062c21c  MOV EAX,dword ptr [EBP + 0x14]
0062c21f  PUSH EAX
0062c220  CALL 0x00686ecc
0062c225  ADD ESP,0x4
0062c228  ADD EAX,0x1
0062c22b  MOV dword ptr [EBP + -0x18],EAX
0062c22e  JMP 0x0062c237
0062c230  MOV dword ptr [EBP + -0x18],0x1
0062c237  MOV ECX,dword ptr [EBP + -0x18]
0062c23a  MOV dword ptr [EBP + -0x1c],ECX
0062c23d  JMP 0x0062c246
0062c23f  MOV dword ptr [EBP + -0x1c],0x0
0062c246  MOV EDX,dword ptr [EBP + 0x8]
0062c249  PUSH EDX
0062c24a  CALL 0x005e9fd0
0062c24f  ADD ESP,0x4
0062c252  ADD EAX,dword ptr [EBP + -0x1c]
0062c255  MOV ECX,dword ptr [EBP + -0x14]
0062c258  MOV EDX,dword ptr [ECX + 0x14]
0062c25b  MOV ECX,dword ptr [EBP + -0x4]
0062c25e  SHL ECX,0x4
0062c261  MOV dword ptr [EDX + ECX*0x1 + 0x14],EAX
0062c265  MOV EDX,dword ptr [EBP + -0x14]
0062c268  MOV EAX,dword ptr [EDX + 0x10]
0062c26b  MOV ECX,dword ptr [EBP + -0x14]
0062c26e  MOV EDX,dword ptr [ECX + 0x14]
0062c271  MOV ECX,dword ptr [EBP + -0x4]
0062c274  SHL ECX,0x4
0062c277  MOV EAX,dword ptr [EAX + 0x14]
0062c27a  ADD EAX,dword ptr [EDX + ECX*0x1 + 0x14]
0062c27e  MOV ECX,dword ptr [EBP + -0x14]
0062c281  MOV EDX,dword ptr [ECX + 0x10]
0062c284  MOV dword ptr [EDX + 0x14],EAX
0062c287  PUSH 0x0
0062c289  MOV EAX,dword ptr [EBP + -0x14]
0062c28c  MOV ECX,dword ptr [EAX + 0x14]
0062c28f  MOV EDX,dword ptr [EBP + -0x4]
0062c292  SHL EDX,0x4
0062c295  MOV EAX,dword ptr [ECX + EDX*0x1 + 0x10]
0062c299  PUSH EAX
0062c29a  MOV ECX,dword ptr [EBP + -0x14]
0062c29d  MOV EDX,dword ptr [ECX + 0xc]
0062c2a0  PUSH EDX
0062c2a1  CALL dword ptr [0x006b230c]
0062c2a7  ADD ESP,0xc
0062c2aa  MOV EAX,dword ptr [EBP + -0x14]
0062c2ad  MOV ECX,dword ptr [EAX + 0x14]
0062c2b0  CMP dword ptr [ECX + 0x4],0x0
0062c2b4  JZ 0x0062c2f6
0062c2b6  CMP dword ptr [EBP + 0x14],0x0
0062c2ba  JZ 0x0062c2e4
0062c2bc  MOV EDX,dword ptr [EBP + -0x14]
0062c2bf  MOV EAX,dword ptr [EDX + 0xc]
0062c2c2  PUSH EAX
0062c2c3  PUSH 0x1
0062c2c5  MOV ECX,dword ptr [EBP + 0x14]
0062c2c8  PUSH ECX
0062c2c9  CALL 0x00686ecc
0062c2ce  ADD ESP,0x4
0062c2d1  ADD EAX,0x1
0062c2d4  PUSH EAX
0062c2d5  MOV EDX,dword ptr [EBP + 0x14]
0062c2d8  PUSH EDX
0062c2d9  CALL dword ptr [0x006b2260]
0062c2df  ADD ESP,0x10
0062c2e2  JMP 0x0062c2f6
0062c2e4  MOV EAX,dword ptr [EBP + -0x14]
0062c2e7  MOV ECX,dword ptr [EAX + 0xc]
0062c2ea  PUSH ECX
0062c2eb  PUSH 0x0
0062c2ed  CALL dword ptr [0x006b22ec]
0062c2f3  ADD ESP,0x8
0062c2f6  MOV EDX,dword ptr [EBP + 0x8]
0062c2f9  PUSH EDX
0062c2fa  CALL 0x005e9fd0
0062c2ff  ADD ESP,0x4
0062c302  PUSH EAX
0062c303  MOV EAX,dword ptr [EBP + 0x8]
0062c306  PUSH EAX
0062c307  MOV ECX,dword ptr [EBP + -0x14]
0062c30a  MOV EDX,dword ptr [ECX + 0xc]
0062c30d  PUSH EDX
0062c30e  CALL 0x0062bd60
0062c313  ADD ESP,0xc
0062c316  MOV EAX,dword ptr [EBP + -0x14]
0062c319  MOV ECX,dword ptr [EAX + 0xc]
0062c31c  PUSH ECX
0062c31d  PUSH 0x1
0062c31f  MOV EDX,dword ptr [EBP + -0x14]
0062c322  MOV EAX,dword ptr [EDX + 0x10]
0062c325  MOV ECX,dword ptr [EAX + 0x10]
0062c328  PUSH ECX
0062c329  MOV EDX,dword ptr [EBP + -0x14]
0062c32c  MOV EAX,dword ptr [EDX + 0x14]
0062c32f  PUSH EAX
0062c330  CALL dword ptr [0x006b2260]
0062c336  ADD ESP,0x10
0062c339  PUSH 0x0
0062c33b  PUSH 0x0
0062c33d  MOV ECX,dword ptr [EBP + -0x14]
0062c340  MOV EDX,dword ptr [ECX + 0xc]
0062c343  PUSH EDX
0062c344  CALL dword ptr [0x006b230c]
0062c34a  ADD ESP,0xc
0062c34d  MOV EAX,dword ptr [EBP + -0x14]
0062c350  MOV ECX,dword ptr [EAX + 0xc]
0062c353  PUSH ECX
0062c354  PUSH 0x1
0062c356  PUSH 0x18
0062c358  MOV EDX,dword ptr [EBP + -0x14]
0062c35b  MOV EAX,dword ptr [EDX + 0x10]
0062c35e  PUSH EAX
0062c35f  CALL dword ptr [0x006b2260]
0062c365  ADD ESP,0x10
0062c368  MOV AL,0x1
0062c36a  POP ESI
0062c36b  MOV ESP,EBP
0062c36d  POP EBP
0062c36e  RET 0x10

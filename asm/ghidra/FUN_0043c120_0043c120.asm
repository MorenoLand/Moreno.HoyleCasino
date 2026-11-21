; FUN_0043c120  0043c120
0043c120  PUSH EBP
0043c121  MOV EBP,ESP
0043c123  SUB ESP,0x198
0043c129  MOV EAX,[0x00781870]
0043c12e  XOR EAX,EBP
0043c130  MOV dword ptr [EBP + -0x10],EAX
0043c133  PUSH ESI
0043c134  MOV dword ptr [EBP + 0xfffffe98],ECX
0043c13a  MOV EAX,dword ptr [EBP + 0x8]
0043c13d  CMP dword ptr [EAX],0x0
0043c140  JL 0x0043c156
0043c142  MOV ECX,dword ptr [EBP + 0x8]
0043c145  CMP dword ptr [ECX],0x0
0043c148  JL 0x0043c156
0043c14a  MOV dword ptr [EBP + 0xfffffe94],0x1
0043c154  JMP 0x0043c160
0043c156  MOV dword ptr [EBP + 0xfffffe94],0x0
0043c160  MOV DL,byte ptr [EBP + 0xfffffe94]
0043c166  MOV byte ptr [EBP + 0xfffffee3],DL
0043c16c  MOV EAX,[0x007906d0]
0043c171  MOV EDX,dword ptr [EAX]
0043c173  MOV ECX,dword ptr [0x007906d0]
0043c179  MOV EAX,dword ptr [EDX + 0x25c]
0043c17f  CALL EAX
0043c181  MOV dword ptr [EBP + 0xfffffee4],EAX
0043c187  CMP dword ptr [EBP + 0xfffffee4],0x0
0043c18e  JNZ 0x0043c195
0043c190  JMP 0x0043cd21
0043c195  MOV ECX,dword ptr [0x007906d0]
0043c19b  MOV EDX,dword ptr [ECX]
0043c19d  MOV ECX,dword ptr [0x007906d0]
0043c1a3  MOV EAX,dword ptr [EDX + 0x2b0]
0043c1a9  CALL EAX
0043c1ab  MOV dword ptr [EBP + -0xc],EAX
0043c1ae  PUSH 0x0
0043c1b0  PUSH 0x0
0043c1b2  CALL 0x0064c8a0
0043c1b7  ADD ESP,0x8
0043c1ba  MOV dword ptr [EBP + 0xfffffeb8],EAX
0043c1c0  MOV dword ptr [EBP + 0xfffffebc],EDX
0043c1c6  MOV ECX,dword ptr [EBP + 0xfffffeb8]
0043c1cc  MOV dword ptr [EBP + 0xfffffee8],ECX
0043c1d2  MOV EDX,dword ptr [EBP + 0xfffffebc]
0043c1d8  MOV dword ptr [EBP + 0xfffffeec],EDX
0043c1de  MOV EAX,dword ptr [EBP + 0x8]
0043c1e1  MOV ECX,dword ptr [EAX + 0x4]
0043c1e4  PUSH ECX
0043c1e5  MOV EDX,dword ptr [EBP + 0x8]
0043c1e8  MOV EAX,dword ptr [EDX]
0043c1ea  PUSH EAX
0043c1eb  PUSH 0x6b81a8
0043c1f0  LEA ECX,[EBP + 0xfffffef0]
0043c1f6  PUSH ECX
0043c1f7  CALL dword ptr [0x006b2220]
0043c1fd  ADD ESP,0x10
0043c200  LEA EDX,[EBP + 0xfffffef0]
0043c206  PUSH EDX
0043c207  CALL 0x0062fde0
0043c20c  ADD ESP,0x4
0043c20f  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c215  CALL 0x005f5400
0043c21a  CMP EAX,0x2b
0043c21d  JZ 0x0043c253
0043c21f  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c225  CALL 0x005f5400
0043c22a  CMP EAX,0x2c
0043c22d  JZ 0x0043c253
0043c22f  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c235  CALL 0x005f5400
0043c23a  CMP EAX,0x2f
0043c23d  JZ 0x0043c253
0043c23f  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c245  CALL 0x005f5400
0043c24a  CMP EAX,0x30
0043c24d  JNZ 0x0043c36a
0043c253  MOV EAX,dword ptr [EBP + 0x8]
0043c256  CMP dword ptr [EAX],0x0
0043c259  JNZ 0x0043c31e
0043c25f  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c265  CMP dword ptr [ECX + 0x4bc],0x0
0043c26c  JLE 0x0043c2ea
0043c26e  MOV EDX,dword ptr [EBP + -0xc]
0043c271  IMUL EDX,EDX,0x5
0043c274  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c27a  CMP dword ptr [EAX + 0x4bc],EDX
0043c280  JLE 0x0043c2ad
0043c282  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c288  MOV EAX,dword ptr [ECX + 0x4bc]
0043c28e  CDQ
0043c28f  MOV ECX,0x5
0043c294  IDIV ECX
0043c296  TEST EDX,EDX
0043c298  JNZ 0x0043c2ad
0043c29a  MOV EDX,dword ptr [EBP + 0x8]
0043c29d  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c2a3  MOV ECX,dword ptr [EAX + 0x4bc]
0043c2a9  MOV dword ptr [EDX],ECX
0043c2ab  JMP 0x0043c2e8
0043c2ad  MOV EDX,dword ptr [EBP + 0x8]
0043c2b0  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c2b6  MOV ECX,dword ptr [EAX + 0x4bc]
0043c2bc  MOV dword ptr [EDX],ECX
0043c2be  MOV EDX,dword ptr [EBP + 0x8]
0043c2c1  MOV EAX,dword ptr [EDX]
0043c2c3  CDQ
0043c2c4  MOV ECX,0x5
0043c2c9  IDIV ECX
0043c2cb  TEST EDX,EDX
0043c2cd  JNZ 0x0043c2d9
0043c2cf  MOV EDX,dword ptr [EBP + 0x8]
0043c2d2  MOV EAX,dword ptr [EDX]
0043c2d4  CMP EAX,dword ptr [EBP + -0xc]
0043c2d7  JGE 0x0043c2e8
0043c2d9  MOV ECX,dword ptr [EBP + 0x8]
0043c2dc  MOV EDX,dword ptr [ECX]
0043c2de  ADD EDX,0x1
0043c2e1  MOV EAX,dword ptr [EBP + 0x8]
0043c2e4  MOV dword ptr [EAX],EDX
0043c2e6  JMP 0x0043c2be
0043c2e8  JMP 0x0043c31c
0043c2ea  MOV ECX,dword ptr [EBP + 0x8]
0043c2ed  MOV EDX,dword ptr [EBP + -0xc]
0043c2f0  MOV dword ptr [ECX],EDX
0043c2f2  MOV EAX,dword ptr [EBP + 0x8]
0043c2f5  MOV EAX,dword ptr [EAX]
0043c2f7  CDQ
0043c2f8  MOV ECX,0x5
0043c2fd  IDIV ECX
0043c2ff  TEST EDX,EDX
0043c301  JNZ 0x0043c30d
0043c303  MOV EDX,dword ptr [EBP + 0x8]
0043c306  MOV EAX,dword ptr [EDX]
0043c308  CMP EAX,dword ptr [EBP + -0xc]
0043c30b  JGE 0x0043c31c
0043c30d  MOV ECX,dword ptr [EBP + 0x8]
0043c310  MOV EDX,dword ptr [ECX]
0043c312  ADD EDX,0x1
0043c315  MOV EAX,dword ptr [EBP + 0x8]
0043c318  MOV dword ptr [EAX],EDX
0043c31a  JMP 0x0043c2f2
0043c31c  JMP 0x0043c36a
0043c31e  MOV ECX,dword ptr [EBP + 0x8]
0043c321  CMP dword ptr [ECX],0x0
0043c324  JGE 0x0043c36a
0043c326  MOV EDX,dword ptr [EBP + 0x8]
0043c329  MOV EAX,dword ptr [EDX]
0043c32b  IMUL EAX,EAX,-0x1
0043c32e  MOV ECX,dword ptr [EBP + 0x8]
0043c331  MOV dword ptr [ECX],EAX
0043c333  MOV EDX,dword ptr [EBP + 0x8]
0043c336  MOV EAX,dword ptr [EDX]
0043c338  CDQ
0043c339  MOV ECX,0x5
0043c33e  IDIV ECX
0043c340  TEST EDX,EDX
0043c342  JNZ 0x0043c34e
0043c344  MOV EDX,dword ptr [EBP + 0x8]
0043c347  MOV EAX,dword ptr [EDX]
0043c349  CMP EAX,dword ptr [EBP + -0xc]
0043c34c  JGE 0x0043c35d
0043c34e  MOV ECX,dword ptr [EBP + 0x8]
0043c351  MOV EDX,dword ptr [ECX]
0043c353  ADD EDX,0x1
0043c356  MOV EAX,dword ptr [EBP + 0x8]
0043c359  MOV dword ptr [EAX],EDX
0043c35b  JMP 0x0043c333
0043c35d  MOV ECX,dword ptr [EBP + 0x8]
0043c360  MOV EDX,dword ptr [ECX]
0043c362  IMUL EDX,EDX,-0x1
0043c365  MOV EAX,dword ptr [EBP + 0x8]
0043c368  MOV dword ptr [EAX],EDX
0043c36a  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c370  CALL 0x005f5400
0043c375  CMP EAX,0x2d
0043c378  JZ 0x0043c38e
0043c37a  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c380  CALL 0x005f5400
0043c385  CMP EAX,0x2e
0043c388  JNZ 0x0043c4a5
0043c38e  MOV ECX,dword ptr [EBP + 0x8]
0043c391  CMP dword ptr [ECX],0x0
0043c394  JNZ 0x0043c459
0043c39a  MOV EDX,dword ptr [EBP + 0xfffffee4]
0043c3a0  CMP dword ptr [EDX + 0x4bc],0x0
0043c3a7  JLE 0x0043c425
0043c3a9  MOV EAX,dword ptr [EBP + -0xc]
0043c3ac  IMUL EAX,EAX,0x6
0043c3af  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c3b5  CMP dword ptr [ECX + 0x4bc],EAX
0043c3bb  JLE 0x0043c3e8
0043c3bd  MOV EDX,dword ptr [EBP + 0xfffffee4]
0043c3c3  MOV EAX,dword ptr [EDX + 0x4bc]
0043c3c9  CDQ
0043c3ca  MOV ECX,0x6
0043c3cf  IDIV ECX
0043c3d1  TEST EDX,EDX
0043c3d3  JNZ 0x0043c3e8
0043c3d5  MOV EDX,dword ptr [EBP + 0x8]
0043c3d8  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c3de  MOV ECX,dword ptr [EAX + 0x4bc]
0043c3e4  MOV dword ptr [EDX],ECX
0043c3e6  JMP 0x0043c423
0043c3e8  MOV EDX,dword ptr [EBP + 0x8]
0043c3eb  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c3f1  MOV ECX,dword ptr [EAX + 0x4bc]
0043c3f7  MOV dword ptr [EDX],ECX
0043c3f9  MOV EDX,dword ptr [EBP + 0x8]
0043c3fc  MOV EAX,dword ptr [EDX]
0043c3fe  CDQ
0043c3ff  MOV ECX,0x6
0043c404  IDIV ECX
0043c406  TEST EDX,EDX
0043c408  JNZ 0x0043c414
0043c40a  MOV EDX,dword ptr [EBP + 0x8]
0043c40d  MOV EAX,dword ptr [EDX]
0043c40f  CMP EAX,dword ptr [EBP + -0xc]
0043c412  JGE 0x0043c423
0043c414  MOV ECX,dword ptr [EBP + 0x8]
0043c417  MOV EDX,dword ptr [ECX]
0043c419  ADD EDX,0x1
0043c41c  MOV EAX,dword ptr [EBP + 0x8]
0043c41f  MOV dword ptr [EAX],EDX
0043c421  JMP 0x0043c3f9
0043c423  JMP 0x0043c457
0043c425  MOV ECX,dword ptr [EBP + 0x8]
0043c428  MOV EDX,dword ptr [EBP + -0xc]
0043c42b  MOV dword ptr [ECX],EDX
0043c42d  MOV EAX,dword ptr [EBP + 0x8]
0043c430  MOV EAX,dword ptr [EAX]
0043c432  CDQ
0043c433  MOV ECX,0x6
0043c438  IDIV ECX
0043c43a  TEST EDX,EDX
0043c43c  JNZ 0x0043c448
0043c43e  MOV EDX,dword ptr [EBP + 0x8]
0043c441  MOV EAX,dword ptr [EDX]
0043c443  CMP EAX,dword ptr [EBP + -0xc]
0043c446  JGE 0x0043c457
0043c448  MOV ECX,dword ptr [EBP + 0x8]
0043c44b  MOV EDX,dword ptr [ECX]
0043c44d  ADD EDX,0x1
0043c450  MOV EAX,dword ptr [EBP + 0x8]
0043c453  MOV dword ptr [EAX],EDX
0043c455  JMP 0x0043c42d
0043c457  JMP 0x0043c4a5
0043c459  MOV ECX,dword ptr [EBP + 0x8]
0043c45c  CMP dword ptr [ECX],0x0
0043c45f  JGE 0x0043c4a5
0043c461  MOV EDX,dword ptr [EBP + 0x8]
0043c464  MOV EAX,dword ptr [EDX]
0043c466  IMUL EAX,EAX,-0x1
0043c469  MOV ECX,dword ptr [EBP + 0x8]
0043c46c  MOV dword ptr [ECX],EAX
0043c46e  MOV EDX,dword ptr [EBP + 0x8]
0043c471  MOV EAX,dword ptr [EDX]
0043c473  CDQ
0043c474  MOV ECX,0x6
0043c479  IDIV ECX
0043c47b  TEST EDX,EDX
0043c47d  JNZ 0x0043c489
0043c47f  MOV EDX,dword ptr [EBP + 0x8]
0043c482  MOV EAX,dword ptr [EDX]
0043c484  CMP EAX,dword ptr [EBP + -0xc]
0043c487  JGE 0x0043c498
0043c489  MOV ECX,dword ptr [EBP + 0x8]
0043c48c  MOV EDX,dword ptr [ECX]
0043c48e  ADD EDX,0x1
0043c491  MOV EAX,dword ptr [EBP + 0x8]
0043c494  MOV dword ptr [EAX],EDX
0043c496  JMP 0x0043c46e
0043c498  MOV ECX,dword ptr [EBP + 0x8]
0043c49b  MOV EDX,dword ptr [ECX]
0043c49d  IMUL EDX,EDX,-0x1
0043c4a0  MOV EAX,dword ptr [EBP + 0x8]
0043c4a3  MOV dword ptr [EAX],EDX
0043c4a5  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c4ab  CALL 0x005f5400
0043c4b0  PUSH EAX
0043c4b1  MOV ECX,dword ptr [0x007906d4]
0043c4b7  CALL 0x00435ca0
0043c4bc  MOVZX ECX,AL
0043c4bf  TEST ECX,ECX
0043c4c1  JNZ 0x0043c4e5
0043c4c3  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c4c9  CALL 0x005f5400
0043c4ce  PUSH EAX
0043c4cf  MOV ECX,dword ptr [0x007906d4]
0043c4d5  CALL 0x00435cf0
0043c4da  MOVZX EDX,AL
0043c4dd  TEST EDX,EDX
0043c4df  JZ 0x0043c6f3
0043c4e5  MOV EAX,dword ptr [EBP + 0x8]
0043c4e8  CMP dword ptr [EAX],0x0
0043c4eb  JNZ 0x0043c6f3
0043c4f1  MOVZX ECX,byte ptr [EBP + 0xfffffee3]
0043c4f8  TEST ECX,ECX
0043c4fa  JZ 0x0043c6f3
0043c500  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c506  CALL 0x005d5a50
0043c50b  TEST EAX,EAX
0043c50d  JZ 0x0043c6f3
0043c513  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c519  CALL 0x0063aac0
0043c51e  MOV EDX,dword ptr [EAX]
0043c520  MOV dword ptr [EBP + 0xfffffeac],EDX
0043c526  CMP dword ptr [EBP + 0xfffffeac],0x2
0043c52d  JZ 0x0043c557
0043c52f  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c535  CALL 0x0063aac0
0043c53a  MOV EAX,dword ptr [EAX]
0043c53c  MOV dword ptr [EBP + 0xfffffea8],EAX
0043c542  CMP dword ptr [EBP + 0xfffffea8],0x3
0043c549  JZ 0x0043c557
0043c54b  MOV dword ptr [EBP + 0xfffffe90],0x0
0043c555  JMP 0x0043c561
0043c557  MOV dword ptr [EBP + 0xfffffe90],0x1
0043c561  MOVZX ECX,byte ptr [EBP + 0xfffffe90]
0043c568  TEST ECX,ECX
0043c56a  JZ 0x0043c5ad
0043c56c  MOV ECX,dword ptr [0x007906d4]
0043c572  CALL 0x004342d0
0043c577  MOVZX EDX,AL
0043c57a  TEST EDX,EDX
0043c57c  JZ 0x0043c5ad
0043c57e  MOV EAX,dword ptr [EBP + 0xfffffe98]
0043c584  PUSH EAX
0043c585  MOV ECX,dword ptr [0x007906d4]
0043c58b  CALL 0x00434820
0043c590  PUSH EAX
0043c591  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c597  MOV EDX,dword ptr [ECX + 0x4]
0043c59a  PUSH EDX
0043c59b  MOV ECX,dword ptr [0x007906d4]
0043c5a1  CALL 0x00436570
0043c5a6  MOV ECX,dword ptr [EBP + 0x8]
0043c5a9  MOV dword ptr [ECX],EAX
0043c5ab  JMP 0x0043c5be
0043c5ad  MOV EDX,dword ptr [EBP + 0x8]
0043c5b0  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c5b6  MOV ECX,dword ptr [EAX + 0x4bc]
0043c5bc  MOV dword ptr [EDX],ECX
0043c5be  MOV EDX,dword ptr [EBP + 0xfffffee4]
0043c5c4  MOV EAX,dword ptr [EDX + 0x4]
0043c5c7  MOV dword ptr [EBP + 0xfffffea4],EAX
0043c5cd  MOV ECX,dword ptr [EBP + 0xfffffea4]
0043c5d3  SHL ECX,0x5
0043c5d6  MOV EDX,dword ptr [EBP + 0xfffffe98]
0043c5dc  LEA EAX,[EDX + ECX*0x1 + 0x48]
0043c5e0  XOR ECX,ECX
0043c5e2  SHL ECX,0x3
0043c5e5  MOV EDX,dword ptr [EAX + ECX*0x1]
0043c5e8  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
0043c5ec  MOV dword ptr [EBP + -0x8],EDX
0043c5ef  MOV dword ptr [EBP + -0x4],EAX
0043c5f2  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c5f8  PUSH ECX
0043c5f9  MOV ECX,dword ptr [0x007906d4]
0043c5ff  CALL 0x00434820
0043c604  PUSH EAX
0043c605  MOV EDX,dword ptr [EBP + 0xfffffee4]
0043c60b  MOV EAX,dword ptr [EDX + 0x4]
0043c60e  PUSH EAX
0043c60f  MOV ECX,dword ptr [0x007906d4]
0043c615  CALL 0x00436570
0043c61a  CMP dword ptr [EBP + -0x8],EAX
0043c61d  JNZ 0x0043c624
0043c61f  JMP 0x0043cd21
0043c624  MOV ECX,dword ptr [EBP + 0x8]
0043c627  MOV ESI,dword ptr [EBP + -0x8]
0043c62a  ADD ESI,dword ptr [ECX]
0043c62c  MOV EDX,dword ptr [EBP + 0xfffffe98]
0043c632  PUSH EDX
0043c633  MOV ECX,dword ptr [0x007906d4]
0043c639  CALL 0x00434820
0043c63e  PUSH EAX
0043c63f  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c645  MOV ECX,dword ptr [EAX + 0x4]
0043c648  PUSH ECX
0043c649  MOV ECX,dword ptr [0x007906d4]
0043c64f  CALL 0x00436570
0043c654  CMP ESI,EAX
0043c656  JLE 0x0043c6b4
0043c658  MOV EDX,dword ptr [EBP + 0xfffffe98]
0043c65e  PUSH EDX
0043c65f  MOV ECX,dword ptr [0x007906d4]
0043c665  CALL 0x00434820
0043c66a  PUSH EAX
0043c66b  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c671  MOV ECX,dword ptr [EAX + 0x4]
0043c674  PUSH ECX
0043c675  MOV ECX,dword ptr [0x007906d4]
0043c67b  CALL 0x00436570
0043c680  SUB EAX,dword ptr [EBP + -0x8]
0043c683  MOV EDX,dword ptr [EBP + 0x8]
0043c686  MOV dword ptr [EDX],EAX
0043c688  MOV EAX,dword ptr [EBP + 0x8]
0043c68b  CMP dword ptr [EAX],0x0
0043c68e  JG 0x0043c6a7
0043c690  PUSH 0xac1
0043c695  PUSH 0x6b7f20
0043c69a  PUSH 0x6b8190
0043c69f  CALL 0x005e9f20
0043c6a4  ADD ESP,0xc
0043c6a7  MOV EDX,dword ptr [EBP + 0x8]
0043c6aa  CMP dword ptr [EDX],0x0
0043c6ad  JG 0x0043c6b4
0043c6af  JMP 0x0043cd21
0043c6b4  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c6ba  CALL 0x005d5a50
0043c6bf  MOV ECX,dword ptr [EBP + 0x8]
0043c6c2  CMP EAX,dword ptr [ECX]
0043c6c4  JGE 0x0043c6d9
0043c6c6  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c6cc  CALL 0x005d5a50
0043c6d1  MOV dword ptr [EBP + 0xfffffe8c],EAX
0043c6d7  JMP 0x0043c6e4
0043c6d9  MOV EDX,dword ptr [EBP + 0x8]
0043c6dc  MOV EAX,dword ptr [EDX]
0043c6de  MOV dword ptr [EBP + 0xfffffe8c],EAX
0043c6e4  MOV ECX,dword ptr [EBP + 0x8]
0043c6e7  MOV EDX,dword ptr [EBP + 0xfffffe8c]
0043c6ed  MOV dword ptr [ECX],EDX
0043c6ef  MOV byte ptr [EBP + 0x10],0x0
0043c6f3  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c6f9  CALL 0x005f5400
0043c6fe  CMP EAX,0x12
0043c701  JNZ 0x0043c80a
0043c707  MOV EAX,dword ptr [EBP + 0x8]
0043c70a  CMP dword ptr [EAX],0x0
0043c70d  JNZ 0x0043c7b9
0043c713  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c719  CMP dword ptr [ECX + 0x4bc],0x0
0043c720  JLE 0x0043c7ac
0043c726  MOV EDX,dword ptr [EBP + -0xc]
0043c729  SHL EDX,0x2
0043c72c  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c732  CMP dword ptr [EAX + 0x4bc],EDX
0043c738  JLE 0x0043c76a
0043c73a  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c740  MOV EDX,dword ptr [ECX + 0x4bc]
0043c746  AND EDX,0x80000003
0043c74c  JNS 0x0043c753
0043c74e  DEC EDX
0043c74f  OR EDX,0xfffffffc
0043c752  INC EDX
0043c753  TEST EDX,EDX
0043c755  JNZ 0x0043c76a
0043c757  MOV EAX,dword ptr [EBP + 0x8]
0043c75a  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c760  MOV EDX,dword ptr [ECX + 0x4bc]
0043c766  MOV dword ptr [EAX],EDX
0043c768  JMP 0x0043c7aa
0043c76a  MOV EAX,dword ptr [EBP + 0x8]
0043c76d  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c773  MOV EDX,dword ptr [ECX + 0x4bc]
0043c779  MOV dword ptr [EAX],EDX
0043c77b  MOV EAX,dword ptr [EBP + 0x8]
0043c77e  MOV ECX,dword ptr [EAX]
0043c780  AND ECX,0x80000003
0043c786  JNS 0x0043c78d
0043c788  DEC ECX
0043c789  OR ECX,0xfffffffc
0043c78c  INC ECX
0043c78d  TEST ECX,ECX
0043c78f  JNZ 0x0043c79b
0043c791  MOV EDX,dword ptr [EBP + 0x8]
0043c794  MOV EAX,dword ptr [EDX]
0043c796  CMP EAX,dword ptr [EBP + -0xc]
0043c799  JGE 0x0043c7aa
0043c79b  MOV ECX,dword ptr [EBP + 0x8]
0043c79e  MOV EDX,dword ptr [ECX]
0043c7a0  ADD EDX,0x1
0043c7a3  MOV EAX,dword ptr [EBP + 0x8]
0043c7a6  MOV dword ptr [EAX],EDX
0043c7a8  JMP 0x0043c77b
0043c7aa  JMP 0x0043c7b7
0043c7ac  MOV ECX,dword ptr [EBP + -0xc]
0043c7af  SHL ECX,0x2
0043c7b2  MOV EDX,dword ptr [EBP + 0x8]
0043c7b5  MOV dword ptr [EDX],ECX
0043c7b7  JMP 0x0043c80a
0043c7b9  MOV EAX,dword ptr [EBP + 0x8]
0043c7bc  CMP dword ptr [EAX],0x0
0043c7bf  JGE 0x0043c80a
0043c7c1  MOV ECX,dword ptr [EBP + 0x8]
0043c7c4  MOV EDX,dword ptr [ECX]
0043c7c6  IMUL EDX,EDX,-0x1
0043c7c9  MOV EAX,dword ptr [EBP + 0x8]
0043c7cc  MOV dword ptr [EAX],EDX
0043c7ce  MOV ECX,dword ptr [EBP + 0x8]
0043c7d1  MOV EDX,dword ptr [ECX]
0043c7d3  AND EDX,0x80000003
0043c7d9  JNS 0x0043c7e0
0043c7db  DEC EDX
0043c7dc  OR EDX,0xfffffffc
0043c7df  INC EDX
0043c7e0  TEST EDX,EDX
0043c7e2  JNZ 0x0043c7ee
0043c7e4  MOV EAX,dword ptr [EBP + 0x8]
0043c7e7  MOV ECX,dword ptr [EAX]
0043c7e9  CMP ECX,dword ptr [EBP + -0xc]
0043c7ec  JGE 0x0043c7fd
0043c7ee  MOV EDX,dword ptr [EBP + 0x8]
0043c7f1  MOV EAX,dword ptr [EDX]
0043c7f3  ADD EAX,0x1
0043c7f6  MOV ECX,dword ptr [EBP + 0x8]
0043c7f9  MOV dword ptr [ECX],EAX
0043c7fb  JMP 0x0043c7ce
0043c7fd  MOV EDX,dword ptr [EBP + 0x8]
0043c800  MOV EAX,dword ptr [EDX]
0043c802  IMUL EAX,EAX,-0x1
0043c805  MOV ECX,dword ptr [EBP + 0x8]
0043c808  MOV dword ptr [ECX],EAX
0043c80a  MOVZX EDX,byte ptr [EBP + 0xfffffee3]
0043c811  TEST EDX,EDX
0043c813  JZ 0x0043ca80
0043c819  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c81f  CALL 0x005f5400
0043c824  PUSH EAX
0043c825  MOV ECX,dword ptr [0x007906d4]
0043c82b  CALL 0x004388a0
0043c830  MOVZX EAX,AL
0043c833  TEST EAX,EAX
0043c835  JNZ 0x0043c859
0043c837  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c83d  CALL 0x005f5400
0043c842  PUSH EAX
0043c843  MOV ECX,dword ptr [0x007906d4]
0043c849  CALL 0x004388d0
0043c84e  MOVZX ECX,AL
0043c851  TEST ECX,ECX
0043c853  JZ 0x0043ca80
0043c859  MOV EDX,dword ptr [EBP + 0x8]
0043c85c  CMP dword ptr [EDX],0x0
0043c85f  JNZ 0x0043c88b
0043c861  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043c867  CMP dword ptr [EAX + 0x4bc],0x0
0043c86e  JLE 0x0043c883
0043c870  MOV ECX,dword ptr [EBP + 0x8]
0043c873  MOV EDX,dword ptr [EBP + 0xfffffee4]
0043c879  MOV EAX,dword ptr [EDX + 0x4bc]
0043c87f  MOV dword ptr [ECX],EAX
0043c881  JMP 0x0043c88b
0043c883  MOV ECX,dword ptr [EBP + 0x8]
0043c886  MOV EDX,dword ptr [EBP + -0xc]
0043c889  MOV dword ptr [ECX],EDX
0043c88b  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c891  CALL 0x005f5400
0043c896  PUSH EAX
0043c897  MOV ECX,dword ptr [0x007906d4]
0043c89d  CALL 0x004388d0
0043c8a2  MOVZX EAX,AL
0043c8a5  TEST EAX,EAX
0043c8a7  JZ 0x0043c8d9
0043c8a9  MOV ECX,dword ptr [EBP + 0x8]
0043c8ac  MOV EDX,dword ptr [ECX]
0043c8ae  MOV EAX,dword ptr [ECX + 0x4]
0043c8b1  MOV dword ptr [EBP + 0xfffffee8],EDX
0043c8b7  MOV dword ptr [EBP + 0xfffffeec],EAX
0043c8bd  SUB ESP,0x8
0043c8c0  FLD double ptr [0x006b8188]
0043c8c6  FSTP double ptr [ESP]
0043c8c9  LEA ECX,[EBP + 0xfffffee8]
0043c8cf  CALL 0x0064c560
0043c8d4  JMP 0x0043c98b
0043c8d9  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c8df  CALL 0x005f5400
0043c8e4  PUSH EAX
0043c8e5  MOV ECX,dword ptr [0x007906d4]
0043c8eb  CALL 0x0043adc0
0043c8f0  MOV dword ptr [EBP + 0xfffffe88],EAX
0043c8f6  FILD dword ptr [EBP + 0xfffffe88]
0043c8fc  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043c902  FSTP double ptr [EBP + 0xfffffe80]
0043c908  CALL 0x005f5400
0043c90d  PUSH EAX
0043c90e  MOV ECX,dword ptr [0x007906d4]
0043c914  CALL 0x0043aff0
0043c919  MOV dword ptr [EBP + 0xfffffe7c],EAX
0043c91f  FILD dword ptr [EBP + 0xfffffe7c]
0043c925  FDIVR double ptr [EBP + 0xfffffe80]
0043c92b  FSTP double ptr [EBP + 0xfffffed8]
0043c931  MOV ECX,dword ptr [EBP + 0x8]
0043c934  MOV EDX,dword ptr [ECX]
0043c936  MOV EAX,dword ptr [ECX + 0x4]
0043c939  MOV dword ptr [EBP + 0xfffffed0],EDX
0043c93f  MOV dword ptr [EBP + 0xfffffed4],EAX
0043c945  SUB ESP,0x8
0043c948  FLD double ptr [EBP + 0xfffffed8]
0043c94e  FSTP double ptr [ESP]
0043c951  LEA ECX,[EBP + 0xfffffed0]
0043c957  CALL 0x0064c560
0043c95c  MOV ECX,dword ptr [EBP + 0xfffffed0]
0043c962  MOV dword ptr [EBP + 0xfffffee8],ECX
0043c968  MOV EDX,dword ptr [EBP + 0xfffffed4]
0043c96e  MOV dword ptr [EBP + 0xfffffeec],EDX
0043c974  SUB ESP,0x8
0043c977  FLD double ptr [0x006b8188]
0043c97d  FSTP double ptr [ESP]
0043c980  LEA ECX,[EBP + 0xfffffee8]
0043c986  CALL 0x0064c560
0043c98b  MOV EAX,dword ptr [EBP + 0x8]
0043c98e  MOV ESI,dword ptr [EAX]
0043c990  ADD ESI,dword ptr [EBP + 0xfffffee8]
0043c996  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c99c  CALL 0x005d5a50
0043c9a1  CMP ESI,EAX
0043c9a3  JLE 0x0043ca4b
0043c9a9  MOV ECX,dword ptr [EBP + 0x8]
0043c9ac  MOV ESI,dword ptr [ECX]
0043c9ae  ADD ESI,dword ptr [EBP + 0xfffffee8]
0043c9b4  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c9ba  CALL 0x005d5a50
0043c9bf  CMP ESI,EAX
0043c9c1  JLE 0x0043ca4b
0043c9c7  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c9cd  CALL 0x0063aac0
0043c9d2  MOV EDX,dword ptr [EAX]
0043c9d4  MOV dword ptr [EBP + 0xfffffea0],EDX
0043c9da  CMP dword ptr [EBP + 0xfffffea0],0x2
0043c9e1  JZ 0x0043ca0b
0043c9e3  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043c9e9  CALL 0x0063aac0
0043c9ee  MOV EAX,dword ptr [EAX]
0043c9f0  MOV dword ptr [EBP + 0xfffffe9c],EAX
0043c9f6  CMP dword ptr [EBP + 0xfffffe9c],0x3
0043c9fd  JZ 0x0043ca0b
0043c9ff  MOV dword ptr [EBP + 0xfffffe78],0x0
0043ca09  JMP 0x0043ca15
0043ca0b  MOV dword ptr [EBP + 0xfffffe78],0x1
0043ca15  MOVZX ECX,byte ptr [EBP + 0xfffffe78]
0043ca1c  TEST ECX,ECX
0043ca1e  JZ 0x0043ca46
0043ca20  PUSH 0x0
0043ca22  PUSH 0x6b8170
0043ca27  CALL 0x00630f40
0043ca2c  ADD ESP,0x4
0043ca2f  PUSH EAX
0043ca30  PUSH 0x6b814c
0043ca35  CALL 0x00630f40
0043ca3a  ADD ESP,0x4
0043ca3d  PUSH EAX
0043ca3e  CALL 0x0062ff10
0043ca43  ADD ESP,0xc
0043ca46  JMP 0x0043cd21
0043ca4b  MOV EDX,dword ptr [EBP + 0xfffffee8]
0043ca51  NEG EDX
0043ca53  MOV dword ptr [EBP + 0xfffffee8],EDX
0043ca59  MOV EAX,dword ptr [EBP + 0xfffffeec]
0043ca5f  NEG EAX
0043ca61  MOV dword ptr [EBP + 0xfffffeec],EAX
0043ca67  MOV ECX,dword ptr [EBP + 0xfffffeec]
0043ca6d  PUSH ECX
0043ca6e  MOV EDX,dword ptr [EBP + 0xfffffee8]
0043ca74  PUSH EDX
0043ca75  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043ca7b  CALL 0x005d5cf0
0043ca80  MOVZX EAX,byte ptr [EBP + 0xfffffee3]
0043ca87  TEST EAX,EAX
0043ca89  JNZ 0x0043cc48
0043ca8f  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043ca95  CALL 0x005f5400
0043ca9a  PUSH EAX
0043ca9b  MOV ECX,dword ptr [0x007906d4]
0043caa1  CALL 0x004388a0
0043caa6  MOVZX ECX,AL
0043caa9  TEST ECX,ECX
0043caab  JNZ 0x0043cacf
0043caad  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cab3  CALL 0x005f5400
0043cab8  PUSH EAX
0043cab9  MOV ECX,dword ptr [0x007906d4]
0043cabf  CALL 0x004388d0
0043cac4  MOVZX EDX,AL
0043cac7  TEST EDX,EDX
0043cac9  JZ 0x0043cc48
0043cacf  MOV EAX,dword ptr [EBP + 0xfffffee4]
0043cad5  MOV ECX,dword ptr [EAX + 0x4]
0043cad8  PUSH ECX
0043cad9  LEA EDX,[EBP + 0xfffffeb0]
0043cadf  PUSH EDX
0043cae0  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cae6  CALL 0x005cb880
0043caeb  MOV ECX,dword ptr [EAX]
0043caed  MOV EDX,dword ptr [EAX + 0x4]
0043caf0  MOV EAX,dword ptr [EBP + 0x8]
0043caf3  MOV dword ptr [EAX],ECX
0043caf5  MOV dword ptr [EAX + 0x4],EDX
0043caf8  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cafe  CALL 0x005f5400
0043cb03  PUSH EAX
0043cb04  MOV ECX,dword ptr [0x007906d4]
0043cb0a  CALL 0x004388d0
0043cb0f  MOVZX ECX,AL
0043cb12  TEST ECX,ECX
0043cb14  JZ 0x0043cb46
0043cb16  MOV EDX,dword ptr [EBP + 0x8]
0043cb19  MOV EAX,dword ptr [EDX]
0043cb1b  MOV ECX,dword ptr [EDX + 0x4]
0043cb1e  MOV dword ptr [EBP + 0xfffffee8],EAX
0043cb24  MOV dword ptr [EBP + 0xfffffeec],ECX
0043cb2a  SUB ESP,0x8
0043cb2d  FLD double ptr [0x006b8188]
0043cb33  FSTP double ptr [ESP]
0043cb36  LEA ECX,[EBP + 0xfffffee8]
0043cb3c  CALL 0x0064c560
0043cb41  JMP 0x0043cbf8
0043cb46  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cb4c  CALL 0x005f5400
0043cb51  PUSH EAX
0043cb52  MOV ECX,dword ptr [0x007906d4]
0043cb58  CALL 0x0043adc0
0043cb5d  MOV dword ptr [EBP + 0xfffffe74],EAX
0043cb63  FILD dword ptr [EBP + 0xfffffe74]
0043cb69  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cb6f  FSTP double ptr [EBP + 0xfffffe6c]
0043cb75  CALL 0x005f5400
0043cb7a  PUSH EAX
0043cb7b  MOV ECX,dword ptr [0x007906d4]
0043cb81  CALL 0x0043aff0
0043cb86  MOV dword ptr [EBP + 0xfffffe68],EAX
0043cb8c  FILD dword ptr [EBP + 0xfffffe68]
0043cb92  FDIVR double ptr [EBP + 0xfffffe6c]
0043cb98  FSTP double ptr [EBP + 0xfffffec8]
0043cb9e  MOV EDX,dword ptr [EBP + 0x8]
0043cba1  MOV EAX,dword ptr [EDX]
0043cba3  MOV ECX,dword ptr [EDX + 0x4]
0043cba6  MOV dword ptr [EBP + 0xfffffec0],EAX
0043cbac  MOV dword ptr [EBP + 0xfffffec4],ECX
0043cbb2  SUB ESP,0x8
0043cbb5  FLD double ptr [EBP + 0xfffffec8]
0043cbbb  FSTP double ptr [ESP]
0043cbbe  LEA ECX,[EBP + 0xfffffec0]
0043cbc4  CALL 0x0064c560
0043cbc9  MOV EDX,dword ptr [EBP + 0xfffffec0]
0043cbcf  MOV dword ptr [EBP + 0xfffffee8],EDX
0043cbd5  MOV EAX,dword ptr [EBP + 0xfffffec4]
0043cbdb  MOV dword ptr [EBP + 0xfffffeec],EAX
0043cbe1  SUB ESP,0x8
0043cbe4  FLD double ptr [0x006b8188]
0043cbea  FSTP double ptr [ESP]
0043cbed  LEA ECX,[EBP + 0xfffffee8]
0043cbf3  CALL 0x0064c560
0043cbf8  MOV ECX,dword ptr [EBP + 0xfffffeec]
0043cbfe  PUSH ECX
0043cbff  MOV EDX,dword ptr [EBP + 0xfffffee8]
0043cc05  PUSH EDX
0043cc06  MOV ECX,dword ptr [EBP + 0xfffffee4]
0043cc0c  CALL 0x005d5cf0
0043cc11  CMP dword ptr [EBP + 0xfffffee8],0x0
0043cc18  JNZ 0x0043cc2c
0043cc1a  CMP dword ptr [EBP + 0xfffffeec],0x0
0043cc21  JNZ 0x0043cc2c
0043cc23  MOV EAX,dword ptr [EBP + 0x8]
0043cc26  MOV dword ptr [EAX],0x5
0043cc2c  MOV ECX,dword ptr [EBP + 0x8]
0043cc2f  MOV EDX,dword ptr [ECX]
0043cc31  IMUL EDX,EDX,-0x1
0043cc34  MOV EAX,dword ptr [EBP + 0x8]
0043cc37  MOV dword ptr [EAX],EDX
0043cc39  MOV ECX,dword ptr [EBP + 0x8]
0043cc3c  MOV EDX,dword ptr [ECX + 0x4]
0043cc3f  IMUL EDX,EDX,-0x1
0043cc42  MOV EAX,dword ptr [EBP + 0x8]
0043cc45  MOV dword ptr [EAX + 0x4],EDX
0043cc48  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cc4e  CALL 0x005f5400
0043cc53  CMP EAX,0x8
0043cc56  JZ 0x0043cc88
0043cc58  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cc5e  CALL 0x005f5400
0043cc63  CMP EAX,0x9
0043cc66  JZ 0x0043cc88
0043cc68  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cc6e  CALL 0x005f5400
0043cc73  CMP EAX,0xa
0043cc76  JZ 0x0043cc88
0043cc78  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cc7e  CALL 0x005f5400
0043cc83  CMP EAX,0xb
0043cc86  JNZ 0x0043cc8c
0043cc88  MOV byte ptr [EBP + 0x10],0x0
0043cc8c  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cc92  CALL 0x005f5400
0043cc97  CMP EAX,0x11
0043cc9a  JZ 0x0043ccac
0043cc9c  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cca2  CALL 0x005f5400
0043cca7  CMP EAX,0xe
0043ccaa  JNZ 0x0043ccb0
0043ccac  MOV byte ptr [EBP + 0x10],0x0
0043ccb0  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043ccb6  CALL 0x005f5400
0043ccbb  CMP EAX,0x10
0043ccbe  JZ 0x0043ccf0
0043ccc0  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043ccc6  CALL 0x005f5400
0043cccb  CMP EAX,0xc
0043ccce  JZ 0x0043ccf0
0043ccd0  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043ccd6  CALL 0x005f5400
0043ccdb  CMP EAX,0xf
0043ccde  JZ 0x0043ccf0
0043cce0  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cce6  CALL 0x005f5400
0043cceb  CMP EAX,0xd
0043ccee  JNZ 0x0043ccf4
0043ccf0  MOV byte ptr [EBP + 0x10],0x0
0043ccf4  MOV CL,byte ptr [EBP + 0x10]
0043ccf7  PUSH ECX
0043ccf8  MOV EDX,dword ptr [EBP + 0xc]
0043ccfb  PUSH EDX
0043ccfc  MOV EAX,dword ptr [EBP + 0x8]
0043ccff  PUSH EAX
0043cd00  MOV ECX,dword ptr [EBP + 0xfffffe98]
0043cd06  CALL 0x005cba10
0043cd0b  MOVZX ECX,byte ptr [EBP + 0xfffffee3]
0043cd12  TEST ECX,ECX
0043cd14  JNZ 0x0043cd21
0043cd16  MOV ECX,dword ptr [0x007906d0]
0043cd1c  CALL 0x005da460
0043cd21  POP ESI
0043cd22  MOV ECX,dword ptr [EBP + -0x10]
0043cd25  XOR ECX,EBP
0043cd27  CALL 0x00686d72
0043cd2c  MOV ESP,EBP
0043cd2e  POP EBP
0043cd2f  RET 0xc

; FUN_0062c380  0062c380
0062c380  PUSH EBP
0062c381  MOV EBP,ESP
0062c383  SUB ESP,0x1c
0062c386  PUSH ESI
0062c387  MOV dword ptr [EBP + -0x14],ECX
0062c38a  MOV EAX,dword ptr [EBP + -0x14]
0062c38d  CMP dword ptr [EAX + 0x8],0x0
0062c391  JZ 0x0062c3b5
0062c393  XOR ECX,ECX
0062c395  JNZ 0x0062c3ae
0062c397  PUSH 0x277
0062c39c  PUSH 0x6d974c
0062c3a1  PUSH 0x6b2f58
0062c3a6  CALL 0x005e9f20
0062c3ab  ADD ESP,0xc
0062c3ae  XOR AL,AL
0062c3b0  JMP 0x0062c61e
0062c3b5  MOV EAX,dword ptr [EBP + -0x14]
0062c3b8  CMP dword ptr [EAX + 0xc],0x0
0062c3bc  JNZ 0x0062c3c5
0062c3be  XOR AL,AL
0062c3c0  JMP 0x0062c61e
0062c3c5  MOV ECX,dword ptr [EBP + -0x14]
0062c3c8  MOV EDX,dword ptr [ECX + 0xc]
0062c3cb  PUSH EDX
0062c3cc  CALL dword ptr [0x006b21a4]
0062c3d2  ADD ESP,0x4
0062c3d5  MOV EAX,dword ptr [EBP + 0x14]
0062c3d8  PUSH EAX
0062c3d9  MOV ECX,dword ptr [EBP + 0x10]
0062c3dc  PUSH ECX
0062c3dd  MOV ECX,dword ptr [EBP + -0x14]
0062c3e0  CALL 0x0062c820
0062c3e5  MOV EDX,dword ptr [EBP + -0x14]
0062c3e8  MOV EAX,dword ptr [EDX + 0x14]
0062c3eb  MOV ECX,dword ptr [EAX]
0062c3ed  MOV dword ptr [EBP + -0x4],ECX
0062c3f0  MOV EDX,dword ptr [EBP + -0x14]
0062c3f3  MOV EAX,dword ptr [EDX + 0x10]
0062c3f6  MOV ECX,dword ptr [EAX + 0x10]
0062c3f9  ADD ECX,0x10
0062c3fc  PUSH ECX
0062c3fd  CALL 0x00686d82
0062c402  ADD ESP,0x4
0062c405  MOV dword ptr [EBP + -0xc],EAX
0062c408  MOV EDX,dword ptr [EBP + -0xc]
0062c40b  MOV dword ptr [EBP + -0x8],EDX
0062c40e  MOV EAX,dword ptr [EBP + -0x14]
0062c411  MOV ECX,dword ptr [EAX + 0x10]
0062c414  MOV EDX,dword ptr [ECX + 0x10]
0062c417  PUSH EDX
0062c418  MOV EAX,dword ptr [EBP + -0x14]
0062c41b  MOV ECX,dword ptr [EAX + 0x14]
0062c41e  PUSH ECX
0062c41f  MOV EDX,dword ptr [EBP + -0x8]
0062c422  PUSH EDX
0062c423  CALL 0x00686fde
0062c428  ADD ESP,0xc
0062c42b  MOV EAX,dword ptr [EBP + -0x14]
0062c42e  MOV ECX,dword ptr [EAX + 0x14]
0062c431  MOV dword ptr [EBP + -0x10],ECX
0062c434  MOV EDX,dword ptr [EBP + -0x10]
0062c437  PUSH EDX
0062c438  CALL 0x00686cae
0062c43d  ADD ESP,0x4
0062c440  MOV EAX,dword ptr [EBP + -0x14]
0062c443  MOV ECX,dword ptr [EBP + -0x8]
0062c446  MOV dword ptr [EAX + 0x14],ECX
0062c449  MOV EDX,dword ptr [EBP + -0x14]
0062c44c  MOV EAX,dword ptr [EDX + 0x10]
0062c44f  MOV ECX,dword ptr [EAX + 0x10]
0062c452  ADD ECX,0x10
0062c455  MOV EDX,dword ptr [EBP + -0x14]
0062c458  MOV EAX,dword ptr [EDX + 0x10]
0062c45b  MOV dword ptr [EAX + 0x10],ECX
0062c45e  MOV ECX,dword ptr [EBP + -0x14]
0062c461  MOV EDX,dword ptr [ECX + 0x14]
0062c464  MOV EAX,dword ptr [EDX]
0062c466  ADD EAX,0x1
0062c469  MOV ECX,dword ptr [EBP + -0x14]
0062c46c  MOV EDX,dword ptr [ECX + 0x14]
0062c46f  MOV dword ptr [EDX],EAX
0062c471  MOV EAX,dword ptr [EBP + -0x14]
0062c474  MOV ECX,dword ptr [EAX + 0x14]
0062c477  MOV EDX,dword ptr [EBP + -0x4]
0062c47a  SHL EDX,0x4
0062c47d  MOV EAX,dword ptr [EBP + 0x10]
0062c480  MOV dword ptr [ECX + EDX*0x1 + 0x8],EAX
0062c484  MOV ECX,dword ptr [EBP + -0x14]
0062c487  MOV EDX,dword ptr [ECX + 0x14]
0062c48a  MOV EAX,dword ptr [EBP + -0x4]
0062c48d  SHL EAX,0x4
0062c490  MOV ECX,dword ptr [EBP + 0x14]
0062c493  MOV dword ptr [EDX + EAX*0x1 + 0xc],ECX
0062c497  MOV EDX,dword ptr [EBP + -0x14]
0062c49a  MOV EAX,dword ptr [EDX + 0x14]
0062c49d  MOV ECX,dword ptr [EBP + -0x4]
0062c4a0  SUB ECX,0x1
0062c4a3  SHL ECX,0x4
0062c4a6  MOV EDX,dword ptr [EBP + -0x14]
0062c4a9  MOV EDX,dword ptr [EDX + 0x14]
0062c4ac  MOV ESI,dword ptr [EBP + -0x4]
0062c4af  SUB ESI,0x1
0062c4b2  SHL ESI,0x4
0062c4b5  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x10]
0062c4b9  ADD EAX,dword ptr [EDX + ESI*0x1 + 0x14]
0062c4bd  MOV ECX,dword ptr [EBP + -0x14]
0062c4c0  MOV EDX,dword ptr [ECX + 0x14]
0062c4c3  MOV ECX,dword ptr [EBP + -0x4]
0062c4c6  SHL ECX,0x4
0062c4c9  MOV dword ptr [EDX + ECX*0x1 + 0x10],EAX
0062c4cd  MOV EDX,dword ptr [EBP + -0x14]
0062c4d0  MOV EAX,dword ptr [EDX + 0x14]
0062c4d3  CMP dword ptr [EAX + 0x4],0x0
0062c4d7  JZ 0x0062c502
0062c4d9  CMP dword ptr [EBP + 0x18],0x0
0062c4dd  JZ 0x0062c4f3
0062c4df  MOV ECX,dword ptr [EBP + 0x18]
0062c4e2  PUSH ECX
0062c4e3  CALL 0x00686ecc
0062c4e8  ADD ESP,0x4
0062c4eb  ADD EAX,0x1
0062c4ee  MOV dword ptr [EBP + -0x18],EAX
0062c4f1  JMP 0x0062c4fa
0062c4f3  MOV dword ptr [EBP + -0x18],0x1
0062c4fa  MOV EDX,dword ptr [EBP + -0x18]
0062c4fd  MOV dword ptr [EBP + -0x1c],EDX
0062c500  JMP 0x0062c509
0062c502  MOV dword ptr [EBP + -0x1c],0x0
0062c509  MOV EAX,dword ptr [EBP + 0xc]
0062c50c  ADD EAX,dword ptr [EBP + -0x1c]
0062c50f  MOV ECX,dword ptr [EBP + -0x14]
0062c512  MOV EDX,dword ptr [ECX + 0x14]
0062c515  MOV ECX,dword ptr [EBP + -0x4]
0062c518  SHL ECX,0x4
0062c51b  MOV dword ptr [EDX + ECX*0x1 + 0x14],EAX
0062c51f  MOV EDX,dword ptr [EBP + -0x14]
0062c522  MOV EAX,dword ptr [EDX + 0x10]
0062c525  MOV ECX,dword ptr [EBP + -0x14]
0062c528  MOV EDX,dword ptr [ECX + 0x14]
0062c52b  MOV ECX,dword ptr [EBP + -0x4]
0062c52e  SHL ECX,0x4
0062c531  MOV EAX,dword ptr [EAX + 0x14]
0062c534  ADD EAX,dword ptr [EDX + ECX*0x1 + 0x14]
0062c538  MOV ECX,dword ptr [EBP + -0x14]
0062c53b  MOV EDX,dword ptr [ECX + 0x10]
0062c53e  MOV dword ptr [EDX + 0x14],EAX
0062c541  PUSH 0x0
0062c543  MOV EAX,dword ptr [EBP + -0x14]
0062c546  MOV ECX,dword ptr [EAX + 0x14]
0062c549  MOV EDX,dword ptr [EBP + -0x4]
0062c54c  SHL EDX,0x4
0062c54f  MOV EAX,dword ptr [ECX + EDX*0x1 + 0x10]
0062c553  PUSH EAX
0062c554  MOV ECX,dword ptr [EBP + -0x14]
0062c557  MOV EDX,dword ptr [ECX + 0xc]
0062c55a  PUSH EDX
0062c55b  CALL dword ptr [0x006b230c]
0062c561  ADD ESP,0xc
0062c564  MOV EAX,dword ptr [EBP + -0x14]
0062c567  MOV ECX,dword ptr [EAX + 0x14]
0062c56a  CMP dword ptr [ECX + 0x4],0x0
0062c56e  JZ 0x0062c5b0
0062c570  CMP dword ptr [EBP + 0x18],0x0
0062c574  JZ 0x0062c59e
0062c576  MOV EDX,dword ptr [EBP + -0x14]
0062c579  MOV EAX,dword ptr [EDX + 0xc]
0062c57c  PUSH EAX
0062c57d  PUSH 0x1
0062c57f  MOV ECX,dword ptr [EBP + 0x18]
0062c582  PUSH ECX
0062c583  CALL 0x00686ecc
0062c588  ADD ESP,0x4
0062c58b  ADD EAX,0x1
0062c58e  PUSH EAX
0062c58f  MOV EDX,dword ptr [EBP + 0x18]
0062c592  PUSH EDX
0062c593  CALL dword ptr [0x006b2260]
0062c599  ADD ESP,0x10
0062c59c  JMP 0x0062c5b0
0062c59e  MOV EAX,dword ptr [EBP + -0x14]
0062c5a1  MOV ECX,dword ptr [EAX + 0xc]
0062c5a4  PUSH ECX
0062c5a5  PUSH 0x0
0062c5a7  CALL dword ptr [0x006b22ec]
0062c5ad  ADD ESP,0x8
0062c5b0  MOV EDX,dword ptr [EBP + -0x14]
0062c5b3  MOV EAX,dword ptr [EDX + 0xc]
0062c5b6  PUSH EAX
0062c5b7  PUSH 0x1
0062c5b9  MOV ECX,dword ptr [EBP + 0xc]
0062c5bc  PUSH ECX
0062c5bd  MOV EDX,dword ptr [EBP + 0x8]
0062c5c0  PUSH EDX
0062c5c1  CALL dword ptr [0x006b2260]
0062c5c7  ADD ESP,0x10
0062c5ca  MOV EAX,dword ptr [EBP + -0x14]
0062c5cd  MOV ECX,dword ptr [EAX + 0xc]
0062c5d0  PUSH ECX
0062c5d1  PUSH 0x1
0062c5d3  MOV EDX,dword ptr [EBP + -0x14]
0062c5d6  MOV EAX,dword ptr [EDX + 0x10]
0062c5d9  MOV ECX,dword ptr [EAX + 0x10]
0062c5dc  PUSH ECX
0062c5dd  MOV EDX,dword ptr [EBP + -0x14]
0062c5e0  MOV EAX,dword ptr [EDX + 0x14]
0062c5e3  PUSH EAX
0062c5e4  CALL dword ptr [0x006b2260]
0062c5ea  ADD ESP,0x10
0062c5ed  PUSH 0x0
0062c5ef  PUSH 0x0
0062c5f1  MOV ECX,dword ptr [EBP + -0x14]
0062c5f4  MOV EDX,dword ptr [ECX + 0xc]
0062c5f7  PUSH EDX
0062c5f8  CALL dword ptr [0x006b230c]
0062c5fe  ADD ESP,0xc
0062c601  MOV EAX,dword ptr [EBP + -0x14]
0062c604  MOV ECX,dword ptr [EAX + 0xc]
0062c607  PUSH ECX
0062c608  PUSH 0x1
0062c60a  PUSH 0x18
0062c60c  MOV EDX,dword ptr [EBP + -0x14]
0062c60f  MOV EAX,dword ptr [EDX + 0x10]
0062c612  PUSH EAX
0062c613  CALL dword ptr [0x006b2260]
0062c619  ADD ESP,0x10
0062c61c  MOV AL,0x1
0062c61e  POP ESI
0062c61f  MOV ESP,EBP
0062c621  POP EBP
0062c622  RET 0x14

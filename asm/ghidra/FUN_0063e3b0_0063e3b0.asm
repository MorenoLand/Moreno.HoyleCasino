; FUN_0063e3b0  0063e3b0
0063e3b0  PUSH EBP
0063e3b1  MOV EBP,ESP
0063e3b3  SUB ESP,0x68
0063e3b6  MOV dword ptr [EBP + -0x60],ECX
0063e3b9  MOVSX EAX,byte ptr [EBP + 0x8]
0063e3bd  CMP EAX,-0x1
0063e3c0  JZ 0x0063e6bd
0063e3c6  MOV ECX,dword ptr [EBP + -0x60]
0063e3c9  MOV EDX,dword ptr [ECX + 0x1c4]
0063e3cf  MOV EAX,dword ptr [EBP + -0x60]
0063e3d2  MOV ECX,dword ptr [EAX + 0x1bc]
0063e3d8  MOV EDX,dword ptr [ECX + EDX*0x4]
0063e3db  MOV dword ptr [EBP + -0x8],EDX
0063e3de  MOV ECX,dword ptr [EBP + -0x8]
0063e3e1  CALL 0x0063aac0
0063e3e6  MOVSX ECX,byte ptr [EBP + 0x8]
0063e3ea  MOV dword ptr [EAX],ECX
0063e3ec  MOV EDX,dword ptr [EBP + -0x60]
0063e3ef  MOV EAX,dword ptr [EDX + 0x1c4]
0063e3f5  MOV ECX,dword ptr [EBP + -0x60]
0063e3f8  MOV EDX,dword ptr [ECX + 0x1bc]
0063e3fe  MOV EAX,dword ptr [EDX + EAX*0x4]
0063e401  MOV dword ptr [EBP + -0xc],EAX
0063e404  MOV ECX,dword ptr [EBP + -0xc]
0063e407  CALL 0x0063aac0
0063e40c  MOVSX ECX,byte ptr [EBP + 0xc]
0063e410  MOV dword ptr [EAX + 0x54],ECX
0063e413  MOV EDX,dword ptr [EBP + -0x60]
0063e416  MOV EAX,dword ptr [EDX + 0x1c4]
0063e41c  MOV ECX,dword ptr [EBP + -0x60]
0063e41f  MOV EDX,dword ptr [ECX + 0x1bc]
0063e425  MOV EAX,dword ptr [EDX + EAX*0x4]
0063e428  MOV dword ptr [EBP + -0x10],EAX
0063e42b  MOV ECX,dword ptr [EBP + -0x10]
0063e42e  CALL 0x0063aac0
0063e433  MOV ECX,dword ptr [EAX]
0063e435  MOV dword ptr [EBP + -0x14],ECX
0063e438  CMP dword ptr [EBP + -0x14],0x2
0063e43c  JNZ 0x0063e471
0063e43e  MOV EDX,dword ptr [EBP + -0x60]
0063e441  MOV EAX,dword ptr [EDX + 0x1c4]
0063e447  MOV ECX,dword ptr [EBP + -0x60]
0063e44a  MOV EDX,dword ptr [ECX + 0x1bc]
0063e450  MOV EAX,dword ptr [EDX + EAX*0x4]
0063e453  MOV dword ptr [EBP + -0x18],EAX
0063e456  PUSH 0x6b27f8
0063e45b  MOV ECX,dword ptr [EBP + -0x18]
0063e45e  CALL 0x0063aac0
0063e463  ADD EAX,0x38
0063e466  PUSH EAX
0063e467  CALL 0x00686d8e
0063e46c  ADD ESP,0x8
0063e46f  JMP 0x0063e4a1
0063e471  MOV ECX,dword ptr [EBP + -0x60]
0063e474  MOV EDX,dword ptr [ECX + 0x1c4]
0063e47a  MOV EAX,dword ptr [EBP + -0x60]
0063e47d  MOV ECX,dword ptr [EAX + 0x1bc]
0063e483  MOV EDX,dword ptr [ECX + EDX*0x4]
0063e486  MOV dword ptr [EBP + -0x1c],EDX
0063e489  MOV EAX,dword ptr [EBP + 0x10]
0063e48c  PUSH EAX
0063e48d  MOV ECX,dword ptr [EBP + -0x1c]
0063e490  CALL 0x0063aac0
0063e495  ADD EAX,0x38
0063e498  PUSH EAX
0063e499  CALL 0x00686d8e
0063e49e  ADD ESP,0x8
0063e4a1  MOV dword ptr [EBP + -0x4],0x0
0063e4a8  JMP 0x0063e4b3
0063e4aa  MOV ECX,dword ptr [EBP + -0x4]
0063e4ad  ADD ECX,0x1
0063e4b0  MOV dword ptr [EBP + -0x4],ECX
0063e4b3  MOV EDX,dword ptr [0x0162ee84]
0063e4b9  MOV EAX,dword ptr [EDX]
0063e4bb  MOV ECX,dword ptr [0x0162ee84]
0063e4c1  MOV EDX,dword ptr [EAX + 0x10c]
0063e4c7  CALL EDX
0063e4c9  CMP dword ptr [EBP + -0x4],EAX
0063e4cc  JGE 0x0063e6b0
0063e4d2  MOV EAX,dword ptr [EBP + -0x60]
0063e4d5  MOV ECX,dword ptr [EBP + -0x4]
0063e4d8  CMP ECX,dword ptr [EAX + 0x1c4]
0063e4de  JNZ 0x0063e4e2
0063e4e0  JMP 0x0063e4aa
0063e4e2  MOV EDX,dword ptr [EBP + -0x60]
0063e4e5  MOV EAX,dword ptr [EDX + 0x1c4]
0063e4eb  MOV ECX,dword ptr [EBP + -0x60]
0063e4ee  MOV EDX,dword ptr [ECX + 0x1bc]
0063e4f4  MOV EAX,dword ptr [EDX + EAX*0x4]
0063e4f7  MOV dword ptr [EBP + -0x28],EAX
0063e4fa  MOV ECX,dword ptr [EBP + -0x28]
0063e4fd  CALL 0x0063aac0
0063e502  MOV ECX,dword ptr [EAX]
0063e504  MOV dword ptr [EBP + -0x20],ECX
0063e507  CMP dword ptr [EBP + -0x20],0x2
0063e50b  JZ 0x0063e529
0063e50d  MOV ECX,dword ptr [EBP + -0x28]
0063e510  CALL 0x0063aac0
0063e515  MOV EDX,dword ptr [EAX]
0063e517  MOV dword ptr [EBP + -0x24],EDX
0063e51a  CMP dword ptr [EBP + -0x24],0x3
0063e51e  JZ 0x0063e529
0063e520  MOV dword ptr [EBP + -0x64],0x0
0063e527  JMP 0x0063e530
0063e529  MOV dword ptr [EBP + -0x64],0x1
0063e530  MOVZX EAX,byte ptr [EBP + -0x64]
0063e534  TEST EAX,EAX
0063e536  JZ 0x0063e6ab
0063e53c  MOV ECX,dword ptr [EBP + -0x60]
0063e53f  MOV EDX,dword ptr [ECX + 0x1bc]
0063e545  MOV EAX,dword ptr [EBP + -0x4]
0063e548  MOV ECX,dword ptr [EDX + EAX*0x4]
0063e54b  MOV dword ptr [EBP + -0x34],ECX
0063e54e  MOV ECX,dword ptr [EBP + -0x34]
0063e551  CALL 0x0063aac0
0063e556  MOV EDX,dword ptr [EAX]
0063e558  MOV dword ptr [EBP + -0x2c],EDX
0063e55b  CMP dword ptr [EBP + -0x2c],0x2
0063e55f  JZ 0x0063e57d
0063e561  MOV ECX,dword ptr [EBP + -0x34]
0063e564  CALL 0x0063aac0
0063e569  MOV EAX,dword ptr [EAX]
0063e56b  MOV dword ptr [EBP + -0x30],EAX
0063e56e  CMP dword ptr [EBP + -0x30],0x3
0063e572  JZ 0x0063e57d
0063e574  MOV dword ptr [EBP + -0x68],0x0
0063e57b  JMP 0x0063e584
0063e57d  MOV dword ptr [EBP + -0x68],0x1
0063e584  MOVZX ECX,byte ptr [EBP + -0x68]
0063e588  TEST ECX,ECX
0063e58a  JZ 0x0063e6ab
0063e590  MOV EDX,dword ptr [EBP + -0x60]
0063e593  MOV EAX,dword ptr [EDX + 0x1bc]
0063e599  MOV ECX,dword ptr [EBP + -0x4]
0063e59c  MOV EDX,dword ptr [EAX + ECX*0x4]
0063e59f  MOV dword ptr [EBP + -0x38],EDX
0063e5a2  MOV ECX,dword ptr [EBP + -0x38]
0063e5a5  CALL 0x0063aac0
0063e5aa  ADD EAX,0x4
0063e5ad  MOV dword ptr [EBP + -0x3c],EAX
0063e5b0  MOV EAX,dword ptr [EBP + -0x60]
0063e5b3  MOV ECX,dword ptr [EAX + 0x1c4]
0063e5b9  MOV EDX,dword ptr [EBP + -0x60]
0063e5bc  MOV EAX,dword ptr [EDX + 0x1bc]
0063e5c2  MOV ECX,dword ptr [EAX + ECX*0x4]
0063e5c5  MOV dword ptr [EBP + -0x40],ECX
0063e5c8  MOV ECX,dword ptr [EBP + -0x40]
0063e5cb  CALL 0x0063aac0
0063e5d0  ADD EAX,0x4
0063e5d3  MOV dword ptr [EBP + -0x44],EAX
0063e5d6  MOV EDX,dword ptr [EBP + -0x3c]
0063e5d9  PUSH EDX
0063e5da  MOV EAX,dword ptr [EBP + -0x44]
0063e5dd  PUSH EAX
0063e5de  CALL 0x00686ec0
0063e5e3  ADD ESP,0x8
0063e5e6  TEST EAX,EAX
0063e5e8  JNZ 0x0063e6ab
0063e5ee  MOV ECX,dword ptr [EBP + -0x60]
0063e5f1  MOV EDX,dword ptr [ECX + 0x1bc]
0063e5f7  MOV EAX,dword ptr [EBP + -0x4]
0063e5fa  MOV ECX,dword ptr [EDX + EAX*0x4]
0063e5fd  MOV dword ptr [EBP + -0x48],ECX
0063e600  MOV ECX,dword ptr [EBP + -0x48]
0063e603  CALL 0x0063aac0
0063e608  MOVSX EDX,byte ptr [EBP + 0x8]
0063e60c  MOV dword ptr [EAX],EDX
0063e60e  MOV EAX,dword ptr [EBP + -0x60]
0063e611  MOV ECX,dword ptr [EAX + 0x1bc]
0063e617  MOV EDX,dword ptr [EBP + -0x4]
0063e61a  MOV EAX,dword ptr [ECX + EDX*0x4]
0063e61d  MOV dword ptr [EBP + -0x4c],EAX
0063e620  MOV ECX,dword ptr [EBP + -0x4c]
0063e623  CALL 0x0063aac0
0063e628  MOVSX ECX,byte ptr [EBP + 0xc]
0063e62c  MOV dword ptr [EAX + 0x54],ECX
0063e62f  MOV EDX,dword ptr [EBP + -0x60]
0063e632  MOV EAX,dword ptr [EDX + 0x1bc]
0063e638  MOV ECX,dword ptr [EBP + -0x4]
0063e63b  MOV EDX,dword ptr [EAX + ECX*0x4]
0063e63e  MOV dword ptr [EBP + -0x50],EDX
0063e641  MOV ECX,dword ptr [EBP + -0x50]
0063e644  CALL 0x0063aac0
0063e649  MOV EAX,dword ptr [EAX]
0063e64b  MOV dword ptr [EBP + -0x54],EAX
0063e64e  CMP dword ptr [EBP + -0x54],0x2
0063e652  JNZ 0x0063e681
0063e654  MOV ECX,dword ptr [EBP + -0x60]
0063e657  MOV EDX,dword ptr [ECX + 0x1bc]
0063e65d  MOV EAX,dword ptr [EBP + -0x4]
0063e660  MOV ECX,dword ptr [EDX + EAX*0x4]
0063e663  MOV dword ptr [EBP + -0x58],ECX
0063e666  PUSH 0x6b27f8
0063e66b  MOV ECX,dword ptr [EBP + -0x58]
0063e66e  CALL 0x0063aac0
0063e673  ADD EAX,0x38
0063e676  PUSH EAX
0063e677  CALL 0x00686d8e
0063e67c  ADD ESP,0x8
0063e67f  JMP 0x0063e6ab
0063e681  MOV EDX,dword ptr [EBP + -0x60]
0063e684  MOV EAX,dword ptr [EDX + 0x1bc]
0063e68a  MOV ECX,dword ptr [EBP + -0x4]
0063e68d  MOV EDX,dword ptr [EAX + ECX*0x4]
0063e690  MOV dword ptr [EBP + -0x5c],EDX
0063e693  MOV EAX,dword ptr [EBP + 0x10]
0063e696  PUSH EAX
0063e697  MOV ECX,dword ptr [EBP + -0x5c]
0063e69a  CALL 0x0063aac0
0063e69f  ADD EAX,0x38
0063e6a2  PUSH EAX
0063e6a3  CALL 0x00686d8e
0063e6a8  ADD ESP,0x8
0063e6ab  JMP 0x0063e4aa
0063e6b0  MOV ECX,dword ptr [EBP + -0x60]
0063e6b3  MOV dword ptr [ECX + 0x1c4],0xffffffff
0063e6bd  CMP dword ptr [0x01630690],0x0
0063e6c4  JZ 0x0063e6db
0063e6c6  MOV ECX,dword ptr [0x01630690]
0063e6cc  CALL 0x005f8990
0063e6d1  MOV dword ptr [0x01630690],0x0
0063e6db  MOV ECX,dword ptr [EBP + -0x60]
0063e6de  CALL 0x0063c620
0063e6e3  MOV ESP,EBP
0063e6e5  POP EBP
0063e6e6  RET 0xc

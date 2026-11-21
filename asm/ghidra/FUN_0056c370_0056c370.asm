; FUN_0056c370  0056c370
0056c370  PUSH EBP
0056c371  MOV EBP,ESP
0056c373  PUSH -0x1
0056c375  PUSH 0x6a5e17
0056c37a  MOV EAX,FS:[0x0]
0056c380  PUSH EAX
0056c381  SUB ESP,0xf8
0056c387  MOV EAX,[0x00781870]
0056c38c  XOR EAX,EBP
0056c38e  PUSH EAX
0056c38f  LEA EAX,[EBP + -0xc]
0056c392  MOV FS:[0x0],EAX
0056c398  MOV dword ptr [EBP + 0xffffff4c],ECX
0056c39e  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c3a4  CALL 0x0056d9d0
0056c3a9  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c3af  MOV dword ptr [EAX + 0xa0],0x0
0056c3b9  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c3bf  MOV dword ptr [ECX + 0xa4],0x0
0056c3c9  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c3cf  MOV byte ptr [EDX + 0x98],0x1
0056c3d6  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c3dc  MOV byte ptr [EAX + 0x99],0x0
0056c3e3  MOV word ptr [EBP + -0x10],0x0
0056c3e9  JMP 0x0056c3f7
0056c3eb  MOV CX,word ptr [EBP + -0x10]
0056c3ef  ADD CX,0x1
0056c3f3  MOV word ptr [EBP + -0x10],CX
0056c3f7  MOVSX EDX,word ptr [EBP + -0x10]
0056c3fb  CMP EDX,0x7
0056c3fe  JGE 0x0056c417
0056c400  MOVSX EAX,word ptr [EBP + -0x10]
0056c404  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c40a  MOV dword ptr [ECX + EAX*0x4 + 0xbc],0xffffffff
0056c415  JMP 0x0056c3eb
0056c417  MOV word ptr [EBP + -0x10],0x0
0056c41d  JMP 0x0056c42b
0056c41f  MOV DX,word ptr [EBP + -0x10]
0056c423  ADD DX,0x1
0056c427  MOV word ptr [EBP + -0x10],DX
0056c42b  MOVSX EAX,word ptr [EBP + -0x10]
0056c42f  CMP EAX,0x5
0056c432  JGE 0x0056c61a
0056c438  MOVSX ECX,word ptr [EBP + -0x10]
0056c43c  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c442  CMP dword ptr [EDX + ECX*0x4 + 0x8],0x0
0056c447  JNZ 0x0056c4a1
0056c449  PUSH 0x1dc
0056c44e  CALL 0x00686d82
0056c453  ADD ESP,0x4
0056c456  MOV dword ptr [EBP + -0x18],EAX
0056c459  MOV dword ptr [EBP + -0x4],0x0
0056c460  CMP dword ptr [EBP + -0x18],0x0
0056c464  JZ 0x0056c476
0056c466  MOV ECX,dword ptr [EBP + -0x18]
0056c469  CALL 0x0056f9b0
0056c46e  MOV dword ptr [EBP + 0xffffff48],EAX
0056c474  JMP 0x0056c480
0056c476  MOV dword ptr [EBP + 0xffffff48],0x0
0056c480  MOV EAX,dword ptr [EBP + 0xffffff48]
0056c486  MOV dword ptr [EBP + -0x14],EAX
0056c489  MOV dword ptr [EBP + -0x4],0xffffffff
0056c490  MOVSX ECX,word ptr [EBP + -0x10]
0056c494  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c49a  MOV EAX,dword ptr [EBP + -0x14]
0056c49d  MOV dword ptr [EDX + ECX*0x4 + 0x8],EAX
0056c4a1  MOVSX ECX,word ptr [EBP + -0x10]
0056c4a5  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c4ab  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
0056c4af  MOVSX ECX,word ptr [EBP + -0x10]
0056c4b3  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c4b9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
0056c4bd  MOV EAX,dword ptr [EAX]
0056c4bf  MOV EDX,dword ptr [EAX + 0x40]
0056c4c2  CALL EDX
0056c4c4  MOVSX EAX,word ptr [EBP + -0x10]
0056c4c8  XOR ECX,ECX
0056c4ca  CMP EAX,0x4
0056c4cd  SETL CL
0056c4d0  LEA ECX,[ECX*0x4 + 0x16041]
0056c4d7  PUSH ECX
0056c4d8  MOVSX EDX,word ptr [EBP + -0x10]
0056c4dc  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c4e2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0056c4e6  MOVSX EDX,word ptr [EBP + -0x10]
0056c4ea  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c4f0  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x8]
0056c4f4  MOV EAX,dword ptr [ECX]
0056c4f6  MOV ECX,EDX
0056c4f8  MOV EDX,dword ptr [EAX + 0xc8]
0056c4fe  CALL EDX
0056c500  PUSH 0x0
0056c502  PUSH 0x0
0056c504  MOVSX EAX,word ptr [EBP + -0x10]
0056c508  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c50e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
0056c512  MOVSX EAX,word ptr [EBP + -0x10]
0056c516  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c51c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
0056c520  MOV EDX,dword ptr [EDX]
0056c522  MOV EAX,dword ptr [EDX + 0x44]
0056c525  CALL EAX
0056c527  PUSH 0x5dc
0056c52c  MOVSX ECX,word ptr [EBP + -0x10]
0056c530  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c536  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
0056c53a  MOVSX ECX,word ptr [EBP + -0x10]
0056c53e  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c544  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
0056c548  MOV EAX,dword ptr [EAX]
0056c54a  MOV EDX,dword ptr [EAX + 0x6c]
0056c54d  CALL EDX
0056c54f  MOVSX EAX,word ptr [EBP + -0x10]
0056c553  PUSH EAX
0056c554  MOVSX ECX,word ptr [EBP + -0x10]
0056c558  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c55e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
0056c562  CALL 0x005f53e0
0056c567  MOVSX EAX,word ptr [EBP + -0x10]
0056c56b  CMP EAX,0x4
0056c56e  JGE 0x0056c5b1
0056c570  MOVSX ECX,word ptr [EBP + -0x10]
0056c574  LEA EDX,[ECX*0x4 + 0x3]
0056c57b  PUSH EDX
0056c57c  MOVSX EAX,word ptr [EBP + -0x10]
0056c580  LEA ECX,[EAX*0x4 + 0x2]
0056c587  PUSH ECX
0056c588  MOVSX EDX,word ptr [EBP + -0x10]
0056c58c  LEA EAX,[EDX*0x4 + 0x1]
0056c593  PUSH EAX
0056c594  MOVSX ECX,word ptr [EBP + -0x10]
0056c598  SHL ECX,0x2
0056c59b  PUSH ECX
0056c59c  MOVSX EDX,word ptr [EBP + -0x10]
0056c5a0  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c5a6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0056c5aa  CALL 0x006023d0
0056c5af  JMP 0x0056c5cc
0056c5b1  PUSH 0x1
0056c5b3  PUSH 0x0
0056c5b5  PUSH 0x2
0056c5b7  PUSH 0x1
0056c5b9  MOVSX ECX,word ptr [EBP + -0x10]
0056c5bd  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c5c3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
0056c5c7  CALL 0x006023d0
0056c5cc  MOVSX EAX,word ptr [EBP + -0x10]
0056c5d0  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c5d6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
0056c5da  MOVSX EAX,word ptr [EBP + -0x10]
0056c5de  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c5e4  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
0056c5e8  MOV EDX,dword ptr [EDX]
0056c5ea  MOV EAX,dword ptr [EDX + 0xd0]
0056c5f0  CALL EAX
0056c5f2  MOVSX ECX,word ptr [EBP + -0x10]
0056c5f6  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c5fc  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
0056c600  MOVSX ECX,word ptr [EBP + -0x10]
0056c604  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c60a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
0056c60e  MOV EAX,dword ptr [EAX]
0056c610  MOV EDX,dword ptr [EAX + 0x74]
0056c613  CALL EDX
0056c615  JMP 0x0056c41f
0056c61a  MOV word ptr [EBP + -0x10],0x0
0056c620  JMP 0x0056c62e
0056c622  MOV AX,word ptr [EBP + -0x10]
0056c626  ADD AX,0x1
0056c62a  MOV word ptr [EBP + -0x10],AX
0056c62e  MOVSX ECX,word ptr [EBP + -0x10]
0056c632  CMP ECX,0x4
0056c635  JGE 0x0056c91a
0056c63b  MOVSX EDX,word ptr [EBP + -0x10]
0056c63f  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c645  CMP dword ptr [EAX + EDX*0x4 + 0x34],0x0
0056c64a  JNZ 0x0056c6a4
0056c64c  PUSH 0x178
0056c651  CALL 0x00686d82
0056c656  ADD ESP,0x4
0056c659  MOV dword ptr [EBP + -0x20],EAX
0056c65c  MOV dword ptr [EBP + -0x4],0x1
0056c663  CMP dword ptr [EBP + -0x20],0x0
0056c667  JZ 0x0056c679
0056c669  MOV ECX,dword ptr [EBP + -0x20]
0056c66c  CALL 0x005eaaf0
0056c671  MOV dword ptr [EBP + 0xffffff44],EAX
0056c677  JMP 0x0056c683
0056c679  MOV dword ptr [EBP + 0xffffff44],0x0
0056c683  MOV ECX,dword ptr [EBP + 0xffffff44]
0056c689  MOV dword ptr [EBP + -0x1c],ECX
0056c68c  MOV dword ptr [EBP + -0x4],0xffffffff
0056c693  MOVSX EDX,word ptr [EBP + -0x10]
0056c697  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c69d  MOV ECX,dword ptr [EBP + -0x1c]
0056c6a0  MOV dword ptr [EAX + EDX*0x4 + 0x34],ECX
0056c6a4  MOVSX EDX,word ptr [EBP + -0x10]
0056c6a8  MOV EAX,dword ptr [EDX*0x8 + 0x74889c]
0056c6af  PUSH EAX
0056c6b0  MOVSX ECX,word ptr [EBP + -0x10]
0056c6b4  MOV EDX,dword ptr [ECX*0x8 + 0x748898]
0056c6bb  PUSH EDX
0056c6bc  MOVSX EAX,word ptr [EBP + -0x10]
0056c6c0  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c6c6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x34]
0056c6ca  MOVSX EAX,word ptr [EBP + -0x10]
0056c6ce  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c6d4  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x34]
0056c6d8  MOV EDX,dword ptr [EDX]
0056c6da  MOV EAX,dword ptr [EDX + 0x44]
0056c6dd  CALL EAX
0056c6df  PUSH 0x1602f
0056c6e4  MOVSX ECX,word ptr [EBP + -0x10]
0056c6e8  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c6ee  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x34]
0056c6f2  CALL 0x005eaf00
0056c6f7  PUSH 0x0
0056c6f9  MOVSX EAX,word ptr [EBP + -0x10]
0056c6fd  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c703  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x34]
0056c707  MOVSX EAX,word ptr [EBP + -0x10]
0056c70b  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c711  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x34]
0056c715  MOV EDX,dword ptr [EDX]
0056c717  MOV EAX,dword ptr [EDX + 0xb0]
0056c71d  CALL EAX
0056c71f  MOVSX ECX,word ptr [EBP + -0x10]
0056c723  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c729  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x34]
0056c72d  MOVSX ECX,word ptr [EBP + -0x10]
0056c731  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c737  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x34]
0056c73b  MOV EAX,dword ptr [EAX]
0056c73d  MOV EDX,dword ptr [EAX + 0x40]
0056c740  CALL EDX
0056c742  PUSH 0x14
0056c744  MOVSX EAX,word ptr [EBP + -0x10]
0056c748  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c74e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x34]
0056c752  MOVSX EAX,word ptr [EBP + -0x10]
0056c756  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c75c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x34]
0056c760  MOV EDX,dword ptr [EDX]
0056c762  MOV EAX,dword ptr [EDX + 0x6c]
0056c765  CALL EAX
0056c767  MOVSX ECX,word ptr [EBP + -0x10]
0056c76b  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c771  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x34]
0056c775  MOVSX ECX,word ptr [EBP + -0x10]
0056c779  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c77f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x34]
0056c783  MOV EAX,dword ptr [EAX]
0056c785  MOV EDX,dword ptr [EAX + 0x70]
0056c788  CALL EDX
0056c78a  MOVSX EAX,word ptr [EBP + -0x10]
0056c78e  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c794  CMP dword ptr [ECX + EAX*0x4 + 0x44],0x0
0056c799  JNZ 0x0056c7f3
0056c79b  PUSH 0x184
0056c7a0  CALL 0x00686d82
0056c7a5  ADD ESP,0x4
0056c7a8  MOV dword ptr [EBP + -0x28],EAX
0056c7ab  MOV dword ptr [EBP + -0x4],0x2
0056c7b2  CMP dword ptr [EBP + -0x28],0x0
0056c7b6  JZ 0x0056c7c8
0056c7b8  MOV ECX,dword ptr [EBP + -0x28]
0056c7bb  CALL 0x005f5bf0
0056c7c0  MOV dword ptr [EBP + 0xffffff40],EAX
0056c7c6  JMP 0x0056c7d2
0056c7c8  MOV dword ptr [EBP + 0xffffff40],0x0
0056c7d2  MOV EDX,dword ptr [EBP + 0xffffff40]
0056c7d8  MOV dword ptr [EBP + -0x24],EDX
0056c7db  MOV dword ptr [EBP + -0x4],0xffffffff
0056c7e2  MOVSX EAX,word ptr [EBP + -0x10]
0056c7e6  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c7ec  MOV EDX,dword ptr [EBP + -0x24]
0056c7ef  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
0056c7f3  MOVSX EAX,word ptr [EBP + -0x10]
0056c7f7  CMP EAX,0x2
0056c7fa  JGE 0x0056c831
0056c7fc  PUSH 0x0
0056c7fe  MOVSX ECX,word ptr [EBP + -0x10]
0056c802  NEG ECX
0056c804  SBB ECX,ECX
0056c806  AND ECX,0x45
0056c809  PUSH ECX
0056c80a  MOVSX EDX,word ptr [EBP + -0x10]
0056c80e  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c814  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x44]
0056c818  MOVSX EDX,word ptr [EBP + -0x10]
0056c81c  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c822  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x44]
0056c826  MOV EAX,dword ptr [ECX]
0056c828  MOV ECX,EDX
0056c82a  MOV EDX,dword ptr [EAX + 0x44]
0056c82d  CALL EDX
0056c82f  JMP 0x0056c86a
0056c831  PUSH 0x0
0056c833  MOVSX EAX,word ptr [EBP + -0x10]
0056c837  SUB EAX,0x2
0056c83a  NEG EAX
0056c83c  SBB EAX,EAX
0056c83e  AND EAX,0x45
0056c841  ADD EAX,0xff
0056c846  PUSH EAX
0056c847  MOVSX ECX,word ptr [EBP + -0x10]
0056c84b  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c851  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x44]
0056c855  MOVSX ECX,word ptr [EBP + -0x10]
0056c859  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c85f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
0056c863  MOV EAX,dword ptr [EAX]
0056c865  MOV EDX,dword ptr [EAX + 0x44]
0056c868  CALL EDX
0056c86a  PUSH 0xa
0056c86c  MOVSX EAX,word ptr [EBP + -0x10]
0056c870  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c876  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
0056c87a  MOVSX EAX,word ptr [EBP + -0x10]
0056c87e  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c884  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
0056c888  MOV EDX,dword ptr [EDX]
0056c88a  MOV EAX,dword ptr [EDX + 0x6c]
0056c88d  CALL EAX
0056c88f  PUSH 0x16040
0056c894  MOVSX ECX,word ptr [EBP + -0x10]
0056c898  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c89e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
0056c8a2  CALL 0x005eaf00
0056c8a7  PUSH 0x0
0056c8a9  MOVSX EAX,word ptr [EBP + -0x10]
0056c8ad  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c8b3  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
0056c8b7  MOVSX EAX,word ptr [EBP + -0x10]
0056c8bb  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c8c1  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
0056c8c5  MOV EDX,dword ptr [EDX]
0056c8c7  MOV EAX,dword ptr [EDX + 0xb0]
0056c8cd  CALL EAX
0056c8cf  MOVSX ECX,word ptr [EBP + -0x10]
0056c8d3  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c8d9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x44]
0056c8dd  MOVSX ECX,word ptr [EBP + -0x10]
0056c8e1  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c8e7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
0056c8eb  MOV EAX,dword ptr [EAX]
0056c8ed  MOV EDX,dword ptr [EAX + 0x40]
0056c8f0  CALL EDX
0056c8f2  MOVSX EAX,word ptr [EBP + -0x10]
0056c8f6  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c8fc  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
0056c900  MOVSX EAX,word ptr [EBP + -0x10]
0056c904  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c90a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
0056c90e  MOV EDX,dword ptr [EDX]
0056c910  MOV EAX,dword ptr [EDX + 0x70]
0056c913  CALL EAX
0056c915  JMP 0x0056c622
0056c91a  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c920  CMP dword ptr [ECX + 0x30],0x0
0056c924  JNZ 0x0056ca12
0056c92a  PUSH 0x184
0056c92f  CALL 0x00686d82
0056c934  ADD ESP,0x4
0056c937  MOV dword ptr [EBP + -0x30],EAX
0056c93a  MOV dword ptr [EBP + -0x4],0x3
0056c941  CMP dword ptr [EBP + -0x30],0x0
0056c945  JZ 0x0056c957
0056c947  MOV ECX,dword ptr [EBP + -0x30]
0056c94a  CALL 0x005f5bf0
0056c94f  MOV dword ptr [EBP + 0xffffff3c],EAX
0056c955  JMP 0x0056c961
0056c957  MOV dword ptr [EBP + 0xffffff3c],0x0
0056c961  MOV EDX,dword ptr [EBP + 0xffffff3c]
0056c967  MOV dword ptr [EBP + -0x2c],EDX
0056c96a  MOV dword ptr [EBP + -0x4],0xffffffff
0056c971  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c977  MOV ECX,dword ptr [EBP + -0x2c]
0056c97a  MOV dword ptr [EAX + 0x30],ECX
0056c97d  PUSH 0x15f97
0056c982  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c988  MOV ECX,dword ptr [EDX + 0x30]
0056c98b  CALL 0x005eaf00
0056c990  PUSH 0x5a
0056c992  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c998  MOV ECX,dword ptr [EAX + 0x30]
0056c99b  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056c9a1  MOV EAX,dword ptr [EDX + 0x30]
0056c9a4  MOV EDX,dword ptr [ECX]
0056c9a6  MOV ECX,EAX
0056c9a8  MOV EAX,dword ptr [EDX + 0x6c]
0056c9ab  CALL EAX
0056c9ad  PUSH 0x80
0056c9b2  PUSH 0x78
0056c9b4  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c9ba  MOV EDX,dword ptr [ECX + 0x30]
0056c9bd  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c9c3  MOV ECX,dword ptr [EAX + 0x30]
0056c9c6  MOV EDX,dword ptr [EDX]
0056c9c8  MOV EAX,dword ptr [EDX + 0x44]
0056c9cb  CALL EAX
0056c9cd  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c9d3  MOV EDX,dword ptr [ECX + 0x30]
0056c9d6  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c9dc  MOV ECX,dword ptr [EAX + 0x30]
0056c9df  MOV EDX,dword ptr [EDX]
0056c9e1  MOV EAX,dword ptr [EDX + 0x40]
0056c9e4  CALL EAX
0056c9e6  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056c9ec  MOV EDX,dword ptr [ECX + 0x30]
0056c9ef  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056c9f5  MOV ECX,dword ptr [EAX + 0x30]
0056c9f8  MOV EDX,dword ptr [EDX]
0056c9fa  MOV EAX,dword ptr [EDX + 0x70]
0056c9fd  CALL EAX
0056c9ff  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ca05  MOV EDX,dword ptr [ECX + 0x30]
0056ca08  MOV dword ptr [EDX + 0x178],0x4
0056ca12  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056ca18  CMP dword ptr [EAX + 0x1c],0x0
0056ca1c  JNZ 0x0056ca71
0056ca1e  PUSH 0x1dc
0056ca23  CALL 0x00686d82
0056ca28  ADD ESP,0x4
0056ca2b  MOV dword ptr [EBP + -0x38],EAX
0056ca2e  MOV dword ptr [EBP + -0x4],0x4
0056ca35  CMP dword ptr [EBP + -0x38],0x0
0056ca39  JZ 0x0056ca4b
0056ca3b  MOV ECX,dword ptr [EBP + -0x38]
0056ca3e  CALL 0x0056fc10
0056ca43  MOV dword ptr [EBP + 0xffffff38],EAX
0056ca49  JMP 0x0056ca55
0056ca4b  MOV dword ptr [EBP + 0xffffff38],0x0
0056ca55  MOV ECX,dword ptr [EBP + 0xffffff38]
0056ca5b  MOV dword ptr [EBP + -0x34],ECX
0056ca5e  MOV dword ptr [EBP + -0x4],0xffffffff
0056ca65  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056ca6b  MOV EAX,dword ptr [EBP + -0x34]
0056ca6e  MOV dword ptr [EDX + 0x1c],EAX
0056ca71  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ca77  MOV EDX,dword ptr [ECX + 0x1c]
0056ca7a  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056ca80  MOV ECX,dword ptr [EAX + 0x1c]
0056ca83  MOV EDX,dword ptr [EDX]
0056ca85  MOV EAX,dword ptr [EDX + 0x40]
0056ca88  CALL EAX
0056ca8a  PUSH 0x16042
0056ca8f  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ca95  MOV EDX,dword ptr [ECX + 0x1c]
0056ca98  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056ca9e  MOV ECX,dword ptr [EAX + 0x1c]
0056caa1  MOV EDX,dword ptr [EDX]
0056caa3  MOV EAX,dword ptr [EDX + 0xc8]
0056caa9  CALL EAX
0056caab  PUSH 0x0
0056caad  PUSH 0x0
0056caaf  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cab5  MOV EDX,dword ptr [ECX + 0x1c]
0056cab8  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056cabe  MOV ECX,dword ptr [EAX + 0x1c]
0056cac1  MOV EDX,dword ptr [EDX]
0056cac3  MOV EAX,dword ptr [EDX + 0x44]
0056cac6  CALL EAX
0056cac8  PUSH 0x1
0056caca  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cad0  MOV EDX,dword ptr [ECX + 0x1c]
0056cad3  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056cad9  MOV ECX,dword ptr [EAX + 0x1c]
0056cadc  MOV EDX,dword ptr [EDX]
0056cade  MOV EAX,dword ptr [EDX + 0x6c]
0056cae1  CALL EAX
0056cae3  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cae9  MOV EDX,dword ptr [ECX + 0x1c]
0056caec  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056caf2  MOV ECX,dword ptr [EAX + 0x1c]
0056caf5  MOV EDX,dword ptr [EDX]
0056caf7  MOV EAX,dword ptr [EDX + 0xcc]
0056cafd  CALL EAX
0056caff  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cb05  MOV EDX,dword ptr [ECX + 0x1c]
0056cb08  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056cb0e  MOV ECX,dword ptr [EAX + 0x1c]
0056cb11  MOV EDX,dword ptr [EDX]
0056cb13  MOV EAX,dword ptr [EDX + 0x74]
0056cb16  CALL EAX
0056cb18  MOV word ptr [EBP + -0x10],0x0
0056cb1e  JMP 0x0056cb2c
0056cb20  MOV CX,word ptr [EBP + -0x10]
0056cb24  ADD CX,0x1
0056cb28  MOV word ptr [EBP + -0x10],CX
0056cb2c  MOVSX EDX,word ptr [EBP + -0x10]
0056cb30  CMP EDX,0x2
0056cb33  JGE 0x0056cd9d
0056cb39  MOVSX EAX,word ptr [EBP + -0x10]
0056cb3d  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cb43  CMP dword ptr [ECX + EAX*0x4 + 0x54],0x0
0056cb48  JNZ 0x0056cba2
0056cb4a  PUSH 0x178
0056cb4f  CALL 0x00686d82
0056cb54  ADD ESP,0x4
0056cb57  MOV dword ptr [EBP + -0x40],EAX
0056cb5a  MOV dword ptr [EBP + -0x4],0x5
0056cb61  CMP dword ptr [EBP + -0x40],0x0
0056cb65  JZ 0x0056cb77
0056cb67  MOV ECX,dword ptr [EBP + -0x40]
0056cb6a  CALL 0x005eaaf0
0056cb6f  MOV dword ptr [EBP + 0xffffff34],EAX
0056cb75  JMP 0x0056cb81
0056cb77  MOV dword ptr [EBP + 0xffffff34],0x0
0056cb81  MOV EDX,dword ptr [EBP + 0xffffff34]
0056cb87  MOV dword ptr [EBP + -0x3c],EDX
0056cb8a  MOV dword ptr [EBP + -0x4],0xffffffff
0056cb91  MOVSX EAX,word ptr [EBP + -0x10]
0056cb95  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cb9b  MOV EDX,dword ptr [EBP + -0x3c]
0056cb9e  MOV dword ptr [ECX + EAX*0x4 + 0x54],EDX
0056cba2  PUSH 0x0
0056cba4  MOVSX EAX,word ptr [EBP + -0x10]
0056cba8  NEG EAX
0056cbaa  SBB EAX,EAX
0056cbac  AND EAX,0x189
0056cbb1  PUSH EAX
0056cbb2  MOVSX ECX,word ptr [EBP + -0x10]
0056cbb6  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cbbc  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x54]
0056cbc0  MOVSX ECX,word ptr [EBP + -0x10]
0056cbc4  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cbca  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x54]
0056cbce  MOV EAX,dword ptr [EAX]
0056cbd0  MOV EDX,dword ptr [EAX + 0x44]
0056cbd3  CALL EDX
0056cbd5  PUSH 0x16030
0056cbda  MOVSX EAX,word ptr [EBP + -0x10]
0056cbde  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cbe4  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x54]
0056cbe8  CALL 0x005eaf00
0056cbed  MOVSX EDX,word ptr [EBP + -0x10]
0056cbf1  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056cbf7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x54]
0056cbfb  MOVSX EDX,word ptr [EBP + -0x10]
0056cbff  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056cc05  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x54]
0056cc09  MOV EAX,dword ptr [ECX]
0056cc0b  MOV ECX,EDX
0056cc0d  MOV EDX,dword ptr [EAX + 0x40]
0056cc10  CALL EDX
0056cc12  PUSH 0xa
0056cc14  MOVSX EAX,word ptr [EBP + -0x10]
0056cc18  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cc1e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x54]
0056cc22  MOVSX EAX,word ptr [EBP + -0x10]
0056cc26  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cc2c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x54]
0056cc30  MOV EDX,dword ptr [EDX]
0056cc32  MOV EAX,dword ptr [EDX + 0x6c]
0056cc35  CALL EAX
0056cc37  MOVSX ECX,word ptr [EBP + -0x10]
0056cc3b  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cc41  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x54]
0056cc45  MOVSX ECX,word ptr [EBP + -0x10]
0056cc49  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cc4f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x54]
0056cc53  MOV EAX,dword ptr [EAX]
0056cc55  MOV EDX,dword ptr [EAX + 0x70]
0056cc58  CALL EDX
0056cc5a  MOVSX EAX,word ptr [EBP + -0x10]
0056cc5e  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cc64  CMP dword ptr [ECX + EAX*0x4 + 0x5c],0x0
0056cc69  JNZ 0x0056ccc3
0056cc6b  PUSH 0x184
0056cc70  CALL 0x00686d82
0056cc75  ADD ESP,0x4
0056cc78  MOV dword ptr [EBP + -0x48],EAX
0056cc7b  MOV dword ptr [EBP + -0x4],0x6
0056cc82  CMP dword ptr [EBP + -0x48],0x0
0056cc86  JZ 0x0056cc98
0056cc88  MOV ECX,dword ptr [EBP + -0x48]
0056cc8b  CALL 0x005f5bf0
0056cc90  MOV dword ptr [EBP + 0xffffff30],EAX
0056cc96  JMP 0x0056cca2
0056cc98  MOV dword ptr [EBP + 0xffffff30],0x0
0056cca2  MOV EDX,dword ptr [EBP + 0xffffff30]
0056cca8  MOV dword ptr [EBP + -0x44],EDX
0056ccab  MOV dword ptr [EBP + -0x4],0xffffffff
0056ccb2  MOVSX EAX,word ptr [EBP + -0x10]
0056ccb6  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ccbc  MOV EDX,dword ptr [EBP + -0x44]
0056ccbf  MOV dword ptr [ECX + EAX*0x4 + 0x5c],EDX
0056ccc3  PUSH 0x0
0056ccc5  PUSH 0x0
0056ccc7  MOVSX EAX,word ptr [EBP + -0x10]
0056cccb  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ccd1  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x5c]
0056ccd5  MOVSX EAX,word ptr [EBP + -0x10]
0056ccd9  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ccdf  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
0056cce3  MOV EDX,dword ptr [EDX]
0056cce5  MOV EAX,dword ptr [EDX + 0x44]
0056cce8  CALL EAX
0056ccea  PUSH 0x16049
0056ccef  MOVSX ECX,word ptr [EBP + -0x10]
0056ccf3  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056ccf9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x5c]
0056ccfd  CALL 0x005eaf00
0056cd02  MOVSX EAX,word ptr [EBP + -0x10]
0056cd06  PUSH EAX
0056cd07  MOVSX ECX,word ptr [EBP + -0x10]
0056cd0b  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cd11  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x5c]
0056cd15  MOVSX ECX,word ptr [EBP + -0x10]
0056cd19  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cd1f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x5c]
0056cd23  MOV EAX,dword ptr [EAX]
0056cd25  MOV EDX,dword ptr [EAX + 0xb0]
0056cd2b  CALL EDX
0056cd2d  MOVSX EAX,word ptr [EBP + -0x10]
0056cd31  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cd37  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x5c]
0056cd3b  MOVSX EAX,word ptr [EBP + -0x10]
0056cd3f  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cd45  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
0056cd49  MOV EDX,dword ptr [EDX]
0056cd4b  MOV EAX,dword ptr [EDX + 0x40]
0056cd4e  CALL EAX
0056cd50  PUSH 0xa
0056cd52  MOVSX ECX,word ptr [EBP + -0x10]
0056cd56  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cd5c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x5c]
0056cd60  MOVSX ECX,word ptr [EBP + -0x10]
0056cd64  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cd6a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x5c]
0056cd6e  MOV EAX,dword ptr [EAX]
0056cd70  MOV EDX,dword ptr [EAX + 0x6c]
0056cd73  CALL EDX
0056cd75  MOVSX EAX,word ptr [EBP + -0x10]
0056cd79  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cd7f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x5c]
0056cd83  MOVSX EAX,word ptr [EBP + -0x10]
0056cd87  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cd8d  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
0056cd91  MOV EDX,dword ptr [EDX]
0056cd93  MOV EAX,dword ptr [EDX + 0x74]
0056cd96  CALL EAX
0056cd98  JMP 0x0056cb20
0056cd9d  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cda3  CMP dword ptr [ECX + 0x20],0x0
0056cda7  JNZ 0x0056cdfe
0056cda9  PUSH 0x194
0056cdae  CALL 0x00686d82
0056cdb3  ADD ESP,0x4
0056cdb6  MOV dword ptr [EBP + -0x50],EAX
0056cdb9  MOV dword ptr [EBP + -0x4],0x7
0056cdc0  CMP dword ptr [EBP + -0x50],0x0
0056cdc4  JZ 0x0056cdd8
0056cdc6  PUSH 0x9
0056cdc8  MOV ECX,dword ptr [EBP + -0x50]
0056cdcb  CALL 0x005702e0
0056cdd0  MOV dword ptr [EBP + 0xffffff2c],EAX
0056cdd6  JMP 0x0056cde2
0056cdd8  MOV dword ptr [EBP + 0xffffff2c],0x0
0056cde2  MOV EDX,dword ptr [EBP + 0xffffff2c]
0056cde8  MOV dword ptr [EBP + -0x4c],EDX
0056cdeb  MOV dword ptr [EBP + -0x4],0xffffffff
0056cdf2  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056cdf8  MOV ECX,dword ptr [EBP + -0x4c]
0056cdfb  MOV dword ptr [EAX + 0x20],ECX
0056cdfe  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056ce04  MOV EAX,dword ptr [EDX + 0x20]
0056ce07  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ce0d  MOV ECX,dword ptr [ECX + 0x20]
0056ce10  MOV EDX,dword ptr [EAX]
0056ce12  MOV EAX,dword ptr [EDX + 0x40]
0056ce15  CALL EAX
0056ce17  PUSH 0x0
0056ce19  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ce1f  MOV ECX,dword ptr [ECX + 0x20]
0056ce22  CALL 0x005eaf00
0056ce27  PUSH 0xec
0056ce2c  PUSH 0x20f
0056ce31  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056ce37  MOV EAX,dword ptr [EDX + 0x20]
0056ce3a  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ce40  MOV ECX,dword ptr [ECX + 0x20]
0056ce43  MOV EDX,dword ptr [EAX]
0056ce45  MOV EAX,dword ptr [EDX + 0x44]
0056ce48  CALL EAX
0056ce4a  PUSH 0xa
0056ce4c  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ce52  MOV EDX,dword ptr [ECX + 0x20]
0056ce55  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056ce5b  MOV ECX,dword ptr [EAX + 0x20]
0056ce5e  MOV EDX,dword ptr [EDX]
0056ce60  MOV EAX,dword ptr [EDX + 0x6c]
0056ce63  CALL EAX
0056ce65  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ce6b  MOV EDX,dword ptr [ECX + 0x20]
0056ce6e  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056ce74  MOV ECX,dword ptr [EAX + 0x20]
0056ce77  MOV EDX,dword ptr [EDX]
0056ce79  MOV EAX,dword ptr [EDX + 0x74]
0056ce7c  CALL EAX
0056ce7e  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ce84  CMP dword ptr [ECX + 0x24],0x0
0056ce88  JNZ 0x0056cedf
0056ce8a  PUSH 0x194
0056ce8f  CALL 0x00686d82
0056ce94  ADD ESP,0x4
0056ce97  MOV dword ptr [EBP + -0x58],EAX
0056ce9a  MOV dword ptr [EBP + -0x4],0x8
0056cea1  CMP dword ptr [EBP + -0x58],0x0
0056cea5  JZ 0x0056ceb9
0056cea7  PUSH 0x9
0056cea9  MOV ECX,dword ptr [EBP + -0x58]
0056ceac  CALL 0x005702e0
0056ceb1  MOV dword ptr [EBP + 0xffffff28],EAX
0056ceb7  JMP 0x0056cec3
0056ceb9  MOV dword ptr [EBP + 0xffffff28],0x0
0056cec3  MOV EDX,dword ptr [EBP + 0xffffff28]
0056cec9  MOV dword ptr [EBP + -0x54],EDX
0056cecc  MOV dword ptr [EBP + -0x4],0xffffffff
0056ced3  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056ced9  MOV ECX,dword ptr [EBP + -0x54]
0056cedc  MOV dword ptr [EAX + 0x24],ECX
0056cedf  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cee5  MOV EAX,dword ptr [EDX + 0x24]
0056cee8  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056ceee  MOV ECX,dword ptr [ECX + 0x24]
0056cef1  MOV EDX,dword ptr [EAX]
0056cef3  MOV EAX,dword ptr [EDX + 0x40]
0056cef6  CALL EAX
0056cef8  PUSH 0x0
0056cefa  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cf00  MOV ECX,dword ptr [ECX + 0x24]
0056cf03  CALL 0x005eaf00
0056cf08  PUSH 0xec
0056cf0d  PUSH 0x1e
0056cf0f  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cf15  MOV EAX,dword ptr [EDX + 0x24]
0056cf18  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cf1e  MOV ECX,dword ptr [ECX + 0x24]
0056cf21  MOV EDX,dword ptr [EAX]
0056cf23  MOV EAX,dword ptr [EDX + 0x44]
0056cf26  CALL EAX
0056cf28  PUSH 0xa
0056cf2a  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cf30  MOV EDX,dword ptr [ECX + 0x24]
0056cf33  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056cf39  MOV ECX,dword ptr [EAX + 0x24]
0056cf3c  MOV EDX,dword ptr [EDX]
0056cf3e  MOV EAX,dword ptr [EDX + 0x6c]
0056cf41  CALL EAX
0056cf43  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cf49  MOV EDX,dword ptr [ECX + 0x24]
0056cf4c  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056cf52  MOV ECX,dword ptr [EAX + 0x24]
0056cf55  MOV EDX,dword ptr [EDX]
0056cf57  MOV EAX,dword ptr [EDX + 0x74]
0056cf5a  CALL EAX
0056cf5c  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cf62  CMP dword ptr [ECX + 0x28],0x0
0056cf66  JNZ 0x0056cfbd
0056cf68  PUSH 0x194
0056cf6d  CALL 0x00686d82
0056cf72  ADD ESP,0x4
0056cf75  MOV dword ptr [EBP + -0x60],EAX
0056cf78  MOV dword ptr [EBP + -0x4],0x9
0056cf7f  CMP dword ptr [EBP + -0x60],0x0
0056cf83  JZ 0x0056cf97
0056cf85  PUSH 0x1
0056cf87  MOV ECX,dword ptr [EBP + -0x60]
0056cf8a  CALL 0x005702e0
0056cf8f  MOV dword ptr [EBP + 0xffffff24],EAX
0056cf95  JMP 0x0056cfa1
0056cf97  MOV dword ptr [EBP + 0xffffff24],0x0
0056cfa1  MOV EDX,dword ptr [EBP + 0xffffff24]
0056cfa7  MOV dword ptr [EBP + -0x5c],EDX
0056cfaa  MOV dword ptr [EBP + -0x4],0xffffffff
0056cfb1  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056cfb7  MOV ECX,dword ptr [EBP + -0x5c]
0056cfba  MOV dword ptr [EAX + 0x28],ECX
0056cfbd  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cfc3  MOV EAX,dword ptr [EDX + 0x28]
0056cfc6  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cfcc  MOV ECX,dword ptr [ECX + 0x28]
0056cfcf  MOV EDX,dword ptr [EAX]
0056cfd1  MOV EAX,dword ptr [EDX + 0x40]
0056cfd4  CALL EAX
0056cfd6  PUSH 0x0
0056cfd8  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cfde  MOV ECX,dword ptr [ECX + 0x28]
0056cfe1  CALL 0x005eaf00
0056cfe6  PUSH 0x111
0056cfeb  PUSH 0x25f
0056cff0  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056cff6  MOV EAX,dword ptr [EDX + 0x28]
0056cff9  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056cfff  MOV ECX,dword ptr [ECX + 0x28]
0056d002  MOV EDX,dword ptr [EAX]
0056d004  MOV EAX,dword ptr [EDX + 0x44]
0056d007  CALL EAX
0056d009  PUSH 0xa
0056d00b  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d011  MOV EDX,dword ptr [ECX + 0x28]
0056d014  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d01a  MOV ECX,dword ptr [EAX + 0x28]
0056d01d  MOV EDX,dword ptr [EDX]
0056d01f  MOV EAX,dword ptr [EDX + 0x6c]
0056d022  CALL EAX
0056d024  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d02a  MOV EDX,dword ptr [ECX + 0x28]
0056d02d  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d033  MOV ECX,dword ptr [EAX + 0x28]
0056d036  MOV EDX,dword ptr [EDX]
0056d038  MOV EAX,dword ptr [EDX + 0x74]
0056d03b  CALL EAX
0056d03d  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d043  CMP dword ptr [ECX + 0x2c],0x0
0056d047  JNZ 0x0056d09c
0056d049  PUSH 0x194
0056d04e  CALL 0x00686d82
0056d053  ADD ESP,0x4
0056d056  MOV dword ptr [EBP + -0x68],EAX
0056d059  MOV dword ptr [EBP + -0x4],0xa
0056d060  CMP dword ptr [EBP + -0x68],0x0
0056d064  JZ 0x0056d076
0056d066  MOV ECX,dword ptr [EBP + -0x68]
0056d069  CALL 0x00570d50
0056d06e  MOV dword ptr [EBP + 0xffffff20],EAX
0056d074  JMP 0x0056d080
0056d076  MOV dword ptr [EBP + 0xffffff20],0x0
0056d080  MOV EDX,dword ptr [EBP + 0xffffff20]
0056d086  MOV dword ptr [EBP + -0x64],EDX
0056d089  MOV dword ptr [EBP + -0x4],0xffffffff
0056d090  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d096  MOV ECX,dword ptr [EBP + -0x64]
0056d099  MOV dword ptr [EAX + 0x2c],ECX
0056d09c  PUSH 0x0
0056d09e  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d0a4  MOV ECX,dword ptr [EDX + 0x2c]
0056d0a7  CALL 0x005eaf00
0056d0ac  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d0b2  MOV ECX,dword ptr [EAX + 0x2c]
0056d0b5  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d0bb  MOV EAX,dword ptr [EDX + 0x2c]
0056d0be  MOV EDX,dword ptr [ECX]
0056d0c0  MOV ECX,EAX
0056d0c2  MOV EAX,dword ptr [EDX + 0x40]
0056d0c5  CALL EAX
0056d0c7  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d0cd  MOV EDX,dword ptr [ECX + 0x2c]
0056d0d0  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d0d6  MOV ECX,dword ptr [EAX + 0x2c]
0056d0d9  MOV EDX,dword ptr [EDX]
0056d0db  MOV EAX,dword ptr [EDX + 0x74]
0056d0de  CALL EAX
0056d0e0  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d0e6  CMP dword ptr [ECX + 0x64],0x0
0056d0ea  JNZ 0x0056d13f
0056d0ec  PUSH 0x184
0056d0f1  CALL 0x00686d82
0056d0f6  ADD ESP,0x4
0056d0f9  MOV dword ptr [EBP + -0x70],EAX
0056d0fc  MOV dword ptr [EBP + -0x4],0xb
0056d103  CMP dword ptr [EBP + -0x70],0x0
0056d107  JZ 0x0056d119
0056d109  MOV ECX,dword ptr [EBP + -0x70]
0056d10c  CALL 0x005f5bf0
0056d111  MOV dword ptr [EBP + 0xffffff1c],EAX
0056d117  JMP 0x0056d123
0056d119  MOV dword ptr [EBP + 0xffffff1c],0x0
0056d123  MOV EDX,dword ptr [EBP + 0xffffff1c]
0056d129  MOV dword ptr [EBP + -0x6c],EDX
0056d12c  MOV dword ptr [EBP + -0x4],0xffffffff
0056d133  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d139  MOV ECX,dword ptr [EBP + -0x6c]
0056d13c  MOV dword ptr [EAX + 0x64],ECX
0056d13f  PUSH 0x0
0056d141  PUSH 0x0
0056d143  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d149  MOV EAX,dword ptr [EDX + 0x64]
0056d14c  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d152  MOV ECX,dword ptr [ECX + 0x64]
0056d155  MOV EDX,dword ptr [EAX]
0056d157  MOV EAX,dword ptr [EDX + 0x44]
0056d15a  CALL EAX
0056d15c  PUSH 0x1602e
0056d161  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d167  MOV ECX,dword ptr [ECX + 0x64]
0056d16a  CALL 0x005eaf00
0056d16f  PUSH 0x0
0056d171  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d177  MOV EAX,dword ptr [EDX + 0x64]
0056d17a  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d180  MOV ECX,dword ptr [ECX + 0x64]
0056d183  MOV EDX,dword ptr [EAX]
0056d185  MOV EAX,dword ptr [EDX + 0xb0]
0056d18b  CALL EAX
0056d18d  PUSH 0xa
0056d18f  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d195  MOV EDX,dword ptr [ECX + 0x64]
0056d198  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d19e  MOV ECX,dword ptr [EAX + 0x64]
0056d1a1  MOV EDX,dword ptr [EDX]
0056d1a3  MOV EAX,dword ptr [EDX + 0x6c]
0056d1a6  CALL EAX
0056d1a8  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d1ae  MOV EDX,dword ptr [ECX + 0x64]
0056d1b1  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d1b7  MOV ECX,dword ptr [EAX + 0x64]
0056d1ba  MOV EDX,dword ptr [EDX]
0056d1bc  MOV EAX,dword ptr [EDX + 0x40]
0056d1bf  CALL EAX
0056d1c1  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d1c7  MOV EDX,dword ptr [ECX + 0x64]
0056d1ca  MOV dword ptr [EDX + 0x178],0x8
0056d1d4  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d1da  MOV ECX,dword ptr [EAX + 0x64]
0056d1dd  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d1e3  MOV EAX,dword ptr [EDX + 0x64]
0056d1e6  MOV EDX,dword ptr [ECX]
0056d1e8  MOV ECX,EAX
0056d1ea  MOV EAX,dword ptr [EDX + 0x70]
0056d1ed  CALL EAX
0056d1ef  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d1f5  CMP dword ptr [ECX + 0x68],0x0
0056d1f9  JNZ 0x0056d24e
0056d1fb  PUSH 0x184
0056d200  CALL 0x00686d82
0056d205  ADD ESP,0x4
0056d208  MOV dword ptr [EBP + -0x78],EAX
0056d20b  MOV dword ptr [EBP + -0x4],0xc
0056d212  CMP dword ptr [EBP + -0x78],0x0
0056d216  JZ 0x0056d228
0056d218  MOV ECX,dword ptr [EBP + -0x78]
0056d21b  CALL 0x005f5bf0
0056d220  MOV dword ptr [EBP + 0xffffff18],EAX
0056d226  JMP 0x0056d232
0056d228  MOV dword ptr [EBP + 0xffffff18],0x0
0056d232  MOV EDX,dword ptr [EBP + 0xffffff18]
0056d238  MOV dword ptr [EBP + -0x74],EDX
0056d23b  MOV dword ptr [EBP + -0x4],0xffffffff
0056d242  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d248  MOV ECX,dword ptr [EBP + -0x74]
0056d24b  MOV dword ptr [EAX + 0x68],ECX
0056d24e  PUSH 0x0
0056d250  PUSH 0x0
0056d252  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d258  MOV EAX,dword ptr [EDX + 0x68]
0056d25b  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d261  MOV ECX,dword ptr [ECX + 0x68]
0056d264  MOV EDX,dword ptr [EAX]
0056d266  MOV EAX,dword ptr [EDX + 0x44]
0056d269  CALL EAX
0056d26b  PUSH 0x1603c
0056d270  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d276  MOV ECX,dword ptr [ECX + 0x68]
0056d279  CALL 0x005eaf00
0056d27e  PUSH 0x0
0056d280  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d286  MOV EAX,dword ptr [EDX + 0x68]
0056d289  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d28f  MOV ECX,dword ptr [ECX + 0x68]
0056d292  MOV EDX,dword ptr [EAX]
0056d294  MOV EAX,dword ptr [EDX + 0xb0]
0056d29a  CALL EAX
0056d29c  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d2a2  MOV EDX,dword ptr [ECX + 0x68]
0056d2a5  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d2ab  MOV ECX,dword ptr [EAX + 0x68]
0056d2ae  MOV EDX,dword ptr [EDX]
0056d2b0  MOV EAX,dword ptr [EDX + 0x40]
0056d2b3  CALL EAX
0056d2b5  PUSH 0xa
0056d2b7  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d2bd  MOV EDX,dword ptr [ECX + 0x68]
0056d2c0  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d2c6  MOV ECX,dword ptr [EAX + 0x68]
0056d2c9  MOV EDX,dword ptr [EDX]
0056d2cb  MOV EAX,dword ptr [EDX + 0x6c]
0056d2ce  CALL EAX
0056d2d0  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d2d6  MOV EDX,dword ptr [ECX + 0x68]
0056d2d9  MOV dword ptr [EDX + 0x178],0xb
0056d2e3  PUSH 0x1c
0056d2e5  CALL 0x00686d82
0056d2ea  ADD ESP,0x4
0056d2ed  MOV dword ptr [EBP + -0x80],EAX
0056d2f0  MOV dword ptr [EBP + -0x4],0xd
0056d2f7  CMP dword ptr [EBP + -0x80],0x0
0056d2fb  JZ 0x0056d30f
0056d2fd  PUSH 0x0
0056d2ff  MOV ECX,dword ptr [EBP + -0x80]
0056d302  CALL 0x00600a70
0056d307  MOV dword ptr [EBP + 0xffffff14],EAX
0056d30d  JMP 0x0056d319
0056d30f  MOV dword ptr [EBP + 0xffffff14],0x0
0056d319  MOV EAX,dword ptr [EBP + 0xffffff14]
0056d31f  MOV dword ptr [EBP + -0x7c],EAX
0056d322  MOV dword ptr [EBP + -0x4],0xffffffff
0056d329  MOV ECX,dword ptr [EBP + -0x7c]
0056d32c  PUSH ECX
0056d32d  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d333  MOV ECX,dword ptr [EDX + 0x68]
0056d336  CALL 0x005f5d50
0056d33b  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d341  MOV ECX,dword ptr [EAX + 0x68]
0056d344  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d34a  MOV EAX,dword ptr [EDX + 0x68]
0056d34d  MOV EDX,dword ptr [ECX]
0056d34f  MOV ECX,EAX
0056d351  MOV EAX,dword ptr [EDX + 0x74]
0056d354  CALL EAX
0056d356  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d35c  CMP dword ptr [ECX + 0x6c],0x0
0056d360  JNZ 0x0056d3c4
0056d362  PUSH 0x184
0056d367  CALL 0x00686d82
0056d36c  ADD ESP,0x4
0056d36f  MOV dword ptr [EBP + 0xffffff78],EAX
0056d375  MOV dword ptr [EBP + -0x4],0xe
0056d37c  CMP dword ptr [EBP + 0xffffff78],0x0
0056d383  JZ 0x0056d398
0056d385  MOV ECX,dword ptr [EBP + 0xffffff78]
0056d38b  CALL 0x005f5bf0
0056d390  MOV dword ptr [EBP + 0xffffff10],EAX
0056d396  JMP 0x0056d3a2
0056d398  MOV dword ptr [EBP + 0xffffff10],0x0
0056d3a2  MOV EDX,dword ptr [EBP + 0xffffff10]
0056d3a8  MOV dword ptr [EBP + 0xffffff7c],EDX
0056d3ae  MOV dword ptr [EBP + -0x4],0xffffffff
0056d3b5  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d3bb  MOV ECX,dword ptr [EBP + 0xffffff7c]
0056d3c1  MOV dword ptr [EAX + 0x6c],ECX
0056d3c4  PUSH 0x0
0056d3c6  PUSH 0x0
0056d3c8  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d3ce  MOV EAX,dword ptr [EDX + 0x6c]
0056d3d1  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d3d7  MOV ECX,dword ptr [ECX + 0x6c]
0056d3da  MOV EDX,dword ptr [EAX]
0056d3dc  MOV EAX,dword ptr [EDX + 0x44]
0056d3df  CALL EAX
0056d3e1  PUSH 0x1603d
0056d3e6  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d3ec  MOV ECX,dword ptr [ECX + 0x6c]
0056d3ef  CALL 0x005eaf00
0056d3f4  PUSH 0x0
0056d3f6  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d3fc  MOV EAX,dword ptr [EDX + 0x6c]
0056d3ff  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d405  MOV ECX,dword ptr [ECX + 0x6c]
0056d408  MOV EDX,dword ptr [EAX]
0056d40a  MOV EAX,dword ptr [EDX + 0xb0]
0056d410  CALL EAX
0056d412  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d418  MOV EDX,dword ptr [ECX + 0x6c]
0056d41b  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d421  MOV ECX,dword ptr [EAX + 0x6c]
0056d424  MOV EDX,dword ptr [EDX]
0056d426  MOV EAX,dword ptr [EDX + 0x40]
0056d429  CALL EAX
0056d42b  PUSH 0xa
0056d42d  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d433  MOV EDX,dword ptr [ECX + 0x6c]
0056d436  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d43c  MOV ECX,dword ptr [EAX + 0x6c]
0056d43f  MOV EDX,dword ptr [EDX]
0056d441  MOV EAX,dword ptr [EDX + 0x6c]
0056d444  CALL EAX
0056d446  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d44c  MOV EDX,dword ptr [ECX + 0x6c]
0056d44f  MOV dword ptr [EDX + 0x178],0xd
0056d459  PUSH 0x1c
0056d45b  CALL 0x00686d82
0056d460  ADD ESP,0x4
0056d463  MOV dword ptr [EBP + 0xffffff70],EAX
0056d469  MOV dword ptr [EBP + -0x4],0xf
0056d470  CMP dword ptr [EBP + 0xffffff70],0x0
0056d477  JZ 0x0056d48e
0056d479  PUSH 0x0
0056d47b  MOV ECX,dword ptr [EBP + 0xffffff70]
0056d481  CALL 0x00600a70
0056d486  MOV dword ptr [EBP + 0xffffff0c],EAX
0056d48c  JMP 0x0056d498
0056d48e  MOV dword ptr [EBP + 0xffffff0c],0x0
0056d498  MOV EAX,dword ptr [EBP + 0xffffff0c]
0056d49e  MOV dword ptr [EBP + 0xffffff74],EAX
0056d4a4  MOV dword ptr [EBP + -0x4],0xffffffff
0056d4ab  MOV ECX,dword ptr [EBP + 0xffffff74]
0056d4b1  PUSH ECX
0056d4b2  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d4b8  MOV ECX,dword ptr [EDX + 0x6c]
0056d4bb  CALL 0x005f5d50
0056d4c0  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d4c6  MOV ECX,dword ptr [EAX + 0x6c]
0056d4c9  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d4cf  MOV EAX,dword ptr [EDX + 0x6c]
0056d4d2  MOV EDX,dword ptr [ECX]
0056d4d4  MOV ECX,EAX
0056d4d6  MOV EAX,dword ptr [EDX + 0x74]
0056d4d9  CALL EAX
0056d4db  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d4e1  CMP dword ptr [ECX + 0x70],0x0
0056d4e5  JNZ 0x0056d549
0056d4e7  PUSH 0x184
0056d4ec  CALL 0x00686d82
0056d4f1  ADD ESP,0x4
0056d4f4  MOV dword ptr [EBP + 0xffffff68],EAX
0056d4fa  MOV dword ptr [EBP + -0x4],0x10
0056d501  CMP dword ptr [EBP + 0xffffff68],0x0
0056d508  JZ 0x0056d51d
0056d50a  MOV ECX,dword ptr [EBP + 0xffffff68]
0056d510  CALL 0x005f5bf0
0056d515  MOV dword ptr [EBP + 0xffffff08],EAX
0056d51b  JMP 0x0056d527
0056d51d  MOV dword ptr [EBP + 0xffffff08],0x0
0056d527  MOV EDX,dword ptr [EBP + 0xffffff08]
0056d52d  MOV dword ptr [EBP + 0xffffff6c],EDX
0056d533  MOV dword ptr [EBP + -0x4],0xffffffff
0056d53a  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d540  MOV ECX,dword ptr [EBP + 0xffffff6c]
0056d546  MOV dword ptr [EAX + 0x70],ECX
0056d549  PUSH 0x0
0056d54b  PUSH 0x0
0056d54d  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d553  MOV EAX,dword ptr [EDX + 0x70]
0056d556  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d55c  MOV ECX,dword ptr [ECX + 0x70]
0056d55f  MOV EDX,dword ptr [EAX]
0056d561  MOV EAX,dword ptr [EDX + 0x44]
0056d564  CALL EAX
0056d566  PUSH 0x1603f
0056d56b  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d571  MOV ECX,dword ptr [ECX + 0x70]
0056d574  CALL 0x005eaf00
0056d579  PUSH 0x0
0056d57b  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d581  MOV EAX,dword ptr [EDX + 0x70]
0056d584  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d58a  MOV ECX,dword ptr [ECX + 0x70]
0056d58d  MOV EDX,dword ptr [EAX]
0056d58f  MOV EAX,dword ptr [EDX + 0xb0]
0056d595  CALL EAX
0056d597  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d59d  MOV EDX,dword ptr [ECX + 0x70]
0056d5a0  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d5a6  MOV ECX,dword ptr [EAX + 0x70]
0056d5a9  MOV EDX,dword ptr [EDX]
0056d5ab  MOV EAX,dword ptr [EDX + 0x40]
0056d5ae  CALL EAX
0056d5b0  PUSH 0xa
0056d5b2  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d5b8  MOV EDX,dword ptr [ECX + 0x70]
0056d5bb  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d5c1  MOV ECX,dword ptr [EAX + 0x70]
0056d5c4  MOV EDX,dword ptr [EDX]
0056d5c6  MOV EAX,dword ptr [EDX + 0x6c]
0056d5c9  CALL EAX
0056d5cb  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d5d1  MOV EDX,dword ptr [ECX + 0x70]
0056d5d4  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d5da  MOV ECX,dword ptr [EAX + 0x70]
0056d5dd  MOV EDX,dword ptr [EDX]
0056d5df  MOV EAX,dword ptr [EDX + 0x74]
0056d5e2  CALL EAX
0056d5e4  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d5ea  CMP dword ptr [ECX + 0x74],0x0
0056d5ee  JNZ 0x0056d652
0056d5f0  PUSH 0x178
0056d5f5  CALL 0x00686d82
0056d5fa  ADD ESP,0x4
0056d5fd  MOV dword ptr [EBP + 0xffffff60],EAX
0056d603  MOV dword ptr [EBP + -0x4],0x11
0056d60a  CMP dword ptr [EBP + 0xffffff60],0x0
0056d611  JZ 0x0056d626
0056d613  MOV ECX,dword ptr [EBP + 0xffffff60]
0056d619  CALL 0x005eaaf0
0056d61e  MOV dword ptr [EBP + 0xffffff04],EAX
0056d624  JMP 0x0056d630
0056d626  MOV dword ptr [EBP + 0xffffff04],0x0
0056d630  MOV EDX,dword ptr [EBP + 0xffffff04]
0056d636  MOV dword ptr [EBP + 0xffffff64],EDX
0056d63c  MOV dword ptr [EBP + -0x4],0xffffffff
0056d643  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d649  MOV ECX,dword ptr [EBP + 0xffffff64]
0056d64f  MOV dword ptr [EAX + 0x74],ECX
0056d652  PUSH 0x0
0056d654  PUSH 0x0
0056d656  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d65c  MOV EAX,dword ptr [EDX + 0x74]
0056d65f  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d665  MOV ECX,dword ptr [ECX + 0x74]
0056d668  MOV EDX,dword ptr [EAX]
0056d66a  MOV EAX,dword ptr [EDX + 0x44]
0056d66d  CALL EAX
0056d66f  PUSH 0x1603b
0056d674  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d67a  MOV ECX,dword ptr [ECX + 0x74]
0056d67d  CALL 0x005eaf00
0056d682  PUSH 0x0
0056d684  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d68a  MOV EAX,dword ptr [EDX + 0x74]
0056d68d  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d693  MOV ECX,dword ptr [ECX + 0x74]
0056d696  MOV EDX,dword ptr [EAX]
0056d698  MOV EAX,dword ptr [EDX + 0xb0]
0056d69e  CALL EAX
0056d6a0  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d6a6  MOV EDX,dword ptr [ECX + 0x74]
0056d6a9  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d6af  MOV ECX,dword ptr [EAX + 0x74]
0056d6b2  MOV EDX,dword ptr [EDX]
0056d6b4  MOV EAX,dword ptr [EDX + 0x40]
0056d6b7  CALL EAX
0056d6b9  PUSH 0x2
0056d6bb  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d6c1  MOV EDX,dword ptr [ECX + 0x74]
0056d6c4  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d6ca  MOV ECX,dword ptr [EAX + 0x74]
0056d6cd  MOV EDX,dword ptr [EDX]
0056d6cf  MOV EAX,dword ptr [EDX + 0x6c]
0056d6d2  CALL EAX
0056d6d4  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d6da  MOV EDX,dword ptr [ECX + 0x74]
0056d6dd  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d6e3  MOV ECX,dword ptr [EAX + 0x74]
0056d6e6  MOV EDX,dword ptr [EDX]
0056d6e8  MOV EAX,dword ptr [EDX + 0x74]
0056d6eb  CALL EAX
0056d6ed  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d6f3  CMP dword ptr [ECX + 0x78],0x0
0056d6f7  JNZ 0x0056d75b
0056d6f9  PUSH 0x178
0056d6fe  CALL 0x00686d82
0056d703  ADD ESP,0x4
0056d706  MOV dword ptr [EBP + 0xffffff58],EAX
0056d70c  MOV dword ptr [EBP + -0x4],0x12
0056d713  CMP dword ptr [EBP + 0xffffff58],0x0
0056d71a  JZ 0x0056d72f
0056d71c  MOV ECX,dword ptr [EBP + 0xffffff58]
0056d722  CALL 0x005eaaf0
0056d727  MOV dword ptr [EBP + 0xffffff00],EAX
0056d72d  JMP 0x0056d739
0056d72f  MOV dword ptr [EBP + 0xffffff00],0x0
0056d739  MOV EDX,dword ptr [EBP + 0xffffff00]
0056d73f  MOV dword ptr [EBP + 0xffffff5c],EDX
0056d745  MOV dword ptr [EBP + -0x4],0xffffffff
0056d74c  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d752  MOV ECX,dword ptr [EBP + 0xffffff5c]
0056d758  MOV dword ptr [EAX + 0x78],ECX
0056d75b  PUSH 0x0
0056d75d  PUSH 0x0
0056d75f  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d765  MOV EAX,dword ptr [EDX + 0x78]
0056d768  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d76e  MOV ECX,dword ptr [ECX + 0x78]
0056d771  MOV EDX,dword ptr [EAX]
0056d773  MOV EAX,dword ptr [EDX + 0x44]
0056d776  CALL EAX
0056d778  PUSH 0x16047
0056d77d  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d783  MOV ECX,dword ptr [ECX + 0x78]
0056d786  CALL 0x005eaf00
0056d78b  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d791  MOV EAX,dword ptr [EDX + 0x9c]
0056d797  PUSH EAX
0056d798  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d79e  MOV EDX,dword ptr [ECX + 0x78]
0056d7a1  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d7a7  MOV ECX,dword ptr [EAX + 0x78]
0056d7aa  MOV EDX,dword ptr [EDX]
0056d7ac  MOV EAX,dword ptr [EDX + 0xb0]
0056d7b2  CALL EAX
0056d7b4  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d7ba  MOV EDX,dword ptr [ECX + 0x78]
0056d7bd  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d7c3  MOV ECX,dword ptr [EAX + 0x78]
0056d7c6  MOV EDX,dword ptr [EDX]
0056d7c8  MOV EAX,dword ptr [EDX + 0x40]
0056d7cb  CALL EAX
0056d7cd  PUSH 0xa
0056d7cf  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d7d5  MOV EDX,dword ptr [ECX + 0x78]
0056d7d8  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d7de  MOV ECX,dword ptr [EAX + 0x78]
0056d7e1  MOV EDX,dword ptr [EDX]
0056d7e3  MOV EAX,dword ptr [EDX + 0x6c]
0056d7e6  CALL EAX
0056d7e8  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d7ee  MOV EDX,dword ptr [ECX + 0x78]
0056d7f1  MOV EAX,dword ptr [EBP + 0xffffff4c]
0056d7f7  MOV ECX,dword ptr [EAX + 0x78]
0056d7fa  MOV EDX,dword ptr [EDX]
0056d7fc  MOV EAX,dword ptr [EDX + 0x74]
0056d7ff  CALL EAX
0056d801  MOV word ptr [EBP + -0x10],0x0
0056d807  JMP 0x0056d815
0056d809  MOV CX,word ptr [EBP + -0x10]
0056d80d  ADD CX,0x1
0056d811  MOV word ptr [EBP + -0x10],CX
0056d815  MOVSX EDX,word ptr [EBP + -0x10]
0056d819  CMP EDX,0x7
0056d81c  JGE 0x0056d971
0056d822  MOVSX EAX,word ptr [EBP + -0x10]
0056d826  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d82c  CMP dword ptr [ECX + EAX*0x4 + 0x7c],0x0
0056d831  JNZ 0x0056d89a
0056d833  PUSH 0x178
0056d838  CALL 0x00686d82
0056d83d  ADD ESP,0x4
0056d840  MOV dword ptr [EBP + 0xffffff50],EAX
0056d846  MOV dword ptr [EBP + -0x4],0x13
0056d84d  CMP dword ptr [EBP + 0xffffff50],0x0
0056d854  JZ 0x0056d869
0056d856  MOV ECX,dword ptr [EBP + 0xffffff50]
0056d85c  CALL 0x005eaaf0
0056d861  MOV dword ptr [EBP + 0xfffffefc],EAX
0056d867  JMP 0x0056d873
0056d869  MOV dword ptr [EBP + 0xfffffefc],0x0
0056d873  MOV EDX,dword ptr [EBP + 0xfffffefc]
0056d879  MOV dword ptr [EBP + 0xffffff54],EDX
0056d87f  MOV dword ptr [EBP + -0x4],0xffffffff
0056d886  MOVSX EAX,word ptr [EBP + -0x10]
0056d88a  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d890  MOV EDX,dword ptr [EBP + 0xffffff54]
0056d896  MOV dword ptr [ECX + EAX*0x4 + 0x7c],EDX
0056d89a  PUSH 0x0
0056d89c  PUSH 0x0
0056d89e  MOVSX EAX,word ptr [EBP + -0x10]
0056d8a2  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d8a8  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056d8ac  MOVSX EAX,word ptr [EBP + -0x10]
0056d8b0  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d8b6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056d8ba  MOV EDX,dword ptr [EDX]
0056d8bc  MOV EAX,dword ptr [EDX + 0x44]
0056d8bf  CALL EAX
0056d8c1  PUSH 0x1603e
0056d8c6  MOVSX ECX,word ptr [EBP + -0x10]
0056d8ca  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d8d0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056d8d4  CALL 0x005eaf00
0056d8d9  PUSH 0x0
0056d8db  MOVSX EAX,word ptr [EBP + -0x10]
0056d8df  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d8e5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056d8e9  MOVSX EAX,word ptr [EBP + -0x10]
0056d8ed  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d8f3  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056d8f7  MOV EDX,dword ptr [EDX]
0056d8f9  MOV EAX,dword ptr [EDX + 0xb0]
0056d8ff  CALL EAX
0056d901  MOVSX ECX,word ptr [EBP + -0x10]
0056d905  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d90b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056d90f  MOVSX ECX,word ptr [EBP + -0x10]
0056d913  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d919  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056d91d  MOV EAX,dword ptr [EAX]
0056d91f  MOV EDX,dword ptr [EAX + 0x40]
0056d922  CALL EDX
0056d924  PUSH 0xa
0056d926  MOVSX EAX,word ptr [EBP + -0x10]
0056d92a  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d930  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056d934  MOVSX EAX,word ptr [EBP + -0x10]
0056d938  MOV ECX,dword ptr [EBP + 0xffffff4c]
0056d93e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056d942  MOV EDX,dword ptr [EDX]
0056d944  MOV EAX,dword ptr [EDX + 0x6c]
0056d947  CALL EAX
0056d949  MOVSX ECX,word ptr [EBP + -0x10]
0056d94d  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d953  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056d957  MOVSX ECX,word ptr [EBP + -0x10]
0056d95b  MOV EDX,dword ptr [EBP + 0xffffff4c]
0056d961  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056d965  MOV EAX,dword ptr [EAX]
0056d967  MOV EDX,dword ptr [EAX + 0x70]
0056d96a  CALL EDX
0056d96c  JMP 0x0056d809
0056d971  PUSH 0x1
0056d973  MOV EAX,[0x0079344c]
0056d978  MOV ECX,dword ptr [EAX + 0x4]
0056d97b  MOV EDX,dword ptr [0x0079344c]
0056d981  MOV EAX,dword ptr [EDX + 0x4]
0056d984  MOV EDX,dword ptr [ECX]
0056d986  MOV ECX,EAX
0056d988  MOV EAX,dword ptr [EDX + 0x4]
0056d98b  CALL EAX
0056d98d  PUSH 0x0
0056d98f  MOV ECX,dword ptr [0x0079344c]
0056d995  MOV EDX,dword ptr [ECX + 0x4]
0056d998  MOV EAX,[0x0079344c]
0056d99d  MOV ECX,dword ptr [EAX + 0x4]
0056d9a0  MOV EDX,dword ptr [EDX]
0056d9a2  MOV EAX,dword ptr [EDX + 0x1c]
0056d9a5  CALL EAX
0056d9a7  PUSH 0x749848
0056d9ac  PUSH 0x5
0056d9ae  MOV ECX,dword ptr [0x00793578]
0056d9b4  CALL 0x0057ab80
0056d9b9  MOV ECX,dword ptr [EBP + -0xc]
0056d9bc  MOV dword ptr FS:[0x0],ECX
0056d9c3  POP ECX
0056d9c4  MOV ESP,EBP
0056d9c6  POP EBP
0056d9c7  RET

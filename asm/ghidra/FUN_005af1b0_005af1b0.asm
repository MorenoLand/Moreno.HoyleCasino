; FUN_005af1b0  005af1b0
005af1b0  PUSH EBP
005af1b1  MOV EBP,ESP
005af1b3  PUSH -0x1
005af1b5  PUSH 0x6a7ce2
005af1ba  MOV EAX,FS:[0x0]
005af1c0  PUSH EAX
005af1c1  SUB ESP,0x40
005af1c4  MOV EAX,[0x00781870]
005af1c9  XOR EAX,EBP
005af1cb  PUSH EAX
005af1cc  LEA EAX,[EBP + -0xc]
005af1cf  MOV FS:[0x0],EAX
005af1d5  MOV dword ptr [EBP + -0x3c],ECX
005af1d8  MOV EAX,[0x0162ee84]
005af1dd  MOV CL,byte ptr [EAX + 0x25]
005af1e0  MOV byte ptr [EBP + -0x19],CL
005af1e3  MOVZX EDX,byte ptr [EBP + -0x19]
005af1e7  TEST EDX,EDX
005af1e9  JZ 0x005af1f6
005af1eb  MOV ECX,dword ptr [0x00793604]
005af1f1  CALL 0x005b7220
005af1f6  MOV ECX,dword ptr [0x007935f8]
005af1fc  CALL 0x005a7ea0
005af201  PUSH 0x0
005af203  MOV ECX,dword ptr [0x007935f8]
005af209  CALL 0x005a8730
005af20e  MOV ECX,dword ptr [0x00793604]
005af214  CALL 0x005b5240
005af219  CMP EAX,-0x1
005af21c  JZ 0x005af22d
005af21e  PUSH 0x0
005af220  MOV ECX,dword ptr [EBP + -0x3c]
005af223  CALL 0x005ad620
005af228  JMP 0x005af83f
005af22d  MOV EAX,dword ptr [EBP + -0x3c]
005af230  MOVZX ECX,byte ptr [EAX + 0x7]
005af234  TEST ECX,ECX
005af236  JNZ 0x005af271
005af238  MOV EDX,dword ptr [EBP + -0x3c]
005af23b  MOV byte ptr [EDX + 0x7],0x1
005af23f  PUSH 0x4
005af241  PUSH 0x7
005af243  MOV ECX,dword ptr [0x00793604]
005af249  CALL 0x005b7310
005af24e  PUSH 0x0
005af250  PUSH 0x1
005af252  MOV EAX,[0x00793600]
005af257  MOV ECX,dword ptr [EAX + 0x4]
005af25a  MOV EDX,dword ptr [0x00793600]
005af260  MOV EAX,dword ptr [EDX + 0x4]
005af263  MOV EDX,dword ptr [ECX]
005af265  MOV ECX,EAX
005af267  MOV EAX,dword ptr [EDX + 0x8]
005af26a  CALL EAX
005af26c  JMP 0x005af83f
005af271  MOV ECX,dword ptr [0x00793604]
005af277  CALL 0x005b5380
005af27c  MOV dword ptr [EBP + -0x10],EAX
005af27f  CMP dword ptr [EBP + -0x10],-0x1
005af283  JZ 0x005af2ee
005af285  MOV ECX,dword ptr [EBP + -0x10]
005af288  PUSH ECX
005af289  CALL 0x005dcb00
005af28e  ADD ESP,0x4
005af291  MOV dword ptr [EBP + -0x28],EAX
005af294  MOV ECX,dword ptr [EBP + -0x28]
005af297  CALL 0x0063aac0
005af29c  MOV EDX,dword ptr [EAX]
005af29e  MOV dword ptr [EBP + -0x20],EDX
005af2a1  CMP dword ptr [EBP + -0x20],0x2
005af2a5  JZ 0x005af2c3
005af2a7  MOV ECX,dword ptr [EBP + -0x28]
005af2aa  CALL 0x0063aac0
005af2af  MOV EAX,dword ptr [EAX]
005af2b1  MOV dword ptr [EBP + -0x24],EAX
005af2b4  CMP dword ptr [EBP + -0x24],0x3
005af2b8  JZ 0x005af2c3
005af2ba  MOV dword ptr [EBP + -0x40],0x0
005af2c1  JMP 0x005af2ca
005af2c3  MOV dword ptr [EBP + -0x40],0x1
005af2ca  MOV CL,byte ptr [EBP + -0x40]
005af2cd  PUSH ECX
005af2ce  MOV EDX,dword ptr [EBP + -0x10]
005af2d1  PUSH EDX
005af2d2  MOV ECX,dword ptr [0x00793604]
005af2d8  CALL 0x005b70e0
005af2dd  MOV EAX,dword ptr [EBP + -0x10]
005af2e0  PUSH EAX
005af2e1  MOV ECX,dword ptr [EBP + -0x3c]
005af2e4  CALL 0x005aeb60
005af2e9  JMP 0x005af83f
005af2ee  MOV ECX,dword ptr [EBP + -0x3c]
005af2f1  MOVZX EDX,byte ptr [ECX + 0x18]
005af2f5  TEST EDX,EDX
005af2f7  JNZ 0x005af30b
005af2f9  MOV ECX,dword ptr [0x00793604]
005af2ff  CALL 0x005b6f40
005af304  MOV EAX,dword ptr [EBP + -0x3c]
005af307  MOV byte ptr [EAX + 0x18],0x1
005af30b  MOV ECX,dword ptr [0x00793604]
005af311  CALL 0x005b64c0
005af316  MOVZX ECX,AL
005af319  TEST ECX,ECX
005af31b  JNZ 0x005af33e
005af31d  PUSH 0x0
005af31f  PUSH -0x1
005af321  MOV ECX,dword ptr [0x00793604]
005af327  CALL 0x005b70e0
005af32c  PUSH 0xc8
005af331  MOV ECX,dword ptr [EBP + -0x3c]
005af334  CALL 0x005aef40
005af339  JMP 0x005af83f
005af33e  MOV ECX,dword ptr [0x00793604]
005af344  CALL 0x005b66c0
005af349  MOVZX EDX,AL
005af34c  TEST EDX,EDX
005af34e  JZ 0x005af36c
005af350  PUSH 0x0
005af352  PUSH -0x1
005af354  MOV ECX,dword ptr [0x00793604]
005af35a  CALL 0x005b70e0
005af35f  MOV ECX,dword ptr [EBP + -0x3c]
005af362  CALL 0x005ad0a0
005af367  JMP 0x005af83f
005af36c  MOV ECX,dword ptr [0x00793604]
005af372  CALL 0x005b56c0
005af377  MOV dword ptr [EBP + -0x10],EAX
005af37a  CMP dword ptr [EBP + -0x10],-0x1
005af37e  JZ 0x005af3c2
005af380  PUSH 0x0
005af382  MOV EAX,dword ptr [EBP + -0x10]
005af385  PUSH EAX
005af386  MOV ECX,dword ptr [0x00793604]
005af38c  CALL 0x005b70e0
005af391  MOV ECX,dword ptr [EBP + -0x10]
005af394  PUSH ECX
005af395  MOV ECX,dword ptr [0x00793604]
005af39b  CALL 0x005b3b60
005af3a0  PUSH 0x0
005af3a2  PUSH 0x1
005af3a4  MOV EDX,dword ptr [0x00793600]
005af3aa  MOV EAX,dword ptr [EDX + 0x4]
005af3ad  MOV ECX,dword ptr [0x00793600]
005af3b3  MOV ECX,dword ptr [ECX + 0x4]
005af3b6  MOV EDX,dword ptr [EAX]
005af3b8  MOV EAX,dword ptr [EDX + 0x8]
005af3bb  CALL EAX
005af3bd  JMP 0x005af83f
005af3c2  MOV ECX,dword ptr [0x00793604]
005af3c8  MOVZX EDX,byte ptr [ECX + 0x678]
005af3cf  TEST EDX,EDX
005af3d1  JNZ 0x005af3f2
005af3d3  PUSH 0x0
005af3d5  PUSH -0x1
005af3d7  MOV ECX,dword ptr [0x00793604]
005af3dd  CALL 0x005b70e0
005af3e2  MOV ECX,dword ptr [0x007935f8]
005af3e8  CALL 0x005a86d0
005af3ed  JMP 0x005af83f
005af3f2  MOV ECX,dword ptr [0x00793604]
005af3f8  CALL 0x005b5460
005af3fd  MOV dword ptr [EBP + -0x10],EAX
005af400  CMP dword ptr [EBP + -0x10],-0x1
005af404  JZ 0x005af428
005af406  PUSH 0x0
005af408  MOV EAX,dword ptr [EBP + -0x10]
005af40b  PUSH EAX
005af40c  MOV ECX,dword ptr [0x00793604]
005af412  CALL 0x005b70e0
005af417  MOV ECX,dword ptr [EBP + -0x10]
005af41a  PUSH ECX
005af41b  MOV ECX,dword ptr [EBP + -0x3c]
005af41e  CALL 0x005acf90
005af423  JMP 0x005af83f
005af428  MOV ECX,dword ptr [0x00793604]
005af42e  CALL 0x005b3850
005af433  MOVZX EDX,AL
005af436  TEST EDX,EDX
005af438  JZ 0x005af456
005af43a  PUSH 0x0
005af43c  PUSH -0x1
005af43e  MOV ECX,dword ptr [0x00793604]
005af444  CALL 0x005b70e0
005af449  MOV ECX,dword ptr [EBP + -0x3c]
005af44c  CALL 0x005ad500
005af451  JMP 0x005af83f
005af456  MOV ECX,dword ptr [0x00793604]
005af45c  CALL 0x005b57c0
005af461  MOV dword ptr [EBP + -0x10],EAX
005af464  CMP dword ptr [EBP + -0x10],-0x1
005af468  JZ 0x005af4ac
005af46a  PUSH 0x0
005af46c  MOV EAX,dword ptr [EBP + -0x10]
005af46f  PUSH EAX
005af470  MOV ECX,dword ptr [0x00793604]
005af476  CALL 0x005b70e0
005af47b  MOV ECX,dword ptr [EBP + -0x10]
005af47e  PUSH ECX
005af47f  MOV ECX,dword ptr [0x00793604]
005af485  CALL 0x005b3df0
005af48a  PUSH 0x0
005af48c  PUSH 0x1
005af48e  MOV EDX,dword ptr [0x00793600]
005af494  MOV EAX,dword ptr [EDX + 0x4]
005af497  MOV ECX,dword ptr [0x00793600]
005af49d  MOV ECX,dword ptr [ECX + 0x4]
005af4a0  MOV EDX,dword ptr [EAX]
005af4a2  MOV EAX,dword ptr [EDX + 0x8]
005af4a5  CALL EAX
005af4a7  JMP 0x005af83f
005af4ac  MOV ECX,dword ptr [0x00793604]
005af4b2  CALL 0x005b5730
005af4b7  MOV dword ptr [EBP + -0x10],EAX
005af4ba  CMP dword ptr [EBP + -0x10],-0x1
005af4be  JZ 0x005af522
005af4c0  PUSH 0x0
005af4c2  MOV ECX,dword ptr [EBP + -0x10]
005af4c5  PUSH ECX
005af4c6  MOV ECX,dword ptr [0x00793604]
005af4cc  CALL 0x005b70e0
005af4d1  MOV EDX,dword ptr [EBP + -0x10]
005af4d4  PUSH EDX
005af4d5  MOV ECX,dword ptr [0x00793604]
005af4db  CALL 0x005b6040
005af4e0  MOVZX EAX,AL
005af4e3  TEST EAX,EAX
005af4e5  JZ 0x005af4f8
005af4e7  MOV ECX,dword ptr [EBP + -0x10]
005af4ea  PUSH ECX
005af4eb  MOV ECX,dword ptr [EBP + -0x3c]
005af4ee  CALL 0x005aea50
005af4f3  JMP 0x005af83f
005af4f8  MOV EDX,dword ptr [EBP + -0x3c]
005af4fb  MOVZX EAX,byte ptr [EDX + 0xd]
005af4ff  TEST EAX,EAX
005af501  JNZ 0x005af511
005af503  MOV ECX,dword ptr [EBP + -0x10]
005af506  PUSH ECX
005af507  MOV ECX,dword ptr [EBP + -0x3c]
005af50a  CALL 0x005af020
005af50f  JMP 0x005af51d
005af511  MOV EDX,dword ptr [EBP + -0x10]
005af514  PUSH EDX
005af515  MOV ECX,dword ptr [EBP + -0x3c]
005af518  CALL 0x005aee50
005af51d  JMP 0x005af83f
005af522  PUSH 0x0
005af524  PUSH -0x1
005af526  MOV ECX,dword ptr [0x00793604]
005af52c  CALL 0x005b70e0
005af531  MOV ECX,dword ptr [0x00793604]
005af537  CALL 0x005b6530
005af53c  MOVZX EAX,AL
005af53f  TEST EAX,EAX
005af541  JNZ 0x005af607
005af547  MOV ECX,dword ptr [EBP + -0x3c]
005af54a  MOVZX EDX,byte ptr [ECX + 0xf]
005af54e  TEST EDX,EDX
005af550  JNZ 0x005af589
005af552  MOV EAX,dword ptr [EBP + -0x3c]
005af555  MOV byte ptr [EAX + 0xf],0x1
005af559  PUSH 0x4
005af55b  PUSH 0xb
005af55d  MOV ECX,dword ptr [0x00793604]
005af563  CALL 0x005b7310
005af568  PUSH 0x0
005af56a  PUSH 0x1
005af56c  MOV ECX,dword ptr [0x00793600]
005af572  MOV EDX,dword ptr [ECX + 0x4]
005af575  MOV EAX,[0x00793600]
005af57a  MOV ECX,dword ptr [EAX + 0x4]
005af57d  MOV EDX,dword ptr [EDX]
005af57f  MOV EAX,dword ptr [EDX + 0x8]
005af582  CALL EAX
005af584  JMP 0x005af83f
005af589  MOV ECX,dword ptr [EBP + -0x3c]
005af58c  MOV byte ptr [ECX + 0xf],0x0
005af590  PUSH 0x1
005af592  MOV EDX,dword ptr [0x00793600]
005af598  MOV EAX,dword ptr [EDX + 0x4]
005af59b  MOV ECX,dword ptr [0x00793600]
005af5a1  MOV ECX,dword ptr [ECX + 0x4]
005af5a4  MOV EDX,dword ptr [EAX]
005af5a6  MOV EAX,dword ptr [EDX + 0x4]
005af5a9  CALL EAX
005af5ab  PUSH 0x28
005af5ad  CALL 0x00686d82
005af5b2  ADD ESP,0x4
005af5b5  MOV dword ptr [EBP + -0x18],EAX
005af5b8  MOV dword ptr [EBP + -0x4],0x0
005af5bf  CMP dword ptr [EBP + -0x18],0x0
005af5c3  JZ 0x005af5dc
005af5c5  MOV ECX,dword ptr [0x00793600]
005af5cb  MOV EDX,dword ptr [ECX + 0x4]
005af5ce  PUSH EDX
005af5cf  MOV ECX,dword ptr [EBP + -0x18]
005af5d2  CALL 0x005ab7f0
005af5d7  MOV dword ptr [EBP + -0x44],EAX
005af5da  JMP 0x005af5e3
005af5dc  MOV dword ptr [EBP + -0x44],0x0
005af5e3  MOV EAX,dword ptr [EBP + -0x44]
005af5e6  MOV dword ptr [EBP + -0x14],EAX
005af5e9  MOV dword ptr [EBP + -0x4],0xffffffff
005af5f0  MOV ECX,dword ptr [EBP + -0x14]
005af5f3  PUSH ECX
005af5f4  MOV EDX,dword ptr [0x00793600]
005af5fa  MOV ECX,dword ptr [EDX + 0x4]
005af5fd  CALL 0x005fc420
005af602  JMP 0x005af83f
005af607  MOV EAX,dword ptr [EBP + -0x3c]
005af60a  MOVZX ECX,byte ptr [EAX + 0xf]
005af60e  TEST ECX,ECX
005af610  JNZ 0x005af65f
005af612  PUSH -0x1
005af614  PUSH 0x4
005af616  MOV ECX,dword ptr [0x00793604]
005af61c  CALL 0x005b3300
005af621  MOVZX EDX,AL
005af624  TEST EDX,EDX
005af626  JNZ 0x005af65f
005af628  MOV EAX,dword ptr [EBP + -0x3c]
005af62b  MOV byte ptr [EAX + 0xf],0x1
005af62f  PUSH 0x4
005af631  PUSH 0xb
005af633  MOV ECX,dword ptr [0x00793604]
005af639  CALL 0x005b7310
005af63e  PUSH 0x0
005af640  PUSH 0x1
005af642  MOV ECX,dword ptr [0x00793600]
005af648  MOV EDX,dword ptr [ECX + 0x4]
005af64b  MOV EAX,[0x00793600]
005af650  MOV ECX,dword ptr [EAX + 0x4]
005af653  MOV EDX,dword ptr [EDX]
005af655  MOV EAX,dword ptr [EDX + 0x8]
005af658  CALL EAX
005af65a  JMP 0x005af83f
005af65f  MOV ECX,dword ptr [0x00793604]
005af665  CALL 0x005b5620
005af66a  MOV dword ptr [EBP + -0x10],EAX
005af66d  CMP dword ptr [EBP + -0x10],-0x1
005af671  JZ 0x005af7b0
005af677  PUSH 0x0
005af679  MOV ECX,dword ptr [EBP + -0x10]
005af67c  PUSH ECX
005af67d  MOV ECX,dword ptr [0x00793604]
005af683  CALL 0x005b70e0
005af688  MOV EDX,dword ptr [EBP + -0x10]
005af68b  PUSH EDX
005af68c  MOV ECX,dword ptr [0x00793604]
005af692  CALL 0x005b3870
005af697  MOV EAX,dword ptr [EBP + -0x3c]
005af69a  MOVZX ECX,byte ptr [EAX + 0x11]
005af69e  TEST ECX,ECX
005af6a0  JNZ 0x005af6db
005af6a2  MOV EDX,dword ptr [EBP + -0x3c]
005af6a5  MOV byte ptr [EDX + 0x11],0x1
005af6a9  PUSH 0x4
005af6ab  PUSH 0xc
005af6ad  MOV ECX,dword ptr [0x00793604]
005af6b3  CALL 0x005b7310
005af6b8  PUSH 0x0
005af6ba  PUSH 0x1
005af6bc  MOV EAX,[0x00793600]
005af6c1  MOV ECX,dword ptr [EAX + 0x4]
005af6c4  MOV EDX,dword ptr [0x00793600]
005af6ca  MOV EAX,dword ptr [EDX + 0x4]
005af6cd  MOV EDX,dword ptr [ECX]
005af6cf  MOV ECX,EAX
005af6d1  MOV EAX,dword ptr [EDX + 0x8]
005af6d4  CALL EAX
005af6d6  JMP 0x005af83f
005af6db  MOV ECX,dword ptr [EBP + -0x3c]
005af6de  MOVZX EDX,byte ptr [ECX + 0x12]
005af6e2  TEST EDX,EDX
005af6e4  JNZ 0x005af77f
005af6ea  MOV EAX,dword ptr [EBP + -0x3c]
005af6ed  MOV byte ptr [EAX + 0x12],0x1
005af6f1  MOV ECX,dword ptr [EBP + -0x10]
005af6f4  PUSH ECX
005af6f5  CALL 0x005dcb00
005af6fa  ADD ESP,0x4
005af6fd  MOV dword ptr [EBP + -0x34],EAX
005af700  MOV ECX,dword ptr [EBP + -0x34]
005af703  CALL 0x0063aac0
005af708  MOV EDX,dword ptr [EAX]
005af70a  MOV dword ptr [EBP + -0x2c],EDX
005af70d  CMP dword ptr [EBP + -0x2c],0x2
005af711  JZ 0x005af72f
005af713  MOV ECX,dword ptr [EBP + -0x34]
005af716  CALL 0x0063aac0
005af71b  MOV EAX,dword ptr [EAX]
005af71d  MOV dword ptr [EBP + -0x30],EAX
005af720  CMP dword ptr [EBP + -0x30],0x3
005af724  JZ 0x005af72f
005af726  MOV dword ptr [EBP + -0x48],0x0
005af72d  JMP 0x005af736
005af72f  MOV dword ptr [EBP + -0x48],0x1
005af736  MOVZX ECX,byte ptr [EBP + -0x48]
005af73a  TEST ECX,ECX
005af73c  JZ 0x005af747
005af73e  MOV dword ptr [EBP + -0x4c],0xffffffff
005af745  JMP 0x005af74d
005af747  MOV EDX,dword ptr [EBP + -0x10]
005af74a  MOV dword ptr [EBP + -0x4c],EDX
005af74d  MOV EAX,dword ptr [EBP + -0x4c]
005af750  PUSH EAX
005af751  PUSH 0x5
005af753  MOV ECX,dword ptr [0x00793604]
005af759  CALL 0x005b7310
005af75e  PUSH 0x0
005af760  PUSH 0x1
005af762  MOV ECX,dword ptr [0x00793600]
005af768  MOV EDX,dword ptr [ECX + 0x4]
005af76b  MOV EAX,[0x00793600]
005af770  MOV ECX,dword ptr [EAX + 0x4]
005af773  MOV EDX,dword ptr [EDX]
005af775  MOV EAX,dword ptr [EDX + 0x8]
005af778  CALL EAX
005af77a  JMP 0x005af83f
005af77f  MOV ECX,dword ptr [EBP + -0x3c]
005af782  MOV byte ptr [ECX + 0x11],0x0
005af786  MOV EDX,dword ptr [EBP + -0x3c]
005af789  MOV byte ptr [EDX + 0x12],0x0
005af78d  PUSH 0x0
005af78f  PUSH 0x1
005af791  MOV EAX,[0x00793600]
005af796  MOV ECX,dword ptr [EAX + 0x4]
005af799  MOV EDX,dword ptr [0x00793600]
005af79f  MOV EAX,dword ptr [EDX + 0x4]
005af7a2  MOV EDX,dword ptr [ECX]
005af7a4  MOV ECX,EAX
005af7a6  MOV EAX,dword ptr [EDX + 0x8]
005af7a9  CALL EAX
005af7ab  JMP 0x005af83f
005af7b0  MOV ECX,dword ptr [0x00793600]
005af7b6  CALL 0x005da7b0
005af7bb  MOVZX ECX,AL
005af7be  TEST ECX,ECX
005af7c0  JZ 0x005af802
005af7c2  MOV EDX,dword ptr [EBP + -0x3c]
005af7c5  MOVZX EAX,byte ptr [EDX + 0x13]
005af7c9  TEST EAX,EAX
005af7cb  JNZ 0x005af802
005af7cd  MOV ECX,dword ptr [EBP + -0x3c]
005af7d0  MOV byte ptr [ECX + 0x13],0x1
005af7d4  PUSH -0x1
005af7d6  PUSH 0x6
005af7d8  MOV ECX,dword ptr [0x00793604]
005af7de  CALL 0x005b7310
005af7e3  PUSH 0x0
005af7e5  PUSH 0x1
005af7e7  MOV EDX,dword ptr [0x00793600]
005af7ed  MOV EAX,dword ptr [EDX + 0x4]
005af7f0  MOV ECX,dword ptr [0x00793600]
005af7f6  MOV ECX,dword ptr [ECX + 0x4]
005af7f9  MOV EDX,dword ptr [EAX]
005af7fb  MOV EAX,dword ptr [EDX + 0x8]
005af7fe  CALL EAX
005af800  JMP 0x005af83f
005af802  PUSH 0x0
005af804  PUSH -0x1
005af806  MOV ECX,dword ptr [0x00793604]
005af80c  CALL 0x005b70e0
005af811  MOV ECX,dword ptr [0x0162ee84]
005af817  MOV DL,byte ptr [ECX + 0x25]
005af81a  MOV byte ptr [EBP + -0x35],DL
005af81d  MOVZX EAX,byte ptr [EBP + -0x35]
005af821  TEST EAX,EAX
005af823  JZ 0x005af834
005af825  PUSH 0xc8
005af82a  MOV ECX,dword ptr [EBP + -0x3c]
005af82d  CALL 0x005aef40
005af832  JMP 0x005af83f
005af834  MOV ECX,dword ptr [0x007935f8]
005af83a  CALL 0x005a8590
005af83f  MOV ECX,dword ptr [EBP + -0xc]
005af842  MOV dword ptr FS:[0x0],ECX
005af849  POP ECX
005af84a  MOV ESP,EBP
005af84c  POP EBP
005af84d  RET

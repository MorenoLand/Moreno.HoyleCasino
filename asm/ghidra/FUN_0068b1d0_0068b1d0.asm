; FUN_0068b1d0  0068b1d0
0068b1d0  PUSH EBP
0068b1d1  MOV EBP,ESP
0068b1d3  SUB ESP,0x2ac
0068b1d9  MOV EAX,[0x00781870]
0068b1de  XOR EAX,EBP
0068b1e0  MOV dword ptr [EBP + -0xc],EAX
0068b1e3  MOV dword ptr [EBP + 0xfffffd54],ECX
0068b1e9  MOV EAX,dword ptr [EBP + 0xfffffd54]
0068b1ef  ADD EAX,0x210
0068b1f4  MOV dword ptr [EBP + 0xfffffd94],EAX
0068b1fa  MOV ECX,dword ptr [EBP + 0xfffffd94]
0068b200  MOV EDX,dword ptr [ECX + 0x4]
0068b203  MOV dword ptr [EBP + 0xfffffd9c],EDX
0068b209  MOV EAX,dword ptr [EBP + 0xfffffd9c]
0068b20f  MOV ECX,dword ptr [EAX]
0068b211  MOV dword ptr [EBP + 0xfffffd98],ECX
0068b217  MOV EDX,dword ptr [EBP + 0xfffffd94]
0068b21d  PUSH EDX
0068b21e  MOV EAX,dword ptr [EBP + 0xfffffd98]
0068b224  PUSH EAX
0068b225  LEA ECX,[EBP + 0xfffffee0]
0068b22b  CALL 0x0068d4b0
0068b230  MOV ECX,dword ptr [EBP + 0xfffffd54]
0068b236  ADD ECX,0x210
0068b23c  MOV dword ptr [EBP + 0xfffffd8c],ECX
0068b242  MOV EDX,dword ptr [EBP + 0xfffffd8c]
0068b248  MOV EAX,dword ptr [EDX + 0x4]
0068b24b  MOV dword ptr [EBP + 0xfffffd90],EAX
0068b251  MOV dword ptr [EBP + -0x8],0x0
0068b258  MOV ECX,dword ptr [EBP + 0xfffffd90]
0068b25e  MOV dword ptr [EBP + -0x4],ECX
0068b261  JNZ 0x0068b269
0068b263  CALL dword ptr [0x006b2274]
0068b269  MOV EDX,dword ptr [EBP + 0xfffffd8c]
0068b26f  MOV dword ptr [EBP + -0x8],EDX
0068b272  MOV EAX,dword ptr [EBP + 0xfffffd54]
0068b278  MOV ECX,dword ptr [EAX + 0x218]
0068b27e  MOV dword ptr [EBP + 0xfffffd88],ECX
0068b284  CMP dword ptr [EBP + 0xfffffd88],0x0
0068b28b  JA 0x0068b292
0068b28d  JMP 0x0068b6c2
0068b292  MOV EDX,dword ptr [EBP + 0xfffffd54]
0068b298  ADD EDX,0x8
0068b29b  PUSH EDX
0068b29c  LEA EAX,[EBP + 0xfffffee8]
0068b2a2  PUSH EAX
0068b2a3  CALL 0x00686d8e
0068b2a8  ADD ESP,0x8
0068b2ab  LEA ECX,[EBP + 0xfffffee8]
0068b2b1  PUSH ECX
0068b2b2  CALL 0x005ea5b0
0068b2b7  ADD ESP,0x4
0068b2ba  LEA EDX,[EBP + 0xfffffee8]
0068b2c0  PUSH EDX
0068b2c1  LEA EAX,[EBP + 0xfffffdd0]
0068b2c7  PUSH EAX
0068b2c8  CALL 0x00686d8e
0068b2cd  ADD ESP,0x8
0068b2d0  PUSH 0x6e565c
0068b2d5  LEA ECX,[EBP + 0xfffffdd0]
0068b2db  PUSH ECX
0068b2dc  CALL 0x005ea9c0
0068b2e1  ADD ESP,0x8
0068b2e4  MOV dword ptr [EBP + 0xfffffedc],EAX
0068b2ea  CMP dword ptr [EBP + 0xfffffedc],0x0
0068b2f1  JNZ 0x0068b2f8
0068b2f3  JMP 0x0068b6c2
0068b2f8  JMP 0x0068b335
0068b2fa  MOV EDX,dword ptr [EBP + 0xfffffee0]
0068b300  MOV EAX,dword ptr [EBP + 0xfffffee4]
0068b306  MOV dword ptr [EBP + 0xfffffd80],EDX
0068b30c  MOV dword ptr [EBP + 0xfffffd84],EAX
0068b312  LEA ECX,[EBP + 0xfffffee0]
0068b318  CALL 0x0068e790
0068b31d  MOV ECX,dword ptr [EBP + 0xfffffd80]
0068b323  MOV dword ptr [EBP + 0xfffffda8],ECX
0068b329  MOV EDX,dword ptr [EBP + 0xfffffd84]
0068b32f  MOV dword ptr [EBP + 0xfffffdac],EDX
0068b335  CMP dword ptr [EBP + 0xfffffee0],0x0
0068b33c  JZ 0x0068b349
0068b33e  MOV EAX,dword ptr [EBP + 0xfffffee0]
0068b344  CMP EAX,dword ptr [EBP + -0x8]
0068b347  JZ 0x0068b34f
0068b349  CALL dword ptr [0x006b2274]
0068b34f  MOV ECX,dword ptr [EBP + 0xfffffee4]
0068b355  XOR EDX,EDX
0068b357  CMP ECX,dword ptr [EBP + -0x4]
0068b35a  SETZ DL
0068b35d  MOVZX EAX,DL
0068b360  NEG EAX
0068b362  SBB EAX,EAX
0068b364  ADD EAX,0x1
0068b367  MOVZX ECX,AL
0068b36a  TEST ECX,ECX
0068b36c  JZ 0x0068b6a1
0068b372  LEA ECX,[EBP + 0xfffffee0]
0068b378  CALL 0x0068d4f0
0068b37d  MOV dword ptr [EBP + 0xfffffd7c],EAX
0068b383  MOV ECX,dword ptr [EBP + 0xfffffd7c]
0068b389  CALL dword ptr [0x006b2100]
0068b38f  MOV dword ptr [EBP + 0xfffffdcc],EAX
0068b395  MOV EDX,dword ptr [EBP + 0xfffffedc]
0068b39b  PUSH EDX
0068b39c  PUSH 0x1
0068b39e  PUSH 0x1
0068b3a0  PUSH 0x6e5634
0068b3a5  CALL dword ptr [0x006b2260]
0068b3ab  ADD ESP,0x10
0068b3ae  MOV EAX,dword ptr [EBP + 0xfffffedc]
0068b3b4  PUSH EAX
0068b3b5  MOV ECX,dword ptr [EBP + 0xfffffdcc]
0068b3bb  PUSH ECX
0068b3bc  CALL 0x00686ecc
0068b3c1  ADD ESP,0x4
0068b3c4  PUSH EAX
0068b3c5  PUSH 0x1
0068b3c7  MOV EDX,dword ptr [EBP + 0xfffffdcc]
0068b3cd  PUSH EDX
0068b3ce  CALL dword ptr [0x006b2260]
0068b3d4  ADD ESP,0x10
0068b3d7  MOV EAX,dword ptr [EBP + 0xfffffedc]
0068b3dd  PUSH EAX
0068b3de  PUSH 0x1
0068b3e0  PUSH 0x1
0068b3e2  PUSH 0x6e5630
0068b3e7  CALL dword ptr [0x006b2260]
0068b3ed  ADD ESP,0x10
0068b3f0  MOV ECX,dword ptr [EBP + 0xfffffedc]
0068b3f6  PUSH ECX
0068b3f7  PUSH 0x6d8c14
0068b3fc  CALL 0x00686ecc
0068b401  ADD ESP,0x4
0068b404  PUSH EAX
0068b405  PUSH 0x1
0068b407  PUSH 0x6d8c14
0068b40c  CALL dword ptr [0x006b2260]
0068b412  ADD ESP,0x10
0068b415  CMP dword ptr [EBP + 0xfffffee0],0x0
0068b41c  JNZ 0x0068b424
0068b41e  CALL dword ptr [0x006b2274]
0068b424  MOV EDX,dword ptr [EBP + 0xfffffee0]
0068b42a  MOV EAX,dword ptr [EBP + 0xfffffee4]
0068b430  CMP EAX,dword ptr [EDX + 0x4]
0068b433  JNZ 0x0068b43b
0068b435  CALL dword ptr [0x006b2274]
0068b43b  MOV ECX,dword ptr [EBP + 0xfffffee4]
0068b441  ADD ECX,0x28
0068b444  MOV dword ptr [EBP + 0xfffffdb8],ECX
0068b44a  MOV EDX,dword ptr [EBP + 0xfffffdb8]
0068b450  MOV EAX,dword ptr [EDX + 0x4]
0068b453  MOV dword ptr [EBP + 0xfffffd78],EAX
0068b459  MOV ECX,dword ptr [EBP + 0xfffffd78]
0068b45f  MOV EDX,dword ptr [ECX]
0068b461  MOV dword ptr [EBP + 0xfffffd74],EDX
0068b467  MOV dword ptr [EBP + 0xfffffdc4],0x0
0068b471  MOV EAX,dword ptr [EBP + 0xfffffd74]
0068b477  MOV dword ptr [EBP + 0xfffffdc8],EAX
0068b47d  JNZ 0x0068b485
0068b47f  CALL dword ptr [0x006b2274]
0068b485  MOV ECX,dword ptr [EBP + 0xfffffdb8]
0068b48b  MOV dword ptr [EBP + 0xfffffdc4],ECX
0068b491  MOV EDX,dword ptr [EBP + 0xfffffdb8]
0068b497  MOV EAX,dword ptr [EDX + 0x4]
0068b49a  MOV dword ptr [EBP + 0xfffffd70],EAX
0068b4a0  MOV dword ptr [EBP + 0xfffffdbc],0x0
0068b4aa  MOV ECX,dword ptr [EBP + 0xfffffd70]
0068b4b0  MOV dword ptr [EBP + 0xfffffdc0],ECX
0068b4b6  CMP dword ptr [EBP + 0xfffffdb8],0x0
0068b4bd  JNZ 0x0068b4c5
0068b4bf  CALL dword ptr [0x006b2274]
0068b4c5  MOV EDX,dword ptr [EBP + 0xfffffdb8]
0068b4cb  MOV dword ptr [EBP + 0xfffffdbc],EDX
0068b4d1  JMP 0x0068b50e
0068b4d3  MOV EAX,dword ptr [EBP + 0xfffffdc4]
0068b4d9  MOV ECX,dword ptr [EBP + 0xfffffdc8]
0068b4df  MOV dword ptr [EBP + 0xfffffd68],EAX
0068b4e5  MOV dword ptr [EBP + 0xfffffd6c],ECX
0068b4eb  LEA ECX,[EBP + 0xfffffdc4]
0068b4f1  CALL 0x0068edc0
0068b4f6  MOV EDX,dword ptr [EBP + 0xfffffd68]
0068b4fc  MOV dword ptr [EBP + 0xfffffda0],EDX
0068b502  MOV EAX,dword ptr [EBP + 0xfffffd6c]
0068b508  MOV dword ptr [EBP + 0xfffffda4],EAX
0068b50e  CMP dword ptr [EBP + 0xfffffdc4],0x0
0068b515  JZ 0x0068b525
0068b517  MOV ECX,dword ptr [EBP + 0xfffffdc4]
0068b51d  CMP ECX,dword ptr [EBP + 0xfffffdbc]
0068b523  JZ 0x0068b52b
0068b525  CALL dword ptr [0x006b2274]
0068b52b  MOV EDX,dword ptr [EBP + 0xfffffdc8]
0068b531  XOR EAX,EAX
0068b533  CMP EDX,dword ptr [EBP + 0xfffffdc0]
0068b539  SETZ AL
0068b53c  MOVZX ECX,AL
0068b53f  NEG ECX
0068b541  SBB ECX,ECX
0068b543  ADD ECX,0x1
0068b546  MOVZX EDX,CL
0068b549  TEST EDX,EDX
0068b54b  JZ 0x0068b677
0068b551  CMP dword ptr [EBP + 0xfffffdc4],0x0
0068b558  JNZ 0x0068b560
0068b55a  CALL dword ptr [0x006b2274]
0068b560  MOV EAX,dword ptr [EBP + 0xfffffdc4]
0068b566  MOV ECX,dword ptr [EBP + 0xfffffdc8]
0068b56c  CMP ECX,dword ptr [EAX + 0x4]
0068b56f  JNZ 0x0068b577
0068b571  CALL dword ptr [0x006b2274]
0068b577  MOV EDX,dword ptr [EBP + 0xfffffdc8]
0068b57d  ADD EDX,0xc
0068b580  MOV dword ptr [EBP + 0xfffffd64],EDX
0068b586  MOV ECX,dword ptr [EBP + 0xfffffd64]
0068b58c  CALL dword ptr [0x006b2100]
0068b592  MOV dword ptr [EBP + 0xfffffdb4],EAX
0068b598  CMP dword ptr [EBP + 0xfffffdc4],0x0
0068b59f  JNZ 0x0068b5a7
0068b5a1  CALL dword ptr [0x006b2274]
0068b5a7  MOV EAX,dword ptr [EBP + 0xfffffdc4]
0068b5ad  MOV ECX,dword ptr [EBP + 0xfffffdc8]
0068b5b3  CMP ECX,dword ptr [EAX + 0x4]
0068b5b6  JNZ 0x0068b5be
0068b5b8  CALL dword ptr [0x006b2274]
0068b5be  MOV EDX,dword ptr [EBP + 0xfffffdc8]
0068b5c4  ADD EDX,0xc
0068b5c7  MOV dword ptr [EBP + 0xfffffd60],EDX
0068b5cd  MOV ECX,dword ptr [EBP + 0xfffffd60]
0068b5d3  ADD ECX,0x1c
0068b5d6  CALL dword ptr [0x006b2100]
0068b5dc  MOV dword ptr [EBP + 0xfffffdb0],EAX
0068b5e2  MOV EAX,dword ptr [EBP + 0xfffffedc]
0068b5e8  PUSH EAX
0068b5e9  MOV ECX,dword ptr [EBP + 0xfffffdb4]
0068b5ef  PUSH ECX
0068b5f0  CALL 0x00686ecc
0068b5f5  ADD ESP,0x4
0068b5f8  PUSH EAX
0068b5f9  PUSH 0x1
0068b5fb  MOV EDX,dword ptr [EBP + 0xfffffdb4]
0068b601  PUSH EDX
0068b602  CALL dword ptr [0x006b2260]
0068b608  ADD ESP,0x10
0068b60b  MOV EAX,dword ptr [EBP + 0xfffffedc]
0068b611  PUSH EAX
0068b612  PUSH 0x1
0068b614  PUSH 0x1
0068b616  PUSH 0x6e5658
0068b61b  CALL dword ptr [0x006b2260]
0068b621  ADD ESP,0x10
0068b624  MOV ECX,dword ptr [EBP + 0xfffffedc]
0068b62a  PUSH ECX
0068b62b  MOV EDX,dword ptr [EBP + 0xfffffdb0]
0068b631  PUSH EDX
0068b632  CALL 0x00686ecc
0068b637  ADD ESP,0x4
0068b63a  PUSH EAX
0068b63b  PUSH 0x1
0068b63d  MOV EAX,dword ptr [EBP + 0xfffffdb0]
0068b643  PUSH EAX
0068b644  CALL dword ptr [0x006b2260]
0068b64a  ADD ESP,0x10
0068b64d  MOV ECX,dword ptr [EBP + 0xfffffedc]
0068b653  PUSH ECX
0068b654  PUSH 0x6d8c14
0068b659  CALL 0x00686ecc
0068b65e  ADD ESP,0x4
0068b661  PUSH EAX
0068b662  PUSH 0x1
0068b664  PUSH 0x6d8c14
0068b669  CALL dword ptr [0x006b2260]
0068b66f  ADD ESP,0x10
0068b672  JMP 0x0068b4d3
0068b677  MOV EDX,dword ptr [EBP + 0xfffffedc]
0068b67d  PUSH EDX
0068b67e  PUSH 0x6d8c14
0068b683  CALL 0x00686ecc
0068b688  ADD ESP,0x4
0068b68b  PUSH EAX
0068b68c  PUSH 0x1
0068b68e  PUSH 0x6d8c14
0068b693  CALL dword ptr [0x006b2260]
0068b699  ADD ESP,0x10
0068b69c  JMP 0x0068b2fa
0068b6a1  MOV EAX,dword ptr [EBP + 0xfffffedc]
0068b6a7  PUSH EAX
0068b6a8  CALL dword ptr [0x006b2258]
0068b6ae  ADD ESP,0x4
0068b6b1  MOV ECX,dword ptr [EBP + 0xfffffd54]
0068b6b7  ADD ECX,0x210
0068b6bd  CALL 0x0068b8f0
0068b6c2  MOV ECX,dword ptr [EBP + -0xc]
0068b6c5  XOR ECX,EBP
0068b6c7  CALL 0x00686d72
0068b6cc  MOV ESP,EBP
0068b6ce  POP EBP
0068b6cf  RET

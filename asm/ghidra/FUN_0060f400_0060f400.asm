; FUN_0060f400  0060f400
0060f400  PUSH EBP
0060f401  MOV EBP,ESP
0060f403  PUSH -0x1
0060f405  PUSH 0x6aae28
0060f40a  MOV EAX,FS:[0x0]
0060f410  PUSH EAX
0060f411  SUB ESP,0x24
0060f414  MOV EAX,[0x00781870]
0060f419  XOR EAX,EBP
0060f41b  PUSH EAX
0060f41c  LEA EAX,[EBP + -0xc]
0060f41f  MOV FS:[0x0],EAX
0060f425  MOV dword ptr [EBP + -0x28],ECX
0060f428  MOV EAX,dword ptr [EBP + -0x28]
0060f42b  MOV dword ptr [EAX],0x6d8344
0060f431  MOV dword ptr [EBP + -0x4],0x0
0060f438  MOV ECX,dword ptr [EBP + -0x28]
0060f43b  CMP dword ptr [ECX + 0x1d0],0x0
0060f442  JZ 0x0060f483
0060f444  MOV EDX,dword ptr [EBP + -0x28]
0060f447  MOV EAX,dword ptr [EDX + 0x1d0]
0060f44d  MOV dword ptr [EBP + -0x18],EAX
0060f450  MOV ECX,dword ptr [EBP + -0x18]
0060f453  MOV dword ptr [EBP + -0x14],ECX
0060f456  CMP dword ptr [EBP + -0x14],0x0
0060f45a  JZ 0x0060f46f
0060f45c  PUSH 0x1
0060f45e  MOV EDX,dword ptr [EBP + -0x14]
0060f461  MOV EAX,dword ptr [EDX]
0060f463  MOV ECX,dword ptr [EBP + -0x14]
0060f466  MOV EDX,dword ptr [EAX]
0060f468  CALL EDX
0060f46a  MOV dword ptr [EBP + -0x2c],EAX
0060f46d  JMP 0x0060f476
0060f46f  MOV dword ptr [EBP + -0x2c],0x0
0060f476  MOV EAX,dword ptr [EBP + -0x28]
0060f479  MOV dword ptr [EAX + 0x1d0],0x0
0060f483  MOV ECX,dword ptr [EBP + -0x28]
0060f486  CMP dword ptr [ECX + 0x18c],0x0
0060f48d  JZ 0x0060f540
0060f493  MOV word ptr [EBP + -0x10],0x0
0060f499  JMP 0x0060f4a7
0060f49b  MOV DX,word ptr [EBP + -0x10]
0060f49f  ADD DX,0x1
0060f4a3  MOV word ptr [EBP + -0x10],DX
0060f4a7  MOVSX EAX,word ptr [EBP + -0x10]
0060f4ab  MOV ECX,dword ptr [EBP + -0x28]
0060f4ae  MOVSX EDX,word ptr [ECX + 0x184]
0060f4b5  CMP EAX,EDX
0060f4b7  JGE 0x0060f51b
0060f4b9  MOVSX EAX,word ptr [EBP + -0x10]
0060f4bd  MOV ECX,dword ptr [EBP + -0x28]
0060f4c0  MOV EDX,dword ptr [ECX + 0x18c]
0060f4c6  CMP dword ptr [EDX + EAX*0x4],0x0
0060f4ca  JZ 0x0060f519
0060f4cc  MOVSX EAX,word ptr [EBP + -0x10]
0060f4d0  MOV ECX,dword ptr [EBP + -0x28]
0060f4d3  MOV EDX,dword ptr [ECX + 0x18c]
0060f4d9  MOV EAX,dword ptr [EDX + EAX*0x4]
0060f4dc  MOV dword ptr [EBP + -0x20],EAX
0060f4df  MOV ECX,dword ptr [EBP + -0x20]
0060f4e2  MOV dword ptr [EBP + -0x1c],ECX
0060f4e5  CMP dword ptr [EBP + -0x1c],0x0
0060f4e9  JZ 0x0060f4fe
0060f4eb  PUSH 0x1
0060f4ed  MOV EDX,dword ptr [EBP + -0x1c]
0060f4f0  MOV EAX,dword ptr [EDX]
0060f4f2  MOV ECX,dword ptr [EBP + -0x1c]
0060f4f5  MOV EDX,dword ptr [EAX]
0060f4f7  CALL EDX
0060f4f9  MOV dword ptr [EBP + -0x30],EAX
0060f4fc  JMP 0x0060f505
0060f4fe  MOV dword ptr [EBP + -0x30],0x0
0060f505  MOVSX EAX,word ptr [EBP + -0x10]
0060f509  MOV ECX,dword ptr [EBP + -0x28]
0060f50c  MOV EDX,dword ptr [ECX + 0x18c]
0060f512  MOV dword ptr [EDX + EAX*0x4],0x0
0060f519  JMP 0x0060f49b
0060f51b  MOV EAX,dword ptr [EBP + -0x28]
0060f51e  MOV ECX,dword ptr [EAX + 0x18c]
0060f524  MOV dword ptr [EBP + -0x24],ECX
0060f527  MOV EDX,dword ptr [EBP + -0x24]
0060f52a  PUSH EDX
0060f52b  CALL 0x00686cae
0060f530  ADD ESP,0x4
0060f533  MOV EAX,dword ptr [EBP + -0x28]
0060f536  MOV dword ptr [EAX + 0x18c],0x0
0060f540  MOV dword ptr [EBP + -0x4],0xffffffff
0060f547  MOV ECX,dword ptr [EBP + -0x28]
0060f54a  CALL 0x005f5c40
0060f54f  MOV ECX,dword ptr [EBP + -0xc]
0060f552  MOV dword ptr FS:[0x0],ECX
0060f559  POP ECX
0060f55a  MOV ESP,EBP
0060f55c  POP EBP
0060f55d  RET

; FUN_0062c820  0062c820
0062c820  PUSH EBP
0062c821  MOV EBP,ESP
0062c823  SUB ESP,0xa0
0062c829  MOV EAX,[0x00781870]
0062c82e  XOR EAX,EBP
0062c830  MOV dword ptr [EBP + -0x8],EAX
0062c833  MOV dword ptr [EBP + 0xffffff60],ECX
0062c839  MOV EAX,dword ptr [EBP + 0xffffff60]
0062c83f  CMP dword ptr [EAX + 0x8],0x0
0062c843  JZ 0x0062c867
0062c845  XOR ECX,ECX
0062c847  JNZ 0x0062c860
0062c849  PUSH 0x2d6
0062c84e  PUSH 0x6d974c
0062c853  PUSH 0x6b2f58
0062c858  CALL 0x005e9f20
0062c85d  ADD ESP,0xc
0062c860  XOR AL,AL
0062c862  JMP 0x0062ca8a
0062c867  MOV EAX,dword ptr [EBP + 0xffffff60]
0062c86d  CMP dword ptr [EAX + 0xc],0x0
0062c871  JNZ 0x0062c87a
0062c873  XOR AL,AL
0062c875  JMP 0x0062ca8a
0062c87a  MOV ECX,dword ptr [EBP + 0xffffff60]
0062c880  MOV EDX,dword ptr [ECX + 0xc]
0062c883  PUSH EDX
0062c884  CALL dword ptr [0x006b21a4]
0062c88a  ADD ESP,0x4
0062c88d  MOV EAX,dword ptr [EBP + 0xc]
0062c890  PUSH EAX
0062c891  MOV ECX,dword ptr [EBP + 0x8]
0062c894  PUSH ECX
0062c895  MOV ECX,dword ptr [EBP + 0xffffff60]
0062c89b  CALL 0x0062b530
0062c8a0  MOV dword ptr [EBP + -0x4],EAX
0062c8a3  MOV EDX,dword ptr [EBP + 0xffffff60]
0062c8a9  MOV EAX,dword ptr [EDX + 0x14]
0062c8ac  MOV ECX,dword ptr [EAX]
0062c8ae  SUB ECX,0x1
0062c8b1  CMP dword ptr [EBP + -0x4],ECX
0062c8b4  JA 0x0062ca88
0062c8ba  LEA EDX,[EBP + 0x8]
0062c8bd  MOV dword ptr [EBP + 0xffffff70],EDX
0062c8c3  MOV EAX,dword ptr [EBP + 0xffffff70]
0062c8c9  MOVSX ECX,byte ptr [EAX + 0x3]
0062c8cd  PUSH ECX
0062c8ce  MOV EDX,dword ptr [EBP + 0xffffff70]
0062c8d4  MOVSX EAX,byte ptr [EDX + 0x2]
0062c8d8  PUSH EAX
0062c8d9  MOV ECX,dword ptr [EBP + 0xffffff70]
0062c8df  MOVSX EDX,byte ptr [ECX + 0x1]
0062c8e3  PUSH EDX
0062c8e4  MOV EAX,dword ptr [EBP + 0xffffff70]
0062c8ea  MOVSX ECX,byte ptr [EAX]
0062c8ed  PUSH ECX
0062c8ee  MOV EDX,dword ptr [EBP + 0xc]
0062c8f1  PUSH EDX
0062c8f2  PUSH 0x6d9788
0062c8f7  LEA EAX,[EBP + 0xffffff78]
0062c8fd  PUSH EAX
0062c8fe  CALL dword ptr [0x006b2220]
0062c904  ADD ESP,0x1c
0062c907  LEA ECX,[EBP + 0xffffff78]
0062c90d  PUSH ECX
0062c90e  CALL 0x0062fde0
0062c913  ADD ESP,0x4
0062c916  LEA EDX,[EBP + -0x4]
0062c919  PUSH EDX
0062c91a  MOV ECX,dword ptr [EBP + 0xffffff60]
0062c920  CALL 0x0062c6f0
0062c925  MOV EAX,dword ptr [EBP + 0xffffff60]
0062c92b  MOV ECX,dword ptr [EAX + 0x14]
0062c92e  MOV EDX,dword ptr [EBP + -0x4]
0062c931  SHL EDX,0x4
0062c934  MOV EAX,dword ptr [ECX + EDX*0x1 + 0x14]
0062c938  MOV dword ptr [EBP + 0xffffff6c],EAX
0062c93e  LEA ECX,[EBP + 0xffffff6c]
0062c944  PUSH ECX
0062c945  LEA EDX,[EBP + -0x4]
0062c948  PUSH EDX
0062c949  MOV ECX,dword ptr [EBP + 0xffffff60]
0062c94f  CALL 0x0062c630
0062c954  MOV EAX,dword ptr [EBP + 0xffffff60]
0062c95a  MOV ECX,dword ptr [EAX + 0x10]
0062c95d  MOV EDX,dword ptr [ECX + 0x10]
0062c960  SUB EDX,0x10
0062c963  MOV EAX,dword ptr [EBP + 0xffffff60]
0062c969  MOV ECX,dword ptr [EAX + 0x10]
0062c96c  MOV dword ptr [ECX + 0x10],EDX
0062c96f  MOV EDX,dword ptr [EBP + 0xffffff60]
0062c975  MOV EAX,dword ptr [EDX + 0x14]
0062c978  MOV ECX,dword ptr [EAX]
0062c97a  SUB ECX,0x1
0062c97d  MOV EDX,dword ptr [EBP + 0xffffff60]
0062c983  MOV EAX,dword ptr [EDX + 0x14]
0062c986  MOV dword ptr [EAX],ECX
0062c988  MOV ECX,dword ptr [EBP + 0xffffff60]
0062c98e  MOV EDX,dword ptr [ECX + 0x10]
0062c991  MOV EAX,dword ptr [EDX + 0x14]
0062c994  SUB EAX,dword ptr [EBP + 0xffffff6c]
0062c99a  MOV ECX,dword ptr [EBP + 0xffffff60]
0062c9a0  MOV EDX,dword ptr [ECX + 0x10]
0062c9a3  MOV dword ptr [EDX + 0x14],EAX
0062c9a6  MOV EAX,dword ptr [EBP + 0xffffff60]
0062c9ac  MOV ECX,dword ptr [EAX + 0x10]
0062c9af  MOV EDX,dword ptr [ECX + 0x10]
0062c9b2  PUSH EDX
0062c9b3  CALL 0x00686d82
0062c9b8  ADD ESP,0x4
0062c9bb  MOV dword ptr [EBP + 0xffffff68],EAX
0062c9c1  MOV EAX,dword ptr [EBP + 0xffffff68]
0062c9c7  MOV dword ptr [EBP + 0xffffff74],EAX
0062c9cd  MOV ECX,dword ptr [EBP + 0xffffff60]
0062c9d3  MOV EDX,dword ptr [ECX + 0x10]
0062c9d6  MOV EAX,dword ptr [EDX + 0x10]
0062c9d9  PUSH EAX
0062c9da  MOV ECX,dword ptr [EBP + 0xffffff60]
0062c9e0  MOV EDX,dword ptr [ECX + 0x14]
0062c9e3  PUSH EDX
0062c9e4  MOV EAX,dword ptr [EBP + 0xffffff74]
0062c9ea  PUSH EAX
0062c9eb  CALL 0x00686fde
0062c9f0  ADD ESP,0xc
0062c9f3  MOV ECX,dword ptr [EBP + 0xffffff60]
0062c9f9  MOV EDX,dword ptr [ECX + 0x14]
0062c9fc  MOV dword ptr [EBP + 0xffffff64],EDX
0062ca02  MOV EAX,dword ptr [EBP + 0xffffff64]
0062ca08  PUSH EAX
0062ca09  CALL 0x00686cae
0062ca0e  ADD ESP,0x4
0062ca11  MOV ECX,dword ptr [EBP + 0xffffff60]
0062ca17  MOV EDX,dword ptr [EBP + 0xffffff74]
0062ca1d  MOV dword ptr [ECX + 0x14],EDX
0062ca20  MOV EAX,dword ptr [EBP + 0xffffff60]
0062ca26  MOV ECX,dword ptr [EAX + 0xc]
0062ca29  PUSH ECX
0062ca2a  PUSH 0x1
0062ca2c  MOV EDX,dword ptr [EBP + 0xffffff60]
0062ca32  MOV EAX,dword ptr [EDX + 0x10]
0062ca35  MOV ECX,dword ptr [EAX + 0x10]
0062ca38  PUSH ECX
0062ca39  MOV EDX,dword ptr [EBP + 0xffffff60]
0062ca3f  MOV EAX,dword ptr [EDX + 0x14]
0062ca42  PUSH EAX
0062ca43  CALL dword ptr [0x006b2260]
0062ca49  ADD ESP,0x10
0062ca4c  PUSH 0x0
0062ca4e  PUSH 0x0
0062ca50  MOV ECX,dword ptr [EBP + 0xffffff60]
0062ca56  MOV EDX,dword ptr [ECX + 0xc]
0062ca59  PUSH EDX
0062ca5a  CALL dword ptr [0x006b230c]
0062ca60  ADD ESP,0xc
0062ca63  MOV EAX,dword ptr [EBP + 0xffffff60]
0062ca69  MOV ECX,dword ptr [EAX + 0xc]
0062ca6c  PUSH ECX
0062ca6d  PUSH 0x1
0062ca6f  PUSH 0x18
0062ca71  MOV EDX,dword ptr [EBP + 0xffffff60]
0062ca77  MOV EAX,dword ptr [EDX + 0x10]
0062ca7a  PUSH EAX
0062ca7b  CALL dword ptr [0x006b2260]
0062ca81  ADD ESP,0x10
0062ca84  MOV AL,0x1
0062ca86  JMP 0x0062ca8a
0062ca88  XOR AL,AL
0062ca8a  MOV ECX,dword ptr [EBP + -0x8]
0062ca8d  XOR ECX,EBP
0062ca8f  CALL 0x00686d72
0062ca94  MOV ESP,EBP
0062ca96  POP EBP
0062ca97  RET 0x8

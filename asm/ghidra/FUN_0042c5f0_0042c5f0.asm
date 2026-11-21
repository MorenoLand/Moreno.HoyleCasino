; FUN_0042c5f0  0042c5f0
0042c5f0  PUSH EBP
0042c5f1  MOV EBP,ESP
0042c5f3  PUSH -0x1
0042c5f5  PUSH 0x69e5b4
0042c5fa  MOV EAX,FS:[0x0]
0042c600  PUSH EAX
0042c601  SUB ESP,0x24
0042c604  PUSH ESI
0042c605  MOV EAX,[0x00781870]
0042c60a  XOR EAX,EBP
0042c60c  PUSH EAX
0042c60d  LEA EAX,[EBP + -0xc]
0042c610  MOV FS:[0x0],EAX
0042c616  MOV dword ptr [EBP + -0x28],ECX
0042c619  PUSH 0x0
0042c61b  MOV EAX,dword ptr [EBP + 0x8]
0042c61e  PUSH EAX
0042c61f  MOV ECX,dword ptr [EBP + -0x28]
0042c622  CALL 0x005ccdf0
0042c627  MOV dword ptr [EBP + -0x18],EAX
0042c62a  MOV dword ptr [EBP + -0x10],0x0
0042c631  MOV ECX,dword ptr [EBP + 0xc]
0042c634  MOV dword ptr [EBP + -0x2c],ECX
0042c637  MOV EDX,dword ptr [EBP + -0x2c]
0042c63a  ADD EDX,0x1
0042c63d  MOV dword ptr [EBP + -0x2c],EDX
0042c640  CMP dword ptr [EBP + -0x2c],0x4
0042c644  JA 0x0042c670
0042c646  MOV EAX,dword ptr [EBP + -0x2c]
0042c649  JMP dword ptr [EAX*0x4 + 0x42c88c]
0042c650  MOV dword ptr [EBP + -0x10],0xfc8
0042c657  JMP 0x0042c68b
0042c659  MOV dword ptr [EBP + -0x10],0xfca
0042c660  JMP 0x0042c68b
0042c662  MOV dword ptr [EBP + -0x10],0xfc9
0042c669  JMP 0x0042c68b
0042c66b  JMP 0x0042c878
0042c670  XOR ECX,ECX
0042c672  JNZ 0x0042c68b
0042c674  PUSH 0x468
0042c679  PUSH 0x6b6c70
0042c67e  PUSH 0x6b2f58
0042c683  CALL 0x005e9f20
0042c688  ADD ESP,0xc
0042c68b  MOV EAX,dword ptr [EBP + 0x8]
0042c68e  MOV ECX,dword ptr [EBP + -0x28]
0042c691  CMP dword ptr [ECX + EAX*0x4 + 0xafc],0x0
0042c699  JNZ 0x0042c6e9
0042c69b  PUSH 0x178
0042c6a0  CALL 0x00686d82
0042c6a5  ADD ESP,0x4
0042c6a8  MOV dword ptr [EBP + -0x24],EAX
0042c6ab  MOV dword ptr [EBP + -0x4],0x0
0042c6b2  CMP dword ptr [EBP + -0x24],0x0
0042c6b6  JZ 0x0042c6c5
0042c6b8  MOV ECX,dword ptr [EBP + -0x24]
0042c6bb  CALL 0x005eaaf0
0042c6c0  MOV dword ptr [EBP + -0x30],EAX
0042c6c3  JMP 0x0042c6cc
0042c6c5  MOV dword ptr [EBP + -0x30],0x0
0042c6cc  MOV EDX,dword ptr [EBP + -0x30]
0042c6cf  MOV dword ptr [EBP + -0x20],EDX
0042c6d2  MOV dword ptr [EBP + -0x4],0xffffffff
0042c6d9  MOV EAX,dword ptr [EBP + 0x8]
0042c6dc  MOV ECX,dword ptr [EBP + -0x28]
0042c6df  MOV EDX,dword ptr [EBP + -0x20]
0042c6e2  MOV dword ptr [ECX + EAX*0x4 + 0xafc],EDX
0042c6e9  MOV EAX,dword ptr [EBP + 0x8]
0042c6ec  MOV ECX,dword ptr [EBP + -0x28]
0042c6ef  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xafc]
0042c6f6  MOV EAX,dword ptr [EBP + 0x8]
0042c6f9  MOV ECX,dword ptr [EBP + -0x28]
0042c6fc  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xafc]
0042c703  MOV EDX,dword ptr [EDX]
0042c705  MOV EAX,dword ptr [EDX + 0x40]
0042c708  CALL EAX
0042c70a  MOV ECX,dword ptr [EBP + -0x10]
0042c70d  PUSH ECX
0042c70e  MOV EDX,dword ptr [EBP + 0x8]
0042c711  MOV EAX,dword ptr [EBP + -0x28]
0042c714  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xafc]
0042c71b  CALL 0x005eaf00
0042c720  CMP dword ptr [EBP + -0x18],-0x1
0042c724  JNZ 0x0042c73d
0042c726  PUSH 0x471
0042c72b  PUSH 0x6b6c70
0042c730  PUSH 0x6b6c8c
0042c735  CALL 0x005e9f20
0042c73a  ADD ESP,0xc
0042c73d  MOV EDX,dword ptr [EBP + 0x8]
0042c740  IMUL EDX,EDX,0x1e0
0042c746  MOV EAX,dword ptr [EBP + -0x28]
0042c749  LEA ECX,[EAX + EDX*0x1 + 0x17c]
0042c750  MOV EDX,dword ptr [EBP + -0x18]
0042c753  MOV EAX,dword ptr [ECX + EDX*0x4]
0042c756  MOV ECX,dword ptr [EBP + 0x8]
0042c759  IMUL ECX,ECX,0x1e0
0042c75f  MOV EDX,dword ptr [EBP + -0x28]
0042c762  LEA ECX,[EDX + ECX*0x1 + 0x17c]
0042c769  MOV EDX,dword ptr [EBP + -0x18]
0042c76c  MOV ECX,dword ptr [ECX + EDX*0x4]
0042c76f  MOV EAX,dword ptr [EAX]
0042c771  MOV EDX,dword ptr [EAX + 0x4c]
0042c774  CALL EDX
0042c776  MOV ESI,EAX
0042c778  PUSH 0x0
0042c77a  MOV EAX,dword ptr [EBP + 0x8]
0042c77d  PUSH EAX
0042c77e  MOV ECX,dword ptr [EBP + -0x28]
0042c781  MOV EDX,dword ptr [ECX]
0042c783  MOV ECX,dword ptr [EBP + -0x28]
0042c786  MOV EAX,dword ptr [EDX + 0xdc]
0042c78c  CALL EAX
0042c78e  ADD ESI,EAX
0042c790  MOV dword ptr [EBP + -0x1c],ESI
0042c793  MOV ECX,dword ptr [EBP + 0x8]
0042c796  IMUL ECX,ECX,0x1e0
0042c79c  MOV EDX,dword ptr [EBP + -0x28]
0042c79f  LEA EAX,[EDX + ECX*0x1 + 0x17c]
0042c7a6  MOV ECX,dword ptr [EBP + -0x18]
0042c7a9  MOV EDX,dword ptr [EAX + ECX*0x4]
0042c7ac  MOV EAX,dword ptr [EBP + 0x8]
0042c7af  IMUL EAX,EAX,0x1e0
0042c7b5  MOV ECX,dword ptr [EBP + -0x28]
0042c7b8  LEA EAX,[ECX + EAX*0x1 + 0x17c]
0042c7bf  MOV ECX,dword ptr [EBP + -0x18]
0042c7c2  MOV ECX,dword ptr [EAX + ECX*0x4]
0042c7c5  MOV EDX,dword ptr [EDX]
0042c7c7  MOV EAX,dword ptr [EDX + 0x54]
0042c7ca  CALL EAX
0042c7cc  MOV ESI,EAX
0042c7ce  PUSH 0x0
0042c7d0  MOV ECX,dword ptr [EBP + 0x8]
0042c7d3  PUSH ECX
0042c7d4  MOV EDX,dword ptr [EBP + -0x28]
0042c7d7  MOV EAX,dword ptr [EDX]
0042c7d9  MOV ECX,dword ptr [EBP + -0x28]
0042c7dc  MOV EDX,dword ptr [EAX + 0xe0]
0042c7e2  CALL EDX
0042c7e4  ADD ESI,EAX
0042c7e6  MOV dword ptr [EBP + -0x14],ESI
0042c7e9  MOV EAX,dword ptr [EBP + 0x8]
0042c7ec  IMUL EAX,EAX,0x1e0
0042c7f2  MOV ECX,dword ptr [EBP + -0x28]
0042c7f5  LEA EDX,[ECX + EAX*0x1 + 0x17c]
0042c7fc  MOV EAX,dword ptr [EBP + -0x18]
0042c7ff  MOV ECX,dword ptr [EDX + EAX*0x4]
0042c802  CALL 0x005f53c0
0042c807  ADD EAX,0x2
0042c80a  PUSH EAX
0042c80b  MOV ECX,dword ptr [EBP + 0x8]
0042c80e  MOV EDX,dword ptr [EBP + -0x28]
0042c811  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xafc]
0042c818  MOV ECX,dword ptr [EBP + 0x8]
0042c81b  MOV EDX,dword ptr [EBP + -0x28]
0042c81e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xafc]
0042c825  MOV EAX,dword ptr [EAX]
0042c827  MOV EDX,dword ptr [EAX + 0x6c]
0042c82a  CALL EDX
0042c82c  MOV EAX,dword ptr [EBP + -0x14]
0042c82f  PUSH EAX
0042c830  MOV ECX,dword ptr [EBP + -0x1c]
0042c833  PUSH ECX
0042c834  MOV EDX,dword ptr [EBP + 0x8]
0042c837  MOV EAX,dword ptr [EBP + -0x28]
0042c83a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xafc]
0042c841  MOV EDX,dword ptr [EBP + 0x8]
0042c844  MOV EAX,dword ptr [EBP + -0x28]
0042c847  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xafc]
0042c84e  MOV EAX,dword ptr [ECX]
0042c850  MOV ECX,EDX
0042c852  MOV EDX,dword ptr [EAX + 0x44]
0042c855  CALL EDX
0042c857  MOV EAX,dword ptr [EBP + 0x8]
0042c85a  MOV ECX,dword ptr [EBP + -0x28]
0042c85d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xafc]
0042c864  MOV EAX,dword ptr [EBP + 0x8]
0042c867  MOV ECX,dword ptr [EBP + -0x28]
0042c86a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xafc]
0042c871  MOV EDX,dword ptr [EDX]
0042c873  MOV EAX,dword ptr [EDX + 0x74]
0042c876  CALL EAX
0042c878  MOV ECX,dword ptr [EBP + -0xc]
0042c87b  MOV dword ptr FS:[0x0],ECX
0042c882  POP ECX
0042c883  POP ESI
0042c884  MOV ESP,EBP
0042c886  POP EBP
0042c887  RET 0x8

; FUN_0062b6a0  0062b6a0
0062b6a0  PUSH EBP
0062b6a1  MOV EBP,ESP
0062b6a3  SUB ESP,0x36c
0062b6a9  MOV EAX,[0x00781870]
0062b6ae  XOR EAX,EBP
0062b6b0  MOV dword ptr [EBP + -0x28],EAX
0062b6b3  MOV dword ptr [EBP + 0xfffffc98],ECX
0062b6b9  MOV EAX,dword ptr [EBP + 0xfffffc98]
0062b6bf  CMP dword ptr [EAX + 0xc],0x0
0062b6c3  JNZ 0x0062b6cc
0062b6c5  XOR AL,AL
0062b6c7  JMP 0x0062ba3c
0062b6cc  PUSH 0x2
0062b6ce  PUSH 0x0
0062b6d0  MOV ECX,dword ptr [EBP + 0xfffffc98]
0062b6d6  MOV EDX,dword ptr [ECX + 0xc]
0062b6d9  PUSH EDX
0062b6da  CALL dword ptr [0x006b230c]
0062b6e0  ADD ESP,0xc
0062b6e3  MOV EAX,dword ptr [EBP + 0xfffffc98]
0062b6e9  MOV ECX,dword ptr [EAX + 0xc]
0062b6ec  PUSH ECX
0062b6ed  CALL dword ptr [0x006b21a8]
0062b6f3  ADD ESP,0x4
0062b6f6  MOV dword ptr [EBP + 0xfffffecc],EAX
0062b6fc  PUSH 0x0
0062b6fe  PUSH 0x0
0062b700  MOV EDX,dword ptr [EBP + 0xfffffc98]
0062b706  MOV EAX,dword ptr [EDX + 0xc]
0062b709  PUSH EAX
0062b70a  CALL dword ptr [0x006b230c]
0062b710  ADD ESP,0xc
0062b713  PUSH 0x0
0062b715  MOV ECX,dword ptr [EBP + 0xfffffecc]
0062b71b  SUB ECX,0x16
0062b71e  PUSH ECX
0062b71f  MOV EDX,dword ptr [EBP + 0xfffffc98]
0062b725  MOV EAX,dword ptr [EDX + 0xc]
0062b728  PUSH EAX
0062b729  CALL dword ptr [0x006b230c]
0062b72f  ADD ESP,0xc
0062b732  MOV ECX,dword ptr [EBP + 0xfffffc98]
0062b738  MOV EDX,dword ptr [ECX + 0xc]
0062b73b  PUSH EDX
0062b73c  PUSH 0x1a
0062b73e  PUSH 0x1
0062b740  LEA EAX,[EBP + -0x1c]
0062b743  PUSH EAX
0062b744  CALL dword ptr [0x006b225c]
0062b74a  ADD ESP,0x10
0062b74d  MOVZX ECX,word ptr [EBP + -0x12]
0062b751  SUB ECX,0x1
0062b754  SHL ECX,0x4
0062b757  ADD ECX,0x18
0062b75a  PUSH ECX
0062b75b  CALL 0x00686d82
0062b760  ADD ESP,0x4
0062b763  MOV dword ptr [EBP + 0xfffffca4],EAX
0062b769  MOV EDX,dword ptr [EBP + 0xfffffc98]
0062b76f  MOV EAX,dword ptr [EBP + 0xfffffca4]
0062b775  MOV dword ptr [EDX + 0x14],EAX
0062b778  MOVZX ECX,word ptr [EBP + -0x12]
0062b77c  MOV EDX,dword ptr [EBP + 0xfffffc98]
0062b782  MOV EAX,dword ptr [EDX + 0x14]
0062b785  MOV dword ptr [EAX],ECX
0062b787  MOV ECX,dword ptr [EBP + 0xfffffc98]
0062b78d  MOV EDX,dword ptr [ECX + 0x14]
0062b790  MOV dword ptr [EDX + 0x4],0x0
0062b797  MOV EAX,dword ptr [EBP + -0x10]
0062b79a  PUSH EAX
0062b79b  CALL 0x00686d82
0062b7a0  ADD ESP,0x4
0062b7a3  MOV dword ptr [EBP + 0xfffffca0],EAX
0062b7a9  MOV ECX,dword ptr [EBP + 0xfffffca0]
0062b7af  MOV dword ptr [EBP + 0xfffffdb8],ECX
0062b7b5  PUSH 0x0
0062b7b7  MOV EDX,dword ptr [EBP + -0xc]
0062b7ba  PUSH EDX
0062b7bb  MOV EAX,dword ptr [EBP + 0xfffffc98]
0062b7c1  MOV ECX,dword ptr [EAX + 0xc]
0062b7c4  PUSH ECX
0062b7c5  CALL dword ptr [0x006b230c]
0062b7cb  ADD ESP,0xc
0062b7ce  MOV EDX,dword ptr [EBP + 0xfffffc98]
0062b7d4  MOV EAX,dword ptr [EDX + 0xc]
0062b7d7  PUSH EAX
0062b7d8  MOV ECX,dword ptr [EBP + -0x10]
0062b7db  PUSH ECX
0062b7dc  PUSH 0x1
0062b7de  MOV EDX,dword ptr [EBP + 0xfffffdb8]
0062b7e4  PUSH EDX
0062b7e5  CALL dword ptr [0x006b225c]
0062b7eb  ADD ESP,0x10
0062b7ee  MOV EAX,dword ptr [EBP + 0xfffffdb8]
0062b7f4  MOV dword ptr [EBP + 0xfffffdbc],EAX
0062b7fa  MOV dword ptr [EBP + -0x20],0x0
0062b801  JMP 0x0062b80c
0062b803  MOV ECX,dword ptr [EBP + -0x20]
0062b806  ADD ECX,0x1
0062b809  MOV dword ptr [EBP + -0x20],ECX
0062b80c  MOVZX EDX,word ptr [EBP + -0x12]
0062b810  CMP dword ptr [EBP + -0x20],EDX
0062b813  JGE 0x0062ba1f
0062b819  MOV EAX,dword ptr [EBP + 0xfffffdbc]
0062b81f  MOV dword ptr [EBP + 0xfffffdb4],EAX
0062b825  MOV ECX,dword ptr [EBP + 0xfffffdbc]
0062b82b  ADD ECX,0x2e
0062b82e  MOV dword ptr [EBP + 0xfffffdbc],ECX
0062b834  MOV EDX,dword ptr [EBP + 0xfffffdb4]
0062b83a  MOVZX EAX,word ptr [EDX + 0x1c]
0062b83e  CMP EAX,0x104
0062b843  JL 0x0062b869
0062b845  XOR ECX,ECX
0062b847  JNZ 0x0062b860
0062b849  PUSH 0x153
0062b84e  PUSH 0x6d974c
0062b853  PUSH 0x6b2f58
0062b858  CALL 0x005e9f20
0062b85d  ADD ESP,0xc
0062b860  MOV byte ptr [EBP + 0xfffffca8],0x0
0062b867  JMP 0x0062b89d
0062b869  MOV EAX,dword ptr [EBP + 0xfffffdb4]
0062b86f  MOVZX ECX,word ptr [EAX + 0x1c]
0062b873  PUSH ECX
0062b874  MOV EDX,dword ptr [EBP + 0xfffffdbc]
0062b87a  PUSH EDX
0062b87b  LEA EAX,[EBP + 0xfffffca8]
0062b881  PUSH EAX
0062b882  CALL dword ptr [0x006b22c0]
0062b888  ADD ESP,0xc
0062b88b  MOV ECX,dword ptr [EBP + 0xfffffdb4]
0062b891  MOVZX EDX,word ptr [ECX + 0x1c]
0062b895  MOV byte ptr [EBP + EDX*0x1 + 0xfffffca8],0x0
0062b89d  MOV EAX,dword ptr [EBP + 0xfffffdb4]
0062b8a3  MOVZX ECX,word ptr [EAX + 0x1c]
0062b8a7  MOV EDX,dword ptr [EBP + 0xfffffdb4]
0062b8ad  MOVZX EAX,word ptr [EDX + 0x1e]
0062b8b1  ADD ECX,EAX
0062b8b3  MOV EDX,dword ptr [EBP + 0xfffffdb4]
0062b8b9  MOVZX EAX,word ptr [EDX + 0x20]
0062b8bd  ADD EAX,dword ptr [EBP + 0xfffffdbc]
0062b8c3  ADD EAX,ECX
0062b8c5  MOV dword ptr [EBP + 0xfffffdbc],EAX
0062b8cb  LEA ECX,[EBP + 0xfffffdc0]
0062b8d1  PUSH ECX
0062b8d2  LEA EDX,[EBP + 0xfffffed0]
0062b8d8  PUSH EDX
0062b8d9  PUSH 0x0
0062b8db  PUSH 0x0
0062b8dd  LEA EAX,[EBP + 0xfffffca8]
0062b8e3  PUSH EAX
0062b8e4  CALL dword ptr [0x006b2314]
0062b8ea  ADD ESP,0x14
0062b8ed  LEA ECX,[EBP + 0xfffffed0]
0062b8f3  PUSH ECX
0062b8f4  CALL dword ptr [0x006b223c]
0062b8fa  ADD ESP,0x4
0062b8fd  MOV dword ptr [EBP + 0xfffffec8],EAX
0062b903  LEA EDX,[EBP + 0xfffffdc0]
0062b909  PUSH EDX
0062b90a  CALL dword ptr [0x006b21e0]
0062b910  ADD ESP,0x4
0062b913  CMP dword ptr [EBP + 0xfffffec8],0x0
0062b91a  JZ 0x0062b930
0062b91c  LEA EAX,[EBP + 0xfffffdc0]
0062b922  PUSH EAX
0062b923  CALL 0x00686ecc
0062b928  ADD ESP,0x4
0062b92b  CMP EAX,0x4
0062b92e  JNC 0x0062b95e
0062b930  XOR ECX,ECX
0062b932  JNZ 0x0062b94b
0062b934  PUSH 0x171
0062b939  PUSH 0x6d974c
0062b93e  PUSH 0x6b2f58
0062b943  CALL 0x005e9f20
0062b948  ADD ESP,0xc
0062b94b  MOV dword ptr [EBP + 0xfffffec8],0x0
0062b955  MOV dword ptr [EBP + -0x24],0x203f3f3f
0062b95c  JMP 0x0062b9b3
0062b95e  LEA EAX,[EBP + 0xfffffdc0]
0062b964  PUSH EAX
0062b965  CALL 0x00686ecc
0062b96a  ADD ESP,0x4
0062b96d  CMP EAX,0x4
0062b970  JBE 0x0062b981
0062b972  MOVSX ECX,byte ptr [EBP + 0xfffffdc4]
0062b979  MOV dword ptr [EBP + 0xfffffc94],ECX
0062b97f  JMP 0x0062b98b
0062b981  MOV dword ptr [EBP + 0xfffffc94],0x20000000
0062b98b  MOVSX EDX,byte ptr [EBP + 0xfffffdc3]
0062b992  SHL EDX,0x10
0062b995  ADD EDX,dword ptr [EBP + 0xfffffc94]
0062b99b  MOVSX EAX,byte ptr [EBP + 0xfffffdc2]
0062b9a2  SHL EAX,0x8
0062b9a5  ADD EDX,EAX
0062b9a7  MOVSX ECX,byte ptr [EBP + 0xfffffdc1]
0062b9ae  ADD EDX,ECX
0062b9b0  MOV dword ptr [EBP + -0x24],EDX
0062b9b3  MOV EDX,dword ptr [EBP + 0xfffffc98]
0062b9b9  MOV EAX,dword ptr [EDX + 0x14]
0062b9bc  MOV ECX,dword ptr [EBP + -0x20]
0062b9bf  SHL ECX,0x4
0062b9c2  MOV EDX,dword ptr [EBP + -0x24]
0062b9c5  MOV dword ptr [EAX + ECX*0x1 + 0x8],EDX
0062b9c9  MOV EAX,dword ptr [EBP + 0xfffffc98]
0062b9cf  MOV ECX,dword ptr [EAX + 0x14]
0062b9d2  MOV EDX,dword ptr [EBP + -0x20]
0062b9d5  SHL EDX,0x4
0062b9d8  MOV EAX,dword ptr [EBP + 0xfffffec8]
0062b9de  MOV dword ptr [ECX + EDX*0x1 + 0xc],EAX
0062b9e2  MOV ECX,dword ptr [EBP + 0xfffffc98]
0062b9e8  MOV EDX,dword ptr [ECX + 0x14]
0062b9eb  MOV EAX,dword ptr [EBP + -0x20]
0062b9ee  SHL EAX,0x4
0062b9f1  MOV ECX,dword ptr [EBP + 0xfffffdb4]
0062b9f7  MOV ECX,dword ptr [ECX + 0x2a]
0062b9fa  MOV dword ptr [EDX + EAX*0x1 + 0x10],ECX
0062b9fe  MOV EDX,dword ptr [EBP + 0xfffffc98]
0062ba04  MOV EAX,dword ptr [EDX + 0x14]
0062ba07  MOV ECX,dword ptr [EBP + -0x20]
0062ba0a  SHL ECX,0x4
0062ba0d  MOV EDX,dword ptr [EBP + 0xfffffdb4]
0062ba13  MOV EDX,dword ptr [EDX + 0x14]
0062ba16  MOV dword ptr [EAX + ECX*0x1 + 0x14],EDX
0062ba1a  JMP 0x0062b803
0062ba1f  MOV EAX,dword ptr [EBP + 0xfffffdb8]
0062ba25  MOV dword ptr [EBP + 0xfffffc9c],EAX
0062ba2b  MOV ECX,dword ptr [EBP + 0xfffffc9c]
0062ba31  PUSH ECX
0062ba32  CALL 0x00686cae
0062ba37  ADD ESP,0x4
0062ba3a  MOV AL,0x1
0062ba3c  MOV ECX,dword ptr [EBP + -0x28]
0062ba3f  XOR ECX,EBP
0062ba41  CALL 0x00686d72
0062ba46  MOV ESP,EBP
0062ba48  POP EBP
0062ba49  RET

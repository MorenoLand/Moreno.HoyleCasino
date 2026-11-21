; FUN_0060e450  0060e450
0060e450  PUSH EBP
0060e451  MOV EBP,ESP
0060e453  SUB ESP,0x60
0060e456  PUSH ESI
0060e457  MOV dword ptr [EBP + -0x60],ECX
0060e45a  LEA EAX,[EBP + -0x18]
0060e45d  PUSH EAX
0060e45e  MOV ECX,dword ptr [EBP + -0x60]
0060e461  MOV EDX,dword ptr [ECX + 0x8c]
0060e467  PUSH EDX
0060e468  CALL dword ptr [0x006b23cc]
0060e46e  MOV EAX,dword ptr [EBP + -0xc]
0060e471  MOV dword ptr [EBP + -0x3c],EAX
0060e474  MOV ECX,dword ptr [EBP + -0x10]
0060e477  MOV dword ptr [EBP + -0x38],ECX
0060e47a  MOV EDX,dword ptr [EBP + -0x14]
0060e47d  MOV dword ptr [EBP + -0x34],EDX
0060e480  MOV EAX,dword ptr [EBP + -0x18]
0060e483  MOV dword ptr [EBP + -0x30],EAX
0060e486  MOV ECX,dword ptr [EBP + -0x60]
0060e489  ADD ECX,0x8
0060e48c  MOV dword ptr [EBP + -0x2c],ECX
0060e48f  MOV EDX,dword ptr [EBP + -0x2c]
0060e492  MOV EAX,dword ptr [EBP + -0x30]
0060e495  MOV dword ptr [EDX],EAX
0060e497  MOV ECX,dword ptr [EBP + -0x2c]
0060e49a  MOV EDX,dword ptr [EBP + -0x34]
0060e49d  MOV dword ptr [ECX + 0x4],EDX
0060e4a0  MOV EAX,dword ptr [EBP + -0x2c]
0060e4a3  MOV ECX,dword ptr [EBP + -0x38]
0060e4a6  MOV dword ptr [EAX + 0x8],ECX
0060e4a9  MOV EDX,dword ptr [EBP + -0x2c]
0060e4ac  MOV EAX,dword ptr [EBP + -0x3c]
0060e4af  MOV dword ptr [EDX + 0xc],EAX
0060e4b2  LEA ECX,[EBP + -0x28]
0060e4b5  PUSH ECX
0060e4b6  MOV EDX,dword ptr [EBP + -0x60]
0060e4b9  MOV EAX,dword ptr [EDX + 0x8c]
0060e4bf  PUSH EAX
0060e4c0  CALL dword ptr [0x006b23c8]
0060e4c6  PUSH 0x1
0060e4c8  LEA ECX,[EBP + -0x28]
0060e4cb  PUSH ECX
0060e4cc  MOV EDX,dword ptr [EBP + -0x60]
0060e4cf  MOV EAX,dword ptr [EDX + 0x8c]
0060e4d5  PUSH EAX
0060e4d6  CALL dword ptr [0x006b23e4]
0060e4dc  MOV ECX,dword ptr [EBP + -0x1c]
0060e4df  MOV dword ptr [EBP + -0x50],ECX
0060e4e2  MOV EDX,dword ptr [EBP + -0x20]
0060e4e5  MOV dword ptr [EBP + -0x4c],EDX
0060e4e8  MOV EAX,dword ptr [EBP + -0x24]
0060e4eb  MOV dword ptr [EBP + -0x48],EAX
0060e4ee  MOV ECX,dword ptr [EBP + -0x28]
0060e4f1  MOV dword ptr [EBP + -0x44],ECX
0060e4f4  MOV EDX,dword ptr [EBP + -0x60]
0060e4f7  ADD EDX,0x18
0060e4fa  MOV dword ptr [EBP + -0x40],EDX
0060e4fd  MOV EAX,dword ptr [EBP + -0x40]
0060e500  MOV ECX,dword ptr [EBP + -0x44]
0060e503  MOV dword ptr [EAX],ECX
0060e505  MOV EDX,dword ptr [EBP + -0x40]
0060e508  MOV EAX,dword ptr [EBP + -0x48]
0060e50b  MOV dword ptr [EDX + 0x4],EAX
0060e50e  MOV ECX,dword ptr [EBP + -0x40]
0060e511  MOV EDX,dword ptr [EBP + -0x4c]
0060e514  MOV dword ptr [ECX + 0x8],EDX
0060e517  MOV EAX,dword ptr [EBP + -0x40]
0060e51a  MOV ECX,dword ptr [EBP + -0x50]
0060e51d  MOV dword ptr [EAX + 0xc],ECX
0060e520  MOV ECX,dword ptr [EBP + -0x60]
0060e523  CALL 0x006135c0
0060e528  MOVZX ESI,AX
0060e52b  MOV ECX,dword ptr [EBP + -0x60]
0060e52e  CALL 0x00613600
0060e533  MOVZX EDX,AX
0060e536  SUB ESI,EDX
0060e538  MOV EAX,ESI
0060e53a  CDQ
0060e53b  SUB EAX,EDX
0060e53d  SAR EAX,0x1
0060e53f  MOV dword ptr [EBP + -0x4],EAX
0060e542  MOV ECX,dword ptr [EBP + -0x60]
0060e545  CALL 0x006135e0
0060e54a  MOVZX ESI,AX
0060e54d  MOV ECX,dword ptr [EBP + -0x60]
0060e550  CALL 0x00613620
0060e555  MOVZX EAX,AX
0060e558  SUB ESI,EAX
0060e55a  MOV EAX,ESI
0060e55c  CDQ
0060e55d  SUB EAX,EDX
0060e55f  SAR EAX,0x1
0060e561  MOV dword ptr [EBP + -0x8],EAX
0060e564  CMP dword ptr [EBP + -0x4],0x0
0060e568  JGE 0x0060e571
0060e56a  MOV dword ptr [EBP + -0x4],0x0
0060e571  CMP dword ptr [EBP + -0x8],0x0
0060e575  JGE 0x0060e57e
0060e577  MOV dword ptr [EBP + -0x8],0x0
0060e57e  MOV ECX,dword ptr [EBP + -0x60]
0060e581  CALL 0x00613620
0060e586  MOVZX ECX,AX
0060e589  ADD ECX,dword ptr [EBP + -0x8]
0060e58c  MOV dword ptr [EBP + -0x5c],ECX
0060e58f  MOV ECX,dword ptr [EBP + -0x60]
0060e592  CALL 0x00613600
0060e597  MOVZX EDX,AX
0060e59a  ADD EDX,dword ptr [EBP + -0x4]
0060e59d  MOV dword ptr [EBP + -0x58],EDX
0060e5a0  MOV EAX,dword ptr [EBP + -0x60]
0060e5a3  ADD EAX,0x28
0060e5a6  MOV dword ptr [EBP + -0x54],EAX
0060e5a9  MOV ECX,dword ptr [EBP + -0x54]
0060e5ac  MOV EDX,dword ptr [EBP + -0x4]
0060e5af  MOV dword ptr [ECX],EDX
0060e5b1  MOV EAX,dword ptr [EBP + -0x54]
0060e5b4  MOV ECX,dword ptr [EBP + -0x8]
0060e5b7  MOV dword ptr [EAX + 0x4],ECX
0060e5ba  MOV EDX,dword ptr [EBP + -0x54]
0060e5bd  MOV EAX,dword ptr [EBP + -0x58]
0060e5c0  MOV dword ptr [EDX + 0x8],EAX
0060e5c3  MOV ECX,dword ptr [EBP + -0x54]
0060e5c6  MOV EDX,dword ptr [EBP + -0x5c]
0060e5c9  MOV dword ptr [ECX + 0xc],EDX
0060e5cc  POP ESI
0060e5cd  MOV ESP,EBP
0060e5cf  POP EBP
0060e5d0  RET

; FUN_005ec760  005ec760
005ec760  PUSH EBP
005ec761  MOV EBP,ESP
005ec763  PUSH -0x1
005ec765  PUSH 0x6a9c7b
005ec76a  MOV EAX,FS:[0x0]
005ec770  PUSH EAX
005ec771  SUB ESP,0x14
005ec774  MOV EAX,[0x00781870]
005ec779  XOR EAX,EBP
005ec77b  PUSH EAX
005ec77c  LEA EAX,[EBP + -0xc]
005ec77f  MOV FS:[0x0],EAX
005ec785  MOV dword ptr [EBP + -0x20],ECX
005ec788  MOV EAX,dword ptr [EBP + -0x20]
005ec78b  MOV dword ptr [EAX],0x6d6354
005ec791  MOV dword ptr [EBP + -0x4],0x0
005ec798  MOV ECX,dword ptr [EBP + -0x20]
005ec79b  CMP dword ptr [ECX + 0x5c],0x0
005ec79f  JZ 0x005ec7b6
005ec7a1  MOV EDX,dword ptr [EBP + -0x20]
005ec7a4  MOV EAX,dword ptr [EDX + 0x5c]
005ec7a7  MOV dword ptr [EBP + -0x10],EAX
005ec7aa  MOV ECX,dword ptr [EBP + -0x10]
005ec7ad  PUSH ECX
005ec7ae  CALL 0x00686cae
005ec7b3  ADD ESP,0x4
005ec7b6  MOV EDX,dword ptr [EBP + -0x20]
005ec7b9  CMP dword ptr [EDX + 0x98],0x0
005ec7c0  JZ 0x005ec7da
005ec7c2  MOV EAX,dword ptr [EBP + -0x20]
005ec7c5  MOV ECX,dword ptr [EAX + 0x98]
005ec7cb  MOV dword ptr [EBP + -0x14],ECX
005ec7ce  MOV EDX,dword ptr [EBP + -0x14]
005ec7d1  PUSH EDX
005ec7d2  CALL 0x00686cae
005ec7d7  ADD ESP,0x4
005ec7da  MOV EAX,dword ptr [EBP + -0x20]
005ec7dd  CMP dword ptr [EAX + 0xac],0x0
005ec7e4  JZ 0x005ec819
005ec7e6  MOV ECX,dword ptr [EBP + -0x20]
005ec7e9  MOV EDX,dword ptr [ECX + 0xac]
005ec7ef  MOV EAX,dword ptr [EDX + 0x4]
005ec7f2  MOV dword ptr [EBP + -0x18],EAX
005ec7f5  MOV ECX,dword ptr [EBP + -0x18]
005ec7f8  PUSH ECX
005ec7f9  CALL 0x00686cae
005ec7fe  ADD ESP,0x4
005ec801  MOV EDX,dword ptr [EBP + -0x20]
005ec804  MOV EAX,dword ptr [EDX + 0xac]
005ec80a  MOV dword ptr [EBP + -0x1c],EAX
005ec80d  MOV ECX,dword ptr [EBP + -0x1c]
005ec810  PUSH ECX
005ec811  CALL 0x00686cae
005ec816  ADD ESP,0x4
005ec819  MOV EDX,dword ptr [EBP + -0x20]
005ec81c  CMP dword ptr [EDX + 0xb0],0x0
005ec823  JZ 0x005ec84a
005ec825  MOV EAX,dword ptr [EBP + -0x20]
005ec828  MOV ECX,dword ptr [EAX + 0xb0]
005ec82e  PUSH ECX
005ec82f  MOV EDX,dword ptr [0x007960d8]
005ec835  MOV ECX,dword ptr [EDX + 0x18]
005ec838  CALL 0x006041d0
005ec83d  MOV EAX,dword ptr [EBP + -0x20]
005ec840  MOV dword ptr [EAX + 0xb0],0x0
005ec84a  MOV ECX,dword ptr [EBP + -0x20]
005ec84d  CMP dword ptr [ECX + 0xbc],0x0
005ec854  JZ 0x005ec875
005ec856  MOV EDX,dword ptr [EBP + -0x20]
005ec859  MOV EAX,dword ptr [EDX + 0xbc]
005ec85f  PUSH EAX
005ec860  CALL 0x00686c36
005ec865  ADD ESP,0x4
005ec868  MOV ECX,dword ptr [EBP + -0x20]
005ec86b  MOV dword ptr [ECX + 0xbc],0x0
005ec875  MOV EDX,dword ptr [EBP + -0x20]
005ec878  CMP dword ptr [EDX + 0xb8],0x0
005ec87f  JZ 0x005ec8a6
005ec881  MOV EAX,dword ptr [EBP + -0x20]
005ec884  MOV ECX,dword ptr [EAX + 0xb8]
005ec88a  PUSH ECX
005ec88b  MOV EDX,dword ptr [0x007960d8]
005ec891  MOV ECX,dword ptr [EDX + 0x18]
005ec894  CALL 0x006041d0
005ec899  MOV EAX,dword ptr [EBP + -0x20]
005ec89c  MOV dword ptr [EAX + 0xb8],0x0
005ec8a6  MOV ECX,dword ptr [EBP + -0x20]
005ec8a9  CMP dword ptr [ECX + 0xb4],0x0
005ec8b0  JZ 0x005ec8d1
005ec8b2  MOV EDX,dword ptr [EBP + -0x20]
005ec8b5  MOV EAX,dword ptr [EDX + 0xb4]
005ec8bb  PUSH EAX
005ec8bc  CALL 0x00686c30
005ec8c1  ADD ESP,0x4
005ec8c4  MOV ECX,dword ptr [EBP + -0x20]
005ec8c7  MOV dword ptr [ECX + 0xb4],0x0
005ec8d1  MOV dword ptr [EBP + -0x4],0xffffffff
005ec8d8  MOV ECX,dword ptr [EBP + -0x20]
005ec8db  CALL 0x005f61b0
005ec8e0  MOV ECX,dword ptr [EBP + -0xc]
005ec8e3  MOV dword ptr FS:[0x0],ECX
005ec8ea  POP ECX
005ec8eb  MOV ESP,EBP
005ec8ed  POP EBP
005ec8ee  RET

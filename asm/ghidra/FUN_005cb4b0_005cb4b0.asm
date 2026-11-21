; FUN_005cb4b0  005cb4b0
005cb4b0  PUSH EBP
005cb4b1  MOV EBP,ESP
005cb4b3  PUSH -0x1
005cb4b5  PUSH 0x6a8af8
005cb4ba  MOV EAX,FS:[0x0]
005cb4c0  PUSH EAX
005cb4c1  SUB ESP,0x14
005cb4c4  MOV EAX,[0x00781870]
005cb4c9  XOR EAX,EBP
005cb4cb  PUSH EAX
005cb4cc  LEA EAX,[EBP + -0xc]
005cb4cf  MOV FS:[0x0],EAX
005cb4d5  MOV dword ptr [EBP + -0x20],ECX
005cb4d8  MOV ECX,dword ptr [EBP + -0x20]
005cb4db  CALL 0x005f49d0
005cb4e0  MOV dword ptr [EBP + -0x4],0x0
005cb4e7  MOV EAX,dword ptr [EBP + -0x20]
005cb4ea  MOV dword ptr [EAX],0x6d277c
005cb4f0  MOV ECX,dword ptr [EBP + -0x20]
005cb4f3  MOV dword ptr [ECX + 0xe8],0x1
005cb4fd  MOV EDX,dword ptr [EBP + -0x20]
005cb500  MOV dword ptr [EDX + 0xec],0x1
005cb50a  MOV dword ptr [EBP + -0x10],0x0
005cb511  JMP 0x005cb51c
005cb513  MOV EAX,dword ptr [EBP + -0x10]
005cb516  ADD EAX,0x1
005cb519  MOV dword ptr [EBP + -0x10],EAX
005cb51c  CMP dword ptr [EBP + -0x10],0x5
005cb520  JGE 0x005cb56d
005cb522  MOV dword ptr [EBP + -0x14],0x0
005cb529  JMP 0x005cb534
005cb52b  MOV ECX,dword ptr [EBP + -0x14]
005cb52e  ADD ECX,0x1
005cb531  MOV dword ptr [EBP + -0x14],ECX
005cb534  CMP dword ptr [EBP + -0x14],0x4
005cb538  JGE 0x005cb56b
005cb53a  PUSH 0x0
005cb53c  PUSH 0x0
005cb53e  CALL 0x0064c8a0
005cb543  ADD ESP,0x8
005cb546  MOV dword ptr [EBP + -0x1c],EAX
005cb549  MOV dword ptr [EBP + -0x18],EDX
005cb54c  MOV EDX,dword ptr [EBP + -0x10]
005cb54f  SHL EDX,0x5
005cb552  MOV EAX,dword ptr [EBP + -0x20]
005cb555  LEA ECX,[EAX + EDX*0x1 + 0x48]
005cb559  MOV EDX,dword ptr [EBP + -0x14]
005cb55c  MOV EAX,dword ptr [EBP + -0x1c]
005cb55f  MOV dword ptr [ECX + EDX*0x8],EAX
005cb562  MOV EAX,dword ptr [EBP + -0x18]
005cb565  MOV dword ptr [ECX + EDX*0x8 + 0x4],EAX
005cb569  JMP 0x005cb52b
005cb56b  JMP 0x005cb513
005cb56d  MOV dword ptr [EBP + -0x4],0xffffffff
005cb574  MOV EAX,dword ptr [EBP + -0x20]
005cb577  MOV ECX,dword ptr [EBP + -0xc]
005cb57a  MOV dword ptr FS:[0x0],ECX
005cb581  POP ECX
005cb582  MOV ESP,EBP
005cb584  POP EBP
005cb585  RET

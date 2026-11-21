; FUN_005cd390  005cd390
005cd390  PUSH EBP
005cd391  MOV EBP,ESP
005cd393  PUSH -0x1
005cd395  PUSH 0x6a8b9a
005cd39a  MOV EAX,FS:[0x0]
005cd3a0  PUSH EAX
005cd3a1  SUB ESP,0x10
005cd3a4  MOV EAX,[0x00781870]
005cd3a9  XOR EAX,EBP
005cd3ab  PUSH EAX
005cd3ac  LEA EAX,[EBP + -0xc]
005cd3af  MOV FS:[0x0],EAX
005cd3b5  MOV dword ptr [EBP + -0x18],ECX
005cd3b8  MOV EAX,dword ptr [EBP + -0x18]
005cd3bb  MOV dword ptr [EAX],0x6d2974
005cd3c1  MOV dword ptr [EBP + -0x4],0x0
005cd3c8  MOV ECX,dword ptr [EBP + -0x18]
005cd3cb  MOV EDX,dword ptr [ECX + 0x1d0]
005cd3d1  MOV dword ptr [EBP + -0x14],EDX
005cd3d4  MOV EAX,dword ptr [EBP + -0x14]
005cd3d7  MOV dword ptr [EBP + -0x10],EAX
005cd3da  CMP dword ptr [EBP + -0x10],0x0
005cd3de  JZ 0x005cd3f3
005cd3e0  PUSH 0x1
005cd3e2  MOV ECX,dword ptr [EBP + -0x10]
005cd3e5  MOV EDX,dword ptr [ECX]
005cd3e7  MOV ECX,dword ptr [EBP + -0x10]
005cd3ea  MOV EAX,dword ptr [EDX]
005cd3ec  CALL EAX
005cd3ee  MOV dword ptr [EBP + -0x1c],EAX
005cd3f1  JMP 0x005cd3fa
005cd3f3  MOV dword ptr [EBP + -0x1c],0x0
005cd3fa  MOV dword ptr [EBP + -0x4],0xffffffff
005cd401  MOV ECX,dword ptr [EBP + -0x18]
005cd404  CALL 0x005ec760
005cd409  MOV ECX,dword ptr [EBP + -0xc]
005cd40c  MOV dword ptr FS:[0x0],ECX
005cd413  POP ECX
005cd414  MOV ESP,EBP
005cd416  POP EBP
005cd417  RET

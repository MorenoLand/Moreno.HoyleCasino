; FUN_0061efc0  0061efc0
0061efc0  PUSH EBP
0061efc1  MOV EBP,ESP
0061efc3  SUB ESP,0x384
0061efc9  MOV EAX,[0x00781870]
0061efce  XOR EAX,EBP
0061efd0  MOV dword ptr [EBP + -0x4],EAX
0061efd3  MOV dword ptr [EBP + 0xfffffc7c],ECX
0061efd9  MOV byte ptr [EBP + 0xfffffef0],0x0
0061efe0  LEA EAX,[EBP + 0xfffffef0]
0061efe6  PUSH EAX
0061efe7  MOV ECX,dword ptr [EBP + 0xfffffc7c]
0061efed  CALL 0x0061e6c0
0061eff2  MOV ECX,dword ptr [EBP + 0xfffffc7c]
0061eff8  MOV dword ptr [ECX + 0x13c],EAX
0061effe  MOV EDX,dword ptr [EBP + 0xfffffc7c]
0061f004  CMP dword ptr [EDX + 0x13c],0x0
0061f00b  JZ 0x0061f0af
0061f011  MOV EAX,dword ptr [EBP + 0xfffffc7c]
0061f017  MOV ECX,dword ptr [EAX + 0x13c]
0061f01d  PUSH ECX
0061f01e  CALL 0x005e9fd0
0061f023  ADD ESP,0x4
0061f026  MOV EDX,dword ptr [EBP + 0xfffffc7c]
0061f02c  MOV dword ptr [EDX + 0x14c],EAX
0061f032  MOV EAX,dword ptr [EBP + 0xfffffc7c]
0061f038  MOV dword ptr [EAX + 0x140],0x0
0061f042  MOV ECX,dword ptr [EBP + 0xfffffc7c]
0061f048  MOV EDX,dword ptr [EBP + 0xfffffc7c]
0061f04e  MOV EAX,dword ptr [EDX + 0x14c]
0061f054  MOV dword ptr [ECX + 0x144],EAX
0061f05a  MOV ECX,dword ptr [EBP + 0xfffffc7c]
0061f060  MOV dword ptr [ECX + 0x148],0x0
0061f06a  MOV EDX,dword ptr [EBP + 0xfffffc7c]
0061f070  MOV byte ptr [EDX + 0x154],0x1
0061f077  MOVZX EAX,byte ptr [0x00795fb2]
0061f07e  TEST EAX,EAX
0061f080  JZ 0x0061f0ad
0061f082  LEA ECX,[EBP + 0xfffffef0]
0061f088  PUSH ECX
0061f089  PUSH 0x6d8dfc
0061f08e  LEA EDX,[EBP + 0xfffffdb8]
0061f094  PUSH EDX
0061f095  CALL dword ptr [0x006b2220]
0061f09b  ADD ESP,0xc
0061f09e  LEA EAX,[EBP + 0xfffffdb8]
0061f0a4  PUSH EAX
0061f0a5  CALL 0x0062fde0
0061f0aa  ADD ESP,0x4
0061f0ad  JMP 0x0061f119
0061f0af  MOVZX ECX,byte ptr [0x00795fb2]
0061f0b6  TEST ECX,ECX
0061f0b8  JZ 0x0061f119
0061f0ba  MOV EDX,dword ptr [EBP + 0xfffffc7c]
0061f0c0  MOV EAX,dword ptr [EDX + 0x30]
0061f0c3  SAR EAX,0x18
0061f0c6  PUSH EAX
0061f0c7  MOV ECX,dword ptr [EBP + 0xfffffc7c]
0061f0cd  MOV EDX,dword ptr [ECX + 0x30]
0061f0d0  SAR EDX,0x10
0061f0d3  PUSH EDX
0061f0d4  MOV EAX,dword ptr [EBP + 0xfffffc7c]
0061f0da  MOV ECX,dword ptr [EAX + 0x30]
0061f0dd  SAR ECX,0x8
0061f0e0  PUSH ECX
0061f0e1  MOV EDX,dword ptr [EBP + 0xfffffc7c]
0061f0e7  MOV EAX,dword ptr [EDX + 0x30]
0061f0ea  PUSH EAX
0061f0eb  MOV ECX,dword ptr [EBP + 0xfffffc7c]
0061f0f1  MOV EDX,dword ptr [ECX + 0x34]
0061f0f4  PUSH EDX
0061f0f5  PUSH 0x6d8d64
0061f0fa  LEA EAX,[EBP + 0xfffffc80]
0061f100  PUSH EAX
0061f101  CALL dword ptr [0x006b2220]
0061f107  ADD ESP,0x1c
0061f10a  LEA ECX,[EBP + 0xfffffc80]
0061f110  PUSH ECX
0061f111  CALL 0x0062fde0
0061f116  ADD ESP,0x4
0061f119  MOV ECX,dword ptr [EBP + -0x4]
0061f11c  XOR ECX,EBP
0061f11e  CALL 0x00686d72
0061f123  MOV ESP,EBP
0061f125  POP EBP
0061f126  RET

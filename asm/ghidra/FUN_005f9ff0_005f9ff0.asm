; FUN_005f9ff0  005f9ff0
005f9ff0  PUSH EBP
005f9ff1  MOV EBP,ESP
005f9ff3  PUSH -0x1
005f9ff5  PUSH 0x6aa338
005f9ffa  MOV EAX,FS:[0x0]
005fa000  PUSH EAX
005fa001  SUB ESP,0x20
005fa004  MOV EAX,[0x00781870]
005fa009  XOR EAX,EBP
005fa00b  PUSH EAX
005fa00c  LEA EAX,[EBP + -0xc]
005fa00f  MOV FS:[0x0],EAX
005fa015  MOV dword ptr [EBP + -0x24],ECX
005fa018  CMP dword ptr [EBP + 0xc],0x0
005fa01c  JNZ 0x005fa071
005fa01e  MOV dword ptr [EBP + -0x10],0x0
005fa025  JMP 0x005fa030
005fa027  MOV EAX,dword ptr [EBP + -0x10]
005fa02a  ADD EAX,0x1
005fa02d  MOV dword ptr [EBP + -0x10],EAX
005fa030  MOV ECX,dword ptr [EBP + -0x24]
005fa033  ADD ECX,0x34
005fa036  CALL 0x0060c9a0
005fa03b  CMP dword ptr [EBP + -0x10],EAX
005fa03e  JGE 0x005fa071
005fa040  MOV ECX,dword ptr [EBP + -0x10]
005fa043  PUSH ECX
005fa044  MOV ECX,dword ptr [EBP + -0x24]
005fa047  ADD ECX,0x34
005fa04a  CALL 0x0060ca40
005fa04f  MOV ECX,EAX
005fa051  CALL 0x005f5400
005fa056  CMP EAX,dword ptr [EBP + 0x14]
005fa059  JNZ 0x005fa06f
005fa05b  MOV EDX,dword ptr [EBP + -0x10]
005fa05e  PUSH EDX
005fa05f  MOV ECX,dword ptr [EBP + -0x24]
005fa062  ADD ECX,0x34
005fa065  CALL 0x0060ca40
005fa06a  MOV dword ptr [EBP + 0xc],EAX
005fa06d  JMP 0x005fa071
005fa06f  JMP 0x005fa027
005fa071  MOV EAX,dword ptr [EBP + 0xc]
005fa074  PUSH EAX
005fa075  MOV ECX,dword ptr [EBP + -0x24]
005fa078  ADD ECX,0x34
005fa07b  CALL 0x0060c9e0
005fa080  MOVZX ECX,AL
005fa083  TEST ECX,ECX
005fa085  JNZ 0x005fa114
005fa08b  CMP dword ptr [EBP + 0xc],0x0
005fa08f  JNZ 0x005fa0d2
005fa091  PUSH 0x58
005fa093  CALL 0x00686d82
005fa098  ADD ESP,0x4
005fa09b  MOV dword ptr [EBP + -0x18],EAX
005fa09e  MOV dword ptr [EBP + -0x4],0x0
005fa0a5  CMP dword ptr [EBP + -0x18],0x0
005fa0a9  JZ 0x005fa0b8
005fa0ab  MOV ECX,dword ptr [EBP + -0x18]
005fa0ae  CALL 0x006061c0
005fa0b3  MOV dword ptr [EBP + -0x28],EAX
005fa0b6  JMP 0x005fa0bf
005fa0b8  MOV dword ptr [EBP + -0x28],0x0
005fa0bf  MOV EDX,dword ptr [EBP + -0x28]
005fa0c2  MOV dword ptr [EBP + -0x14],EDX
005fa0c5  MOV dword ptr [EBP + -0x4],0xffffffff
005fa0cc  MOV EAX,dword ptr [EBP + -0x14]
005fa0cf  MOV dword ptr [EBP + 0xc],EAX
005fa0d2  MOV ECX,dword ptr [EBP + 0xc]
005fa0d5  PUSH ECX
005fa0d6  MOV ECX,dword ptr [EBP + -0x24]
005fa0d9  ADD ECX,0x34
005fa0dc  CALL 0x0060c840
005fa0e1  MOV EDX,dword ptr [EBP + 0xc]
005fa0e4  MOV EAX,dword ptr [EBP + -0x24]
005fa0e7  MOV dword ptr [EDX + 0x4],EAX
005fa0ea  MOV ECX,dword ptr [EBP + 0x14]
005fa0ed  PUSH ECX
005fa0ee  MOV ECX,dword ptr [EBP + 0xc]
005fa0f1  CALL 0x005f53e0
005fa0f6  MOV EDX,dword ptr [EBP + 0xc]
005fa0f9  MOV EAX,dword ptr [EDX]
005fa0fb  MOV ECX,dword ptr [EBP + 0xc]
005fa0fe  MOV EDX,dword ptr [EAX + 0x40]
005fa101  CALL EDX
005fa103  MOV EAX,dword ptr [EBP + 0x24]
005fa106  PUSH EAX
005fa107  MOV ECX,dword ptr [EBP + 0xc]
005fa10a  MOV EDX,dword ptr [ECX]
005fa10c  MOV ECX,dword ptr [EBP + 0xc]
005fa10f  MOV EAX,dword ptr [EDX + 0x6c]
005fa112  CALL EAX
005fa114  CMP dword ptr [EBP + 0x8],0x0
005fa118  JNZ 0x005fa15e
005fa11a  PUSH 0x210
005fa11f  CALL 0x00686d82
005fa124  ADD ESP,0x4
005fa127  MOV dword ptr [EBP + -0x20],EAX
005fa12a  MOV dword ptr [EBP + -0x4],0x1
005fa131  CMP dword ptr [EBP + -0x20],0x0
005fa135  JZ 0x005fa144
005fa137  MOV ECX,dword ptr [EBP + -0x20]
005fa13a  CALL 0x006060a0
005fa13f  MOV dword ptr [EBP + -0x2c],EAX
005fa142  JMP 0x005fa14b
005fa144  MOV dword ptr [EBP + -0x2c],0x0
005fa14b  MOV ECX,dword ptr [EBP + -0x2c]
005fa14e  MOV dword ptr [EBP + -0x1c],ECX
005fa151  MOV dword ptr [EBP + -0x4],0xffffffff
005fa158  MOV EDX,dword ptr [EBP + -0x1c]
005fa15b  MOV dword ptr [EBP + 0x8],EDX
005fa15e  MOV EAX,dword ptr [EBP + 0x8]
005fa161  PUSH EAX
005fa162  MOV ECX,dword ptr [EBP + 0xc]
005fa165  CALL 0x006062a0
005fa16a  MOV ECX,dword ptr [EBP + 0x10]
005fa16d  PUSH ECX
005fa16e  MOV EDX,dword ptr [EBP + 0x24]
005fa171  PUSH EDX
005fa172  MOV EAX,dword ptr [EBP + 0x20]
005fa175  PUSH EAX
005fa176  MOV ECX,dword ptr [EBP + 0x1c]
005fa179  PUSH ECX
005fa17a  MOV EDX,dword ptr [EBP + 0x18]
005fa17d  PUSH EDX
005fa17e  MOV ECX,dword ptr [EBP + 0x8]
005fa181  CALL 0x005eae80
005fa186  MOV EAX,dword ptr [EBP + 0x40]
005fa189  PUSH EAX
005fa18a  MOV ECX,dword ptr [EBP + 0x3c]
005fa18d  PUSH ECX
005fa18e  MOV EDX,dword ptr [EBP + 0x38]
005fa191  PUSH EDX
005fa192  MOV EAX,dword ptr [EBP + 0x34]
005fa195  PUSH EAX
005fa196  MOV ECX,dword ptr [EBP + 0x30]
005fa199  PUSH ECX
005fa19a  MOV EDX,dword ptr [EBP + 0x2c]
005fa19d  PUSH EDX
005fa19e  MOV EAX,dword ptr [EBP + 0x28]
005fa1a1  PUSH EAX
005fa1a2  MOV ECX,dword ptr [EBP + 0x8]
005fa1a5  MOV EDX,dword ptr [ECX]
005fa1a7  MOV ECX,dword ptr [EBP + 0x8]
005fa1aa  MOV EAX,dword ptr [EDX + 0xdc]
005fa1b0  CALL EAX
005fa1b2  MOV ECX,dword ptr [EBP + 0x8]
005fa1b5  MOV EDX,dword ptr [ECX]
005fa1b7  MOV ECX,dword ptr [EBP + 0x8]
005fa1ba  MOV EAX,dword ptr [EDX + 0x74]
005fa1bd  CALL EAX
005fa1bf  MOV EAX,dword ptr [EBP + 0xc]
005fa1c2  MOV ECX,dword ptr [EBP + -0xc]
005fa1c5  MOV dword ptr FS:[0x0],ECX
005fa1cc  POP ECX
005fa1cd  MOV ESP,EBP
005fa1cf  POP EBP
005fa1d0  RET 0x3c

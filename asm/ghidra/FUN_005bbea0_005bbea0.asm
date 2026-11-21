; FUN_005bbea0  005bbea0
005bbea0  PUSH EBP
005bbea1  MOV EBP,ESP
005bbea3  SUB ESP,0x140
005bbea9  XOR EAX,EAX
005bbeab  MOV byte ptr [EBP + -0x1],AL
005bbeae  MOV CL,byte ptr [EBP + -0x3]
005bbeb1  MOV byte ptr [EBP + -0x2],CL
005bbeb4  MOV DL,byte ptr [EBP + -0x1]
005bbeb7  MOV byte ptr [EBP + 0xfffffec3],DL
005bbebd  MOV EAX,dword ptr [EBP + 0x10]
005bbec0  MOV dword ptr [EBP + 0xfffffec4],EAX
005bbec6  MOV ECX,dword ptr [EBP + 0x8]
005bbec9  MOV dword ptr [EBP + 0xfffffec8],ECX
005bbecf  MOV EDX,dword ptr [EBP + 0xc]
005bbed2  SUB EDX,dword ptr [EBP + 0xfffffec8]
005bbed8  SAR EDX,0x4
005bbedb  SHL EDX,0x4
005bbede  MOV EAX,dword ptr [EBP + 0xfffffec4]
005bbee4  SUB EAX,EDX
005bbee6  MOV dword ptr [EBP + -0x8],EAX
005bbee9  XOR ECX,ECX
005bbeeb  MOV byte ptr [EBP + -0x9],CL
005bbeee  XOR EDX,EDX
005bbef0  MOV byte ptr [EBP + -0xa],DL
005bbef3  MOV AL,byte ptr [EBP + -0x9]
005bbef6  MOV byte ptr [EBP + 0xfffffece],AL
005bbefc  MOV CL,byte ptr [EBP + -0xa]
005bbeff  MOV byte ptr [EBP + 0xfffffecf],CL
005bbf05  MOV EDX,dword ptr [EBP + 0xfffffec4]
005bbf0b  MOV dword ptr [EBP + 0xfffffed0],EDX
005bbf11  MOV EAX,dword ptr [EBP + 0xc]
005bbf14  MOV dword ptr [EBP + 0xfffffed4],EAX
005bbf1a  MOV ECX,dword ptr [EBP + 0xfffffec8]
005bbf20  CMP ECX,dword ptr [EBP + 0xfffffed4]
005bbf26  JZ 0x005bbf5a
005bbf28  MOV EDX,dword ptr [EBP + 0xfffffed4]
005bbf2e  SUB EDX,0x10
005bbf31  MOV dword ptr [EBP + 0xfffffed4],EDX
005bbf37  MOV EAX,dword ptr [EBP + 0xfffffed0]
005bbf3d  SUB EAX,0x10
005bbf40  MOV dword ptr [EBP + 0xfffffed0],EAX
005bbf46  MOV ECX,dword ptr [EBP + 0xfffffed4]
005bbf4c  PUSH ECX
005bbf4d  MOV ECX,dword ptr [EBP + 0xfffffed0]
005bbf53  CALL 0x005bc040
005bbf58  JMP 0x005bbf1a
005bbf5a  MOV EAX,dword ptr [EBP + -0x8]
005bbf5d  MOV ESP,EBP
005bbf5f  POP EBP
005bbf60  RET

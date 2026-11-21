; FUN_005ba090  005ba090
005ba090  PUSH EBP
005ba091  MOV EBP,ESP
005ba093  SUB ESP,0x78
005ba096  MOV dword ptr [EBP + -0x70],ECX
005ba099  MOV EAX,dword ptr [EBP + -0x70]
005ba09c  CMP dword ptr [EAX + 0x4],0x0
005ba0a0  JNZ 0x005ba0ab
005ba0a2  MOV dword ptr [EBP + -0x74],0x0
005ba0a9  JMP 0x005ba0bd
005ba0ab  MOV ECX,dword ptr [EBP + -0x70]
005ba0ae  MOV EDX,dword ptr [EBP + -0x70]
005ba0b1  MOV EAX,dword ptr [ECX + 0x8]
005ba0b4  SUB EAX,dword ptr [EDX + 0x4]
005ba0b7  SAR EAX,0x2
005ba0ba  MOV dword ptr [EBP + -0x74],EAX
005ba0bd  MOV ECX,dword ptr [EBP + -0x70]
005ba0c0  CMP dword ptr [ECX + 0x4],0x0
005ba0c4  JNZ 0x005ba0cf
005ba0c6  MOV dword ptr [EBP + -0x78],0x0
005ba0cd  JMP 0x005ba0e1
005ba0cf  MOV EDX,dword ptr [EBP + -0x70]
005ba0d2  MOV EAX,dword ptr [EBP + -0x70]
005ba0d5  MOV ECX,dword ptr [EDX + 0xc]
005ba0d8  SUB ECX,dword ptr [EAX + 0x4]
005ba0db  SAR ECX,0x2
005ba0de  MOV dword ptr [EBP + -0x78],ECX
005ba0e1  MOV EDX,dword ptr [EBP + -0x74]
005ba0e4  CMP EDX,dword ptr [EBP + -0x78]
005ba0e7  JNC 0x005ba134
005ba0e9  MOV EAX,dword ptr [EBP + -0x70]
005ba0ec  MOV ECX,dword ptr [EAX + 0x8]
005ba0ef  MOV dword ptr [EBP + -0x44],ECX
005ba0f2  MOV EDX,dword ptr [EBP + -0x44]
005ba0f5  MOV dword ptr [EBP + -0x40],EDX
005ba0f8  XOR EAX,EAX
005ba0fa  MOV byte ptr [EBP + -0x11],AL
005ba0fd  MOV CL,byte ptr [EBP + -0x13]
005ba100  MOV byte ptr [EBP + -0x12],CL
005ba103  MOV DL,byte ptr [EBP + -0x11]
005ba106  MOV byte ptr [EBP + -0x39],DL
005ba109  MOV EAX,dword ptr [EBP + -0x40]
005ba10c  MOV dword ptr [EBP + -0x38],EAX
005ba10f  MOV ECX,dword ptr [EBP + 0x8]
005ba112  PUSH ECX
005ba113  PUSH 0x1
005ba115  MOV EDX,dword ptr [EBP + -0x38]
005ba118  PUSH EDX
005ba119  CALL 0x005c0910
005ba11e  ADD ESP,0xc
005ba121  MOV EAX,0x1
005ba126  SHL EAX,0x2
005ba129  ADD EAX,dword ptr [EBP + -0x44]
005ba12c  MOV ECX,dword ptr [EBP + -0x70]
005ba12f  MOV dword ptr [ECX + 0x8],EAX
005ba132  JMP 0x005ba18a
005ba134  MOV EDX,dword ptr [EBP + -0x70]
005ba137  MOV EAX,dword ptr [EDX + 0x8]
005ba13a  MOV dword ptr [EBP + -0x48],EAX
005ba13d  MOV dword ptr [EBP + -0x8],0x0
005ba144  CMP dword ptr [EBP + -0x70],0x0
005ba148  JZ 0x005ba160
005ba14a  MOV ECX,dword ptr [EBP + -0x70]
005ba14d  MOV EDX,dword ptr [ECX + 0x4]
005ba150  CMP EDX,dword ptr [EBP + -0x48]
005ba153  JA 0x005ba160
005ba155  MOV EAX,dword ptr [EBP + -0x70]
005ba158  MOV ECX,dword ptr [EBP + -0x48]
005ba15b  CMP ECX,dword ptr [EAX + 0x8]
005ba15e  JBE 0x005ba166
005ba160  CALL dword ptr [0x006b2274]
005ba166  MOV EDX,dword ptr [EBP + -0x70]
005ba169  MOV dword ptr [EBP + -0x8],EDX
005ba16c  MOV EAX,dword ptr [EBP + -0x48]
005ba16f  MOV dword ptr [EBP + -0x4],EAX
005ba172  MOV ECX,dword ptr [EBP + 0x8]
005ba175  PUSH ECX
005ba176  MOV EDX,dword ptr [EBP + -0x4]
005ba179  PUSH EDX
005ba17a  MOV EAX,dword ptr [EBP + -0x8]
005ba17d  PUSH EAX
005ba17e  LEA ECX,[EBP + -0x10]
005ba181  PUSH ECX
005ba182  MOV ECX,dword ptr [EBP + -0x70]
005ba185  CALL 0x005ba440
005ba18a  MOV ESP,EBP
005ba18c  POP EBP
005ba18d  RET 0x4

; FUN_0062ccf0  0062ccf0
0062ccf0  PUSH EBP
0062ccf1  MOV EBP,ESP
0062ccf3  SUB ESP,0x3c
0062ccf6  MOV EAX,dword ptr [EBP + 0x10]
0062ccf9  MOV dword ptr [EBP + -0x38],EAX
0062ccfc  MOV ECX,dword ptr [EBP + 0x14]
0062ccff  MOV dword ptr [EBP + -0x34],ECX
0062cd02  MOV EDX,dword ptr [EBP + -0x34]
0062cd05  CMP EDX,dword ptr [EBP + 0x14]
0062cd08  JZ 0x0062cd14
0062cd0a  MOV EAX,0xfffffffb
0062cd0f  JMP 0x0062cdc0
0062cd14  MOV EAX,dword ptr [EBP + 0x8]
0062cd17  MOV dword ptr [EBP + -0x2c],EAX
0062cd1a  MOV ECX,dword ptr [EBP + 0xc]
0062cd1d  MOV EDX,dword ptr [ECX]
0062cd1f  MOV dword ptr [EBP + -0x28],EDX
0062cd22  MOV EAX,dword ptr [EBP + 0xc]
0062cd25  MOV ECX,dword ptr [EBP + -0x28]
0062cd28  CMP ECX,dword ptr [EAX]
0062cd2a  JZ 0x0062cd36
0062cd2c  MOV EAX,0xfffffffb
0062cd31  JMP 0x0062cdc0
0062cd36  MOV dword ptr [EBP + -0x18],0x0
0062cd3d  MOV dword ptr [EBP + -0x14],0x0
0062cd44  PUSH 0x38
0062cd46  PUSH 0x6d97b8
0062cd4b  LEA EDX,[EBP + -0x38]
0062cd4e  PUSH EDX
0062cd4f  CALL 0x006818d0
0062cd54  ADD ESP,0xc
0062cd57  MOV dword ptr [EBP + -0x3c],EAX
0062cd5a  CMP dword ptr [EBP + -0x3c],0x0
0062cd5e  JZ 0x0062cd65
0062cd60  MOV EAX,dword ptr [EBP + -0x3c]
0062cd63  JMP 0x0062cdc0
0062cd65  PUSH 0x2
0062cd67  LEA EAX,[EBP + -0x38]
0062cd6a  PUSH EAX
0062cd6b  CALL 0x00681a00
0062cd70  ADD ESP,0x8
0062cd73  MOV dword ptr [EBP + -0x3c],EAX
0062cd76  CMP dword ptr [EBP + -0x3c],0x1
0062cd7a  JZ 0x0062cda6
0062cd7c  LEA ECX,[EBP + -0x38]
0062cd7f  PUSH ECX
0062cd80  CALL 0x00682ff0
0062cd85  ADD ESP,0x4
0062cd88  CMP dword ptr [EBP + -0x3c],0x2
0062cd8c  JZ 0x0062cd9a
0062cd8e  CMP dword ptr [EBP + -0x3c],-0x5
0062cd92  JNZ 0x0062cda1
0062cd94  CMP dword ptr [EBP + -0x34],0x0
0062cd98  JNZ 0x0062cda1
0062cd9a  MOV EAX,0xfffffffd
0062cd9f  JMP 0x0062cdc0
0062cda1  MOV EAX,dword ptr [EBP + -0x3c]
0062cda4  JMP 0x0062cdc0
0062cda6  MOV EDX,dword ptr [EBP + 0xc]
0062cda9  MOV EAX,dword ptr [EBP + -0x24]
0062cdac  MOV dword ptr [EDX],EAX
0062cdae  LEA ECX,[EBP + -0x38]
0062cdb1  PUSH ECX
0062cdb2  CALL 0x00682ff0
0062cdb7  ADD ESP,0x4
0062cdba  MOV dword ptr [EBP + -0x3c],EAX
0062cdbd  MOV EAX,dword ptr [EBP + -0x3c]
0062cdc0  MOV ESP,EBP
0062cdc2  POP EBP
0062cdc3  RET

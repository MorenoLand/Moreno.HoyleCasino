; FUN_0062faa0  0062faa0
0062faa0  PUSH EBP
0062faa1  MOV EBP,ESP
0062faa3  SUB ESP,0x24
0062faa6  MOV dword ptr [EBP + -0x20],ECX
0062faa9  MOV EAX,dword ptr [EBP + -0x20]
0062faac  MOV ECX,dword ptr [EAX + 0xc]
0062faaf  MOV dword ptr [EBP + -0x8],ECX
0062fab2  XOR ECX,ECX
0062fab4  MOV EAX,dword ptr [EBP + -0x8]
0062fab7  MOV EDX,0x8
0062fabc  MUL EDX
0062fabe  SETO CL
0062fac1  NEG ECX
0062fac3  OR ECX,EAX
0062fac5  PUSH ECX
0062fac6  CALL 0x00686d82
0062facb  ADD ESP,0x4
0062face  MOV dword ptr [EBP + -0x10],EAX
0062fad1  CMP dword ptr [EBP + -0x10],0x0
0062fad5  JZ 0x0062fb14
0062fad7  MOV EAX,dword ptr [EBP + -0x8]
0062fada  MOV dword ptr [EBP + -0x1c],EAX
0062fadd  MOV ECX,dword ptr [EBP + -0x10]
0062fae0  MOV dword ptr [EBP + -0x18],ECX
0062fae3  MOV EDX,dword ptr [EBP + -0x1c]
0062fae6  SUB EDX,0x1
0062fae9  MOV dword ptr [EBP + -0x1c],EDX
0062faec  JS 0x0062fb0c
0062faee  MOV EAX,dword ptr [EBP + -0x18]
0062faf1  MOV dword ptr [EAX],0x0
0062faf7  MOV ECX,dword ptr [EBP + -0x18]
0062fafa  MOV dword ptr [ECX + 0x4],0x0
0062fb01  MOV EDX,dword ptr [EBP + -0x18]
0062fb04  ADD EDX,0x8
0062fb07  MOV dword ptr [EBP + -0x18],EDX
0062fb0a  JMP 0x0062fae3
0062fb0c  MOV EAX,dword ptr [EBP + -0x10]
0062fb0f  MOV dword ptr [EBP + -0x24],EAX
0062fb12  JMP 0x0062fb1b
0062fb14  MOV dword ptr [EBP + -0x24],0x0
0062fb1b  MOV ECX,dword ptr [EBP + -0x24]
0062fb1e  MOV dword ptr [EBP + -0xc],ECX
0062fb21  MOV EDX,dword ptr [EBP + -0xc]
0062fb24  MOV dword ptr [EBP + -0x4],EDX
0062fb27  MOV EAX,dword ptr [EBP + -0x20]
0062fb2a  CMP dword ptr [EAX + 0x10],0x0
0062fb2e  JZ 0x0062fb8a
0062fb30  MOV ECX,dword ptr [EBP + -0x20]
0062fb33  MOV EDX,dword ptr [ECX + 0x8]
0062fb36  SHL EDX,0x3
0062fb39  PUSH EDX
0062fb3a  MOV EAX,dword ptr [EBP + -0x20]
0062fb3d  MOV ECX,dword ptr [EAX + 0x10]
0062fb40  PUSH ECX
0062fb41  MOV EDX,dword ptr [EBP + -0x4]
0062fb44  PUSH EDX
0062fb45  CALL dword ptr [0x006b22d8]
0062fb4b  ADD ESP,0xc
0062fb4e  MOV EAX,dword ptr [EBP + -0x20]
0062fb51  MOV ECX,dword ptr [EBP + -0x20]
0062fb54  MOV EDX,dword ptr [EAX + 0xc]
0062fb57  SUB EDX,dword ptr [ECX + 0x8]
0062fb5a  SHL EDX,0x3
0062fb5d  PUSH EDX
0062fb5e  PUSH 0x0
0062fb60  MOV EAX,dword ptr [EBP + -0x20]
0062fb63  MOV ECX,dword ptr [EAX + 0x8]
0062fb66  MOV EDX,dword ptr [EBP + -0x4]
0062fb69  LEA EAX,[EDX + ECX*0x8]
0062fb6c  PUSH EAX
0062fb6d  CALL 0x00686fa2
0062fb72  ADD ESP,0xc
0062fb75  MOV ECX,dword ptr [EBP + -0x20]
0062fb78  MOV EDX,dword ptr [ECX + 0x10]
0062fb7b  MOV dword ptr [EBP + -0x14],EDX
0062fb7e  MOV EAX,dword ptr [EBP + -0x14]
0062fb81  PUSH EAX
0062fb82  CALL 0x00686cae
0062fb87  ADD ESP,0x4
0062fb8a  MOV ECX,dword ptr [EBP + -0x20]
0062fb8d  MOV EDX,dword ptr [EBP + -0x4]
0062fb90  MOV dword ptr [ECX + 0x10],EDX
0062fb93  MOV ESP,EBP
0062fb95  POP EBP
0062fb96  RET

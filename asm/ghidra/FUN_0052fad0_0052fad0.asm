; FUN_0052fad0  0052fad0
0052fad0  PUSH EBP
0052fad1  MOV EBP,ESP
0052fad3  PUSH -0x1
0052fad5  PUSH 0x6a4707
0052fada  MOV EAX,FS:[0x0]
0052fae0  PUSH EAX
0052fae1  SUB ESP,0x14
0052fae4  MOV EAX,[0x00781870]
0052fae9  XOR EAX,EBP
0052faeb  PUSH EAX
0052faec  LEA EAX,[EBP + -0xc]
0052faef  MOV FS:[0x0],EAX
0052faf5  MOV dword ptr [EBP + -0x1c],ECX
0052faf8  MOV EAX,dword ptr [EBP + -0x1c]
0052fafb  MOV dword ptr [EAX],0x6c3d7c
0052fb01  MOV dword ptr [EBP + -0x4],0x0
0052fb08  MOV ECX,dword ptr [EBP + -0x1c]
0052fb0b  MOV dword ptr [ECX + 0x2c],0x0
0052fb12  MOV dword ptr [EBP + -0x10],0x0
0052fb19  JMP 0x0052fb24
0052fb1b  MOV EDX,dword ptr [EBP + -0x10]
0052fb1e  ADD EDX,0x1
0052fb21  MOV dword ptr [EBP + -0x10],EDX
0052fb24  CMP dword ptr [EBP + -0x10],0x3
0052fb28  JGE 0x0052fb7a
0052fb2a  MOV EAX,dword ptr [EBP + -0x10]
0052fb2d  MOV ECX,dword ptr [EBP + -0x1c]
0052fb30  CMP dword ptr [ECX + EAX*0x4 + 0x20],0x0
0052fb35  JZ 0x0052fb6a
0052fb37  MOV EDX,dword ptr [EBP + -0x10]
0052fb3a  MOV EAX,dword ptr [EBP + -0x1c]
0052fb3d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x20]
0052fb41  MOV dword ptr [EBP + -0x18],ECX
0052fb44  MOV EDX,dword ptr [EBP + -0x18]
0052fb47  MOV dword ptr [EBP + -0x14],EDX
0052fb4a  CMP dword ptr [EBP + -0x14],0x0
0052fb4e  JZ 0x0052fb63
0052fb50  PUSH 0x1
0052fb52  MOV EAX,dword ptr [EBP + -0x14]
0052fb55  MOV EDX,dword ptr [EAX]
0052fb57  MOV ECX,dword ptr [EBP + -0x14]
0052fb5a  MOV EAX,dword ptr [EDX]
0052fb5c  CALL EAX
0052fb5e  MOV dword ptr [EBP + -0x20],EAX
0052fb61  JMP 0x0052fb6a
0052fb63  MOV dword ptr [EBP + -0x20],0x0
0052fb6a  MOV ECX,dword ptr [EBP + -0x10]
0052fb6d  MOV EDX,dword ptr [EBP + -0x1c]
0052fb70  MOV dword ptr [EDX + ECX*0x4 + 0x20],0x0
0052fb78  JMP 0x0052fb1b
0052fb7a  MOV dword ptr [EBP + -0x4],0xffffffff
0052fb81  MOV ECX,dword ptr [EBP + -0x1c]
0052fb84  CALL 0x005fc150
0052fb89  MOV ECX,dword ptr [EBP + -0xc]
0052fb8c  MOV dword ptr FS:[0x0],ECX
0052fb93  POP ECX
0052fb94  MOV ESP,EBP
0052fb96  POP EBP
0052fb97  RET

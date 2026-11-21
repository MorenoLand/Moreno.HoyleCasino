; FUN_004b7df0  004b7df0
004b7df0  PUSH EBP
004b7df1  MOV EBP,ESP
004b7df3  PUSH -0x1
004b7df5  PUSH 0x6a2158
004b7dfa  MOV EAX,FS:[0x0]
004b7e00  PUSH EAX
004b7e01  SUB ESP,0xa78
004b7e07  MOV EAX,[0x00781870]
004b7e0c  XOR EAX,EBP
004b7e0e  MOV dword ptr [EBP + -0x14],EAX
004b7e11  PUSH ESI
004b7e12  PUSH EDI
004b7e13  PUSH EAX
004b7e14  LEA EAX,[EBP + -0xc]
004b7e17  MOV FS:[0x0],EAX
004b7e1d  MOV dword ptr [EBP + 0xfffff7a8],ECX
004b7e23  MOV dword ptr [EBP + 0xfffff7ac],0x0
004b7e2d  MOV EAX,dword ptr [EBP + 0xfffff7a8]
004b7e33  MOV ECX,dword ptr [EAX + 0xc]
004b7e36  MOV EDX,dword ptr [ECX + 0x4]
004b7e39  MOV dword ptr [EBP + -0x10],EDX
004b7e3c  MOV EAX,dword ptr [EBP + 0x8]
004b7e3f  PUSH EAX
004b7e40  MOV ECX,dword ptr [EBP + 0xfffff7a8]
004b7e46  CALL 0x005fc3a0
004b7e4b  MOV ECX,dword ptr [EBP + 0xfffff7a8]
004b7e51  MOV EDX,dword ptr [ECX + 0x14]
004b7e54  MOV dword ptr [EBP + 0xfffff7a4],EDX
004b7e5a  CMP dword ptr [EBP + 0xfffff7a4],0x20
004b7e61  JA 0x004c353d
004b7e67  MOV EAX,dword ptr [EBP + 0xfffff7a4]
004b7e6d  JMP dword ptr [EAX*0x4 + 0x4c355c]
004c353d  MOV ECX,dword ptr [EBP + -0xc]
004c3540  MOV dword ptr FS:[0x0],ECX
004c3547  POP ECX
004c3548  POP EDI
004c3549  POP ESI
004c354a  MOV ECX,dword ptr [EBP + -0x14]
004c354d  XOR ECX,EBP
004c354f  CALL 0x00686d72
004c3554  MOV ESP,EBP
004c3556  POP EBP
004c3557  RET 0x4

; FUN_005e0cc0  005e0cc0
005e0cc0  PUSH EBP
005e0cc1  MOV EBP,ESP
005e0cc3  SUB ESP,0x418
005e0cc9  MOV EAX,[0x00781870]
005e0cce  XOR EAX,EBP
005e0cd0  MOV dword ptr [EBP + -0x4],EAX
005e0cd3  MOV dword ptr [EBP + 0xfffffbe8],ECX
005e0cd9  MOV byte ptr [EBP + 0xfffffbf8],0x0
005e0ce0  PUSH 0x3ff
005e0ce5  PUSH 0x0
005e0ce7  LEA EAX,[EBP + 0xfffffbf9]
005e0ced  PUSH EAX
005e0cee  CALL 0x00686fa2
005e0cf3  ADD ESP,0xc
005e0cf6  PUSH 0x6d5050
005e0cfb  LEA ECX,[EBP + 0xfffffbf8]
005e0d01  PUSH ECX
005e0d02  CALL 0x00686ec6
005e0d07  ADD ESP,0x8
005e0d0a  PUSH 0x6c2d28
005e0d0f  LEA EDX,[EBP + 0xfffffbf8]
005e0d15  PUSH EDX
005e0d16  CALL 0x005ea9c0
005e0d1b  ADD ESP,0x8
005e0d1e  MOV dword ptr [EBP + 0xfffffbf0],EAX
005e0d24  CMP dword ptr [EBP + 0xfffffbf0],0x0
005e0d2b  JZ 0x005e0d63
005e0d2d  MOV EAX,dword ptr [EBP + 0xfffffbf0]
005e0d33  PUSH EAX
005e0d34  PUSH 0x1
005e0d36  PUSH 0x4e38
005e0d3b  MOV ECX,dword ptr [EBP + 0xfffffbe8]
005e0d41  ADD ECX,0x98
005e0d47  PUSH ECX
005e0d48  CALL dword ptr [0x006b225c]
005e0d4e  ADD ESP,0x10
005e0d51  MOV EDX,dword ptr [EBP + 0xfffffbf0]
005e0d57  PUSH EDX
005e0d58  CALL dword ptr [0x006b2258]
005e0d5e  ADD ESP,0x4
005e0d61  JMP 0x005e0ddf
005e0d63  MOV EAX,dword ptr [EBP + 0xfffffbe8]
005e0d69  MOV dword ptr [EAX + 0x98],0x1
005e0d73  MOV dword ptr [EBP + 0xfffffbf4],0x0
005e0d7d  JMP 0x005e0d8e
005e0d7f  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005e0d85  ADD ECX,0x1
005e0d88  MOV dword ptr [EBP + 0xfffffbf4],ECX
005e0d8e  CMP dword ptr [EBP + 0xfffffbf4],0x3e9
005e0d98  JGE 0x005e0ddf
005e0d9a  MOV dword ptr [EBP + 0xfffffbec],0x0
005e0da4  JMP 0x005e0db5
005e0da6  MOV EDX,dword ptr [EBP + 0xfffffbec]
005e0dac  ADD EDX,0x1
005e0daf  MOV dword ptr [EBP + 0xfffffbec],EDX
005e0db5  CMP dword ptr [EBP + 0xfffffbec],0x14
005e0dbc  JGE 0x005e0ddd
005e0dbe  MOV EAX,dword ptr [EBP + 0xfffffbf4]
005e0dc4  IMUL EAX,EAX,0x14
005e0dc7  ADD EAX,dword ptr [EBP + 0xfffffbec]
005e0dcd  MOV ECX,dword ptr [EBP + 0xfffffbe8]
005e0dd3  MOV byte ptr [ECX + EAX*0x1 + 0x9c],0x0
005e0ddb  JMP 0x005e0da6
005e0ddd  JMP 0x005e0d7f
005e0ddf  MOV ECX,dword ptr [EBP + -0x4]
005e0de2  XOR ECX,EBP
005e0de4  CALL 0x00686d72
005e0de9  MOV ESP,EBP
005e0deb  POP EBP
005e0dec  RET

; FUN_005afae0  005afae0
005afae0  PUSH EBP
005afae1  MOV EBP,ESP
005afae3  SUB ESP,0x130
005afae9  MOV EAX,[0x00781870]
005afaee  XOR EAX,EBP
005afaf0  MOV dword ptr [EBP + -0x4],EAX
005afaf3  MOV dword ptr [EBP + 0xfffffed0],ECX
005afaf9  CMP dword ptr [EBP + 0x18],0xf4240
005afb00  JL 0x005afb0e
005afb02  PUSH 0x55
005afb04  MOV ECX,dword ptr [EBP + 0x14]
005afb07  CALL 0x005ecc60
005afb0c  JMP 0x005afb18
005afb0e  PUSH 0x41
005afb10  MOV ECX,dword ptr [EBP + 0x14]
005afb13  CALL 0x005ecc60
005afb18  MOV EAX,dword ptr [EBP + 0x1c]
005afb1b  PUSH EAX
005afb1c  MOV ECX,dword ptr [EBP + 0x18]
005afb1f  PUSH ECX
005afb20  CALL 0x0064c8a0
005afb25  ADD ESP,0x8
005afb28  MOV dword ptr [EBP + 0xfffffed4],EAX
005afb2e  MOV dword ptr [EBP + 0xfffffed8],EDX
005afb34  PUSH 0x0
005afb36  PUSH 0x1
005afb38  PUSH 0x1
005afb3a  LEA EDX,[EBP + 0xfffffedc]
005afb40  PUSH EDX
005afb41  MOV EAX,dword ptr [EBP + 0xfffffed8]
005afb47  PUSH EAX
005afb48  MOV ECX,dword ptr [EBP + 0xfffffed4]
005afb4e  PUSH ECX
005afb4f  CALL 0x0064c8d0
005afb54  ADD ESP,0x18
005afb57  LEA EDX,[EBP + 0xfffffedc]
005afb5d  PUSH EDX
005afb5e  PUSH 0x6b2fd8
005afb63  LEA EAX,[EBP + 0xfffffef8]
005afb69  PUSH EAX
005afb6a  CALL dword ptr [0x006b2220]
005afb70  ADD ESP,0xc
005afb73  LEA ECX,[EBP + 0xfffffef8]
005afb79  PUSH ECX
005afb7a  MOV EDX,dword ptr [EBP + 0x14]
005afb7d  MOV EAX,dword ptr [EDX]
005afb7f  MOV ECX,dword ptr [EBP + 0x14]
005afb82  MOV EDX,dword ptr [EAX + 0xb4]
005afb88  CALL EDX
005afb8a  MOV AL,0x1
005afb8c  MOV ECX,dword ptr [EBP + -0x4]
005afb8f  XOR ECX,EBP
005afb91  CALL 0x00686d72
005afb96  MOV ESP,EBP
005afb98  POP EBP
005afb99  RET 0x1c

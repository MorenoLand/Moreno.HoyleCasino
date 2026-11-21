; FUN_005a39e0  005a39e0
005a39e0  PUSH EBP
005a39e1  MOV EBP,ESP
005a39e3  SUB ESP,0x28
005a39e6  PUSH ESI
005a39e7  MOV dword ptr [EBP + -0x28],ECX
005a39ea  MOV dword ptr [EBP + -0x4],0x0
005a39f1  JMP 0x005a39fc
005a39f3  MOV EAX,dword ptr [EBP + -0x4]
005a39f6  ADD EAX,0x1
005a39f9  MOV dword ptr [EBP + -0x4],EAX
005a39fc  CMP dword ptr [EBP + -0x4],0x4
005a3a00  JGE 0x005a3ac2
005a3a06  MOV ECX,dword ptr [EBP + -0x4]
005a3a09  IMUL ECX,ECX,0x3
005a3a0c  MOV dword ptr [EBP + -0x8],ECX
005a3a0f  MOV dword ptr [EBP + -0xc],0x0
005a3a16  JMP 0x005a3a21
005a3a18  MOV EDX,dword ptr [EBP + -0xc]
005a3a1b  ADD EDX,0x1
005a3a1e  MOV dword ptr [EBP + -0xc],EDX
005a3a21  CMP dword ptr [EBP + -0xc],0x3
005a3a25  JGE 0x005a3abd
005a3a2b  MOV EAX,dword ptr [EBP + -0xc]
005a3a2e  ADD EAX,dword ptr [EBP + -0x8]
005a3a31  MOV dword ptr [EBP + -0x10],EAX
005a3a34  PUSH 0x0
005a3a36  MOV ECX,dword ptr [EBP + -0x4]
005a3a39  PUSH ECX
005a3a3a  MOV EDX,dword ptr [EBP + -0x10]
005a3a3d  MOV EAX,dword ptr [EBP + -0x28]
005a3a40  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
005a3a44  CALL 0x005cb7d0
005a3a49  MOVZX ECX,AL
005a3a4c  TEST ECX,ECX
005a3a4e  JZ 0x005a3a92
005a3a50  MOV EDX,dword ptr [EBP + -0x10]
005a3a53  MOV EAX,dword ptr [EBP + -0x28]
005a3a56  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
005a3a5a  MOV dword ptr [EBP + -0x24],ECX
005a3a5d  MOV EDX,dword ptr [EBP + -0x4]
005a3a60  SHL EDX,0x5
005a3a63  MOV EAX,dword ptr [EBP + -0x24]
005a3a66  LEA ECX,[EAX + EDX*0x1 + 0x48]
005a3a6a  XOR EDX,EDX
005a3a6c  SHL EDX,0x3
005a3a6f  MOV EAX,dword ptr [ECX + EDX*0x1]
005a3a72  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
005a3a76  MOV dword ptr [EBP + -0x18],EAX
005a3a79  MOV dword ptr [EBP + -0x14],ECX
005a3a7c  MOV EDX,dword ptr [EBP + -0x18]
005a3a7f  MOV EAX,dword ptr [EBP + -0x14]
005a3a82  MOV ECX,dword ptr [EBP + -0x10]
005a3a85  MOV ESI,dword ptr [EBP + -0x28]
005a3a88  MOV dword ptr [ESI + ECX*0x8 + 0x38],EDX
005a3a8c  MOV dword ptr [ESI + ECX*0x8 + 0x3c],EAX
005a3a90  JMP 0x005a3ab8
005a3a92  PUSH 0x0
005a3a94  PUSH 0x0
005a3a96  CALL 0x0064c8a0
005a3a9b  ADD ESP,0x8
005a3a9e  MOV dword ptr [EBP + -0x20],EAX
005a3aa1  MOV dword ptr [EBP + -0x1c],EDX
005a3aa4  MOV EDX,dword ptr [EBP + -0x10]
005a3aa7  MOV EAX,dword ptr [EBP + -0x28]
005a3aaa  MOV ECX,dword ptr [EBP + -0x20]
005a3aad  MOV dword ptr [EAX + EDX*0x8 + 0x38],ECX
005a3ab1  MOV ECX,dword ptr [EBP + -0x1c]
005a3ab4  MOV dword ptr [EAX + EDX*0x8 + 0x3c],ECX
005a3ab8  JMP 0x005a3a18
005a3abd  JMP 0x005a39f3
005a3ac2  POP ESI
005a3ac3  MOV ESP,EBP
005a3ac5  POP EBP
005a3ac6  RET

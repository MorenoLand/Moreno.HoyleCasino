; FUN_005f6c70  005f6c70
005f6c70  PUSH EBP
005f6c71  MOV EBP,ESP
005f6c73  PUSH -0x1
005f6c75  PUSH 0x6a9f98
005f6c7a  MOV EAX,FS:[0x0]
005f6c80  PUSH EAX
005f6c81  SUB ESP,0x14
005f6c84  MOV EAX,[0x00781870]
005f6c89  XOR EAX,EBP
005f6c8b  PUSH EAX
005f6c8c  LEA EAX,[EBP + -0xc]
005f6c8f  MOV FS:[0x0],EAX
005f6c95  MOV dword ptr [EBP + -0x1c],ECX
005f6c98  MOV EAX,dword ptr [EBP + -0x1c]
005f6c9b  MOV dword ptr [EAX],0x6d6bac
005f6ca1  MOV dword ptr [EBP + -0x4],0x0
005f6ca8  MOV dword ptr [EBP + -0x10],0x0
005f6caf  JMP 0x005f6cba
005f6cb1  MOV ECX,dword ptr [EBP + -0x10]
005f6cb4  ADD ECX,0x1
005f6cb7  MOV dword ptr [EBP + -0x10],ECX
005f6cba  CMP dword ptr [EBP + -0x10],0x4
005f6cbe  JGE 0x005f6d10
005f6cc0  MOV EDX,dword ptr [EBP + -0x10]
005f6cc3  MOV EAX,dword ptr [EBP + -0x1c]
005f6cc6  CMP dword ptr [EAX + EDX*0x4 + 0x48],0x0
005f6ccb  JZ 0x005f6d0e
005f6ccd  MOV ECX,dword ptr [EBP + -0x10]
005f6cd0  MOV EDX,dword ptr [EBP + -0x1c]
005f6cd3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
005f6cd7  MOV dword ptr [EBP + -0x18],EAX
005f6cda  MOV ECX,dword ptr [EBP + -0x18]
005f6cdd  MOV dword ptr [EBP + -0x14],ECX
005f6ce0  CMP dword ptr [EBP + -0x14],0x0
005f6ce4  JZ 0x005f6cf9
005f6ce6  PUSH 0x1
005f6ce8  MOV EDX,dword ptr [EBP + -0x14]
005f6ceb  MOV EAX,dword ptr [EDX]
005f6ced  MOV ECX,dword ptr [EBP + -0x14]
005f6cf0  MOV EDX,dword ptr [EAX]
005f6cf2  CALL EDX
005f6cf4  MOV dword ptr [EBP + -0x20],EAX
005f6cf7  JMP 0x005f6d00
005f6cf9  MOV dword ptr [EBP + -0x20],0x0
005f6d00  MOV EAX,dword ptr [EBP + -0x10]
005f6d03  MOV ECX,dword ptr [EBP + -0x1c]
005f6d06  MOV dword ptr [ECX + EAX*0x4 + 0x48],0x0
005f6d0e  JMP 0x005f6cb1
005f6d10  MOV dword ptr [EBP + -0x4],0xffffffff
005f6d17  MOV ECX,dword ptr [EBP + -0x1c]
005f6d1a  CALL 0x005f4ad0
005f6d1f  MOV ECX,dword ptr [EBP + -0xc]
005f6d22  MOV dword ptr FS:[0x0],ECX
005f6d29  POP ECX
005f6d2a  MOV ESP,EBP
005f6d2c  POP EBP
005f6d2d  RET

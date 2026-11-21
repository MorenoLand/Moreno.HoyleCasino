; FUN_005c8c60  005c8c60
005c8c60  PUSH EBP
005c8c61  MOV EBP,ESP
005c8c63  SUB ESP,0x20
005c8c66  MOV dword ptr [EBP + -0x20],ECX
005c8c69  MOV EAX,[0x007947e0]
005c8c6e  MOV ECX,dword ptr [EBP + 0x8]
005c8c71  MOV dword ptr [EAX + 0x4f14],ECX
005c8c77  MOV EDX,dword ptr [0x007947e0]
005c8c7d  MOV EAX,dword ptr [EDX + 0x4f14]
005c8c83  MOV dword ptr [EBP + -0x10],EAX
005c8c86  MOV ECX,dword ptr [EBP + -0x10]
005c8c89  SUB ECX,0x3158d1
005c8c8f  IMUL ECX,ECX,0x384
005c8c95  ADD ECX,0x793618
005c8c9b  MOV EDX,dword ptr [EBP + -0x20]
005c8c9e  MOV dword ptr [EDX + 0x10],ECX
005c8ca1  MOV dword ptr [EBP + -0x4],0x0
005c8ca8  JMP 0x005c8cb3
005c8caa  MOV EAX,dword ptr [EBP + -0x4]
005c8cad  ADD EAX,0x1
005c8cb0  MOV dword ptr [EBP + -0x4],EAX
005c8cb3  MOV ECX,dword ptr [EBP + -0x20]
005c8cb6  MOV EDX,dword ptr [ECX + 0x10]
005c8cb9  MOV EAX,dword ptr [EBP + -0x4]
005c8cbc  CMP EAX,dword ptr [EDX]
005c8cbe  JGE 0x005c8d37
005c8cc0  MOV ECX,dword ptr [EBP + -0x20]
005c8cc3  MOV EDX,dword ptr [ECX + 0x10]
005c8cc6  MOV EAX,dword ptr [EBP + -0x4]
005c8cc9  IMUL EAX,EAX,0x7c
005c8ccc  LEA ECX,[EDX + EAX*0x1 + 0x20]
005c8cd0  MOV dword ptr [EBP + -0x8],ECX
005c8cd3  MOV EDX,dword ptr [EBP + -0x8]
005c8cd6  CMP dword ptr [EDX],0x0
005c8cd9  JG 0x005c8d0c
005c8cdb  MOV dword ptr [EBP + -0xc],0x0
005c8ce2  JMP 0x005c8ced
005c8ce4  MOV EAX,dword ptr [EBP + -0xc]
005c8ce7  ADD EAX,0x1
005c8cea  MOV dword ptr [EBP + -0xc],EAX
005c8ced  CMP dword ptr [EBP + -0xc],0x1e
005c8cf1  JGE 0x005c8d04
005c8cf3  MOV ECX,dword ptr [EBP + -0xc]
005c8cf6  MOV EDX,dword ptr [EBP + -0x8]
005c8cf9  CMP dword ptr [EDX + ECX*0x4 + 0x4],0x0
005c8cfe  JGE 0x005c8d02
005c8d00  JMP 0x005c8d04
005c8d02  JMP 0x005c8ce4
005c8d04  MOV EAX,dword ptr [EBP + -0x8]
005c8d07  MOV ECX,dword ptr [EBP + -0xc]
005c8d0a  MOV dword ptr [EAX],ECX
005c8d0c  MOV EDX,dword ptr [EBP + -0x20]
005c8d0f  MOV EAX,dword ptr [EDX + 0x10]
005c8d12  MOV ECX,dword ptr [EBP + -0x4]
005c8d15  IMUL ECX,ECX,0x7c
005c8d18  MOV EDX,dword ptr [EAX + ECX*0x1 + 0x20]
005c8d1c  SUB EDX,0x1
005c8d1f  PUSH EDX
005c8d20  CALL 0x0062fbf0
005c8d25  ADD ESP,0x4
005c8d28  MOV ECX,dword ptr [EBP + -0x4]
005c8d2b  MOV EDX,dword ptr [EBP + -0x20]
005c8d2e  MOV dword ptr [EDX + ECX*0x4 + 0x18],EAX
005c8d32  JMP 0x005c8caa
005c8d37  MOV EAX,dword ptr [EBP + -0x20]
005c8d3a  MOV ECX,dword ptr [EAX + 0x10]
005c8d3d  MOV EDX,dword ptr [ECX + 0x8]
005c8d40  PUSH EDX
005c8d41  PUSH 0x1
005c8d43  CALL 0x0062fc30
005c8d48  ADD ESP,0x8
005c8d4b  MOV ECX,dword ptr [EBP + -0x20]
005c8d4e  MOV dword ptr [ECX + 0xc],EAX
005c8d51  MOV EDX,dword ptr [EBP + -0x20]
005c8d54  MOV EAX,dword ptr [EDX + 0xc]
005c8d57  MOV dword ptr [EBP + -0x14],EAX
005c8d5a  PUSH 0x3
005c8d5c  PUSH 0x1
005c8d5e  CALL 0x0062fc30
005c8d63  ADD ESP,0x8
005c8d66  IMUL EAX,dword ptr [EBP + -0x14]
005c8d6a  MOV dword ptr [EBP + -0x18],EAX
005c8d6d  MOV ECX,dword ptr [EBP + -0x20]
005c8d70  MOV EDX,dword ptr [EBP + -0x18]
005c8d73  MOV dword ptr [ECX + 0x8],EDX
005c8d76  MOV EAX,dword ptr [EBP + -0x20]
005c8d79  MOV ECX,dword ptr [EAX + 0x8]
005c8d7c  MOV dword ptr [EBP + -0x1c],ECX
005c8d7f  MOV EDX,dword ptr [EBP + -0x20]
005c8d82  MOV EAX,dword ptr [EBP + -0x1c]
005c8d85  MOV dword ptr [EDX + 0x4],EAX
005c8d88  MOV ECX,dword ptr [EBP + -0x20]
005c8d8b  CALL 0x005c9140
005c8d90  MOV ECX,dword ptr [EBP + -0x20]
005c8d93  MOV dword ptr [ECX + 0x4],0x0
005c8d9a  MOV ESP,EBP
005c8d9c  POP EBP
005c8d9d  RET 0x4

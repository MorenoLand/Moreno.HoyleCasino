; FUN_005f59c0  005f59c0
005f59c0  PUSH EBP
005f59c1  MOV EBP,ESP
005f59c3  SUB ESP,0x2c
005f59c6  MOV dword ptr [EBP + -0x1c],ECX
005f59c9  CMP dword ptr [EBP + 0x18],0x0
005f59cd  JZ 0x005f5a5f
005f59d3  MOV EAX,dword ptr [EBP + 0x18]
005f59d6  CMP dword ptr [EAX],0x0
005f59d9  JL 0x005f59e5
005f59db  MOV ECX,dword ptr [EBP + 0x18]
005f59de  MOV EDX,dword ptr [ECX]
005f59e0  MOV dword ptr [EBP + -0x20],EDX
005f59e3  JMP 0x005f59ee
005f59e5  MOV EAX,dword ptr [EBP + -0x1c]
005f59e8  MOV ECX,dword ptr [EAX + 0x10]
005f59eb  MOV dword ptr [EBP + -0x20],ECX
005f59ee  MOV EDX,dword ptr [EBP + -0x20]
005f59f1  MOV dword ptr [EBP + -0x10],EDX
005f59f4  MOV EAX,dword ptr [EBP + 0x18]
005f59f7  CMP dword ptr [EAX + 0x4],0x0
005f59fb  JL 0x005f5a08
005f59fd  MOV ECX,dword ptr [EBP + 0x18]
005f5a00  MOV EDX,dword ptr [ECX + 0x4]
005f5a03  MOV dword ptr [EBP + -0x24],EDX
005f5a06  JMP 0x005f5a11
005f5a08  MOV EAX,dword ptr [EBP + -0x1c]
005f5a0b  MOV ECX,dword ptr [EAX + 0x14]
005f5a0e  MOV dword ptr [EBP + -0x24],ECX
005f5a11  MOV EDX,dword ptr [EBP + -0x24]
005f5a14  MOV dword ptr [EBP + -0xc],EDX
005f5a17  MOV EAX,dword ptr [EBP + 0x18]
005f5a1a  CMP dword ptr [EAX + 0x8],0x0
005f5a1e  JL 0x005f5a2b
005f5a20  MOV ECX,dword ptr [EBP + 0x18]
005f5a23  MOV EDX,dword ptr [ECX + 0x8]
005f5a26  MOV dword ptr [EBP + -0x28],EDX
005f5a29  JMP 0x005f5a34
005f5a2b  MOV EAX,dword ptr [EBP + -0x1c]
005f5a2e  MOV ECX,dword ptr [EAX + 0x18]
005f5a31  MOV dword ptr [EBP + -0x28],ECX
005f5a34  MOV EDX,dword ptr [EBP + -0x28]
005f5a37  MOV dword ptr [EBP + -0x8],EDX
005f5a3a  MOV EAX,dword ptr [EBP + 0x18]
005f5a3d  CMP dword ptr [EAX + 0xc],0x0
005f5a41  JL 0x005f5a4e
005f5a43  MOV ECX,dword ptr [EBP + 0x18]
005f5a46  MOV EDX,dword ptr [ECX + 0xc]
005f5a49  MOV dword ptr [EBP + -0x2c],EDX
005f5a4c  JMP 0x005f5a57
005f5a4e  MOV EAX,dword ptr [EBP + -0x1c]
005f5a51  MOV ECX,dword ptr [EAX + 0x1c]
005f5a54  MOV dword ptr [EBP + -0x2c],ECX
005f5a57  MOV EDX,dword ptr [EBP + -0x2c]
005f5a5a  MOV dword ptr [EBP + -0x4],EDX
005f5a5d  JMP 0x005f5a83
005f5a5f  MOV EAX,dword ptr [EBP + -0x1c]
005f5a62  MOV ECX,dword ptr [EAX + 0x10]
005f5a65  MOV dword ptr [EBP + -0x10],ECX
005f5a68  MOV EDX,dword ptr [EBP + -0x1c]
005f5a6b  MOV EAX,dword ptr [EDX + 0x14]
005f5a6e  MOV dword ptr [EBP + -0xc],EAX
005f5a71  MOV ECX,dword ptr [EBP + -0x1c]
005f5a74  MOV EDX,dword ptr [ECX + 0x18]
005f5a77  MOV dword ptr [EBP + -0x8],EDX
005f5a7a  MOV EAX,dword ptr [EBP + -0x1c]
005f5a7d  MOV ECX,dword ptr [EAX + 0x1c]
005f5a80  MOV dword ptr [EBP + -0x4],ECX
005f5a83  MOV EDX,dword ptr [EBP + -0x1c]
005f5a86  MOV EAX,dword ptr [EDX + 0x4]
005f5a89  MOV ECX,dword ptr [EAX + 0x1a8]
005f5a8f  MOV dword ptr [EBP + -0x14],ECX
005f5a92  MOV ECX,dword ptr [EBP + -0x14]
005f5a95  CALL 0x00613f80
005f5a9a  MOV EDX,dword ptr [EBP + -0x1c]
005f5a9d  MOV EAX,dword ptr [EDX + 0x4]
005f5aa0  MOV ECX,dword ptr [EAX + 0x1a8]
005f5aa6  MOV dword ptr [EBP + -0x18],ECX
005f5aa9  MOV EDX,dword ptr [EBP + 0x14]
005f5aac  PUSH EDX
005f5aad  MOV EAX,dword ptr [EBP + 0x10]
005f5ab0  PUSH EAX
005f5ab1  MOV ECX,dword ptr [EBP + 0xc]
005f5ab4  PUSH ECX
005f5ab5  LEA EDX,[EBP + -0x10]
005f5ab8  PUSH EDX
005f5ab9  MOV EAX,dword ptr [EBP + -0x18]
005f5abc  PUSH EAX
005f5abd  MOV ECX,dword ptr [EBP + 0x8]
005f5ac0  MOV EDX,dword ptr [ECX]
005f5ac2  MOV ECX,dword ptr [EBP + 0x8]
005f5ac5  MOV EAX,dword ptr [EDX + 0x14]
005f5ac8  CALL EAX
005f5aca  MOV ESP,EBP
005f5acc  POP EBP
005f5acd  RET 0x14

; FUN_005c6e20  005c6e20
005c6e20  PUSH EBP
005c6e21  MOV EBP,ESP
005c6e23  PUSH -0x1
005c6e25  PUSH 0x6a885e
005c6e2a  MOV EAX,FS:[0x0]
005c6e30  PUSH EAX
005c6e31  SUB ESP,0x6c
005c6e34  MOV EAX,[0x00781870]
005c6e39  XOR EAX,EBP
005c6e3b  PUSH EAX
005c6e3c  LEA EAX,[EBP + -0xc]
005c6e3f  MOV FS:[0x0],EAX
005c6e45  MOV dword ptr [EBP + -0x78],ECX
005c6e48  MOV ECX,dword ptr [EBP + -0x78]
005c6e4b  CALL 0x005c0a00
005c6e50  MOV dword ptr [EBP + -0x4],0x0
005c6e57  MOV EAX,dword ptr [EBP + -0x78]
005c6e5a  MOV dword ptr [EAX],0x6d1dd4
005c6e60  MOV ECX,dword ptr [EBP + -0x78]
005c6e63  ADD ECX,0x58
005c6e66  MOV dword ptr [EBP + -0x74],ECX
005c6e69  LEA EDX,[EBP + -0x15]
005c6e6c  MOV dword ptr [EBP + -0x14],EDX
005c6e6f  PUSH 0x0
005c6e71  MOV ECX,dword ptr [EBP + -0x74]
005c6e74  CALL 0x005bef20
005c6e79  MOV EAX,dword ptr [EBP + -0x78]
005c6e7c  MOV dword ptr [EAX + 0x50],0x75a1a0
005c6e83  MOV ECX,dword ptr [EBP + -0x78]
005c6e86  MOV dword ptr [ECX + 0x54],0x0
005c6e8d  MOV EDX,dword ptr [EBP + -0x78]
005c6e90  MOV dword ptr [EDX + 0x6c],0x0
005c6e97  MOV EAX,dword ptr [EBP + -0x78]
005c6e9a  MOV dword ptr [EAX + 0x70],0x0
005c6ea1  MOV ECX,dword ptr [EBP + -0x78]
005c6ea4  MOV dword ptr [ECX + 0x68],0x0
005c6eab  MOV dword ptr [EBP + -0x4],0xffffffff
005c6eb2  MOV EAX,dword ptr [EBP + -0x78]
005c6eb5  MOV ECX,dword ptr [EBP + -0xc]
005c6eb8  MOV dword ptr FS:[0x0],ECX
005c6ebf  POP ECX
005c6ec0  MOV ESP,EBP
005c6ec2  POP EBP
005c6ec3  RET

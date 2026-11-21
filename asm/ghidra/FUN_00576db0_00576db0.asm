; FUN_00576db0  00576db0
00576db0  PUSH EBP
00576db1  MOV EBP,ESP
00576db3  PUSH -0x1
00576db5  PUSH 0x6a644d
00576dba  MOV EAX,FS:[0x0]
00576dc0  PUSH EAX
00576dc1  SUB ESP,0x1c
00576dc4  MOV EAX,[0x00781870]
00576dc9  XOR EAX,EBP
00576dcb  PUSH EAX
00576dcc  LEA EAX,[EBP + -0xc]
00576dcf  MOV FS:[0x0],EAX
00576dd5  MOV dword ptr [EBP + -0x20],ECX
00576dd8  MOV EAX,dword ptr [EBP + -0x20]
00576ddb  CMP dword ptr [EAX + 0x4],0x0
00576ddf  JZ 0x00576e1a
00576de1  MOV ECX,dword ptr [EBP + -0x20]
00576de4  MOV EDX,dword ptr [ECX + 0x4]
00576de7  MOV dword ptr [EBP + -0x14],EDX
00576dea  MOV EAX,dword ptr [EBP + -0x14]
00576ded  MOV dword ptr [EBP + -0x10],EAX
00576df0  CMP dword ptr [EBP + -0x10],0x0
00576df4  JZ 0x00576e09
00576df6  PUSH 0x1
00576df8  MOV ECX,dword ptr [EBP + -0x10]
00576dfb  MOV EDX,dword ptr [ECX]
00576dfd  MOV ECX,dword ptr [EBP + -0x10]
00576e00  MOV EAX,dword ptr [EDX]
00576e02  CALL EAX
00576e04  MOV dword ptr [EBP + -0x24],EAX
00576e07  JMP 0x00576e10
00576e09  MOV dword ptr [EBP + -0x24],0x0
00576e10  MOV ECX,dword ptr [EBP + -0x20]
00576e13  MOV dword ptr [ECX + 0x4],0x0
00576e1a  MOV EDX,dword ptr [EBP + -0x20]
00576e1d  CMP dword ptr [EDX + 0x4],0x0
00576e21  JNZ 0x00576e67
00576e23  PUSH 0x28
00576e25  CALL 0x00686d82
00576e2a  ADD ESP,0x4
00576e2d  MOV dword ptr [EBP + -0x1c],EAX
00576e30  MOV dword ptr [EBP + -0x4],0x0
00576e37  CMP dword ptr [EBP + -0x1c],0x0
00576e3b  JZ 0x00576e4a
00576e3d  MOV ECX,dword ptr [EBP + -0x1c]
00576e40  CALL 0x00578210
00576e45  MOV dword ptr [EBP + -0x28],EAX
00576e48  JMP 0x00576e51
00576e4a  MOV dword ptr [EBP + -0x28],0x0
00576e51  MOV EAX,dword ptr [EBP + -0x28]
00576e54  MOV dword ptr [EBP + -0x18],EAX
00576e57  MOV dword ptr [EBP + -0x4],0xffffffff
00576e5e  MOV ECX,dword ptr [EBP + -0x20]
00576e61  MOV EDX,dword ptr [EBP + -0x18]
00576e64  MOV dword ptr [ECX + 0x4],EDX
00576e67  MOV ECX,dword ptr [EBP + -0xc]
00576e6a  MOV dword ptr FS:[0x0],ECX
00576e71  POP ECX
00576e72  MOV ESP,EBP
00576e74  POP EBP
00576e75  RET

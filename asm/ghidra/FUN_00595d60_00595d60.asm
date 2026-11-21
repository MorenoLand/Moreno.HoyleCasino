; FUN_00595d60  00595d60
00595d60  PUSH EBP
00595d61  MOV EBP,ESP
00595d63  PUSH -0x1
00595d65  PUSH 0x6a730b
00595d6a  MOV EAX,FS:[0x0]
00595d70  PUSH EAX
00595d71  SUB ESP,0x34
00595d74  MOV EAX,[0x00781870]
00595d79  XOR EAX,EBP
00595d7b  PUSH EAX
00595d7c  LEA EAX,[EBP + -0xc]
00595d7f  MOV FS:[0x0],EAX
00595d85  MOV dword ptr [EBP + -0x30],ECX
00595d88  MOV EAX,dword ptr [EBP + -0x30]
00595d8b  MOV dword ptr [EAX],0x6ce474
00595d91  MOV dword ptr [EBP + -0x4],0x0
00595d98  MOV dword ptr [0x007935a4],0x0
00595da2  MOV ECX,dword ptr [0x00793598]
00595da8  MOV dword ptr [EBP + -0x14],ECX
00595dab  MOV EDX,dword ptr [EBP + -0x14]
00595dae  MOV dword ptr [EBP + -0x10],EDX
00595db1  CMP dword ptr [EBP + -0x10],0x0
00595db5  JZ 0x00595dca
00595db7  PUSH 0x1
00595db9  MOV EAX,dword ptr [EBP + -0x10]
00595dbc  MOV EDX,dword ptr [EAX]
00595dbe  MOV ECX,dword ptr [EBP + -0x10]
00595dc1  MOV EAX,dword ptr [EDX]
00595dc3  CALL EAX
00595dc5  MOV dword ptr [EBP + -0x34],EAX
00595dc8  JMP 0x00595dd1
00595dca  MOV dword ptr [EBP + -0x34],0x0
00595dd1  MOV dword ptr [0x00793598],0x0
00595ddb  MOV ECX,dword ptr [0x0079359c]
00595de1  MOV dword ptr [EBP + -0x1c],ECX
00595de4  MOV EDX,dword ptr [EBP + -0x1c]
00595de7  MOV dword ptr [EBP + -0x18],EDX
00595dea  CMP dword ptr [EBP + -0x18],0x0
00595dee  JZ 0x00595e03
00595df0  PUSH 0x1
00595df2  MOV EAX,dword ptr [EBP + -0x18]
00595df5  MOV EDX,dword ptr [EAX]
00595df7  MOV ECX,dword ptr [EBP + -0x18]
00595dfa  MOV EAX,dword ptr [EDX]
00595dfc  CALL EAX
00595dfe  MOV dword ptr [EBP + -0x38],EAX
00595e01  JMP 0x00595e0a
00595e03  MOV dword ptr [EBP + -0x38],0x0
00595e0a  MOV dword ptr [0x0079359c],0x0
00595e14  MOV ECX,dword ptr [0x007935a0]
00595e1a  MOV dword ptr [EBP + -0x24],ECX
00595e1d  MOV EDX,dword ptr [EBP + -0x24]
00595e20  MOV dword ptr [EBP + -0x20],EDX
00595e23  CMP dword ptr [EBP + -0x20],0x0
00595e27  JZ 0x00595e3c
00595e29  PUSH 0x1
00595e2b  MOV EAX,dword ptr [EBP + -0x20]
00595e2e  MOV EDX,dword ptr [EAX]
00595e30  MOV ECX,dword ptr [EBP + -0x20]
00595e33  MOV EAX,dword ptr [EDX]
00595e35  CALL EAX
00595e37  MOV dword ptr [EBP + -0x3c],EAX
00595e3a  JMP 0x00595e43
00595e3c  MOV dword ptr [EBP + -0x3c],0x0
00595e43  MOV dword ptr [0x007935a0],0x0
00595e4d  MOV ECX,dword ptr [0x007935a8]
00595e53  MOV dword ptr [EBP + -0x2c],ECX
00595e56  MOV EDX,dword ptr [EBP + -0x2c]
00595e59  MOV dword ptr [EBP + -0x28],EDX
00595e5c  CMP dword ptr [EBP + -0x28],0x0
00595e60  JZ 0x00595e75
00595e62  PUSH 0x1
00595e64  MOV EAX,dword ptr [EBP + -0x28]
00595e67  MOV EDX,dword ptr [EAX]
00595e69  MOV ECX,dword ptr [EBP + -0x28]
00595e6c  MOV EAX,dword ptr [EDX]
00595e6e  CALL EAX
00595e70  MOV dword ptr [EBP + -0x40],EAX
00595e73  JMP 0x00595e7c
00595e75  MOV dword ptr [EBP + -0x40],0x0
00595e7c  MOV dword ptr [0x007935a8],0x0
00595e86  MOV dword ptr [EBP + -0x4],0xffffffff
00595e8d  MOV ECX,dword ptr [EBP + -0x30]
00595e90  CALL 0x005d7bd0
00595e95  MOV ECX,dword ptr [EBP + -0xc]
00595e98  MOV dword ptr FS:[0x0],ECX
00595e9f  POP ECX
00595ea0  MOV ESP,EBP
00595ea2  POP EBP
00595ea3  RET

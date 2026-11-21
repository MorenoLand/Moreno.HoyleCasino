; FUN_0060fd70  0060fd70
0060fd70  PUSH EBP
0060fd71  MOV EBP,ESP
0060fd73  PUSH -0x1
0060fd75  PUSH 0x6aae97
0060fd7a  MOV EAX,FS:[0x0]
0060fd80  PUSH EAX
0060fd81  SUB ESP,0x8
0060fd84  MOV EAX,[0x00781870]
0060fd89  XOR EAX,EBP
0060fd8b  PUSH EAX
0060fd8c  LEA EAX,[EBP + -0xc]
0060fd8f  MOV FS:[0x0],EAX
0060fd95  MOV dword ptr [EBP + -0x14],ECX
0060fd98  PUSH 0x0
0060fd9a  MOV ECX,dword ptr [EBP + -0x14]
0060fd9d  CALL 0x005fc0d0
0060fda2  MOV dword ptr [EBP + -0x4],0x0
0060fda9  MOV EAX,dword ptr [EBP + -0x14]
0060fdac  MOV dword ptr [EAX],0x6d8424
0060fdb2  MOV ECX,dword ptr [EBP + -0x14]
0060fdb5  MOV EDX,dword ptr [EBP + 0x8]
0060fdb8  MOV dword ptr [ECX + 0x20],EDX
0060fdbb  MOV EAX,dword ptr [EBP + -0x14]
0060fdbe  MOV ECX,dword ptr [EBP + 0xc]
0060fdc1  MOV dword ptr [EAX + 0x34],ECX
0060fdc4  MOV EDX,dword ptr [EBP + -0x14]
0060fdc7  MOV dword ptr [EDX + 0x24],0x1
0060fdce  CALL dword ptr [0x006b20bc]
0060fdd4  MOV ECX,dword ptr [EBP + -0x14]
0060fdd7  MOV dword ptr [ECX + 0x2c],EAX
0060fdda  MOV EDX,dword ptr [EBP + 0x8]
0060fddd  MOV dword ptr [EBP + -0x10],EDX
0060fde0  MOV EAX,dword ptr [EBP + -0x14]
0060fde3  MOV dword ptr [EAX + 0x28],0x0
0060fdea  CMP dword ptr [EBP + -0x10],0x0
0060fdee  JZ 0x0060fe0f
0060fdf0  MOV ECX,dword ptr [EBP + -0x14]
0060fdf3  MOV EDX,dword ptr [ECX + 0x28]
0060fdf6  ADD EDX,0x1
0060fdf9  MOV EAX,dword ptr [EBP + -0x14]
0060fdfc  MOV dword ptr [EAX + 0x28],EDX
0060fdff  MOV EAX,dword ptr [EBP + -0x10]
0060fe02  CDQ
0060fe03  MOV ECX,0xa
0060fe08  IDIV ECX
0060fe0a  MOV dword ptr [EBP + -0x10],EAX
0060fe0d  JMP 0x0060fdea
0060fe0f  MOV EDX,dword ptr [EBP + -0x14]
0060fe12  CMP dword ptr [EDX + 0x28],0x1
0060fe16  JGE 0x0060fe22
0060fe18  MOV EAX,dword ptr [EBP + -0x14]
0060fe1b  MOV dword ptr [EAX + 0x28],0x1
0060fe22  MOV ECX,dword ptr [EBP + -0x14]
0060fe25  MOV EDX,dword ptr [ECX + 0x34]
0060fe28  MOV EAX,dword ptr [EBP + -0x14]
0060fe2b  MOV ECX,dword ptr [EAX + 0x20]
0060fe2e  CMP ECX,dword ptr [EDX + 0x188]
0060fe34  JGE 0x0060fe54
0060fe36  MOV EDX,dword ptr [EBP + -0x14]
0060fe39  MOV byte ptr [EDX + 0x30],0x0
0060fe3d  MOV EAX,dword ptr [EBP + -0x14]
0060fe40  MOV ECX,dword ptr [EAX + 0x34]
0060fe43  ADD ECX,0x1b0
0060fe49  PUSH ECX
0060fe4a  CALL 0x00610980
0060fe4f  ADD ESP,0x4
0060fe52  JMP 0x0060fe70
0060fe54  MOV EDX,dword ptr [EBP + -0x14]
0060fe57  MOV byte ptr [EDX + 0x30],0x1
0060fe5b  MOV EAX,dword ptr [EBP + -0x14]
0060fe5e  MOV ECX,dword ptr [EAX + 0x34]
0060fe61  ADD ECX,0x190
0060fe67  PUSH ECX
0060fe68  CALL 0x00610980
0060fe6d  ADD ESP,0x4
0060fe70  MOV dword ptr [EBP + -0x4],0xffffffff
0060fe77  MOV EAX,dword ptr [EBP + -0x14]
0060fe7a  MOV ECX,dword ptr [EBP + -0xc]
0060fe7d  MOV dword ptr FS:[0x0],ECX
0060fe84  POP ECX
0060fe85  MOV ESP,EBP
0060fe87  POP EBP
0060fe88  RET 0x8

; FUN_005c6ed0  005c6ed0
005c6ed0  PUSH EBP
005c6ed1  MOV EBP,ESP
005c6ed3  PUSH -0x1
005c6ed5  PUSH 0x6a888c
005c6eda  MOV EAX,FS:[0x0]
005c6ee0  PUSH EAX
005c6ee1  SUB ESP,0x34
005c6ee4  MOV EAX,[0x00781870]
005c6ee9  XOR EAX,EBP
005c6eeb  PUSH EAX
005c6eec  LEA EAX,[EBP + -0xc]
005c6eef  MOV FS:[0x0],EAX
005c6ef5  MOV dword ptr [EBP + -0x3c],ECX
005c6ef8  MOV EAX,dword ptr [EBP + -0x3c]
005c6efb  MOV dword ptr [EAX],0x6d1dd4
005c6f01  MOV dword ptr [EBP + -0x4],0x1
005c6f08  MOV ECX,dword ptr [EBP + -0x3c]
005c6f0b  CMP dword ptr [ECX + 0x50],0x0
005c6f0f  JZ 0x005c6f25
005c6f11  PUSH 0x0
005c6f13  MOV EDX,dword ptr [EBP + -0x3c]
005c6f16  MOV EAX,dword ptr [EDX + 0x50]
005c6f19  ADD EAX,0x5c
005c6f1c  PUSH EAX
005c6f1d  CALL 0x006110a0
005c6f22  ADD ESP,0x8
005c6f25  PUSH 0x0
005c6f27  MOV ECX,dword ptr [0x007947e0]
005c6f2d  CALL 0x005dd400
005c6f32  MOV ECX,dword ptr [EBP + -0x3c]
005c6f35  CMP dword ptr [ECX + 0x6c],0x0
005c6f39  JZ 0x005c6f6a
005c6f3b  MOV EDX,dword ptr [EBP + -0x3c]
005c6f3e  MOV EAX,dword ptr [EDX + 0x6c]
005c6f41  MOV dword ptr [EBP + -0x18],EAX
005c6f44  MOV ECX,dword ptr [EBP + -0x18]
005c6f47  MOV dword ptr [EBP + -0x14],ECX
005c6f4a  CMP dword ptr [EBP + -0x14],0x0
005c6f4e  JZ 0x005c6f63
005c6f50  PUSH 0x1
005c6f52  MOV EDX,dword ptr [EBP + -0x14]
005c6f55  MOV EAX,dword ptr [EDX]
005c6f57  MOV ECX,dword ptr [EBP + -0x14]
005c6f5a  MOV EDX,dword ptr [EAX]
005c6f5c  CALL EDX
005c6f5e  MOV dword ptr [EBP + -0x40],EAX
005c6f61  JMP 0x005c6f6a
005c6f63  MOV dword ptr [EBP + -0x40],0x0
005c6f6a  MOV byte ptr [EBP + -0x4],0x0
005c6f6e  MOV EAX,dword ptr [EBP + -0x3c]
005c6f71  ADD EAX,0x58
005c6f74  MOV dword ptr [EBP + -0x38],EAX
005c6f77  MOV ECX,dword ptr [EBP + -0x38]
005c6f7a  CALL 0x005be450
005c6f7f  MOV dword ptr [EBP + -0x4],0xffffffff
005c6f86  MOV ECX,dword ptr [EBP + -0x3c]
005c6f89  CALL 0x005c0b40
005c6f8e  MOV ECX,dword ptr [EBP + -0xc]
005c6f91  MOV dword ptr FS:[0x0],ECX
005c6f98  POP ECX
005c6f99  MOV ESP,EBP
005c6f9b  POP EBP
005c6f9c  RET

; FUN_00652e20  00652e20
00652e20  PUSH EBP
00652e21  MOV EBP,ESP
00652e23  PUSH -0x1
00652e25  PUSH 0x6ac3fd
00652e2a  MOV EAX,FS:[0x0]
00652e30  PUSH EAX
00652e31  SUB ESP,0x14
00652e34  MOV EAX,[0x00781870]
00652e39  XOR EAX,EBP
00652e3b  PUSH EAX
00652e3c  LEA EAX,[EBP + -0xc]
00652e3f  MOV FS:[0x0],EAX
00652e45  MOV dword ptr [EBP + -0x1c],ECX
00652e48  MOV ECX,dword ptr [EBP + -0x1c]
00652e4b  CALL 0x00601a80
00652e50  MOV dword ptr [EBP + -0x4],0x0
00652e57  MOV EAX,dword ptr [EBP + -0x1c]
00652e5a  MOV dword ptr [EAX],0x6dd294
00652e60  MOV ECX,dword ptr [EBP + -0x1c]
00652e63  MOV EDX,dword ptr [EBP + 0x8]
00652e66  MOV dword ptr [ECX + 0x1f4],EDX
00652e6c  MOV EAX,dword ptr [EBP + -0x1c]
00652e6f  MOV ECX,dword ptr [EBP + 0xc]
00652e72  MOV dword ptr [EAX + 0x1dc],ECX
00652e78  MOV dword ptr [EBP + -0x10],0x0
00652e7f  JMP 0x00652e8a
00652e81  MOV EDX,dword ptr [EBP + -0x10]
00652e84  ADD EDX,0x1
00652e87  MOV dword ptr [EBP + -0x10],EDX
00652e8a  CMP dword ptr [EBP + -0x10],0x5
00652e8e  JGE 0x00652ef5
00652e90  PUSH 0x5c
00652e92  CALL 0x00686d82
00652e97  ADD ESP,0x4
00652e9a  MOV dword ptr [EBP + -0x18],EAX
00652e9d  MOV byte ptr [EBP + -0x4],0x1
00652ea1  CMP dword ptr [EBP + -0x18],0x0
00652ea5  JZ 0x00652eb4
00652ea7  MOV ECX,dword ptr [EBP + -0x18]
00652eaa  CALL 0x005f6130
00652eaf  MOV dword ptr [EBP + -0x20],EAX
00652eb2  JMP 0x00652ebb
00652eb4  MOV dword ptr [EBP + -0x20],0x0
00652ebb  MOV EAX,dword ptr [EBP + -0x20]
00652ebe  MOV dword ptr [EBP + -0x14],EAX
00652ec1  MOV byte ptr [EBP + -0x4],0x0
00652ec5  MOV ECX,dword ptr [EBP + -0x10]
00652ec8  MOV EDX,dword ptr [EBP + -0x1c]
00652ecb  MOV EAX,dword ptr [EBP + -0x14]
00652ece  MOV dword ptr [EDX + ECX*0x4 + 0x1e0],EAX
00652ed5  PUSH -0x1
00652ed7  PUSH 0x0
00652ed9  PUSH 0x0
00652edb  PUSH 0x0
00652edd  PUSH 0xf
00652edf  PUSH 0x0
00652ee1  MOV ECX,dword ptr [EBP + -0x10]
00652ee4  MOV EDX,dword ptr [EBP + -0x1c]
00652ee7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1e0]
00652eee  CALL 0x005f61d0
00652ef3  JMP 0x00652e81
00652ef5  MOV dword ptr [EBP + -0x4],0xffffffff
00652efc  MOV EAX,dword ptr [EBP + -0x1c]
00652eff  MOV ECX,dword ptr [EBP + -0xc]
00652f02  MOV dword ptr FS:[0x0],ECX
00652f09  POP ECX
00652f0a  MOV ESP,EBP
00652f0c  POP EBP
00652f0d  RET 0x8

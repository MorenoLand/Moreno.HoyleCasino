; FUN_005ea9c0  005ea9c0
005ea9c0  PUSH EBP
005ea9c1  MOV EBP,ESP
005ea9c3  PUSH -0x1
005ea9c5  PUSH 0x6a9ba5
005ea9ca  MOV EAX,FS:[0x0]
005ea9d0  PUSH EAX
005ea9d1  SUB ESP,0x24
005ea9d4  MOV EAX,[0x00781870]
005ea9d9  XOR EAX,EBP
005ea9db  MOV dword ptr [EBP + -0x10],EAX
005ea9de  PUSH EAX
005ea9df  LEA EAX,[EBP + -0xc]
005ea9e2  MOV FS:[0x0],EAX
005ea9e8  LEA ECX,[EBP + -0x2c]
005ea9eb  CALL dword ptr [0x006b210c]
005ea9f1  MOV dword ptr [EBP + -0x4],0x0
005ea9f8  LEA EAX,[EBP + -0x2c]
005ea9fb  PUSH EAX
005ea9fc  MOV ECX,dword ptr [EBP + 0xc]
005ea9ff  PUSH ECX
005eaa00  MOV EDX,dword ptr [EBP + 0x8]
005eaa03  PUSH EDX
005eaa04  CALL 0x005ea820
005eaa09  ADD ESP,0xc
005eaa0c  MOV dword ptr [EBP + -0x30],EAX
005eaa0f  MOV dword ptr [EBP + -0x4],0xffffffff
005eaa16  LEA ECX,[EBP + -0x2c]
005eaa19  CALL dword ptr [0x006b20f4]
005eaa1f  MOV EAX,dword ptr [EBP + -0x30]
005eaa22  MOV ECX,dword ptr [EBP + -0xc]
005eaa25  MOV dword ptr FS:[0x0],ECX
005eaa2c  POP ECX
005eaa2d  MOV ECX,dword ptr [EBP + -0x10]
005eaa30  XOR ECX,EBP
005eaa32  CALL 0x00686d72
005eaa37  MOV ESP,EBP
005eaa39  POP EBP
005eaa3a  RET

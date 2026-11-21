; FUN_00570da0  00570da0
00570da0  PUSH EBP
00570da1  MOV EBP,ESP
00570da3  PUSH -0x1
00570da5  PUSH 0x6a5fef
00570daa  MOV EAX,FS:[0x0]
00570db0  PUSH EAX
00570db1  SUB ESP,0x28
00570db4  MOV EAX,[0x00781870]
00570db9  XOR EAX,EBP
00570dbb  PUSH EAX
00570dbc  LEA EAX,[EBP + -0xc]
00570dbf  MOV FS:[0x0],EAX
00570dc5  MOV dword ptr [EBP + -0x28],ECX
00570dc8  MOV EAX,dword ptr [EBP + -0x28]
00570dcb  MOV dword ptr [EAX],0x6ca65c
00570dd1  MOV dword ptr [EBP + -0x4],0x0
00570dd8  MOV ECX,dword ptr [EBP + -0x28]
00570ddb  CMP dword ptr [ECX + 0x184],0x0
00570de2  JZ 0x00570e23
00570de4  MOV EDX,dword ptr [EBP + -0x28]
00570de7  MOV EAX,dword ptr [EDX + 0x184]
00570ded  MOV dword ptr [EBP + -0x14],EAX
00570df0  MOV ECX,dword ptr [EBP + -0x14]
00570df3  MOV dword ptr [EBP + -0x10],ECX
00570df6  CMP dword ptr [EBP + -0x10],0x0
00570dfa  JZ 0x00570e0f
00570dfc  PUSH 0x1
00570dfe  MOV EDX,dword ptr [EBP + -0x10]
00570e01  MOV EAX,dword ptr [EDX]
00570e03  MOV ECX,dword ptr [EBP + -0x10]
00570e06  MOV EDX,dword ptr [EAX]
00570e08  CALL EDX
00570e0a  MOV dword ptr [EBP + -0x2c],EAX
00570e0d  JMP 0x00570e16
00570e0f  MOV dword ptr [EBP + -0x2c],0x0
00570e16  MOV EAX,dword ptr [EBP + -0x28]
00570e19  MOV dword ptr [EAX + 0x184],0x0
00570e23  MOV ECX,dword ptr [EBP + -0x28]
00570e26  CMP dword ptr [ECX + 0x188],0x0
00570e2d  JZ 0x00570e6e
00570e2f  MOV EDX,dword ptr [EBP + -0x28]
00570e32  MOV EAX,dword ptr [EDX + 0x188]
00570e38  MOV dword ptr [EBP + -0x1c],EAX
00570e3b  MOV ECX,dword ptr [EBP + -0x1c]
00570e3e  MOV dword ptr [EBP + -0x18],ECX
00570e41  CMP dword ptr [EBP + -0x18],0x0
00570e45  JZ 0x00570e5a
00570e47  PUSH 0x1
00570e49  MOV EDX,dword ptr [EBP + -0x18]
00570e4c  MOV EAX,dword ptr [EDX]
00570e4e  MOV ECX,dword ptr [EBP + -0x18]
00570e51  MOV EDX,dword ptr [EAX]
00570e53  CALL EDX
00570e55  MOV dword ptr [EBP + -0x30],EAX
00570e58  JMP 0x00570e61
00570e5a  MOV dword ptr [EBP + -0x30],0x0
00570e61  MOV EAX,dword ptr [EBP + -0x28]
00570e64  MOV dword ptr [EAX + 0x188],0x0
00570e6e  MOV ECX,dword ptr [EBP + -0x28]
00570e71  CMP dword ptr [ECX + 0x18c],0x0
00570e78  JZ 0x00570eb9
00570e7a  MOV EDX,dword ptr [EBP + -0x28]
00570e7d  MOV EAX,dword ptr [EDX + 0x18c]
00570e83  MOV dword ptr [EBP + -0x24],EAX
00570e86  MOV ECX,dword ptr [EBP + -0x24]
00570e89  MOV dword ptr [EBP + -0x20],ECX
00570e8c  CMP dword ptr [EBP + -0x20],0x0
00570e90  JZ 0x00570ea5
00570e92  PUSH 0x1
00570e94  MOV EDX,dword ptr [EBP + -0x20]
00570e97  MOV EAX,dword ptr [EDX]
00570e99  MOV ECX,dword ptr [EBP + -0x20]
00570e9c  MOV EDX,dword ptr [EAX]
00570e9e  CALL EDX
00570ea0  MOV dword ptr [EBP + -0x34],EAX
00570ea3  JMP 0x00570eac
00570ea5  MOV dword ptr [EBP + -0x34],0x0
00570eac  MOV EAX,dword ptr [EBP + -0x28]
00570eaf  MOV dword ptr [EAX + 0x18c],0x0
00570eb9  MOV dword ptr [EBP + -0x4],0xffffffff
00570ec0  MOV ECX,dword ptr [EBP + -0x28]
00570ec3  CALL 0x005f5c40
00570ec8  MOV ECX,dword ptr [EBP + -0xc]
00570ecb  MOV dword ptr FS:[0x0],ECX
00570ed2  POP ECX
00570ed3  MOV ESP,EBP
00570ed5  POP EBP
00570ed6  RET

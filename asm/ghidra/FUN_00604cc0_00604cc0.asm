; FUN_00604cc0  00604cc0
00604cc0  PUSH EBP
00604cc1  MOV EBP,ESP
00604cc3  PUSH -0x1
00604cc5  PUSH 0x6aab41
00604cca  MOV EAX,FS:[0x0]
00604cd0  PUSH EAX
00604cd1  SUB ESP,0x1c
00604cd4  MOV EAX,[0x00781870]
00604cd9  XOR EAX,EBP
00604cdb  PUSH EAX
00604cdc  LEA EAX,[EBP + -0xc]
00604cdf  MOV FS:[0x0],EAX
00604ce5  MOV dword ptr [EBP + -0x20],ECX
00604ce8  MOV EAX,dword ptr [EBP + -0x20]
00604ceb  MOV dword ptr [EAX],0x6d788c
00604cf1  MOV dword ptr [EBP + -0x4],0x0
00604cf8  MOV ECX,dword ptr [EBP + -0x20]
00604cfb  MOV EDX,dword ptr [ECX + 0x48]
00604cfe  MOV dword ptr [EBP + -0x14],EDX
00604d01  MOV EAX,dword ptr [EBP + -0x14]
00604d04  MOV dword ptr [EBP + -0x10],EAX
00604d07  CMP dword ptr [EBP + -0x10],0x0
00604d0b  JZ 0x00604d20
00604d0d  PUSH 0x1
00604d0f  MOV ECX,dword ptr [EBP + -0x10]
00604d12  MOV EDX,dword ptr [ECX]
00604d14  MOV ECX,dword ptr [EBP + -0x10]
00604d17  MOV EAX,dword ptr [EDX]
00604d19  CALL EAX
00604d1b  MOV dword ptr [EBP + -0x24],EAX
00604d1e  JMP 0x00604d27
00604d20  MOV dword ptr [EBP + -0x24],0x0
00604d27  MOV ECX,dword ptr [EBP + -0x20]
00604d2a  MOV EDX,dword ptr [ECX + 0x4c]
00604d2d  MOV dword ptr [EBP + -0x1c],EDX
00604d30  MOV EAX,dword ptr [EBP + -0x1c]
00604d33  MOV dword ptr [EBP + -0x18],EAX
00604d36  CMP dword ptr [EBP + -0x18],0x0
00604d3a  JZ 0x00604d4f
00604d3c  PUSH 0x1
00604d3e  MOV ECX,dword ptr [EBP + -0x18]
00604d41  MOV EDX,dword ptr [ECX]
00604d43  MOV ECX,dword ptr [EBP + -0x18]
00604d46  MOV EAX,dword ptr [EDX]
00604d48  CALL EAX
00604d4a  MOV dword ptr [EBP + -0x28],EAX
00604d4d  JMP 0x00604d56
00604d4f  MOV dword ptr [EBP + -0x28],0x0
00604d56  MOV dword ptr [EBP + -0x4],0xffffffff
00604d5d  MOV ECX,dword ptr [EBP + -0x20]
00604d60  CALL 0x005f4ad0
00604d65  MOV ECX,dword ptr [EBP + -0xc]
00604d68  MOV dword ptr FS:[0x0],ECX
00604d6f  POP ECX
00604d70  MOV ESP,EBP
00604d72  POP EBP
00604d73  RET

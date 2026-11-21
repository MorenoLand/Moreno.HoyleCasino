; FUN_00582f70  00582f70
00582f70  PUSH EBP
00582f71  MOV EBP,ESP
00582f73  PUSH -0x1
00582f75  PUSH 0x6a6b38
00582f7a  MOV EAX,FS:[0x0]
00582f80  PUSH EAX
00582f81  SUB ESP,0x10
00582f84  MOV EAX,[0x00781870]
00582f89  XOR EAX,EBP
00582f8b  PUSH EAX
00582f8c  LEA EAX,[EBP + -0xc]
00582f8f  MOV FS:[0x0],EAX
00582f95  MOV dword ptr [EBP + -0x18],ECX
00582f98  MOV EAX,dword ptr [EBP + -0x18]
00582f9b  MOV dword ptr [EAX],0x6cc2f0
00582fa1  MOV dword ptr [EBP + -0x4],0x0
00582fa8  MOV ECX,dword ptr [EBP + -0x18]
00582fab  CMP dword ptr [ECX + 0x54],0x0
00582faf  JZ 0x00582fea
00582fb1  MOV EDX,dword ptr [EBP + -0x18]
00582fb4  MOV EAX,dword ptr [EDX + 0x54]
00582fb7  MOV dword ptr [EBP + -0x14],EAX
00582fba  MOV ECX,dword ptr [EBP + -0x14]
00582fbd  MOV dword ptr [EBP + -0x10],ECX
00582fc0  CMP dword ptr [EBP + -0x10],0x0
00582fc4  JZ 0x00582fd9
00582fc6  PUSH 0x1
00582fc8  MOV EDX,dword ptr [EBP + -0x10]
00582fcb  MOV EAX,dword ptr [EDX]
00582fcd  MOV ECX,dword ptr [EBP + -0x10]
00582fd0  MOV EDX,dword ptr [EAX]
00582fd2  CALL EDX
00582fd4  MOV dword ptr [EBP + -0x1c],EAX
00582fd7  JMP 0x00582fe0
00582fd9  MOV dword ptr [EBP + -0x1c],0x0
00582fe0  MOV EAX,dword ptr [EBP + -0x18]
00582fe3  MOV dword ptr [EAX + 0x54],0x0
00582fea  MOV dword ptr [EBP + -0x4],0xffffffff
00582ff1  MOV ECX,dword ptr [EBP + -0x18]
00582ff4  CALL 0x005e9e40
00582ff9  MOV ECX,dword ptr [EBP + -0xc]
00582ffc  MOV dword ptr FS:[0x0],ECX
00583003  POP ECX
00583004  MOV ESP,EBP
00583006  POP EBP
00583007  RET

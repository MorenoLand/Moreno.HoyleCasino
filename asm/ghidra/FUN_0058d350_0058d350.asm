; FUN_0058d350  0058d350
0058d350  PUSH EBP
0058d351  MOV EBP,ESP
0058d353  PUSH -0x1
0058d355  PUSH 0x6a6f33
0058d35a  MOV EAX,FS:[0x0]
0058d360  PUSH EAX
0058d361  SUB ESP,0x10
0058d364  MOV EAX,[0x00781870]
0058d369  XOR EAX,EBP
0058d36b  PUSH EAX
0058d36c  LEA EAX,[EBP + -0xc]
0058d36f  MOV FS:[0x0],EAX
0058d375  MOV dword ptr [EBP + -0x18],ECX
0058d378  MOV EAX,dword ptr [EBP + -0x18]
0058d37b  MOV dword ptr [EAX],0x6cd724
0058d381  MOV dword ptr [EBP + -0x4],0x0
0058d388  MOV ECX,dword ptr [EBP + -0x18]
0058d38b  CMP dword ptr [ECX + 0x208],0x0
0058d392  JZ 0x0058d3d3
0058d394  MOV EDX,dword ptr [EBP + -0x18]
0058d397  MOV EAX,dword ptr [EDX + 0x208]
0058d39d  MOV dword ptr [EBP + -0x14],EAX
0058d3a0  MOV ECX,dword ptr [EBP + -0x14]
0058d3a3  MOV dword ptr [EBP + -0x10],ECX
0058d3a6  CMP dword ptr [EBP + -0x10],0x0
0058d3aa  JZ 0x0058d3bf
0058d3ac  PUSH 0x1
0058d3ae  MOV EDX,dword ptr [EBP + -0x10]
0058d3b1  MOV EAX,dword ptr [EDX]
0058d3b3  MOV ECX,dword ptr [EBP + -0x10]
0058d3b6  MOV EDX,dword ptr [EAX]
0058d3b8  CALL EDX
0058d3ba  MOV dword ptr [EBP + -0x1c],EAX
0058d3bd  JMP 0x0058d3c6
0058d3bf  MOV dword ptr [EBP + -0x1c],0x0
0058d3c6  MOV EAX,dword ptr [EBP + -0x18]
0058d3c9  MOV dword ptr [EAX + 0x208],0x0
0058d3d3  MOV dword ptr [EBP + -0x4],0xffffffff
0058d3da  MOV ECX,dword ptr [EBP + -0x18]
0058d3dd  CALL 0x005ffd40
0058d3e2  MOV ECX,dword ptr [EBP + -0xc]
0058d3e5  MOV dword ptr FS:[0x0],ECX
0058d3ec  POP ECX
0058d3ed  MOV ESP,EBP
0058d3ef  POP EBP
0058d3f0  RET

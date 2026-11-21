; FUN_0051f340  0051f340
0051f340  PUSH EBP
0051f341  MOV EBP,ESP
0051f343  PUSH -0x1
0051f345  PUSH 0x6a3deb
0051f34a  MOV EAX,FS:[0x0]
0051f350  PUSH EAX
0051f351  SUB ESP,0x14
0051f354  MOV EAX,[0x00781870]
0051f359  XOR EAX,EBP
0051f35b  PUSH EAX
0051f35c  LEA EAX,[EBP + -0xc]
0051f35f  MOV FS:[0x0],EAX
0051f365  MOV dword ptr [EBP + -0x1c],ECX
0051f368  MOV EAX,dword ptr [EBP + -0x1c]
0051f36b  MOV dword ptr [EAX],0x6c27ac
0051f371  MOV dword ptr [EBP + -0x4],0x0
0051f378  MOV dword ptr [0x00793160],0x0
0051f382  MOV dword ptr [EBP + -0x10],0x0
0051f389  JMP 0x0051f394
0051f38b  MOV ECX,dword ptr [EBP + -0x10]
0051f38e  ADD ECX,0x1
0051f391  MOV dword ptr [EBP + -0x10],ECX
0051f394  CMP dword ptr [EBP + -0x10],0x6
0051f398  JGE 0x0051f3f3
0051f39a  MOV EDX,dword ptr [EBP + -0x10]
0051f39d  MOV EAX,dword ptr [EBP + -0x1c]
0051f3a0  CMP dword ptr [EAX + EDX*0x4 + 0x94],0x0
0051f3a8  JZ 0x0051f3f1
0051f3aa  MOV ECX,dword ptr [EBP + -0x10]
0051f3ad  MOV EDX,dword ptr [EBP + -0x1c]
0051f3b0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x94]
0051f3b7  MOV dword ptr [EBP + -0x18],EAX
0051f3ba  MOV ECX,dword ptr [EBP + -0x18]
0051f3bd  MOV dword ptr [EBP + -0x14],ECX
0051f3c0  CMP dword ptr [EBP + -0x14],0x0
0051f3c4  JZ 0x0051f3d9
0051f3c6  PUSH 0x1
0051f3c8  MOV EDX,dword ptr [EBP + -0x14]
0051f3cb  MOV EAX,dword ptr [EDX]
0051f3cd  MOV ECX,dword ptr [EBP + -0x14]
0051f3d0  MOV EDX,dword ptr [EAX]
0051f3d2  CALL EDX
0051f3d4  MOV dword ptr [EBP + -0x20],EAX
0051f3d7  JMP 0x0051f3e0
0051f3d9  MOV dword ptr [EBP + -0x20],0x0
0051f3e0  MOV EAX,dword ptr [EBP + -0x10]
0051f3e3  MOV ECX,dword ptr [EBP + -0x1c]
0051f3e6  MOV dword ptr [ECX + EAX*0x4 + 0x94],0x0
0051f3f1  JMP 0x0051f38b
0051f3f3  MOV dword ptr [EBP + -0x4],0xffffffff
0051f3fa  MOV ECX,dword ptr [EBP + -0x1c]
0051f3fd  CALL 0x005d7bd0
0051f402  MOV ECX,dword ptr [EBP + -0xc]
0051f405  MOV dword ptr FS:[0x0],ECX
0051f40c  POP ECX
0051f40d  MOV ESP,EBP
0051f40f  POP EBP
0051f410  RET

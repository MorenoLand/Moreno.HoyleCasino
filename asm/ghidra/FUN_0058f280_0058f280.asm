; FUN_0058f280  0058f280
0058f280  PUSH EBP
0058f281  MOV EBP,ESP
0058f283  PUSH -0x1
0058f285  PUSH 0x6a7014
0058f28a  MOV EAX,FS:[0x0]
0058f290  PUSH EAX
0058f291  SUB ESP,0x38
0058f294  MOV EAX,[0x00781870]
0058f299  XOR EAX,EBP
0058f29b  PUSH EAX
0058f29c  LEA EAX,[EBP + -0xc]
0058f29f  MOV FS:[0x0],EAX
0058f2a5  MOV dword ptr [EBP + -0x34],ECX
0058f2a8  MOV EAX,dword ptr [EBP + -0x34]
0058f2ab  MOV dword ptr [EAX],0x6cde04
0058f2b1  MOV dword ptr [EBP + -0x4],0x0
0058f2b8  MOV ECX,dword ptr [EBP + -0x34]
0058f2bb  CALL 0x0058f450
0058f2c0  MOV dword ptr [EBP + -0x10],0x0
0058f2c7  JMP 0x0058f2d2
0058f2c9  MOV ECX,dword ptr [EBP + -0x10]
0058f2cc  ADD ECX,0x1
0058f2cf  MOV dword ptr [EBP + -0x10],ECX
0058f2d2  CMP dword ptr [EBP + -0x10],0x50
0058f2d6  JGE 0x0058f31b
0058f2d8  MOV EDX,dword ptr [EBP + -0x10]
0058f2db  MOV EAX,dword ptr [EBP + -0x34]
0058f2de  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0058f2e2  MOV dword ptr [EBP + -0x18],ECX
0058f2e5  MOV EDX,dword ptr [EBP + -0x18]
0058f2e8  MOV dword ptr [EBP + -0x14],EDX
0058f2eb  CMP dword ptr [EBP + -0x14],0x0
0058f2ef  JZ 0x0058f304
0058f2f1  PUSH 0x1
0058f2f3  MOV EAX,dword ptr [EBP + -0x14]
0058f2f6  MOV EDX,dword ptr [EAX]
0058f2f8  MOV ECX,dword ptr [EBP + -0x14]
0058f2fb  MOV EAX,dword ptr [EDX]
0058f2fd  CALL EAX
0058f2ff  MOV dword ptr [EBP + -0x38],EAX
0058f302  JMP 0x0058f30b
0058f304  MOV dword ptr [EBP + -0x38],0x0
0058f30b  MOV ECX,dword ptr [EBP + -0x10]
0058f30e  MOV EDX,dword ptr [EBP + -0x34]
0058f311  MOV dword ptr [EDX + ECX*0x4 + 0x4],0x0
0058f319  JMP 0x0058f2c9
0058f31b  MOV EAX,dword ptr [EBP + -0x34]
0058f31e  MOV ECX,dword ptr [EAX + 0x144]
0058f324  MOV EDX,dword ptr [EBP + -0x34]
0058f327  MOV EAX,dword ptr [EDX + 0x144]
0058f32d  MOV EDX,dword ptr [ECX]
0058f32f  MOV ECX,EAX
0058f331  MOV EAX,dword ptr [EDX + 0x70]
0058f334  CALL EAX
0058f336  MOV ECX,dword ptr [EBP + -0x34]
0058f339  MOV EDX,dword ptr [ECX + 0x144]
0058f33f  MOV dword ptr [EBP + -0x20],EDX
0058f342  MOV EAX,dword ptr [EBP + -0x20]
0058f345  MOV dword ptr [EBP + -0x1c],EAX
0058f348  CMP dword ptr [EBP + -0x1c],0x0
0058f34c  JZ 0x0058f361
0058f34e  PUSH 0x1
0058f350  MOV ECX,dword ptr [EBP + -0x1c]
0058f353  MOV EDX,dword ptr [ECX]
0058f355  MOV ECX,dword ptr [EBP + -0x1c]
0058f358  MOV EAX,dword ptr [EDX]
0058f35a  CALL EAX
0058f35c  MOV dword ptr [EBP + -0x3c],EAX
0058f35f  JMP 0x0058f368
0058f361  MOV dword ptr [EBP + -0x3c],0x0
0058f368  MOV ECX,dword ptr [EBP + -0x34]
0058f36b  MOV dword ptr [ECX + 0x144],0x0
0058f375  MOV EDX,dword ptr [EBP + -0x34]
0058f378  MOV EAX,dword ptr [EDX + 0x148]
0058f37e  MOV ECX,dword ptr [EBP + -0x34]
0058f381  MOV ECX,dword ptr [ECX + 0x148]
0058f387  MOV EDX,dword ptr [EAX]
0058f389  MOV EAX,dword ptr [EDX + 0x70]
0058f38c  CALL EAX
0058f38e  MOV ECX,dword ptr [EBP + -0x34]
0058f391  MOV EDX,dword ptr [ECX + 0x148]
0058f397  MOV dword ptr [EBP + -0x28],EDX
0058f39a  MOV EAX,dword ptr [EBP + -0x28]
0058f39d  MOV dword ptr [EBP + -0x24],EAX
0058f3a0  CMP dword ptr [EBP + -0x24],0x0
0058f3a4  JZ 0x0058f3b9
0058f3a6  PUSH 0x1
0058f3a8  MOV ECX,dword ptr [EBP + -0x24]
0058f3ab  MOV EDX,dword ptr [ECX]
0058f3ad  MOV ECX,dword ptr [EBP + -0x24]
0058f3b0  MOV EAX,dword ptr [EDX]
0058f3b2  CALL EAX
0058f3b4  MOV dword ptr [EBP + -0x40],EAX
0058f3b7  JMP 0x0058f3c0
0058f3b9  MOV dword ptr [EBP + -0x40],0x0
0058f3c0  MOV ECX,dword ptr [EBP + -0x34]
0058f3c3  MOV dword ptr [ECX + 0x148],0x0
0058f3cd  MOV EDX,dword ptr [EBP + -0x34]
0058f3d0  MOV EAX,dword ptr [EDX + 0x178]
0058f3d6  MOV ECX,dword ptr [EBP + -0x34]
0058f3d9  MOV ECX,dword ptr [ECX + 0x178]
0058f3df  MOV EDX,dword ptr [EAX]
0058f3e1  MOV EAX,dword ptr [EDX + 0x70]
0058f3e4  CALL EAX
0058f3e6  MOV ECX,dword ptr [EBP + -0x34]
0058f3e9  MOV EDX,dword ptr [ECX + 0x178]
0058f3ef  MOV dword ptr [EBP + -0x30],EDX
0058f3f2  MOV EAX,dword ptr [EBP + -0x30]
0058f3f5  MOV dword ptr [EBP + -0x2c],EAX
0058f3f8  CMP dword ptr [EBP + -0x2c],0x0
0058f3fc  JZ 0x0058f411
0058f3fe  PUSH 0x1
0058f400  MOV ECX,dword ptr [EBP + -0x2c]
0058f403  MOV EDX,dword ptr [ECX]
0058f405  MOV ECX,dword ptr [EBP + -0x2c]
0058f408  MOV EAX,dword ptr [EDX]
0058f40a  CALL EAX
0058f40c  MOV dword ptr [EBP + -0x44],EAX
0058f40f  JMP 0x0058f418
0058f411  MOV dword ptr [EBP + -0x44],0x0
0058f418  MOV ECX,dword ptr [EBP + -0x34]
0058f41b  MOV dword ptr [ECX + 0x178],0x0
0058f425  MOV dword ptr [EBP + -0x4],0xffffffff
0058f42c  MOV ECX,dword ptr [EBP + -0x34]
0058f42f  CALL 0x005e9e40
0058f434  MOV ECX,dword ptr [EBP + -0xc]
0058f437  MOV dword ptr FS:[0x0],ECX
0058f43e  POP ECX
0058f43f  MOV ESP,EBP
0058f441  POP EBP
0058f442  RET

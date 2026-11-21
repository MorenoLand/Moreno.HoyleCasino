; FUN_0058b1c0  0058b1c0
0058b1c0  PUSH EBP
0058b1c1  MOV EBP,ESP
0058b1c3  PUSH -0x1
0058b1c5  PUSH 0x6a6ead
0058b1ca  MOV EAX,FS:[0x0]
0058b1d0  PUSH EAX
0058b1d1  SUB ESP,0x38
0058b1d4  MOV EAX,[0x00781870]
0058b1d9  XOR EAX,EBP
0058b1db  PUSH EAX
0058b1dc  LEA EAX,[EBP + -0xc]
0058b1df  MOV FS:[0x0],EAX
0058b1e5  MOV dword ptr [EBP + -0x34],ECX
0058b1e8  MOV EAX,dword ptr [EBP + -0x34]
0058b1eb  MOV dword ptr [EAX],0x6cd28c
0058b1f1  MOV dword ptr [EBP + -0x4],0x0
0058b1f8  MOV ECX,dword ptr [EBP + -0x34]
0058b1fb  CMP dword ptr [ECX + 0x178],0x0
0058b202  JZ 0x0058b243
0058b204  MOV EDX,dword ptr [EBP + -0x34]
0058b207  MOV EAX,dword ptr [EDX + 0x178]
0058b20d  MOV dword ptr [EBP + -0x18],EAX
0058b210  MOV ECX,dword ptr [EBP + -0x18]
0058b213  MOV dword ptr [EBP + -0x14],ECX
0058b216  CMP dword ptr [EBP + -0x14],0x0
0058b21a  JZ 0x0058b22f
0058b21c  PUSH 0x1
0058b21e  MOV EDX,dword ptr [EBP + -0x14]
0058b221  MOV EAX,dword ptr [EDX]
0058b223  MOV ECX,dword ptr [EBP + -0x14]
0058b226  MOV EDX,dword ptr [EAX]
0058b228  CALL EDX
0058b22a  MOV dword ptr [EBP + -0x38],EAX
0058b22d  JMP 0x0058b236
0058b22f  MOV dword ptr [EBP + -0x38],0x0
0058b236  MOV EAX,dword ptr [EBP + -0x34]
0058b239  MOV dword ptr [EAX + 0x178],0x0
0058b243  MOV ECX,dword ptr [EBP + -0x34]
0058b246  CMP dword ptr [ECX + 0x224],0x0
0058b24d  JZ 0x0058b28e
0058b24f  MOV EDX,dword ptr [EBP + -0x34]
0058b252  MOV EAX,dword ptr [EDX + 0x224]
0058b258  MOV dword ptr [EBP + -0x20],EAX
0058b25b  MOV ECX,dword ptr [EBP + -0x20]
0058b25e  MOV dword ptr [EBP + -0x1c],ECX
0058b261  CMP dword ptr [EBP + -0x1c],0x0
0058b265  JZ 0x0058b27a
0058b267  PUSH 0x1
0058b269  MOV EDX,dword ptr [EBP + -0x1c]
0058b26c  MOV EAX,dword ptr [EDX]
0058b26e  MOV ECX,dword ptr [EBP + -0x1c]
0058b271  MOV EDX,dword ptr [EAX]
0058b273  CALL EDX
0058b275  MOV dword ptr [EBP + -0x3c],EAX
0058b278  JMP 0x0058b281
0058b27a  MOV dword ptr [EBP + -0x3c],0x0
0058b281  MOV EAX,dword ptr [EBP + -0x34]
0058b284  MOV dword ptr [EAX + 0x224],0x0
0058b28e  MOV dword ptr [EBP + -0x10],0x0
0058b295  JMP 0x0058b2a0
0058b297  MOV ECX,dword ptr [EBP + -0x10]
0058b29a  ADD ECX,0x1
0058b29d  MOV dword ptr [EBP + -0x10],ECX
0058b2a0  CMP dword ptr [EBP + -0x10],0x15
0058b2a4  JGE 0x0058b35d
0058b2aa  MOV EDX,dword ptr [EBP + -0x10]
0058b2ad  MOV EAX,dword ptr [EBP + -0x34]
0058b2b0  CMP dword ptr [EAX + EDX*0x4 + 0x17c],0x0
0058b2b8  JZ 0x0058b301
0058b2ba  MOV ECX,dword ptr [EBP + -0x10]
0058b2bd  MOV EDX,dword ptr [EBP + -0x34]
0058b2c0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x17c]
0058b2c7  MOV dword ptr [EBP + -0x28],EAX
0058b2ca  MOV ECX,dword ptr [EBP + -0x28]
0058b2cd  MOV dword ptr [EBP + -0x24],ECX
0058b2d0  CMP dword ptr [EBP + -0x24],0x0
0058b2d4  JZ 0x0058b2e9
0058b2d6  PUSH 0x1
0058b2d8  MOV EDX,dword ptr [EBP + -0x24]
0058b2db  MOV EAX,dword ptr [EDX]
0058b2dd  MOV ECX,dword ptr [EBP + -0x24]
0058b2e0  MOV EDX,dword ptr [EAX]
0058b2e2  CALL EDX
0058b2e4  MOV dword ptr [EBP + -0x40],EAX
0058b2e7  JMP 0x0058b2f0
0058b2e9  MOV dword ptr [EBP + -0x40],0x0
0058b2f0  MOV EAX,dword ptr [EBP + -0x10]
0058b2f3  MOV ECX,dword ptr [EBP + -0x34]
0058b2f6  MOV dword ptr [ECX + EAX*0x4 + 0x17c],0x0
0058b301  MOV EDX,dword ptr [EBP + -0x10]
0058b304  MOV EAX,dword ptr [EBP + -0x34]
0058b307  CMP dword ptr [EAX + EDX*0x4 + 0x1d0],0x0
0058b30f  JZ 0x0058b358
0058b311  MOV ECX,dword ptr [EBP + -0x10]
0058b314  MOV EDX,dword ptr [EBP + -0x34]
0058b317  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1d0]
0058b31e  MOV dword ptr [EBP + -0x30],EAX
0058b321  MOV ECX,dword ptr [EBP + -0x30]
0058b324  MOV dword ptr [EBP + -0x2c],ECX
0058b327  CMP dword ptr [EBP + -0x2c],0x0
0058b32b  JZ 0x0058b340
0058b32d  PUSH 0x1
0058b32f  MOV EDX,dword ptr [EBP + -0x2c]
0058b332  MOV EAX,dword ptr [EDX]
0058b334  MOV ECX,dword ptr [EBP + -0x2c]
0058b337  MOV EDX,dword ptr [EAX]
0058b339  CALL EDX
0058b33b  MOV dword ptr [EBP + -0x44],EAX
0058b33e  JMP 0x0058b347
0058b340  MOV dword ptr [EBP + -0x44],0x0
0058b347  MOV EAX,dword ptr [EBP + -0x10]
0058b34a  MOV ECX,dword ptr [EBP + -0x34]
0058b34d  MOV dword ptr [ECX + EAX*0x4 + 0x1d0],0x0
0058b358  JMP 0x0058b297
0058b35d  MOV dword ptr [EBP + -0x4],0xffffffff
0058b364  MOV ECX,dword ptr [EBP + -0x34]
0058b367  CALL 0x005eac00
0058b36c  MOV ECX,dword ptr [EBP + -0xc]
0058b36f  MOV dword ptr FS:[0x0],ECX
0058b376  POP ECX
0058b377  MOV ESP,EBP
0058b379  POP EBP
0058b37a  RET

; FUN_0063fe70  0063fe70
0063fe70  PUSH EBP
0063fe71  MOV EBP,ESP
0063fe73  PUSH -0x1
0063fe75  PUSH 0x6abcb3
0063fe7a  MOV EAX,FS:[0x0]
0063fe80  PUSH EAX
0063fe81  PUSH ECX
0063fe82  MOV EAX,[0x00781870]
0063fe87  XOR EAX,EBP
0063fe89  PUSH EAX
0063fe8a  LEA EAX,[EBP + -0xc]
0063fe8d  MOV FS:[0x0],EAX
0063fe93  MOV dword ptr [EBP + -0x10],ECX
0063fe96  PUSH 0x0
0063fe98  PUSH 0x1
0063fe9a  MOV ECX,dword ptr [EBP + -0x10]
0063fe9d  CALL 0x005f71f0
0063fea2  MOV dword ptr [EBP + -0x4],0x0
0063fea9  MOV EAX,dword ptr [EBP + -0x10]
0063feac  MOV dword ptr [EAX],0x6dbd6c
0063feb2  MOV ECX,dword ptr [EBP + -0x10]
0063feb5  ADD ECX,0x1bc
0063febb  CALL 0x0063a0c0
0063fec0  MOV byte ptr [EBP + -0x4],0x1
0063fec4  PUSH 0x0
0063fec6  PUSH 0x30d4f2
0063fecb  MOV ECX,dword ptr [EBP + -0x10]
0063fece  CALL 0x005f83d0
0063fed3  MOV ECX,dword ptr [EBP + -0x10]
0063fed6  MOV EDX,dword ptr [EBP + 0x8]
0063fed9  MOV dword ptr [ECX + 0x568],EDX
0063fedf  MOV dword ptr [EBP + -0x4],0xffffffff
0063fee6  MOV EAX,dword ptr [EBP + -0x10]
0063fee9  MOV ECX,dword ptr [EBP + -0xc]
0063feec  MOV dword ptr FS:[0x0],ECX
0063fef3  POP ECX
0063fef4  MOV ESP,EBP
0063fef6  POP EBP
0063fef7  RET 0x4

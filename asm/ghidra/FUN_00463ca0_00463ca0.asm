; FUN_00463ca0  00463ca0
00463ca0  PUSH EBP
00463ca1  MOV EBP,ESP
00463ca3  PUSH -0x1
00463ca5  PUSH 0x69f3fe
00463caa  MOV EAX,FS:[0x0]
00463cb0  PUSH EAX
00463cb1  SUB ESP,0x10
00463cb4  MOV EAX,[0x00781870]
00463cb9  XOR EAX,EBP
00463cbb  PUSH EAX
00463cbc  LEA EAX,[EBP + -0xc]
00463cbf  MOV FS:[0x0],EAX
00463cc5  MOV dword ptr [EBP + -0x18],ECX
00463cc8  MOV EAX,dword ptr [EBP + -0x18]
00463ccb  MOV dword ptr [EAX],0x6ba8e0
00463cd1  MOV dword ptr [EBP + -0x4],0x0
00463cd8  MOV ECX,dword ptr [EBP + -0x18]
00463cdb  CMP dword ptr [ECX + 0x8],0x0
00463cdf  JZ 0x00463d1a
00463ce1  MOV EDX,dword ptr [EBP + -0x18]
00463ce4  MOV EAX,dword ptr [EDX + 0x8]
00463ce7  MOV dword ptr [EBP + -0x14],EAX
00463cea  MOV ECX,dword ptr [EBP + -0x14]
00463ced  MOV dword ptr [EBP + -0x10],ECX
00463cf0  CMP dword ptr [EBP + -0x10],0x0
00463cf4  JZ 0x00463d09
00463cf6  PUSH 0x1
00463cf8  MOV EDX,dword ptr [EBP + -0x10]
00463cfb  MOV EAX,dword ptr [EDX]
00463cfd  MOV ECX,dword ptr [EBP + -0x10]
00463d00  MOV EDX,dword ptr [EAX]
00463d02  CALL EDX
00463d04  MOV dword ptr [EBP + -0x1c],EAX
00463d07  JMP 0x00463d10
00463d09  MOV dword ptr [EBP + -0x1c],0x0
00463d10  MOV EAX,dword ptr [EBP + -0x18]
00463d13  MOV dword ptr [EAX + 0x8],0x0
00463d1a  MOV dword ptr [EBP + -0x4],0xffffffff
00463d21  MOV ECX,dword ptr [EBP + -0x18]
00463d24  CALL 0x005e9e40
00463d29  MOV ECX,dword ptr [EBP + -0xc]
00463d2c  MOV dword ptr FS:[0x0],ECX
00463d33  POP ECX
00463d34  MOV ESP,EBP
00463d36  POP EBP
00463d37  RET

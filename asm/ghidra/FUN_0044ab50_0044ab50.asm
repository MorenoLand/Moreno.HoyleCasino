; FUN_0044ab50  0044ab50
0044ab50  PUSH EBP
0044ab51  MOV EBP,ESP
0044ab53  PUSH -0x1
0044ab55  PUSH 0x69edf8
0044ab5a  MOV EAX,FS:[0x0]
0044ab60  PUSH EAX
0044ab61  PUSH ECX
0044ab62  MOV EAX,[0x00781870]
0044ab67  XOR EAX,EBP
0044ab69  PUSH EAX
0044ab6a  LEA EAX,[EBP + -0xc]
0044ab6d  MOV FS:[0x0],EAX
0044ab73  MOV dword ptr [EBP + -0x10],ECX
0044ab76  MOV ECX,dword ptr [EBP + -0x10]
0044ab79  CALL 0x005d7b60
0044ab7e  MOV dword ptr [EBP + -0x4],0x0
0044ab85  MOV EAX,dword ptr [EBP + -0x10]
0044ab88  MOV dword ptr [EAX],0x6b8d3c
0044ab8e  PUSH 0x310ab0
0044ab93  MOV ECX,dword ptr [EBP + -0x10]
0044ab96  CALL 0x005f1ad0
0044ab9b  MOV ECX,dword ptr [EBP + -0x10]
0044ab9e  MOV dword ptr [0x0079070c],ECX
0044aba4  MOV dword ptr [0x00790710],0x0
0044abae  MOV dword ptr [0x00790714],0x0
0044abb8  MOV dword ptr [0x00790718],0x0
0044abc2  MOV dword ptr [0x0079071c],0x0
0044abcc  MOV dword ptr [EBP + -0x4],0xffffffff
0044abd3  MOV EAX,dword ptr [EBP + -0x10]
0044abd6  MOV ECX,dword ptr [EBP + -0xc]
0044abd9  MOV dword ptr FS:[0x0],ECX
0044abe0  POP ECX
0044abe1  MOV ESP,EBP
0044abe3  POP EBP
0044abe4  RET

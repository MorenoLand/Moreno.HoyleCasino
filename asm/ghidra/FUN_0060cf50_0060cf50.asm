; FUN_0060cf50  0060cf50
0060cf50  PUSH EBP
0060cf51  MOV EBP,ESP
0060cf53  PUSH -0x1
0060cf55  PUSH 0x6aadd8
0060cf5a  MOV EAX,FS:[0x0]
0060cf60  PUSH EAX
0060cf61  PUSH ECX
0060cf62  MOV EAX,[0x00781870]
0060cf67  XOR EAX,EBP
0060cf69  PUSH EAX
0060cf6a  LEA EAX,[EBP + -0xc]
0060cf6d  MOV FS:[0x0],EAX
0060cf73  MOV dword ptr [EBP + -0x10],ECX
0060cf76  MOV ECX,dword ptr [EBP + -0x10]
0060cf79  CALL 0x006131b0
0060cf7e  MOV dword ptr [EBP + -0x4],0x0
0060cf85  MOV EAX,dword ptr [EBP + -0x10]
0060cf88  MOV dword ptr [EAX],0x6d82a4
0060cf8e  MOV ECX,dword ptr [EBP + -0x10]
0060cf91  MOV dword ptr [ECX + 0x90],0x0
0060cf9b  MOV EDX,dword ptr [EBP + -0x10]
0060cf9e  MOV byte ptr [EDX + 0x94],0x1
0060cfa5  MOV EAX,dword ptr [EBP + -0x10]
0060cfa8  MOV dword ptr [EAX + 0x8c],0x0
0060cfb2  MOV ECX,dword ptr [EBP + -0x10]
0060cfb5  MOV byte ptr [ECX + 0x95],0x0
0060cfbc  MOV EDX,dword ptr [EBP + -0x10]
0060cfbf  MOV dword ptr [EDX + 0xbc],0x0
0060cfc9  PUSH 0x795738
0060cfce  MOV ECX,dword ptr [EBP + -0x10]
0060cfd1  CALL 0x00614030
0060cfd6  MOV EAX,dword ptr [EBP + -0x10]
0060cfd9  MOV dword ptr [EAX + 0xc0],0x0
0060cfe3  MOV ECX,dword ptr [EBP + -0x10]
0060cfe6  MOV byte ptr [ECX + 0x96],0x0
0060cfed  MOV dword ptr [EBP + -0x4],0xffffffff
0060cff4  MOV EAX,dword ptr [EBP + -0x10]
0060cff7  MOV ECX,dword ptr [EBP + -0xc]
0060cffa  MOV dword ptr FS:[0x0],ECX
0060d001  POP ECX
0060d002  MOV ESP,EBP
0060d004  POP EBP
0060d005  RET

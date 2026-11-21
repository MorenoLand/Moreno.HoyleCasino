; FUN_0057ea10  0057ea10
0057ea10  PUSH EBP
0057ea11  MOV EBP,ESP
0057ea13  PUSH -0x1
0057ea15  PUSH 0x6a691e
0057ea1a  MOV EAX,FS:[0x0]
0057ea20  PUSH EAX
0057ea21  PUSH ECX
0057ea22  MOV EAX,[0x00781870]
0057ea27  XOR EAX,EBP
0057ea29  PUSH EAX
0057ea2a  LEA EAX,[EBP + -0xc]
0057ea2d  MOV FS:[0x0],EAX
0057ea33  MOV dword ptr [EBP + -0x10],ECX
0057ea36  PUSH 0x0
0057ea38  MOV ECX,dword ptr [EBP + -0x10]
0057ea3b  CALL 0x005fc0d0
0057ea40  MOV dword ptr [EBP + -0x4],0x0
0057ea47  MOV EAX,dword ptr [EBP + -0x10]
0057ea4a  MOV dword ptr [EAX],0x6cbff8
0057ea50  MOV ECX,dword ptr [EBP + -0x10]
0057ea53  MOV EDX,dword ptr [EBP + 0x8]
0057ea56  MOV dword ptr [ECX + 0xc],EDX
0057ea59  PUSH 0x0
0057ea5b  MOV ECX,dword ptr [EBP + -0x10]
0057ea5e  CALL 0x005fc4c0
0057ea63  MOV EAX,dword ptr [EBP + -0x10]
0057ea66  MOV ECX,dword ptr [EBP + -0x10]
0057ea69  MOV EDX,dword ptr [ECX + 0xc]
0057ea6c  MOV dword ptr [EAX + 0x20],EDX
0057ea6f  MOV EAX,dword ptr [EBP + -0x10]
0057ea72  MOV dword ptr [EAX + 0x24],0x0
0057ea79  MOV dword ptr [EBP + -0x4],0xffffffff
0057ea80  MOV EAX,dword ptr [EBP + -0x10]
0057ea83  MOV ECX,dword ptr [EBP + -0xc]
0057ea86  MOV dword ptr FS:[0x0],ECX
0057ea8d  POP ECX
0057ea8e  MOV ESP,EBP
0057ea90  POP EBP
0057ea91  RET 0x4

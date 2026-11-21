; FUN_0066d080  0066d080
0066d080  PUSH EBP
0066d081  MOV EBP,ESP
0066d083  PUSH -0x1
0066d085  PUSH 0x6acf1e
0066d08a  MOV EAX,FS:[0x0]
0066d090  PUSH EAX
0066d091  SUB ESP,0x1c
0066d094  MOV EAX,[0x00781870]
0066d099  XOR EAX,EBP
0066d09b  PUSH EAX
0066d09c  LEA EAX,[EBP + -0xc]
0066d09f  MOV FS:[0x0],EAX
0066d0a5  MOV dword ptr [EBP + -0x20],ECX
0066d0a8  MOV EAX,dword ptr [EBP + -0x20]
0066d0ab  MOV dword ptr [EAX],0x6e0c24
0066d0b1  MOV dword ptr [EBP + -0x4],0x0
0066d0b8  MOV ECX,dword ptr [EBP + -0x20]
0066d0bb  MOV EDX,dword ptr [ECX + 0x178]
0066d0c1  MOV dword ptr [EBP + -0x14],EDX
0066d0c4  MOV EAX,dword ptr [EBP + -0x14]
0066d0c7  MOV dword ptr [EBP + -0x10],EAX
0066d0ca  CMP dword ptr [EBP + -0x10],0x0
0066d0ce  JZ 0x0066d0e3
0066d0d0  PUSH 0x1
0066d0d2  MOV ECX,dword ptr [EBP + -0x10]
0066d0d5  MOV EDX,dword ptr [ECX]
0066d0d7  MOV ECX,dword ptr [EBP + -0x10]
0066d0da  MOV EAX,dword ptr [EDX]
0066d0dc  CALL EAX
0066d0de  MOV dword ptr [EBP + -0x24],EAX
0066d0e1  JMP 0x0066d0ea
0066d0e3  MOV dword ptr [EBP + -0x24],0x0
0066d0ea  MOV ECX,dword ptr [EBP + -0x20]
0066d0ed  MOV EDX,dword ptr [ECX + 0x17c]
0066d0f3  MOV dword ptr [EBP + -0x1c],EDX
0066d0f6  MOV EAX,dword ptr [EBP + -0x1c]
0066d0f9  MOV dword ptr [EBP + -0x18],EAX
0066d0fc  CMP dword ptr [EBP + -0x18],0x0
0066d100  JZ 0x0066d115
0066d102  PUSH 0x1
0066d104  MOV ECX,dword ptr [EBP + -0x18]
0066d107  MOV EDX,dword ptr [ECX]
0066d109  MOV ECX,dword ptr [EBP + -0x18]
0066d10c  MOV EAX,dword ptr [EDX]
0066d10e  CALL EAX
0066d110  MOV dword ptr [EBP + -0x28],EAX
0066d113  JMP 0x0066d11c
0066d115  MOV dword ptr [EBP + -0x28],0x0
0066d11c  MOV dword ptr [EBP + -0x4],0xffffffff
0066d123  MOV ECX,dword ptr [EBP + -0x20]
0066d126  CALL 0x005eac00
0066d12b  MOV ECX,dword ptr [EBP + -0xc]
0066d12e  MOV dword ptr FS:[0x0],ECX
0066d135  POP ECX
0066d136  MOV ESP,EBP
0066d138  POP EBP
0066d139  RET

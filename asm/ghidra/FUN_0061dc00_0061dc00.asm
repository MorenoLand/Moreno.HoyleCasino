; FUN_0061dc00  0061dc00
0061dc00  PUSH EBP
0061dc01  MOV EBP,ESP
0061dc03  PUSH -0x1
0061dc05  PUSH 0x6ab2a8
0061dc0a  MOV EAX,FS:[0x0]
0061dc10  PUSH EAX
0061dc11  PUSH ECX
0061dc12  MOV EAX,[0x00781870]
0061dc17  XOR EAX,EBP
0061dc19  PUSH EAX
0061dc1a  LEA EAX,[EBP + -0xc]
0061dc1d  MOV FS:[0x0],EAX
0061dc23  MOV dword ptr [EBP + -0x10],ECX
0061dc26  MOV ECX,dword ptr [EBP + -0x10]
0061dc29  CALL 0x0062aea0
0061dc2e  MOV dword ptr [EBP + -0x4],0x0
0061dc35  MOV EAX,dword ptr [EBP + -0x10]
0061dc38  MOV dword ptr [EAX],0x6d8ba4
0061dc3e  MOV ECX,dword ptr [EBP + -0x10]
0061dc41  MOV EDX,dword ptr [EBP + 0x8]
0061dc44  MOV dword ptr [ECX + 0x30],EDX
0061dc47  MOV EAX,dword ptr [EBP + -0x10]
0061dc4a  MOV ECX,dword ptr [EBP + 0xc]
0061dc4d  MOV dword ptr [EAX + 0x34],ECX
0061dc50  MOV EDX,dword ptr [EBP + -0x10]
0061dc53  MOV byte ptr [EDX + 0x38],0x0
0061dc57  MOVZX EAX,byte ptr [EBP + 0x14]
0061dc5b  PUSH EAX
0061dc5c  MOV ECX,dword ptr [EBP + 0x10]
0061dc5f  PUSH ECX
0061dc60  MOV ECX,dword ptr [EBP + -0x10]
0061dc63  CALL 0x0061dff0
0061dc68  MOV dword ptr [EBP + -0x4],0xffffffff
0061dc6f  MOV EAX,dword ptr [EBP + -0x10]
0061dc72  MOV ECX,dword ptr [EBP + -0xc]
0061dc75  MOV dword ptr FS:[0x0],ECX
0061dc7c  POP ECX
0061dc7d  MOV ESP,EBP
0061dc7f  POP EBP
0061dc80  RET 0x10

; FUN_0045f6a0  0045f6a0
0045f6a0  PUSH EBP
0045f6a1  MOV EBP,ESP
0045f6a3  PUSH -0x1
0045f6a5  PUSH 0x69f358
0045f6aa  MOV EAX,FS:[0x0]
0045f6b0  PUSH EAX
0045f6b1  PUSH ECX
0045f6b2  MOV EAX,[0x00781870]
0045f6b7  XOR EAX,EBP
0045f6b9  PUSH EAX
0045f6ba  LEA EAX,[EBP + -0xc]
0045f6bd  MOV FS:[0x0],EAX
0045f6c3  MOV dword ptr [EBP + -0x10],ECX
0045f6c6  MOV ECX,dword ptr [EBP + -0x10]
0045f6c9  CALL 0x005e9e20
0045f6ce  MOV dword ptr [EBP + -0x4],0x0
0045f6d5  MOV EAX,dword ptr [EBP + -0x10]
0045f6d8  MOV dword ptr [EAX],0x6ba2fc
0045f6de  MOV ECX,dword ptr [EBP + -0x10]
0045f6e1  MOV dword ptr [ECX + 0x58],0x0
0045f6e8  MOV EDX,dword ptr [EBP + -0x10]
0045f6eb  MOV dword ptr [EDX + 0x4],0x0
0045f6f2  MOV EAX,dword ptr [EBP + -0x10]
0045f6f5  MOV dword ptr [EAX + 0x108],0xffffffff
0045f6ff  MOV ECX,dword ptr [EBP + -0x10]
0045f702  MOV dword ptr [ECX + 0x10c],0xffffffff
0045f70c  MOV EDX,dword ptr [EBP + -0x10]
0045f70f  MOV dword ptr [EDX + 0x12c],0x0
0045f719  PUSH 0x5
0045f71b  CALL 0x0062fbf0
0045f720  ADD ESP,0x4
0045f723  MOV ECX,dword ptr [EBP + -0x10]
0045f726  MOV dword ptr [ECX + 0x110],EAX
0045f72c  MOV EDX,dword ptr [EBP + -0x10]
0045f72f  MOV dword ptr [EDX + 0x118],0xffffffff
0045f739  MOV EAX,dword ptr [EBP + -0x10]
0045f73c  MOV dword ptr [EAX + 0x11c],0xffffffff
0045f746  MOV ECX,dword ptr [EBP + -0x10]
0045f749  MOV dword ptr [ECX + 0x120],0xffffffff
0045f753  MOV dword ptr [EBP + -0x4],0xffffffff
0045f75a  MOV EAX,dword ptr [EBP + -0x10]
0045f75d  MOV ECX,dword ptr [EBP + -0xc]
0045f760  MOV dword ptr FS:[0x0],ECX
0045f767  POP ECX
0045f768  MOV ESP,EBP
0045f76a  POP EBP
0045f76b  RET

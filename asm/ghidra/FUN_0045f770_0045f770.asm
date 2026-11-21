; FUN_0045f770  0045f770
0045f770  PUSH EBP
0045f771  MOV EBP,ESP
0045f773  PUSH -0x1
0045f775  PUSH 0x69f37b
0045f77a  MOV EAX,FS:[0x0]
0045f780  PUSH EAX
0045f781  SUB ESP,0x1c
0045f784  MOV EAX,[0x00781870]
0045f789  XOR EAX,EBP
0045f78b  PUSH EAX
0045f78c  LEA EAX,[EBP + -0xc]
0045f78f  MOV FS:[0x0],EAX
0045f795  MOV dword ptr [EBP + -0x20],ECX
0045f798  MOV EAX,dword ptr [EBP + -0x20]
0045f79b  MOV dword ptr [EAX],0x6ba2fc
0045f7a1  MOV dword ptr [EBP + -0x4],0x0
0045f7a8  MOV ECX,dword ptr [EBP + -0x20]
0045f7ab  MOV EDX,dword ptr [ECX + 0x58]
0045f7ae  MOV dword ptr [EBP + -0x14],EDX
0045f7b1  MOV EAX,dword ptr [EBP + -0x14]
0045f7b4  MOV dword ptr [EBP + -0x10],EAX
0045f7b7  CMP dword ptr [EBP + -0x10],0x0
0045f7bb  JZ 0x0045f7d0
0045f7bd  PUSH 0x1
0045f7bf  MOV ECX,dword ptr [EBP + -0x10]
0045f7c2  MOV EDX,dword ptr [ECX]
0045f7c4  MOV ECX,dword ptr [EBP + -0x10]
0045f7c7  MOV EAX,dword ptr [EDX]
0045f7c9  CALL EAX
0045f7cb  MOV dword ptr [EBP + -0x24],EAX
0045f7ce  JMP 0x0045f7d7
0045f7d0  MOV dword ptr [EBP + -0x24],0x0
0045f7d7  MOV ECX,dword ptr [EBP + -0x20]
0045f7da  MOV EDX,dword ptr [ECX + 0x4]
0045f7dd  MOV dword ptr [EBP + -0x1c],EDX
0045f7e0  MOV EAX,dword ptr [EBP + -0x1c]
0045f7e3  MOV dword ptr [EBP + -0x18],EAX
0045f7e6  CMP dword ptr [EBP + -0x18],0x0
0045f7ea  JZ 0x0045f7ff
0045f7ec  PUSH 0x1
0045f7ee  MOV ECX,dword ptr [EBP + -0x18]
0045f7f1  MOV EDX,dword ptr [ECX]
0045f7f3  MOV ECX,dword ptr [EBP + -0x18]
0045f7f6  MOV EAX,dword ptr [EDX]
0045f7f8  CALL EAX
0045f7fa  MOV dword ptr [EBP + -0x28],EAX
0045f7fd  JMP 0x0045f806
0045f7ff  MOV dword ptr [EBP + -0x28],0x0
0045f806  MOV dword ptr [EBP + -0x4],0xffffffff
0045f80d  MOV ECX,dword ptr [EBP + -0x20]
0045f810  CALL 0x005e9e40
0045f815  MOV ECX,dword ptr [EBP + -0xc]
0045f818  MOV dword ptr FS:[0x0],ECX
0045f81f  POP ECX
0045f820  MOV ESP,EBP
0045f822  POP EBP
0045f823  RET

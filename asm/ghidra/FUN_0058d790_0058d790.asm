; FUN_0058d790  0058d790
0058d790  PUSH EBP
0058d791  MOV EBP,ESP
0058d793  PUSH -0x1
0058d795  PUSH 0x6a6f7c
0058d79a  MOV EAX,FS:[0x0]
0058d7a0  PUSH EAX
0058d7a1  SUB ESP,0x10
0058d7a4  MOV EAX,[0x00781870]
0058d7a9  XOR EAX,EBP
0058d7ab  PUSH EAX
0058d7ac  LEA EAX,[EBP + -0xc]
0058d7af  MOV FS:[0x0],EAX
0058d7b5  MOV dword ptr [EBP + -0x18],ECX
0058d7b8  MOV EAX,dword ptr [EBP + -0x18]
0058d7bb  MOV dword ptr [EAX],0x6cd934
0058d7c1  MOV dword ptr [EBP + -0x4],0x0
0058d7c8  MOV ECX,dword ptr [EBP + -0x18]
0058d7cb  CMP dword ptr [ECX + 0x88],0x0
0058d7d2  JZ 0x0058d813
0058d7d4  MOV EDX,dword ptr [EBP + -0x18]
0058d7d7  MOV EAX,dword ptr [EDX + 0x88]
0058d7dd  MOV dword ptr [EBP + -0x14],EAX
0058d7e0  MOV ECX,dword ptr [EBP + -0x14]
0058d7e3  MOV dword ptr [EBP + -0x10],ECX
0058d7e6  CMP dword ptr [EBP + -0x10],0x0
0058d7ea  JZ 0x0058d7ff
0058d7ec  PUSH 0x1
0058d7ee  MOV EDX,dword ptr [EBP + -0x10]
0058d7f1  MOV EAX,dword ptr [EDX]
0058d7f3  MOV ECX,dword ptr [EBP + -0x10]
0058d7f6  MOV EDX,dword ptr [EAX]
0058d7f8  CALL EDX
0058d7fa  MOV dword ptr [EBP + -0x1c],EAX
0058d7fd  JMP 0x0058d806
0058d7ff  MOV dword ptr [EBP + -0x1c],0x0
0058d806  MOV EAX,dword ptr [EBP + -0x18]
0058d809  MOV dword ptr [EAX + 0x88],0x0
0058d813  MOV dword ptr [EBP + -0x4],0xffffffff
0058d81a  MOV ECX,dword ptr [EBP + -0x18]
0058d81d  CALL 0x00584760
0058d822  MOV ECX,dword ptr [EBP + -0xc]
0058d825  MOV dword ptr FS:[0x0],ECX
0058d82c  POP ECX
0058d82d  MOV ESP,EBP
0058d82f  POP EBP
0058d830  RET

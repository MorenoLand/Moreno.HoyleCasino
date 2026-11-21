; FUN_0056a9c0  0056a9c0
0056a9c0  PUSH EBP
0056a9c1  MOV EBP,ESP
0056a9c3  SUB ESP,0xc
0056a9c6  MOV dword ptr [EBP + -0xc],ECX
0056a9c9  MOV dword ptr [EBP + -0x4],0x0
0056a9d0  JMP 0x0056a9db
0056a9d2  MOV EAX,dword ptr [EBP + -0x4]
0056a9d5  ADD EAX,0x1
0056a9d8  MOV dword ptr [EBP + -0x4],EAX
0056a9db  CMP dword ptr [EBP + -0x4],0x31
0056a9df  JGE 0x0056aa3d
0056a9e1  PUSH 0x0
0056a9e3  MOV ECX,dword ptr [EBP + -0x4]
0056a9e6  PUSH ECX
0056a9e7  MOV ECX,dword ptr [EBP + -0xc]
0056a9ea  CALL 0x0056b950
0056a9ef  MOVZX EDX,AL
0056a9f2  TEST EDX,EDX
0056a9f4  JNZ 0x0056a9f8
0056a9f6  JMP 0x0056a9d2
0056a9f8  MOV dword ptr [EBP + -0x8],0x0
0056a9ff  JMP 0x0056aa0a
0056aa01  MOV EAX,dword ptr [EBP + -0x8]
0056aa04  ADD EAX,0x1
0056aa07  MOV dword ptr [EBP + -0x8],EAX
0056aa0a  CMP dword ptr [EBP + -0x8],0x5
0056aa0e  JGE 0x0056aa3b
0056aa10  MOV ECX,dword ptr [EBP + -0x4]
0056aa13  IMUL ECX,ECX,0xa
0056aa16  MOV EDX,dword ptr [EBP + -0xc]
0056aa19  LEA EAX,[EDX + ECX*0x1 + 0xf6]
0056aa20  MOV ECX,dword ptr [EBP + -0x8]
0056aa23  MOV word ptr [EAX + ECX*0x2],0x0
0056aa29  MOV EDX,dword ptr [EBP + -0x4]
0056aa2c  IMUL EDX,EDX,0x5
0056aa2f  ADD EDX,dword ptr [EBP + -0xc]
0056aa32  MOV EAX,dword ptr [EBP + -0x8]
0056aa35  MOV byte ptr [EDX + EAX*0x1],0x0
0056aa39  JMP 0x0056aa01
0056aa3b  JMP 0x0056a9d2
0056aa3d  MOV ESP,EBP
0056aa3f  POP EBP
0056aa40  RET

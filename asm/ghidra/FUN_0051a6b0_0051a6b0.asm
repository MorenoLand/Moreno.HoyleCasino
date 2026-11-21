; FUN_0051a6b0  0051a6b0
0051a6b0  PUSH EBP
0051a6b1  MOV EBP,ESP
0051a6b3  SUB ESP,0x8
0051a6b6  MOV dword ptr [EBP + -0x8],ECX
0051a6b9  PUSH 0x0
0051a6bb  PUSH 0x1
0051a6bd  MOV ECX,dword ptr [EBP + -0x8]
0051a6c0  CALL 0x005f71f0
0051a6c5  MOV EAX,dword ptr [EBP + -0x8]
0051a6c8  MOV dword ptr [EAX],0x6c1ce4
0051a6ce  MOV ECX,dword ptr [EBP + -0x8]
0051a6d1  MOV dword ptr [ECX + 0x1bc],0x0
0051a6db  MOV dword ptr [EBP + -0x4],0x0
0051a6e2  JMP 0x0051a6ed
0051a6e4  MOV EDX,dword ptr [EBP + -0x4]
0051a6e7  ADD EDX,0x1
0051a6ea  MOV dword ptr [EBP + -0x4],EDX
0051a6ed  CMP dword ptr [EBP + -0x4],0x7
0051a6f1  JGE 0x0051a706
0051a6f3  MOV EAX,dword ptr [EBP + -0x4]
0051a6f6  MOV ECX,dword ptr [EBP + -0x8]
0051a6f9  MOV dword ptr [ECX + EAX*0x4 + 0x1c0],0x0
0051a704  JMP 0x0051a6e4
0051a706  MOV EDX,dword ptr [EBP + -0x8]
0051a709  MOV dword ptr [EDX + 0x1e0],0x0
0051a713  MOV EAX,dword ptr [EBP + -0x8]
0051a716  MOV ESP,EBP
0051a718  POP EBP
0051a719  RET

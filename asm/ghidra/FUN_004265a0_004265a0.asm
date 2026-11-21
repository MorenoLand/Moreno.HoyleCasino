; FUN_004265a0  004265a0
004265a0  PUSH EBP
004265a1  MOV EBP,ESP
004265a3  SUB ESP,0x20
004265a6  MOV dword ptr [EBP + -0x20],ECX
004265a9  MOV EAX,dword ptr [EBP + 0x8]
004265ac  SHL EAX,0x1
004265ae  MOV dword ptr [EBP + -0x4],EAX
004265b1  MOV ECX,dword ptr [EBP + -0x4]
004265b4  MOV EDX,dword ptr [EBP + -0x20]
004265b7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
004265bb  MOV dword ptr [EBP + -0x18],EAX
004265be  MOV ECX,dword ptr [EBP + 0x8]
004265c1  SHL ECX,0x5
004265c4  MOV EDX,dword ptr [EBP + -0x18]
004265c7  LEA EAX,[EDX + ECX*0x1 + 0x48]
004265cb  XOR ECX,ECX
004265cd  SHL ECX,0x3
004265d0  MOV EDX,dword ptr [EAX + ECX*0x1]
004265d3  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
004265d7  MOV dword ptr [EBP + -0xc],EDX
004265da  MOV dword ptr [EBP + -0x8],EAX
004265dd  MOV ECX,dword ptr [EBP + 0xc]
004265e0  MOV EDX,dword ptr [EBP + -0xc]
004265e3  MOV dword ptr [ECX],EDX
004265e5  MOV EAX,dword ptr [EBP + -0x4]
004265e8  MOV ECX,dword ptr [EBP + -0x20]
004265eb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
004265ef  MOV dword ptr [EBP + -0x1c],EDX
004265f2  MOV EAX,dword ptr [EBP + 0x8]
004265f5  SHL EAX,0x5
004265f8  MOV ECX,dword ptr [EBP + -0x1c]
004265fb  LEA EDX,[ECX + EAX*0x1 + 0x48]
004265ff  XOR EAX,EAX
00426601  SHL EAX,0x3
00426604  MOV ECX,dword ptr [EDX + EAX*0x1]
00426607  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
0042660b  MOV dword ptr [EBP + -0x14],ECX
0042660e  MOV dword ptr [EBP + -0x10],EDX
00426611  MOV EAX,dword ptr [EBP + 0xc]
00426614  MOV ECX,dword ptr [EBP + -0x10]
00426617  MOV dword ptr [EAX + 0x4],ECX
0042661a  MOV ESP,EBP
0042661c  POP EBP
0042661d  RET 0x8

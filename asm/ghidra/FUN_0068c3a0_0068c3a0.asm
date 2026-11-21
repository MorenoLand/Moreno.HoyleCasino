; FUN_0068c3a0  0068c3a0
0068c3a0  PUSH EBP
0068c3a1  MOV EBP,ESP
0068c3a3  SUB ESP,0xc
0068c3a6  MOV dword ptr [EBP + -0xc],ECX
0068c3a9  MOV EAX,dword ptr [EBP + -0xc]
0068c3ac  MOV ECX,dword ptr [EAX + 0x4]
0068c3af  MOV EDX,dword ptr [ECX + 0x4]
0068c3b2  MOV dword ptr [EBP + -0x8],EDX
0068c3b5  MOV EAX,dword ptr [EBP + -0xc]
0068c3b8  MOV ECX,dword ptr [EAX + 0x4]
0068c3bb  MOV dword ptr [EBP + -0x4],ECX
0068c3be  MOV EDX,dword ptr [EBP + -0x8]
0068c3c1  MOVSX EAX,byte ptr [EDX + 0x35]
0068c3c5  TEST EAX,EAX
0068c3c7  JNZ 0x0068c3ff
0068c3c9  MOV ECX,dword ptr [EBP + 0x8]
0068c3cc  PUSH ECX
0068c3cd  MOV EDX,dword ptr [EBP + -0x8]
0068c3d0  ADD EDX,0xc
0068c3d3  PUSH EDX
0068c3d4  CALL dword ptr [0x006b20f0]
0068c3da  ADD ESP,0x8
0068c3dd  MOVZX EAX,AL
0068c3e0  TEST EAX,EAX
0068c3e2  JZ 0x0068c3ef
0068c3e4  MOV ECX,dword ptr [EBP + -0x8]
0068c3e7  MOV EDX,dword ptr [ECX + 0x8]
0068c3ea  MOV dword ptr [EBP + -0x8],EDX
0068c3ed  JMP 0x0068c3fd
0068c3ef  MOV EAX,dword ptr [EBP + -0x8]
0068c3f2  MOV dword ptr [EBP + -0x4],EAX
0068c3f5  MOV ECX,dword ptr [EBP + -0x8]
0068c3f8  MOV EDX,dword ptr [ECX]
0068c3fa  MOV dword ptr [EBP + -0x8],EDX
0068c3fd  JMP 0x0068c3be
0068c3ff  MOV EAX,dword ptr [EBP + -0x4]
0068c402  MOV ESP,EBP
0068c404  POP EBP
0068c405  RET 0x4

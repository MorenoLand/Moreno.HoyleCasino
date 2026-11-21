; FUN_0062a520  0062a520
0062a520  PUSH EBP
0062a521  MOV EBP,ESP
0062a523  SUB ESP,0x3c
0062a526  MOV EAX,[0x00781870]
0062a52b  XOR EAX,EBP
0062a52d  MOV dword ptr [EBP + -0x4],EAX
0062a530  MOV dword ptr [EBP + -0x3c],ECX
0062a533  MOV EAX,dword ptr [EBP + -0x3c]
0062a536  MOV ECX,dword ptr [EBP + 0x8]
0062a539  MOV dword ptr [EAX + 0x58],ECX
0062a53c  MOV ECX,dword ptr [EBP + -0x3c]
0062a53f  CALL 0x0062a630
0062a544  MOV EDX,dword ptr [EBP + -0x3c]
0062a547  CMP EAX,dword ptr [EDX + 0x5c]
0062a54a  JNZ 0x0062a566
0062a54c  MOV EAX,dword ptr [EBP + -0x3c]
0062a54f  MOV ECX,dword ptr [EAX + 0x50]
0062a552  MOV EDX,dword ptr [EBP + -0x3c]
0062a555  MOV EAX,dword ptr [EDX + 0x50]
0062a558  MOV EDX,dword ptr [ECX]
0062a55a  MOV ECX,EAX
0062a55c  MOV EAX,dword ptr [EDX + 0xd0]
0062a562  CALL EAX
0062a564  JMP 0x0062a57c
0062a566  MOV ECX,dword ptr [EBP + -0x3c]
0062a569  MOV EDX,dword ptr [ECX + 0x50]
0062a56c  MOV EAX,dword ptr [EBP + -0x3c]
0062a56f  MOV ECX,dword ptr [EAX + 0x50]
0062a572  MOV EDX,dword ptr [EDX]
0062a574  MOV EAX,dword ptr [EDX + 0xcc]
0062a57a  CALL EAX
0062a57c  MOV ECX,dword ptr [EBP + -0x3c]
0062a57f  CALL 0x0062a630
0062a584  MOV ECX,dword ptr [EBP + -0x3c]
0062a587  CMP EAX,dword ptr [ECX + 0x60]
0062a58a  JNZ 0x0062a5a4
0062a58c  MOV EDX,dword ptr [EBP + -0x3c]
0062a58f  MOV EAX,dword ptr [EDX + 0x4c]
0062a592  MOV ECX,dword ptr [EBP + -0x3c]
0062a595  MOV ECX,dword ptr [ECX + 0x4c]
0062a598  MOV EDX,dword ptr [EAX]
0062a59a  MOV EAX,dword ptr [EDX + 0xd0]
0062a5a0  CALL EAX
0062a5a2  JMP 0x0062a5ba
0062a5a4  MOV ECX,dword ptr [EBP + -0x3c]
0062a5a7  MOV EDX,dword ptr [ECX + 0x4c]
0062a5aa  MOV EAX,dword ptr [EBP + -0x3c]
0062a5ad  MOV ECX,dword ptr [EAX + 0x4c]
0062a5b0  MOV EDX,dword ptr [EDX]
0062a5b2  MOV EAX,dword ptr [EDX + 0xcc]
0062a5b8  CALL EAX
0062a5ba  MOV ECX,dword ptr [EBP + -0x3c]
0062a5bd  CMP dword ptr [ECX + 0x54],0x0
0062a5c1  JNZ 0x0062a5c5
0062a5c3  JMP 0x0062a616
0062a5c5  MOV ECX,dword ptr [EBP + -0x3c]
0062a5c8  CALL 0x0062a630
0062a5cd  PUSH EAX
0062a5ce  PUSH 0x6b2828
0062a5d3  LEA EDX,[EBP + -0x38]
0062a5d6  PUSH EDX
0062a5d7  CALL dword ptr [0x006b2220]
0062a5dd  ADD ESP,0xc
0062a5e0  LEA EAX,[EBP + -0x38]
0062a5e3  PUSH EAX
0062a5e4  MOV ECX,dword ptr [EBP + -0x3c]
0062a5e7  MOV EDX,dword ptr [ECX + 0x54]
0062a5ea  MOV EAX,dword ptr [EBP + -0x3c]
0062a5ed  MOV ECX,dword ptr [EAX + 0x54]
0062a5f0  MOV EDX,dword ptr [EDX]
0062a5f2  MOV EAX,dword ptr [EDX + 0xb4]
0062a5f8  CALL EAX
0062a5fa  MOV ECX,dword ptr [EBP + -0x3c]
0062a5fd  CALL 0x005f5400
0062a602  PUSH EAX
0062a603  MOV ECX,dword ptr [EBP + -0x3c]
0062a606  MOV EDX,dword ptr [ECX + 0x4]
0062a609  MOV EAX,dword ptr [EBP + -0x3c]
0062a60c  MOV ECX,dword ptr [EAX + 0x4]
0062a60f  MOV EDX,dword ptr [EDX]
0062a611  MOV EAX,dword ptr [EDX + 0x28]
0062a614  CALL EAX
0062a616  MOV ECX,dword ptr [EBP + -0x4]
0062a619  XOR ECX,EBP
0062a61b  CALL 0x00686d72
0062a620  MOV ESP,EBP
0062a622  POP EBP
0062a623  RET 0x4

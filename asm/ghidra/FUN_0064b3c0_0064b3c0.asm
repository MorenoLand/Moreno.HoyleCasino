; FUN_0064b3c0  0064b3c0
0064b3c0  PUSH EBP
0064b3c1  MOV EBP,ESP
0064b3c3  SUB ESP,0x34
0064b3c6  PUSH ESI
0064b3c7  PUSH EDI
0064b3c8  MOV dword ptr [EBP + -0x34],ECX
0064b3cb  MOV dword ptr [EBP + -0x24],0x33
0064b3d2  MOV dword ptr [EBP + -0x20],0x0
0064b3d9  MOV dword ptr [EBP + -0x1c],0x0
0064b3e0  MOV dword ptr [EBP + -0x18],0x2a
0064b3e7  MOV dword ptr [EBP + -0x14],0x3c
0064b3ee  MOV dword ptr [EBP + -0x10],0x0
0064b3f5  MOV dword ptr [EBP + -0xc],0x21
0064b3fc  MOV dword ptr [EBP + -0x8],0x33
0064b403  MOV dword ptr [EBP + -0x4],0x45
0064b40a  MOV dword ptr [EBP + -0x2c],0x0
0064b411  MOV EAX,dword ptr [EBP + -0x2c]
0064b414  MOV dword ptr [EBP + -0x28],EAX
0064b417  JMP 0x0064b422
0064b419  MOV ECX,dword ptr [EBP + -0x2c]
0064b41c  ADD ECX,0x1
0064b41f  MOV dword ptr [EBP + -0x2c],ECX
0064b422  CMP dword ptr [EBP + -0x2c],0x3
0064b426  JGE 0x0064b443
0064b428  MOV EDX,dword ptr [EBP + -0x2c]
0064b42b  MOV EAX,dword ptr [EBP + -0x34]
0064b42e  CMP dword ptr [EAX + EDX*0x4 + 0x198],0x0
0064b436  JZ 0x0064b441
0064b438  MOV ECX,dword ptr [EBP + -0x28]
0064b43b  ADD ECX,0x1
0064b43e  MOV dword ptr [EBP + -0x28],ECX
0064b441  JMP 0x0064b419
0064b443  CMP dword ptr [EBP + -0x28],0x0
0064b447  JNZ 0x0064b44e
0064b449  JMP 0x0064b530
0064b44e  MOV EDX,dword ptr [EBP + -0x28]
0064b451  MOV dword ptr [EBP + -0x30],EDX
0064b454  MOV dword ptr [EBP + -0x2c],0x0
0064b45b  JMP 0x0064b466
0064b45d  MOV EAX,dword ptr [EBP + -0x2c]
0064b460  ADD EAX,0x1
0064b463  MOV dword ptr [EBP + -0x2c],EAX
0064b466  CMP dword ptr [EBP + -0x2c],0x3
0064b46a  JGE 0x0064b513
0064b470  CMP dword ptr [EBP + -0x28],0x0
0064b474  JZ 0x0064b513
0064b47a  MOV ECX,dword ptr [EBP + -0x2c]
0064b47d  MOV EDX,dword ptr [EBP + -0x34]
0064b480  CMP dword ptr [EDX + ECX*0x4 + 0x198],0x0
0064b488  JZ 0x0064b50e
0064b48e  MOV EAX,dword ptr [EBP + -0x34]
0064b491  MOV EDX,dword ptr [EAX]
0064b493  MOV ECX,dword ptr [EBP + -0x34]
0064b496  MOV EAX,dword ptr [EDX + 0x54]
0064b499  CALL EAX
0064b49b  ADD EAX,0x23
0064b49e  PUSH EAX
0064b49f  MOV ECX,dword ptr [EBP + -0x30]
0064b4a2  SUB ECX,0x1
0064b4a5  IMUL ECX,ECX,0xc
0064b4a8  LEA ESI,[EBP + ECX*0x1 + -0x24]
0064b4ac  MOV EDI,dword ptr [EBP + -0x30]
0064b4af  SUB EDI,dword ptr [EBP + -0x28]
0064b4b2  MOV EDX,dword ptr [EBP + -0x34]
0064b4b5  MOV EAX,dword ptr [EDX]
0064b4b7  MOV ECX,dword ptr [EBP + -0x34]
0064b4ba  MOV EDX,dword ptr [EAX + 0x4c]
0064b4bd  CALL EDX
0064b4bf  ADD EAX,dword ptr [ESI + EDI*0x4]
0064b4c2  PUSH EAX
0064b4c3  MOV EAX,dword ptr [EBP + -0x2c]
0064b4c6  MOV ECX,dword ptr [EBP + -0x34]
0064b4c9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x198]
0064b4d0  MOV EAX,dword ptr [EBP + -0x2c]
0064b4d3  MOV ECX,dword ptr [EBP + -0x34]
0064b4d6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x198]
0064b4dd  MOV EDX,dword ptr [EDX]
0064b4df  MOV EAX,dword ptr [EDX + 0x44]
0064b4e2  CALL EAX
0064b4e4  MOV ECX,dword ptr [EBP + -0x2c]
0064b4e7  MOV EDX,dword ptr [EBP + -0x34]
0064b4ea  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x198]
0064b4f1  MOV ECX,dword ptr [EBP + -0x2c]
0064b4f4  MOV EDX,dword ptr [EBP + -0x34]
0064b4f7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x198]
0064b4fe  MOV EAX,dword ptr [EAX]
0064b500  MOV EDX,dword ptr [EAX + 0x74]
0064b503  CALL EDX
0064b505  MOV EAX,dword ptr [EBP + -0x28]
0064b508  SUB EAX,0x1
0064b50b  MOV dword ptr [EBP + -0x28],EAX
0064b50e  JMP 0x0064b45d
0064b513  CMP dword ptr [EBP + -0x28],0x0
0064b517  JZ 0x0064b530
0064b519  PUSH 0x7f9
0064b51e  PUSH 0x6dc610
0064b523  PUSH 0x6dcaa4
0064b528  CALL 0x005e9f20
0064b52d  ADD ESP,0xc
0064b530  POP EDI
0064b531  POP ESI
0064b532  MOV ESP,EBP
0064b534  POP EBP
0064b535  RET

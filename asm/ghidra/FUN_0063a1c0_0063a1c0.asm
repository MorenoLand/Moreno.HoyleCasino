; FUN_0063a1c0  0063a1c0
0063a1c0  PUSH EBP
0063a1c1  MOV EBP,ESP
0063a1c3  SUB ESP,0x10
0063a1c6  PUSH ESI
0063a1c7  PUSH EDI
0063a1c8  MOV dword ptr [EBP + -0xc],ECX
0063a1cb  MOV EAX,dword ptr [EBP + -0xc]
0063a1ce  MOV ECX,dword ptr [EBP + 0x8]
0063a1d1  MOV EDX,dword ptr [ECX + 0x4]
0063a1d4  MOV dword ptr [EAX + 0x4],EDX
0063a1d7  MOV EAX,dword ptr [EBP + -0xc]
0063a1da  MOV ECX,dword ptr [EBP + 0x8]
0063a1dd  MOV EDX,dword ptr [ECX + 0x8]
0063a1e0  MOV dword ptr [EAX + 0x8],EDX
0063a1e3  MOV EAX,dword ptr [EBP + 0x8]
0063a1e6  ADD EAX,0x10
0063a1e9  PUSH EAX
0063a1ea  MOV ECX,dword ptr [EBP + -0xc]
0063a1ed  ADD ECX,0x10
0063a1f0  PUSH ECX
0063a1f1  CALL 0x00686d8e
0063a1f6  ADD ESP,0x8
0063a1f9  MOV EDX,dword ptr [EBP + -0xc]
0063a1fc  CMP dword ptr [EDX + 0x20],0x0
0063a200  JZ 0x0063a23b
0063a202  MOV EAX,dword ptr [EBP + -0xc]
0063a205  MOV ECX,dword ptr [EAX + 0x20]
0063a208  MOV dword ptr [EBP + -0x8],ECX
0063a20b  MOV EDX,dword ptr [EBP + -0x8]
0063a20e  MOV dword ptr [EBP + -0x4],EDX
0063a211  CMP dword ptr [EBP + -0x4],0x0
0063a215  JZ 0x0063a22a
0063a217  PUSH 0x1
0063a219  MOV EAX,dword ptr [EBP + -0x4]
0063a21c  MOV EDX,dword ptr [EAX]
0063a21e  MOV ECX,dword ptr [EBP + -0x4]
0063a221  MOV EAX,dword ptr [EDX]
0063a223  CALL EAX
0063a225  MOV dword ptr [EBP + -0x10],EAX
0063a228  JMP 0x0063a231
0063a22a  MOV dword ptr [EBP + -0x10],0x0
0063a231  MOV ECX,dword ptr [EBP + -0xc]
0063a234  MOV dword ptr [ECX + 0x20],0x0
0063a23b  MOV EDX,dword ptr [EBP + -0xc]
0063a23e  MOVSX EAX,byte ptr [EDX + 0x10]
0063a242  TEST EAX,EAX
0063a244  JZ 0x0063a257
0063a246  MOV ECX,dword ptr [EBP + -0xc]
0063a249  ADD ECX,0x10
0063a24c  PUSH ECX
0063a24d  MOV ECX,dword ptr [EBP + -0xc]
0063a250  CALL 0x0063ab10
0063a255  JMP 0x0063a28c
0063a257  MOV ECX,dword ptr [EBP + -0xc]
0063a25a  CALL 0x0063a2a0
0063a25f  MOV ESI,dword ptr [EBP + 0x8]
0063a262  ADD ESI,0x28
0063a265  MOV EDI,dword ptr [EBP + -0xc]
0063a268  ADD EDI,0x28
0063a26b  MOV ECX,0xe1
0063a270  MOVSD.REP ES:EDI,ESI
0063a272  MOV EDX,dword ptr [EBP + -0xc]
0063a275  MOV dword ptr [EDX + 0x3a4],0x0
0063a27f  MOV EAX,dword ptr [EBP + -0xc]
0063a282  MOV dword ptr [EAX + 0x3a8],0x0
0063a28c  MOV EAX,dword ptr [EBP + -0xc]
0063a28f  POP EDI
0063a290  POP ESI
0063a291  MOV ESP,EBP
0063a293  POP EBP
0063a294  RET 0x4

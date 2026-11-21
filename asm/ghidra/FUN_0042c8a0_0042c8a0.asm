; FUN_0042c8a0  0042c8a0
0042c8a0  PUSH EBP
0042c8a1  MOV EBP,ESP
0042c8a3  SUB ESP,0x10
0042c8a6  MOV dword ptr [EBP + -0xc],ECX
0042c8a9  MOV EAX,dword ptr [EBP + 0xc]
0042c8ac  PUSH EAX
0042c8ad  MOV ECX,dword ptr [EBP + 0x8]
0042c8b0  PUSH ECX
0042c8b1  MOV ECX,dword ptr [EBP + -0xc]
0042c8b4  CALL 0x0042ca40
0042c8b9  MOV EDX,dword ptr [EBP + 0x8]
0042c8bc  MOV EAX,dword ptr [EBP + -0xc]
0042c8bf  CMP dword ptr [EAX + EDX*0x4 + 0xafc],0x0
0042c8c7  JZ 0x0042c8ea
0042c8c9  MOV ECX,dword ptr [EBP + 0x8]
0042c8cc  MOV EDX,dword ptr [EBP + -0xc]
0042c8cf  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xafc]
0042c8d6  MOV ECX,dword ptr [EBP + 0x8]
0042c8d9  MOV EDX,dword ptr [EBP + -0xc]
0042c8dc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xafc]
0042c8e3  MOV EAX,dword ptr [EAX]
0042c8e5  MOV EDX,dword ptr [EAX + 0x70]
0042c8e8  CALL EDX
0042c8ea  MOV EAX,dword ptr [EBP + 0x8]
0042c8ed  MOV ECX,dword ptr [EBP + -0xc]
0042c8f0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xafc]
0042c8f7  MOV dword ptr [EBP + -0x8],EDX
0042c8fa  MOV EAX,dword ptr [EBP + -0x8]
0042c8fd  MOV dword ptr [EBP + -0x4],EAX
0042c900  CMP dword ptr [EBP + -0x4],0x0
0042c904  JZ 0x0042c919
0042c906  PUSH 0x1
0042c908  MOV ECX,dword ptr [EBP + -0x4]
0042c90b  MOV EDX,dword ptr [ECX]
0042c90d  MOV ECX,dword ptr [EBP + -0x4]
0042c910  MOV EAX,dword ptr [EDX]
0042c912  CALL EAX
0042c914  MOV dword ptr [EBP + -0x10],EAX
0042c917  JMP 0x0042c920
0042c919  MOV dword ptr [EBP + -0x10],0x0
0042c920  MOV ECX,dword ptr [EBP + 0x8]
0042c923  MOV EDX,dword ptr [EBP + -0xc]
0042c926  MOV dword ptr [EDX + ECX*0x4 + 0xafc],0x0
0042c931  MOV ESP,EBP
0042c933  POP EBP
0042c934  RET 0x8

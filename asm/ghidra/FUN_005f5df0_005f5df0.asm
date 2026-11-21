; FUN_005f5df0  005f5df0
005f5df0  PUSH EBP
005f5df1  MOV EBP,ESP
005f5df3  SUB ESP,0x10
005f5df6  MOV dword ptr [EBP + -0xc],ECX
005f5df9  MOV EAX,dword ptr [EBP + -0xc]
005f5dfc  CMP dword ptr [EAX + 0x17c],0x0
005f5e03  JZ 0x005f5e37
005f5e05  MOV ECX,dword ptr [EBP + -0xc]
005f5e08  MOV EDX,dword ptr [ECX + 0x17c]
005f5e0e  MOV dword ptr [EBP + -0x8],EDX
005f5e11  MOV EAX,dword ptr [EBP + -0x8]
005f5e14  MOV dword ptr [EBP + -0x4],EAX
005f5e17  CMP dword ptr [EBP + -0x4],0x0
005f5e1b  JZ 0x005f5e30
005f5e1d  PUSH 0x1
005f5e1f  MOV ECX,dword ptr [EBP + -0x4]
005f5e22  MOV EDX,dword ptr [ECX]
005f5e24  MOV ECX,dword ptr [EBP + -0x4]
005f5e27  MOV EAX,dword ptr [EDX]
005f5e29  CALL EAX
005f5e2b  MOV dword ptr [EBP + -0x10],EAX
005f5e2e  JMP 0x005f5e37
005f5e30  MOV dword ptr [EBP + -0x10],0x0
005f5e37  MOV ECX,dword ptr [EBP + -0xc]
005f5e3a  MOV EDX,dword ptr [EBP + 0x8]
005f5e3d  MOV dword ptr [ECX + 0x17c],EDX
005f5e43  MOV EAX,dword ptr [EBP + -0xc]
005f5e46  CMP dword ptr [EAX + 0x17c],0x0
005f5e4d  JZ 0x005f5e61
005f5e4f  MOV ECX,dword ptr [EBP + -0xc]
005f5e52  PUSH ECX
005f5e53  MOV EDX,dword ptr [EBP + -0xc]
005f5e56  MOV ECX,dword ptr [EDX + 0x17c]
005f5e5c  CALL 0x005fc220
005f5e61  MOV ESP,EBP
005f5e63  POP EBP
005f5e64  RET 0x4

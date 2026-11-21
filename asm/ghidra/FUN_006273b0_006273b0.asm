; FUN_006273b0  006273b0
006273b0  PUSH EBP
006273b1  MOV EBP,ESP
006273b3  PUSH ECX
006273b4  MOV dword ptr [EBP + -0x4],ECX
006273b7  CMP dword ptr [EBP + 0xc],0x0
006273bb  JZ 0x006273c8
006273bd  MOV EAX,dword ptr [EBP + 0xc]
006273c0  MOV ECX,dword ptr [EBP + -0x4]
006273c3  MOV EDX,dword ptr [ECX + 0x58]
006273c6  MOV dword ptr [EAX],EDX
006273c8  CMP dword ptr [EBP + 0x10],0x0
006273cc  JZ 0x006273d9
006273ce  MOV EAX,dword ptr [EBP + 0x10]
006273d1  MOV ECX,dword ptr [EBP + -0x4]
006273d4  MOV EDX,dword ptr [ECX + 0x5c]
006273d7  MOV dword ptr [EAX],EDX
006273d9  MOV EAX,dword ptr [EBP + -0x4]
006273dc  MOV ECX,dword ptr [EAX + 0x58]
006273df  MOV EDX,dword ptr [EAX + 0x5c]
006273e2  MOV EAX,dword ptr [EBP + 0x8]
006273e5  MOV dword ptr [EAX],ECX
006273e7  MOV dword ptr [EAX + 0x4],EDX
006273ea  MOV EAX,dword ptr [EBP + 0x8]
006273ed  MOV ESP,EBP
006273ef  POP EBP
006273f0  RET 0xc

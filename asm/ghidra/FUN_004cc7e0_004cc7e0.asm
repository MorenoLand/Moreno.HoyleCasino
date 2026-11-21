; FUN_004cc7e0  004cc7e0
004cc7e0  PUSH EBP
004cc7e1  MOV EBP,ESP
004cc7e3  SUB ESP,0x10
004cc7e6  MOV dword ptr [EBP + -0xc],ECX
004cc7e9  FLD double ptr [0x006b2c38]
004cc7ef  FSTP double ptr [EBP + -0x8]
004cc7f2  MOVSX EAX,word ptr [EBP + 0x10]
004cc7f6  MOV dword ptr [EBP + -0x10],EAX
004cc7f9  MOV ECX,dword ptr [EBP + -0x10]
004cc7fc  SUB ECX,0x1
004cc7ff  MOV dword ptr [EBP + -0x10],ECX
004cc802  CMP dword ptr [EBP + -0x10],0x4
004cc806  JA 0x004cc843
004cc808  MOV EDX,dword ptr [EBP + -0x10]
004cc80b  JMP dword ptr [EDX*0x4 + 0x4cc870]
004cc812  FLD double ptr [0x006b2c38]
004cc818  FSTP double ptr [EBP + -0x8]
004cc81b  JMP 0x004cc843
004cc81d  FLD double ptr [0x006b2c40]
004cc823  FSTP double ptr [EBP + -0x8]
004cc826  JMP 0x004cc843
004cc828  FLD1
004cc82a  FSTP double ptr [EBP + -0x8]
004cc82d  JMP 0x004cc843
004cc82f  FLD double ptr [0x006b3e40]
004cc835  FSTP double ptr [EBP + -0x8]
004cc838  JMP 0x004cc843
004cc83a  FLD double ptr [0x006bf7d8]
004cc840  FSTP double ptr [EBP + -0x8]
004cc843  PUSH 0x0
004cc845  MOV EAX,dword ptr [EBP + 0x8]
004cc848  PUSH EAX
004cc849  SUB ESP,0x8
004cc84c  FLD double ptr [EBP + -0x8]
004cc84f  FSTP double ptr [ESP]
004cc852  SUB ESP,0x8
004cc855  FLDZ
004cc857  FSTP double ptr [ESP]
004cc85a  PUSH -0x1
004cc85c  MOV ECX,dword ptr [EBP + 0xc]
004cc85f  PUSH ECX
004cc860  MOV ECX,dword ptr [EBP + -0xc]
004cc863  CALL 0x004c6250
004cc868  MOV ESP,EBP
004cc86a  POP EBP
004cc86b  RET 0xc

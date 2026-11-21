; FUN_005d16b0  005d16b0
005d16b0  PUSH EBP
005d16b1  MOV EBP,ESP
005d16b3  SUB ESP,0x28
005d16b6  MOV dword ptr [EBP + -0x28],ECX
005d16b9  MOV dword ptr [EBP + -0x24],0xffffffff
005d16c0  MOV dword ptr [EBP + -0x20],0x30d464
005d16c7  MOV dword ptr [EBP + -0x1c],0x30d465
005d16ce  MOV dword ptr [EBP + -0x18],0x30d466
005d16d5  MOV dword ptr [EBP + -0x14],0x30d467
005d16dc  MOV dword ptr [EBP + -0x10],0x30d468
005d16e3  MOV dword ptr [EBP + -0xc],0x30d469
005d16ea  MOV dword ptr [EBP + -0x8],0x30d46a
005d16f1  MOV dword ptr [EBP + -0x4],0x30d46b
005d16f8  MOV EAX,dword ptr [EBP + -0x28]
005d16fb  MOV ECX,dword ptr [EAX + 0x80]
005d1701  CMP ECX,dword ptr [EBP + 0x8]
005d1704  JNZ 0x005d1708
005d1706  JMP 0x005d1744
005d1708  MOV EDX,dword ptr [EBP + 0x8]
005d170b  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x24]
005d170f  PUSH EAX
005d1710  MOV ECX,dword ptr [EBP + -0x28]
005d1713  CALL 0x005f1ad0
005d1718  MOV ECX,dword ptr [EBP + -0x28]
005d171b  MOV EDX,dword ptr [EBP + 0x8]
005d171e  MOV dword ptr [ECX + 0x80],EDX
005d1724  MOV ECX,dword ptr [EBP + -0x28]
005d1727  CALL 0x005d1db0
005d172c  MOV ECX,dword ptr [EBP + -0x28]
005d172f  CALL 0x005d2220
005d1734  MOV ECX,dword ptr [EBP + -0x28]
005d1737  CALL 0x005d3b10
005d173c  MOV ECX,dword ptr [EBP + -0x28]
005d173f  CALL 0x005d4200
005d1744  MOV ESP,EBP
005d1746  POP EBP
005d1747  RET 0x4

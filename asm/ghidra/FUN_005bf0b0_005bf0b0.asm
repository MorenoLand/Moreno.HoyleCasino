; FUN_005bf0b0  005bf0b0
005bf0b0  PUSH EBP
005bf0b1  MOV EBP,ESP
005bf0b3  PUSH ECX
005bf0b4  MOV dword ptr [EBP + -0x4],ECX
005bf0b7  MOV EAX,dword ptr [EBP + -0x4]
005bf0ba  MOV ECX,dword ptr [EAX + 0x4]
005bf0bd  CALL 0x005eb220
005bf0c2  MOV ECX,dword ptr [EBP + -0x4]
005bf0c5  CMP EAX,dword ptr [ECX + 0x1c]
005bf0c8  JNZ 0x005bf0d9
005bf0ca  MOV EDX,dword ptr [EBP + -0x4]
005bf0cd  MOV EAX,dword ptr [EDX]
005bf0cf  MOV ECX,dword ptr [EBP + -0x4]
005bf0d2  MOV EDX,dword ptr [EAX + 0x14]
005bf0d5  CALL EDX
005bf0d7  JMP 0x005bf0e1
005bf0d9  MOV ECX,dword ptr [EBP + -0x4]
005bf0dc  CALL 0x00600e30
005bf0e1  MOV EAX,dword ptr [EBP + -0x4]
005bf0e4  CMP dword ptr [EAX + 0x20],0x0
005bf0e8  JL 0x005bf105
005bf0ea  MOV ECX,dword ptr [0x015e55e8]
005bf0f0  CALL 0x005f3e50
005bf0f5  MOV ECX,dword ptr [EBP + -0x4]
005bf0f8  CMP EAX,dword ptr [ECX + 0x20]
005bf0fb  JL 0x005bf105
005bf0fd  MOV ECX,dword ptr [EBP + -0x4]
005bf100  CALL 0x006005d0
005bf105  MOV ESP,EBP
005bf107  POP EBP
005bf108  RET

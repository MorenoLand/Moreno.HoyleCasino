; OnNcPaint  005fd5e0
005fd5e0  PUSH EBP
005fd5e1  MOV EBP,ESP
005fd5e3  PUSH ECX
005fd5e4  MOV dword ptr [EBP + -0x4],ECX
005fd5e7  MOV EAX,dword ptr [EBP + -0x4]
005fd5ea  CMP dword ptr [EAX + 0x1f8],0x0
005fd5f1  JZ 0x005fd5fd
005fd5f3  MOV ECX,dword ptr [EBP + -0x4]
005fd5f6  CALL 0x005fd560
005fd5fb  JMP 0x005fd605
005fd5fd  MOV ECX,dword ptr [EBP + -0x4]
005fd600  CALL 0x005fd440
005fd605  MOV ESP,EBP
005fd607  POP EBP
005fd608  RET

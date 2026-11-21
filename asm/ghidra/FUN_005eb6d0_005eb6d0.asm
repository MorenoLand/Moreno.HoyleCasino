; FUN_005eb6d0  005eb6d0
005eb6d0  PUSH EBP
005eb6d1  MOV EBP,ESP
005eb6d3  PUSH ECX
005eb6d4  MOV dword ptr [EBP + -0x4],ECX
005eb6d7  MOV EAX,dword ptr [EBP + 0x8]
005eb6da  MOV ECX,dword ptr [EAX + 0xc]
005eb6dd  PUSH ECX
005eb6de  MOV EDX,dword ptr [EBP + 0x8]
005eb6e1  MOV EAX,dword ptr [EDX + 0x8]
005eb6e4  PUSH EAX
005eb6e5  MOV ECX,dword ptr [EBP + -0x4]
005eb6e8  MOV EDX,dword ptr [ECX]
005eb6ea  MOV ECX,dword ptr [EBP + -0x4]
005eb6ed  MOV EAX,dword ptr [EDX + 0x80]
005eb6f3  CALL EAX
005eb6f5  MOV ESP,EBP
005eb6f7  POP EBP
005eb6f8  RET 0x4

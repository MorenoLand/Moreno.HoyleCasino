; FUN_005ef3e0  005ef3e0
005ef3e0  PUSH EBP
005ef3e1  MOV EBP,ESP
005ef3e3  PUSH ECX
005ef3e4  MOV dword ptr [EBP + -0x4],ECX
005ef3e7  MOV ECX,dword ptr [EBP + -0x4]
005ef3ea  CALL 0x005f5010
005ef3ef  MOV EAX,dword ptr [EBP + -0x4]
005ef3f2  MOV EDX,dword ptr [EAX]
005ef3f4  MOV ECX,dword ptr [EBP + -0x4]
005ef3f7  MOV EAX,dword ptr [EDX + 0xac]
005ef3fd  CALL EAX
005ef3ff  MOV ESP,EBP
005ef401  POP EBP
005ef402  RET

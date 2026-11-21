; FUN_005cd5d0  005cd5d0
005cd5d0  PUSH EBP
005cd5d1  MOV EBP,ESP
005cd5d3  PUSH ECX
005cd5d4  MOV dword ptr [EBP + -0x4],ECX
005cd5d7  MOV EAX,dword ptr [EBP + 0xc]
005cd5da  PUSH EAX
005cd5db  MOV ECX,dword ptr [EBP + 0x8]
005cd5de  PUSH ECX
005cd5df  MOV ECX,dword ptr [EBP + -0x4]
005cd5e2  CALL 0x005f6210
005cd5e7  MOV EDX,dword ptr [EBP + -0x4]
005cd5ea  CMP dword ptr [EDX + 0x1d0],0x0
005cd5f1  JZ 0x005cd61a
005cd5f3  MOV EAX,dword ptr [EBP + 0xc]
005cd5f6  ADD EAX,0x2
005cd5f9  PUSH EAX
005cd5fa  MOV ECX,dword ptr [EBP + 0x8]
005cd5fd  ADD ECX,0x2
005cd600  PUSH ECX
005cd601  MOV EDX,dword ptr [EBP + -0x4]
005cd604  MOV EAX,dword ptr [EDX + 0x1d0]
005cd60a  MOV ECX,dword ptr [EBP + -0x4]
005cd60d  MOV ECX,dword ptr [ECX + 0x1d0]
005cd613  MOV EDX,dword ptr [EAX]
005cd615  MOV EAX,dword ptr [EDX + 0x44]
005cd618  CALL EAX
005cd61a  MOV ESP,EBP
005cd61c  POP EBP
005cd61d  RET 0x8

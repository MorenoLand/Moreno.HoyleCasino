; FUN_005ac1a0  005ac1a0
005ac1a0  PUSH EBP
005ac1a1  MOV EBP,ESP
005ac1a3  PUSH ECX
005ac1a4  MOV dword ptr [EBP + -0x4],ECX
005ac1a7  MOV EAX,dword ptr [EBP + -0x4]
005ac1aa  CMP dword ptr [EAX + 0x4],0x4
005ac1ae  JNZ 0x005ac1cf
005ac1b0  PUSH 0x0
005ac1b2  MOV ECX,dword ptr [EBP + 0x8]
005ac1b5  PUSH ECX
005ac1b6  MOV EDX,dword ptr [EBP + -0x4]
005ac1b9  MOV EAX,dword ptr [EDX + 0x4]
005ac1bc  PUSH EAX
005ac1bd  MOV ECX,dword ptr [0x007935f8]
005ac1c3  CALL 0x005a7240
005ac1c8  SUB EAX,0x1b
005ac1cb  JMP 0x005ac1ea
005ac1cf  PUSH 0x0
005ac1d1  MOV ECX,dword ptr [EBP + 0x8]
005ac1d4  PUSH ECX
005ac1d5  MOV EDX,dword ptr [EBP + -0x4]
005ac1d8  MOV EAX,dword ptr [EDX + 0x4]
005ac1db  PUSH EAX
005ac1dc  MOV ECX,dword ptr [0x007935f8]
005ac1e2  CALL 0x005a7240
005ac1e7  SUB EAX,0x1
005ac1ea  MOV ESP,EBP
005ac1ec  POP EBP
005ac1ed  RET 0x4

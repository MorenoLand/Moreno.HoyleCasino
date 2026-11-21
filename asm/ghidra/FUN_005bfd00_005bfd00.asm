; FUN_005bfd00  005bfd00
005bfd00  PUSH EBP
005bfd01  MOV EBP,ESP
005bfd03  PUSH ECX
005bfd04  MOV dword ptr [EBP + -0x4],ECX
005bfd07  MOV ECX,dword ptr [EBP + -0x4]
005bfd0a  CALL 0x005bf3d0
005bfd0f  MOV EAX,dword ptr [EBP + 0x8]
005bfd12  AND EAX,0x1
005bfd15  JZ 0x005bfd23
005bfd17  MOV ECX,dword ptr [EBP + -0x4]
005bfd1a  PUSH ECX
005bfd1b  CALL 0x00686cae
005bfd20  ADD ESP,0x4
005bfd23  MOV EAX,dword ptr [EBP + -0x4]
005bfd26  MOV ESP,EBP
005bfd28  POP EBP
005bfd29  RET 0x4

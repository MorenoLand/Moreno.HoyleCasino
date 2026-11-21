; FUN_005ef310  005ef310
005ef310  PUSH EBP
005ef311  MOV EBP,ESP
005ef313  PUSH ECX
005ef314  MOV dword ptr [EBP + -0x4],ECX
005ef317  MOV EAX,dword ptr [EBP + -0x4]
005ef31a  MOV ECX,dword ptr [EBP + 0x8]
005ef31d  MOV dword ptr [EAX + 0x70],ECX
005ef320  MOV EDX,dword ptr [EBP + -0x4]
005ef323  MOV EAX,dword ptr [EDX]
005ef325  MOV ECX,dword ptr [EBP + -0x4]
005ef328  MOV EDX,dword ptr [EAX + 0xac]
005ef32e  CALL EDX
005ef330  MOV ESP,EBP
005ef332  POP EBP
005ef333  RET 0x4

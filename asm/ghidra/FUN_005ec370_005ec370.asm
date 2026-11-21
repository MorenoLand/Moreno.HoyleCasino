; FUN_005ec370  005ec370
005ec370  PUSH EBP
005ec371  MOV EBP,ESP
005ec373  PUSH ECX
005ec374  MOV dword ptr [EBP + -0x4],ECX
005ec377  MOV EAX,dword ptr [EBP + -0x4]
005ec37a  MOV CL,byte ptr [EBP + 0x8]
005ec37d  MOV byte ptr [EAX + 0x16f],CL
005ec383  MOV EDX,dword ptr [EBP + -0x4]
005ec386  MOV EAX,dword ptr [EDX]
005ec388  MOV ECX,dword ptr [EBP + -0x4]
005ec38b  MOV EDX,dword ptr [EAX + 0xac]
005ec391  CALL EDX
005ec393  MOV ESP,EBP
005ec395  POP EBP
005ec396  RET 0x4

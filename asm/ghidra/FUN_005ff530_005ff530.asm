; FUN_005ff530  005ff530
005ff530  PUSH EBP
005ff531  MOV EBP,ESP
005ff533  PUSH ECX
005ff534  MOV dword ptr [EBP + -0x4],ECX
005ff537  MOV EAX,dword ptr [EBP + -0x4]
005ff53a  MOV CX,word ptr [EBP + 0x8]
005ff53e  MOV word ptr [EAX + 0x218],CX
005ff545  MOV EDX,dword ptr [EBP + -0x4]
005ff548  MOV EAX,dword ptr [EDX]
005ff54a  MOV ECX,dword ptr [EBP + -0x4]
005ff54d  MOV EDX,dword ptr [EAX + 0x54]
005ff550  CALL EDX
005ff552  MOV ECX,dword ptr [EBP + -0x4]
005ff555  MOVSX EDX,word ptr [ECX + 0x218]
005ff55c  ADD EAX,EDX
005ff55e  PUSH EAX
005ff55f  MOV EAX,dword ptr [EBP + -0x4]
005ff562  MOV EDX,dword ptr [EAX]
005ff564  MOV ECX,dword ptr [EBP + -0x4]
005ff567  MOV EAX,dword ptr [EDX + 0x6c]
005ff56a  CALL EAX
005ff56c  MOV ESP,EBP
005ff56e  POP EBP
005ff56f  RET 0x4

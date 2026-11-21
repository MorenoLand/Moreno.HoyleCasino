; FUN_005c8ed0  005c8ed0
005c8ed0  PUSH EBP
005c8ed1  MOV EBP,ESP
005c8ed3  SUB ESP,0x8
005c8ed6  MOV dword ptr [EBP + -0x8],ECX
005c8ed9  MOV EAX,dword ptr [EBP + -0x8]
005c8edc  MOV ECX,dword ptr [EAX + 0xc]
005c8edf  MOV dword ptr [EBP + -0x4],ECX
005c8ee2  MOV EDX,dword ptr [EBP + 0x8]
005c8ee5  IMUL EDX,dword ptr [EBP + -0x4]
005c8ee9  MOV EAX,dword ptr [EBP + -0x8]
005c8eec  MOV dword ptr [EAX + 0x8],EDX
005c8eef  MOV ESP,EBP
005c8ef1  POP EBP
005c8ef2  RET 0x4

; FUN_005f5e70  005f5e70
005f5e70  PUSH EBP
005f5e71  MOV EBP,ESP
005f5e73  SUB ESP,0x8
005f5e76  MOV dword ptr [EBP + -0x8],ECX
005f5e79  MOV ECX,dword ptr [EBP + -0x8]
005f5e7c  CALL 0x005eb220
005f5e81  MOV dword ptr [EBP + -0x4],EAX
005f5e84  MOV EAX,dword ptr [EBP + 0x8]
005f5e87  PUSH EAX
005f5e88  MOV ECX,dword ptr [EBP + -0x8]
005f5e8b  CALL 0x005eb150
005f5e90  MOV ECX,dword ptr [EBP + -0x4]
005f5e93  CMP ECX,dword ptr [EBP + 0x8]
005f5e96  JZ 0x005f5ea8
005f5e98  MOV EDX,dword ptr [EBP + -0x8]
005f5e9b  MOV EAX,dword ptr [EDX]
005f5e9d  MOV ECX,dword ptr [EBP + -0x8]
005f5ea0  MOV EDX,dword ptr [EAX + 0xbc]
005f5ea6  CALL EDX
005f5ea8  MOV ESP,EBP
005f5eaa  POP EBP
005f5eab  RET 0x4

; FUN_005c8da0  005c8da0
005c8da0  PUSH EBP
005c8da1  MOV EBP,ESP
005c8da3  PUSH ECX
005c8da4  MOV dword ptr [EBP + -0x4],ECX
005c8da7  MOV EAX,dword ptr [EBP + -0x4]
005c8daa  MOV ECX,dword ptr [EAX + 0x10]
005c8dad  MOV EDX,dword ptr [EBP + -0x4]
005c8db0  MOV EAX,dword ptr [EDX + 0x10]
005c8db3  MOV ECX,dword ptr [ECX + 0x8]
005c8db6  IMUL ECX,dword ptr [EAX + 0xc]
005c8dba  MOV EAX,ECX
005c8dbc  MOV ESP,EBP
005c8dbe  POP EBP
005c8dbf  RET

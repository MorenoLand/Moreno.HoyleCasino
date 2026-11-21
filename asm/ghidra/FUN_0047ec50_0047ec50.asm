; FUN_0047ec50  0047ec50
0047ec50  PUSH EBP
0047ec51  MOV EBP,ESP
0047ec53  PUSH ECX
0047ec54  MOV dword ptr [EBP + -0x4],ECX
0047ec57  MOV EAX,dword ptr [EBP + -0x4]
0047ec5a  MOV ECX,dword ptr [EAX + 0xdc]
0047ec60  MOV EDX,dword ptr [EBP + -0x4]
0047ec63  MOV EAX,dword ptr [EDX + 0xdc]
0047ec69  MOV EDX,dword ptr [ECX]
0047ec6b  MOV ECX,EAX
0047ec6d  MOV EAX,dword ptr [EDX + 0x70]
0047ec70  CALL EAX
0047ec72  MOV ECX,dword ptr [EBP + -0x4]
0047ec75  MOV EDX,dword ptr [ECX + 0xe0]
0047ec7b  MOV EAX,dword ptr [EBP + -0x4]
0047ec7e  MOV ECX,dword ptr [EAX + 0xe0]
0047ec84  MOV EDX,dword ptr [EDX]
0047ec86  MOV EAX,dword ptr [EDX + 0x70]
0047ec89  CALL EAX
0047ec8b  MOV ESP,EBP
0047ec8d  POP EBP
0047ec8e  RET

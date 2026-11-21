; FUN_005c74b0  005c74b0
005c74b0  PUSH EBP
005c74b1  MOV EBP,ESP
005c74b3  PUSH ECX
005c74b4  MOV dword ptr [EBP + -0x4],ECX
005c74b7  MOV EAX,dword ptr [EBP + -0x4]
005c74ba  MOV EDX,dword ptr [EAX]
005c74bc  MOV ECX,dword ptr [EBP + -0x4]
005c74bf  MOV EAX,dword ptr [EDX + 0x10]
005c74c2  CALL EAX
005c74c4  MOV ECX,dword ptr [EBP + -0x4]
005c74c7  MOV EDX,dword ptr [EBP + 0x8]
005c74ca  MOV dword ptr [ECX + 0x54],EDX
005c74cd  MOV EAX,dword ptr [EBP + -0x4]
005c74d0  MOV EDX,dword ptr [EAX]
005c74d2  MOV ECX,dword ptr [EBP + -0x4]
005c74d5  MOV EAX,dword ptr [EDX + 0x10]
005c74d8  CALL EAX
005c74da  MOV ESP,EBP
005c74dc  POP EBP
005c74dd  RET 0x4

; GetMinSize  005d5f50
005d5f50  PUSH EBP
005d5f51  MOV EBP,ESP
005d5f53  PUSH ECX
005d5f54  MOV dword ptr [EBP + -0x4],ECX
005d5f57  MOV EAX,dword ptr [EBP + -0x4]
005d5f5a  MOV ECX,dword ptr [EAX + 0x4c4]
005d5f60  MOV EDX,dword ptr [EAX + 0x4c8]
005d5f66  MOV EAX,dword ptr [EBP + 0x8]
005d5f69  MOV dword ptr [EAX],ECX
005d5f6b  MOV dword ptr [EAX + 0x4],EDX
005d5f6e  MOV ESP,EBP
005d5f70  POP EBP
005d5f71  RET 0x4

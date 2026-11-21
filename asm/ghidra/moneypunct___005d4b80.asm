; moneypunct<>  005d4b80
005d4b80  PUSH EBP
005d4b81  MOV EBP,ESP
005d4b83  PUSH ECX
005d4b84  MOV dword ptr [EBP + -0x4],ECX
005d4b87  PUSH 0x0
005d4b89  MOV EAX,dword ptr [EBP + 0x8]
005d4b8c  PUSH EAX
005d4b8d  MOV ECX,dword ptr [EBP + -0x4]
005d4b90  CALL 0x00600f30
005d4b95  MOV ECX,dword ptr [EBP + -0x4]
005d4b98  MOV dword ptr [ECX],0x6d3cc8
005d4b9e  MOV EAX,dword ptr [EBP + -0x4]
005d4ba1  MOV ESP,EBP
005d4ba3  POP EBP
005d4ba4  RET 0x4

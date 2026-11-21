; FUN_005ef370  005ef370
005ef370  PUSH EBP
005ef371  MOV EBP,ESP
005ef373  PUSH ECX
005ef374  MOV dword ptr [EBP + -0x4],ECX
005ef377  MOV EAX,dword ptr [EBP + -0x4]
005ef37a  MOV ECX,dword ptr [EBP + 0x8]
005ef37d  MOV dword ptr [EAX + 0x7c],ECX
005ef380  MOV EDX,dword ptr [EBP + -0x4]
005ef383  MOV EAX,dword ptr [EBP + 0xc]
005ef386  MOV dword ptr [EDX + 0x80],EAX
005ef38c  MOV ECX,dword ptr [EBP + -0x4]
005ef38f  MOV EDX,dword ptr [ECX]
005ef391  MOV ECX,dword ptr [EBP + -0x4]
005ef394  MOV EAX,dword ptr [EDX + 0xac]
005ef39a  CALL EAX
005ef39c  MOV ESP,EBP
005ef39e  POP EBP
005ef39f  RET 0x8

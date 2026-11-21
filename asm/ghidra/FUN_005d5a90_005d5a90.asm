; FUN_005d5a90  005d5a90
005d5a90  PUSH EBP
005d5a91  MOV EBP,ESP
005d5a93  PUSH ECX
005d5a94  MOV dword ptr [EBP + -0x4],ECX
005d5a97  MOV ECX,dword ptr [EBP + -0x4]
005d5a9a  CALL 0x005d52e0
005d5a9f  MOV ECX,dword ptr [EAX]
005d5aa1  MOV EDX,dword ptr [EAX + 0x4]
005d5aa4  MOV EAX,dword ptr [EBP + 0x8]
005d5aa7  MOV dword ptr [EAX],ECX
005d5aa9  MOV dword ptr [EAX + 0x4],EDX
005d5aac  MOV EAX,dword ptr [EBP + 0x8]
005d5aaf  MOV ESP,EBP
005d5ab1  POP EBP
005d5ab2  RET 0x4

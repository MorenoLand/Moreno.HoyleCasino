; FUN_005d7ad0  005d7ad0
005d7ad0  PUSH EBP
005d7ad1  MOV EBP,ESP
005d7ad3  PUSH ECX
005d7ad4  MOV dword ptr [EBP + -0x4],ECX
005d7ad7  MOV EAX,dword ptr [EBP + -0x4]
005d7ada  MOV ECX,dword ptr [EAX + 0x4]
005d7add  MOV EDX,dword ptr [EBP + -0x4]
005d7ae0  MOV EAX,dword ptr [EDX + 0x4]
005d7ae3  MOV EDX,dword ptr [ECX]
005d7ae5  MOV ECX,EAX
005d7ae7  MOV EAX,dword ptr [EDX + 0x70]
005d7aea  CALL EAX
005d7aec  MOV ECX,dword ptr [EBP + -0x4]
005d7aef  CALL 0x006005d0
005d7af4  MOV ESP,EBP
005d7af6  POP EBP
005d7af7  RET

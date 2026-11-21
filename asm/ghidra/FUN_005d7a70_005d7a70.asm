; FUN_005d7a70  005d7a70
005d7a70  PUSH EBP
005d7a71  MOV EBP,ESP
005d7a73  PUSH ECX
005d7a74  MOV dword ptr [EBP + -0x4],ECX
005d7a77  PUSH 0x0
005d7a79  MOV EAX,dword ptr [EBP + 0x8]
005d7a7c  MOV EDX,dword ptr [EAX]
005d7a7e  MOV ECX,dword ptr [EBP + 0x8]
005d7a81  MOV EAX,dword ptr [EDX + 0xb0]
005d7a87  CALL EAX
005d7a89  MOV ECX,dword ptr [EBP + 0x8]
005d7a8c  MOV EDX,dword ptr [ECX + 0x184]
005d7a92  MOV EAX,dword ptr [EBP + 0x8]
005d7a95  MOV ECX,dword ptr [EAX + 0x184]
005d7a9b  MOV EDX,dword ptr [EDX]
005d7a9d  MOV EAX,dword ptr [EDX + 0x70]
005d7aa0  CALL EAX
005d7aa2  MOV ECX,dword ptr [EBP + 0x8]
005d7aa5  MOV EDX,dword ptr [ECX + 0x188]
005d7aab  MOV EAX,dword ptr [EBP + 0x8]
005d7aae  MOV ECX,dword ptr [EAX + 0x188]
005d7ab4  MOV EDX,dword ptr [EDX]
005d7ab6  MOV EAX,dword ptr [EDX + 0x70]
005d7ab9  CALL EAX
005d7abb  PUSH 0x0
005d7abd  MOV ECX,dword ptr [EBP + 0x8]
005d7ac0  PUSH ECX
005d7ac1  MOV ECX,dword ptr [EBP + -0x4]
005d7ac4  CALL 0x006010d0
005d7ac9  MOV ESP,EBP
005d7acb  POP EBP
005d7acc  RET 0x8

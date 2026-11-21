; CVSToolsListBox  00466fb0
00466fb0  PUSH EBP
00466fb1  MOV EBP,ESP
00466fb3  PUSH ECX
00466fb4  MOV dword ptr [EBP + -0x4],ECX
00466fb7  MOV ECX,dword ptr [EBP + -0x4]
00466fba  CALL 0x00601a80
00466fbf  MOV EAX,dword ptr [EBP + -0x4]
00466fc2  MOV dword ptr [EAX],0x6baf04
00466fc8  MOV ECX,dword ptr [EBP + -0x4]
00466fcb  MOV EDX,dword ptr [EBP + 0x8]
00466fce  MOV dword ptr [ECX + 0x1dc],EDX
00466fd4  MOV EAX,dword ptr [EBP + -0x4]
00466fd7  MOV ESP,EBP
00466fd9  POP EBP
00466fda  RET 0x4

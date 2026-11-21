; bad_alloc  005bbc90
005bbc90  PUSH EBP
005bbc91  MOV EBP,ESP
005bbc93  PUSH ECX
005bbc94  MOV dword ptr [EBP + -0x4],ECX
005bbc97  MOV EAX,dword ptr [EBP + 0x8]
005bbc9a  PUSH EAX
005bbc9b  MOV ECX,dword ptr [EBP + -0x4]
005bbc9e  CALL dword ptr [0x006b2210]
005bbca4  MOV ECX,dword ptr [EBP + -0x4]
005bbca7  MOV dword ptr [ECX],0x6d1c0c
005bbcad  MOV EAX,dword ptr [EBP + -0x4]
005bbcb0  MOV ESP,EBP
005bbcb2  POP EBP
005bbcb3  RET 0x4

; FUN_005cda10  005cda10
005cda10  PUSH EBP
005cda11  MOV EBP,ESP
005cda13  PUSH ECX
005cda14  MOV dword ptr [EBP + -0x4],ECX
005cda17  MOV EAX,dword ptr [EBP + 0xc]
005cda1a  PUSH EAX
005cda1b  MOV ECX,dword ptr [EBP + 0x8]
005cda1e  PUSH ECX
005cda1f  MOV EDX,dword ptr [EBP + -0x4]
005cda22  MOV EAX,dword ptr [EDX]
005cda24  MOV ECX,dword ptr [EBP + -0x4]
005cda27  MOV EDX,dword ptr [EAX + 0xd4]
005cda2d  CALL EDX
005cda2f  MOV ESP,EBP
005cda31  POP EBP
005cda32  RET 0x8

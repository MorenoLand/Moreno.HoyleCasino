; FUN_005cda40  005cda40
005cda40  PUSH EBP
005cda41  MOV EBP,ESP
005cda43  PUSH ECX
005cda44  MOV dword ptr [EBP + -0x4],ECX
005cda47  MOV EAX,dword ptr [EBP + 0xc]
005cda4a  PUSH EAX
005cda4b  MOV ECX,dword ptr [EBP + 0x8]
005cda4e  PUSH ECX
005cda4f  MOV EDX,dword ptr [EBP + -0x4]
005cda52  MOV EAX,dword ptr [EDX]
005cda54  MOV ECX,dword ptr [EBP + -0x4]
005cda57  MOV EDX,dword ptr [EAX + 0xd8]
005cda5d  CALL EDX
005cda5f  MOV ESP,EBP
005cda61  POP EBP
005cda62  RET 0x8

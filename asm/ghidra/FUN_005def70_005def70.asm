; FUN_005def70  005def70
005def70  PUSH EBP
005def71  MOV EBP,ESP
005def73  PUSH ECX
005def74  MOV dword ptr [EBP + -0x4],ECX
005def77  MOV EAX,dword ptr [EBP + -0x4]
005def7a  MOV EDX,dword ptr [EAX]
005def7c  MOV ECX,dword ptr [EBP + -0x4]
005def7f  MOV EAX,dword ptr [EDX + 0x154]
005def85  CALL EAX
005def87  ADD EAX,0x1
005def8a  MOV ESP,EBP
005def8c  POP EBP
005def8d  RET

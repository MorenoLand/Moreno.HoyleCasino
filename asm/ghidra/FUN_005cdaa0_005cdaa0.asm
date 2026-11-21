; FUN_005cdaa0  005cdaa0
005cdaa0  PUSH EBP
005cdaa1  MOV EBP,ESP
005cdaa3  PUSH ECX
005cdaa4  MOV dword ptr [EBP + -0x4],ECX
005cdaa7  MOV ECX,dword ptr [EBP + -0x4]
005cdaaa  CALL 0x005cd390
005cdaaf  MOV EAX,dword ptr [EBP + 0x8]
005cdab2  AND EAX,0x1
005cdab5  JZ 0x005cdac3
005cdab7  MOV ECX,dword ptr [EBP + -0x4]
005cdaba  PUSH ECX
005cdabb  CALL 0x00686cae
005cdac0  ADD ESP,0x4
005cdac3  MOV EAX,dword ptr [EBP + -0x4]
005cdac6  MOV ESP,EBP
005cdac8  POP EBP
005cdac9  RET 0x4

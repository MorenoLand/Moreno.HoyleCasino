; FUN_005fc0a0  005fc0a0
005fc0a0  PUSH EBP
005fc0a1  MOV EBP,ESP
005fc0a3  PUSH ECX
005fc0a4  MOV dword ptr [EBP + -0x4],ECX
005fc0a7  MOV ECX,dword ptr [EBP + -0x4]
005fc0aa  CALL 0x005fbfe0
005fc0af  MOV EAX,dword ptr [EBP + 0x8]
005fc0b2  AND EAX,0x1
005fc0b5  JZ 0x005fc0c3
005fc0b7  MOV ECX,dword ptr [EBP + -0x4]
005fc0ba  PUSH ECX
005fc0bb  CALL 0x00686cae
005fc0c0  ADD ESP,0x4
005fc0c3  MOV EAX,dword ptr [EBP + -0x4]
005fc0c6  MOV ESP,EBP
005fc0c8  POP EBP
005fc0c9  RET 0x4

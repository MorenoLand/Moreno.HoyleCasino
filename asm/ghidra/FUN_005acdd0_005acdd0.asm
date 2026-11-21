; FUN_005acdd0  005acdd0
005acdd0  PUSH EBP
005acdd1  MOV EBP,ESP
005acdd3  PUSH ECX
005acdd4  MOV dword ptr [EBP + -0x4],ECX
005acdd7  MOV ECX,dword ptr [EBP + -0x4]
005acdda  CALL 0x005a6d60
005acddf  MOV EAX,dword ptr [EBP + 0x8]
005acde2  AND EAX,0x1
005acde5  JZ 0x005acdf3
005acde7  MOV ECX,dword ptr [EBP + -0x4]
005acdea  PUSH ECX
005acdeb  CALL 0x00686cae
005acdf0  ADD ESP,0x4
005acdf3  MOV EAX,dword ptr [EBP + -0x4]
005acdf6  MOV ESP,EBP
005acdf8  POP EBP
005acdf9  RET 0x4

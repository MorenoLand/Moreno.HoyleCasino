; FUN_005fbdd0  005fbdd0
005fbdd0  PUSH EBP
005fbdd1  MOV EBP,ESP
005fbdd3  PUSH ECX
005fbdd4  MOV dword ptr [EBP + -0x4],ECX
005fbdd7  PUSH 0x1
005fbdd9  MOV EAX,dword ptr [EBP + -0x4]
005fbddc  ADD EAX,0x74
005fbddf  PUSH EAX
005fbde0  MOV ECX,dword ptr [EBP + 0xc]
005fbde3  PUSH ECX
005fbde4  MOV EDX,dword ptr [EBP + 0x8]
005fbde7  PUSH EDX
005fbde8  MOV ECX,dword ptr [EBP + -0x4]
005fbdeb  CALL 0x005fb930
005fbdf0  MOV ESP,EBP
005fbdf2  POP EBP
005fbdf3  RET 0x8

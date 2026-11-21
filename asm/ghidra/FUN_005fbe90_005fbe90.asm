; FUN_005fbe90  005fbe90
005fbe90  PUSH EBP
005fbe91  MOV EBP,ESP
005fbe93  PUSH ECX
005fbe94  MOV dword ptr [EBP + -0x4],ECX
005fbe97  PUSH 0x1
005fbe99  MOV EAX,dword ptr [EBP + -0x4]
005fbe9c  ADD EAX,0xa4
005fbea1  PUSH EAX
005fbea2  MOV ECX,dword ptr [EBP + 0xc]
005fbea5  PUSH ECX
005fbea6  MOV EDX,dword ptr [EBP + 0x8]
005fbea9  PUSH EDX
005fbeaa  MOV ECX,dword ptr [EBP + -0x4]
005fbead  CALL 0x005fb930
005fbeb2  MOV ESP,EBP
005fbeb4  POP EBP
005fbeb5  RET 0x8

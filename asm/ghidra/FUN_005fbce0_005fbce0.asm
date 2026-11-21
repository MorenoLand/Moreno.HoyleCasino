; FUN_005fbce0  005fbce0
005fbce0  PUSH EBP
005fbce1  MOV EBP,ESP
005fbce3  PUSH ECX
005fbce4  MOV dword ptr [EBP + -0x4],ECX
005fbce7  PUSH 0x1
005fbce9  MOV EAX,dword ptr [EBP + -0x4]
005fbcec  ADD EAX,0x24
005fbcef  PUSH EAX
005fbcf0  MOV ECX,dword ptr [EBP + 0xc]
005fbcf3  PUSH ECX
005fbcf4  MOV EDX,dword ptr [EBP + 0x8]
005fbcf7  PUSH EDX
005fbcf8  MOV ECX,dword ptr [EBP + -0x4]
005fbcfb  CALL 0x005fb930
005fbd00  MOV ESP,EBP
005fbd02  POP EBP
005fbd03  RET 0x8

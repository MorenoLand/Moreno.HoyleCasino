; FUN_005fbda0  005fbda0
005fbda0  PUSH EBP
005fbda1  MOV EBP,ESP
005fbda3  PUSH ECX
005fbda4  MOV dword ptr [EBP + -0x4],ECX
005fbda7  PUSH 0x1
005fbda9  MOV EAX,dword ptr [EBP + -0x4]
005fbdac  ADD EAX,0xc4
005fbdb1  PUSH EAX
005fbdb2  MOV ECX,dword ptr [EBP + 0xc]
005fbdb5  PUSH ECX
005fbdb6  MOV EDX,dword ptr [EBP + 0x8]
005fbdb9  PUSH EDX
005fbdba  MOV ECX,dword ptr [EBP + -0x4]
005fbdbd  CALL 0x005fb930
005fbdc2  MOV ESP,EBP
005fbdc4  POP EBP
005fbdc5  RET 0x8

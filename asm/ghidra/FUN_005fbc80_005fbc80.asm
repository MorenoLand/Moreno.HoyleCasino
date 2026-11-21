; FUN_005fbc80  005fbc80
005fbc80  PUSH EBP
005fbc81  MOV EBP,ESP
005fbc83  PUSH ECX
005fbc84  MOV dword ptr [EBP + -0x4],ECX
005fbc87  PUSH 0x1
005fbc89  MOV EAX,dword ptr [EBP + -0x4]
005fbc8c  ADD EAX,0x4
005fbc8f  PUSH EAX
005fbc90  MOV ECX,dword ptr [EBP + 0xc]
005fbc93  PUSH ECX
005fbc94  MOV EDX,dword ptr [EBP + 0x8]
005fbc97  PUSH EDX
005fbc98  MOV ECX,dword ptr [EBP + -0x4]
005fbc9b  CALL 0x005fb930
005fbca0  MOV ESP,EBP
005fbca2  POP EBP
005fbca3  RET 0x8

; FUN_005fbcb0  005fbcb0
005fbcb0  PUSH EBP
005fbcb1  MOV EBP,ESP
005fbcb3  PUSH ECX
005fbcb4  MOV dword ptr [EBP + -0x4],ECX
005fbcb7  PUSH 0x1
005fbcb9  MOV EAX,dword ptr [EBP + -0x4]
005fbcbc  ADD EAX,0x14
005fbcbf  PUSH EAX
005fbcc0  MOV ECX,dword ptr [EBP + 0xc]
005fbcc3  PUSH ECX
005fbcc4  MOV EDX,dword ptr [EBP + 0x8]
005fbcc7  PUSH EDX
005fbcc8  MOV ECX,dword ptr [EBP + -0x4]
005fbccb  CALL 0x005fb930
005fbcd0  MOV ESP,EBP
005fbcd2  POP EBP
005fbcd3  RET 0x8

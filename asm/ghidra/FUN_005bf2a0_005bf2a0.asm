; FUN_005bf2a0  005bf2a0
005bf2a0  PUSH EBP
005bf2a1  MOV EBP,ESP
005bf2a3  PUSH ECX
005bf2a4  MOV dword ptr [EBP + -0x4],ECX
005bf2a7  MOV EAX,dword ptr [EBP + -0x4]
005bf2aa  CMP dword ptr [EAX + 0x10],0x0
005bf2ae  JZ 0x005bf2b2
005bf2b0  JMP 0x005bf2c8
005bf2b2  MOV ECX,dword ptr [0x015e55e8]
005bf2b8  CALL 0x005f3e50
005bf2bd  ADD EAX,0x168
005bf2c2  MOV ECX,dword ptr [EBP + -0x4]
005bf2c5  MOV dword ptr [ECX + 0x10],EAX
005bf2c8  MOV ESP,EBP
005bf2ca  POP EBP
005bf2cb  RET

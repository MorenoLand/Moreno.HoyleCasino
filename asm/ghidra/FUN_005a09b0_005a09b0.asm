; FUN_005a09b0  005a09b0
005a09b0  PUSH EBP
005a09b1  MOV EBP,ESP
005a09b3  SUB ESP,0x8
005a09b6  MOV dword ptr [EBP + -0x8],ECX
005a09b9  MOV dword ptr [EBP + -0x4],0x0
005a09c0  JMP 0x005a09cb
005a09c2  MOV EAX,dword ptr [EBP + -0x4]
005a09c5  ADD EAX,0x1
005a09c8  MOV dword ptr [EBP + -0x4],EAX
005a09cb  CMP dword ptr [EBP + -0x4],0xc
005a09cf  JGE 0x005a09f7
005a09d1  MOV ECX,dword ptr [EBP + -0x4]
005a09d4  MOV EDX,dword ptr [0x007935c4]
005a09da  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1c]
005a09de  CMP EAX,dword ptr [EBP + 0x8]
005a09e1  JZ 0x005a09f5
005a09e3  MOV ECX,dword ptr [EBP + -0x4]
005a09e6  MOV EDX,dword ptr [0x007935c4]
005a09ec  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c]
005a09f0  CALL 0x005cd330
005a09f5  JMP 0x005a09c2
005a09f7  MOV ESP,EBP
005a09f9  POP EBP
005a09fa  RET 0x4

; FUN_005a21a0  005a21a0
005a21a0  PUSH EBP
005a21a1  MOV EBP,ESP
005a21a3  SUB ESP,0x8
005a21a6  MOV dword ptr [EBP + -0x8],ECX
005a21a9  MOV dword ptr [EBP + -0x4],0x0
005a21b0  JMP 0x005a21bb
005a21b2  MOV EAX,dword ptr [EBP + -0x4]
005a21b5  ADD EAX,0x1
005a21b8  MOV dword ptr [EBP + -0x4],EAX
005a21bb  CMP dword ptr [EBP + -0x4],0xc
005a21bf  JGE 0x005a21d7
005a21c1  MOV ECX,dword ptr [EBP + -0x4]
005a21c4  MOV EDX,dword ptr [EBP + -0x8]
005a21c7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
005a21cb  CMP EAX,dword ptr [EBP + 0x8]
005a21ce  JNZ 0x005a21d5
005a21d0  MOV EAX,dword ptr [EBP + -0x4]
005a21d3  JMP 0x005a21da
005a21d5  JMP 0x005a21b2
005a21d7  OR EAX,0xffffffff
005a21da  MOV ESP,EBP
005a21dc  POP EBP
005a21dd  RET 0x4

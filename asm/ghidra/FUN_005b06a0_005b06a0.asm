; FUN_005b06a0  005b06a0
005b06a0  PUSH EBP
005b06a1  MOV EBP,ESP
005b06a3  SUB ESP,0x8
005b06a6  MOV dword ptr [EBP + -0x8],ECX
005b06a9  MOV dword ptr [EBP + -0x4],0x0
005b06b0  JMP 0x005b06bb
005b06b2  MOV EAX,dword ptr [EBP + -0x4]
005b06b5  ADD EAX,0x1
005b06b8  MOV dword ptr [EBP + -0x4],EAX
005b06bb  CMP dword ptr [EBP + -0x4],0x4
005b06bf  JGE 0x005b070b
005b06c1  MOV ECX,dword ptr [EBP + -0x4]
005b06c4  MOV EDX,dword ptr [0x007935f8]
005b06ca  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005b06ce  CMP EAX,dword ptr [EBP + 0x8]
005b06d1  JZ 0x005b06e5
005b06d3  MOV ECX,dword ptr [EBP + -0x4]
005b06d6  MOV EDX,dword ptr [0x007935f8]
005b06dc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005b06e0  CALL 0x005cd330
005b06e5  MOV EAX,dword ptr [EBP + -0x4]
005b06e8  MOV ECX,dword ptr [0x007935f8]
005b06ee  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x48]
005b06f2  CMP EDX,dword ptr [EBP + 0x8]
005b06f5  JZ 0x005b0709
005b06f7  MOV EAX,dword ptr [EBP + -0x4]
005b06fa  MOV ECX,dword ptr [0x007935f8]
005b0700  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x48]
005b0704  CALL 0x005cd330
005b0709  JMP 0x005b06b2
005b070b  MOV ESP,EBP
005b070d  POP EBP
005b070e  RET 0x4

; FUN_005de9c0  005de9c0
005de9c0  PUSH EBP
005de9c1  MOV EBP,ESP
005de9c3  SUB ESP,0x8
005de9c6  MOV dword ptr [EBP + -0x8],ECX
005de9c9  MOV dword ptr [EBP + -0x4],0x0
005de9d0  JMP 0x005de9db
005de9d2  MOV EAX,dword ptr [EBP + -0x4]
005de9d5  ADD EAX,0x1
005de9d8  MOV dword ptr [EBP + -0x4],EAX
005de9db  MOV ECX,dword ptr [EBP + -0x8]
005de9de  MOV EDX,dword ptr [ECX]
005de9e0  MOV ECX,dword ptr [EBP + -0x8]
005de9e3  MOV EAX,dword ptr [EDX + 0xe4]
005de9e9  CALL EAX
005de9eb  CMP dword ptr [EBP + -0x4],EAX
005de9ee  JGE 0x005dea11
005de9f0  MOV ECX,dword ptr [EBP + -0x4]
005de9f3  IMUL ECX,ECX,0xc
005de9f6  MOV EDX,dword ptr [ECX + 0x7947f0]
005de9fc  CMP EDX,dword ptr [EBP + 0x8]
005de9ff  JNZ 0x005dea0f
005dea01  MOV EAX,dword ptr [EBP + -0x4]
005dea04  IMUL EAX,EAX,0xc
005dea07  MOV EAX,dword ptr [EAX + 0x7947f4]
005dea0d  JMP 0x005dea13
005dea0f  JMP 0x005de9d2
005dea11  XOR EAX,EAX
005dea13  MOV ESP,EBP
005dea15  POP EBP
005dea16  RET 0x4

; FUN_005cb9b0  005cb9b0
005cb9b0  PUSH EBP
005cb9b1  MOV EBP,ESP
005cb9b3  SUB ESP,0xc
005cb9b6  MOV dword ptr [EBP + -0xc],ECX
005cb9b9  MOV dword ptr [EBP + -0x4],0x0
005cb9c0  JMP 0x005cb9cb
005cb9c2  MOV EAX,dword ptr [EBP + -0x4]
005cb9c5  ADD EAX,0x1
005cb9c8  MOV dword ptr [EBP + -0x4],EAX
005cb9cb  CMP dword ptr [EBP + -0x4],0x5
005cb9cf  JGE 0x005cba05
005cb9d1  MOV dword ptr [EBP + -0x8],0x0
005cb9d8  JMP 0x005cb9e3
005cb9da  MOV ECX,dword ptr [EBP + -0x8]
005cb9dd  ADD ECX,0x1
005cb9e0  MOV dword ptr [EBP + -0x8],ECX
005cb9e3  CMP dword ptr [EBP + -0x8],0x4
005cb9e7  JGE 0x005cba03
005cb9e9  MOV EDX,dword ptr [EBP + -0x8]
005cb9ec  PUSH EDX
005cb9ed  MOV EAX,dword ptr [EBP + -0x4]
005cb9f0  PUSH EAX
005cb9f1  MOV ECX,dword ptr [EBP + -0xc]
005cb9f4  MOV EDX,dword ptr [ECX]
005cb9f6  MOV ECX,dword ptr [EBP + -0xc]
005cb9f9  MOV EAX,dword ptr [EDX + 0xbc]
005cb9ff  CALL EAX
005cba01  JMP 0x005cb9da
005cba03  JMP 0x005cb9c2
005cba05  MOV ESP,EBP
005cba07  POP EBP
005cba08  RET

; FUN_005de170  005de170
005de170  PUSH EBP
005de171  MOV EBP,ESP
005de173  SUB ESP,0x10
005de176  MOV dword ptr [EBP + -0x10],ECX
005de179  MOV dword ptr [EBP + -0x4],0x0
005de180  JMP 0x005de18b
005de182  MOV EAX,dword ptr [EBP + -0x4]
005de185  ADD EAX,0x1
005de188  MOV dword ptr [EBP + -0x4],EAX
005de18b  MOV ECX,dword ptr [0x0162ee84]
005de191  MOV EDX,dword ptr [ECX]
005de193  MOV ECX,dword ptr [0x0162ee84]
005de199  MOV EAX,dword ptr [EDX + 0x10c]
005de19f  CALL EAX
005de1a1  CMP dword ptr [EBP + -0x4],EAX
005de1a4  JGE 0x005de1ed
005de1a6  MOV ECX,dword ptr [EBP + -0x4]
005de1a9  PUSH ECX
005de1aa  CALL 0x005dcb00
005de1af  ADD ESP,0x4
005de1b2  MOV dword ptr [EBP + -0xc],EAX
005de1b5  MOV ECX,dword ptr [EBP + -0xc]
005de1b8  CALL 0x0063aac0
005de1bd  MOV EDX,dword ptr [EAX]
005de1bf  MOV dword ptr [EBP + -0x8],EDX
005de1c2  XOR EAX,EAX
005de1c4  CMP dword ptr [EBP + -0x8],0x0
005de1c8  SETZ AL
005de1cb  MOVZX ECX,AL
005de1ce  TEST ECX,ECX
005de1d0  JNZ 0x005de1eb
005de1d2  MOV EDX,dword ptr [EBP + -0x4]
005de1d5  PUSH EDX
005de1d6  MOV EAX,[0x007947e4]
005de1db  MOV EDX,dword ptr [EAX]
005de1dd  MOV ECX,dword ptr [0x007947e4]
005de1e3  MOV EAX,dword ptr [EDX + 0x290]
005de1e9  CALL EAX
005de1eb  JMP 0x005de182
005de1ed  MOV ESP,EBP
005de1ef  POP EBP
005de1f0  RET

; FUN_005fc420  005fc420
005fc420  PUSH EBP
005fc421  MOV EBP,ESP
005fc423  SUB ESP,0x10
005fc426  MOV dword ptr [EBP + -0xc],ECX
005fc429  MOV EAX,dword ptr [EBP + -0xc]
005fc42c  CMP dword ptr [EAX + 0x4],0x0
005fc430  JZ 0x005fc461
005fc432  MOV ECX,dword ptr [EBP + -0xc]
005fc435  MOV EDX,dword ptr [ECX + 0x4]
005fc438  MOV dword ptr [EBP + -0x8],EDX
005fc43b  MOV EAX,dword ptr [EBP + -0x8]
005fc43e  MOV dword ptr [EBP + -0x4],EAX
005fc441  CMP dword ptr [EBP + -0x4],0x0
005fc445  JZ 0x005fc45a
005fc447  PUSH 0x1
005fc449  MOV ECX,dword ptr [EBP + -0x4]
005fc44c  MOV EDX,dword ptr [ECX]
005fc44e  MOV ECX,dword ptr [EBP + -0x4]
005fc451  MOV EAX,dword ptr [EDX]
005fc453  CALL EAX
005fc455  MOV dword ptr [EBP + -0x10],EAX
005fc458  JMP 0x005fc461
005fc45a  MOV dword ptr [EBP + -0x10],0x0
005fc461  MOV ECX,dword ptr [EBP + -0xc]
005fc464  MOV EDX,dword ptr [EBP + 0x8]
005fc467  MOV dword ptr [ECX + 0x4],EDX
005fc46a  MOV EAX,dword ptr [EBP + -0xc]
005fc46d  CMP dword ptr [EAX + 0x4],0x0
005fc471  JZ 0x005fc482
005fc473  MOV ECX,dword ptr [EBP + -0xc]
005fc476  PUSH ECX
005fc477  MOV EDX,dword ptr [EBP + -0xc]
005fc47a  MOV ECX,dword ptr [EDX + 0x4]
005fc47d  CALL 0x005fc220
005fc482  MOV ESP,EBP
005fc484  POP EBP
005fc485  RET 0x4

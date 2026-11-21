; FUN_005ea400  005ea400
005ea400  PUSH EBP
005ea401  MOV EBP,ESP
005ea403  SUB ESP,0xc
005ea406  PUSH 0x0
005ea408  PUSH 0x75ee04
005ea40d  PUSH 0x75edec
005ea412  PUSH 0x0
005ea414  MOV EAX,[0x007960d8]
005ea419  MOV ECX,dword ptr [EAX + 0x10]
005ea41c  PUSH ECX
005ea41d  CALL 0x00686ede
005ea422  ADD ESP,0x14
005ea425  MOV dword ptr [EBP + -0x4],EAX
005ea428  CMP dword ptr [EBP + -0x4],0x0
005ea42c  JNZ 0x005ea430
005ea42e  JMP 0x005ea466
005ea430  MOV EDX,dword ptr [EBP + 0x8]
005ea433  MOV EAX,dword ptr [EDX]
005ea435  MOV dword ptr [EBP + -0xc],EAX
005ea438  MOV ECX,dword ptr [EBP + 0x8]
005ea43b  MOV EDX,dword ptr [ECX + 0x4]
005ea43e  MOV dword ptr [EBP + -0x8],EDX
005ea441  LEA EAX,[EBP + -0xc]
005ea444  PUSH EAX
005ea445  MOV ECX,dword ptr [EBP + -0x4]
005ea448  MOV EDX,dword ptr [ECX + 0x8c]
005ea44e  PUSH EDX
005ea44f  CALL dword ptr [0x006b2454]
005ea455  MOV EAX,dword ptr [EBP + 0x8]
005ea458  MOV ECX,dword ptr [EBP + -0xc]
005ea45b  MOV dword ptr [EAX],ECX
005ea45d  MOV EDX,dword ptr [EBP + 0x8]
005ea460  MOV EAX,dword ptr [EBP + -0x8]
005ea463  MOV dword ptr [EDX + 0x4],EAX
005ea466  MOV ESP,EBP
005ea468  POP EBP
005ea469  RET

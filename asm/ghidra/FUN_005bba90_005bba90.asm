; FUN_005bba90  005bba90
005bba90  PUSH EBP
005bba91  MOV EBP,ESP
005bba93  PUSH ECX
005bba94  MOV dword ptr [EBP + -0x4],ECX
005bba97  MOV EAX,dword ptr [EBP + -0x4]
005bba9a  CMP dword ptr [EAX],0x0
005bba9d  JNZ 0x005bbaa5
005bba9f  CALL dword ptr [0x006b2274]
005bbaa5  MOV ECX,dword ptr [EBP + 0x8]
005bbaa8  SHL ECX,0x4
005bbaab  MOV EDX,dword ptr [EBP + -0x4]
005bbaae  ADD ECX,dword ptr [EDX + 0x4]
005bbab1  MOV EAX,dword ptr [EBP + -0x4]
005bbab4  MOV EDX,dword ptr [EAX]
005bbab6  CMP ECX,dword ptr [EDX + 0x8]
005bbab9  JA 0x005bbad1
005bbabb  MOV EAX,dword ptr [EBP + 0x8]
005bbabe  SHL EAX,0x4
005bbac1  MOV ECX,dword ptr [EBP + -0x4]
005bbac4  ADD EAX,dword ptr [ECX + 0x4]
005bbac7  MOV EDX,dword ptr [EBP + -0x4]
005bbaca  MOV ECX,dword ptr [EDX]
005bbacc  CMP EAX,dword ptr [ECX + 0x4]
005bbacf  JNC 0x005bbad7
005bbad1  CALL dword ptr [0x006b2274]
005bbad7  MOV EDX,dword ptr [EBP + 0x8]
005bbada  SHL EDX,0x4
005bbadd  MOV EAX,dword ptr [EBP + -0x4]
005bbae0  ADD EDX,dword ptr [EAX + 0x4]
005bbae3  MOV ECX,dword ptr [EBP + -0x4]
005bbae6  MOV dword ptr [ECX + 0x4],EDX
005bbae9  MOV EAX,dword ptr [EBP + -0x4]
005bbaec  MOV ESP,EBP
005bbaee  POP EBP
005bbaef  RET 0x4

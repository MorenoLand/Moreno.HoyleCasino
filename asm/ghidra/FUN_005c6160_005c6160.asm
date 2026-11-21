; FUN_005c6160  005c6160
005c6160  PUSH EBP
005c6161  MOV EBP,ESP
005c6163  PUSH ECX
005c6164  MOV dword ptr [EBP + -0x4],ECX
005c6167  MOV EAX,dword ptr [EBP + -0x4]
005c616a  CMP dword ptr [EAX],0x0
005c616d  JNZ 0x005c6175
005c616f  CALL dword ptr [0x006b2274]
005c6175  MOV ECX,dword ptr [EBP + 0x8]
005c6178  IMUL ECX,ECX,0x34
005c617b  MOV EDX,dword ptr [EBP + -0x4]
005c617e  ADD ECX,dword ptr [EDX + 0x4]
005c6181  MOV EAX,dword ptr [EBP + -0x4]
005c6184  MOV EDX,dword ptr [EAX]
005c6186  CMP ECX,dword ptr [EDX + 0x8]
005c6189  JA 0x005c61a1
005c618b  MOV EAX,dword ptr [EBP + 0x8]
005c618e  IMUL EAX,EAX,0x34
005c6191  MOV ECX,dword ptr [EBP + -0x4]
005c6194  ADD EAX,dword ptr [ECX + 0x4]
005c6197  MOV EDX,dword ptr [EBP + -0x4]
005c619a  MOV ECX,dword ptr [EDX]
005c619c  CMP EAX,dword ptr [ECX + 0x4]
005c619f  JNC 0x005c61a7
005c61a1  CALL dword ptr [0x006b2274]
005c61a7  MOV EDX,dword ptr [EBP + 0x8]
005c61aa  IMUL EDX,EDX,0x34
005c61ad  MOV EAX,dword ptr [EBP + -0x4]
005c61b0  ADD EDX,dword ptr [EAX + 0x4]
005c61b3  MOV ECX,dword ptr [EBP + -0x4]
005c61b6  MOV dword ptr [ECX + 0x4],EDX
005c61b9  MOV EAX,dword ptr [EBP + -0x4]
005c61bc  MOV ESP,EBP
005c61be  POP EBP
005c61bf  RET 0x4

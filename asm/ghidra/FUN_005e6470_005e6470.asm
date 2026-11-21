; FUN_005e6470  005e6470
005e6470  PUSH EBP
005e6471  MOV EBP,ESP
005e6473  SUB ESP,0x8
005e6476  MOV dword ptr [EBP + -0x8],ECX
005e6479  MOV EAX,dword ptr [EBP + -0x8]
005e647c  MOV ECX,dword ptr [EAX + 0x20]
005e647f  MOV dword ptr [EBP + -0x4],ECX
005e6482  MOV EDX,dword ptr [EBP + -0x8]
005e6485  MOV EAX,dword ptr [EDX + 0x20]
005e6488  ADD EAX,0x1
005e648b  MOV ECX,dword ptr [EBP + -0x8]
005e648e  MOV dword ptr [ECX + 0x20],EAX
005e6491  MOV EDX,dword ptr [EBP + -0x8]
005e6494  MOV EAX,dword ptr [EDX + 0x20]
005e6497  CDQ
005e6498  IDIV dword ptr [0x0075e87c]
005e649e  MOV EAX,dword ptr [EBP + -0x8]
005e64a1  MOV dword ptr [EAX + 0x20],EDX
005e64a4  MOV EAX,dword ptr [EBP + -0x4]
005e64a7  MOV ESP,EBP
005e64a9  POP EBP
005e64aa  RET

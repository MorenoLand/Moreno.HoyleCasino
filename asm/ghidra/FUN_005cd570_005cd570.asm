; FUN_005cd570  005cd570
005cd570  PUSH EBP
005cd571  MOV EBP,ESP
005cd573  PUSH ECX
005cd574  MOV dword ptr [EBP + -0x4],ECX
005cd577  PUSH 0xff
005cd57c  MOV ECX,dword ptr [EBP + -0x4]
005cd57f  CALL 0x005cd620
005cd584  MOV ECX,dword ptr [EBP + -0x4]
005cd587  CALL 0x005f62b0
005cd58c  MOV EAX,dword ptr [EBP + -0x4]
005cd58f  CMP dword ptr [EAX + 0x1d0],0x0
005cd596  JZ 0x005cd5be
005cd598  PUSH 0xff
005cd59d  MOV ECX,dword ptr [EBP + -0x4]
005cd5a0  CALL 0x005cd620
005cd5a5  MOV ECX,dword ptr [EBP + -0x4]
005cd5a8  MOV EDX,dword ptr [ECX + 0x1d0]
005cd5ae  MOV EAX,dword ptr [EBP + -0x4]
005cd5b1  MOV ECX,dword ptr [EAX + 0x1d0]
005cd5b7  MOV EDX,dword ptr [EDX]
005cd5b9  MOV EAX,dword ptr [EDX + 0x70]
005cd5bc  CALL EAX
005cd5be  MOV ESP,EBP
005cd5c0  POP EBP
005cd5c1  RET

; FUN_005bfc40  005bfc40
005bfc40  PUSH EBP
005bfc41  MOV EBP,ESP
005bfc43  PUSH ECX
005bfc44  MOV dword ptr [EBP + -0x4],ECX
005bfc47  PUSH 0x0
005bfc49  MOV ECX,dword ptr [EBP + -0x4]
005bfc4c  CALL 0x005fc0d0
005bfc51  MOV EAX,dword ptr [EBP + -0x4]
005bfc54  MOV dword ptr [EAX],0x6d1d18
005bfc5a  MOV ECX,dword ptr [EBP + -0x4]
005bfc5d  MOV EDX,dword ptr [EBP + 0x8]
005bfc60  MOV dword ptr [ECX + 0x20],EDX
005bfc63  MOV EAX,dword ptr [EBP + -0x4]
005bfc66  MOV ECX,dword ptr [EBP + 0xc]
005bfc69  MOV dword ptr [EAX + 0x24],ECX
005bfc6c  MOV EAX,dword ptr [EBP + -0x4]
005bfc6f  MOV ESP,EBP
005bfc71  POP EBP
005bfc72  RET 0x8

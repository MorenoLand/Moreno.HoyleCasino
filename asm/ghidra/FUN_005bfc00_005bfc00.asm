; FUN_005bfc00  005bfc00
005bfc00  PUSH EBP
005bfc01  MOV EBP,ESP
005bfc03  SUB ESP,0x8
005bfc06  MOV dword ptr [EBP + -0x8],ECX
005bfc09  PUSH 0xca
005bfc0e  MOV EAX,dword ptr [EBP + -0x8]
005bfc11  MOV ECX,dword ptr [EAX + 0xc]
005bfc14  CALL 0x005fb2b0
005bfc19  MOV dword ptr [EBP + -0x4],EAX
005bfc1c  CMP dword ptr [EBP + -0x4],0x0
005bfc20  JZ 0x005bfc39
005bfc22  MOV ECX,dword ptr [EBP + -0x8]
005bfc25  MOV EDX,dword ptr [ECX + 0x18]
005bfc28  PUSH EDX
005bfc29  MOV EAX,dword ptr [EBP + -0x4]
005bfc2c  MOV EDX,dword ptr [EAX]
005bfc2e  MOV ECX,dword ptr [EBP + -0x4]
005bfc31  MOV EAX,dword ptr [EDX + 0xb0]
005bfc37  CALL EAX
005bfc39  MOV ESP,EBP
005bfc3b  POP EBP
005bfc3c  RET

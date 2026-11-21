; FUN_005cb780  005cb780
005cb780  PUSH EBP
005cb781  MOV EBP,ESP
005cb783  SUB ESP,0xc
005cb786  MOV dword ptr [EBP + -0xc],ECX
005cb789  PUSH 0x0
005cb78b  PUSH 0x0
005cb78d  CALL 0x0064c8a0
005cb792  ADD ESP,0x8
005cb795  MOV dword ptr [EBP + -0x8],EAX
005cb798  MOV dword ptr [EBP + -0x4],EDX
005cb79b  MOV EAX,dword ptr [EBP + 0xc]
005cb79e  PUSH EAX
005cb79f  MOV ECX,dword ptr [EBP + 0x8]
005cb7a2  PUSH ECX
005cb7a3  MOV EDX,dword ptr [EBP + -0x4]
005cb7a6  PUSH EDX
005cb7a7  MOV EAX,dword ptr [EBP + -0x8]
005cb7aa  PUSH EAX
005cb7ab  MOV ECX,dword ptr [EBP + -0xc]
005cb7ae  MOV EDX,dword ptr [ECX]
005cb7b0  MOV ECX,dword ptr [EBP + -0xc]
005cb7b3  MOV EAX,dword ptr [EDX + 0xb8]
005cb7b9  CALL EAX
005cb7bb  MOV ESP,EBP
005cb7bd  POP EBP
005cb7be  RET 0x8

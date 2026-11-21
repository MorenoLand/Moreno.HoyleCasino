; FUN_005f9590  005f9590
005f9590  PUSH EBP
005f9591  MOV EBP,ESP
005f9593  SUB ESP,0x8
005f9596  MOV dword ptr [EBP + -0x8],ECX
005f9599  MOV EAX,dword ptr [EBP + -0x8]
005f959c  MOV ECX,dword ptr [EAX + 0x1ac]
005f95a2  MOV dword ptr [EBP + -0x4],ECX
005f95a5  MOV EDX,dword ptr [EBP + -0x8]
005f95a8  MOV EAX,dword ptr [EBP + 0x8]
005f95ab  MOV dword ptr [EDX + 0x1ac],EAX
005f95b1  MOV EAX,dword ptr [EBP + -0x4]
005f95b4  MOV ESP,EBP
005f95b6  POP EBP
005f95b7  RET 0x4

; FUN_005bcee0  005bcee0
005bcee0  PUSH EBP
005bcee1  MOV EBP,ESP
005bcee3  SUB ESP,0x14
005bcee6  MOV dword ptr [EBP + -0x14],ECX
005bcee9  MOV EAX,dword ptr [EBP + 0xc]
005bceec  PUSH EAX
005bceed  MOV ECX,dword ptr [EBP + 0x8]
005bcef0  PUSH ECX
005bcef1  MOV EDX,dword ptr [EBP + -0x14]
005bcef4  MOV ECX,dword ptr [EDX + 0x4]
005bcef7  CALL 0x005be340
005bcefc  MOV dword ptr [EBP + -0x4],EAX
005bceff  MOV EAX,dword ptr [EBP + -0x14]
005bcf02  MOV ECX,dword ptr [EAX + 0x50]
005bcf05  ADD ECX,0x2c
005bcf08  MOV EDX,dword ptr [EBP + 0x10]
005bcf0b  MOV EAX,dword ptr [ECX]
005bcf0d  MOV dword ptr [EDX],EAX
005bcf0f  MOV EAX,dword ptr [ECX + 0x4]
005bcf12  MOV dword ptr [EDX + 0x4],EAX
005bcf15  MOV ECX,dword ptr [ECX + 0x8]
005bcf18  MOV dword ptr [EDX + 0x8],ECX
005bcf1b  MOV EDX,dword ptr [EBP + -0x14]
005bcf1e  MOV EAX,dword ptr [EDX + 0x50]
005bcf21  MOV ECX,dword ptr [EAX + 0x38]
005bcf24  IMUL ECX,dword ptr [EBP + -0x4]
005bcf28  MOV EDX,dword ptr [EBP + 0x10]
005bcf2b  ADD ECX,dword ptr [EDX]
005bcf2d  MOV EAX,dword ptr [EBP + 0x10]
005bcf30  MOV dword ptr [EAX],ECX
005bcf32  MOV ECX,dword ptr [EBP + -0x14]
005bcf35  MOV EDX,dword ptr [ECX + 0x50]
005bcf38  MOV EAX,dword ptr [EDX + 0x3c]
005bcf3b  IMUL EAX,dword ptr [EBP + -0x4]
005bcf3f  MOV ECX,dword ptr [EBP + 0x10]
005bcf42  ADD EAX,dword ptr [ECX + 0x4]
005bcf45  MOV EDX,dword ptr [EBP + 0x10]
005bcf48  MOV dword ptr [EDX + 0x4],EAX
005bcf4b  MOV EAX,dword ptr [EBP + -0x14]
005bcf4e  MOV ECX,dword ptr [EAX + 0x50]
005bcf51  MOV EDX,dword ptr [ECX + 0x40]
005bcf54  IMUL EDX,dword ptr [EBP + -0x4]
005bcf58  MOV EAX,dword ptr [EBP + 0x10]
005bcf5b  ADD EDX,dword ptr [EAX + 0x8]
005bcf5e  MOV ECX,dword ptr [EBP + 0x10]
005bcf61  MOV dword ptr [ECX + 0x8],EDX
005bcf64  MOV ESP,EBP
005bcf66  POP EBP
005bcf67  RET 0xc

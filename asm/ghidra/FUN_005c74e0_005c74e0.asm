; FUN_005c74e0  005c74e0
005c74e0  PUSH EBP
005c74e1  MOV EBP,ESP
005c74e3  SUB ESP,0x14
005c74e6  MOV dword ptr [EBP + -0x14],ECX
005c74e9  MOV EAX,dword ptr [EBP + 0xc]
005c74ec  PUSH EAX
005c74ed  MOV ECX,dword ptr [EBP + 0x8]
005c74f0  PUSH ECX
005c74f1  MOV EDX,dword ptr [EBP + -0x14]
005c74f4  MOV ECX,dword ptr [EDX + 0x4]
005c74f7  CALL 0x005be340
005c74fc  MOV dword ptr [EBP + -0x4],EAX
005c74ff  MOV EAX,dword ptr [EBP + -0x14]
005c7502  MOV ECX,dword ptr [EAX + 0x50]
005c7505  ADD ECX,0x2c
005c7508  MOV EDX,dword ptr [EBP + 0x10]
005c750b  MOV EAX,dword ptr [ECX]
005c750d  MOV dword ptr [EDX],EAX
005c750f  MOV EAX,dword ptr [ECX + 0x4]
005c7512  MOV dword ptr [EDX + 0x4],EAX
005c7515  MOV ECX,dword ptr [ECX + 0x8]
005c7518  MOV dword ptr [EDX + 0x8],ECX
005c751b  MOV EDX,dword ptr [EBP + -0x14]
005c751e  MOV EAX,dword ptr [EDX + 0x50]
005c7521  MOV ECX,dword ptr [EAX + 0x38]
005c7524  IMUL ECX,dword ptr [EBP + -0x4]
005c7528  MOV EDX,dword ptr [EBP + 0x10]
005c752b  ADD ECX,dword ptr [EDX]
005c752d  MOV EAX,dword ptr [EBP + 0x10]
005c7530  MOV dword ptr [EAX],ECX
005c7532  MOV ECX,dword ptr [EBP + -0x14]
005c7535  MOV EDX,dword ptr [ECX + 0x50]
005c7538  MOV EAX,dword ptr [EDX + 0x3c]
005c753b  IMUL EAX,dword ptr [EBP + -0x4]
005c753f  MOV ECX,dword ptr [EBP + 0x10]
005c7542  ADD EAX,dword ptr [ECX + 0x4]
005c7545  MOV EDX,dword ptr [EBP + 0x10]
005c7548  MOV dword ptr [EDX + 0x4],EAX
005c754b  MOV EAX,dword ptr [EBP + -0x14]
005c754e  MOV ECX,dword ptr [EAX + 0x50]
005c7551  MOV EDX,dword ptr [ECX + 0x40]
005c7554  IMUL EDX,dword ptr [EBP + -0x4]
005c7558  MOV EAX,dword ptr [EBP + 0x10]
005c755b  ADD EDX,dword ptr [EAX + 0x8]
005c755e  MOV ECX,dword ptr [EBP + 0x10]
005c7561  MOV dword ptr [ECX + 0x8],EDX
005c7564  MOV ESP,EBP
005c7566  POP EBP
005c7567  RET 0xc

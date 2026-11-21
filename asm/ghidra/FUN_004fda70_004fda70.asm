; FUN_004fda70  004fda70
004fda70  PUSH EBP
004fda71  MOV EBP,ESP
004fda73  SUB ESP,0x8
004fda76  MOV dword ptr [EBP + -0x8],ECX
004fda79  CMP dword ptr [EBP + 0x8],0x0
004fda7d  JNZ 0x004fda83
004fda7f  XOR AL,AL
004fda81  JMP 0x004fdab3
004fda83  MOV EAX,dword ptr [EBP + 0x8]
004fda86  MOV dword ptr [EBP + -0x4],EAX
004fda89  MOV ECX,dword ptr [EBP + -0x4]
004fda8c  MOV dword ptr [ECX + 0x8],0x0
004fda93  MOV EDX,dword ptr [EBP + -0x4]
004fda96  MOV dword ptr [EDX + 0xc],0x0
004fda9d  MOV EAX,dword ptr [EBP + -0x4]
004fdaa0  MOV dword ptr [EAX + 0x10],0x0
004fdaa7  MOV ECX,dword ptr [EBP + -0x4]
004fdaaa  MOV dword ptr [ECX + 0x14],0x0
004fdab1  MOV AL,0x1
004fdab3  MOV ESP,EBP
004fdab5  POP EBP
004fdab6  RET 0x4

; FUN_005b2a70  005b2a70
005b2a70  PUSH EBP
005b2a71  MOV EBP,ESP
005b2a73  SUB ESP,0x8
005b2a76  MOV dword ptr [EBP + -0x8],ECX
005b2a79  CMP dword ptr [EBP + 0x8],0x0
005b2a7d  JNZ 0x005b2a83
005b2a7f  XOR AL,AL
005b2a81  JMP 0x005b2aef
005b2a83  MOV EAX,dword ptr [EBP + 0x8]
005b2a86  MOV dword ptr [EBP + -0x4],EAX
005b2a89  MOV ECX,dword ptr [EBP + -0x4]
005b2a8c  MOV dword ptr [ECX + 0x10],0x0
005b2a93  MOV EDX,dword ptr [EBP + -0x4]
005b2a96  MOV dword ptr [EDX + 0x14],0x0
005b2a9d  MOV EAX,dword ptr [EBP + -0x4]
005b2aa0  MOV dword ptr [EAX + 0x18],0x0
005b2aa7  MOV ECX,dword ptr [EBP + -0x4]
005b2aaa  MOV dword ptr [ECX + 0x1c],0x0
005b2ab1  MOV EDX,dword ptr [EBP + -0x4]
005b2ab4  MOV dword ptr [EDX + 0x20],0x0
005b2abb  MOV EAX,dword ptr [EBP + -0x4]
005b2abe  MOV dword ptr [EAX + 0x24],0x0
005b2ac5  MOV ECX,dword ptr [EBP + -0x4]
005b2ac8  MOV dword ptr [ECX + 0x30],0x0
005b2acf  MOV EDX,dword ptr [EBP + -0x4]
005b2ad2  MOV dword ptr [EDX + 0x34],0x0
005b2ad9  MOV EAX,dword ptr [EBP + -0x4]
005b2adc  MOV dword ptr [EAX + 0x28],0x0
005b2ae3  MOV ECX,dword ptr [EBP + -0x4]
005b2ae6  MOV dword ptr [ECX + 0x2c],0x0
005b2aed  MOV AL,0x1
005b2aef  MOV ESP,EBP
005b2af1  POP EBP
005b2af2  RET 0x4

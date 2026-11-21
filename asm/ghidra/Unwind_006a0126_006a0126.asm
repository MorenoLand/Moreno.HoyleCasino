; Unwind@006a0126  006a0126
006a0126  MOV EAX,dword ptr [EBP + 0xfffffda0]
006a012c  AND EAX,0x1
006a012f  JZ 0x006a0144
006a0135  AND dword ptr [EBP + 0xfffffda0],0xfffffffe
006a013c  MOV ECX,dword ptr [EBP + 0x8]
006a013f  JMP 0x004a20f0
006a0144  RET

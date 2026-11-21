; Unwind@006a09fe  006a09fe
006a09fe  MOV EAX,dword ptr [EBP + -0x28]
006a0a01  AND EAX,0x1
006a0a04  JZ 0x006a0a16
006a0a0a  AND dword ptr [EBP + -0x28],0xfffffffe
006a0a0e  MOV ECX,dword ptr [EBP + 0x8]
006a0a11  JMP 0x004a20f0
006a0a16  RET

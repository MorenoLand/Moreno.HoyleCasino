; FUN_005a1a60  005a1a60
005a1a60  PUSH EBP
005a1a61  MOV EBP,ESP
005a1a63  SUB ESP,0x8
005a1a66  MOV dword ptr [EBP + -0x8],ECX
005a1a69  PUSH -0x1
005a1a6b  MOV ECX,dword ptr [0x007947e0]
005a1a71  CALL 0x005de600
005a1a76  MOV ECX,EAX
005a1a78  CALL 0x0063aae0
005a1a7d  MOV dword ptr [EBP + -0x4],EAX
005a1a80  CMP dword ptr [EBP + 0x8],0x0
005a1a84  JZ 0x005a1a8c
005a1a86  CMP dword ptr [EBP + -0x4],0x0
005a1a8a  JNZ 0x005a1a90
005a1a8c  XOR AL,AL
005a1a8e  JMP 0x005a1ab4
005a1a90  MOV EAX,dword ptr [EBP + -0x4]
005a1a93  MOV ECX,dword ptr [EBP + 0x8]
005a1a96  MOV DL,byte ptr [ECX]
005a1a98  MOV byte ptr [EAX],DL
005a1a9a  MOV EAX,dword ptr [EBP + -0x4]
005a1a9d  MOV ECX,dword ptr [EBP + 0x8]
005a1aa0  MOV DL,byte ptr [ECX + 0x1]
005a1aa3  MOV byte ptr [EAX + 0x1],DL
005a1aa6  MOV EAX,dword ptr [EBP + -0x4]
005a1aa9  MOV ECX,dword ptr [EBP + 0x8]
005a1aac  MOV DL,byte ptr [ECX + 0x2]
005a1aaf  MOV byte ptr [EAX + 0x2],DL
005a1ab2  MOV AL,0x1
005a1ab4  MOV ESP,EBP
005a1ab6  POP EBP
005a1ab7  RET 0x4

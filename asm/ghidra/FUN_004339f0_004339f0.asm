; FUN_004339f0  004339f0
004339f0  PUSH EBP
004339f1  MOV EBP,ESP
004339f3  SUB ESP,0x8
004339f6  MOV dword ptr [EBP + -0x8],ECX
004339f9  CMP dword ptr [EBP + 0x8],0x0
004339fd  JNZ 0x00433a03
004339ff  XOR AL,AL
00433a01  JMP 0x00433a3b
00433a03  MOV EAX,dword ptr [EBP + 0x8]
00433a06  MOV dword ptr [EBP + -0x4],EAX
00433a09  MOV ECX,dword ptr [EBP + -0x4]
00433a0c  MOV byte ptr [ECX],0x1
00433a0f  MOV EDX,dword ptr [EBP + -0x4]
00433a12  MOV byte ptr [EDX + 0x1],0x1
00433a16  MOV EAX,dword ptr [EBP + -0x4]
00433a19  MOV byte ptr [EAX + 0x2],0x1
00433a1d  MOV ECX,dword ptr [EBP + -0x4]
00433a20  MOV byte ptr [ECX + 0x3],0x1
00433a24  MOV EDX,dword ptr [EBP + -0x4]
00433a27  MOV byte ptr [EDX + 0x4],0x0
00433a2b  MOV EAX,dword ptr [EBP + -0x4]
00433a2e  MOV byte ptr [EAX + 0x5],0x1
00433a32  MOV ECX,dword ptr [EBP + -0x4]
00433a35  MOV byte ptr [ECX + 0x6],0x0
00433a39  MOV AL,0x1
00433a3b  MOV ESP,EBP
00433a3d  POP EBP
00433a3e  RET 0x4

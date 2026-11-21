; FUN_005b29e0  005b29e0
005b29e0  PUSH EBP
005b29e1  MOV EBP,ESP
005b29e3  SUB ESP,0x8
005b29e6  MOV dword ptr [EBP + -0x8],ECX
005b29e9  CMP dword ptr [EBP + 0x8],0x0
005b29ed  JNZ 0x005b29f3
005b29ef  XOR AL,AL
005b29f1  JMP 0x005b2a5c
005b29f3  MOV EAX,dword ptr [EBP + 0x8]
005b29f6  MOV dword ptr [EBP + -0x4],EAX
005b29f9  MOV ECX,dword ptr [EBP + -0x4]
005b29fc  MOV byte ptr [ECX + 0xd],0x0
005b2a00  MOV EDX,dword ptr [EBP + -0x4]
005b2a03  MOV byte ptr [EDX + 0x9],0x2
005b2a07  MOV EAX,dword ptr [EBP + -0x4]
005b2a0a  MOV byte ptr [EAX + 0xc],0x50
005b2a0e  MOV ECX,dword ptr [EBP + -0x4]
005b2a11  MOV byte ptr [ECX + 0x2],0x1
005b2a15  MOV EDX,dword ptr [EBP + -0x4]
005b2a18  MOV byte ptr [EDX + 0xb],0x0
005b2a1c  MOV EAX,dword ptr [EBP + -0x4]
005b2a1f  MOV byte ptr [EAX + 0x3],0x0
005b2a23  MOV ECX,dword ptr [EBP + -0x4]
005b2a26  MOV byte ptr [ECX + 0xa],0x1
005b2a2a  MOV EDX,dword ptr [EBP + -0x4]
005b2a2d  MOV byte ptr [EDX],0x1
005b2a30  MOV EAX,dword ptr [EBP + -0x4]
005b2a33  MOV byte ptr [EAX + 0x1],0x0
005b2a37  MOV ECX,dword ptr [EBP + -0x4]
005b2a3a  MOV byte ptr [ECX + 0x8],0x4
005b2a3e  MOV EDX,dword ptr [EBP + -0x4]
005b2a41  MOV byte ptr [EDX + 0x4],0x1
005b2a45  MOV EAX,dword ptr [EBP + -0x4]
005b2a48  MOV byte ptr [EAX + 0x5],0x1
005b2a4c  MOV ECX,dword ptr [EBP + -0x4]
005b2a4f  MOV byte ptr [ECX + 0x6],0x0
005b2a53  MOV EDX,dword ptr [EBP + -0x4]
005b2a56  MOV byte ptr [EDX + 0x7],0x1
005b2a5a  MOV AL,0x1
005b2a5c  MOV ESP,EBP
005b2a5e  POP EBP
005b2a5f  RET 0x4

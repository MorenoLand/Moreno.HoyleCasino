; FUN_005afef0  005afef0
005afef0  PUSH EBP
005afef1  MOV EBP,ESP
005afef3  SUB ESP,0xc
005afef6  MOV dword ptr [EBP + -0x8],ECX
005afef9  MOV dword ptr [EBP + -0x4],0x0
005aff00  MOV EAX,dword ptr [EBP + 0xc]
005aff03  MOV dword ptr [EBP + -0xc],EAX
005aff06  MOV ECX,dword ptr [EBP + -0xc]
005aff09  SUB ECX,0x7d0
005aff0f  MOV dword ptr [EBP + -0xc],ECX
005aff12  CMP dword ptr [EBP + -0xc],0x8
005aff16  JA 0x005aff7a
005aff18  MOV EDX,dword ptr [EBP + -0xc]
005aff1b  JMP dword ptr [EDX*0x4 + 0x5aff84]
005aff7a  MOV EAX,dword ptr [EBP + -0x4]
005aff7d  MOV ESP,EBP
005aff7f  POP EBP
005aff80  RET 0x8

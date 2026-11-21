; FUN_005afc40  005afc40
005afc40  PUSH EBP
005afc41  MOV EBP,ESP
005afc43  SUB ESP,0x10
005afc46  MOV dword ptr [EBP + -0xc],ECX
005afc49  MOV ECX,dword ptr [0x00793604]
005afc4f  CALL 0x005b4f00
005afc54  PUSH EAX
005afc55  MOV ECX,dword ptr [0x00793604]
005afc5b  CALL 0x005b60c0
005afc60  MOVZX EAX,AL
005afc63  TEST EAX,EAX
005afc65  JZ 0x005afc81
005afc67  MOV ECX,dword ptr [0x00793604]
005afc6d  CALL 0x005b4ed0
005afc72  MOV dword ptr [EBP + -0x4],EAX
005afc75  MOV ECX,dword ptr [EBP + -0x4]
005afc78  MOV byte ptr [ECX + 0x4a0],0x1
005afc7f  JMP 0x005afc99
005afc81  MOV ECX,dword ptr [0x00793604]
005afc87  CALL 0x005b4ed0
005afc8c  MOV dword ptr [EBP + -0x8],EAX
005afc8f  MOV EDX,dword ptr [EBP + -0x8]
005afc92  MOV byte ptr [EDX + 0x4a1],0x1
005afc99  MOV ECX,dword ptr [0x00793604]
005afc9f  CALL 0x005b4ed0
005afca4  MOV dword ptr [EBP + -0x10],EAX
005afca7  MOV EAX,dword ptr [EBP + -0x10]
005afcaa  MOV EDX,dword ptr [EAX]
005afcac  MOV ECX,dword ptr [EBP + -0x10]
005afcaf  MOV EAX,dword ptr [EDX + 0x14]
005afcb2  CALL EAX
005afcb4  MOV ECX,dword ptr [EBP + -0xc]
005afcb7  CALL 0x005db890
005afcbc  MOV ECX,dword ptr [0x007935fc]
005afcc2  CALL 0x005af1b0
005afcc7  MOV ESP,EBP
005afcc9  POP EBP
005afcca  RET

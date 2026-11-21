; FUN_005ba030  005ba030
005ba030  PUSH EBP
005ba031  MOV EBP,ESP
005ba033  SUB ESP,0x8
005ba036  MOV dword ptr [EBP + -0x8],ECX
005ba039  MOV EAX,dword ptr [EBP + -0x8]
005ba03c  MOV ECX,dword ptr [EAX + 0x8]
005ba03f  MOV dword ptr [EBP + -0x4],ECX
005ba042  MOV EDX,dword ptr [EBP + 0x8]
005ba045  MOV dword ptr [EDX],0x0
005ba04b  CMP dword ptr [EBP + -0x8],0x0
005ba04f  JZ 0x005ba067
005ba051  MOV EAX,dword ptr [EBP + -0x8]
005ba054  MOV ECX,dword ptr [EAX + 0x4]
005ba057  CMP ECX,dword ptr [EBP + -0x4]
005ba05a  JA 0x005ba067
005ba05c  MOV EDX,dword ptr [EBP + -0x8]
005ba05f  MOV EAX,dword ptr [EBP + -0x4]
005ba062  CMP EAX,dword ptr [EDX + 0x8]
005ba065  JBE 0x005ba06d
005ba067  CALL dword ptr [0x006b2274]
005ba06d  MOV ECX,dword ptr [EBP + 0x8]
005ba070  MOV EDX,dword ptr [EBP + -0x8]
005ba073  MOV dword ptr [ECX],EDX
005ba075  MOV EAX,dword ptr [EBP + 0x8]
005ba078  MOV ECX,dword ptr [EBP + -0x4]
005ba07b  MOV dword ptr [EAX + 0x4],ECX
005ba07e  MOV EAX,dword ptr [EBP + 0x8]
005ba081  MOV ESP,EBP
005ba083  POP EBP
005ba084  RET 0x4

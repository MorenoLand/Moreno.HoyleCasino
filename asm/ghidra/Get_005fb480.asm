; Get  005fb480
005fb480  PUSH EBP
005fb481  MOV EBP,ESP
005fb483  SUB ESP,0x8
005fb486  MOV dword ptr [EBP + -0x8],ECX
005fb489  MOV EAX,dword ptr [EBP + 0xc]
005fb48c  PUSH EAX
005fb48d  MOV ECX,dword ptr [EBP + -0x8]
005fb490  CALL 0x005fb430
005fb495  MOV dword ptr [EBP + -0x4],EAX
005fb498  CMP dword ptr [EBP + -0x4],0x0
005fb49c  JZ 0x005fb4ac
005fb49e  MOV ECX,dword ptr [EBP + 0x8]
005fb4a1  PUSH ECX
005fb4a2  MOV ECX,dword ptr [EBP + -0x4]
005fb4a5  CALL 0x005ff940
005fb4aa  JMP 0x005fb4ae
005fb4ac  XOR EAX,EAX
005fb4ae  MOV ESP,EBP
005fb4b0  POP EBP
005fb4b1  RET 0x8

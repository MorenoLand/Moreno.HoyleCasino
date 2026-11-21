; FUN_004fb400  004fb400
004fb400  PUSH EBP
004fb401  MOV EBP,ESP
004fb403  SUB ESP,0x14
004fb406  MOV dword ptr [EBP + -0x14],ECX
004fb409  MOV ECX,dword ptr [0x0162ee84]
004fb40f  CALL 0x00636e70
004fb414  MOV ECX,dword ptr [EBP + -0x14]
004fb417  CALL 0x004fb580
004fb41c  CMP dword ptr [EBP + 0xc],-0x1
004fb420  JZ 0x004fb48c
004fb422  MOV dword ptr [EBP + -0x8],0x0
004fb429  MOV dword ptr [EBP + -0x4],0x0
004fb430  JMP 0x004fb43b
004fb432  MOV EAX,dword ptr [EBP + -0x4]
004fb435  ADD EAX,0x1
004fb438  MOV dword ptr [EBP + -0x4],EAX
004fb43b  MOV ECX,dword ptr [0x00791364]
004fb441  CALL 0x0047f950
004fb446  CMP dword ptr [EBP + -0x4],EAX
004fb449  JGE 0x004fb48c
004fb44b  MOV ECX,dword ptr [EBP + -0x4]
004fb44e  PUSH ECX
004fb44f  MOV ECX,dword ptr [0x00791364]
004fb455  CALL 0x0047e390
004fb45a  MOV dword ptr [EBP + -0x8],EAX
004fb45d  MOV EDX,dword ptr [EBP + -0x8]
004fb460  MOV EAX,dword ptr [EDX + 0x4]
004fb463  PUSH EAX
004fb464  CALL 0x005dcb00
004fb469  ADD ESP,0x4
004fb46c  MOV dword ptr [EBP + -0xc],EAX
004fb46f  MOV ECX,dword ptr [EBP + -0xc]
004fb472  MOV EDX,dword ptr [ECX + 0x8]
004fb475  MOV dword ptr [EBP + -0x10],EDX
004fb478  MOV EAX,dword ptr [EBP + -0x10]
004fb47b  CMP EAX,dword ptr [EBP + 0xc]
004fb47e  JNZ 0x004fb48a
004fb480  MOV ECX,dword ptr [EBP + -0x8]
004fb483  CALL 0x004c6550
004fb488  JMP 0x004fb48c
004fb48a  JMP 0x004fb432
004fb48c  MOV ESP,EBP
004fb48e  POP EBP
004fb48f  RET 0x8

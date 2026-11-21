; FUN_005fff30  005fff30
005fff30  PUSH EBP
005fff31  MOV EBP,ESP
005fff33  SUB ESP,0x8
005fff36  MOV dword ptr [EBP + -0x8],ECX
005fff39  MOV ECX,dword ptr [EBP + -0x8]
005fff3c  CALL 0x005f5550
005fff41  MOV dword ptr [EBP + -0x4],EAX
005fff44  MOV EAX,dword ptr [EBP + -0x8]
005fff47  CMP dword ptr [EAX + 0x190],0x0
005fff4e  JZ 0x005fff64
005fff50  MOV ECX,dword ptr [EBP + -0x8]
005fff53  MOV ECX,dword ptr [ECX + 0x190]
005fff59  CALL 0x005f5550
005fff5e  ADD EAX,dword ptr [EBP + -0x4]
005fff61  MOV dword ptr [EBP + -0x4],EAX
005fff64  MOV EAX,dword ptr [EBP + -0x4]
005fff67  MOV ESP,EBP
005fff69  POP EBP
005fff6a  RET

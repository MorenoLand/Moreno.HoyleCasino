; FUN_005fd630  005fd630
005fd630  PUSH EBP
005fd631  MOV EBP,ESP
005fd633  PUSH ECX
005fd634  MOV dword ptr [EBP + -0x4],ECX
005fd637  MOV EAX,dword ptr [EBP + -0x4]
005fd63a  MOVZX ECX,byte ptr [EAX + 0x1a8]
005fd641  TEST ECX,ECX
005fd643  JNZ 0x005fd6a3
005fd645  MOV ECX,dword ptr [EBP + -0x4]
005fd648  CALL 0x006025c0
005fd64d  MOV EDX,dword ptr [EBP + -0x4]
005fd650  CMP dword ptr [EDX + 0x1f4],0x0
005fd657  JZ 0x005fd679
005fd659  PUSH 0x0
005fd65b  MOV EAX,dword ptr [EBP + -0x4]
005fd65e  MOV ECX,dword ptr [EAX + 0x1f4]
005fd664  MOV EDX,dword ptr [EBP + -0x4]
005fd667  MOV EAX,dword ptr [EDX + 0x1f4]
005fd66d  MOV EDX,dword ptr [ECX]
005fd66f  MOV ECX,EAX
005fd671  MOV EAX,dword ptr [EDX + 0xb0]
005fd677  CALL EAX
005fd679  MOV ECX,dword ptr [EBP + -0x4]
005fd67c  CMP dword ptr [ECX + 0x1f8],0x0
005fd683  JZ 0x005fd6a3
005fd685  PUSH 0x0
005fd687  MOV EDX,dword ptr [EBP + -0x4]
005fd68a  MOV EAX,dword ptr [EDX + 0x1f8]
005fd690  MOV ECX,dword ptr [EBP + -0x4]
005fd693  MOV ECX,dword ptr [ECX + 0x1f8]
005fd699  MOV EDX,dword ptr [EAX]
005fd69b  MOV EAX,dword ptr [EDX + 0xb0]
005fd6a1  CALL EAX
005fd6a3  MOV ESP,EBP
005fd6a5  POP EBP
005fd6a6  RET

; FUN_005dea50  005dea50
005dea50  PUSH EBP
005dea51  MOV EBP,ESP
005dea53  PUSH ECX
005dea54  MOV dword ptr [EBP + -0x4],ECX
005dea57  CMP dword ptr [0x007947e4],0x0
005dea5e  JZ 0x005dea6f
005dea60  CALL dword ptr [0x006b20bc]
005dea66  MOV ECX,dword ptr [0x007947e4]
005dea6c  MOV dword ptr [ECX + 0x60],EAX
005dea6f  PUSH 0x0
005dea71  PUSH ECX
005dea72  FLD float ptr [0x006b3654]
005dea78  FSTP float ptr [ESP]
005dea7b  PUSH ECX
005dea7c  FLD1
005dea7e  FSTP float ptr [ESP]
005dea81  MOV EDX,dword ptr [EBP + 0x18]
005dea84  PUSH EDX
005dea85  MOV EAX,dword ptr [EBP + 0x14]
005dea88  PUSH EAX
005dea89  CMP dword ptr [EBP + 0x10],0x0
005dea8d  SETNZ CL
005dea90  PUSH ECX
005dea91  MOV EDX,dword ptr [EBP + 0xc]
005dea94  PUSH EDX
005dea95  MOV EAX,dword ptr [EBP + 0x8]
005dea98  PUSH EAX
005dea99  MOV ECX,dword ptr [EBP + -0x4]
005dea9c  CALL 0x00637550
005deaa1  MOV ESP,EBP
005deaa3  POP EBP
005deaa4  RET 0x14

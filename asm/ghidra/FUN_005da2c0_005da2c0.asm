; FUN_005da2c0  005da2c0
005da2c0  PUSH EBP
005da2c1  MOV EBP,ESP
005da2c3  SUB ESP,0xc
005da2c6  MOV dword ptr [EBP + -0x8],ECX
005da2c9  CMP dword ptr [EBP + 0x8],0x0
005da2cd  JL 0x005da2e9
005da2cf  MOV EAX,[0x0162ee84]
005da2d4  MOV EDX,dword ptr [EAX]
005da2d6  MOV ECX,dword ptr [0x0162ee84]
005da2dc  MOV EAX,dword ptr [EDX + 0x10c]
005da2e2  CALL EAX
005da2e4  CMP dword ptr [EBP + 0x8],EAX
005da2e7  JL 0x005da300
005da2e9  PUSH 0x3bf
005da2ee  PUSH 0x6d43a4
005da2f3  PUSH 0x6d4408
005da2f8  CALL 0x005e9f20
005da2fd  ADD ESP,0xc
005da300  MOV EDX,dword ptr [EBP + 0x8]
005da303  PUSH EDX
005da304  MOV ECX,dword ptr [0x0162ee84]
005da30a  CALL 0x00639110
005da30f  TEST EAX,EAX
005da311  JZ 0x005da328
005da313  MOV EAX,dword ptr [EBP + 0x8]
005da316  PUSH EAX
005da317  MOV ECX,dword ptr [0x0162ee84]
005da31d  CALL 0x00639110
005da322  CMP dword ptr [EAX + 0x18],0x0
005da326  JNZ 0x005da32d
005da328  OR EAX,0xffffffff
005da32b  JMP 0x005da358
005da32d  MOV ECX,dword ptr [EBP + 0x8]
005da330  PUSH ECX
005da331  MOV ECX,dword ptr [0x0162ee84]
005da337  CALL 0x00639110
005da33c  MOV EDX,dword ptr [EAX + 0x18]
005da33f  MOV dword ptr [EBP + -0xc],EDX
005da342  MOV EAX,dword ptr [EBP + -0xc]
005da345  MOV EDX,dword ptr [EAX]
005da347  MOV ECX,dword ptr [EBP + -0xc]
005da34a  MOV EAX,dword ptr [EDX + 0x54]
005da34d  CALL EAX
005da34f  ADD EAX,0x2c
005da352  MOV dword ptr [EBP + -0x4],EAX
005da355  MOV EAX,dword ptr [EBP + -0x4]
005da358  MOV ESP,EBP
005da35a  POP EBP
005da35b  RET 0x8

; FUN_005deeb0  005deeb0
005deeb0  PUSH EBP
005deeb1  MOV EBP,ESP
005deeb3  PUSH ECX
005deeb4  MOV dword ptr [EBP + -0x4],ECX
005deeb7  MOV EAX,dword ptr [EBP + -0x4]
005deeba  MOV EDX,dword ptr [EAX]
005deebc  MOV ECX,dword ptr [EBP + -0x4]
005deebf  MOV EAX,dword ptr [EDX + 0x16c]
005deec5  CALL EAX
005deec7  CMP dword ptr [EBP + 0x8],EAX
005deeca  JGE 0x005deed8
005deecc  MOV ECX,dword ptr [EBP + 0x8]
005deecf  MOV EAX,dword ptr [ECX*0x4 + 0x75d7e8]
005deed6  JMP 0x005deef6
005deed8  XOR EDX,EDX
005deeda  JNZ 0x005deef3
005deedc  PUSH 0x449
005deee1  PUSH 0x6d4b54
005deee6  PUSH 0x6b2f58
005deeeb  CALL 0x005e9f20
005deef0  ADD ESP,0xc
005deef3  OR EAX,0xffffffff
005deef6  MOV ESP,EBP
005deef8  POP EBP
005deef9  RET 0x4

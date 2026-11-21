; FUN_0062fba0  0062fba0
0062fba0  PUSH EBP
0062fba1  MOV EBP,ESP
0062fba3  CMP dword ptr [EBP + 0x8],0x0
0062fba7  JZ 0x0062fbbd
0062fba9  MOV EAX,dword ptr [EBP + 0x8]
0062fbac  PUSH EAX
0062fbad  MOV ECX,dword ptr [0x007960d8]
0062fbb3  MOV ECX,dword ptr [ECX + 0x24]
0062fbb6  CALL 0x006146a0
0062fbbb  JMP 0x0062fbbf
0062fbbd  XOR EAX,EAX
0062fbbf  POP EBP
0062fbc0  RET

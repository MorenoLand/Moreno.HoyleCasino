; FUN_0061eda0  0061eda0
0061eda0  PUSH EBP
0061eda1  MOV EBP,ESP
0061eda3  PUSH ECX
0061eda4  MOV dword ptr [EBP + -0x4],ECX
0061eda7  CMP dword ptr [EBP + -0x4],0x0
0061edab  JNZ 0x0061edb1
0061edad  XOR EAX,EAX
0061edaf  JMP 0x0061edba
0061edb1  MOV EAX,dword ptr [EBP + -0x4]
0061edb4  MOV EAX,dword ptr [EAX + 0x158]
0061edba  MOV ESP,EBP
0061edbc  POP EBP
0061edbd  RET

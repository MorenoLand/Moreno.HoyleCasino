; FUN_0047eda0  0047eda0
0047eda0  PUSH EBP
0047eda1  MOV EBP,ESP
0047eda3  PUSH ECX
0047eda4  MOV dword ptr [EBP + -0x4],ECX
0047eda7  MOV EAX,dword ptr [EBP + -0x4]
0047edaa  MOV ECX,dword ptr [EAX + 0x49c]
0047edb0  MOV EDX,dword ptr [EBP + -0x4]
0047edb3  MOV EAX,dword ptr [EDX + 0x49c]
0047edb9  MOV EDX,dword ptr [ECX]
0047edbb  MOV ECX,EAX
0047edbd  MOV EAX,dword ptr [EDX + 0x70]
0047edc0  CALL EAX
0047edc2  MOV ESP,EBP
0047edc4  POP EBP
0047edc5  RET

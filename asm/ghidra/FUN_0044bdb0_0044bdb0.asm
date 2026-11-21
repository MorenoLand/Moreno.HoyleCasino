; FUN_0044bdb0  0044bdb0
0044bdb0  PUSH EBP
0044bdb1  MOV EBP,ESP
0044bdb3  PUSH ECX
0044bdb4  MOV dword ptr [EBP + -0x4],ECX
0044bdb7  MOV ECX,dword ptr [EBP + -0x4]
0044bdba  CALL 0x0044abf0
0044bdbf  MOV EAX,dword ptr [EBP + 0x8]
0044bdc2  AND EAX,0x1
0044bdc5  JZ 0x0044bdd3
0044bdc7  MOV ECX,dword ptr [EBP + -0x4]
0044bdca  PUSH ECX
0044bdcb  CALL 0x00686cae
0044bdd0  ADD ESP,0x4
0044bdd3  MOV EAX,dword ptr [EBP + -0x4]
0044bdd6  MOV ESP,EBP
0044bdd8  POP EBP
0044bdd9  RET 0x4

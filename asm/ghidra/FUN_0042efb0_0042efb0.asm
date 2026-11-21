; FUN_0042efb0  0042efb0
0042efb0  PUSH EBP
0042efb1  MOV EBP,ESP
0042efb3  PUSH ECX
0042efb4  MOV dword ptr [EBP + -0x4],ECX
0042efb7  MOV ECX,dword ptr [EBP + -0x4]
0042efba  CALL 0x0042bfe0
0042efbf  MOV EAX,dword ptr [EBP + 0x8]
0042efc2  AND EAX,0x1
0042efc5  JZ 0x0042efd3
0042efc7  MOV ECX,dword ptr [EBP + -0x4]
0042efca  PUSH ECX
0042efcb  CALL 0x00686cae
0042efd0  ADD ESP,0x4
0042efd3  MOV EAX,dword ptr [EBP + -0x4]
0042efd6  MOV ESP,EBP
0042efd8  POP EBP
0042efd9  RET 0x4

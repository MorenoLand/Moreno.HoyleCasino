; FUN_0040ed70  0040ed70
0040ed70  PUSH EBP
0040ed71  MOV EBP,ESP
0040ed73  SUB ESP,0x14
0040ed76  MOV dword ptr [EBP + -0x14],ECX
0040ed79  MOV dword ptr [EBP + -0x10],0x1
0040ed80  MOV dword ptr [EBP + -0xc],0x2
0040ed87  MOV dword ptr [EBP + -0x8],0x0
0040ed8e  MOV dword ptr [EBP + -0x4],0x3
0040ed95  MOV EAX,dword ptr [EBP + -0x14]
0040ed98  MOV ECX,dword ptr [EAX + 0x178]
0040ed9e  CALL 0x005f5400
0040eda3  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x10]
0040eda7  ADD EAX,0x1391
0040edac  MOV ESP,EBP
0040edae  POP EBP
0040edaf  RET

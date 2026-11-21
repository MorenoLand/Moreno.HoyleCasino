; FUN_005a9e80  005a9e80
005a9e80  PUSH EBP
005a9e81  MOV EBP,ESP
005a9e83  SUB ESP,0x14
005a9e86  MOV dword ptr [EBP + -0x14],ECX
005a9e89  MOV dword ptr [EBP + -0x10],0x1
005a9e90  MOV dword ptr [EBP + -0xc],0x2
005a9e97  MOV dword ptr [EBP + -0x8],0x0
005a9e9e  MOV dword ptr [EBP + -0x4],0x3
005a9ea5  MOV EAX,dword ptr [EBP + -0x14]
005a9ea8  MOV ECX,dword ptr [EAX + 0x178]
005a9eae  CALL 0x005f5400
005a9eb3  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x10]
005a9eb7  ADD EAX,0x1391
005a9ebc  MOV ESP,EBP
005a9ebe  POP EBP
005a9ebf  RET

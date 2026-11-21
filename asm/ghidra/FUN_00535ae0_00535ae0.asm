; FUN_00535ae0  00535ae0
00535ae0  PUSH EBP
00535ae1  MOV EBP,ESP
00535ae3  SUB ESP,0x1c
00535ae6  MOV dword ptr [EBP + -0x18],ECX
00535ae9  MOV EAX,dword ptr [EBP + 0x8]
00535aec  MOV dword ptr [EBP + -0x1c],EAX
00535aef  CMP dword ptr [EBP + -0x1c],0x5
00535af3  JA 0x00535cff
00535af9  MOV ECX,dword ptr [EBP + -0x1c]
00535afc  JMP dword ptr [ECX*0x4 + 0x535d08]
00535cff  MOV ESP,EBP
00535d01  POP EBP
00535d02  RET 0x4

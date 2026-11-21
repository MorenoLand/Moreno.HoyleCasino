; FUN_004d8a80  004d8a80
004d8a80  PUSH EBP
004d8a81  MOV EBP,ESP
004d8a83  SUB ESP,0x8
004d8a86  MOV dword ptr [EBP + -0x4],ECX
004d8a89  MOV EAX,dword ptr [EBP + -0x4]
004d8a8c  MOVSX ECX,word ptr [EAX + 0x1e6]
004d8a93  MOV dword ptr [EBP + -0x8],ECX
004d8a96  FILD dword ptr [EBP + -0x8]
004d8a99  FDIV double ptr [0x006b4b00]
004d8a9f  MOV ESP,EBP
004d8aa1  POP EBP
004d8aa2  RET

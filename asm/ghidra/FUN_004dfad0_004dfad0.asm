; FUN_004dfad0  004dfad0
004dfad0  PUSH EBP
004dfad1  MOV EBP,ESP
004dfad3  SUB ESP,0x8
004dfad6  MOV dword ptr [EBP + -0x4],ECX
004dfad9  MOV EAX,dword ptr [EBP + -0x4]
004dfadc  MOVSX ECX,word ptr [EAX + 0x214]
004dfae3  MOV dword ptr [EBP + -0x8],ECX
004dfae6  FILD dword ptr [EBP + -0x8]
004dfae9  FDIV double ptr [0x006b4b00]
004dfaef  MOV ESP,EBP
004dfaf1  POP EBP
004dfaf2  RET

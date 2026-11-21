; FUN_004cbe30  004cbe30
004cbe30  PUSH EBP
004cbe31  MOV EBP,ESP
004cbe33  SUB ESP,0x8
004cbe36  MOV dword ptr [EBP + -0x4],ECX
004cbe39  MOV EAX,dword ptr [EBP + -0x4]
004cbe3c  MOVSX ECX,word ptr [EAX + 0x118]
004cbe43  MOV dword ptr [EBP + -0x8],ECX
004cbe46  FILD dword ptr [EBP + -0x8]
004cbe49  FDIV double ptr [0x006b4b00]
004cbe4f  MOV ESP,EBP
004cbe51  POP EBP
004cbe52  RET

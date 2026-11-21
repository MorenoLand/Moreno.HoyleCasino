; FUN_004cbe00  004cbe00
004cbe00  PUSH EBP
004cbe01  MOV EBP,ESP
004cbe03  SUB ESP,0x8
004cbe06  MOV dword ptr [EBP + -0x4],ECX
004cbe09  MOV EAX,dword ptr [EBP + -0x4]
004cbe0c  MOVSX ECX,word ptr [EAX + 0x112]
004cbe13  MOV dword ptr [EBP + -0x8],ECX
004cbe16  FILD dword ptr [EBP + -0x8]
004cbe19  FDIV double ptr [0x006b4b00]
004cbe1f  MOV ESP,EBP
004cbe21  POP EBP
004cbe22  RET

; FUN_004ebaa0  004ebaa0
004ebaa0  PUSH EBP
004ebaa1  MOV EBP,ESP
004ebaa3  SUB ESP,0x8
004ebaa6  MOV dword ptr [EBP + -0x4],ECX
004ebaa9  MOV EAX,dword ptr [EBP + -0x4]
004ebaac  MOVSX ECX,word ptr [EAX + 0x346]
004ebab3  MOV dword ptr [EBP + -0x8],ECX
004ebab6  FILD dword ptr [EBP + -0x8]
004ebab9  FDIV double ptr [0x006b4b00]
004ebabf  MOV ESP,EBP
004ebac1  POP EBP
004ebac2  RET

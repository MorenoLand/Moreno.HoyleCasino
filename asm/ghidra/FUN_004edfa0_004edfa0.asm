; FUN_004edfa0  004edfa0
004edfa0  PUSH EBP
004edfa1  MOV EBP,ESP
004edfa3  SUB ESP,0x8
004edfa6  MOV dword ptr [EBP + -0x4],ECX
004edfa9  MOV EAX,dword ptr [EBP + -0x4]
004edfac  MOVSX ECX,word ptr [EAX + 0x374]
004edfb3  MOV dword ptr [EBP + -0x8],ECX
004edfb6  FILD dword ptr [EBP + -0x8]
004edfb9  FDIV double ptr [0x006b4b00]
004edfbf  MOV ESP,EBP
004edfc1  POP EBP
004edfc2  RET

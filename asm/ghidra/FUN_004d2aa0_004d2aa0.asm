; FUN_004d2aa0  004d2aa0
004d2aa0  PUSH EBP
004d2aa1  MOV EBP,ESP
004d2aa3  PUSH ECX
004d2aa4  MOV dword ptr [EBP + -0x4],ECX
004d2aa7  MOV EAX,dword ptr [EBP + -0x4]
004d2aaa  MOVSX ECX,word ptr [EAX + 0x64]
004d2aae  CMP ECX,0x1
004d2ab1  JNZ 0x004d2ac6
004d2ab3  MOV EDX,dword ptr [EBP + -0x4]
004d2ab6  MOVSX EAX,word ptr [EDX + 0x16c]
004d2abd  CDQ
004d2abe  SUB EAX,EDX
004d2ac0  SAR EAX,0x1
004d2ac2  JMP 0x004d2ad0
004d2ac6  MOV EAX,dword ptr [EBP + -0x4]
004d2ac9  MOV AX,word ptr [EAX + 0x16c]
004d2ad0  MOV ESP,EBP
004d2ad2  POP EBP
004d2ad3  RET

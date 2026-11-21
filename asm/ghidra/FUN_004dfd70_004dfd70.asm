; FUN_004dfd70  004dfd70
004dfd70  PUSH EBP
004dfd71  MOV EBP,ESP
004dfd73  SUB ESP,0x14
004dfd76  MOV dword ptr [EBP + -0x4],ECX
004dfd79  MOV EAX,dword ptr [EBP + -0x4]
004dfd7c  MOVSX ECX,word ptr [EAX + 0x64]
004dfd80  TEST ECX,ECX
004dfd82  JNZ 0x004dfda4
004dfd84  MOV EDX,dword ptr [EBP + -0x4]
004dfd87  MOVSX EAX,word ptr [EDX + 0x21e]
004dfd8e  MOV dword ptr [EBP + -0x8],EAX
004dfd91  FILD dword ptr [EBP + -0x8]
004dfd94  FDIV double ptr [0x006b4b00]
004dfd9a  JMP 0x004dfe33
004dfda4  MOV ECX,dword ptr [EBP + -0x4]
004dfda7  MOVSX EDX,word ptr [ECX + 0x64]
004dfdab  CMP EDX,0x1
004dfdae  JNZ 0x004dfdca
004dfdb0  MOV EAX,dword ptr [EBP + -0x4]
004dfdb3  MOVSX ECX,word ptr [EAX + 0x21e]
004dfdba  MOV dword ptr [EBP + -0xc],ECX
004dfdbd  FILD dword ptr [EBP + -0xc]
004dfdc0  FDIV double ptr [0x006bf718]
004dfdc6  JMP 0x004dfe33
004dfdca  MOV EDX,dword ptr [EBP + -0x4]
004dfdcd  MOVSX EAX,word ptr [EDX + 0x64]
004dfdd1  CMP EAX,0x2
004dfdd4  JNZ 0x004dfdf0
004dfdd6  MOV ECX,dword ptr [EBP + -0x4]
004dfdd9  MOVSX EDX,word ptr [ECX + 0x21e]
004dfde0  MOV dword ptr [EBP + -0x10],EDX
004dfde3  FILD dword ptr [EBP + -0x10]
004dfde6  FDIV double ptr [0x006bf710]
004dfdec  JMP 0x004dfe33
004dfdf0  MOV EAX,dword ptr [EBP + -0x4]
004dfdf3  MOVSX ECX,word ptr [EAX + 0x64]
004dfdf7  CMP ECX,0x3
004dfdfa  JNZ 0x004dfe16
004dfdfc  MOV EDX,dword ptr [EBP + -0x4]
004dfdff  MOVSX EAX,word ptr [EDX + 0x21e]
004dfe06  MOV dword ptr [EBP + -0x14],EAX
004dfe09  FILD dword ptr [EBP + -0x14]
004dfe0c  FDIV double ptr [0x006bf708]
004dfe12  JMP 0x004dfe33
004dfe16  XOR ECX,ECX
004dfe18  JNZ 0x004dfe31
004dfe1a  PUSH 0x1fad
004dfe1f  PUSH 0x6bf384
004dfe24  PUSH 0x6b2b64
004dfe29  CALL 0x005e9f20
004dfe2e  ADD ESP,0xc
004dfe31  FLDZ
004dfe33  MOV ESP,EBP
004dfe35  POP EBP
004dfe36  RET

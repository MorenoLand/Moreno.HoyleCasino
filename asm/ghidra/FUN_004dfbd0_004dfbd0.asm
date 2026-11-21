; FUN_004dfbd0  004dfbd0
004dfbd0  PUSH EBP
004dfbd1  MOV EBP,ESP
004dfbd3  SUB ESP,0x14
004dfbd6  MOV dword ptr [EBP + -0x4],ECX
004dfbd9  MOV EAX,dword ptr [EBP + -0x4]
004dfbdc  MOVSX ECX,word ptr [EAX + 0x64]
004dfbe0  TEST ECX,ECX
004dfbe2  JNZ 0x004dfc04
004dfbe4  MOV EDX,dword ptr [EBP + -0x4]
004dfbe7  MOVSX EAX,word ptr [EDX + 0x21a]
004dfbee  MOV dword ptr [EBP + -0x8],EAX
004dfbf1  FILD dword ptr [EBP + -0x8]
004dfbf4  FDIV double ptr [0x006b4b00]
004dfbfa  JMP 0x004dfc93
004dfc04  MOV ECX,dword ptr [EBP + -0x4]
004dfc07  MOVSX EDX,word ptr [ECX + 0x64]
004dfc0b  CMP EDX,0x1
004dfc0e  JNZ 0x004dfc2a
004dfc10  MOV EAX,dword ptr [EBP + -0x4]
004dfc13  MOVSX ECX,word ptr [EAX + 0x21a]
004dfc1a  MOV dword ptr [EBP + -0xc],ECX
004dfc1d  FILD dword ptr [EBP + -0xc]
004dfc20  FDIV double ptr [0x006bf718]
004dfc26  JMP 0x004dfc93
004dfc2a  MOV EDX,dword ptr [EBP + -0x4]
004dfc2d  MOVSX EAX,word ptr [EDX + 0x64]
004dfc31  CMP EAX,0x2
004dfc34  JNZ 0x004dfc50
004dfc36  MOV ECX,dword ptr [EBP + -0x4]
004dfc39  MOVSX EDX,word ptr [ECX + 0x21a]
004dfc40  MOV dword ptr [EBP + -0x10],EDX
004dfc43  FILD dword ptr [EBP + -0x10]
004dfc46  FDIV double ptr [0x006bf710]
004dfc4c  JMP 0x004dfc93
004dfc50  MOV EAX,dword ptr [EBP + -0x4]
004dfc53  MOVSX ECX,word ptr [EAX + 0x64]
004dfc57  CMP ECX,0x3
004dfc5a  JNZ 0x004dfc76
004dfc5c  MOV EDX,dword ptr [EBP + -0x4]
004dfc5f  MOVSX EAX,word ptr [EDX + 0x21a]
004dfc66  MOV dword ptr [EBP + -0x14],EAX
004dfc69  FILD dword ptr [EBP + -0x14]
004dfc6c  FDIV double ptr [0x006bf708]
004dfc72  JMP 0x004dfc93
004dfc76  XOR ECX,ECX
004dfc78  JNZ 0x004dfc91
004dfc7a  PUSH 0x1f8d
004dfc7f  PUSH 0x6bf384
004dfc84  PUSH 0x6b2b64
004dfc89  CALL 0x005e9f20
004dfc8e  ADD ESP,0xc
004dfc91  FLDZ
004dfc93  MOV ESP,EBP
004dfc95  POP EBP
004dfc96  RET

; FUN_004ebad0  004ebad0
004ebad0  PUSH EBP
004ebad1  MOV EBP,ESP
004ebad3  SUB ESP,0x14
004ebad6  MOV dword ptr [EBP + -0x4],ECX
004ebad9  MOV EAX,dword ptr [EBP + -0x4]
004ebadc  MOVSX ECX,word ptr [EAX + 0x64]
004ebae0  TEST ECX,ECX
004ebae2  JNZ 0x004ebb04
004ebae4  MOV EDX,dword ptr [EBP + -0x4]
004ebae7  MOVSX EAX,word ptr [EDX + 0x34a]
004ebaee  MOV dword ptr [EBP + -0x8],EAX
004ebaf1  FILD dword ptr [EBP + -0x8]
004ebaf4  FDIV double ptr [0x006b4b00]
004ebafa  JMP 0x004ebb93
004ebb04  MOV ECX,dword ptr [EBP + -0x4]
004ebb07  MOVSX EDX,word ptr [ECX + 0x64]
004ebb0b  CMP EDX,0x1
004ebb0e  JNZ 0x004ebb2a
004ebb10  MOV EAX,dword ptr [EBP + -0x4]
004ebb13  MOVSX ECX,word ptr [EAX + 0x34a]
004ebb1a  MOV dword ptr [EBP + -0xc],ECX
004ebb1d  FILD dword ptr [EBP + -0xc]
004ebb20  FDIV double ptr [0x006bf718]
004ebb26  JMP 0x004ebb93
004ebb2a  MOV EDX,dword ptr [EBP + -0x4]
004ebb2d  MOVSX EAX,word ptr [EDX + 0x64]
004ebb31  CMP EAX,0x2
004ebb34  JNZ 0x004ebb50
004ebb36  MOV ECX,dword ptr [EBP + -0x4]
004ebb39  MOVSX EDX,word ptr [ECX + 0x34a]
004ebb40  MOV dword ptr [EBP + -0x10],EDX
004ebb43  FILD dword ptr [EBP + -0x10]
004ebb46  FDIV double ptr [0x006bf710]
004ebb4c  JMP 0x004ebb93
004ebb50  MOV EAX,dword ptr [EBP + -0x4]
004ebb53  MOVSX ECX,word ptr [EAX + 0x64]
004ebb57  CMP ECX,0x3
004ebb5a  JNZ 0x004ebb76
004ebb5c  MOV EDX,dword ptr [EBP + -0x4]
004ebb5f  MOVSX EAX,word ptr [EDX + 0x34a]
004ebb66  MOV dword ptr [EBP + -0x14],EAX
004ebb69  FILD dword ptr [EBP + -0x14]
004ebb6c  FDIV double ptr [0x006bf708]
004ebb72  JMP 0x004ebb93
004ebb76  XOR ECX,ECX
004ebb78  JNZ 0x004ebb91
004ebb7a  PUSH 0x28ab
004ebb7f  PUSH 0x6bf384
004ebb84  PUSH 0x6b2b64
004ebb89  CALL 0x005e9f20
004ebb8e  ADD ESP,0xc
004ebb91  FLDZ
004ebb93  MOV ESP,EBP
004ebb95  POP EBP
004ebb96  RET

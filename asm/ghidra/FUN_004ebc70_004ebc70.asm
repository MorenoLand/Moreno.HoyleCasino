; FUN_004ebc70  004ebc70
004ebc70  PUSH EBP
004ebc71  MOV EBP,ESP
004ebc73  SUB ESP,0x14
004ebc76  MOV dword ptr [EBP + -0x4],ECX
004ebc79  MOV EAX,dword ptr [EBP + -0x4]
004ebc7c  MOVSX ECX,word ptr [EAX + 0x64]
004ebc80  TEST ECX,ECX
004ebc82  JNZ 0x004ebca4
004ebc84  MOV EDX,dword ptr [EBP + -0x4]
004ebc87  MOVSX EAX,word ptr [EDX + 0x34e]
004ebc8e  MOV dword ptr [EBP + -0x8],EAX
004ebc91  FILD dword ptr [EBP + -0x8]
004ebc94  FDIV double ptr [0x006b4b00]
004ebc9a  JMP 0x004ebd33
004ebca4  MOV ECX,dword ptr [EBP + -0x4]
004ebca7  MOVSX EDX,word ptr [ECX + 0x64]
004ebcab  CMP EDX,0x1
004ebcae  JNZ 0x004ebcca
004ebcb0  MOV EAX,dword ptr [EBP + -0x4]
004ebcb3  MOVSX ECX,word ptr [EAX + 0x34e]
004ebcba  MOV dword ptr [EBP + -0xc],ECX
004ebcbd  FILD dword ptr [EBP + -0xc]
004ebcc0  FDIV double ptr [0x006bf718]
004ebcc6  JMP 0x004ebd33
004ebcca  MOV EDX,dword ptr [EBP + -0x4]
004ebccd  MOVSX EAX,word ptr [EDX + 0x64]
004ebcd1  CMP EAX,0x2
004ebcd4  JNZ 0x004ebcf0
004ebcd6  MOV ECX,dword ptr [EBP + -0x4]
004ebcd9  MOVSX EDX,word ptr [ECX + 0x34e]
004ebce0  MOV dword ptr [EBP + -0x10],EDX
004ebce3  FILD dword ptr [EBP + -0x10]
004ebce6  FDIV double ptr [0x006bf710]
004ebcec  JMP 0x004ebd33
004ebcf0  MOV EAX,dword ptr [EBP + -0x4]
004ebcf3  MOVSX ECX,word ptr [EAX + 0x64]
004ebcf7  CMP ECX,0x3
004ebcfa  JNZ 0x004ebd16
004ebcfc  MOV EDX,dword ptr [EBP + -0x4]
004ebcff  MOVSX EAX,word ptr [EDX + 0x34e]
004ebd06  MOV dword ptr [EBP + -0x14],EAX
004ebd09  FILD dword ptr [EBP + -0x14]
004ebd0c  FDIV double ptr [0x006bf708]
004ebd12  JMP 0x004ebd33
004ebd16  XOR ECX,ECX
004ebd18  JNZ 0x004ebd31
004ebd1a  PUSH 0x28cb
004ebd1f  PUSH 0x6bf384
004ebd24  PUSH 0x6b2b64
004ebd29  CALL 0x005e9f20
004ebd2e  ADD ESP,0xc
004ebd31  FLDZ
004ebd33  MOV ESP,EBP
004ebd35  POP EBP
004ebd36  RET

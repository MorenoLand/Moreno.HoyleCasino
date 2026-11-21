; FUN_004ebba0  004ebba0
004ebba0  PUSH EBP
004ebba1  MOV EBP,ESP
004ebba3  SUB ESP,0x14
004ebba6  MOV dword ptr [EBP + -0x4],ECX
004ebba9  MOV EAX,dword ptr [EBP + -0x4]
004ebbac  MOVSX ECX,word ptr [EAX + 0x64]
004ebbb0  TEST ECX,ECX
004ebbb2  JNZ 0x004ebbd4
004ebbb4  MOV EDX,dword ptr [EBP + -0x4]
004ebbb7  MOVSX EAX,word ptr [EDX + 0x34c]
004ebbbe  MOV dword ptr [EBP + -0x8],EAX
004ebbc1  FILD dword ptr [EBP + -0x8]
004ebbc4  FDIV double ptr [0x006b4b00]
004ebbca  JMP 0x004ebc63
004ebbd4  MOV ECX,dword ptr [EBP + -0x4]
004ebbd7  MOVSX EDX,word ptr [ECX + 0x64]
004ebbdb  CMP EDX,0x1
004ebbde  JNZ 0x004ebbfa
004ebbe0  MOV EAX,dword ptr [EBP + -0x4]
004ebbe3  MOVSX ECX,word ptr [EAX + 0x34c]
004ebbea  MOV dword ptr [EBP + -0xc],ECX
004ebbed  FILD dword ptr [EBP + -0xc]
004ebbf0  FDIV double ptr [0x006bf718]
004ebbf6  JMP 0x004ebc63
004ebbfa  MOV EDX,dword ptr [EBP + -0x4]
004ebbfd  MOVSX EAX,word ptr [EDX + 0x64]
004ebc01  CMP EAX,0x2
004ebc04  JNZ 0x004ebc20
004ebc06  MOV ECX,dword ptr [EBP + -0x4]
004ebc09  MOVSX EDX,word ptr [ECX + 0x34c]
004ebc10  MOV dword ptr [EBP + -0x10],EDX
004ebc13  FILD dword ptr [EBP + -0x10]
004ebc16  FDIV double ptr [0x006bf710]
004ebc1c  JMP 0x004ebc63
004ebc20  MOV EAX,dword ptr [EBP + -0x4]
004ebc23  MOVSX ECX,word ptr [EAX + 0x64]
004ebc27  CMP ECX,0x3
004ebc2a  JNZ 0x004ebc46
004ebc2c  MOV EDX,dword ptr [EBP + -0x4]
004ebc2f  MOVSX EAX,word ptr [EDX + 0x34c]
004ebc36  MOV dword ptr [EBP + -0x14],EAX
004ebc39  FILD dword ptr [EBP + -0x14]
004ebc3c  FDIV double ptr [0x006bf708]
004ebc42  JMP 0x004ebc63
004ebc46  XOR ECX,ECX
004ebc48  JNZ 0x004ebc61
004ebc4a  PUSH 0x28bb
004ebc4f  PUSH 0x6bf384
004ebc54  PUSH 0x6b2b64
004ebc59  CALL 0x005e9f20
004ebc5e  ADD ESP,0xc
004ebc61  FLDZ
004ebc63  MOV ESP,EBP
004ebc65  POP EBP
004ebc66  RET

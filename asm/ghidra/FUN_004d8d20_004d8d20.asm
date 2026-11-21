; FUN_004d8d20  004d8d20
004d8d20  PUSH EBP
004d8d21  MOV EBP,ESP
004d8d23  SUB ESP,0x14
004d8d26  MOV dword ptr [EBP + -0x4],ECX
004d8d29  MOV EAX,dword ptr [EBP + -0x4]
004d8d2c  MOVSX ECX,word ptr [EAX + 0x64]
004d8d30  TEST ECX,ECX
004d8d32  JNZ 0x004d8d54
004d8d34  MOV EDX,dword ptr [EBP + -0x4]
004d8d37  MOVSX EAX,word ptr [EDX + 0x1f0]
004d8d3e  MOV dword ptr [EBP + -0x8],EAX
004d8d41  FILD dword ptr [EBP + -0x8]
004d8d44  FDIV double ptr [0x006b4b00]
004d8d4a  JMP 0x004d8de3
004d8d54  MOV ECX,dword ptr [EBP + -0x4]
004d8d57  MOVSX EDX,word ptr [ECX + 0x64]
004d8d5b  CMP EDX,0x1
004d8d5e  JNZ 0x004d8d7a
004d8d60  MOV EAX,dword ptr [EBP + -0x4]
004d8d63  MOVSX ECX,word ptr [EAX + 0x1f0]
004d8d6a  MOV dword ptr [EBP + -0xc],ECX
004d8d6d  FILD dword ptr [EBP + -0xc]
004d8d70  FDIV double ptr [0x006bf718]
004d8d76  JMP 0x004d8de3
004d8d7a  MOV EDX,dword ptr [EBP + -0x4]
004d8d7d  MOVSX EAX,word ptr [EDX + 0x64]
004d8d81  CMP EAX,0x2
004d8d84  JNZ 0x004d8da0
004d8d86  MOV ECX,dword ptr [EBP + -0x4]
004d8d89  MOVSX EDX,word ptr [ECX + 0x1f0]
004d8d90  MOV dword ptr [EBP + -0x10],EDX
004d8d93  FILD dword ptr [EBP + -0x10]
004d8d96  FDIV double ptr [0x006bf710]
004d8d9c  JMP 0x004d8de3
004d8da0  MOV EAX,dword ptr [EBP + -0x4]
004d8da3  MOVSX ECX,word ptr [EAX + 0x64]
004d8da7  CMP ECX,0x3
004d8daa  JNZ 0x004d8dc6
004d8dac  MOV EDX,dword ptr [EBP + -0x4]
004d8daf  MOVSX EAX,word ptr [EDX + 0x1f0]
004d8db6  MOV dword ptr [EBP + -0x14],EAX
004d8db9  FILD dword ptr [EBP + -0x14]
004d8dbc  FDIV double ptr [0x006bf708]
004d8dc2  JMP 0x004d8de3
004d8dc6  XOR ECX,ECX
004d8dc8  JNZ 0x004d8de1
004d8dca  PUSH 0x1802
004d8dcf  PUSH 0x6bf384
004d8dd4  PUSH 0x6b2b64
004d8dd9  CALL 0x005e9f20
004d8dde  ADD ESP,0xc
004d8de1  FLDZ
004d8de3  MOV ESP,EBP
004d8de5  POP EBP
004d8de6  RET

; FUN_004d8c50  004d8c50
004d8c50  PUSH EBP
004d8c51  MOV EBP,ESP
004d8c53  SUB ESP,0x14
004d8c56  MOV dword ptr [EBP + -0x4],ECX
004d8c59  MOV EAX,dword ptr [EBP + -0x4]
004d8c5c  MOVSX ECX,word ptr [EAX + 0x64]
004d8c60  TEST ECX,ECX
004d8c62  JNZ 0x004d8c84
004d8c64  MOV EDX,dword ptr [EBP + -0x4]
004d8c67  MOVSX EAX,word ptr [EDX + 0x1ee]
004d8c6e  MOV dword ptr [EBP + -0x8],EAX
004d8c71  FILD dword ptr [EBP + -0x8]
004d8c74  FDIV double ptr [0x006b4b00]
004d8c7a  JMP 0x004d8d13
004d8c84  MOV ECX,dword ptr [EBP + -0x4]
004d8c87  MOVSX EDX,word ptr [ECX + 0x64]
004d8c8b  CMP EDX,0x1
004d8c8e  JNZ 0x004d8caa
004d8c90  MOV EAX,dword ptr [EBP + -0x4]
004d8c93  MOVSX ECX,word ptr [EAX + 0x1ee]
004d8c9a  MOV dword ptr [EBP + -0xc],ECX
004d8c9d  FILD dword ptr [EBP + -0xc]
004d8ca0  FDIV double ptr [0x006bf718]
004d8ca6  JMP 0x004d8d13
004d8caa  MOV EDX,dword ptr [EBP + -0x4]
004d8cad  MOVSX EAX,word ptr [EDX + 0x64]
004d8cb1  CMP EAX,0x2
004d8cb4  JNZ 0x004d8cd0
004d8cb6  MOV ECX,dword ptr [EBP + -0x4]
004d8cb9  MOVSX EDX,word ptr [ECX + 0x1ee]
004d8cc0  MOV dword ptr [EBP + -0x10],EDX
004d8cc3  FILD dword ptr [EBP + -0x10]
004d8cc6  FDIV double ptr [0x006bf710]
004d8ccc  JMP 0x004d8d13
004d8cd0  MOV EAX,dword ptr [EBP + -0x4]
004d8cd3  MOVSX ECX,word ptr [EAX + 0x64]
004d8cd7  CMP ECX,0x3
004d8cda  JNZ 0x004d8cf6
004d8cdc  MOV EDX,dword ptr [EBP + -0x4]
004d8cdf  MOVSX EAX,word ptr [EDX + 0x1ee]
004d8ce6  MOV dword ptr [EBP + -0x14],EAX
004d8ce9  FILD dword ptr [EBP + -0x14]
004d8cec  FDIV double ptr [0x006bf708]
004d8cf2  JMP 0x004d8d13
004d8cf6  XOR ECX,ECX
004d8cf8  JNZ 0x004d8d11
004d8cfa  PUSH 0x17f2
004d8cff  PUSH 0x6bf384
004d8d04  PUSH 0x6b2b64
004d8d09  CALL 0x005e9f20
004d8d0e  ADD ESP,0xc
004d8d11  FLDZ
004d8d13  MOV ESP,EBP
004d8d15  POP EBP
004d8d16  RET

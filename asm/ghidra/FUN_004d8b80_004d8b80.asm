; FUN_004d8b80  004d8b80
004d8b80  PUSH EBP
004d8b81  MOV EBP,ESP
004d8b83  SUB ESP,0x14
004d8b86  MOV dword ptr [EBP + -0x4],ECX
004d8b89  MOV EAX,dword ptr [EBP + -0x4]
004d8b8c  MOVSX ECX,word ptr [EAX + 0x64]
004d8b90  TEST ECX,ECX
004d8b92  JNZ 0x004d8bb4
004d8b94  MOV EDX,dword ptr [EBP + -0x4]
004d8b97  MOVSX EAX,word ptr [EDX + 0x1ec]
004d8b9e  MOV dword ptr [EBP + -0x8],EAX
004d8ba1  FILD dword ptr [EBP + -0x8]
004d8ba4  FDIV double ptr [0x006b4b00]
004d8baa  JMP 0x004d8c43
004d8bb4  MOV ECX,dword ptr [EBP + -0x4]
004d8bb7  MOVSX EDX,word ptr [ECX + 0x64]
004d8bbb  CMP EDX,0x1
004d8bbe  JNZ 0x004d8bda
004d8bc0  MOV EAX,dword ptr [EBP + -0x4]
004d8bc3  MOVSX ECX,word ptr [EAX + 0x1ec]
004d8bca  MOV dword ptr [EBP + -0xc],ECX
004d8bcd  FILD dword ptr [EBP + -0xc]
004d8bd0  FDIV double ptr [0x006bf718]
004d8bd6  JMP 0x004d8c43
004d8bda  MOV EDX,dword ptr [EBP + -0x4]
004d8bdd  MOVSX EAX,word ptr [EDX + 0x64]
004d8be1  CMP EAX,0x2
004d8be4  JNZ 0x004d8c00
004d8be6  MOV ECX,dword ptr [EBP + -0x4]
004d8be9  MOVSX EDX,word ptr [ECX + 0x1ec]
004d8bf0  MOV dword ptr [EBP + -0x10],EDX
004d8bf3  FILD dword ptr [EBP + -0x10]
004d8bf6  FDIV double ptr [0x006bf710]
004d8bfc  JMP 0x004d8c43
004d8c00  MOV EAX,dword ptr [EBP + -0x4]
004d8c03  MOVSX ECX,word ptr [EAX + 0x64]
004d8c07  CMP ECX,0x3
004d8c0a  JNZ 0x004d8c26
004d8c0c  MOV EDX,dword ptr [EBP + -0x4]
004d8c0f  MOVSX EAX,word ptr [EDX + 0x1ec]
004d8c16  MOV dword ptr [EBP + -0x14],EAX
004d8c19  FILD dword ptr [EBP + -0x14]
004d8c1c  FDIV double ptr [0x006bf708]
004d8c22  JMP 0x004d8c43
004d8c26  XOR ECX,ECX
004d8c28  JNZ 0x004d8c41
004d8c2a  PUSH 0x17e2
004d8c2f  PUSH 0x6bf384
004d8c34  PUSH 0x6b2b64
004d8c39  CALL 0x005e9f20
004d8c3e  ADD ESP,0xc
004d8c41  FLDZ
004d8c43  MOV ESP,EBP
004d8c45  POP EBP
004d8c46  RET

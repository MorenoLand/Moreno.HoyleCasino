; FUN_004d8ab0  004d8ab0
004d8ab0  PUSH EBP
004d8ab1  MOV EBP,ESP
004d8ab3  SUB ESP,0x14
004d8ab6  MOV dword ptr [EBP + -0x4],ECX
004d8ab9  MOV EAX,dword ptr [EBP + -0x4]
004d8abc  MOVSX ECX,word ptr [EAX + 0x64]
004d8ac0  TEST ECX,ECX
004d8ac2  JNZ 0x004d8ae4
004d8ac4  MOV EDX,dword ptr [EBP + -0x4]
004d8ac7  MOVSX EAX,word ptr [EDX + 0x1ea]
004d8ace  MOV dword ptr [EBP + -0x8],EAX
004d8ad1  FILD dword ptr [EBP + -0x8]
004d8ad4  FDIV double ptr [0x006b4b00]
004d8ada  JMP 0x004d8b73
004d8ae4  MOV ECX,dword ptr [EBP + -0x4]
004d8ae7  MOVSX EDX,word ptr [ECX + 0x64]
004d8aeb  CMP EDX,0x1
004d8aee  JNZ 0x004d8b0a
004d8af0  MOV EAX,dword ptr [EBP + -0x4]
004d8af3  MOVSX ECX,word ptr [EAX + 0x1ea]
004d8afa  MOV dword ptr [EBP + -0xc],ECX
004d8afd  FILD dword ptr [EBP + -0xc]
004d8b00  FDIV double ptr [0x006bf718]
004d8b06  JMP 0x004d8b73
004d8b0a  MOV EDX,dword ptr [EBP + -0x4]
004d8b0d  MOVSX EAX,word ptr [EDX + 0x64]
004d8b11  CMP EAX,0x2
004d8b14  JNZ 0x004d8b30
004d8b16  MOV ECX,dword ptr [EBP + -0x4]
004d8b19  MOVSX EDX,word ptr [ECX + 0x1ea]
004d8b20  MOV dword ptr [EBP + -0x10],EDX
004d8b23  FILD dword ptr [EBP + -0x10]
004d8b26  FDIV double ptr [0x006bf710]
004d8b2c  JMP 0x004d8b73
004d8b30  MOV EAX,dword ptr [EBP + -0x4]
004d8b33  MOVSX ECX,word ptr [EAX + 0x64]
004d8b37  CMP ECX,0x3
004d8b3a  JNZ 0x004d8b56
004d8b3c  MOV EDX,dword ptr [EBP + -0x4]
004d8b3f  MOVSX EAX,word ptr [EDX + 0x1ea]
004d8b46  MOV dword ptr [EBP + -0x14],EAX
004d8b49  FILD dword ptr [EBP + -0x14]
004d8b4c  FDIV double ptr [0x006bf708]
004d8b52  JMP 0x004d8b73
004d8b56  XOR ECX,ECX
004d8b58  JNZ 0x004d8b71
004d8b5a  PUSH 0x17d2
004d8b5f  PUSH 0x6bf384
004d8b64  PUSH 0x6b2b64
004d8b69  CALL 0x005e9f20
004d8b6e  ADD ESP,0xc
004d8b71  FLDZ
004d8b73  MOV ESP,EBP
004d8b75  POP EBP
004d8b76  RET

; FUN_004ee170  004ee170
004ee170  PUSH EBP
004ee171  MOV EBP,ESP
004ee173  SUB ESP,0x14
004ee176  MOV dword ptr [EBP + -0x4],ECX
004ee179  MOV EAX,dword ptr [EBP + -0x4]
004ee17c  MOVSX ECX,word ptr [EAX + 0x64]
004ee180  TEST ECX,ECX
004ee182  JNZ 0x004ee1a4
004ee184  MOV EDX,dword ptr [EBP + -0x4]
004ee187  MOVSX EAX,word ptr [EDX + 0x37c]
004ee18e  MOV dword ptr [EBP + -0x8],EAX
004ee191  FILD dword ptr [EBP + -0x8]
004ee194  FDIV double ptr [0x006b4b00]
004ee19a  JMP 0x004ee233
004ee1a4  MOV ECX,dword ptr [EBP + -0x4]
004ee1a7  MOVSX EDX,word ptr [ECX + 0x64]
004ee1ab  CMP EDX,0x1
004ee1ae  JNZ 0x004ee1ca
004ee1b0  MOV EAX,dword ptr [EBP + -0x4]
004ee1b3  MOVSX ECX,word ptr [EAX + 0x37c]
004ee1ba  MOV dword ptr [EBP + -0xc],ECX
004ee1bd  FILD dword ptr [EBP + -0xc]
004ee1c0  FDIV double ptr [0x006bf718]
004ee1c6  JMP 0x004ee233
004ee1ca  MOV EDX,dword ptr [EBP + -0x4]
004ee1cd  MOVSX EAX,word ptr [EDX + 0x64]
004ee1d1  CMP EAX,0x2
004ee1d4  JNZ 0x004ee1f0
004ee1d6  MOV ECX,dword ptr [EBP + -0x4]
004ee1d9  MOVSX EDX,word ptr [ECX + 0x37c]
004ee1e0  MOV dword ptr [EBP + -0x10],EDX
004ee1e3  FILD dword ptr [EBP + -0x10]
004ee1e6  FDIV double ptr [0x006bf710]
004ee1ec  JMP 0x004ee233
004ee1f0  MOV EAX,dword ptr [EBP + -0x4]
004ee1f3  MOVSX ECX,word ptr [EAX + 0x64]
004ee1f7  CMP ECX,0x3
004ee1fa  JNZ 0x004ee216
004ee1fc  MOV EDX,dword ptr [EBP + -0x4]
004ee1ff  MOVSX EAX,word ptr [EDX + 0x37c]
004ee206  MOV dword ptr [EBP + -0x14],EAX
004ee209  FILD dword ptr [EBP + -0x14]
004ee20c  FDIV double ptr [0x006bf708]
004ee212  JMP 0x004ee233
004ee216  XOR ECX,ECX
004ee218  JNZ 0x004ee231
004ee21a  PUSH 0x2b83
004ee21f  PUSH 0x6bf384
004ee224  PUSH 0x6b2b64
004ee229  CALL 0x005e9f20
004ee22e  ADD ESP,0xc
004ee231  FLDZ
004ee233  MOV ESP,EBP
004ee235  POP EBP
004ee236  RET

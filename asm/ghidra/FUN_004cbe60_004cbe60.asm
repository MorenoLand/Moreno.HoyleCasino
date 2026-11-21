; FUN_004cbe60  004cbe60
004cbe60  PUSH EBP
004cbe61  MOV EBP,ESP
004cbe63  SUB ESP,0x14
004cbe66  MOV dword ptr [EBP + -0x4],ECX
004cbe69  MOV EAX,dword ptr [EBP + -0x4]
004cbe6c  MOVSX ECX,word ptr [EAX + 0x64]
004cbe70  TEST ECX,ECX
004cbe72  JNZ 0x004cbe94
004cbe74  MOV EDX,dword ptr [EBP + -0x4]
004cbe77  MOVSX EAX,word ptr [EDX + 0x11a]
004cbe7e  MOV dword ptr [EBP + -0x8],EAX
004cbe81  FILD dword ptr [EBP + -0x8]
004cbe84  FDIV double ptr [0x006b4b00]
004cbe8a  JMP 0x004cbf23
004cbe94  MOV ECX,dword ptr [EBP + -0x4]
004cbe97  MOVSX EDX,word ptr [ECX + 0x64]
004cbe9b  CMP EDX,0x1
004cbe9e  JNZ 0x004cbeba
004cbea0  MOV EAX,dword ptr [EBP + -0x4]
004cbea3  MOVSX ECX,word ptr [EAX + 0x11a]
004cbeaa  MOV dword ptr [EBP + -0xc],ECX
004cbead  FILD dword ptr [EBP + -0xc]
004cbeb0  FDIV double ptr [0x006bf718]
004cbeb6  JMP 0x004cbf23
004cbeba  MOV EDX,dword ptr [EBP + -0x4]
004cbebd  MOVSX EAX,word ptr [EDX + 0x64]
004cbec1  CMP EAX,0x2
004cbec4  JNZ 0x004cbee0
004cbec6  MOV ECX,dword ptr [EBP + -0x4]
004cbec9  MOVSX EDX,word ptr [ECX + 0x11a]
004cbed0  MOV dword ptr [EBP + -0x10],EDX
004cbed3  FILD dword ptr [EBP + -0x10]
004cbed6  FDIV double ptr [0x006bf710]
004cbedc  JMP 0x004cbf23
004cbee0  MOV EAX,dword ptr [EBP + -0x4]
004cbee3  MOVSX ECX,word ptr [EAX + 0x64]
004cbee7  CMP ECX,0x3
004cbeea  JNZ 0x004cbf06
004cbeec  MOV EDX,dword ptr [EBP + -0x4]
004cbeef  MOVSX EAX,word ptr [EDX + 0x11a]
004cbef6  MOV dword ptr [EBP + -0x14],EAX
004cbef9  FILD dword ptr [EBP + -0x14]
004cbefc  FDIV double ptr [0x006bf708]
004cbf02  JMP 0x004cbf23
004cbf06  XOR ECX,ECX
004cbf08  JNZ 0x004cbf21
004cbf0a  PUSH 0x94b
004cbf0f  PUSH 0x6bf384
004cbf14  PUSH 0x6b2b64
004cbf19  CALL 0x005e9f20
004cbf1e  ADD ESP,0xc
004cbf21  FLDZ
004cbf23  MOV ESP,EBP
004cbf25  POP EBP
004cbf26  RET

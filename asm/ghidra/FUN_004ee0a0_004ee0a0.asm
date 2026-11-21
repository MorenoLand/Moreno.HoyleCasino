; FUN_004ee0a0  004ee0a0
004ee0a0  PUSH EBP
004ee0a1  MOV EBP,ESP
004ee0a3  SUB ESP,0x14
004ee0a6  MOV dword ptr [EBP + -0x4],ECX
004ee0a9  MOV EAX,dword ptr [EBP + -0x4]
004ee0ac  MOVSX ECX,word ptr [EAX + 0x64]
004ee0b0  TEST ECX,ECX
004ee0b2  JNZ 0x004ee0d4
004ee0b4  MOV EDX,dword ptr [EBP + -0x4]
004ee0b7  MOVSX EAX,word ptr [EDX + 0x37a]
004ee0be  MOV dword ptr [EBP + -0x8],EAX
004ee0c1  FILD dword ptr [EBP + -0x8]
004ee0c4  FDIV double ptr [0x006b4b00]
004ee0ca  JMP 0x004ee163
004ee0d4  MOV ECX,dword ptr [EBP + -0x4]
004ee0d7  MOVSX EDX,word ptr [ECX + 0x64]
004ee0db  CMP EDX,0x1
004ee0de  JNZ 0x004ee0fa
004ee0e0  MOV EAX,dword ptr [EBP + -0x4]
004ee0e3  MOVSX ECX,word ptr [EAX + 0x37a]
004ee0ea  MOV dword ptr [EBP + -0xc],ECX
004ee0ed  FILD dword ptr [EBP + -0xc]
004ee0f0  FDIV double ptr [0x006bf718]
004ee0f6  JMP 0x004ee163
004ee0fa  MOV EDX,dword ptr [EBP + -0x4]
004ee0fd  MOVSX EAX,word ptr [EDX + 0x64]
004ee101  CMP EAX,0x2
004ee104  JNZ 0x004ee120
004ee106  MOV ECX,dword ptr [EBP + -0x4]
004ee109  MOVSX EDX,word ptr [ECX + 0x37a]
004ee110  MOV dword ptr [EBP + -0x10],EDX
004ee113  FILD dword ptr [EBP + -0x10]
004ee116  FDIV double ptr [0x006bf710]
004ee11c  JMP 0x004ee163
004ee120  MOV EAX,dword ptr [EBP + -0x4]
004ee123  MOVSX ECX,word ptr [EAX + 0x64]
004ee127  CMP ECX,0x3
004ee12a  JNZ 0x004ee146
004ee12c  MOV EDX,dword ptr [EBP + -0x4]
004ee12f  MOVSX EAX,word ptr [EDX + 0x37a]
004ee136  MOV dword ptr [EBP + -0x14],EAX
004ee139  FILD dword ptr [EBP + -0x14]
004ee13c  FDIV double ptr [0x006bf708]
004ee142  JMP 0x004ee163
004ee146  XOR ECX,ECX
004ee148  JNZ 0x004ee161
004ee14a  PUSH 0x2b73
004ee14f  PUSH 0x6bf384
004ee154  PUSH 0x6b2b64
004ee159  CALL 0x005e9f20
004ee15e  ADD ESP,0xc
004ee161  FLDZ
004ee163  MOV ESP,EBP
004ee165  POP EBP
004ee166  RET

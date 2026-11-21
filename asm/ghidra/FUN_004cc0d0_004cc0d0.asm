; FUN_004cc0d0  004cc0d0
004cc0d0  PUSH EBP
004cc0d1  MOV EBP,ESP
004cc0d3  SUB ESP,0x14
004cc0d6  MOV dword ptr [EBP + -0x4],ECX
004cc0d9  MOV EAX,dword ptr [EBP + -0x4]
004cc0dc  MOVSX ECX,word ptr [EAX + 0x64]
004cc0e0  TEST ECX,ECX
004cc0e2  JNZ 0x004cc104
004cc0e4  MOV EDX,dword ptr [EBP + -0x4]
004cc0e7  MOVSX EAX,word ptr [EDX + 0x120]
004cc0ee  MOV dword ptr [EBP + -0x8],EAX
004cc0f1  FILD dword ptr [EBP + -0x8]
004cc0f4  FDIV double ptr [0x006b4b00]
004cc0fa  JMP 0x004cc193
004cc104  MOV ECX,dword ptr [EBP + -0x4]
004cc107  MOVSX EDX,word ptr [ECX + 0x64]
004cc10b  CMP EDX,0x1
004cc10e  JNZ 0x004cc12a
004cc110  MOV EAX,dword ptr [EBP + -0x4]
004cc113  MOVSX ECX,word ptr [EAX + 0x120]
004cc11a  MOV dword ptr [EBP + -0xc],ECX
004cc11d  FILD dword ptr [EBP + -0xc]
004cc120  FDIV double ptr [0x006bf718]
004cc126  JMP 0x004cc193
004cc12a  MOV EDX,dword ptr [EBP + -0x4]
004cc12d  MOVSX EAX,word ptr [EDX + 0x64]
004cc131  CMP EAX,0x2
004cc134  JNZ 0x004cc150
004cc136  MOV ECX,dword ptr [EBP + -0x4]
004cc139  MOVSX EDX,word ptr [ECX + 0x120]
004cc140  MOV dword ptr [EBP + -0x10],EDX
004cc143  FILD dword ptr [EBP + -0x10]
004cc146  FDIV double ptr [0x006bf710]
004cc14c  JMP 0x004cc193
004cc150  MOV EAX,dword ptr [EBP + -0x4]
004cc153  MOVSX ECX,word ptr [EAX + 0x64]
004cc157  CMP ECX,0x3
004cc15a  JNZ 0x004cc176
004cc15c  MOV EDX,dword ptr [EBP + -0x4]
004cc15f  MOVSX EAX,word ptr [EDX + 0x120]
004cc166  MOV dword ptr [EBP + -0x14],EAX
004cc169  FILD dword ptr [EBP + -0x14]
004cc16c  FDIV double ptr [0x006bf708]
004cc172  JMP 0x004cc193
004cc176  XOR ECX,ECX
004cc178  JNZ 0x004cc191
004cc17a  PUSH 0x97b
004cc17f  PUSH 0x6bf384
004cc184  PUSH 0x6b2b64
004cc189  CALL 0x005e9f20
004cc18e  ADD ESP,0xc
004cc191  FLDZ
004cc193  MOV ESP,EBP
004cc195  POP EBP
004cc196  RET

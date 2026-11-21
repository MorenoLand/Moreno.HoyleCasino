; FUN_004f2cb0  004f2cb0
004f2cb0  PUSH EBP
004f2cb1  MOV EBP,ESP
004f2cb3  SUB ESP,0x14
004f2cb6  MOV dword ptr [EBP + -0x4],ECX
004f2cb9  MOV EAX,dword ptr [EBP + -0x4]
004f2cbc  MOVSX ECX,word ptr [EAX + 0x64]
004f2cc0  TEST ECX,ECX
004f2cc2  JNZ 0x004f2ce4
004f2cc4  MOV EDX,dword ptr [EBP + -0x4]
004f2cc7  MOVSX EAX,word ptr [EDX + 0x3dc]
004f2cce  MOV dword ptr [EBP + -0x8],EAX
004f2cd1  FILD dword ptr [EBP + -0x8]
004f2cd4  FDIV double ptr [0x006b4b00]
004f2cda  JMP 0x004f2d73
004f2ce4  MOV ECX,dword ptr [EBP + -0x4]
004f2ce7  MOVSX EDX,word ptr [ECX + 0x64]
004f2ceb  CMP EDX,0x1
004f2cee  JNZ 0x004f2d0a
004f2cf0  MOV EAX,dword ptr [EBP + -0x4]
004f2cf3  MOVSX ECX,word ptr [EAX + 0x3dc]
004f2cfa  MOV dword ptr [EBP + -0xc],ECX
004f2cfd  FILD dword ptr [EBP + -0xc]
004f2d00  FDIV double ptr [0x006bf718]
004f2d06  JMP 0x004f2d73
004f2d0a  MOV EDX,dword ptr [EBP + -0x4]
004f2d0d  MOVSX EAX,word ptr [EDX + 0x64]
004f2d11  CMP EAX,0x2
004f2d14  JNZ 0x004f2d30
004f2d16  MOV ECX,dword ptr [EBP + -0x4]
004f2d19  MOVSX EDX,word ptr [ECX + 0x3dc]
004f2d20  MOV dword ptr [EBP + -0x10],EDX
004f2d23  FILD dword ptr [EBP + -0x10]
004f2d26  FDIV double ptr [0x006bf710]
004f2d2c  JMP 0x004f2d73
004f2d30  MOV EAX,dword ptr [EBP + -0x4]
004f2d33  MOVSX ECX,word ptr [EAX + 0x64]
004f2d37  CMP ECX,0x3
004f2d3a  JNZ 0x004f2d56
004f2d3c  MOV EDX,dword ptr [EBP + -0x4]
004f2d3f  MOVSX EAX,word ptr [EDX + 0x3dc]
004f2d46  MOV dword ptr [EBP + -0x14],EAX
004f2d49  FILD dword ptr [EBP + -0x14]
004f2d4c  FDIV double ptr [0x006bf708]
004f2d52  JMP 0x004f2d73
004f2d56  XOR ECX,ECX
004f2d58  JNZ 0x004f2d71
004f2d5a  PUSH 0x3113
004f2d5f  PUSH 0x6bf384
004f2d64  PUSH 0x6b2b64
004f2d69  CALL 0x005e9f20
004f2d6e  ADD ESP,0xc
004f2d71  FLDZ
004f2d73  MOV ESP,EBP
004f2d75  POP EBP
004f2d76  RET

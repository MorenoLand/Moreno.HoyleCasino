; FUN_004edfd0  004edfd0
004edfd0  PUSH EBP
004edfd1  MOV EBP,ESP
004edfd3  SUB ESP,0x14
004edfd6  MOV dword ptr [EBP + -0x4],ECX
004edfd9  MOV EAX,dword ptr [EBP + -0x4]
004edfdc  MOVSX ECX,word ptr [EAX + 0x64]
004edfe0  TEST ECX,ECX
004edfe2  JNZ 0x004ee004
004edfe4  MOV EDX,dword ptr [EBP + -0x4]
004edfe7  MOVSX EAX,word ptr [EDX + 0x378]
004edfee  MOV dword ptr [EBP + -0x8],EAX
004edff1  FILD dword ptr [EBP + -0x8]
004edff4  FDIV double ptr [0x006b4b00]
004edffa  JMP 0x004ee093
004ee004  MOV ECX,dword ptr [EBP + -0x4]
004ee007  MOVSX EDX,word ptr [ECX + 0x64]
004ee00b  CMP EDX,0x1
004ee00e  JNZ 0x004ee02a
004ee010  MOV EAX,dword ptr [EBP + -0x4]
004ee013  MOVSX ECX,word ptr [EAX + 0x378]
004ee01a  MOV dword ptr [EBP + -0xc],ECX
004ee01d  FILD dword ptr [EBP + -0xc]
004ee020  FDIV double ptr [0x006bf718]
004ee026  JMP 0x004ee093
004ee02a  MOV EDX,dword ptr [EBP + -0x4]
004ee02d  MOVSX EAX,word ptr [EDX + 0x64]
004ee031  CMP EAX,0x2
004ee034  JNZ 0x004ee050
004ee036  MOV ECX,dword ptr [EBP + -0x4]
004ee039  MOVSX EDX,word ptr [ECX + 0x378]
004ee040  MOV dword ptr [EBP + -0x10],EDX
004ee043  FILD dword ptr [EBP + -0x10]
004ee046  FDIV double ptr [0x006bf710]
004ee04c  JMP 0x004ee093
004ee050  MOV EAX,dword ptr [EBP + -0x4]
004ee053  MOVSX ECX,word ptr [EAX + 0x64]
004ee057  CMP ECX,0x3
004ee05a  JNZ 0x004ee076
004ee05c  MOV EDX,dword ptr [EBP + -0x4]
004ee05f  MOVSX EAX,word ptr [EDX + 0x378]
004ee066  MOV dword ptr [EBP + -0x14],EAX
004ee069  FILD dword ptr [EBP + -0x14]
004ee06c  FDIV double ptr [0x006bf708]
004ee072  JMP 0x004ee093
004ee076  XOR ECX,ECX
004ee078  JNZ 0x004ee091
004ee07a  PUSH 0x2b63
004ee07f  PUSH 0x6bf384
004ee084  PUSH 0x6b2b64
004ee089  CALL 0x005e9f20
004ee08e  ADD ESP,0xc
004ee091  FLDZ
004ee093  MOV ESP,EBP
004ee095  POP EBP
004ee096  RET

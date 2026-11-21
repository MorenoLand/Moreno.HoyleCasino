; FUN_004cbf30  004cbf30
004cbf30  PUSH EBP
004cbf31  MOV EBP,ESP
004cbf33  SUB ESP,0x14
004cbf36  MOV dword ptr [EBP + -0x4],ECX
004cbf39  MOV EAX,dword ptr [EBP + -0x4]
004cbf3c  MOVSX ECX,word ptr [EAX + 0x64]
004cbf40  TEST ECX,ECX
004cbf42  JNZ 0x004cbf64
004cbf44  MOV EDX,dword ptr [EBP + -0x4]
004cbf47  MOVSX EAX,word ptr [EDX + 0x11c]
004cbf4e  MOV dword ptr [EBP + -0x8],EAX
004cbf51  FILD dword ptr [EBP + -0x8]
004cbf54  FDIV double ptr [0x006b4b00]
004cbf5a  JMP 0x004cbff3
004cbf64  MOV ECX,dword ptr [EBP + -0x4]
004cbf67  MOVSX EDX,word ptr [ECX + 0x64]
004cbf6b  CMP EDX,0x1
004cbf6e  JNZ 0x004cbf8a
004cbf70  MOV EAX,dword ptr [EBP + -0x4]
004cbf73  MOVSX ECX,word ptr [EAX + 0x11c]
004cbf7a  MOV dword ptr [EBP + -0xc],ECX
004cbf7d  FILD dword ptr [EBP + -0xc]
004cbf80  FDIV double ptr [0x006bf718]
004cbf86  JMP 0x004cbff3
004cbf8a  MOV EDX,dword ptr [EBP + -0x4]
004cbf8d  MOVSX EAX,word ptr [EDX + 0x64]
004cbf91  CMP EAX,0x2
004cbf94  JNZ 0x004cbfb0
004cbf96  MOV ECX,dword ptr [EBP + -0x4]
004cbf99  MOVSX EDX,word ptr [ECX + 0x11c]
004cbfa0  MOV dword ptr [EBP + -0x10],EDX
004cbfa3  FILD dword ptr [EBP + -0x10]
004cbfa6  FDIV double ptr [0x006bf710]
004cbfac  JMP 0x004cbff3
004cbfb0  MOV EAX,dword ptr [EBP + -0x4]
004cbfb3  MOVSX ECX,word ptr [EAX + 0x64]
004cbfb7  CMP ECX,0x3
004cbfba  JNZ 0x004cbfd6
004cbfbc  MOV EDX,dword ptr [EBP + -0x4]
004cbfbf  MOVSX EAX,word ptr [EDX + 0x11c]
004cbfc6  MOV dword ptr [EBP + -0x14],EAX
004cbfc9  FILD dword ptr [EBP + -0x14]
004cbfcc  FDIV double ptr [0x006bf708]
004cbfd2  JMP 0x004cbff3
004cbfd6  XOR ECX,ECX
004cbfd8  JNZ 0x004cbff1
004cbfda  PUSH 0x95b
004cbfdf  PUSH 0x6bf384
004cbfe4  PUSH 0x6b2b64
004cbfe9  CALL 0x005e9f20
004cbfee  ADD ESP,0xc
004cbff1  FLDZ
004cbff3  MOV ESP,EBP
004cbff5  POP EBP
004cbff6  RET

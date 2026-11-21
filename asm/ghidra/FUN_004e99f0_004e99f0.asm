; FUN_004e99f0  004e99f0
004e99f0  PUSH EBP
004e99f1  MOV EBP,ESP
004e99f3  SUB ESP,0x14
004e99f6  MOV dword ptr [EBP + -0x4],ECX
004e99f9  MOV EAX,dword ptr [EBP + -0x4]
004e99fc  MOVSX ECX,word ptr [EAX + 0x64]
004e9a00  TEST ECX,ECX
004e9a02  JNZ 0x004e9a2a
004e9a04  MOV EDX,dword ptr [EBP + -0x4]
004e9a07  MOVSX EAX,word ptr [EDX + 0x29c]
004e9a0e  MOV dword ptr [EBP + -0x8],EAX
004e9a11  FILD dword ptr [EBP + -0x8]
004e9a14  FMUL double ptr [0x0071edc8]
004e9a1a  FDIV double ptr [0x006b4b00]
004e9a20  JMP 0x004e9acb
004e9a2a  MOV ECX,dword ptr [EBP + -0x4]
004e9a2d  MOVSX EDX,word ptr [ECX + 0x64]
004e9a31  CMP EDX,0x1
004e9a34  JNZ 0x004e9a56
004e9a36  MOV EAX,dword ptr [EBP + -0x4]
004e9a39  MOVSX ECX,word ptr [EAX + 0x29c]
004e9a40  MOV dword ptr [EBP + -0xc],ECX
004e9a43  FILD dword ptr [EBP + -0xc]
004e9a46  FMUL double ptr [0x0071edc8]
004e9a4c  FDIV double ptr [0x006bf718]
004e9a52  JMP 0x004e9acb
004e9a56  MOV EDX,dword ptr [EBP + -0x4]
004e9a59  MOVSX EAX,word ptr [EDX + 0x64]
004e9a5d  CMP EAX,0x2
004e9a60  JNZ 0x004e9a82
004e9a62  MOV ECX,dword ptr [EBP + -0x4]
004e9a65  MOVSX EDX,word ptr [ECX + 0x29c]
004e9a6c  MOV dword ptr [EBP + -0x10],EDX
004e9a6f  FILD dword ptr [EBP + -0x10]
004e9a72  FMUL double ptr [0x0071edc8]
004e9a78  FDIV double ptr [0x006bf710]
004e9a7e  JMP 0x004e9acb
004e9a82  MOV EAX,dword ptr [EBP + -0x4]
004e9a85  MOVSX ECX,word ptr [EAX + 0x64]
004e9a89  CMP ECX,0x3
004e9a8c  JNZ 0x004e9aae
004e9a8e  MOV EDX,dword ptr [EBP + -0x4]
004e9a91  MOVSX EAX,word ptr [EDX + 0x29c]
004e9a98  MOV dword ptr [EBP + -0x14],EAX
004e9a9b  FILD dword ptr [EBP + -0x14]
004e9a9e  FMUL double ptr [0x0071edc8]
004e9aa4  FDIV double ptr [0x006bf708]
004e9aaa  JMP 0x004e9acb
004e9aae  XOR ECX,ECX
004e9ab0  JNZ 0x004e9ac9
004e9ab2  PUSH 0x264b
004e9ab7  PUSH 0x6bf384
004e9abc  PUSH 0x6b2b64
004e9ac1  CALL 0x005e9f20
004e9ac6  ADD ESP,0xc
004e9ac9  FLDZ
004e9acb  MOV ESP,EBP
004e9acd  POP EBP
004e9ace  RET

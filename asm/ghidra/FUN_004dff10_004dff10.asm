; FUN_004dff10  004dff10
004dff10  PUSH EBP
004dff11  MOV EBP,ESP
004dff13  SUB ESP,0x14
004dff16  MOV dword ptr [EBP + -0x4],ECX
004dff19  MOV EAX,dword ptr [EBP + -0x4]
004dff1c  MOVSX ECX,word ptr [EAX + 0x64]
004dff20  TEST ECX,ECX
004dff22  JNZ 0x004dff44
004dff24  MOV EDX,dword ptr [EBP + -0x4]
004dff27  MOVSX EAX,word ptr [EDX + 0x222]
004dff2e  MOV dword ptr [EBP + -0x8],EAX
004dff31  FILD dword ptr [EBP + -0x8]
004dff34  FDIV double ptr [0x006b4b00]
004dff3a  JMP 0x004dffd3
004dff44  MOV ECX,dword ptr [EBP + -0x4]
004dff47  MOVSX EDX,word ptr [ECX + 0x64]
004dff4b  CMP EDX,0x1
004dff4e  JNZ 0x004dff6a
004dff50  MOV EAX,dword ptr [EBP + -0x4]
004dff53  MOVSX ECX,word ptr [EAX + 0x222]
004dff5a  MOV dword ptr [EBP + -0xc],ECX
004dff5d  FILD dword ptr [EBP + -0xc]
004dff60  FDIV double ptr [0x006bf718]
004dff66  JMP 0x004dffd3
004dff6a  MOV EDX,dword ptr [EBP + -0x4]
004dff6d  MOVSX EAX,word ptr [EDX + 0x64]
004dff71  CMP EAX,0x2
004dff74  JNZ 0x004dff90
004dff76  MOV ECX,dword ptr [EBP + -0x4]
004dff79  MOVSX EDX,word ptr [ECX + 0x222]
004dff80  MOV dword ptr [EBP + -0x10],EDX
004dff83  FILD dword ptr [EBP + -0x10]
004dff86  FDIV double ptr [0x006bf710]
004dff8c  JMP 0x004dffd3
004dff90  MOV EAX,dword ptr [EBP + -0x4]
004dff93  MOVSX ECX,word ptr [EAX + 0x64]
004dff97  CMP ECX,0x3
004dff9a  JNZ 0x004dffb6
004dff9c  MOV EDX,dword ptr [EBP + -0x4]
004dff9f  MOVSX EAX,word ptr [EDX + 0x222]
004dffa6  MOV dword ptr [EBP + -0x14],EAX
004dffa9  FILD dword ptr [EBP + -0x14]
004dffac  FDIV double ptr [0x006bf708]
004dffb2  JMP 0x004dffd3
004dffb6  XOR ECX,ECX
004dffb8  JNZ 0x004dffd1
004dffba  PUSH 0x1fcd
004dffbf  PUSH 0x6bf384
004dffc4  PUSH 0x6b2b64
004dffc9  CALL 0x005e9f20
004dffce  ADD ESP,0xc
004dffd1  FLDZ
004dffd3  MOV ESP,EBP
004dffd5  POP EBP
004dffd6  RET

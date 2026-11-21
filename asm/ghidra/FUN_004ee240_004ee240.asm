; FUN_004ee240  004ee240
004ee240  PUSH EBP
004ee241  MOV EBP,ESP
004ee243  SUB ESP,0x14
004ee246  MOV dword ptr [EBP + -0x4],ECX
004ee249  MOV EAX,dword ptr [EBP + -0x4]
004ee24c  MOVSX ECX,word ptr [EAX + 0x64]
004ee250  TEST ECX,ECX
004ee252  JNZ 0x004ee274
004ee254  MOV EDX,dword ptr [EBP + -0x4]
004ee257  MOVSX EAX,word ptr [EDX + 0x37e]
004ee25e  MOV dword ptr [EBP + -0x8],EAX
004ee261  FILD dword ptr [EBP + -0x8]
004ee264  FDIV double ptr [0x006b4b00]
004ee26a  JMP 0x004ee303
004ee274  MOV ECX,dword ptr [EBP + -0x4]
004ee277  MOVSX EDX,word ptr [ECX + 0x64]
004ee27b  CMP EDX,0x1
004ee27e  JNZ 0x004ee29a
004ee280  MOV EAX,dword ptr [EBP + -0x4]
004ee283  MOVSX ECX,word ptr [EAX + 0x37e]
004ee28a  MOV dword ptr [EBP + -0xc],ECX
004ee28d  FILD dword ptr [EBP + -0xc]
004ee290  FDIV double ptr [0x006bf718]
004ee296  JMP 0x004ee303
004ee29a  MOV EDX,dword ptr [EBP + -0x4]
004ee29d  MOVSX EAX,word ptr [EDX + 0x64]
004ee2a1  CMP EAX,0x2
004ee2a4  JNZ 0x004ee2c0
004ee2a6  MOV ECX,dword ptr [EBP + -0x4]
004ee2a9  MOVSX EDX,word ptr [ECX + 0x37e]
004ee2b0  MOV dword ptr [EBP + -0x10],EDX
004ee2b3  FILD dword ptr [EBP + -0x10]
004ee2b6  FDIV double ptr [0x006bf710]
004ee2bc  JMP 0x004ee303
004ee2c0  MOV EAX,dword ptr [EBP + -0x4]
004ee2c3  MOVSX ECX,word ptr [EAX + 0x64]
004ee2c7  CMP ECX,0x3
004ee2ca  JNZ 0x004ee2e6
004ee2cc  MOV EDX,dword ptr [EBP + -0x4]
004ee2cf  MOVSX EAX,word ptr [EDX + 0x37e]
004ee2d6  MOV dword ptr [EBP + -0x14],EAX
004ee2d9  FILD dword ptr [EBP + -0x14]
004ee2dc  FDIV double ptr [0x006bf708]
004ee2e2  JMP 0x004ee303
004ee2e6  XOR ECX,ECX
004ee2e8  JNZ 0x004ee301
004ee2ea  PUSH 0x2b93
004ee2ef  PUSH 0x6bf384
004ee2f4  PUSH 0x6b2b64
004ee2f9  CALL 0x005e9f20
004ee2fe  ADD ESP,0xc
004ee301  FLDZ
004ee303  MOV ESP,EBP
004ee305  POP EBP
004ee306  RET

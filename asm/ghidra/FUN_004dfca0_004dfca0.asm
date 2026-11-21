; FUN_004dfca0  004dfca0
004dfca0  PUSH EBP
004dfca1  MOV EBP,ESP
004dfca3  SUB ESP,0x14
004dfca6  MOV dword ptr [EBP + -0x4],ECX
004dfca9  MOV EAX,dword ptr [EBP + -0x4]
004dfcac  MOVSX ECX,word ptr [EAX + 0x64]
004dfcb0  TEST ECX,ECX
004dfcb2  JNZ 0x004dfcd4
004dfcb4  MOV EDX,dword ptr [EBP + -0x4]
004dfcb7  MOVSX EAX,word ptr [EDX + 0x21c]
004dfcbe  MOV dword ptr [EBP + -0x8],EAX
004dfcc1  FILD dword ptr [EBP + -0x8]
004dfcc4  FDIV double ptr [0x006b4b00]
004dfcca  JMP 0x004dfd63
004dfcd4  MOV ECX,dword ptr [EBP + -0x4]
004dfcd7  MOVSX EDX,word ptr [ECX + 0x64]
004dfcdb  CMP EDX,0x1
004dfcde  JNZ 0x004dfcfa
004dfce0  MOV EAX,dword ptr [EBP + -0x4]
004dfce3  MOVSX ECX,word ptr [EAX + 0x21c]
004dfcea  MOV dword ptr [EBP + -0xc],ECX
004dfced  FILD dword ptr [EBP + -0xc]
004dfcf0  FDIV double ptr [0x006bf718]
004dfcf6  JMP 0x004dfd63
004dfcfa  MOV EDX,dword ptr [EBP + -0x4]
004dfcfd  MOVSX EAX,word ptr [EDX + 0x64]
004dfd01  CMP EAX,0x2
004dfd04  JNZ 0x004dfd20
004dfd06  MOV ECX,dword ptr [EBP + -0x4]
004dfd09  MOVSX EDX,word ptr [ECX + 0x21c]
004dfd10  MOV dword ptr [EBP + -0x10],EDX
004dfd13  FILD dword ptr [EBP + -0x10]
004dfd16  FDIV double ptr [0x006bf710]
004dfd1c  JMP 0x004dfd63
004dfd20  MOV EAX,dword ptr [EBP + -0x4]
004dfd23  MOVSX ECX,word ptr [EAX + 0x64]
004dfd27  CMP ECX,0x3
004dfd2a  JNZ 0x004dfd46
004dfd2c  MOV EDX,dword ptr [EBP + -0x4]
004dfd2f  MOVSX EAX,word ptr [EDX + 0x21c]
004dfd36  MOV dword ptr [EBP + -0x14],EAX
004dfd39  FILD dword ptr [EBP + -0x14]
004dfd3c  FDIV double ptr [0x006bf708]
004dfd42  JMP 0x004dfd63
004dfd46  XOR ECX,ECX
004dfd48  JNZ 0x004dfd61
004dfd4a  PUSH 0x1f9d
004dfd4f  PUSH 0x6bf384
004dfd54  PUSH 0x6b2b64
004dfd59  CALL 0x005e9f20
004dfd5e  ADD ESP,0xc
004dfd61  FLDZ
004dfd63  MOV ESP,EBP
004dfd65  POP EBP
004dfd66  RET

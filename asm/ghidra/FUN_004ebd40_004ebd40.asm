; FUN_004ebd40  004ebd40
004ebd40  PUSH EBP
004ebd41  MOV EBP,ESP
004ebd43  SUB ESP,0x14
004ebd46  MOV dword ptr [EBP + -0x4],ECX
004ebd49  MOV EAX,dword ptr [EBP + -0x4]
004ebd4c  MOVSX ECX,word ptr [EAX + 0x64]
004ebd50  TEST ECX,ECX
004ebd52  JNZ 0x004ebd74
004ebd54  MOV EDX,dword ptr [EBP + -0x4]
004ebd57  MOVSX EAX,word ptr [EDX + 0x350]
004ebd5e  MOV dword ptr [EBP + -0x8],EAX
004ebd61  FILD dword ptr [EBP + -0x8]
004ebd64  FDIV double ptr [0x006b4b00]
004ebd6a  JMP 0x004ebe03
004ebd74  MOV ECX,dword ptr [EBP + -0x4]
004ebd77  MOVSX EDX,word ptr [ECX + 0x64]
004ebd7b  CMP EDX,0x1
004ebd7e  JNZ 0x004ebd9a
004ebd80  MOV EAX,dword ptr [EBP + -0x4]
004ebd83  MOVSX ECX,word ptr [EAX + 0x350]
004ebd8a  MOV dword ptr [EBP + -0xc],ECX
004ebd8d  FILD dword ptr [EBP + -0xc]
004ebd90  FDIV double ptr [0x006bf718]
004ebd96  JMP 0x004ebe03
004ebd9a  MOV EDX,dword ptr [EBP + -0x4]
004ebd9d  MOVSX EAX,word ptr [EDX + 0x64]
004ebda1  CMP EAX,0x2
004ebda4  JNZ 0x004ebdc0
004ebda6  MOV ECX,dword ptr [EBP + -0x4]
004ebda9  MOVSX EDX,word ptr [ECX + 0x350]
004ebdb0  MOV dword ptr [EBP + -0x10],EDX
004ebdb3  FILD dword ptr [EBP + -0x10]
004ebdb6  FDIV double ptr [0x006bf710]
004ebdbc  JMP 0x004ebe03
004ebdc0  MOV EAX,dword ptr [EBP + -0x4]
004ebdc3  MOVSX ECX,word ptr [EAX + 0x64]
004ebdc7  CMP ECX,0x3
004ebdca  JNZ 0x004ebde6
004ebdcc  MOV EDX,dword ptr [EBP + -0x4]
004ebdcf  MOVSX EAX,word ptr [EDX + 0x350]
004ebdd6  MOV dword ptr [EBP + -0x14],EAX
004ebdd9  FILD dword ptr [EBP + -0x14]
004ebddc  FDIV double ptr [0x006bf708]
004ebde2  JMP 0x004ebe03
004ebde6  XOR ECX,ECX
004ebde8  JNZ 0x004ebe01
004ebdea  PUSH 0x28db
004ebdef  PUSH 0x6bf384
004ebdf4  PUSH 0x6b2b64
004ebdf9  CALL 0x005e9f20
004ebdfe  ADD ESP,0xc
004ebe01  FLDZ
004ebe03  MOV ESP,EBP
004ebe05  POP EBP
004ebe06  RET

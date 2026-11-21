; FUN_004dfb00  004dfb00
004dfb00  PUSH EBP
004dfb01  MOV EBP,ESP
004dfb03  SUB ESP,0x14
004dfb06  MOV dword ptr [EBP + -0x4],ECX
004dfb09  MOV EAX,dword ptr [EBP + -0x4]
004dfb0c  MOVSX ECX,word ptr [EAX + 0x64]
004dfb10  TEST ECX,ECX
004dfb12  JNZ 0x004dfb34
004dfb14  MOV EDX,dword ptr [EBP + -0x4]
004dfb17  MOVSX EAX,word ptr [EDX + 0x218]
004dfb1e  MOV dword ptr [EBP + -0x8],EAX
004dfb21  FILD dword ptr [EBP + -0x8]
004dfb24  FDIV double ptr [0x006b4b00]
004dfb2a  JMP 0x004dfbc3
004dfb34  MOV ECX,dword ptr [EBP + -0x4]
004dfb37  MOVSX EDX,word ptr [ECX + 0x64]
004dfb3b  CMP EDX,0x1
004dfb3e  JNZ 0x004dfb5a
004dfb40  MOV EAX,dword ptr [EBP + -0x4]
004dfb43  MOVSX ECX,word ptr [EAX + 0x218]
004dfb4a  MOV dword ptr [EBP + -0xc],ECX
004dfb4d  FILD dword ptr [EBP + -0xc]
004dfb50  FDIV double ptr [0x006bf718]
004dfb56  JMP 0x004dfbc3
004dfb5a  MOV EDX,dword ptr [EBP + -0x4]
004dfb5d  MOVSX EAX,word ptr [EDX + 0x64]
004dfb61  CMP EAX,0x2
004dfb64  JNZ 0x004dfb80
004dfb66  MOV ECX,dword ptr [EBP + -0x4]
004dfb69  MOVSX EDX,word ptr [ECX + 0x218]
004dfb70  MOV dword ptr [EBP + -0x10],EDX
004dfb73  FILD dword ptr [EBP + -0x10]
004dfb76  FDIV double ptr [0x006bf710]
004dfb7c  JMP 0x004dfbc3
004dfb80  MOV EAX,dword ptr [EBP + -0x4]
004dfb83  MOVSX ECX,word ptr [EAX + 0x64]
004dfb87  CMP ECX,0x3
004dfb8a  JNZ 0x004dfba6
004dfb8c  MOV EDX,dword ptr [EBP + -0x4]
004dfb8f  MOVSX EAX,word ptr [EDX + 0x218]
004dfb96  MOV dword ptr [EBP + -0x14],EAX
004dfb99  FILD dword ptr [EBP + -0x14]
004dfb9c  FDIV double ptr [0x006bf708]
004dfba2  JMP 0x004dfbc3
004dfba6  XOR ECX,ECX
004dfba8  JNZ 0x004dfbc1
004dfbaa  PUSH 0x1f7d
004dfbaf  PUSH 0x6bf384
004dfbb4  PUSH 0x6b2b64
004dfbb9  CALL 0x005e9f20
004dfbbe  ADD ESP,0xc
004dfbc1  FLDZ
004dfbc3  MOV ESP,EBP
004dfbc5  POP EBP
004dfbc6  RET

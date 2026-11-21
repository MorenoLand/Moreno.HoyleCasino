; FUN_004dfe40  004dfe40
004dfe40  PUSH EBP
004dfe41  MOV EBP,ESP
004dfe43  SUB ESP,0x14
004dfe46  MOV dword ptr [EBP + -0x4],ECX
004dfe49  MOV EAX,dword ptr [EBP + -0x4]
004dfe4c  MOVSX ECX,word ptr [EAX + 0x64]
004dfe50  TEST ECX,ECX
004dfe52  JNZ 0x004dfe74
004dfe54  MOV EDX,dword ptr [EBP + -0x4]
004dfe57  MOVSX EAX,word ptr [EDX + 0x220]
004dfe5e  MOV dword ptr [EBP + -0x8],EAX
004dfe61  FILD dword ptr [EBP + -0x8]
004dfe64  FDIV double ptr [0x006b4b00]
004dfe6a  JMP 0x004dff03
004dfe74  MOV ECX,dword ptr [EBP + -0x4]
004dfe77  MOVSX EDX,word ptr [ECX + 0x64]
004dfe7b  CMP EDX,0x1
004dfe7e  JNZ 0x004dfe9a
004dfe80  MOV EAX,dword ptr [EBP + -0x4]
004dfe83  MOVSX ECX,word ptr [EAX + 0x220]
004dfe8a  MOV dword ptr [EBP + -0xc],ECX
004dfe8d  FILD dword ptr [EBP + -0xc]
004dfe90  FDIV double ptr [0x006bf718]
004dfe96  JMP 0x004dff03
004dfe9a  MOV EDX,dword ptr [EBP + -0x4]
004dfe9d  MOVSX EAX,word ptr [EDX + 0x64]
004dfea1  CMP EAX,0x2
004dfea4  JNZ 0x004dfec0
004dfea6  MOV ECX,dword ptr [EBP + -0x4]
004dfea9  MOVSX EDX,word ptr [ECX + 0x220]
004dfeb0  MOV dword ptr [EBP + -0x10],EDX
004dfeb3  FILD dword ptr [EBP + -0x10]
004dfeb6  FDIV double ptr [0x006bf710]
004dfebc  JMP 0x004dff03
004dfec0  MOV EAX,dword ptr [EBP + -0x4]
004dfec3  MOVSX ECX,word ptr [EAX + 0x64]
004dfec7  CMP ECX,0x3
004dfeca  JNZ 0x004dfee6
004dfecc  MOV EDX,dword ptr [EBP + -0x4]
004dfecf  MOVSX EAX,word ptr [EDX + 0x220]
004dfed6  MOV dword ptr [EBP + -0x14],EAX
004dfed9  FILD dword ptr [EBP + -0x14]
004dfedc  FDIV double ptr [0x006bf708]
004dfee2  JMP 0x004dff03
004dfee6  XOR ECX,ECX
004dfee8  JNZ 0x004dff01
004dfeea  PUSH 0x1fbd
004dfeef  PUSH 0x6bf384
004dfef4  PUSH 0x6b2b64
004dfef9  CALL 0x005e9f20
004dfefe  ADD ESP,0xc
004dff01  FLDZ
004dff03  MOV ESP,EBP
004dff05  POP EBP
004dff06  RET

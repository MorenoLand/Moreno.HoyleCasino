; FUN_004f2be0  004f2be0
004f2be0  PUSH EBP
004f2be1  MOV EBP,ESP
004f2be3  SUB ESP,0x14
004f2be6  MOV dword ptr [EBP + -0x4],ECX
004f2be9  MOV EAX,dword ptr [EBP + -0x4]
004f2bec  MOVSX ECX,word ptr [EAX + 0x64]
004f2bf0  TEST ECX,ECX
004f2bf2  JNZ 0x004f2c14
004f2bf4  MOV EDX,dword ptr [EBP + -0x4]
004f2bf7  MOVSX EAX,word ptr [EDX + 0x3da]
004f2bfe  MOV dword ptr [EBP + -0x8],EAX
004f2c01  FILD dword ptr [EBP + -0x8]
004f2c04  FDIV double ptr [0x006b4b00]
004f2c0a  JMP 0x004f2ca3
004f2c14  MOV ECX,dword ptr [EBP + -0x4]
004f2c17  MOVSX EDX,word ptr [ECX + 0x64]
004f2c1b  CMP EDX,0x1
004f2c1e  JNZ 0x004f2c3a
004f2c20  MOV EAX,dword ptr [EBP + -0x4]
004f2c23  MOVSX ECX,word ptr [EAX + 0x3da]
004f2c2a  MOV dword ptr [EBP + -0xc],ECX
004f2c2d  FILD dword ptr [EBP + -0xc]
004f2c30  FDIV double ptr [0x006bf718]
004f2c36  JMP 0x004f2ca3
004f2c3a  MOV EDX,dword ptr [EBP + -0x4]
004f2c3d  MOVSX EAX,word ptr [EDX + 0x64]
004f2c41  CMP EAX,0x2
004f2c44  JNZ 0x004f2c60
004f2c46  MOV ECX,dword ptr [EBP + -0x4]
004f2c49  MOVSX EDX,word ptr [ECX + 0x3da]
004f2c50  MOV dword ptr [EBP + -0x10],EDX
004f2c53  FILD dword ptr [EBP + -0x10]
004f2c56  FDIV double ptr [0x006bf710]
004f2c5c  JMP 0x004f2ca3
004f2c60  MOV EAX,dword ptr [EBP + -0x4]
004f2c63  MOVSX ECX,word ptr [EAX + 0x64]
004f2c67  CMP ECX,0x3
004f2c6a  JNZ 0x004f2c86
004f2c6c  MOV EDX,dword ptr [EBP + -0x4]
004f2c6f  MOVSX EAX,word ptr [EDX + 0x3da]
004f2c76  MOV dword ptr [EBP + -0x14],EAX
004f2c79  FILD dword ptr [EBP + -0x14]
004f2c7c  FDIV double ptr [0x006bf708]
004f2c82  JMP 0x004f2ca3
004f2c86  XOR ECX,ECX
004f2c88  JNZ 0x004f2ca1
004f2c8a  PUSH 0x3103
004f2c8f  PUSH 0x6bf384
004f2c94  PUSH 0x6b2b64
004f2c99  CALL 0x005e9f20
004f2c9e  ADD ESP,0xc
004f2ca1  FLDZ
004f2ca3  MOV ESP,EBP
004f2ca5  POP EBP
004f2ca6  RET

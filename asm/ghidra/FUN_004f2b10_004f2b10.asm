; FUN_004f2b10  004f2b10
004f2b10  PUSH EBP
004f2b11  MOV EBP,ESP
004f2b13  SUB ESP,0x14
004f2b16  MOV dword ptr [EBP + -0x4],ECX
004f2b19  MOV EAX,dword ptr [EBP + -0x4]
004f2b1c  MOVSX ECX,word ptr [EAX + 0x64]
004f2b20  TEST ECX,ECX
004f2b22  JNZ 0x004f2b44
004f2b24  MOV EDX,dword ptr [EBP + -0x4]
004f2b27  MOVSX EAX,word ptr [EDX + 0x3d8]
004f2b2e  MOV dword ptr [EBP + -0x8],EAX
004f2b31  FILD dword ptr [EBP + -0x8]
004f2b34  FDIV double ptr [0x006b4b00]
004f2b3a  JMP 0x004f2bd3
004f2b44  MOV ECX,dword ptr [EBP + -0x4]
004f2b47  MOVSX EDX,word ptr [ECX + 0x64]
004f2b4b  CMP EDX,0x1
004f2b4e  JNZ 0x004f2b6a
004f2b50  MOV EAX,dword ptr [EBP + -0x4]
004f2b53  MOVSX ECX,word ptr [EAX + 0x3d8]
004f2b5a  MOV dword ptr [EBP + -0xc],ECX
004f2b5d  FILD dword ptr [EBP + -0xc]
004f2b60  FDIV double ptr [0x006bf718]
004f2b66  JMP 0x004f2bd3
004f2b6a  MOV EDX,dword ptr [EBP + -0x4]
004f2b6d  MOVSX EAX,word ptr [EDX + 0x64]
004f2b71  CMP EAX,0x2
004f2b74  JNZ 0x004f2b90
004f2b76  MOV ECX,dword ptr [EBP + -0x4]
004f2b79  MOVSX EDX,word ptr [ECX + 0x3d8]
004f2b80  MOV dword ptr [EBP + -0x10],EDX
004f2b83  FILD dword ptr [EBP + -0x10]
004f2b86  FDIV double ptr [0x006bf710]
004f2b8c  JMP 0x004f2bd3
004f2b90  MOV EAX,dword ptr [EBP + -0x4]
004f2b93  MOVSX ECX,word ptr [EAX + 0x64]
004f2b97  CMP ECX,0x3
004f2b9a  JNZ 0x004f2bb6
004f2b9c  MOV EDX,dword ptr [EBP + -0x4]
004f2b9f  MOVSX EAX,word ptr [EDX + 0x3d8]
004f2ba6  MOV dword ptr [EBP + -0x14],EAX
004f2ba9  FILD dword ptr [EBP + -0x14]
004f2bac  FDIV double ptr [0x006bf708]
004f2bb2  JMP 0x004f2bd3
004f2bb6  XOR ECX,ECX
004f2bb8  JNZ 0x004f2bd1
004f2bba  PUSH 0x30f3
004f2bbf  PUSH 0x6bf384
004f2bc4  PUSH 0x6b2b64
004f2bc9  CALL 0x005e9f20
004f2bce  ADD ESP,0xc
004f2bd1  FLDZ
004f2bd3  MOV ESP,EBP
004f2bd5  POP EBP
004f2bd6  RET

; FUN_004d6990  004d6990
004d6990  PUSH EBP
004d6991  MOV EBP,ESP
004d6993  SUB ESP,0x14
004d6996  MOV dword ptr [EBP + -0x4],ECX
004d6999  MOV EAX,dword ptr [EBP + -0x4]
004d699c  MOVSX ECX,word ptr [EAX + 0x64]
004d69a0  TEST ECX,ECX
004d69a2  JNZ 0x004d69c4
004d69a4  MOV EDX,dword ptr [EBP + -0x4]
004d69a7  MOVSX EAX,word ptr [EDX + 0x1c4]
004d69ae  MOV dword ptr [EBP + -0x8],EAX
004d69b1  FILD dword ptr [EBP + -0x8]
004d69b4  FDIV double ptr [0x006b4b00]
004d69ba  JMP 0x004d6a53
004d69c4  MOV ECX,dword ptr [EBP + -0x4]
004d69c7  MOVSX EDX,word ptr [ECX + 0x64]
004d69cb  CMP EDX,0x1
004d69ce  JNZ 0x004d69ea
004d69d0  MOV EAX,dword ptr [EBP + -0x4]
004d69d3  MOVSX ECX,word ptr [EAX + 0x1c4]
004d69da  MOV dword ptr [EBP + -0xc],ECX
004d69dd  FILD dword ptr [EBP + -0xc]
004d69e0  FDIV double ptr [0x006bf718]
004d69e6  JMP 0x004d6a53
004d69ea  MOV EDX,dword ptr [EBP + -0x4]
004d69ed  MOVSX EAX,word ptr [EDX + 0x64]
004d69f1  CMP EAX,0x2
004d69f4  JNZ 0x004d6a10
004d69f6  MOV ECX,dword ptr [EBP + -0x4]
004d69f9  MOVSX EDX,word ptr [ECX + 0x1c4]
004d6a00  MOV dword ptr [EBP + -0x10],EDX
004d6a03  FILD dword ptr [EBP + -0x10]
004d6a06  FDIV double ptr [0x006bf710]
004d6a0c  JMP 0x004d6a53
004d6a10  MOV EAX,dword ptr [EBP + -0x4]
004d6a13  MOVSX ECX,word ptr [EAX + 0x64]
004d6a17  CMP ECX,0x3
004d6a1a  JNZ 0x004d6a36
004d6a1c  MOV EDX,dword ptr [EBP + -0x4]
004d6a1f  MOVSX EAX,word ptr [EDX + 0x1c4]
004d6a26  MOV dword ptr [EBP + -0x14],EAX
004d6a29  FILD dword ptr [EBP + -0x14]
004d6a2c  FDIV double ptr [0x006bf708]
004d6a32  JMP 0x004d6a53
004d6a36  XOR ECX,ECX
004d6a38  JNZ 0x004d6a51
004d6a3a  PUSH 0x156a
004d6a3f  PUSH 0x6bf384
004d6a44  PUSH 0x6b2b64
004d6a49  CALL 0x005e9f20
004d6a4e  ADD ESP,0xc
004d6a51  FLDZ
004d6a53  MOV ESP,EBP
004d6a55  POP EBP
004d6a56  RET

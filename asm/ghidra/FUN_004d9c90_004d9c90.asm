; FUN_004d9c90  004d9c90
004d9c90  PUSH EBP
004d9c91  MOV EBP,ESP
004d9c93  SUB ESP,0x3c
004d9c96  PUSH ESI
004d9c97  MOV dword ptr [EBP + -0x1c],ECX
004d9c9a  MOVSX EAX,word ptr [EBP + 0x8]
004d9c9e  TEST EAX,EAX
004d9ca0  JGE 0x004d9cb9
004d9ca2  PUSH 0x18e1
004d9ca7  PUSH 0x6bf384
004d9cac  PUSH 0x6bf888
004d9cb1  CALL 0x005e9f20
004d9cb6  ADD ESP,0xc
004d9cb9  MOVSX ESI,word ptr [EBP + 0x8]
004d9cbd  MOV ECX,dword ptr [0x00791364]
004d9cc3  CALL 0x0047f950
004d9cc8  CMP ESI,EAX
004d9cca  JL 0x004d9ce3
004d9ccc  PUSH 0x18e2
004d9cd1  PUSH 0x6bf384
004d9cd6  PUSH 0x6bf858
004d9cdb  CALL 0x005e9f20
004d9ce0  ADD ESP,0xc
004d9ce3  MOVSX EAX,word ptr [EBP + 0xc]
004d9ce7  CMP EAX,0x2
004d9cea  JGE 0x004d9d03
004d9cec  PUSH 0x18e3
004d9cf1  PUSH 0x6bf384
004d9cf6  PUSH 0x6bf778
004d9cfb  CALL 0x005e9f20
004d9d00  ADD ESP,0xc
004d9d03  MOVSX ESI,word ptr [EBP + 0xc]
004d9d07  MOV ECX,dword ptr [0x00791364]
004d9d0d  CALL 0x0047f950
004d9d12  CMP ESI,EAX
004d9d14  JLE 0x004d9d2d
004d9d16  PUSH 0x18e4
004d9d1b  PUSH 0x6bf384
004d9d20  PUSH 0x6bf740
004d9d25  CALL 0x005e9f20
004d9d2a  ADD ESP,0xc
004d9d2d  MOV EAX,dword ptr [EBP + -0x1c]
004d9d30  MOVSX ECX,word ptr [EAX + 0x1e4]
004d9d37  MOV dword ptr [EBP + -0x20],ECX
004d9d3a  FILD dword ptr [EBP + -0x20]
004d9d3d  FDIV double ptr [0x006b4b00]
004d9d43  MOVSX EDX,word ptr [EBP + 0xc]
004d9d47  MOV dword ptr [EBP + -0x24],EDX
004d9d4a  FILD dword ptr [EBP + -0x24]
004d9d4d  FDIVP
004d9d4f  FSTP double ptr [EBP + -0x18]
004d9d52  MOV EAX,dword ptr [EBP + -0x1c]
004d9d55  MOV ECX,dword ptr [EAX + 0x428]
004d9d5b  MOVSX EDX,word ptr [EBP + 0x8]
004d9d5f  IMUL EDX,EDX,0xe
004d9d62  LEA EAX,[ECX + EDX*0x1 + 0x818]
004d9d69  MOVSX ECX,word ptr [EBP + 0xc]
004d9d6d  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004d9d72  TEST EDX,EDX
004d9d74  JNZ 0x004d9d7e
004d9d76  FLD double ptr [EBP + -0x18]
004d9d79  JMP 0x004d9e4e
004d9d7e  MOV EAX,dword ptr [EBP + -0x1c]
004d9d81  MOV ECX,dword ptr [EAX + 0x428]
004d9d87  MOVSX EDX,word ptr [EBP + 0x8]
004d9d8b  IMUL EDX,EDX,0xe
004d9d8e  LEA EAX,[ECX + EDX*0x1 + 0x818]
004d9d95  MOVSX ECX,word ptr [EBP + 0xc]
004d9d99  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004d9d9e  MOV dword ptr [EBP + -0x28],EDX
004d9da1  FILD dword ptr [EBP + -0x28]
004d9da4  FSTP double ptr [EBP + -0x8]
004d9da7  MOV EAX,dword ptr [EBP + -0x1c]
004d9daa  MOV ECX,dword ptr [EAX + 0x428]
004d9db0  MOVSX EDX,word ptr [EBP + 0x8]
004d9db4  IMUL EDX,EDX,0xe
004d9db7  LEA EAX,[ECX + EDX*0x1 + 0x888]
004d9dbe  MOVSX ECX,word ptr [EBP + 0xc]
004d9dc2  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004d9dc7  MOV dword ptr [EBP + -0x2c],EDX
004d9dca  FILD dword ptr [EBP + -0x2c]
004d9dcd  FSTP double ptr [EBP + -0x10]
004d9dd0  MOV ECX,dword ptr [0x00791eb8]
004d9dd6  CALL 0x005da7b0
004d9ddb  MOVZX EAX,AL
004d9dde  TEST EAX,EAX
004d9de0  JNZ 0x004d9e15
004d9de2  MOV ECX,dword ptr [EBP + -0x1c]
004d9de5  MOVSX EDX,word ptr [ECX + 0x1e8]
004d9dec  MOV dword ptr [EBP + -0x30],EDX
004d9def  FILD dword ptr [EBP + -0x30]
004d9df2  FDIVR double ptr [EBP + -0x10]
004d9df5  FADD double ptr [EBP + -0x18]
004d9df8  MOV EAX,dword ptr [EBP + -0x1c]
004d9dfb  MOVSX ECX,word ptr [EAX + 0x1e8]
004d9e02  MOV dword ptr [EBP + -0x34],ECX
004d9e05  FILD dword ptr [EBP + -0x34]
004d9e08  FDIVR double ptr [EBP + -0x8]
004d9e0b  FLD1
004d9e0d  FADDP
004d9e0f  FDIVP
004d9e11  JMP 0x004d9e4e
004d9e15  MOV EDX,dword ptr [EBP + -0x1c]
004d9e18  MOVSX EAX,word ptr [EDX + 0x1e8]
004d9e1f  CDQ
004d9e20  SUB EAX,EDX
004d9e22  SAR EAX,0x1
004d9e24  MOV dword ptr [EBP + -0x38],EAX
004d9e27  FILD dword ptr [EBP + -0x38]
004d9e2a  FDIVR double ptr [EBP + -0x10]
004d9e2d  FADD double ptr [EBP + -0x18]
004d9e30  MOV EAX,dword ptr [EBP + -0x1c]
004d9e33  MOVSX EAX,word ptr [EAX + 0x1e8]
004d9e3a  CDQ
004d9e3b  SUB EAX,EDX
004d9e3d  SAR EAX,0x1
004d9e3f  MOV dword ptr [EBP + -0x3c],EAX
004d9e42  FILD dword ptr [EBP + -0x3c]
004d9e45  FDIVR double ptr [EBP + -0x8]
004d9e48  FLD1
004d9e4a  FADDP
004d9e4c  FDIVP
004d9e4e  POP ESI
004d9e4f  MOV ESP,EBP
004d9e51  POP EBP
004d9e52  RET 0x8

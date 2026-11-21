; FUN_004d4d30  004d4d30
004d4d30  PUSH EBP
004d4d31  MOV EBP,ESP
004d4d33  SUB ESP,0x3c
004d4d36  PUSH ESI
004d4d37  MOV dword ptr [EBP + -0x1c],ECX
004d4d3a  MOVSX EAX,word ptr [EBP + 0x8]
004d4d3e  TEST EAX,EAX
004d4d40  JGE 0x004d4d59
004d4d42  PUSH 0x12e4
004d4d47  PUSH 0x6bf384
004d4d4c  PUSH 0x6bf888
004d4d51  CALL 0x005e9f20
004d4d56  ADD ESP,0xc
004d4d59  MOVSX ESI,word ptr [EBP + 0x8]
004d4d5d  MOV ECX,dword ptr [0x00791364]
004d4d63  CALL 0x0047f950
004d4d68  CMP ESI,EAX
004d4d6a  JL 0x004d4d83
004d4d6c  PUSH 0x12e5
004d4d71  PUSH 0x6bf384
004d4d76  PUSH 0x6bf858
004d4d7b  CALL 0x005e9f20
004d4d80  ADD ESP,0xc
004d4d83  MOVSX EAX,word ptr [EBP + 0xc]
004d4d87  CMP EAX,0x2
004d4d8a  JGE 0x004d4da3
004d4d8c  PUSH 0x12e6
004d4d91  PUSH 0x6bf384
004d4d96  PUSH 0x6bf778
004d4d9b  CALL 0x005e9f20
004d4da0  ADD ESP,0xc
004d4da3  MOVSX ESI,word ptr [EBP + 0xc]
004d4da7  MOV ECX,dword ptr [0x00791364]
004d4dad  CALL 0x0047f950
004d4db2  CMP ESI,EAX
004d4db4  JLE 0x004d4dcd
004d4db6  PUSH 0x12e7
004d4dbb  PUSH 0x6bf384
004d4dc0  PUSH 0x6bf740
004d4dc5  CALL 0x005e9f20
004d4dca  ADD ESP,0xc
004d4dcd  MOV EAX,dword ptr [EBP + -0x1c]
004d4dd0  MOVSX ECX,word ptr [EAX + 0x17e]
004d4dd7  MOV dword ptr [EBP + -0x20],ECX
004d4dda  FILD dword ptr [EBP + -0x20]
004d4ddd  FDIV double ptr [0x006b4b00]
004d4de3  MOVSX EDX,word ptr [EBP + 0xc]
004d4de7  MOV dword ptr [EBP + -0x24],EDX
004d4dea  FILD dword ptr [EBP + -0x24]
004d4ded  FDIVP
004d4def  FSTP double ptr [EBP + -0x18]
004d4df2  MOV EAX,dword ptr [EBP + -0x1c]
004d4df5  MOV ECX,dword ptr [EAX + 0x428]
004d4dfb  MOVSX EDX,word ptr [EBP + 0x8]
004d4dff  IMUL EDX,EDX,0xe
004d4e02  LEA EAX,[ECX + EDX*0x1 + 0x460]
004d4e09  MOVSX ECX,word ptr [EBP + 0xc]
004d4e0d  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004d4e12  TEST EDX,EDX
004d4e14  JNZ 0x004d4e1e
004d4e16  FLD double ptr [EBP + -0x18]
004d4e19  JMP 0x004d4eee
004d4e1e  MOV EAX,dword ptr [EBP + -0x1c]
004d4e21  MOV ECX,dword ptr [EAX + 0x428]
004d4e27  MOVSX EDX,word ptr [EBP + 0x8]
004d4e2b  IMUL EDX,EDX,0xe
004d4e2e  LEA EAX,[ECX + EDX*0x1 + 0x460]
004d4e35  MOVSX ECX,word ptr [EBP + 0xc]
004d4e39  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004d4e3e  MOV dword ptr [EBP + -0x28],EDX
004d4e41  FILD dword ptr [EBP + -0x28]
004d4e44  FSTP double ptr [EBP + -0x8]
004d4e47  MOV EAX,dword ptr [EBP + -0x1c]
004d4e4a  MOV ECX,dword ptr [EAX + 0x428]
004d4e50  MOVSX EDX,word ptr [EBP + 0x8]
004d4e54  IMUL EDX,EDX,0xe
004d4e57  LEA EAX,[ECX + EDX*0x1 + 0x540]
004d4e5e  MOVSX ECX,word ptr [EBP + 0xc]
004d4e62  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004d4e67  MOV dword ptr [EBP + -0x2c],EDX
004d4e6a  FILD dword ptr [EBP + -0x2c]
004d4e6d  FSTP double ptr [EBP + -0x10]
004d4e70  MOV ECX,dword ptr [0x00791eb8]
004d4e76  CALL 0x005da7b0
004d4e7b  MOVZX EAX,AL
004d4e7e  TEST EAX,EAX
004d4e80  JNZ 0x004d4eb5
004d4e82  MOV ECX,dword ptr [EBP + -0x1c]
004d4e85  MOVSX EDX,word ptr [ECX + 0x182]
004d4e8c  MOV dword ptr [EBP + -0x30],EDX
004d4e8f  FILD dword ptr [EBP + -0x30]
004d4e92  FDIVR double ptr [EBP + -0x10]
004d4e95  FADD double ptr [EBP + -0x18]
004d4e98  MOV EAX,dword ptr [EBP + -0x1c]
004d4e9b  MOVSX ECX,word ptr [EAX + 0x182]
004d4ea2  MOV dword ptr [EBP + -0x34],ECX
004d4ea5  FILD dword ptr [EBP + -0x34]
004d4ea8  FDIVR double ptr [EBP + -0x8]
004d4eab  FLD1
004d4ead  FADDP
004d4eaf  FDIVP
004d4eb1  JMP 0x004d4eee
004d4eb5  MOV EDX,dword ptr [EBP + -0x1c]
004d4eb8  MOVSX EAX,word ptr [EDX + 0x182]
004d4ebf  CDQ
004d4ec0  SUB EAX,EDX
004d4ec2  SAR EAX,0x1
004d4ec4  MOV dword ptr [EBP + -0x38],EAX
004d4ec7  FILD dword ptr [EBP + -0x38]
004d4eca  FDIVR double ptr [EBP + -0x10]
004d4ecd  FADD double ptr [EBP + -0x18]
004d4ed0  MOV EAX,dword ptr [EBP + -0x1c]
004d4ed3  MOVSX EAX,word ptr [EAX + 0x182]
004d4eda  CDQ
004d4edb  SUB EAX,EDX
004d4edd  SAR EAX,0x1
004d4edf  MOV dword ptr [EBP + -0x3c],EAX
004d4ee2  FILD dword ptr [EBP + -0x3c]
004d4ee5  FDIVR double ptr [EBP + -0x8]
004d4ee8  FLD1
004d4eea  FADDP
004d4eec  FDIVP
004d4eee  POP ESI
004d4eef  MOV ESP,EBP
004d4ef1  POP EBP
004d4ef2  RET 0x8

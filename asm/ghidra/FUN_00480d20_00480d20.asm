; FUN_00480d20  00480d20
00480d20  PUSH EBP
00480d21  MOV EBP,ESP
00480d23  SUB ESP,0x1c
00480d26  MOV dword ptr [EBP + -0x1c],ECX
00480d29  MOV dword ptr [EBP + -0x8],0x0
00480d30  MOV EAX,dword ptr [EBP + -0x1c]
00480d33  MOV ECX,dword ptr [EAX + 0xf4]
00480d39  MOV dword ptr [EBP + -0xc],ECX
00480d3c  MOV EDX,dword ptr [EBP + -0x1c]
00480d3f  MOV EAX,dword ptr [EDX + 0xf8]
00480d45  MOV dword ptr [EBP + -0x18],EAX
00480d48  MOV ECX,dword ptr [EBP + -0x1c]
00480d4b  MOV EDX,dword ptr [ECX + 0xfc]
00480d51  MOV dword ptr [EBP + -0x14],EDX
00480d54  MOV EAX,dword ptr [EBP + -0xc]
00480d57  IMUL EAX,EAX,0x180
00480d5d  MOV ECX,dword ptr [EBP + -0x18]
00480d60  IMUL ECX,ECX,0x30
00480d63  LEA EDX,[EAX + ECX*0x1 + 0x7207ec]
00480d6a  MOV EAX,dword ptr [EBP + -0x14]
00480d6d  SUB EAX,0x1
00480d70  SHL EAX,0x4
00480d73  ADD EDX,EAX
00480d75  MOV dword ptr [EBP + -0x8],EDX
00480d78  MOV ECX,dword ptr [EBP + -0x14]
00480d7b  MOV EDX,dword ptr [EBP + -0x1c]
00480d7e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x104]
00480d85  MOV dword ptr [EBP + -0x4],EAX
00480d88  PUSH 0x0
00480d8a  MOV ECX,dword ptr [EBP + -0x1c]
00480d8d  MOV ECX,dword ptr [ECX + 0x28]
00480d90  CALL 0x00466800
00480d95  CMP dword ptr [EBP + -0x4],0x8
00480d99  JGE 0x00480db6
00480d9b  MOV EDX,dword ptr [EBP + -0x1c]
00480d9e  MOV dword ptr [EDX + 0xf0],0xffffffff
00480da8  MOV EAX,dword ptr [EBP + -0x8]
00480dab  MOV ECX,dword ptr [EAX + 0x4]
00480dae  MOV dword ptr [EBP + -0x10],ECX
00480db1  JMP 0x00480e63
00480db6  MOV EAX,dword ptr [EBP + -0x4]
00480db9  SUB EAX,0x1
00480dbc  CDQ
00480dbd  MOV ECX,0x7
00480dc2  IDIV ECX
00480dc4  TEST EDX,EDX
00480dc6  JNZ 0x00480e34
00480dc8  MOV EDX,dword ptr [EBP + -0x1c]
00480dcb  MOV EAX,dword ptr [EDX + 0xf0]
00480dd1  CMP EAX,dword ptr [EBP + -0x4]
00480dd4  JNZ 0x00480e07
00480dd6  MOV ECX,dword ptr [EBP + -0x1c]
00480dd9  CMP dword ptr [ECX + 0xec],0x0
00480de0  JNZ 0x00480df9
00480de2  PUSH 0xb2f
00480de7  PUSH 0x6bc694
00480dec  PUSH 0x6bce6c
00480df1  CALL 0x005e9f20
00480df6  ADD ESP,0xc
00480df9  MOV EAX,dword ptr [EBP + -0x1c]
00480dfc  MOV ECX,dword ptr [EAX + 0xec]
00480e02  MOV dword ptr [EBP + -0x10],ECX
00480e05  JMP 0x00480e25
00480e07  MOV EDX,dword ptr [EBP + -0x1c]
00480e0a  MOV EAX,dword ptr [EBP + -0x4]
00480e0d  MOV dword ptr [EDX + 0xf0],EAX
00480e13  MOV ECX,dword ptr [EBP + -0x1c]
00480e16  MOV EDX,dword ptr [ECX + 0xec]
00480e1c  MOV EAX,dword ptr [EBP + -0x8]
00480e1f  ADD EDX,dword ptr [EAX + 0x8]
00480e22  MOV dword ptr [EBP + -0x10],EDX
00480e25  PUSH 0x1
00480e27  MOV ECX,dword ptr [EBP + -0x1c]
00480e2a  MOV ECX,dword ptr [ECX + 0x28]
00480e2d  CALL 0x00466800
00480e32  JMP 0x00480e63
00480e34  MOV EDX,dword ptr [EBP + -0x1c]
00480e37  CMP dword ptr [EDX + 0xec],0x0
00480e3e  JNZ 0x00480e57
00480e40  PUSH 0xb37
00480e45  PUSH 0x6bc694
00480e4a  PUSH 0x6bce6c
00480e4f  CALL 0x005e9f20
00480e54  ADD ESP,0xc
00480e57  MOV ECX,dword ptr [EBP + -0x1c]
00480e5a  MOV EDX,dword ptr [ECX + 0xec]
00480e60  MOV dword ptr [EBP + -0x10],EDX
00480e63  MOV EAX,dword ptr [EBP + -0x1c]
00480e66  MOV ECX,dword ptr [EBP + -0x10]
00480e69  MOV dword ptr [EAX + 0xec],ECX
00480e6f  MOV EAX,dword ptr [EBP + -0x10]
00480e72  MOV ESP,EBP
00480e74  POP EBP
00480e75  RET

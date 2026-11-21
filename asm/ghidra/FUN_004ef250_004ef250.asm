; FUN_004ef250  004ef250
004ef250  PUSH EBP
004ef251  MOV EBP,ESP
004ef253  SUB ESP,0x3c
004ef256  PUSH ESI
004ef257  MOV dword ptr [EBP + -0x1c],ECX
004ef25a  MOVSX EAX,word ptr [EBP + 0x8]
004ef25e  TEST EAX,EAX
004ef260  JGE 0x004ef279
004ef262  PUSH 0x2c82
004ef267  PUSH 0x6bf384
004ef26c  PUSH 0x6bf888
004ef271  CALL 0x005e9f20
004ef276  ADD ESP,0xc
004ef279  MOVSX ESI,word ptr [EBP + 0x8]
004ef27d  MOV ECX,dword ptr [0x00791364]
004ef283  CALL 0x0047f950
004ef288  CMP ESI,EAX
004ef28a  JL 0x004ef2a3
004ef28c  PUSH 0x2c83
004ef291  PUSH 0x6bf384
004ef296  PUSH 0x6bf858
004ef29b  CALL 0x005e9f20
004ef2a0  ADD ESP,0xc
004ef2a3  MOVSX EAX,word ptr [EBP + 0xc]
004ef2a7  CMP EAX,0x2
004ef2aa  JGE 0x004ef2c3
004ef2ac  PUSH 0x2c84
004ef2b1  PUSH 0x6bf384
004ef2b6  PUSH 0x6bf778
004ef2bb  CALL 0x005e9f20
004ef2c0  ADD ESP,0xc
004ef2c3  MOVSX ESI,word ptr [EBP + 0xc]
004ef2c7  MOV ECX,dword ptr [0x00791364]
004ef2cd  CALL 0x0047f950
004ef2d2  CMP ESI,EAX
004ef2d4  JLE 0x004ef2ed
004ef2d6  PUSH 0x2c85
004ef2db  PUSH 0x6bf384
004ef2e0  PUSH 0x6bf740
004ef2e5  CALL 0x005e9f20
004ef2ea  ADD ESP,0xc
004ef2ed  MOV EAX,dword ptr [EBP + -0x1c]
004ef2f0  MOVSX ECX,word ptr [EAX + 0x372]
004ef2f7  MOV dword ptr [EBP + -0x20],ECX
004ef2fa  FILD dword ptr [EBP + -0x20]
004ef2fd  FDIV double ptr [0x006b4b00]
004ef303  MOVSX EDX,word ptr [EBP + 0xc]
004ef307  MOV dword ptr [EBP + -0x24],EDX
004ef30a  FILD dword ptr [EBP + -0x24]
004ef30d  FDIVP
004ef30f  FSTP double ptr [EBP + -0x18]
004ef312  MOV EAX,dword ptr [EBP + -0x1c]
004ef315  MOV ECX,dword ptr [EAX + 0x428]
004ef31b  MOVSX EDX,word ptr [EBP + 0x8]
004ef31f  IMUL EDX,EDX,0xe
004ef322  LEA EAX,[ECX + EDX*0x1 + 0xb60]
004ef329  MOVSX ECX,word ptr [EBP + 0xc]
004ef32d  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004ef332  TEST EDX,EDX
004ef334  JNZ 0x004ef33e
004ef336  FLD double ptr [EBP + -0x18]
004ef339  JMP 0x004ef40e
004ef33e  MOV EAX,dword ptr [EBP + -0x1c]
004ef341  MOV ECX,dword ptr [EAX + 0x428]
004ef347  MOVSX EDX,word ptr [EBP + 0x8]
004ef34b  IMUL EDX,EDX,0xe
004ef34e  LEA EAX,[ECX + EDX*0x1 + 0xb60]
004ef355  MOVSX ECX,word ptr [EBP + 0xc]
004ef359  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004ef35e  MOV dword ptr [EBP + -0x28],EDX
004ef361  FILD dword ptr [EBP + -0x28]
004ef364  FSTP double ptr [EBP + -0x8]
004ef367  MOV EAX,dword ptr [EBP + -0x1c]
004ef36a  MOV ECX,dword ptr [EAX + 0x428]
004ef370  MOVSX EDX,word ptr [EBP + 0x8]
004ef374  IMUL EDX,EDX,0xe
004ef377  LEA EAX,[ECX + EDX*0x1 + 0xbd0]
004ef37e  MOVSX ECX,word ptr [EBP + 0xc]
004ef382  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004ef387  MOV dword ptr [EBP + -0x2c],EDX
004ef38a  FILD dword ptr [EBP + -0x2c]
004ef38d  FSTP double ptr [EBP + -0x10]
004ef390  MOV ECX,dword ptr [0x00791eb8]
004ef396  CALL 0x005da7b0
004ef39b  MOVZX EAX,AL
004ef39e  TEST EAX,EAX
004ef3a0  JNZ 0x004ef3d5
004ef3a2  MOV ECX,dword ptr [EBP + -0x1c]
004ef3a5  MOVSX EDX,word ptr [ECX + 0x376]
004ef3ac  MOV dword ptr [EBP + -0x30],EDX
004ef3af  FILD dword ptr [EBP + -0x30]
004ef3b2  FDIVR double ptr [EBP + -0x10]
004ef3b5  FADD double ptr [EBP + -0x18]
004ef3b8  MOV EAX,dword ptr [EBP + -0x1c]
004ef3bb  MOVSX ECX,word ptr [EAX + 0x376]
004ef3c2  MOV dword ptr [EBP + -0x34],ECX
004ef3c5  FILD dword ptr [EBP + -0x34]
004ef3c8  FDIVR double ptr [EBP + -0x8]
004ef3cb  FLD1
004ef3cd  FADDP
004ef3cf  FDIVP
004ef3d1  JMP 0x004ef40e
004ef3d5  MOV EDX,dword ptr [EBP + -0x1c]
004ef3d8  MOVSX EAX,word ptr [EDX + 0x376]
004ef3df  CDQ
004ef3e0  SUB EAX,EDX
004ef3e2  SAR EAX,0x1
004ef3e4  MOV dword ptr [EBP + -0x38],EAX
004ef3e7  FILD dword ptr [EBP + -0x38]
004ef3ea  FDIVR double ptr [EBP + -0x10]
004ef3ed  FADD double ptr [EBP + -0x18]
004ef3f0  MOV EAX,dword ptr [EBP + -0x1c]
004ef3f3  MOVSX EAX,word ptr [EAX + 0x376]
004ef3fa  CDQ
004ef3fb  SUB EAX,EDX
004ef3fd  SAR EAX,0x1
004ef3ff  MOV dword ptr [EBP + -0x3c],EAX
004ef402  FILD dword ptr [EBP + -0x3c]
004ef405  FDIVR double ptr [EBP + -0x8]
004ef408  FLD1
004ef40a  FADDP
004ef40c  FDIVP
004ef40e  POP ESI
004ef40f  MOV ESP,EBP
004ef411  POP EBP
004ef412  RET 0x8

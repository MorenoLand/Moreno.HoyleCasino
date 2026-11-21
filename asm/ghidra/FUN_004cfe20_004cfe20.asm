; FUN_004cfe20  004cfe20
004cfe20  PUSH EBP
004cfe21  MOV EBP,ESP
004cfe23  SUB ESP,0x3c
004cfe26  PUSH ESI
004cfe27  MOV dword ptr [EBP + -0x1c],ECX
004cfe2a  MOVSX EAX,word ptr [EBP + 0x8]
004cfe2e  TEST EAX,EAX
004cfe30  JGE 0x004cfe49
004cfe32  PUSH 0xd5e
004cfe37  PUSH 0x6bf384
004cfe3c  PUSH 0x6bf888
004cfe41  CALL 0x005e9f20
004cfe46  ADD ESP,0xc
004cfe49  MOVSX ESI,word ptr [EBP + 0x8]
004cfe4d  MOV ECX,dword ptr [0x00791364]
004cfe53  CALL 0x0047f950
004cfe58  CMP ESI,EAX
004cfe5a  JL 0x004cfe73
004cfe5c  PUSH 0xd5f
004cfe61  PUSH 0x6bf384
004cfe66  PUSH 0x6bf858
004cfe6b  CALL 0x005e9f20
004cfe70  ADD ESP,0xc
004cfe73  MOVSX EAX,word ptr [EBP + 0xc]
004cfe77  CMP EAX,0x2
004cfe7a  JGE 0x004cfe93
004cfe7c  PUSH 0xd60
004cfe81  PUSH 0x6bf384
004cfe86  PUSH 0x6bf778
004cfe8b  CALL 0x005e9f20
004cfe90  ADD ESP,0xc
004cfe93  MOVSX ESI,word ptr [EBP + 0xc]
004cfe97  MOV ECX,dword ptr [0x00791364]
004cfe9d  CALL 0x0047f950
004cfea2  CMP ESI,EAX
004cfea4  JLE 0x004cfebd
004cfea6  PUSH 0xd61
004cfeab  PUSH 0x6bf384
004cfeb0  PUSH 0x6bf740
004cfeb5  CALL 0x005e9f20
004cfeba  ADD ESP,0xc
004cfebd  MOV EAX,dword ptr [EBP + -0x1c]
004cfec0  MOVSX ECX,word ptr [EAX + 0x110]
004cfec7  MOV dword ptr [EBP + -0x20],ECX
004cfeca  FILD dword ptr [EBP + -0x20]
004cfecd  FDIV double ptr [0x006b4b00]
004cfed3  MOVSX EDX,word ptr [EBP + 0xc]
004cfed7  MOV dword ptr [EBP + -0x24],EDX
004cfeda  FILD dword ptr [EBP + -0x24]
004cfedd  FDIVP
004cfedf  FSTP double ptr [EBP + -0x18]
004cfee2  MOVSX EAX,word ptr [EBP + 0x8]
004cfee6  IMUL EAX,EAX,0xe
004cfee9  MOV ECX,dword ptr [EBP + -0x1c]
004cfeec  MOV EDX,dword ptr [ECX + 0x428]
004cfef2  ADD EDX,EAX
004cfef4  MOVSX EAX,word ptr [EBP + 0xc]
004cfef8  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004cfefd  TEST ECX,ECX
004cfeff  JNZ 0x004cff09
004cff01  FLD double ptr [EBP + -0x18]
004cff04  JMP 0x004cffd4
004cff09  MOVSX EDX,word ptr [EBP + 0x8]
004cff0d  IMUL EDX,EDX,0xe
004cff10  MOV EAX,dword ptr [EBP + -0x1c]
004cff13  MOV ECX,dword ptr [EAX + 0x428]
004cff19  ADD ECX,EDX
004cff1b  MOVSX EDX,word ptr [EBP + 0xc]
004cff1f  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x4]
004cff24  MOV dword ptr [EBP + -0x28],EAX
004cff27  FILD dword ptr [EBP + -0x28]
004cff2a  FSTP double ptr [EBP + -0x8]
004cff2d  MOV ECX,dword ptr [EBP + -0x1c]
004cff30  MOV EDX,dword ptr [ECX + 0x428]
004cff36  MOVSX EAX,word ptr [EBP + 0x8]
004cff3a  IMUL EAX,EAX,0xe
004cff3d  LEA ECX,[EDX + EAX*0x1 + 0xe0]
004cff44  MOVSX EDX,word ptr [EBP + 0xc]
004cff48  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x4]
004cff4d  MOV dword ptr [EBP + -0x2c],EAX
004cff50  FILD dword ptr [EBP + -0x2c]
004cff53  FSTP double ptr [EBP + -0x10]
004cff56  MOV ECX,dword ptr [0x00791eb8]
004cff5c  CALL 0x005da7b0
004cff61  MOVZX ECX,AL
004cff64  TEST ECX,ECX
004cff66  JNZ 0x004cff9b
004cff68  MOV EDX,dword ptr [EBP + -0x1c]
004cff6b  MOVSX EAX,word ptr [EDX + 0x116]
004cff72  MOV dword ptr [EBP + -0x30],EAX
004cff75  FILD dword ptr [EBP + -0x30]
004cff78  FDIVR double ptr [EBP + -0x10]
004cff7b  FADD double ptr [EBP + -0x18]
004cff7e  MOV ECX,dword ptr [EBP + -0x1c]
004cff81  MOVSX EDX,word ptr [ECX + 0x116]
004cff88  MOV dword ptr [EBP + -0x34],EDX
004cff8b  FILD dword ptr [EBP + -0x34]
004cff8e  FDIVR double ptr [EBP + -0x8]
004cff91  FLD1
004cff93  FADDP
004cff95  FDIVP
004cff97  JMP 0x004cffd4
004cff9b  MOV EAX,dword ptr [EBP + -0x1c]
004cff9e  MOVSX EAX,word ptr [EAX + 0x116]
004cffa5  CDQ
004cffa6  SUB EAX,EDX
004cffa8  SAR EAX,0x1
004cffaa  MOV dword ptr [EBP + -0x38],EAX
004cffad  FILD dword ptr [EBP + -0x38]
004cffb0  FDIVR double ptr [EBP + -0x10]
004cffb3  FADD double ptr [EBP + -0x18]
004cffb6  MOV ECX,dword ptr [EBP + -0x1c]
004cffb9  MOVSX EAX,word ptr [ECX + 0x116]
004cffc0  CDQ
004cffc1  SUB EAX,EDX
004cffc3  SAR EAX,0x1
004cffc5  MOV dword ptr [EBP + -0x3c],EAX
004cffc8  FILD dword ptr [EBP + -0x3c]
004cffcb  FDIVR double ptr [EBP + -0x8]
004cffce  FLD1
004cffd0  FADDP
004cffd2  FDIVP
004cffd4  POP ESI
004cffd5  MOV ESP,EBP
004cffd7  POP EBP
004cffd8  RET 0x8

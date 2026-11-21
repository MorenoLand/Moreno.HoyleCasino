; FUN_0058f950  0058f950
0058f950  PUSH EBP
0058f951  MOV EBP,ESP
0058f953  SUB ESP,0x8
0058f956  MOV dword ptr [EBP + -0x8],ECX
0058f959  MOV ECX,dword ptr [0x007947e0]
0058f95f  CALL 0x005e10d0
0058f964  MOV dword ptr [EBP + -0x4],EAX
0058f967  MOV EAX,dword ptr [EBP + -0x8]
0058f96a  MOV ECX,dword ptr [EAX + 0x144]
0058f970  CALL 0x0058fb90
0058f975  MOV ECX,dword ptr [EBP + -0x8]
0058f978  MOV ECX,dword ptr [ECX + 0x148]
0058f97e  CALL 0x0058fb90
0058f983  MOV EDX,dword ptr [EBP + -0x8]
0058f986  MOV EAX,dword ptr [EBP + -0x8]
0058f989  MOV ECX,dword ptr [EDX + 0x14c]
0058f98f  CMP ECX,dword ptr [EAX + 0x150]
0058f995  JNZ 0x0058f99c
0058f997  JMP 0x0058face
0058f99c  MOV EDX,dword ptr [EBP + -0x8]
0058f99f  MOV EAX,dword ptr [EDX + 0x174]
0058f9a5  MOV ECX,dword ptr [EAX + 0x3c08]
0058f9ab  MOV EDX,dword ptr [EBP + -0x8]
0058f9ae  MOV EAX,dword ptr [EBP + -0x8]
0058f9b1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x154]
0058f9b8  CMP ECX,dword ptr [EAX + 0x14c]
0058f9be  JNZ 0x0058f9d0
0058f9c0  MOV EDX,dword ptr [EBP + -0x8]
0058f9c3  MOV ECX,dword ptr [EDX + 0x144]
0058f9c9  CALL 0x0058fb90
0058f9ce  JMP 0x0058f9de
0058f9d0  MOV EAX,dword ptr [EBP + -0x8]
0058f9d3  MOV ECX,dword ptr [EAX + 0x144]
0058f9d9  CALL 0x0058fbc0
0058f9de  MOV ECX,dword ptr [EBP + -0x8]
0058f9e1  MOV EDX,dword ptr [ECX + 0x174]
0058f9e7  MOV EAX,dword ptr [EDX + 0x3c08]
0058f9ed  MOV ECX,dword ptr [EBP + -0x8]
0058f9f0  MOV EDX,dword ptr [EBP + -0x8]
0058f9f3  MOV EAX,dword ptr [ECX + EAX*0x4 + 0x154]
0058f9fa  CMP EAX,dword ptr [EDX + 0x150]
0058fa00  JZ 0x0058fa2c
0058fa02  MOV ECX,dword ptr [EBP + -0x8]
0058fa05  MOV EDX,dword ptr [ECX + 0x174]
0058fa0b  MOV EAX,dword ptr [EDX + 0x3c08]
0058fa11  MOV ECX,dword ptr [EBP + -0x8]
0058fa14  MOV EDX,dword ptr [ECX + 0x150]
0058fa1a  SUB EDX,0x3e8
0058fa20  MOV ECX,dword ptr [EBP + -0x8]
0058fa23  CMP dword ptr [ECX + EAX*0x4 + 0x154],EDX
0058fa2a  JNZ 0x0058fa3f
0058fa2c  MOV EDX,dword ptr [EBP + -0x8]
0058fa2f  MOV ECX,dword ptr [EDX + 0x148]
0058fa35  CALL 0x0058fb90
0058fa3a  JMP 0x0058face
0058fa3f  MOV EAX,dword ptr [EBP + -0x8]
0058fa42  MOV ECX,dword ptr [EBP + -0x4]
0058fa45  CMP ECX,dword ptr [EAX + 0x14c]
0058fa4b  JL 0x0058fa5b
0058fa4d  MOV EDX,dword ptr [EBP + -0x8]
0058fa50  MOV EAX,dword ptr [EBP + -0x4]
0058fa53  CMP EAX,dword ptr [EDX + 0x150]
0058fa59  JLE 0x0058fa82
0058fa5b  MOV ECX,dword ptr [EBP + -0x4]
0058fa5e  ADD ECX,0x3e8
0058fa64  MOV EDX,dword ptr [EBP + -0x8]
0058fa67  CMP ECX,dword ptr [EDX + 0x14c]
0058fa6d  JL 0x0058fac0
0058fa6f  MOV EAX,dword ptr [EBP + -0x4]
0058fa72  ADD EAX,0x3e8
0058fa77  MOV ECX,dword ptr [EBP + -0x8]
0058fa7a  CMP EAX,dword ptr [ECX + 0x150]
0058fa80  JG 0x0058fac0
0058fa82  MOV EDX,dword ptr [EBP + -0x8]
0058fa85  MOV EAX,dword ptr [EDX + 0x174]
0058fa8b  MOV ECX,dword ptr [EAX + 0x3c08]
0058fa91  MOV EDX,dword ptr [EBP + -0x8]
0058fa94  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x154]
0058fa9b  CMP EAX,dword ptr [EBP + -0x4]
0058fa9e  JNZ 0x0058fab0
0058faa0  MOV ECX,dword ptr [EBP + -0x8]
0058faa3  MOV ECX,dword ptr [ECX + 0x148]
0058faa9  CALL 0x0058fb90
0058faae  JMP 0x0058fabe
0058fab0  MOV EDX,dword ptr [EBP + -0x8]
0058fab3  MOV ECX,dword ptr [EDX + 0x148]
0058fab9  CALL 0x0058fbc0
0058fabe  JMP 0x0058face
0058fac0  MOV EAX,dword ptr [EBP + -0x8]
0058fac3  MOV ECX,dword ptr [EAX + 0x148]
0058fac9  CALL 0x0058fbc0
0058face  MOV ESP,EBP
0058fad0  POP EBP
0058fad1  RET

; FUN_005bfd30  005bfd30
005bfd30  PUSH EBP
005bfd31  MOV EBP,ESP
005bfd33  SUB ESP,0x78
005bfd36  MOV dword ptr [EBP + -0x70],ECX
005bfd39  MOV EAX,dword ptr [EBP + -0x70]
005bfd3c  CMP dword ptr [EAX + 0x4],0x0
005bfd40  JNZ 0x005bfd4b
005bfd42  MOV dword ptr [EBP + -0x74],0x0
005bfd49  JMP 0x005bfd5d
005bfd4b  MOV ECX,dword ptr [EBP + -0x70]
005bfd4e  MOV EDX,dword ptr [EBP + -0x70]
005bfd51  MOV EAX,dword ptr [ECX + 0x8]
005bfd54  SUB EAX,dword ptr [EDX + 0x4]
005bfd57  SAR EAX,0x2
005bfd5a  MOV dword ptr [EBP + -0x74],EAX
005bfd5d  MOV ECX,dword ptr [EBP + -0x70]
005bfd60  CMP dword ptr [ECX + 0x4],0x0
005bfd64  JNZ 0x005bfd6f
005bfd66  MOV dword ptr [EBP + -0x78],0x0
005bfd6d  JMP 0x005bfd81
005bfd6f  MOV EDX,dword ptr [EBP + -0x70]
005bfd72  MOV EAX,dword ptr [EBP + -0x70]
005bfd75  MOV ECX,dword ptr [EDX + 0xc]
005bfd78  SUB ECX,dword ptr [EAX + 0x4]
005bfd7b  SAR ECX,0x2
005bfd7e  MOV dword ptr [EBP + -0x78],ECX
005bfd81  MOV EDX,dword ptr [EBP + -0x74]
005bfd84  CMP EDX,dword ptr [EBP + -0x78]
005bfd87  JNC 0x005bfdd4
005bfd89  MOV EAX,dword ptr [EBP + -0x70]
005bfd8c  MOV ECX,dword ptr [EAX + 0x8]
005bfd8f  MOV dword ptr [EBP + -0x44],ECX
005bfd92  MOV EDX,dword ptr [EBP + -0x44]
005bfd95  MOV dword ptr [EBP + -0x40],EDX
005bfd98  XOR EAX,EAX
005bfd9a  MOV byte ptr [EBP + -0x11],AL
005bfd9d  MOV CL,byte ptr [EBP + -0x13]
005bfda0  MOV byte ptr [EBP + -0x12],CL
005bfda3  MOV DL,byte ptr [EBP + -0x11]
005bfda6  MOV byte ptr [EBP + -0x39],DL
005bfda9  MOV EAX,dword ptr [EBP + -0x40]
005bfdac  MOV dword ptr [EBP + -0x38],EAX
005bfdaf  MOV ECX,dword ptr [EBP + 0x8]
005bfdb2  PUSH ECX
005bfdb3  PUSH 0x1
005bfdb5  MOV EDX,dword ptr [EBP + -0x38]
005bfdb8  PUSH EDX
005bfdb9  CALL 0x005c0910
005bfdbe  ADD ESP,0xc
005bfdc1  MOV EAX,0x1
005bfdc6  SHL EAX,0x2
005bfdc9  ADD EAX,dword ptr [EBP + -0x44]
005bfdcc  MOV ECX,dword ptr [EBP + -0x70]
005bfdcf  MOV dword ptr [ECX + 0x8],EAX
005bfdd2  JMP 0x005bfe2a
005bfdd4  MOV EDX,dword ptr [EBP + -0x70]
005bfdd7  MOV EAX,dword ptr [EDX + 0x8]
005bfdda  MOV dword ptr [EBP + -0x48],EAX
005bfddd  MOV dword ptr [EBP + -0x8],0x0
005bfde4  CMP dword ptr [EBP + -0x70],0x0
005bfde8  JZ 0x005bfe00
005bfdea  MOV ECX,dword ptr [EBP + -0x70]
005bfded  MOV EDX,dword ptr [ECX + 0x4]
005bfdf0  CMP EDX,dword ptr [EBP + -0x48]
005bfdf3  JA 0x005bfe00
005bfdf5  MOV EAX,dword ptr [EBP + -0x70]
005bfdf8  MOV ECX,dword ptr [EBP + -0x48]
005bfdfb  CMP ECX,dword ptr [EAX + 0x8]
005bfdfe  JBE 0x005bfe06
005bfe00  CALL dword ptr [0x006b2274]
005bfe06  MOV EDX,dword ptr [EBP + -0x70]
005bfe09  MOV dword ptr [EBP + -0x8],EDX
005bfe0c  MOV EAX,dword ptr [EBP + -0x48]
005bfe0f  MOV dword ptr [EBP + -0x4],EAX
005bfe12  MOV ECX,dword ptr [EBP + 0x8]
005bfe15  PUSH ECX
005bfe16  MOV EDX,dword ptr [EBP + -0x4]
005bfe19  PUSH EDX
005bfe1a  MOV EAX,dword ptr [EBP + -0x8]
005bfe1d  PUSH EAX
005bfe1e  LEA ECX,[EBP + -0x10]
005bfe21  PUSH ECX
005bfe22  MOV ECX,dword ptr [EBP + -0x70]
005bfe25  CALL 0x005bfe30
005bfe2a  MOV ESP,EBP
005bfe2c  POP EBP
005bfe2d  RET 0x4

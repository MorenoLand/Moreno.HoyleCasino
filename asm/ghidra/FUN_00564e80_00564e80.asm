; FUN_00564e80  00564e80
00564e80  PUSH EBP
00564e81  MOV EBP,ESP
00564e83  SUB ESP,0xc
00564e86  MOV dword ptr [EBP + -0xc],ECX
00564e89  MOV dword ptr [EBP + -0x4],0x0
00564e90  JMP 0x00564e9b
00564e92  MOV EAX,dword ptr [EBP + -0x4]
00564e95  ADD EAX,0x1
00564e98  MOV dword ptr [EBP + -0x4],EAX
00564e9b  CMP dword ptr [EBP + -0x4],0x31
00564e9f  JGE 0x00564f0b
00564ea1  MOV ECX,dword ptr [EBP + -0x4]
00564ea4  MOV EDX,dword ptr [EBP + -0xc]
00564ea7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
00564eab  MOV ECX,dword ptr [EBP + -0x4]
00564eae  MOV EDX,dword ptr [EBP + -0xc]
00564eb1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
00564eb5  MOV EAX,dword ptr [EAX]
00564eb7  MOV EDX,dword ptr [EAX + 0x70]
00564eba  CALL EDX
00564ebc  MOV dword ptr [EBP + -0x8],0x0
00564ec3  JMP 0x00564ece
00564ec5  MOV EAX,dword ptr [EBP + -0x8]
00564ec8  ADD EAX,0x1
00564ecb  MOV dword ptr [EBP + -0x8],EAX
00564ece  CMP dword ptr [EBP + -0x8],0x5
00564ed2  JGE 0x00564f09
00564ed4  MOV ECX,dword ptr [EBP + -0x4]
00564ed7  IMUL ECX,ECX,0x14
00564eda  MOV EDX,dword ptr [EBP + -0xc]
00564edd  LEA EAX,[EDX + ECX*0x1 + 0xc8]
00564ee4  MOV ECX,dword ptr [EBP + -0x8]
00564ee7  MOV EDX,dword ptr [EAX + ECX*0x4]
00564eea  MOV EAX,dword ptr [EBP + -0x4]
00564eed  IMUL EAX,EAX,0x14
00564ef0  MOV ECX,dword ptr [EBP + -0xc]
00564ef3  LEA EAX,[ECX + EAX*0x1 + 0xc8]
00564efa  MOV ECX,dword ptr [EBP + -0x8]
00564efd  MOV ECX,dword ptr [EAX + ECX*0x4]
00564f00  MOV EDX,dword ptr [EDX]
00564f02  MOV EAX,dword ptr [EDX + 0x70]
00564f05  CALL EAX
00564f07  JMP 0x00564ec5
00564f09  JMP 0x00564e92
00564f0b  MOV ESP,EBP
00564f0d  POP EBP
00564f0e  RET

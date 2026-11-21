; FUN_00664ec0  00664ec0
00664ec0  PUSH EBP
00664ec1  MOV EBP,ESP
00664ec3  SUB ESP,0x14
00664ec6  MOV dword ptr [EBP + -0x14],ECX
00664ec9  MOV EAX,dword ptr [EBP + 0x8]
00664ecc  PUSH EAX
00664ecd  MOV ECX,dword ptr [EBP + -0x14]
00664ed0  CALL 0x00664830
00664ed5  MOV dword ptr [EBP + -0x8],EAX
00664ed8  MOV ECX,dword ptr [EBP + 0x8]
00664edb  PUSH ECX
00664edc  MOV ECX,dword ptr [EBP + -0x14]
00664edf  CALL 0x006647c0
00664ee4  MOV dword ptr [EBP + -0x10],EAX
00664ee7  MOV EDX,dword ptr [EBP + -0x8]
00664eea  MOV EAX,dword ptr [EBP + -0x14]
00664eed  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00664ef1  CALL 0x005eb470
00664ef6  MOV dword ptr [EBP + -0xc],EAX
00664ef9  MOV dword ptr [EBP + -0x4],0x1
00664f00  JMP 0x00664f0b
00664f02  MOV ECX,dword ptr [EBP + -0x4]
00664f05  ADD ECX,0x1
00664f08  MOV dword ptr [EBP + -0x4],ECX
00664f0b  MOV EDX,dword ptr [EBP + -0x4]
00664f0e  CMP EDX,dword ptr [EBP + -0x10]
00664f11  JGE 0x00664f41
00664f13  MOV EAX,dword ptr [EBP + -0x8]
00664f16  ADD EAX,dword ptr [EBP + -0x4]
00664f19  MOV ECX,dword ptr [EBP + -0x14]
00664f1c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
00664f20  CALL 0x005eb470
00664f25  CMP dword ptr [EBP + -0xc],EAX
00664f28  JGE 0x00664f3f
00664f2a  MOV EDX,dword ptr [EBP + -0x8]
00664f2d  ADD EDX,dword ptr [EBP + -0x4]
00664f30  MOV EAX,dword ptr [EBP + -0x14]
00664f33  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00664f37  CALL 0x005eb470
00664f3c  MOV dword ptr [EBP + -0xc],EAX
00664f3f  JMP 0x00664f02
00664f41  MOV EAX,dword ptr [EBP + -0xc]
00664f44  IMUL EAX,EAX,-0x1
00664f47  MOV ESP,EBP
00664f49  POP EBP
00664f4a  RET 0x4

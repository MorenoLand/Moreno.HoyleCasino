; FUN_00554b60  00554b60
00554b60  PUSH EBP
00554b61  MOV EBP,ESP
00554b63  SUB ESP,0x8
00554b66  MOV dword ptr [EBP + -0x8],ECX
00554b69  MOV dword ptr [EBP + -0x4],0x0
00554b70  JMP 0x00554b7b
00554b72  MOV EAX,dword ptr [EBP + -0x4]
00554b75  ADD EAX,0x1
00554b78  MOV dword ptr [EBP + -0x4],EAX
00554b7b  CMP dword ptr [EBP + -0x4],0x5
00554b7f  JGE 0x00554bdf
00554b81  MOV ECX,dword ptr [EBP + -0x4]
00554b84  MOV EDX,dword ptr [EBP + -0x8]
00554b87  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
00554b8b  MOV CX,word ptr [EAX + 0x190]
00554b92  PUSH ECX
00554b93  MOV ECX,dword ptr [0x00793420]
00554b99  CALL 0x005573a0
00554b9e  MOVZX EDX,AL
00554ba1  TEST EDX,EDX
00554ba3  JZ 0x00554bc2
00554ba5  MOV EAX,dword ptr [EBP + -0x4]
00554ba8  MOV ECX,dword ptr [EBP + -0x8]
00554bab  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4c]
00554baf  MOV EAX,dword ptr [EBP + -0x4]
00554bb2  MOV ECX,dword ptr [EBP + -0x8]
00554bb5  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4c]
00554bb9  MOV EDX,dword ptr [EDX]
00554bbb  MOV EAX,dword ptr [EDX + 0x74]
00554bbe  CALL EAX
00554bc0  JMP 0x00554bdd
00554bc2  MOV ECX,dword ptr [EBP + -0x4]
00554bc5  MOV EDX,dword ptr [EBP + -0x8]
00554bc8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4c]
00554bcc  MOV ECX,dword ptr [EBP + -0x4]
00554bcf  MOV EDX,dword ptr [EBP + -0x8]
00554bd2  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4c]
00554bd6  MOV EAX,dword ptr [EAX]
00554bd8  MOV EDX,dword ptr [EAX + 0x70]
00554bdb  CALL EDX
00554bdd  JMP 0x00554b72
00554bdf  MOV ESP,EBP
00554be1  POP EBP
00554be2  RET

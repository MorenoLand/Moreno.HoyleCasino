; FUN_0053fa80  0053fa80
0053fa80  PUSH EBP
0053fa81  MOV EBP,ESP
0053fa83  SUB ESP,0x20
0053fa86  MOV dword ptr [EBP + -0x20],ECX
0053fa89  MOV dword ptr [EBP + -0x4],0xffffffff
0053fa90  CMP dword ptr [0x0163068c],0x0
0053fa97  JNZ 0x0053fa9e
0053fa99  JMP 0x0053fb96
0053fa9e  PUSH 0x32
0053faa0  MOV ECX,dword ptr [0x0163068c]
0053faa6  CALL 0x005fb350
0053faab  MOV dword ptr [EBP + -0x1c],EAX
0053faae  MOV dword ptr [EBP + -0x18],0x0
0053fab5  PUSH 0x33
0053fab7  MOV ECX,dword ptr [0x0163068c]
0053fabd  CALL 0x005fb350
0053fac2  MOV dword ptr [EBP + -0x14],EAX
0053fac5  MOV dword ptr [EBP + -0x10],0x1
0053facc  MOV dword ptr [EBP + -0xc],0x2
0053fad3  MOV dword ptr [EBP + -0x8],0x0
0053fada  JMP 0x0053fae5
0053fadc  MOV EAX,dword ptr [EBP + -0x8]
0053fadf  ADD EAX,0x1
0053fae2  MOV dword ptr [EBP + -0x8],EAX
0053fae5  MOV ECX,dword ptr [EBP + -0x8]
0053fae8  CMP ECX,dword ptr [EBP + -0xc]
0053faeb  JGE 0x0053fb28
0053faed  MOV EDX,dword ptr [EBP + -0x8]
0053faf0  CMP dword ptr [EBP + EDX*0x8 + -0x1c],0x0
0053faf5  JZ 0x0053fb26
0053faf7  MOV EAX,dword ptr [EBP + 0x8]
0053fafa  PUSH EAX
0053fafb  MOV ECX,dword ptr [EBP + -0x8]
0053fafe  MOV EDX,dword ptr [EBP + ECX*0x8 + -0x1c]
0053fb02  MOV EAX,dword ptr [EBP + -0x8]
0053fb05  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x1c]
0053fb09  MOV EDX,dword ptr [EDX]
0053fb0b  MOV EAX,dword ptr [EDX + 0x84]
0053fb11  CALL EAX
0053fb13  MOVZX ECX,AL
0053fb16  TEST ECX,ECX
0053fb18  JZ 0x0053fb26
0053fb1a  MOV EDX,dword ptr [EBP + -0x8]
0053fb1d  MOV EAX,dword ptr [EBP + EDX*0x8 + -0x18]
0053fb21  MOV dword ptr [EBP + -0x4],EAX
0053fb24  JMP 0x0053fb28
0053fb26  JMP 0x0053fadc
0053fb28  CMP dword ptr [EBP + -0x4],-0x1
0053fb2c  JNZ 0x0053fb4e
0053fb2e  MOV ECX,dword ptr [EBP + 0x8]
0053fb31  CMP dword ptr [ECX + 0x18],0x3
0053fb35  JNZ 0x0053fb4c
0053fb37  PUSH 0x6b27f8
0053fb3c  MOV EDX,dword ptr [EBP + -0x20]
0053fb3f  MOV EAX,dword ptr [EDX]
0053fb41  MOV ECX,dword ptr [EBP + -0x20]
0053fb44  MOV EDX,dword ptr [EAX + 0xb4]
0053fb4a  CALL EDX
0053fb4c  JMP 0x0053fb96
0053fb4e  CMP dword ptr [EBP + -0x4],0x0
0053fb52  JNZ 0x0053fb72
0053fb54  PUSH 0x6b312c
0053fb59  CALL 0x00630f40
0053fb5e  ADD ESP,0x4
0053fb61  PUSH EAX
0053fb62  MOV EAX,dword ptr [EBP + -0x20]
0053fb65  MOV EDX,dword ptr [EAX]
0053fb67  MOV ECX,dword ptr [EBP + -0x20]
0053fb6a  MOV EAX,dword ptr [EDX + 0xb4]
0053fb70  CALL EAX
0053fb72  CMP dword ptr [EBP + -0x4],0x1
0053fb76  JNZ 0x0053fb96
0053fb78  PUSH 0x6b310c
0053fb7d  CALL 0x00630f40
0053fb82  ADD ESP,0x4
0053fb85  PUSH EAX
0053fb86  MOV ECX,dword ptr [EBP + -0x20]
0053fb89  MOV EDX,dword ptr [ECX]
0053fb8b  MOV ECX,dword ptr [EBP + -0x20]
0053fb8e  MOV EAX,dword ptr [EDX + 0xb4]
0053fb94  CALL EAX
0053fb96  MOV ESP,EBP
0053fb98  POP EBP
0053fb99  RET 0x4

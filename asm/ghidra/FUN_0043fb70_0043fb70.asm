; FUN_0043fb70  0043fb70
0043fb70  PUSH EBP
0043fb71  MOV EBP,ESP
0043fb73  SUB ESP,0x14
0043fb76  MOV dword ptr [EBP + -0x10],ECX
0043fb79  MOV EAX,dword ptr [EBP + 0xc]
0043fb7c  MOV dword ptr [EBP + -0x14],EAX
0043fb7f  CMP dword ptr [EBP + -0x14],0x3
0043fb83  JA 0x0043fc68
0043fb89  MOV ECX,dword ptr [EBP + -0x14]
0043fb8c  JMP dword ptr [ECX*0x4 + 0x43fc70]
0043fb93  PUSH 0x0
0043fb95  MOV EDX,dword ptr [EBP + 0x8]
0043fb98  MOV EAX,dword ptr [EBP + -0x10]
0043fb9b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0043fb9f  MOV EDX,dword ptr [EBP + 0x8]
0043fba2  MOV EAX,dword ptr [EBP + -0x10]
0043fba5  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4]
0043fba9  MOV EAX,dword ptr [ECX]
0043fbab  MOV ECX,EDX
0043fbad  MOV EDX,dword ptr [EAX + 0xb0]
0043fbb3  CALL EDX
0043fbb5  JMP 0x0043fc68
0043fbba  MOV EAX,dword ptr [EBP + 0x8]
0043fbbd  IMUL EAX,EAX,0x78
0043fbc0  MOV ECX,dword ptr [0x007906f0]
0043fbc6  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x48]
0043fbca  MOV dword ptr [EBP + -0x4],EDX
0043fbcd  MOV EAX,dword ptr [EBP + -0x4]
0043fbd0  SUB EAX,0x2d
0043fbd3  PUSH EAX
0043fbd4  MOV ECX,dword ptr [EBP + 0x8]
0043fbd7  MOV EDX,dword ptr [EBP + -0x10]
0043fbda  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
0043fbde  MOV ECX,dword ptr [EBP + 0x8]
0043fbe1  MOV EDX,dword ptr [EBP + -0x10]
0043fbe4  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0043fbe8  MOV EAX,dword ptr [EAX]
0043fbea  MOV EDX,dword ptr [EAX + 0xb0]
0043fbf0  CALL EDX
0043fbf2  JMP 0x0043fc68
0043fbf4  MOV EAX,dword ptr [EBP + 0x8]
0043fbf7  IMUL EAX,EAX,0x78
0043fbfa  MOV ECX,dword ptr [0x007906f0]
0043fc00  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x48]
0043fc04  MOV dword ptr [EBP + -0x8],EDX
0043fc07  MOV EAX,dword ptr [EBP + -0x8]
0043fc0a  SUB EAX,0x69
0043fc0d  PUSH EAX
0043fc0e  MOV ECX,dword ptr [EBP + 0x8]
0043fc11  MOV EDX,dword ptr [EBP + -0x10]
0043fc14  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
0043fc18  MOV ECX,dword ptr [EBP + 0x8]
0043fc1b  MOV EDX,dword ptr [EBP + -0x10]
0043fc1e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0043fc22  MOV EAX,dword ptr [EAX]
0043fc24  MOV EDX,dword ptr [EAX + 0xb0]
0043fc2a  CALL EDX
0043fc2c  JMP 0x0043fc68
0043fc2e  MOV EAX,dword ptr [EBP + 0x8]
0043fc31  IMUL EAX,EAX,0x78
0043fc34  MOV ECX,dword ptr [0x007906f0]
0043fc3a  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x48]
0043fc3e  MOV dword ptr [EBP + -0xc],EDX
0043fc41  MOV EAX,dword ptr [EBP + -0xc]
0043fc44  SUB EAX,0x87
0043fc49  PUSH EAX
0043fc4a  MOV ECX,dword ptr [EBP + 0x8]
0043fc4d  MOV EDX,dword ptr [EBP + -0x10]
0043fc50  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
0043fc54  MOV ECX,dword ptr [EBP + 0x8]
0043fc57  MOV EDX,dword ptr [EBP + -0x10]
0043fc5a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0043fc5e  MOV EAX,dword ptr [EAX]
0043fc60  MOV EDX,dword ptr [EAX + 0xb0]
0043fc66  CALL EDX
0043fc68  MOV ESP,EBP
0043fc6a  POP EBP
0043fc6b  RET 0x8

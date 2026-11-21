; FUN_0065fb70  0065fb70
0065fb70  PUSH EBP
0065fb71  MOV EBP,ESP
0065fb73  SUB ESP,0x24
0065fb76  MOV dword ptr [EBP + -0x1c],ECX
0065fb79  PUSH 0x0
0065fb7b  MOV ECX,dword ptr [EBP + -0x1c]
0065fb7e  CALL 0x005fb720
0065fb83  MOV dword ptr [EBP + -0x20],EAX
0065fb86  PUSH 0x1
0065fb88  MOV EAX,dword ptr [EBP + 0x8]
0065fb8b  PUSH EAX
0065fb8c  MOV ECX,dword ptr [EBP + -0x20]
0065fb8f  MOV EDX,dword ptr [ECX]
0065fb91  MOV ECX,dword ptr [EBP + -0x20]
0065fb94  MOV EAX,dword ptr [EDX + 0xf0]
0065fb9a  CALL EAX
0065fb9c  MOVZX ECX,AL
0065fb9f  TEST ECX,ECX
0065fba1  JZ 0x0065fbaa
0065fba3  MOV AL,0x1
0065fba5  JMP 0x0065fc8d
0065fbaa  MOV dword ptr [EBP + -0x4],0x0
0065fbb1  JMP 0x0065fbbc
0065fbb3  MOV EDX,dword ptr [EBP + -0x4]
0065fbb6  ADD EDX,0x1
0065fbb9  MOV dword ptr [EBP + -0x4],EDX
0065fbbc  MOV EAX,[0x0162ee84]
0065fbc1  MOV EDX,dword ptr [EAX]
0065fbc3  MOV ECX,dword ptr [0x0162ee84]
0065fbc9  MOV EAX,dword ptr [EDX + 0x10c]
0065fbcf  CALL EAX
0065fbd1  CMP dword ptr [EBP + -0x4],EAX
0065fbd4  JGE 0x0065fc68
0065fbda  MOV ECX,dword ptr [0x0162ee84]
0065fbe0  MOV EDX,dword ptr [ECX + 0x58]
0065fbe3  MOV EAX,dword ptr [EBP + -0x4]
0065fbe6  MOV ECX,dword ptr [EDX + EAX*0x4]
0065fbe9  MOV dword ptr [EBP + -0x10],ECX
0065fbec  MOV ECX,dword ptr [EBP + -0x10]
0065fbef  CALL 0x0063aac0
0065fbf4  MOV EDX,dword ptr [EAX]
0065fbf6  MOV dword ptr [EBP + -0x8],EDX
0065fbf9  CMP dword ptr [EBP + -0x8],0x2
0065fbfd  JZ 0x0065fc1b
0065fbff  MOV ECX,dword ptr [EBP + -0x10]
0065fc02  CALL 0x0063aac0
0065fc07  MOV EAX,dword ptr [EAX]
0065fc09  MOV dword ptr [EBP + -0xc],EAX
0065fc0c  CMP dword ptr [EBP + -0xc],0x3
0065fc10  JZ 0x0065fc1b
0065fc12  MOV dword ptr [EBP + -0x24],0x0
0065fc19  JMP 0x0065fc22
0065fc1b  MOV dword ptr [EBP + -0x24],0x1
0065fc22  MOVZX ECX,byte ptr [EBP + -0x24]
0065fc26  TEST ECX,ECX
0065fc28  JZ 0x0065fc63
0065fc2a  MOV EDX,dword ptr [0x0162ee84]
0065fc30  MOV EAX,dword ptr [EDX + 0x58]
0065fc33  MOV ECX,dword ptr [EBP + -0x4]
0065fc36  MOV EDX,dword ptr [EAX + ECX*0x4]
0065fc39  MOV dword ptr [EBP + -0x14],EDX
0065fc3c  MOV ECX,dword ptr [EBP + -0x14]
0065fc3f  CALL 0x0063aac0
0065fc44  ADD EAX,0x4
0065fc47  MOV dword ptr [EBP + -0x18],EAX
0065fc4a  MOV EAX,dword ptr [EBP + 0x8]
0065fc4d  PUSH EAX
0065fc4e  MOV ECX,dword ptr [EBP + -0x18]
0065fc51  PUSH ECX
0065fc52  CALL dword ptr [0x006b21e4]
0065fc58  ADD ESP,0x8
0065fc5b  TEST EAX,EAX
0065fc5d  JNZ 0x0065fc63
0065fc5f  MOV AL,0x1
0065fc61  JMP 0x0065fc8d
0065fc63  JMP 0x0065fbb3
0065fc68  CMP dword ptr [0x0163068c],0x0
0065fc6f  JZ 0x0065fc8b
0065fc71  MOV EDX,dword ptr [EBP + 0x8]
0065fc74  PUSH EDX
0065fc75  MOV ECX,dword ptr [0x0163068c]
0065fc7b  CALL 0x0063dea0
0065fc80  MOVZX EAX,AL
0065fc83  TEST EAX,EAX
0065fc85  JZ 0x0065fc8b
0065fc87  MOV AL,0x1
0065fc89  JMP 0x0065fc8d
0065fc8b  XOR AL,AL
0065fc8d  MOV ESP,EBP
0065fc8f  POP EBP
0065fc90  RET 0x4

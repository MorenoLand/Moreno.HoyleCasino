; FUN_0056ab30  0056ab30
0056ab30  PUSH EBP
0056ab31  MOV EBP,ESP
0056ab33  SUB ESP,0x18
0056ab36  MOV dword ptr [EBP + -0x18],ECX
0056ab39  MOV AX,word ptr [EBP + 0xc]
0056ab3d  PUSH EAX
0056ab3e  CALL 0x00641280
0056ab43  ADD ESP,0x4
0056ab46  MOV dword ptr [EBP + -0x10],EAX
0056ab49  MOV CX,word ptr [EBP + 0xc]
0056ab4d  PUSH ECX
0056ab4e  CALL 0x00641290
0056ab53  ADD ESP,0x4
0056ab56  MOV dword ptr [EBP + -0x8],EAX
0056ab59  MOV dword ptr [EBP + -0x4],0x0
0056ab60  JMP 0x0056ab6b
0056ab62  MOV EDX,dword ptr [EBP + -0x4]
0056ab65  ADD EDX,0x1
0056ab68  MOV dword ptr [EBP + -0x4],EDX
0056ab6b  CMP dword ptr [EBP + -0x4],0x5
0056ab6f  JGE 0x0056abd2
0056ab71  MOV EAX,dword ptr [EBP + -0x4]
0056ab74  MOV ECX,dword ptr [EBP + -0x18]
0056ab77  MOVZX EDX,word ptr [ECX + EAX*0x2 + 0x3ac]
0056ab7f  TEST EDX,EDX
0056ab81  JNZ 0x0056ab85
0056ab83  JMP 0x0056ab62
0056ab85  MOV EAX,dword ptr [EBP + -0x4]
0056ab88  MOV ECX,dword ptr [EBP + -0x18]
0056ab8b  MOV DX,word ptr [ECX + EAX*0x2 + 0x3ac]
0056ab93  PUSH EDX
0056ab94  CALL 0x00641280
0056ab99  ADD ESP,0x4
0056ab9c  MOV dword ptr [EBP + -0xc],EAX
0056ab9f  MOV EAX,dword ptr [EBP + -0x4]
0056aba2  MOV ECX,dword ptr [EBP + -0x18]
0056aba5  MOV DX,word ptr [ECX + EAX*0x2 + 0x3ac]
0056abad  PUSH EDX
0056abae  CALL 0x00641290
0056abb3  ADD ESP,0x4
0056abb6  MOV dword ptr [EBP + -0x14],EAX
0056abb9  MOV EAX,dword ptr [EBP + -0xc]
0056abbc  CMP EAX,dword ptr [EBP + -0x10]
0056abbf  JNZ 0x0056abd0
0056abc1  MOV ECX,dword ptr [EBP + -0x14]
0056abc4  CMP ECX,dword ptr [EBP + -0x8]
0056abc7  JNZ 0x0056abd0
0056abc9  MOV AL,0x1
0056abcb  JMP 0x0056ac68
0056abd0  JMP 0x0056ab62
0056abd2  MOV dword ptr [EBP + -0x4],0x0
0056abd9  JMP 0x0056abe4
0056abdb  MOV EDX,dword ptr [EBP + -0x4]
0056abde  ADD EDX,0x1
0056abe1  MOV dword ptr [EBP + -0x4],EDX
0056abe4  CMP dword ptr [EBP + -0x4],0x5
0056abe8  JGE 0x0056ac66
0056abea  MOV EAX,dword ptr [EBP + 0x8]
0056abed  IMUL EAX,EAX,0xa
0056abf0  MOV ECX,dword ptr [EBP + -0x18]
0056abf3  LEA EDX,[ECX + EAX*0x1 + 0xf6]
0056abfa  MOV EAX,dword ptr [EBP + -0x4]
0056abfd  MOVZX ECX,word ptr [EDX + EAX*0x2]
0056ac01  TEST ECX,ECX
0056ac03  JNZ 0x0056ac07
0056ac05  JMP 0x0056abdb
0056ac07  MOV EDX,dword ptr [EBP + 0x8]
0056ac0a  IMUL EDX,EDX,0xa
0056ac0d  MOV EAX,dword ptr [EBP + -0x18]
0056ac10  LEA ECX,[EAX + EDX*0x1 + 0xf6]
0056ac17  MOV EDX,dword ptr [EBP + -0x4]
0056ac1a  MOV AX,word ptr [ECX + EDX*0x2]
0056ac1e  PUSH EAX
0056ac1f  CALL 0x00641280
0056ac24  ADD ESP,0x4
0056ac27  MOV dword ptr [EBP + -0xc],EAX
0056ac2a  MOV ECX,dword ptr [EBP + 0x8]
0056ac2d  IMUL ECX,ECX,0xa
0056ac30  MOV EDX,dword ptr [EBP + -0x18]
0056ac33  LEA EAX,[EDX + ECX*0x1 + 0xf6]
0056ac3a  MOV ECX,dword ptr [EBP + -0x4]
0056ac3d  MOV DX,word ptr [EAX + ECX*0x2]
0056ac41  PUSH EDX
0056ac42  CALL 0x00641290
0056ac47  ADD ESP,0x4
0056ac4a  MOV dword ptr [EBP + -0x14],EAX
0056ac4d  MOV EAX,dword ptr [EBP + -0xc]
0056ac50  CMP EAX,dword ptr [EBP + -0x10]
0056ac53  JNZ 0x0056ac61
0056ac55  MOV ECX,dword ptr [EBP + -0x14]
0056ac58  CMP ECX,dword ptr [EBP + -0x8]
0056ac5b  JNZ 0x0056ac61
0056ac5d  MOV AL,0x1
0056ac5f  JMP 0x0056ac68
0056ac61  JMP 0x0056abdb
0056ac66  XOR AL,AL
0056ac68  MOV ESP,EBP
0056ac6a  POP EBP
0056ac6b  RET 0x8

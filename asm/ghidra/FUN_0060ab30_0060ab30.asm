; FUN_0060ab30  0060ab30
0060ab30  PUSH EBP
0060ab31  MOV EBP,ESP
0060ab33  SUB ESP,0x1c
0060ab36  PUSH ESI
0060ab37  MOV dword ptr [EBP + -0x1c],ECX
0060ab3a  MOV EAX,dword ptr [EBP + 0x8]
0060ab3d  IMUL EAX,EAX,0x74
0060ab40  MOV ECX,dword ptr [EAX + 0x796d38]
0060ab46  PUSH ECX
0060ab47  PUSH 0x6d8084
0060ab4c  CALL 0x0062fde0
0060ab51  ADD ESP,0x8
0060ab54  MOV dword ptr [EBP + -0xc],0x0
0060ab5b  JMP 0x0060ab66
0060ab5d  MOV EDX,dword ptr [EBP + -0xc]
0060ab60  ADD EDX,0x1
0060ab63  MOV dword ptr [EBP + -0xc],EDX
0060ab66  MOV EAX,dword ptr [EBP + 0x8]
0060ab69  IMUL EAX,EAX,0x74
0060ab6c  MOV ECX,dword ptr [EBP + -0xc]
0060ab6f  CMP dword ptr [EAX + ECX*0x4 + 0x796d44],-0x1
0060ab77  JZ 0x0060ab7b
0060ab79  JMP 0x0060ab5d
0060ab7b  MOV EDX,dword ptr [EBP + 0x8]
0060ab7e  IMUL EDX,EDX,0x74
0060ab81  MOV EAX,dword ptr [EBP + -0xc]
0060ab84  MOV ECX,dword ptr [EDX + EAX*0x4 + 0x796d40]
0060ab8b  MOV dword ptr [EBP + -0x10],ECX
0060ab8e  MOV dword ptr [EBP + -0x14],0x0
0060ab95  JMP 0x0060aba0
0060ab97  MOV EDX,dword ptr [EBP + -0x14]
0060ab9a  ADD EDX,0x1
0060ab9d  MOV dword ptr [EBP + -0x14],EDX
0060aba0  CMP dword ptr [EBP + -0x14],0x64
0060aba4  JGE 0x0060ac0c
0060aba6  MOV EAX,dword ptr [EBP + -0xc]
0060aba9  PUSH EAX
0060abaa  CALL 0x0062fbf0
0060abaf  ADD ESP,0x4
0060abb2  MOV dword ptr [EBP + -0x18],EAX
0060abb5  MOV ECX,dword ptr [EBP + -0xc]
0060abb8  PUSH ECX
0060abb9  CALL 0x0062fbf0
0060abbe  ADD ESP,0x4
0060abc1  MOV dword ptr [EBP + -0x8],EAX
0060abc4  MOV EDX,dword ptr [EBP + 0x8]
0060abc7  IMUL EDX,EDX,0x74
0060abca  MOV EAX,dword ptr [EBP + -0x18]
0060abcd  MOV ECX,dword ptr [EDX + EAX*0x4 + 0x796d44]
0060abd4  MOV dword ptr [EBP + -0x4],ECX
0060abd7  MOV EDX,dword ptr [EBP + 0x8]
0060abda  IMUL EDX,EDX,0x74
0060abdd  MOV EAX,dword ptr [EBP + 0x8]
0060abe0  IMUL EAX,EAX,0x74
0060abe3  MOV ECX,dword ptr [EBP + -0x18]
0060abe6  MOV ESI,dword ptr [EBP + -0x8]
0060abe9  MOV EDX,dword ptr [EDX + ESI*0x4 + 0x796d44]
0060abf0  MOV dword ptr [EAX + ECX*0x4 + 0x796d44],EDX
0060abf7  MOV EAX,dword ptr [EBP + 0x8]
0060abfa  IMUL EAX,EAX,0x74
0060abfd  MOV ECX,dword ptr [EBP + -0x8]
0060ac00  MOV EDX,dword ptr [EBP + -0x4]
0060ac03  MOV dword ptr [EAX + ECX*0x4 + 0x796d44],EDX
0060ac0a  JMP 0x0060ab97
0060ac0c  MOVZX EAX,byte ptr [EBP + 0xc]
0060ac10  TEST EAX,EAX
0060ac12  JZ 0x0060ac61
0060ac14  CMP dword ptr [EBP + -0xc],0x1
0060ac18  JLE 0x0060ac61
0060ac1a  MOV ECX,dword ptr [EBP + 0x8]
0060ac1d  IMUL ECX,ECX,0x74
0060ac20  MOV EDX,dword ptr [ECX + 0x796d44]
0060ac26  CMP EDX,dword ptr [EBP + -0x10]
0060ac29  JNZ 0x0060ac61
0060ac2b  MOV EAX,dword ptr [EBP + 0x8]
0060ac2e  IMUL EAX,EAX,0x74
0060ac31  MOV ECX,dword ptr [EAX + 0x796d44]
0060ac37  MOV dword ptr [EBP + -0x4],ECX
0060ac3a  MOV EDX,dword ptr [EBP + 0x8]
0060ac3d  IMUL EDX,EDX,0x74
0060ac40  MOV EAX,dword ptr [EBP + 0x8]
0060ac43  IMUL EAX,EAX,0x74
0060ac46  MOV ECX,dword ptr [EDX + 0x796d48]
0060ac4c  MOV dword ptr [EAX + 0x796d44],ECX
0060ac52  MOV EDX,dword ptr [EBP + 0x8]
0060ac55  IMUL EDX,EDX,0x74
0060ac58  MOV EAX,dword ptr [EBP + -0x4]
0060ac5b  MOV dword ptr [EDX + 0x796d48],EAX
0060ac61  PUSH 0x6d8068
0060ac66  CALL 0x0062fde0
0060ac6b  ADD ESP,0x4
0060ac6e  MOV dword ptr [EBP + -0x18],0x0
0060ac75  JMP 0x0060ac80
0060ac77  MOV ECX,dword ptr [EBP + -0x18]
0060ac7a  ADD ECX,0x1
0060ac7d  MOV dword ptr [EBP + -0x18],ECX
0060ac80  MOV EDX,dword ptr [EBP + 0x8]
0060ac83  IMUL EDX,EDX,0x74
0060ac86  MOV EAX,dword ptr [EBP + -0x18]
0060ac89  CMP dword ptr [EDX + EAX*0x4 + 0x796d44],-0x1
0060ac91  JZ 0x0060acb3
0060ac93  MOV ECX,dword ptr [EBP + 0x8]
0060ac96  IMUL ECX,ECX,0x74
0060ac99  MOV EDX,dword ptr [EBP + -0x18]
0060ac9c  MOV EAX,dword ptr [ECX + EDX*0x4 + 0x796d44]
0060aca3  PUSH EAX
0060aca4  PUSH 0x6d805c
0060aca9  CALL 0x0062fde0
0060acae  ADD ESP,0x8
0060acb1  JMP 0x0060ac77
0060acb3  POP ESI
0060acb4  MOV ESP,EBP
0060acb6  POP EBP
0060acb7  RET 0x8

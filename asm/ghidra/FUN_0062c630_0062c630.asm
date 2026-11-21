; FUN_0062c630  0062c630
0062c630  PUSH EBP
0062c631  MOV EBP,ESP
0062c633  SUB ESP,0x8
0062c636  MOV dword ptr [EBP + -0x8],ECX
0062c639  MOV EAX,dword ptr [EBP + -0x8]
0062c63c  CMP dword ptr [EAX + 0x8],0x0
0062c640  JZ 0x0062c664
0062c642  XOR ECX,ECX
0062c644  JNZ 0x0062c65d
0062c646  PUSH 0x2ab
0062c64b  PUSH 0x6d974c
0062c650  PUSH 0x6b2f58
0062c655  CALL 0x005e9f20
0062c65a  ADD ESP,0xc
0062c65d  XOR AL,AL
0062c65f  JMP 0x0062c6e6
0062c664  MOV EAX,dword ptr [EBP + 0x8]
0062c667  MOV ECX,dword ptr [EAX]
0062c669  MOV dword ptr [EBP + -0x4],ECX
0062c66c  JMP 0x0062c677
0062c66e  MOV EDX,dword ptr [EBP + -0x4]
0062c671  ADD EDX,0x1
0062c674  MOV dword ptr [EBP + -0x4],EDX
0062c677  MOV EAX,dword ptr [EBP + -0x8]
0062c67a  MOV ECX,dword ptr [EAX + 0x14]
0062c67d  MOV EDX,dword ptr [EBP + -0x4]
0062c680  CMP EDX,dword ptr [ECX]
0062c682  JNC 0x0062c6e4
0062c684  MOV EAX,dword ptr [EBP + -0x8]
0062c687  MOV ECX,dword ptr [EAX + 0x14]
0062c68a  MOV EDX,dword ptr [EBP + -0x4]
0062c68d  ADD EDX,0x1
0062c690  SHL EDX,0x4
0062c693  LEA EAX,[ECX + EDX*0x1 + 0x8]
0062c697  MOV ECX,dword ptr [EBP + -0x8]
0062c69a  MOV EDX,dword ptr [ECX + 0x14]
0062c69d  MOV ECX,dword ptr [EBP + -0x4]
0062c6a0  SHL ECX,0x4
0062c6a3  LEA EDX,[EDX + ECX*0x1 + 0x8]
0062c6a7  MOV ECX,dword ptr [EAX]
0062c6a9  MOV dword ptr [EDX],ECX
0062c6ab  MOV ECX,dword ptr [EAX + 0x4]
0062c6ae  MOV dword ptr [EDX + 0x4],ECX
0062c6b1  MOV ECX,dword ptr [EAX + 0x8]
0062c6b4  MOV dword ptr [EDX + 0x8],ECX
0062c6b7  MOV EAX,dword ptr [EAX + 0xc]
0062c6ba  MOV dword ptr [EDX + 0xc],EAX
0062c6bd  MOV ECX,dword ptr [EBP + -0x8]
0062c6c0  MOV EDX,dword ptr [ECX + 0x14]
0062c6c3  MOV EAX,dword ptr [EBP + -0x4]
0062c6c6  SHL EAX,0x4
0062c6c9  MOV ECX,dword ptr [EBP + 0xc]
0062c6cc  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x10]
0062c6d0  SUB EDX,dword ptr [ECX]
0062c6d2  MOV EAX,dword ptr [EBP + -0x4]
0062c6d5  SHL EAX,0x4
0062c6d8  MOV ECX,dword ptr [EBP + -0x8]
0062c6db  MOV ECX,dword ptr [ECX + 0x14]
0062c6de  MOV dword ptr [ECX + EAX*0x1 + 0x10],EDX
0062c6e2  JMP 0x0062c66e
0062c6e4  MOV AL,0x1
0062c6e6  MOV ESP,EBP
0062c6e8  POP EBP
0062c6e9  RET 0x8

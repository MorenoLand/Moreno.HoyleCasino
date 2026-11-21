; FUN_0042bda0  0042bda0
0042bda0  PUSH EBP
0042bda1  MOV EBP,ESP
0042bda3  SUB ESP,0x8
0042bda6  MOV dword ptr [EBP + -0x8],ECX
0042bda9  MOV dword ptr [EBP + -0x4],0x0
0042bdb0  JMP 0x0042bdbb
0042bdb2  MOV EAX,dword ptr [EBP + -0x4]
0042bdb5  ADD EAX,0x1
0042bdb8  MOV dword ptr [EBP + -0x4],EAX
0042bdbb  CMP dword ptr [EBP + -0x4],0x4c
0042bdbf  JGE 0x0042bdd2
0042bdc1  MOV ECX,dword ptr [EBP + -0x4]
0042bdc4  MOV EDX,dword ptr [EBP + -0x8]
0042bdc7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x14]
0042bdcb  CALL 0x0042d070
0042bdd0  JMP 0x0042bdb2
0042bdd2  MOV ESP,EBP
0042bdd4  POP EBP
0042bdd5  RET

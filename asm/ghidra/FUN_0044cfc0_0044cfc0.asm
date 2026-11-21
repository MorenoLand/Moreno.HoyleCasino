; FUN_0044cfc0  0044cfc0
0044cfc0  PUSH EBP
0044cfc1  MOV EBP,ESP
0044cfc3  SUB ESP,0x8
0044cfc6  MOV dword ptr [EBP + -0x8],ECX
0044cfc9  MOV dword ptr [EBP + -0x4],0x0
0044cfd0  JMP 0x0044cfdb
0044cfd2  MOV EAX,dword ptr [EBP + -0x4]
0044cfd5  ADD EAX,0x1
0044cfd8  MOV dword ptr [EBP + -0x4],EAX
0044cfdb  CMP dword ptr [EBP + -0x4],0x3
0044cfdf  JGE 0x0044cffa
0044cfe1  MOV ECX,dword ptr [EBP + 0x8]
0044cfe4  IMUL ECX,ECX,0x3
0044cfe7  ADD ECX,dword ptr [EBP + -0x4]
0044cfea  MOV EDX,dword ptr [EBP + -0x8]
0044cfed  CMP dword ptr [EDX + ECX*0x8 + 0x38],0x0
0044cff2  JLE 0x0044cff8
0044cff4  MOV AL,0x1
0044cff6  JMP 0x0044cffc
0044cff8  JMP 0x0044cfd2
0044cffa  XOR AL,AL
0044cffc  MOV ESP,EBP
0044cffe  POP EBP
0044cfff  RET 0x4

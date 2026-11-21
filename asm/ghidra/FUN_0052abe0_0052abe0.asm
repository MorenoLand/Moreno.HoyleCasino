; FUN_0052abe0  0052abe0
0052abe0  PUSH EBP
0052abe1  MOV EBP,ESP
0052abe3  SUB ESP,0x8
0052abe6  MOV dword ptr [EBP + -0x8],ECX
0052abe9  MOV dword ptr [EBP + -0x4],0x0
0052abf0  JMP 0x0052abfb
0052abf2  MOV EAX,dword ptr [EBP + -0x4]
0052abf5  ADD EAX,0x1
0052abf8  MOV dword ptr [EBP + -0x4],EAX
0052abfb  CMP dword ptr [EBP + -0x4],0x8
0052abff  JGE 0x0052ac14
0052ac01  PUSH 0x0
0052ac03  MOV ECX,dword ptr [EBP + -0x4]
0052ac06  MOV EDX,dword ptr [EBP + -0x8]
0052ac09  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x3c]
0052ac0d  CALL 0x005f5d50
0052ac12  JMP 0x0052abf2
0052ac14  MOV ESP,EBP
0052ac16  POP EBP
0052ac17  RET

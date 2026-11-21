; FUN_0062e6b0  0062e6b0
0062e6b0  PUSH EBP
0062e6b1  MOV EBP,ESP
0062e6b3  SUB ESP,0xc
0062e6b6  MOV dword ptr [EBP + -0xc],ECX
0062e6b9  MOV EAX,dword ptr [EBP + -0xc]
0062e6bc  MOV ECX,dword ptr [EAX + 0x408]
0062e6c2  MOV dword ptr [EBP + -0x8],ECX
0062e6c5  MOV EDX,dword ptr [EBP + -0xc]
0062e6c8  MOV EAX,dword ptr [EBP + 0xc]
0062e6cb  IMUL EAX,dword ptr [EDX + 0x414]
0062e6d2  ADD EAX,dword ptr [EBP + 0x8]
0062e6d5  MOV ECX,dword ptr [EBP + -0x8]
0062e6d8  MOV DL,byte ptr [ECX + EAX*0x1]
0062e6db  MOV byte ptr [EBP + -0x1],DL
0062e6de  MOV AL,byte ptr [EBP + -0x1]
0062e6e1  MOV ESP,EBP
0062e6e3  POP EBP
0062e6e4  RET 0x8

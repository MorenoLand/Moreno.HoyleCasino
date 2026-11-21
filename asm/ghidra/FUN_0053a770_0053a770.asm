; FUN_0053a770  0053a770
0053a770  PUSH EBP
0053a771  MOV EBP,ESP
0053a773  SUB ESP,0x8
0053a776  MOV dword ptr [EBP + -0x8],ECX
0053a779  MOV ECX,dword ptr [EBP + -0x8]
0053a77c  CALL 0x005e9e20
0053a781  MOV EAX,dword ptr [EBP + -0x8]
0053a784  MOV dword ptr [EAX],0x6c5a98
0053a78a  MOV dword ptr [EBP + -0x4],0x0
0053a791  JMP 0x0053a79c
0053a793  MOV ECX,dword ptr [EBP + -0x4]
0053a796  ADD ECX,0x1
0053a799  MOV dword ptr [EBP + -0x4],ECX
0053a79c  CMP dword ptr [EBP + -0x4],0x5
0053a7a0  JGE 0x0053a7c3
0053a7a2  MOV EDX,dword ptr [EBP + -0x4]
0053a7a5  MOV EAX,dword ptr [EBP + -0x8]
0053a7a8  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
0053a7b0  MOV ECX,dword ptr [EBP + -0x4]
0053a7b3  MOV EDX,dword ptr [EBP + -0x8]
0053a7b6  MOV dword ptr [EDX + ECX*0x4 + 0x80],0x0
0053a7c1  JMP 0x0053a793
0053a7c3  MOV dword ptr [EBP + -0x4],0x0
0053a7ca  JMP 0x0053a7d5
0053a7cc  MOV EAX,dword ptr [EBP + -0x4]
0053a7cf  ADD EAX,0x1
0053a7d2  MOV dword ptr [EBP + -0x4],EAX
0053a7d5  CMP dword ptr [EBP + -0x4],0xc
0053a7d9  JGE 0x0053a7f9
0053a7db  MOV ECX,dword ptr [EBP + -0x4]
0053a7de  MOV EDX,dword ptr [EBP + -0x8]
0053a7e1  MOV dword ptr [EDX + ECX*0x4 + 0x18],0x0
0053a7e9  MOV EAX,dword ptr [EBP + -0x4]
0053a7ec  MOV ECX,dword ptr [EBP + -0x8]
0053a7ef  MOV dword ptr [ECX + EAX*0x4 + 0x50],0x0
0053a7f7  JMP 0x0053a7cc
0053a7f9  MOV EDX,dword ptr [EBP + -0x8]
0053a7fc  MOV dword ptr [EDX + 0x48],0x0
0053a803  MOV EAX,dword ptr [EBP + -0x8]
0053a806  MOV dword ptr [EAX + 0x94],0x0
0053a810  MOV ECX,dword ptr [EBP + -0x8]
0053a813  MOV dword ptr [ECX + 0x98],0x0
0053a81d  MOV EDX,dword ptr [EBP + -0x8]
0053a820  MOV dword ptr [EDX + 0x9c],0x0
0053a82a  MOV EAX,dword ptr [EBP + -0x8]
0053a82d  MOV dword ptr [EAX + 0x4c],0x0
0053a834  MOV EAX,dword ptr [EBP + -0x8]
0053a837  MOV ESP,EBP
0053a839  POP EBP
0053a83a  RET

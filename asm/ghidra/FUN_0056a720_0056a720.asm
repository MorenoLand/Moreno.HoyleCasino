; FUN_0056a720  0056a720
0056a720  PUSH EBP
0056a721  MOV EBP,ESP
0056a723  SUB ESP,0x14
0056a726  MOV dword ptr [EBP + -0x10],ECX
0056a729  MOV dword ptr [EBP + -0x4],0x0
0056a730  JMP 0x0056a73b
0056a732  MOV EAX,dword ptr [EBP + -0x4]
0056a735  ADD EAX,0x1
0056a738  MOV dword ptr [EBP + -0x4],EAX
0056a73b  CMP dword ptr [EBP + -0x4],0x31
0056a73f  JGE 0x0056a79a
0056a741  MOV ECX,dword ptr [EBP + -0x4]
0056a744  MOV EDX,dword ptr [EBP + -0x10]
0056a747  CMP dword ptr [EDX + ECX*0x4 + 0x2e8],0x0
0056a74f  JZ 0x0056a798
0056a751  MOV EAX,dword ptr [EBP + -0x4]
0056a754  MOV ECX,dword ptr [EBP + -0x10]
0056a757  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x2e8]
0056a75e  MOV dword ptr [EBP + -0xc],EDX
0056a761  MOV EAX,dword ptr [EBP + -0xc]
0056a764  MOV dword ptr [EBP + -0x8],EAX
0056a767  CMP dword ptr [EBP + -0x8],0x0
0056a76b  JZ 0x0056a780
0056a76d  PUSH 0x1
0056a76f  MOV ECX,dword ptr [EBP + -0x8]
0056a772  MOV EDX,dword ptr [ECX]
0056a774  MOV ECX,dword ptr [EBP + -0x8]
0056a777  MOV EAX,dword ptr [EDX]
0056a779  CALL EAX
0056a77b  MOV dword ptr [EBP + -0x14],EAX
0056a77e  JMP 0x0056a787
0056a780  MOV dword ptr [EBP + -0x14],0x0
0056a787  MOV ECX,dword ptr [EBP + -0x4]
0056a78a  MOV EDX,dword ptr [EBP + -0x10]
0056a78d  MOV dword ptr [EDX + ECX*0x4 + 0x2e8],0x0
0056a798  JMP 0x0056a732
0056a79a  MOV ESP,EBP
0056a79c  POP EBP
0056a79d  RET

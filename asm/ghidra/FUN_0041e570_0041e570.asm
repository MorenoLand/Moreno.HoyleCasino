; FUN_0041e570  0041e570
0041e570  PUSH EBP
0041e571  MOV EBP,ESP
0041e573  SUB ESP,0x8
0041e576  MOV dword ptr [EBP + -0x8],ECX
0041e579  MOV ECX,dword ptr [EBP + -0x8]
0041e57c  CALL 0x005e9e20
0041e581  MOV EAX,dword ptr [EBP + -0x8]
0041e584  MOV dword ptr [EAX],0x6b5bd0
0041e58a  MOV dword ptr [EBP + -0x4],0x0
0041e591  JMP 0x0041e59c
0041e593  MOV ECX,dword ptr [EBP + -0x4]
0041e596  ADD ECX,0x1
0041e599  MOV dword ptr [EBP + -0x4],ECX
0041e59c  CMP dword ptr [EBP + -0x4],0x5
0041e5a0  JGE 0x0041e5c0
0041e5a2  MOV EDX,dword ptr [EBP + -0x4]
0041e5a5  MOV EAX,dword ptr [EBP + -0x8]
0041e5a8  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
0041e5b0  MOV ECX,dword ptr [EBP + -0x4]
0041e5b3  MOV EDX,dword ptr [EBP + -0x8]
0041e5b6  MOV dword ptr [EDX + ECX*0x4 + 0x64],0x0
0041e5be  JMP 0x0041e593
0041e5c0  MOV dword ptr [EBP + -0x4],0x0
0041e5c7  JMP 0x0041e5d2
0041e5c9  MOV EAX,dword ptr [EBP + -0x4]
0041e5cc  ADD EAX,0x1
0041e5cf  MOV dword ptr [EBP + -0x4],EAX
0041e5d2  CMP dword ptr [EBP + -0x4],0x8
0041e5d6  JGE 0x0041e5e8
0041e5d8  MOV ECX,dword ptr [EBP + -0x4]
0041e5db  MOV EDX,dword ptr [EBP + -0x8]
0041e5de  MOV dword ptr [EDX + ECX*0x4 + 0x18],0x0
0041e5e6  JMP 0x0041e5c9
0041e5e8  MOV dword ptr [EBP + -0x4],0x0
0041e5ef  JMP 0x0041e5fa
0041e5f1  MOV EAX,dword ptr [EBP + -0x4]
0041e5f4  ADD EAX,0x1
0041e5f7  MOV dword ptr [EBP + -0x4],EAX
0041e5fa  CMP dword ptr [EBP + -0x4],0x4
0041e5fe  JGE 0x0041e61e
0041e600  MOV ECX,dword ptr [EBP + -0x4]
0041e603  MOV EDX,dword ptr [EBP + -0x8]
0041e606  MOV dword ptr [EDX + ECX*0x4 + 0x44],0x0
0041e60e  MOV EAX,dword ptr [EBP + -0x4]
0041e611  MOV ECX,dword ptr [EBP + -0x8]
0041e614  MOV dword ptr [ECX + EAX*0x4 + 0x54],0x0
0041e61c  JMP 0x0041e5f1
0041e61e  MOV EDX,dword ptr [EBP + -0x8]
0041e621  MOV dword ptr [EDX + 0x38],0x0
0041e628  MOV EAX,dword ptr [EBP + -0x8]
0041e62b  MOV dword ptr [EAX + 0x78],0x0
0041e632  MOV ECX,dword ptr [EBP + -0x8]
0041e635  MOV dword ptr [ECX + 0x7c],0x0
0041e63c  MOV EDX,dword ptr [EBP + -0x8]
0041e63f  MOV dword ptr [EDX + 0x3c],0x0
0041e646  MOV EAX,dword ptr [EBP + -0x8]
0041e649  MOV dword ptr [EAX + 0x40],0x0
0041e650  MOV EAX,dword ptr [EBP + -0x8]
0041e653  MOV ESP,EBP
0041e655  POP EBP
0041e656  RET

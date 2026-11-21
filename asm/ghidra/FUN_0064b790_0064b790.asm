; FUN_0064b790  0064b790
0064b790  PUSH EBP
0064b791  MOV EBP,ESP
0064b793  SUB ESP,0x14
0064b796  MOV dword ptr [EBP + -0x10],ECX
0064b799  MOV dword ptr [EBP + -0x4],0x0
0064b7a0  JMP 0x0064b7ab
0064b7a2  MOV EAX,dword ptr [EBP + -0x4]
0064b7a5  ADD EAX,0x1
0064b7a8  MOV dword ptr [EBP + -0x4],EAX
0064b7ab  CMP dword ptr [EBP + -0x4],0x3
0064b7af  JGE 0x0064b826
0064b7b1  MOV ECX,dword ptr [EBP + -0x4]
0064b7b4  MOV EDX,dword ptr [EBP + -0x10]
0064b7b7  CMP dword ptr [EDX + ECX*0x4 + 0x198],0x0
0064b7bf  JZ 0x0064b821
0064b7c1  MOV EAX,dword ptr [EBP + -0x4]
0064b7c4  MOV ECX,dword ptr [EBP + -0x10]
0064b7c7  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x198]
0064b7ce  CALL 0x005eafc0
0064b7d3  CMP EAX,dword ptr [EBP + 0x8]
0064b7d6  JNZ 0x0064b821
0064b7d8  MOV EDX,dword ptr [EBP + -0x4]
0064b7db  MOV EAX,dword ptr [EBP + -0x10]
0064b7de  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x198]
0064b7e5  MOV dword ptr [EBP + -0xc],ECX
0064b7e8  MOV EDX,dword ptr [EBP + -0xc]
0064b7eb  MOV dword ptr [EBP + -0x8],EDX
0064b7ee  CMP dword ptr [EBP + -0x8],0x0
0064b7f2  JZ 0x0064b807
0064b7f4  PUSH 0x1
0064b7f6  MOV EAX,dword ptr [EBP + -0x8]
0064b7f9  MOV EDX,dword ptr [EAX]
0064b7fb  MOV ECX,dword ptr [EBP + -0x8]
0064b7fe  MOV EAX,dword ptr [EDX]
0064b800  CALL EAX
0064b802  MOV dword ptr [EBP + -0x14],EAX
0064b805  JMP 0x0064b80e
0064b807  MOV dword ptr [EBP + -0x14],0x0
0064b80e  MOV ECX,dword ptr [EBP + -0x4]
0064b811  MOV EDX,dword ptr [EBP + -0x10]
0064b814  MOV dword ptr [EDX + ECX*0x4 + 0x198],0x0
0064b81f  JMP 0x0064b826
0064b821  JMP 0x0064b7a2
0064b826  MOV ESP,EBP
0064b828  POP EBP
0064b829  RET 0x4

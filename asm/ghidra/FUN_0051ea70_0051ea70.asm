; FUN_0051ea70  0051ea70
0051ea70  PUSH EBP
0051ea71  MOV EBP,ESP
0051ea73  SUB ESP,0xc
0051ea76  MOV dword ptr [EBP + -0x4],ECX
0051ea79  MOV EAX,dword ptr [EBP + 0x8]
0051ea7c  MOV dword ptr [EBP + -0x8],EAX
0051ea7f  MOV ECX,dword ptr [EBP + -0x8]
0051ea82  SUB ECX,0x30e78a
0051ea88  MOV dword ptr [EBP + -0x8],ECX
0051ea8b  CMP dword ptr [EBP + -0x8],0x7
0051ea8f  JA 0x0051eaf5
0051ea91  MOV EDX,dword ptr [EBP + -0x8]
0051ea94  JMP dword ptr [EDX*0x4 + 0x51eb00]
0051ea9b  XOR EAX,EAX
0051ea9d  JMP 0x0051eaf8
0051ea9f  MOV EAX,0x1
0051eaa4  JMP 0x0051eaf8
0051eaa6  MOV EAX,0x2
0051eaab  JMP 0x0051eaf8
0051eaad  MOV EAX,0x3
0051eab2  JMP 0x0051eaf8
0051eab4  MOV EAX,0x4
0051eab9  JMP 0x0051eaf8
0051eabb  MOV EAX,0x5
0051eac0  JMP 0x0051eaf8
0051eac2  MOV EAX,0x6
0051eac7  JMP 0x0051eaf8
0051eac9  MOV EAX,dword ptr [EBP + -0x4]
0051eacc  MOV ECX,dword ptr [EAX + 0x1c8]
0051ead2  MOV dword ptr [EBP + -0xc],ECX
0051ead5  CMP dword ptr [EBP + -0xc],0x2
0051ead9  JZ 0x0051eae3
0051eadb  CMP dword ptr [EBP + -0xc],0x3
0051eadf  JZ 0x0051eaea
0051eae1  JMP 0x0051eaee
0051eae3  MOV EAX,0x3
0051eae8  JMP 0x0051eaf8
0051eaea  XOR EAX,EAX
0051eaec  JMP 0x0051eaf8
0051eaee  MOV EAX,0x2
0051eaf3  JMP 0x0051eaf8
0051eaf5  OR EAX,0xffffffff
0051eaf8  MOV ESP,EBP
0051eafa  POP EBP
0051eafb  RET 0x4

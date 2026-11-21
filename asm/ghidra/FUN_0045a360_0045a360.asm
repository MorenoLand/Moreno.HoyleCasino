; FUN_0045a360  0045a360
0045a360  PUSH EBP
0045a361  MOV EBP,ESP
0045a363  SUB ESP,0x18
0045a366  MOV dword ptr [EBP + -0x18],ECX
0045a369  MOV dword ptr [EBP + -0x14],0x167
0045a370  MOV dword ptr [EBP + -0x10],0xd3
0045a377  MOV dword ptr [EBP + -0xc],0x19a
0045a37e  MOV dword ptr [EBP + -0x8],0xa0
0045a385  MOV dword ptr [EBP + -0x4],0x110
0045a38c  MOV ECX,dword ptr [0x00790734]
0045a392  CALL 0x0045e8e0
0045a397  CMP EAX,0x1
0045a39a  JNZ 0x0045a3e2
0045a39c  CMP dword ptr [EBP + 0xc],0x0
0045a3a0  JNZ 0x0045a3c0
0045a3a2  MOV dword ptr [EBP + -0x14],0x171
0045a3a9  MOV dword ptr [EBP + -0x10],0xc9
0045a3b0  MOV dword ptr [EBP + -0xc],0x187
0045a3b7  MOV dword ptr [EBP + -0x8],0xb2
0045a3be  JMP 0x0045a3e2
0045a3c0  CMP dword ptr [EBP + 0xc],0x1
0045a3c4  JNZ 0x0045a3e2
0045a3c6  MOV dword ptr [EBP + -0x14],0x146
0045a3cd  MOV dword ptr [EBP + -0x10],0xf5
0045a3d4  MOV dword ptr [EBP + -0xc],0x19c
0045a3db  MOV dword ptr [EBP + -0x8],0xa0
0045a3e2  MOV EAX,dword ptr [EBP + 0x8]
0045a3e5  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x14]
0045a3e9  MOV ESP,EBP
0045a3eb  POP EBP
0045a3ec  RET 0x8

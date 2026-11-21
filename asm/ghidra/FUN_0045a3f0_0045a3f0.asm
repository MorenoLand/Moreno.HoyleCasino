; FUN_0045a3f0  0045a3f0
0045a3f0  PUSH EBP
0045a3f1  MOV EBP,ESP
0045a3f3  SUB ESP,0x18
0045a3f6  MOV dword ptr [EBP + -0x18],ECX
0045a3f9  MOV dword ptr [EBP + -0x14],0xbe
0045a400  MOV dword ptr [EBP + -0x10],0xbe
0045a407  MOV dword ptr [EBP + -0xc],0x6a
0045a40e  MOV dword ptr [EBP + -0x8],0x6a
0045a415  MOV dword ptr [EBP + -0x4],0xcc
0045a41c  MOV ECX,dword ptr [0x00790734]
0045a422  CALL 0x0045e8e0
0045a427  CMP EAX,0x1
0045a42a  JNZ 0x0045a472
0045a42c  CMP dword ptr [EBP + 0xc],0x0
0045a430  JNZ 0x0045a450
0045a432  MOV dword ptr [EBP + -0x14],0xbe
0045a439  MOV dword ptr [EBP + -0x10],0xbe
0045a440  MOV dword ptr [EBP + -0xc],0x8a
0045a447  MOV dword ptr [EBP + -0x8],0x8a
0045a44e  JMP 0x0045a472
0045a450  CMP dword ptr [EBP + 0xc],0x1
0045a454  JNZ 0x0045a472
0045a456  MOV dword ptr [EBP + -0x14],0xbf
0045a45d  MOV dword ptr [EBP + -0x10],0xbf
0045a464  MOV dword ptr [EBP + -0xc],0x6b
0045a46b  MOV dword ptr [EBP + -0x8],0x6b
0045a472  MOV EAX,dword ptr [EBP + 0x8]
0045a475  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x14]
0045a479  MOV ESP,EBP
0045a47b  POP EBP
0045a47c  RET 0x8

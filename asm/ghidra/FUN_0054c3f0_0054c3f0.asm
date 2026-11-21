; FUN_0054c3f0  0054c3f0
0054c3f0  PUSH EBP
0054c3f1  MOV EBP,ESP
0054c3f3  SUB ESP,0x8
0054c3f6  MOV dword ptr [EBP + -0x8],ECX
0054c3f9  MOV ECX,dword ptr [EBP + -0x8]
0054c3fc  CALL 0x005e9e20
0054c401  MOV EAX,dword ptr [EBP + -0x8]
0054c404  MOV dword ptr [EAX],0x6c7dc0
0054c40a  MOV ECX,dword ptr [EBP + -0x8]
0054c40d  MOV byte ptr [ECX + 0x19],0x0
0054c411  MOV EDX,dword ptr [EBP + -0x8]
0054c414  MOV dword ptr [EDX + 0x10],0xffffffff
0054c41b  MOV dword ptr [EBP + -0x4],0x0
0054c422  JMP 0x0054c42d
0054c424  MOV EAX,dword ptr [EBP + -0x4]
0054c427  ADD EAX,0x1
0054c42a  MOV dword ptr [EBP + -0x4],EAX
0054c42d  CMP dword ptr [EBP + -0x4],0x5
0054c431  JGE 0x0054c44c
0054c433  MOV ECX,dword ptr [EBP + -0x4]
0054c436  MOV EDX,dword ptr [EBP + -0x8]
0054c439  MOV word ptr [EDX + ECX*0x2 + 0x4],0x0
0054c440  MOV EAX,dword ptr [EBP + -0x8]
0054c443  ADD EAX,dword ptr [EBP + -0x4]
0054c446  MOV byte ptr [EAX + 0x14],0xff
0054c44a  JMP 0x0054c424
0054c44c  MOV EAX,dword ptr [EBP + -0x8]
0054c44f  MOV ESP,EBP
0054c451  POP EBP
0054c452  RET

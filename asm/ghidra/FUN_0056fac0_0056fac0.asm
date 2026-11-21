; FUN_0056fac0  0056fac0
0056fac0  PUSH EBP
0056fac1  MOV EBP,ESP
0056fac3  SUB ESP,0x8
0056fac6  MOV dword ptr [EBP + -0x4],ECX
0056fac9  MOV ECX,dword ptr [EBP + -0x4]
0056facc  CALL 0x00602650
0056fad1  MOV ECX,dword ptr [EBP + -0x4]
0056fad4  CALL 0x005f5400
0056fad9  MOV dword ptr [EBP + -0x8],EAX
0056fadc  CMP dword ptr [EBP + -0x8],0x4
0056fae0  JA 0x0056fb44
0056fae2  MOV EAX,dword ptr [EBP + -0x8]
0056fae5  JMP dword ptr [EAX*0x4 + 0x56fb48]
0056fb44  MOV ESP,EBP
0056fb46  POP EBP
0056fb47  RET

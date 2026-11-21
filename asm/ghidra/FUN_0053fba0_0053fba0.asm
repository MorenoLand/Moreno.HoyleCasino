; FUN_0053fba0  0053fba0
0053fba0  PUSH EBP
0053fba1  MOV EBP,ESP
0053fba3  SUB ESP,0x8
0053fba6  MOV dword ptr [EBP + -0x4],ECX
0053fba9  MOV EAX,dword ptr [EBP + -0x4]
0053fbac  MOV ECX,dword ptr [EAX + 0x14]
0053fbaf  MOV dword ptr [EBP + -0x8],ECX
0053fbb2  CMP dword ptr [EBP + -0x8],0x1
0053fbb6  JZ 0x0053fbc3
0053fbb8  CMP dword ptr [EBP + -0x8],0x1f4
0053fbbf  JZ 0x0053fbd0
0053fbc1  JMP 0x0053fbfb
0053fbc3  MOV ECX,dword ptr [0x007933f0]
0053fbc9  CALL 0x0053d3c0
0053fbce  JMP 0x0053fc16
0053fbd0  MOV ECX,dword ptr [0x007933ec]
0053fbd6  CALL 0x005408b0
0053fbdb  PUSH 0x1
0053fbdd  MOV EDX,dword ptr [EBP + -0x4]
0053fbe0  MOV EAX,dword ptr [EDX]
0053fbe2  MOV ECX,dword ptr [EBP + -0x4]
0053fbe5  MOV EDX,dword ptr [EAX + 0x4]
0053fbe8  CALL EDX
0053fbea  PUSH 0x0
0053fbec  MOV EAX,dword ptr [EBP + -0x4]
0053fbef  MOV EDX,dword ptr [EAX]
0053fbf1  MOV ECX,dword ptr [EBP + -0x4]
0053fbf4  MOV EAX,dword ptr [EDX + 0x1c]
0053fbf7  CALL EAX
0053fbf9  JMP 0x0053fc16
0053fbfb  XOR ECX,ECX
0053fbfd  JNZ 0x0053fc16
0053fbff  PUSH 0x1b5
0053fc04  PUSH 0x6c6198
0053fc09  PUSH 0x6b2f58
0053fc0e  CALL 0x005e9f20
0053fc13  ADD ESP,0xc
0053fc16  MOV ESP,EBP
0053fc18  POP EBP
0053fc19  RET

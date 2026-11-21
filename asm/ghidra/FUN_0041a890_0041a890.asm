; FUN_0041a890  0041a890
0041a890  PUSH EBP
0041a891  MOV EBP,ESP
0041a893  SUB ESP,0x2c
0041a896  MOV dword ptr [EBP + -0x28],ECX
0041a899  MOV dword ptr [EBP + -0x14],0x2
0041a8a0  MOV dword ptr [EBP + -0x10],0x0
0041a8a7  MOV dword ptr [EBP + -0xc],0x1
0041a8ae  MOV dword ptr [EBP + -0x8],0x3
0041a8b5  MOV dword ptr [EBP + -0x4],0x0
0041a8bc  JMP 0x0041a8c7
0041a8be  MOV EAX,dword ptr [EBP + -0x4]
0041a8c1  ADD EAX,0x1
0041a8c4  MOV dword ptr [EBP + -0x4],EAX
0041a8c7  CMP dword ptr [EBP + -0x4],0x4
0041a8cb  JGE 0x0041a951
0041a8d1  MOV ECX,dword ptr [EBP + -0x4]
0041a8d4  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x14]
0041a8d8  PUSH EDX
0041a8d9  CALL 0x005dcb00
0041a8de  ADD ESP,0x4
0041a8e1  MOV dword ptr [EBP + -0x18],EAX
0041a8e4  MOV EAX,dword ptr [EBP + -0x18]
0041a8e7  MOV CL,byte ptr [EAX + 0x4a0]
0041a8ed  MOV byte ptr [EBP + -0x19],CL
0041a8f0  MOVZX EDX,byte ptr [EBP + -0x19]
0041a8f4  TEST EDX,EDX
0041a8f6  JZ 0x0041a94c
0041a8f8  MOV EAX,dword ptr [EBP + -0x4]
0041a8fb  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x14]
0041a8ff  MOV dword ptr [EBP + -0x20],ECX
0041a902  CMP dword ptr [EBP + -0x20],-0x1
0041a906  JNZ 0x0041a911
0041a908  MOV dword ptr [EBP + -0x24],0xffffffff
0041a90f  JMP 0x0041a93d
0041a911  CMP dword ptr [EBP + -0x20],0x4
0041a915  JNZ 0x0041a920
0041a917  MOV dword ptr [EBP + -0x2c],0x0
0041a91e  JMP 0x0041a937
0041a920  MOV EDX,dword ptr [EBP + -0x20]
0041a923  IMUL EDX,EDX,0x118
0041a929  MOV EAX,dword ptr [EBP + -0x28]
0041a92c  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041a934  MOV dword ptr [EBP + -0x2c],ECX
0041a937  MOV EDX,dword ptr [EBP + -0x2c]
0041a93a  MOV dword ptr [EBP + -0x24],EDX
0041a93d  CMP dword ptr [EBP + -0x24],-0x1
0041a941  JZ 0x0041a94c
0041a943  MOV EAX,dword ptr [EBP + -0x4]
0041a946  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x14]
0041a94a  JMP 0x0041a954
0041a94c  JMP 0x0041a8be
0041a951  OR EAX,0xffffffff
0041a954  MOV ESP,EBP
0041a956  POP EBP
0041a957  RET

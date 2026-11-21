; FUN_0044e770  0044e770
0044e770  PUSH EBP
0044e771  MOV EBP,ESP
0044e773  SUB ESP,0x8
0044e776  MOV dword ptr [EBP + -0x8],ECX
0044e779  MOV ECX,dword ptr [EBP + -0x8]
0044e77c  CALL 0x005e9e20
0044e781  MOV EAX,dword ptr [EBP + -0x8]
0044e784  MOV dword ptr [EAX],0x6b949c
0044e78a  MOV dword ptr [EBP + -0x4],0x0
0044e791  JMP 0x0044e79c
0044e793  MOV ECX,dword ptr [EBP + -0x4]
0044e796  ADD ECX,0x1
0044e799  MOV dword ptr [EBP + -0x4],ECX
0044e79c  CMP dword ptr [EBP + -0x4],0x7
0044e7a0  JGE 0x0044e7b1
0044e7a2  MOV EDX,dword ptr [EBP + -0x4]
0044e7a5  MOV EAX,dword ptr [EBP + -0x8]
0044e7a8  MOV word ptr [EAX + EDX*0x2 + 0x4],0x0
0044e7af  JMP 0x0044e793
0044e7b1  MOV ECX,dword ptr [EBP + -0x8]
0044e7b4  MOV dword ptr [ECX + 0x14],0xffffffff
0044e7bb  MOV EAX,dword ptr [EBP + -0x8]
0044e7be  MOV ESP,EBP
0044e7c0  POP EBP
0044e7c1  RET

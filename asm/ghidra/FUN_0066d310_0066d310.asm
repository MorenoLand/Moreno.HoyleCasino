; FUN_0066d310  0066d310
0066d310  PUSH EBP
0066d311  MOV EBP,ESP
0066d313  SUB ESP,0x8
0066d316  MOV dword ptr [EBP + -0x8],ECX
0066d319  MOV ECX,dword ptr [EBP + -0x8]
0066d31c  CALL 0x005eaaf0
0066d321  MOV EAX,dword ptr [EBP + -0x8]
0066d324  MOV dword ptr [EAX],0x6e0cfc
0066d32a  MOV dword ptr [EBP + -0x4],0x0
0066d331  JMP 0x0066d33c
0066d333  MOV ECX,dword ptr [EBP + -0x4]
0066d336  ADD ECX,0x1
0066d339  MOV dword ptr [EBP + -0x4],ECX
0066d33c  CMP dword ptr [EBP + -0x4],0xa
0066d340  JGE 0x0066d377
0066d342  MOV EDX,dword ptr [EBP + -0x4]
0066d345  MOV EAX,dword ptr [EBP + -0x8]
0066d348  MOV dword ptr [EAX + EDX*0x4 + 0x178],0x0
0066d353  MOV ECX,dword ptr [EBP + -0x4]
0066d356  MOV EDX,dword ptr [EBP + -0x8]
0066d359  MOV dword ptr [EDX + ECX*0x4 + 0x1a0],0x0
0066d364  MOV EAX,dword ptr [EBP + -0x4]
0066d367  MOV ECX,dword ptr [EBP + -0x8]
0066d36a  MOV dword ptr [ECX + EAX*0x4 + 0x1c8],0x0
0066d375  JMP 0x0066d333
0066d377  MOV EDX,dword ptr [EBP + -0x8]
0066d37a  MOV dword ptr [EDX + 0x20c],0x0
0066d384  MOV EAX,dword ptr [EBP + -0x8]
0066d387  MOV dword ptr [EAX + 0x1f4],0x0
0066d391  MOV ECX,dword ptr [EBP + -0x8]
0066d394  MOV dword ptr [ECX + 0x1f8],0x0
0066d39e  MOV EDX,dword ptr [EBP + -0x8]
0066d3a1  MOV dword ptr [EDX + 0x200],0x0
0066d3ab  MOV EAX,dword ptr [EBP + -0x8]
0066d3ae  MOV dword ptr [EAX + 0x1fc],0x0
0066d3b8  MOV ECX,dword ptr [EBP + -0x8]
0066d3bb  MOV dword ptr [ECX + 0x1f0],0x0
0066d3c5  MOV EDX,dword ptr [EBP + -0x8]
0066d3c8  MOV dword ptr [EDX + 0x204],0x0
0066d3d2  MOV EAX,dword ptr [EBP + -0x8]
0066d3d5  MOV dword ptr [EAX + 0x208],0x0
0066d3df  MOV EAX,dword ptr [EBP + -0x8]
0066d3e2  MOV ESP,EBP
0066d3e4  POP EBP
0066d3e5  RET

; FUN_0068b8f0  0068b8f0
0068b8f0  PUSH EBP
0068b8f1  MOV EBP,ESP
0068b8f3  SUB ESP,0x14
0068b8f6  MOV dword ptr [EBP + -0x14],ECX
0068b8f9  MOV EAX,dword ptr [EBP + -0x14]
0068b8fc  MOV ECX,dword ptr [EAX + 0x4]
0068b8ff  MOV EDX,dword ptr [ECX + 0x4]
0068b902  PUSH EDX
0068b903  MOV ECX,dword ptr [EBP + -0x14]
0068b906  CALL 0x0068c340
0068b90b  MOV EAX,dword ptr [EBP + -0x14]
0068b90e  MOV ECX,dword ptr [EAX + 0x4]
0068b911  MOV EDX,dword ptr [EBP + -0x14]
0068b914  MOV EAX,dword ptr [EDX + 0x4]
0068b917  MOV dword ptr [ECX + 0x4],EAX
0068b91a  MOV ECX,dword ptr [EBP + -0x14]
0068b91d  MOV dword ptr [ECX + 0x8],0x0
0068b924  MOV EDX,dword ptr [EBP + -0x14]
0068b927  MOV EAX,dword ptr [EDX + 0x4]
0068b92a  MOV dword ptr [EBP + -0x10],EAX
0068b92d  MOV ECX,dword ptr [EBP + -0x10]
0068b930  MOV EDX,dword ptr [EBP + -0x14]
0068b933  MOV EAX,dword ptr [EDX + 0x4]
0068b936  MOV dword ptr [ECX],EAX
0068b938  MOV ECX,dword ptr [EBP + -0x14]
0068b93b  MOV EDX,dword ptr [ECX + 0x4]
0068b93e  MOV EAX,dword ptr [EBP + -0x14]
0068b941  MOV ECX,dword ptr [EAX + 0x4]
0068b944  MOV dword ptr [EDX + 0x8],ECX
0068b947  MOV ESP,EBP
0068b949  POP EBP
0068b94a  RET

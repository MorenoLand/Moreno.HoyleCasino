; FUN_0062f990  0062f990
0062f990  PUSH EBP
0062f991  MOV EBP,ESP
0062f993  SUB ESP,0x8
0062f996  MOV dword ptr [EBP + -0x8],ECX
0062f999  MOV EAX,dword ptr [EBP + -0x8]
0062f99c  MOV dword ptr [EAX],0x6d9cf4
0062f9a2  MOV ECX,dword ptr [EBP + -0x8]
0062f9a5  CMP dword ptr [ECX + 0x8],0x0
0062f9a9  JNZ 0x0062f9ad
0062f9ab  JMP 0x0062f9d2
0062f9ad  MOV EDX,dword ptr [EBP + -0x8]
0062f9b0  MOV EAX,dword ptr [EDX + 0x8]
0062f9b3  SHL EAX,0x3
0062f9b6  PUSH EAX
0062f9b7  PUSH 0x0
0062f9b9  MOV ECX,dword ptr [EBP + -0x8]
0062f9bc  MOV EDX,dword ptr [ECX + 0x10]
0062f9bf  PUSH EDX
0062f9c0  CALL 0x00686fa2
0062f9c5  ADD ESP,0xc
0062f9c8  MOV EAX,dword ptr [EBP + -0x8]
0062f9cb  MOV dword ptr [EAX + 0x8],0x0
0062f9d2  MOV ECX,dword ptr [EBP + -0x8]
0062f9d5  CMP dword ptr [ECX + 0xc],0x0
0062f9d9  JZ 0x0062f9f0
0062f9db  MOV EDX,dword ptr [EBP + -0x8]
0062f9de  MOV EAX,dword ptr [EDX + 0x10]
0062f9e1  MOV dword ptr [EBP + -0x4],EAX
0062f9e4  MOV ECX,dword ptr [EBP + -0x4]
0062f9e7  PUSH ECX
0062f9e8  CALL 0x00686cae
0062f9ed  ADD ESP,0x4
0062f9f0  MOV ESP,EBP
0062f9f2  POP EBP
0062f9f3  RET

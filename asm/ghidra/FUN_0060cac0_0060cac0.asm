; FUN_0060cac0  0060cac0
0060cac0  PUSH EBP
0060cac1  MOV EBP,ESP
0060cac3  SUB ESP,0xc
0060cac6  MOV dword ptr [EBP + -0xc],ECX
0060cac9  MOV dword ptr [EBP + -0x8],0x0
0060cad0  MOV EAX,dword ptr [EBP + -0xc]
0060cad3  MOV ECX,dword ptr [EAX + 0xc]
0060cad6  MOV dword ptr [EBP + -0x4],ECX
0060cad9  JMP 0x0060caed
0060cadb  MOV EDX,dword ptr [EBP + -0x8]
0060cade  ADD EDX,0x1
0060cae1  MOV dword ptr [EBP + -0x8],EDX
0060cae4  MOV EAX,dword ptr [EBP + -0x4]
0060cae7  ADD EAX,0x4
0060caea  MOV dword ptr [EBP + -0x4],EAX
0060caed  MOV ECX,dword ptr [EBP + -0xc]
0060caf0  MOV EDX,dword ptr [EBP + -0x8]
0060caf3  CMP EDX,dword ptr [ECX + 0x4]
0060caf6  JGE 0x0060cb09
0060caf8  MOV EAX,dword ptr [EBP + -0x4]
0060cafb  MOV ECX,dword ptr [EAX]
0060cafd  CMP ECX,dword ptr [EBP + 0x8]
0060cb00  JNZ 0x0060cb07
0060cb02  MOV EAX,dword ptr [EBP + -0x8]
0060cb05  JMP 0x0060cb0c
0060cb07  JMP 0x0060cadb
0060cb09  OR EAX,0xffffffff
0060cb0c  MOV ESP,EBP
0060cb0e  POP EBP
0060cb0f  RET 0x4

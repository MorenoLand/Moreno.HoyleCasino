; FUN_0062ade0  0062ade0
0062ade0  PUSH EBP
0062ade1  MOV EBP,ESP
0062ade3  SUB ESP,0xc
0062ade6  MOV dword ptr [EBP + -0xc],ECX
0062ade9  MOV EAX,dword ptr [EBP + -0xc]
0062adec  MOV ECX,dword ptr [EAX + 0xc]
0062adef  MOV dword ptr [EBP + -0x4],ECX
0062adf2  MOV EDX,dword ptr [EBP + -0xc]
0062adf5  MOV EAX,dword ptr [EBP + 0x8]
0062adf8  CMP EAX,dword ptr [EDX + 0x8]
0062adfb  JGE 0x0062ae0b
0062adfd  MOV ECX,dword ptr [EBP + 0x8]
0062ae00  MOV EDX,dword ptr [EBP + -0x4]
0062ae03  MOV EAX,dword ptr [EDX + ECX*0x4]
0062ae06  MOV dword ptr [EBP + -0x8],EAX
0062ae09  JMP 0x0062ae12
0062ae0b  MOV dword ptr [EBP + -0x8],0x0
0062ae12  MOV EAX,dword ptr [EBP + -0x8]
0062ae15  MOV ESP,EBP
0062ae17  POP EBP
0062ae18  RET 0x4

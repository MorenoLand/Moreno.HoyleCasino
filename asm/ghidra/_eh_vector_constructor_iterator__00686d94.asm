; `eh_vector_constructor_iterator'  00686d94
00686d94  PUSH 0x10
00686d96  PUSH 0x702a70
00686d9b  CALL 0x0068768c
00686da0  XOR EAX,EAX
00686da2  MOV dword ptr [EBP + -0x20],EAX
00686da5  MOV dword ptr [EBP + -0x4],EAX
00686da8  MOV dword ptr [EBP + -0x1c],EAX
00686dab  MOV EAX,dword ptr [EBP + -0x1c]
00686dae  CMP EAX,dword ptr [EBP + 0x10]
00686db1  JGE 0x00686dc6
00686db3  MOV ESI,dword ptr [EBP + 0x8]
00686db6  MOV ECX,ESI
00686db8  CALL dword ptr [EBP + 0x14]
00686dbb  ADD ESI,dword ptr [EBP + 0xc]
00686dbe  MOV dword ptr [EBP + 0x8],ESI
00686dc1  INC dword ptr [EBP + -0x1c]
00686dc4  JMP 0x00686dab
00686dc6  MOV dword ptr [EBP + -0x20],0x1
00686dcd  MOV dword ptr [EBP + -0x4],0xfffffffe
00686dd4  CALL 0x00686de1
00686dd9  CALL 0x006876d1
00686dde  RET 0x14

; `eh_vector_destructor_iterator'  00686e57
00686e57  PUSH 0xc
00686e59  PUSH 0x702ab0
00686e5e  CALL 0x0068768c
00686e63  AND dword ptr [EBP + -0x1c],0x0
00686e67  MOV ESI,dword ptr [EBP + 0xc]
00686e6a  MOV EAX,ESI
00686e6c  IMUL EAX,dword ptr [EBP + 0x10]
00686e70  ADD dword ptr [EBP + 0x8],EAX
00686e73  AND dword ptr [EBP + -0x4],0x0
00686e77  DEC dword ptr [EBP + 0x10]
00686e7a  JS 0x00686e87
00686e7c  SUB dword ptr [EBP + 0x8],ESI
00686e7f  MOV ECX,dword ptr [EBP + 0x8]
00686e82  CALL dword ptr [EBP + 0x14]
00686e85  JMP 0x00686e77
00686e87  MOV dword ptr [EBP + -0x1c],0x1
00686e8e  MOV dword ptr [EBP + -0x4],0xfffffffe
00686e95  CALL 0x00686ea2
00686e9a  CALL 0x006876d1
00686e9f  RET 0x10

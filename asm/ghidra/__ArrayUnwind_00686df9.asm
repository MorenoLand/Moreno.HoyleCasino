; __ArrayUnwind  00686df9
00686df9  PUSH 0x14
00686dfb  PUSH 0x702a90
00686e00  CALL 0x0068768c
00686e05  AND dword ptr [EBP + -0x4],0x0
00686e09  DEC dword ptr [EBP + 0x10]
00686e0c  JS 0x00686e48
00686e0e  MOV ECX,dword ptr [EBP + 0x8]
00686e11  SUB ECX,dword ptr [EBP + 0xc]
00686e14  MOV dword ptr [EBP + 0x8],ECX
00686e17  CALL dword ptr [EBP + 0x14]
00686e1a  JMP 0x00686e09
00686e48  MOV dword ptr [EBP + -0x4],0xfffffffe
00686e4f  CALL 0x006876d1
00686e54  RET 0x10

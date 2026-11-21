; FUN_0063a0c0  0063a0c0
0063a0c0  PUSH EBP
0063a0c1  MOV EBP,ESP
0063a0c3  PUSH ECX
0063a0c4  MOV dword ptr [EBP + -0x4],ECX
0063a0c7  MOV ECX,dword ptr [EBP + -0x4]
0063a0ca  CALL 0x005e9e20
0063a0cf  MOV EAX,dword ptr [EBP + -0x4]
0063a0d2  MOV dword ptr [EAX],0x6db730
0063a0d8  MOV ECX,dword ptr [EBP + -0x4]
0063a0db  MOV dword ptr [ECX + 0x20],0x0
0063a0e2  PUSH 0x384
0063a0e7  PUSH 0x0
0063a0e9  MOV EDX,dword ptr [EBP + -0x4]
0063a0ec  ADD EDX,0x28
0063a0ef  PUSH EDX
0063a0f0  CALL 0x00686fa2
0063a0f5  ADD ESP,0xc
0063a0f8  MOV EAX,dword ptr [EBP + -0x4]
0063a0fb  MOV dword ptr [EAX + 0xc],0xffffffff
0063a102  MOV ECX,dword ptr [EBP + -0x4]
0063a105  MOV dword ptr [ECX + 0x24],0x0
0063a10c  MOV EAX,dword ptr [EBP + -0x4]
0063a10f  MOV ESP,EBP
0063a111  POP EBP
0063a112  RET

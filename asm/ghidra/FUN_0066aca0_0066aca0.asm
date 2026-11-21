; FUN_0066aca0  0066aca0
0066aca0  PUSH EBP
0066aca1  MOV EBP,ESP
0066aca3  PUSH ECX
0066aca4  MOV dword ptr [EBP + -0x4],ECX
0066aca7  MOV EAX,dword ptr [EBP + -0x4]
0066acaa  MOV dword ptr [EAX],0x6e003c
0066acb0  MOV ECX,dword ptr [EBP + -0x4]
0066acb3  CALL 0x00628220
0066acb8  MOV ECX,dword ptr [EBP + 0x8]
0066acbb  AND ECX,0x1
0066acbe  JZ 0x0066accc
0066acc0  MOV EDX,dword ptr [EBP + -0x4]
0066acc3  PUSH EDX
0066acc4  CALL 0x00686cae
0066acc9  ADD ESP,0x4
0066accc  MOV EAX,dword ptr [EBP + -0x4]
0066accf  MOV ESP,EBP
0066acd1  POP EBP
0066acd2  RET 0x4

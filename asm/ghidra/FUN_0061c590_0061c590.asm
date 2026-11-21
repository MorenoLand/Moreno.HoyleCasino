; FUN_0061c590  0061c590
0061c590  PUSH EBP
0061c591  MOV EBP,ESP
0061c593  SUB ESP,0x8
0061c596  MOV EAX,dword ptr [EBP + 0x14]
0061c599  IMUL EAX,dword ptr [EBP + 0x18]
0061c59d  MOV dword ptr [EBP + -0x8],EAX
0061c5a0  MOV dword ptr [EBP + -0x4],0x0
0061c5a7  JMP 0x0061c5b2
0061c5a9  MOV ECX,dword ptr [EBP + -0x4]
0061c5ac  ADD ECX,0x1
0061c5af  MOV dword ptr [EBP + -0x4],ECX
0061c5b2  MOV EDX,dword ptr [EBP + -0x4]
0061c5b5  CMP EDX,dword ptr [EBP + -0x8]
0061c5b8  JGE 0x0061c5d8
0061c5ba  MOV EAX,dword ptr [EBP + 0xc]
0061c5bd  MOV ECX,dword ptr [EBP + 0x10]
0061c5c0  MOV DL,byte ptr [ECX]
0061c5c2  MOV byte ptr [EAX],DL
0061c5c4  MOV EAX,dword ptr [EBP + 0xc]
0061c5c7  ADD EAX,0x1
0061c5ca  MOV dword ptr [EBP + 0xc],EAX
0061c5cd  MOV ECX,dword ptr [EBP + 0x10]
0061c5d0  ADD ECX,0x1
0061c5d3  MOV dword ptr [EBP + 0x10],ECX
0061c5d6  JMP 0x0061c5a9
0061c5d8  MOV ESP,EBP
0061c5da  POP EBP
0061c5db  RET

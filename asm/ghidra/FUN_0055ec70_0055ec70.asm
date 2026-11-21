; FUN_0055ec70  0055ec70
0055ec70  PUSH EBP
0055ec71  MOV EBP,ESP
0055ec73  SUB ESP,0x8
0055ec76  MOV dword ptr [EBP + -0x8],ECX
0055ec79  MOV dword ptr [EBP + -0x4],0x0
0055ec80  JMP 0x0055ec8b
0055ec82  MOV EAX,dword ptr [EBP + -0x4]
0055ec85  ADD EAX,0x1
0055ec88  MOV dword ptr [EBP + -0x4],EAX
0055ec8b  CMP dword ptr [EBP + -0x4],0x5
0055ec8f  JGE 0x0055ec9d
0055ec91  MOV ECX,dword ptr [EBP + -0x8]
0055ec94  ADD ECX,dword ptr [EBP + -0x4]
0055ec97  MOV byte ptr [ECX + 0x14],0xff
0055ec9b  JMP 0x0055ec82
0055ec9d  PUSH 0x0
0055ec9f  MOV ECX,dword ptr [EBP + -0x8]
0055eca2  CALL 0x0055ecb0
0055eca7  MOV ESP,EBP
0055eca9  POP EBP
0055ecaa  RET

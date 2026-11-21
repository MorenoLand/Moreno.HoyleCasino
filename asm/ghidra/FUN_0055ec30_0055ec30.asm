; FUN_0055ec30  0055ec30
0055ec30  PUSH EBP
0055ec31  MOV EBP,ESP
0055ec33  SUB ESP,0x8
0055ec36  MOV dword ptr [EBP + -0x8],ECX
0055ec39  MOV dword ptr [EBP + -0x4],0x0
0055ec40  JMP 0x0055ec4b
0055ec42  MOV EAX,dword ptr [EBP + -0x4]
0055ec45  ADD EAX,0x1
0055ec48  MOV dword ptr [EBP + -0x4],EAX
0055ec4b  CMP dword ptr [EBP + -0x4],0x5
0055ec4f  JGE 0x0055ec5f
0055ec51  MOV ECX,dword ptr [EBP + -0x8]
0055ec54  ADD ECX,dword ptr [EBP + -0x4]
0055ec57  MOV DL,byte ptr [EBP + -0x4]
0055ec5a  MOV byte ptr [ECX + 0x14],DL
0055ec5d  JMP 0x0055ec42
0055ec5f  MOV ESP,EBP
0055ec61  POP EBP
0055ec62  RET

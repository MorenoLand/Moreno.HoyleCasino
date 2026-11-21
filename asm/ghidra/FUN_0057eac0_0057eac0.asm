; FUN_0057eac0  0057eac0
0057eac0  PUSH EBP
0057eac1  MOV EBP,ESP
0057eac3  PUSH -0x1
0057eac5  PUSH 0x6a695a
0057eaca  MOV EAX,FS:[0x0]
0057ead0  PUSH EAX
0057ead1  SUB ESP,0x2c
0057ead4  MOV EAX,[0x00781870]
0057ead9  XOR EAX,EBP
0057eadb  PUSH EAX
0057eadc  LEA EAX,[EBP + -0xc]
0057eadf  MOV FS:[0x0],EAX
0057eae5  MOV dword ptr [EBP + -0x28],ECX
0057eae8  MOV ECX,dword ptr [EBP + -0x28]
0057eaeb  CALL 0x005fc360
0057eaf0  MOV dword ptr [EBP + -0x2c],EAX
0057eaf3  CMP dword ptr [EBP + -0x2c],0x8
0057eaf7  JA 0x0057f0bd
0057eafd  MOV EAX,dword ptr [EBP + -0x2c]
0057eb00  JMP dword ptr [EAX*0x4 + 0x57f0cc]
0057f0bd  MOV ECX,dword ptr [EBP + -0xc]
0057f0c0  MOV dword ptr FS:[0x0],ECX
0057f0c7  POP ECX
0057f0c8  MOV ESP,EBP
0057f0ca  POP EBP
0057f0cb  RET

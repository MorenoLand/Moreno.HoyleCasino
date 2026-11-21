; FUN_0057c2a0  0057c2a0
0057c2a0  PUSH EBP
0057c2a1  MOV EBP,ESP
0057c2a3  PUSH -0x1
0057c2a5  PUSH 0x6a676a
0057c2aa  MOV EAX,FS:[0x0]
0057c2b0  PUSH EAX
0057c2b1  SUB ESP,0x10
0057c2b4  MOV EAX,[0x00781870]
0057c2b9  XOR EAX,EBP
0057c2bb  PUSH EAX
0057c2bc  LEA EAX,[EBP + -0xc]
0057c2bf  MOV FS:[0x0],EAX
0057c2c5  MOV dword ptr [EBP + -0x18],ECX
0057c2c8  MOV EAX,dword ptr [EBP + -0x18]
0057c2cb  MOV dword ptr [EAX],0x6cbcbc
0057c2d1  MOV dword ptr [EBP + -0x4],0x0
0057c2d8  MOV ECX,dword ptr [EBP + -0x18]
0057c2db  CMP dword ptr [ECX + 0x1d4],0x0
0057c2e2  JZ 0x0057c323
0057c2e4  MOV EDX,dword ptr [EBP + -0x18]
0057c2e7  MOV EAX,dword ptr [EDX + 0x1d4]
0057c2ed  MOV dword ptr [EBP + -0x14],EAX
0057c2f0  MOV ECX,dword ptr [EBP + -0x14]
0057c2f3  MOV dword ptr [EBP + -0x10],ECX
0057c2f6  CMP dword ptr [EBP + -0x10],0x0
0057c2fa  JZ 0x0057c30f
0057c2fc  PUSH 0x1
0057c2fe  MOV EDX,dword ptr [EBP + -0x10]
0057c301  MOV EAX,dword ptr [EDX]
0057c303  MOV ECX,dword ptr [EBP + -0x10]
0057c306  MOV EDX,dword ptr [EAX]
0057c308  CALL EDX
0057c30a  MOV dword ptr [EBP + -0x1c],EAX
0057c30d  JMP 0x0057c316
0057c30f  MOV dword ptr [EBP + -0x1c],0x0
0057c316  MOV EAX,dword ptr [EBP + -0x18]
0057c319  MOV dword ptr [EAX + 0x1d4],0x0
0057c323  MOV dword ptr [EBP + -0x4],0xffffffff
0057c32a  MOV ECX,dword ptr [EBP + -0x18]
0057c32d  CALL 0x005ec760
0057c332  MOV ECX,dword ptr [EBP + -0xc]
0057c335  MOV dword ptr FS:[0x0],ECX
0057c33c  POP ECX
0057c33d  MOV ESP,EBP
0057c33f  POP EBP
0057c340  RET

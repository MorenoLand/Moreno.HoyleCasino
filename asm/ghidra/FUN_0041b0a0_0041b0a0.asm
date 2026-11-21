; FUN_0041b0a0  0041b0a0
0041b0a0  PUSH EBP
0041b0a1  MOV EBP,ESP
0041b0a3  SUB ESP,0x14
0041b0a6  MOV dword ptr [EBP + -0x10],ECX
0041b0a9  CMP dword ptr [EBP + 0xc],-0x1
0041b0ad  JNZ 0x0041b0ea
0041b0af  CMP dword ptr [EBP + 0x8],-0x1
0041b0b3  JNZ 0x0041b0be
0041b0b5  MOV dword ptr [EBP + 0xc],0xffffffff
0041b0bc  JMP 0x0041b0ea
0041b0be  CMP dword ptr [EBP + 0x8],0x4
0041b0c2  JNZ 0x0041b0cd
0041b0c4  MOV dword ptr [EBP + -0x14],0x0
0041b0cb  JMP 0x0041b0e4
0041b0cd  MOV EAX,dword ptr [EBP + 0x8]
0041b0d0  IMUL EAX,EAX,0x118
0041b0d6  MOV ECX,dword ptr [EBP + -0x10]
0041b0d9  MOVSX EDX,byte ptr [ECX + EAX*0x1 + 0x119]
0041b0e1  MOV dword ptr [EBP + -0x14],EDX
0041b0e4  MOV EAX,dword ptr [EBP + -0x14]
0041b0e7  MOV dword ptr [EBP + 0xc],EAX
0041b0ea  MOV ECX,dword ptr [EBP + 0x8]
0041b0ed  IMUL ECX,ECX,0x118
0041b0f3  ADD ECX,dword ptr [EBP + 0xc]
0041b0f6  MOV EDX,dword ptr [EBP + -0x10]
0041b0f9  MOV byte ptr [EDX + ECX*0x1 + 0x10c],0x1
0041b101  MOV EAX,dword ptr [EBP + 0x8]
0041b104  MOV ECX,dword ptr [EBP + -0x10]
0041b107  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x468]
0041b10e  MOV dword ptr [EBP + -0xc],EDX
0041b111  MOV EAX,dword ptr [EBP + 0x8]
0041b114  SHL EAX,0x5
0041b117  MOV ECX,dword ptr [EBP + -0xc]
0041b11a  LEA EDX,[ECX + EAX*0x1 + 0x48]
0041b11e  XOR EAX,EAX
0041b120  SHL EAX,0x3
0041b123  MOV ECX,dword ptr [EDX + EAX*0x1]
0041b126  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
0041b12a  MOV dword ptr [EBP + -0x8],ECX
0041b12d  MOV dword ptr [EBP + -0x4],EDX
0041b130  PUSH 0x0
0041b132  MOV EAX,dword ptr [EBP + 0xc]
0041b135  PUSH EAX
0041b136  LEA ECX,[EBP + -0x8]
0041b139  PUSH ECX
0041b13a  MOV EDX,dword ptr [EBP + 0x8]
0041b13d  MOV EAX,dword ptr [EBP + -0x10]
0041b140  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x468]
0041b147  MOV EDX,dword ptr [EBP + 0x8]
0041b14a  MOV EAX,dword ptr [EBP + -0x10]
0041b14d  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x468]
0041b154  MOV EAX,dword ptr [ECX]
0041b156  MOV ECX,EDX
0041b158  MOV EDX,dword ptr [EAX + 0xc4]
0041b15e  CALL EDX
0041b160  MOV ESP,EBP
0041b162  POP EBP
0041b163  RET 0x8

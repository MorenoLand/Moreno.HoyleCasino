; FUN_0040f2a0  0040f2a0
0040f2a0  PUSH EBP
0040f2a1  MOV EBP,ESP
0040f2a3  SUB ESP,0x14
0040f2a6  MOV dword ptr [EBP + -0x10],ECX
0040f2a9  MOV dword ptr [EBP + -0x4],0x0
0040f2b0  JMP 0x0040f2bb
0040f2b2  MOV EAX,dword ptr [EBP + -0x4]
0040f2b5  ADD EAX,0x1
0040f2b8  MOV dword ptr [EBP + -0x4],EAX
0040f2bb  CMP dword ptr [EBP + -0x4],0x1e
0040f2bf  JGE 0x0040f373
0040f2c5  MOV ECX,dword ptr [EBP + 0xc]
0040f2c8  IMUL ECX,ECX,0x78
0040f2cb  MOV EDX,dword ptr [EBP + -0x10]
0040f2ce  LEA EAX,[EDX + ECX*0x1 + 0xae0]
0040f2d5  MOV ECX,dword ptr [EBP + -0x4]
0040f2d8  CMP dword ptr [EAX + ECX*0x4],0x0
0040f2dc  JZ 0x0040f36e
0040f2e2  MOV EDX,dword ptr [EBP + 0xc]
0040f2e5  IMUL EDX,EDX,0x78
0040f2e8  MOV EAX,dword ptr [EBP + -0x10]
0040f2eb  LEA ECX,[EAX + EDX*0x1 + 0xae0]
0040f2f2  MOV EDX,dword ptr [EBP + -0x4]
0040f2f5  MOV EAX,dword ptr [ECX + EDX*0x4]
0040f2f8  MOV ECX,dword ptr [EBP + 0xc]
0040f2fb  IMUL ECX,ECX,0x78
0040f2fe  MOV EDX,dword ptr [EBP + -0x10]
0040f301  LEA ECX,[EDX + ECX*0x1 + 0xae0]
0040f308  MOV EDX,dword ptr [EBP + -0x4]
0040f30b  MOV ECX,dword ptr [ECX + EDX*0x4]
0040f30e  MOV EAX,dword ptr [EAX]
0040f310  MOV EDX,dword ptr [EAX + 0x70]
0040f313  CALL EDX
0040f315  MOV EAX,dword ptr [EBP + 0xc]
0040f318  IMUL EAX,EAX,0x78
0040f31b  MOV ECX,dword ptr [EBP + -0x10]
0040f31e  LEA EDX,[ECX + EAX*0x1 + 0xae0]
0040f325  MOV EAX,dword ptr [EBP + -0x4]
0040f328  MOV ECX,dword ptr [EDX + EAX*0x4]
0040f32b  MOV dword ptr [EBP + -0xc],ECX
0040f32e  MOV EDX,dword ptr [EBP + -0xc]
0040f331  MOV dword ptr [EBP + -0x8],EDX
0040f334  CMP dword ptr [EBP + -0x8],0x0
0040f338  JZ 0x0040f34d
0040f33a  PUSH 0x1
0040f33c  MOV EAX,dword ptr [EBP + -0x8]
0040f33f  MOV EDX,dword ptr [EAX]
0040f341  MOV ECX,dword ptr [EBP + -0x8]
0040f344  MOV EAX,dword ptr [EDX]
0040f346  CALL EAX
0040f348  MOV dword ptr [EBP + -0x14],EAX
0040f34b  JMP 0x0040f354
0040f34d  MOV dword ptr [EBP + -0x14],0x0
0040f354  MOV ECX,dword ptr [EBP + 0xc]
0040f357  IMUL ECX,ECX,0x78
0040f35a  MOV EDX,dword ptr [EBP + -0x10]
0040f35d  LEA EAX,[EDX + ECX*0x1 + 0xae0]
0040f364  MOV ECX,dword ptr [EBP + -0x4]
0040f367  MOV dword ptr [EAX + ECX*0x4],0x0
0040f36e  JMP 0x0040f2b2
0040f373  MOV EDX,dword ptr [EBP + 0xc]
0040f376  PUSH EDX
0040f377  MOV EAX,dword ptr [EBP + 0x8]
0040f37a  PUSH EAX
0040f37b  MOV ECX,dword ptr [EBP + -0x10]
0040f37e  CALL 0x005ccc70
0040f383  MOV ESP,EBP
0040f385  POP EBP
0040f386  RET 0x8

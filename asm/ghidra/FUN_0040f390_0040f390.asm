; FUN_0040f390  0040f390
0040f390  PUSH EBP
0040f391  MOV EBP,ESP
0040f393  SUB ESP,0x18
0040f396  MOV dword ptr [EBP + -0x14],ECX
0040f399  MOV ECX,dword ptr [EBP + -0x14]
0040f39c  CALL 0x005ccd90
0040f3a1  MOV dword ptr [EBP + -0x4],0x0
0040f3a8  JMP 0x0040f3b3
0040f3aa  MOV EAX,dword ptr [EBP + -0x4]
0040f3ad  ADD EAX,0x1
0040f3b0  MOV dword ptr [EBP + -0x4],EAX
0040f3b3  CMP dword ptr [EBP + -0x4],0x4
0040f3b7  JGE 0x0040f48e
0040f3bd  MOV dword ptr [EBP + -0x8],0x0
0040f3c4  JMP 0x0040f3cf
0040f3c6  MOV ECX,dword ptr [EBP + -0x8]
0040f3c9  ADD ECX,0x1
0040f3cc  MOV dword ptr [EBP + -0x8],ECX
0040f3cf  CMP dword ptr [EBP + -0x8],0x1e
0040f3d3  JGE 0x0040f489
0040f3d9  MOV EDX,dword ptr [EBP + -0x4]
0040f3dc  IMUL EDX,EDX,0x78
0040f3df  MOV EAX,dword ptr [EBP + -0x14]
0040f3e2  LEA ECX,[EAX + EDX*0x1 + 0xae0]
0040f3e9  MOV EDX,dword ptr [EBP + -0x8]
0040f3ec  CMP dword ptr [ECX + EDX*0x4],0x0
0040f3f0  JZ 0x0040f484
0040f3f6  MOV EAX,dword ptr [EBP + -0x4]
0040f3f9  IMUL EAX,EAX,0x78
0040f3fc  MOV ECX,dword ptr [EBP + -0x14]
0040f3ff  LEA EDX,[ECX + EAX*0x1 + 0xae0]
0040f406  MOV EAX,dword ptr [EBP + -0x8]
0040f409  MOV ECX,dword ptr [EDX + EAX*0x4]
0040f40c  MOV EDX,dword ptr [EBP + -0x4]
0040f40f  IMUL EDX,EDX,0x78
0040f412  MOV EAX,dword ptr [EBP + -0x14]
0040f415  LEA EDX,[EAX + EDX*0x1 + 0xae0]
0040f41c  MOV EAX,dword ptr [EBP + -0x8]
0040f41f  MOV EDX,dword ptr [EDX + EAX*0x4]
0040f422  MOV EAX,dword ptr [ECX]
0040f424  MOV ECX,EDX
0040f426  MOV EDX,dword ptr [EAX + 0x70]
0040f429  CALL EDX
0040f42b  MOV EAX,dword ptr [EBP + -0x4]
0040f42e  IMUL EAX,EAX,0x78
0040f431  MOV ECX,dword ptr [EBP + -0x14]
0040f434  LEA EDX,[ECX + EAX*0x1 + 0xae0]
0040f43b  MOV EAX,dword ptr [EBP + -0x8]
0040f43e  MOV ECX,dword ptr [EDX + EAX*0x4]
0040f441  MOV dword ptr [EBP + -0x10],ECX
0040f444  MOV EDX,dword ptr [EBP + -0x10]
0040f447  MOV dword ptr [EBP + -0xc],EDX
0040f44a  CMP dword ptr [EBP + -0xc],0x0
0040f44e  JZ 0x0040f463
0040f450  PUSH 0x1
0040f452  MOV EAX,dword ptr [EBP + -0xc]
0040f455  MOV EDX,dword ptr [EAX]
0040f457  MOV ECX,dword ptr [EBP + -0xc]
0040f45a  MOV EAX,dword ptr [EDX]
0040f45c  CALL EAX
0040f45e  MOV dword ptr [EBP + -0x18],EAX
0040f461  JMP 0x0040f46a
0040f463  MOV dword ptr [EBP + -0x18],0x0
0040f46a  MOV ECX,dword ptr [EBP + -0x4]
0040f46d  IMUL ECX,ECX,0x78
0040f470  MOV EDX,dword ptr [EBP + -0x14]
0040f473  LEA EAX,[EDX + ECX*0x1 + 0xae0]
0040f47a  MOV ECX,dword ptr [EBP + -0x8]
0040f47d  MOV dword ptr [EAX + ECX*0x4],0x0
0040f484  JMP 0x0040f3c6
0040f489  JMP 0x0040f3aa
0040f48e  MOV ESP,EBP
0040f490  POP EBP
0040f491  RET

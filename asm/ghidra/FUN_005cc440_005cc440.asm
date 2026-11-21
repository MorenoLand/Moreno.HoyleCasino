; FUN_005cc440  005cc440
005cc440  PUSH EBP
005cc441  MOV EBP,ESP
005cc443  SUB ESP,0x8
005cc446  PUSH ESI
005cc447  MOV dword ptr [EBP + -0x8],ECX
005cc44a  MOV dword ptr [EBP + -0x4],0x0
005cc451  JMP 0x005cc45c
005cc453  MOV EAX,dword ptr [EBP + -0x4]
005cc456  ADD EAX,0x1
005cc459  MOV dword ptr [EBP + -0x4],EAX
005cc45c  CMP dword ptr [EBP + -0x4],0x1e
005cc460  JGE 0x005cc4d1
005cc462  MOV ECX,dword ptr [EBP + 0x8]
005cc465  IMUL ECX,ECX,0x1e0
005cc46b  MOV EDX,dword ptr [EBP + -0x8]
005cc46e  LEA EAX,[EDX + ECX*0x1 + 0x17c]
005cc475  MOV ECX,dword ptr [EBP + 0xc]
005cc478  IMUL ECX,ECX,0x78
005cc47b  ADD EAX,ECX
005cc47d  MOV EDX,dword ptr [EBP + -0x4]
005cc480  CMP dword ptr [EAX + EDX*0x4],0x0
005cc484  JZ 0x005cc4cf
005cc486  MOV EAX,dword ptr [EBP + 0x8]
005cc489  IMUL EAX,EAX,0x1e0
005cc48f  MOV ECX,dword ptr [EBP + -0x8]
005cc492  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005cc499  MOV EAX,dword ptr [EBP + 0xc]
005cc49c  IMUL EAX,EAX,0x78
005cc49f  ADD EDX,EAX
005cc4a1  MOV ECX,dword ptr [EBP + -0x4]
005cc4a4  MOV EDX,dword ptr [EDX + ECX*0x4]
005cc4a7  MOV EAX,dword ptr [EBP + 0xc]
005cc4aa  IMUL EAX,EAX,0x78
005cc4ad  MOV ECX,dword ptr [EBP + 0x8]
005cc4b0  IMUL ECX,ECX,0x1e0
005cc4b6  MOV ESI,dword ptr [EBP + -0x8]
005cc4b9  LEA ECX,[ESI + ECX*0x1 + 0x17c]
005cc4c0  ADD ECX,EAX
005cc4c2  MOV EAX,dword ptr [EBP + -0x4]
005cc4c5  MOV ECX,dword ptr [ECX + EAX*0x4]
005cc4c8  MOV EDX,dword ptr [EDX]
005cc4ca  MOV EAX,dword ptr [EDX + 0x70]
005cc4cd  CALL EAX
005cc4cf  JMP 0x005cc453
005cc4d1  POP ESI
005cc4d2  MOV ESP,EBP
005cc4d4  POP EBP
005cc4d5  RET 0x8

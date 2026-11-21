; FUN_0040eca0  0040eca0
0040eca0  PUSH EBP
0040eca1  MOV EBP,ESP
0040eca3  SUB ESP,0xc
0040eca6  MOV dword ptr [EBP + -0xc],ECX
0040eca9  MOV ECX,dword ptr [EBP + -0xc]
0040ecac  CALL 0x005cc1d0
0040ecb1  MOV EAX,dword ptr [EBP + -0xc]
0040ecb4  MOV dword ptr [EAX],0x6b38fc
0040ecba  MOV dword ptr [EBP + -0x4],0x0
0040ecc1  JMP 0x0040eccc
0040ecc3  MOV ECX,dword ptr [EBP + -0x4]
0040ecc6  ADD ECX,0x1
0040ecc9  MOV dword ptr [EBP + -0x4],ECX
0040eccc  CMP dword ptr [EBP + -0x4],0x4
0040ecd0  JGE 0x0040ed08
0040ecd2  MOV dword ptr [EBP + -0x8],0x0
0040ecd9  JMP 0x0040ece4
0040ecdb  MOV EDX,dword ptr [EBP + -0x8]
0040ecde  ADD EDX,0x1
0040ece1  MOV dword ptr [EBP + -0x8],EDX
0040ece4  CMP dword ptr [EBP + -0x8],0x1e
0040ece8  JGE 0x0040ed06
0040ecea  MOV EAX,dword ptr [EBP + -0x4]
0040eced  IMUL EAX,EAX,0x78
0040ecf0  MOV ECX,dword ptr [EBP + -0xc]
0040ecf3  LEA EDX,[ECX + EAX*0x1 + 0xae0]
0040ecfa  MOV EAX,dword ptr [EBP + -0x8]
0040ecfd  MOV dword ptr [EDX + EAX*0x4],0x0
0040ed04  JMP 0x0040ecdb
0040ed06  JMP 0x0040ecc3
0040ed08  MOV EAX,dword ptr [EBP + -0xc]
0040ed0b  MOV ESP,EBP
0040ed0d  POP EBP
0040ed0e  RET

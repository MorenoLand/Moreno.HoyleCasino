; FUN_0044d120  0044d120
0044d120  PUSH EBP
0044d121  MOV EBP,ESP
0044d123  SUB ESP,0x24
0044d126  PUSH ESI
0044d127  MOV dword ptr [EBP + -0x24],ECX
0044d12a  MOV dword ptr [EBP + -0x4],0x0
0044d131  JMP 0x0044d13c
0044d133  MOV EAX,dword ptr [EBP + -0x4]
0044d136  ADD EAX,0x1
0044d139  MOV dword ptr [EBP + -0x4],EAX
0044d13c  CMP dword ptr [EBP + -0x4],0x4
0044d140  JGE 0x0044d1fc
0044d146  MOV dword ptr [EBP + -0x8],0x0
0044d14d  JMP 0x0044d158
0044d14f  MOV ECX,dword ptr [EBP + -0x8]
0044d152  ADD ECX,0x1
0044d155  MOV dword ptr [EBP + -0x8],ECX
0044d158  CMP dword ptr [EBP + -0x8],0x3
0044d15c  JGE 0x0044d1f7
0044d162  MOV EDX,dword ptr [EBP + -0x4]
0044d165  IMUL EDX,EDX,0x3
0044d168  ADD EDX,dword ptr [EBP + -0x8]
0044d16b  MOV dword ptr [EBP + -0xc],EDX
0044d16e  PUSH 0x0
0044d170  MOV EAX,dword ptr [EBP + -0x4]
0044d173  PUSH EAX
0044d174  MOV ECX,dword ptr [EBP + -0xc]
0044d177  MOV EDX,dword ptr [EBP + -0x24]
0044d17a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
0044d17e  CALL 0x005cb7d0
0044d183  MOVZX EAX,AL
0044d186  TEST EAX,EAX
0044d188  JZ 0x0044d1cc
0044d18a  MOV ECX,dword ptr [EBP + -0xc]
0044d18d  MOV EDX,dword ptr [EBP + -0x24]
0044d190  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
0044d194  MOV dword ptr [EBP + -0x20],EAX
0044d197  MOV ECX,dword ptr [EBP + -0x4]
0044d19a  SHL ECX,0x5
0044d19d  MOV EDX,dword ptr [EBP + -0x20]
0044d1a0  LEA EAX,[EDX + ECX*0x1 + 0x48]
0044d1a4  XOR ECX,ECX
0044d1a6  SHL ECX,0x3
0044d1a9  MOV EDX,dword ptr [EAX + ECX*0x1]
0044d1ac  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
0044d1b0  MOV dword ptr [EBP + -0x14],EDX
0044d1b3  MOV dword ptr [EBP + -0x10],EAX
0044d1b6  MOV ECX,dword ptr [EBP + -0x14]
0044d1b9  MOV EDX,dword ptr [EBP + -0x10]
0044d1bc  MOV EAX,dword ptr [EBP + -0xc]
0044d1bf  MOV ESI,dword ptr [EBP + -0x24]
0044d1c2  MOV dword ptr [ESI + EAX*0x8 + 0x38],ECX
0044d1c6  MOV dword ptr [ESI + EAX*0x8 + 0x3c],EDX
0044d1ca  JMP 0x0044d1f2
0044d1cc  PUSH 0x0
0044d1ce  PUSH 0x0
0044d1d0  CALL 0x0064c8a0
0044d1d5  ADD ESP,0x8
0044d1d8  MOV dword ptr [EBP + -0x1c],EAX
0044d1db  MOV dword ptr [EBP + -0x18],EDX
0044d1de  MOV ECX,dword ptr [EBP + -0xc]
0044d1e1  MOV EDX,dword ptr [EBP + -0x24]
0044d1e4  MOV EAX,dword ptr [EBP + -0x1c]
0044d1e7  MOV dword ptr [EDX + ECX*0x8 + 0x38],EAX
0044d1eb  MOV EAX,dword ptr [EBP + -0x18]
0044d1ee  MOV dword ptr [EDX + ECX*0x8 + 0x3c],EAX
0044d1f2  JMP 0x0044d14f
0044d1f7  JMP 0x0044d133
0044d1fc  POP ESI
0044d1fd  MOV ESP,EBP
0044d1ff  POP EBP
0044d200  RET

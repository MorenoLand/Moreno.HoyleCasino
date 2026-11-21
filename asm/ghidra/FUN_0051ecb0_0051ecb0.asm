; FUN_0051ecb0  0051ecb0
0051ecb0  PUSH EBP
0051ecb1  MOV EBP,ESP
0051ecb3  PUSH ECX
0051ecb4  MOV dword ptr [EBP + -0x4],ECX
0051ecb7  MOV EAX,dword ptr [EBP + -0x4]
0051ecba  CMP dword ptr [EAX + 0x22c],0x4
0051ecc1  JL 0x0051ecda
0051ecc3  PUSH 0x551
0051ecc8  PUSH 0x6c23ec
0051eccd  PUSH 0x6c265c
0051ecd2  CALL 0x005e9f20
0051ecd7  ADD ESP,0xc
0051ecda  MOV EDX,dword ptr [EBP + 0x8]
0051ecdd  PUSH EDX
0051ecde  MOV EAX,dword ptr [EBP + -0x4]
0051ece1  MOV ECX,dword ptr [EAX + 0x22c]
0051ece7  IMUL ECX,ECX,0x64
0051ecea  MOV EDX,dword ptr [EBP + -0x4]
0051eced  LEA EAX,[EDX + ECX*0x1 + 0x230]
0051ecf4  PUSH EAX
0051ecf5  CALL 0x00686d8e
0051ecfa  ADD ESP,0x8
0051ecfd  MOV ECX,dword ptr [EBP + -0x4]
0051ed00  MOV EDX,dword ptr [ECX + 0x22c]
0051ed06  MOV EAX,dword ptr [EBP + -0x4]
0051ed09  MOV ECX,dword ptr [EBP + 0xc]
0051ed0c  MOV dword ptr [EAX + EDX*0x4 + 0x3c0],ECX
0051ed13  MOV EDX,dword ptr [EBP + -0x4]
0051ed16  MOV EAX,dword ptr [EDX + 0x22c]
0051ed1c  ADD EAX,0x1
0051ed1f  MOV ECX,dword ptr [EBP + -0x4]
0051ed22  MOV dword ptr [ECX + 0x22c],EAX
0051ed28  MOV ESP,EBP
0051ed2a  POP EBP
0051ed2b  RET 0x8

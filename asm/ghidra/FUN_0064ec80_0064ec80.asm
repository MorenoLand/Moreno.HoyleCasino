; FUN_0064ec80  0064ec80
0064ec80  PUSH EBP
0064ec81  MOV EBP,ESP
0064ec83  PUSH -0x1
0064ec85  PUSH 0x6ac05b
0064ec8a  MOV EAX,FS:[0x0]
0064ec90  PUSH EAX
0064ec91  SUB ESP,0x10
0064ec94  MOV EAX,[0x00781870]
0064ec99  XOR EAX,EBP
0064ec9b  PUSH EAX
0064ec9c  LEA EAX,[EBP + -0xc]
0064ec9f  MOV FS:[0x0],EAX
0064eca5  MOV dword ptr [EBP + -0x18],ECX
0064eca8  CMP dword ptr [0x016306b0],0x0
0064ecaf  JNZ 0x0064ed2d
0064ecb1  PUSH 0x1ec
0064ecb6  CALL 0x00686d82
0064ecbb  ADD ESP,0x4
0064ecbe  MOV dword ptr [EBP + -0x14],EAX
0064ecc1  MOV dword ptr [EBP + -0x4],0x0
0064ecc8  CMP dword ptr [EBP + -0x14],0x0
0064eccc  JZ 0x0064ecef
0064ecce  MOV AL,byte ptr [EBP + 0x18]
0064ecd1  PUSH EAX
0064ecd2  MOV ECX,dword ptr [EBP + 0x14]
0064ecd5  PUSH ECX
0064ecd6  MOV EDX,dword ptr [EBP + 0x10]
0064ecd9  PUSH EDX
0064ecda  MOV AL,byte ptr [EBP + 0xc]
0064ecdd  PUSH EAX
0064ecde  MOV CL,byte ptr [EBP + 0x8]
0064ece1  PUSH ECX
0064ece2  MOV ECX,dword ptr [EBP + -0x14]
0064ece5  CALL 0x0065dbd0
0064ecea  MOV dword ptr [EBP + -0x1c],EAX
0064eced  JMP 0x0064ecf6
0064ecef  MOV dword ptr [EBP + -0x1c],0x0
0064ecf6  MOV EDX,dword ptr [EBP + -0x1c]
0064ecf9  MOV dword ptr [EBP + -0x10],EDX
0064ecfc  MOV dword ptr [EBP + -0x4],0xffffffff
0064ed03  MOV EAX,dword ptr [EBP + -0x10]
0064ed06  MOV [0x016306b0],EAX
0064ed0b  MOV ECX,dword ptr [0x016306b0]
0064ed11  MOV EDX,dword ptr [ECX]
0064ed13  MOV ECX,dword ptr [0x016306b0]
0064ed19  MOV EAX,dword ptr [EDX + 0x3c]
0064ed1c  CALL EAX
0064ed1e  PUSH 0x0
0064ed20  PUSH 0x0
0064ed22  MOV ECX,dword ptr [0x016306b0]
0064ed28  CALL 0x005f7340
0064ed2d  MOV ECX,dword ptr [0x016306b0]
0064ed33  CALL 0x0065e770
0064ed38  MOV ECX,dword ptr [EBP + -0xc]
0064ed3b  MOV dword ptr FS:[0x0],ECX
0064ed42  POP ECX
0064ed43  MOV ESP,EBP
0064ed45  POP EBP
0064ed46  RET 0x14

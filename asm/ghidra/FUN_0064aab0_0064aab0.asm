; FUN_0064aab0  0064aab0
0064aab0  PUSH EBP
0064aab1  MOV EBP,ESP
0064aab3  PUSH -0x1
0064aab5  PUSH 0x6abed0
0064aaba  MOV EAX,FS:[0x0]
0064aac0  PUSH EAX
0064aac1  SUB ESP,0x8
0064aac4  MOV EAX,[0x00781870]
0064aac9  XOR EAX,EBP
0064aacb  PUSH EAX
0064aacc  LEA EAX,[EBP + -0xc]
0064aacf  MOV FS:[0x0],EAX
0064aad5  MOV dword ptr [EBP + -0x14],ECX
0064aad8  MOV ECX,dword ptr [EBP + -0x14]
0064aadb  CALL 0x005f5bf0
0064aae0  MOV dword ptr [EBP + -0x4],0x0
0064aae7  MOV EAX,dword ptr [EBP + -0x14]
0064aaea  MOV dword ptr [EAX],0x6dc9e4
0064aaf0  MOV ECX,dword ptr [EBP + -0x14]
0064aaf3  MOV EDX,dword ptr [EBP + 0x8]
0064aaf6  MOV dword ptr [ECX + 0x184],EDX
0064aafc  MOV EAX,dword ptr [EBP + -0x14]
0064aaff  MOV ECX,dword ptr [EBP + 0xc]
0064ab02  MOV dword ptr [EAX + 0x4],ECX
0064ab05  MOV EDX,dword ptr [EBP + -0x14]
0064ab08  MOV dword ptr [EDX + 0x18c],0x0
0064ab12  MOV EAX,dword ptr [EBP + -0x14]
0064ab15  MOV dword ptr [EAX + 0x190],0x0
0064ab1f  MOV ECX,dword ptr [EBP + -0x14]
0064ab22  MOV dword ptr [ECX + 0x194],0x0
0064ab2c  MOV dword ptr [EBP + -0x10],0x0
0064ab33  JMP 0x0064ab3e
0064ab35  MOV EDX,dword ptr [EBP + -0x10]
0064ab38  ADD EDX,0x1
0064ab3b  MOV dword ptr [EBP + -0x10],EDX
0064ab3e  CMP dword ptr [EBP + -0x10],0x3
0064ab42  JGE 0x0064ab57
0064ab44  MOV EAX,dword ptr [EBP + -0x10]
0064ab47  MOV ECX,dword ptr [EBP + -0x14]
0064ab4a  MOV dword ptr [ECX + EAX*0x4 + 0x198],0x0
0064ab55  JMP 0x0064ab35
0064ab57  MOV EDX,dword ptr [EBP + -0x14]
0064ab5a  MOV dword ptr [EDX + 0x1a4],0x0
0064ab64  PUSH 0x1
0064ab66  MOV ECX,dword ptr [EBP + -0x14]
0064ab69  CALL 0x005eb700
0064ab6e  MOV dword ptr [EBP + -0x4],0xffffffff
0064ab75  MOV EAX,dword ptr [EBP + -0x14]
0064ab78  MOV ECX,dword ptr [EBP + -0xc]
0064ab7b  MOV dword ptr FS:[0x0],ECX
0064ab82  POP ECX
0064ab83  MOV ESP,EBP
0064ab85  POP EBP
0064ab86  RET 0x8

; FUN_0068dc60  0068dc60
0068dc60  PUSH EBP
0068dc61  MOV EBP,ESP
0068dc63  SUB ESP,0x64
0068dc66  MOV dword ptr [EBP + -0x64],ECX
0068dc69  MOV EAX,dword ptr [EBP + -0x64]
0068dc6c  MOV ECX,dword ptr [EAX + 0x4]
0068dc6f  MOV dword ptr [EBP + -0x1c],ECX
0068dc72  MOV dword ptr [EBP + -0x8],0x0
0068dc79  MOV EDX,dword ptr [EBP + -0x1c]
0068dc7c  MOV dword ptr [EBP + -0x4],EDX
0068dc7f  CMP dword ptr [EBP + -0x64],0x0
0068dc83  JNZ 0x0068dc8b
0068dc85  CALL dword ptr [0x006b2274]
0068dc8b  MOV EAX,dword ptr [EBP + -0x64]
0068dc8e  MOV dword ptr [EBP + -0x8],EAX
0068dc91  MOV ECX,dword ptr [EBP + -0x64]
0068dc94  MOV EDX,dword ptr [ECX + 0x4]
0068dc97  MOV dword ptr [EBP + -0x20],EDX
0068dc9a  MOV EAX,dword ptr [EBP + -0x20]
0068dc9d  MOV ECX,dword ptr [EAX]
0068dc9f  MOV dword ptr [EBP + -0x24],ECX
0068dca2  MOV dword ptr [EBP + -0x10],0x0
0068dca9  MOV EDX,dword ptr [EBP + -0x24]
0068dcac  MOV dword ptr [EBP + -0xc],EDX
0068dcaf  CMP dword ptr [EBP + -0x64],0x0
0068dcb3  JNZ 0x0068dcbb
0068dcb5  CALL dword ptr [0x006b2274]
0068dcbb  MOV EAX,dword ptr [EBP + -0x64]
0068dcbe  MOV dword ptr [EBP + -0x10],EAX
0068dcc1  MOV ECX,dword ptr [EBP + -0x4]
0068dcc4  PUSH ECX
0068dcc5  MOV EDX,dword ptr [EBP + -0x8]
0068dcc8  PUSH EDX
0068dcc9  MOV EAX,dword ptr [EBP + -0xc]
0068dccc  PUSH EAX
0068dccd  MOV ECX,dword ptr [EBP + -0x10]
0068dcd0  PUSH ECX
0068dcd1  LEA EDX,[EBP + -0x18]
0068dcd4  PUSH EDX
0068dcd5  MOV ECX,dword ptr [EBP + -0x64]
0068dcd8  CALL 0x0068e850
0068dcdd  MOV EAX,dword ptr [EBP + -0x64]
0068dce0  MOV ECX,dword ptr [EAX + 0x4]
0068dce3  MOV dword ptr [EBP + -0x5c],ECX
0068dce6  MOV EDX,dword ptr [EBP + -0x64]
0068dce9  MOV EAX,dword ptr [EDX + 0x4]
0068dcec  MOV dword ptr [EBP + -0x60],EAX
0068dcef  MOV ECX,dword ptr [EBP + -0x60]
0068dcf2  PUSH ECX
0068dcf3  CALL 0x00686cae
0068dcf8  ADD ESP,0x4
0068dcfb  MOV EDX,dword ptr [EBP + -0x64]
0068dcfe  MOV dword ptr [EDX + 0x4],0x0
0068dd05  MOV EAX,dword ptr [EBP + -0x64]
0068dd08  MOV dword ptr [EAX + 0x8],0x0
0068dd0f  MOV ESP,EBP
0068dd11  POP EBP
0068dd12  RET

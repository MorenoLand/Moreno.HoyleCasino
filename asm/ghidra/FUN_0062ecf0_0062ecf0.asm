; FUN_0062ecf0  0062ecf0
0062ecf0  PUSH EBP
0062ecf1  MOV EBP,ESP
0062ecf3  PUSH -0x1
0062ecf5  PUSH 0x6ab7f1
0062ecfa  MOV EAX,FS:[0x0]
0062ed00  PUSH EAX
0062ed01  SUB ESP,0x1c
0062ed04  MOV EAX,[0x00781870]
0062ed09  XOR EAX,EBP
0062ed0b  PUSH EAX
0062ed0c  LEA EAX,[EBP + -0xc]
0062ed0f  MOV FS:[0x0],EAX
0062ed15  MOV dword ptr [EBP + -0x28],ECX
0062ed18  MOV EAX,dword ptr [EBP + -0x28]
0062ed1b  MOV dword ptr [EAX],0x6d9ba4
0062ed21  MOV dword ptr [EBP + -0x4],0x0
0062ed28  MOV ECX,dword ptr [EBP + -0x28]
0062ed2b  CMP dword ptr [ECX + 0x20],0x0
0062ed2f  JZ 0x0062ed45
0062ed31  PUSH 0x23
0062ed33  PUSH 0x6d9c18
0062ed38  PUSH 0x6d9c0c
0062ed3d  CALL 0x005e9f20
0062ed42  ADD ESP,0xc
0062ed45  MOV EAX,dword ptr [EBP + -0x28]
0062ed48  CMP dword ptr [EAX + 0x24],0x0
0062ed4c  JZ 0x0062ed62
0062ed4e  PUSH 0x24
0062ed50  PUSH 0x6d9c18
0062ed55  PUSH 0x6d9c04
0062ed5a  CALL 0x005e9f20
0062ed5f  ADD ESP,0xc
0062ed62  MOV EDX,dword ptr [EBP + -0x28]
0062ed65  MOV EAX,dword ptr [EDX + 0x2c]
0062ed68  MOV dword ptr [EBP + -0x14],EAX
0062ed6b  MOV ECX,dword ptr [EBP + -0x14]
0062ed6e  PUSH ECX
0062ed6f  CALL 0x00686cae
0062ed74  ADD ESP,0x4
0062ed77  MOV EDX,dword ptr [EBP + -0x28]
0062ed7a  MOV dword ptr [EDX + 0x2c],0x0
0062ed81  MOV EAX,dword ptr [EBP + -0x28]
0062ed84  MOV ECX,dword ptr [EAX + 0x14]
0062ed87  MOV dword ptr [EBP + -0x10],ECX
0062ed8a  JMP 0x0062ed95
0062ed8c  MOV EDX,dword ptr [EBP + -0x10]
0062ed8f  ADD EDX,0x8
0062ed92  MOV dword ptr [EBP + -0x10],EDX
0062ed95  MOV EAX,dword ptr [EBP + -0x28]
0062ed98  ADD EAX,0x4
0062ed9b  MOV dword ptr [EBP + -0x20],EAX
0062ed9e  MOV ECX,dword ptr [EBP + -0x20]
0062eda1  MOV EDX,dword ptr [ECX + 0x8]
0062eda4  MOV EAX,dword ptr [EBP + -0x20]
0062eda7  MOV ECX,dword ptr [EAX + 0x10]
0062edaa  LEA EDX,[ECX + EDX*0x8]
0062edad  CMP dword ptr [EBP + -0x10],EDX
0062edb0  JZ 0x0062eddd
0062edb2  MOV EAX,dword ptr [EBP + -0x10]
0062edb5  MOV ECX,dword ptr [EAX]
0062edb7  MOV dword ptr [EBP + -0x18],ECX
0062edba  MOV EDX,dword ptr [EBP + -0x18]
0062edbd  PUSH EDX
0062edbe  CALL 0x00686cae
0062edc3  ADD ESP,0x4
0062edc6  MOV EAX,dword ptr [EBP + -0x10]
0062edc9  MOV ECX,dword ptr [EAX + 0x4]
0062edcc  MOV dword ptr [EBP + -0x1c],ECX
0062edcf  MOV EDX,dword ptr [EBP + -0x1c]
0062edd2  PUSH EDX
0062edd3  CALL 0x00686cae
0062edd8  ADD ESP,0x4
0062eddb  JMP 0x0062ed8c
0062eddd  MOV dword ptr [EBP + -0x4],0xffffffff
0062ede4  MOV ECX,dword ptr [EBP + -0x28]
0062ede7  ADD ECX,0x4
0062edea  CALL 0x0062f990
0062edef  MOV ECX,dword ptr [EBP + -0xc]
0062edf2  MOV dword ptr FS:[0x0],ECX
0062edf9  POP ECX
0062edfa  MOV ESP,EBP
0062edfc  POP EBP
0062edfd  RET

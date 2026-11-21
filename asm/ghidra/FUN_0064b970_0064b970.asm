; FUN_0064b970  0064b970
0064b970  PUSH EBP
0064b971  MOV EBP,ESP
0064b973  PUSH -0x1
0064b975  PUSH 0x6abf78
0064b97a  MOV EAX,FS:[0x0]
0064b980  PUSH EAX
0064b981  SUB ESP,0x1c
0064b984  MOV EAX,[0x00781870]
0064b989  XOR EAX,EBP
0064b98b  PUSH EAX
0064b98c  LEA EAX,[EBP + -0xc]
0064b98f  MOV FS:[0x0],EAX
0064b995  MOV dword ptr [EBP + -0x20],ECX
0064b998  MOV EAX,dword ptr [EBP + -0x20]
0064b99b  MOV dword ptr [EAX],0x6dcab4
0064b9a1  MOV dword ptr [EBP + -0x4],0x0
0064b9a8  MOV ECX,dword ptr [EBP + -0x20]
0064b9ab  CMP dword ptr [ECX + 0x17c],0x0
0064b9b2  JZ 0x0064b9f3
0064b9b4  MOV EDX,dword ptr [EBP + -0x20]
0064b9b7  MOV EAX,dword ptr [EDX + 0x17c]
0064b9bd  MOV dword ptr [EBP + -0x14],EAX
0064b9c0  MOV ECX,dword ptr [EBP + -0x14]
0064b9c3  MOV dword ptr [EBP + -0x10],ECX
0064b9c6  CMP dword ptr [EBP + -0x10],0x0
0064b9ca  JZ 0x0064b9df
0064b9cc  PUSH 0x1
0064b9ce  MOV EDX,dword ptr [EBP + -0x10]
0064b9d1  MOV EAX,dword ptr [EDX]
0064b9d3  MOV ECX,dword ptr [EBP + -0x10]
0064b9d6  MOV EDX,dword ptr [EAX]
0064b9d8  CALL EDX
0064b9da  MOV dword ptr [EBP + -0x24],EAX
0064b9dd  JMP 0x0064b9e6
0064b9df  MOV dword ptr [EBP + -0x24],0x0
0064b9e6  MOV EAX,dword ptr [EBP + -0x20]
0064b9e9  MOV dword ptr [EAX + 0x17c],0x0
0064b9f3  MOV ECX,dword ptr [EBP + -0x20]
0064b9f6  CMP dword ptr [ECX + 0x180],0x0
0064b9fd  JZ 0x0064ba3e
0064b9ff  MOV EDX,dword ptr [EBP + -0x20]
0064ba02  MOV EAX,dword ptr [EDX + 0x180]
0064ba08  MOV dword ptr [EBP + -0x1c],EAX
0064ba0b  MOV ECX,dword ptr [EBP + -0x1c]
0064ba0e  MOV dword ptr [EBP + -0x18],ECX
0064ba11  CMP dword ptr [EBP + -0x18],0x0
0064ba15  JZ 0x0064ba2a
0064ba17  PUSH 0x1
0064ba19  MOV EDX,dword ptr [EBP + -0x18]
0064ba1c  MOV EAX,dword ptr [EDX]
0064ba1e  MOV ECX,dword ptr [EBP + -0x18]
0064ba21  MOV EDX,dword ptr [EAX]
0064ba23  CALL EDX
0064ba25  MOV dword ptr [EBP + -0x28],EAX
0064ba28  JMP 0x0064ba31
0064ba2a  MOV dword ptr [EBP + -0x28],0x0
0064ba31  MOV EAX,dword ptr [EBP + -0x20]
0064ba34  MOV dword ptr [EAX + 0x180],0x0
0064ba3e  MOV dword ptr [EBP + -0x4],0xffffffff
0064ba45  MOV ECX,dword ptr [EBP + -0x20]
0064ba48  CALL 0x005eac00
0064ba4d  MOV ECX,dword ptr [EBP + -0xc]
0064ba50  MOV dword ptr FS:[0x0],ECX
0064ba57  POP ECX
0064ba58  MOV ESP,EBP
0064ba5a  POP EBP
0064ba5b  RET

; FUN_0044abf0  0044abf0
0044abf0  PUSH EBP
0044abf1  MOV EBP,ESP
0044abf3  PUSH -0x1
0044abf5  PUSH 0x69ee1b
0044abfa  MOV EAX,FS:[0x0]
0044ac00  PUSH EAX
0044ac01  SUB ESP,0x34
0044ac04  MOV EAX,[0x00781870]
0044ac09  XOR EAX,EBP
0044ac0b  PUSH EAX
0044ac0c  LEA EAX,[EBP + -0xc]
0044ac0f  MOV FS:[0x0],EAX
0044ac15  MOV dword ptr [EBP + -0x30],ECX
0044ac18  MOV EAX,dword ptr [EBP + -0x30]
0044ac1b  MOV dword ptr [EAX],0x6b8d3c
0044ac21  MOV dword ptr [EBP + -0x4],0x0
0044ac28  MOV dword ptr [0x0079070c],0x0
0044ac32  MOV ECX,dword ptr [0x00790710]
0044ac38  MOV dword ptr [EBP + -0x14],ECX
0044ac3b  MOV EDX,dword ptr [EBP + -0x14]
0044ac3e  MOV dword ptr [EBP + -0x10],EDX
0044ac41  CMP dword ptr [EBP + -0x10],0x0
0044ac45  JZ 0x0044ac5a
0044ac47  PUSH 0x1
0044ac49  MOV EAX,dword ptr [EBP + -0x10]
0044ac4c  MOV EDX,dword ptr [EAX]
0044ac4e  MOV ECX,dword ptr [EBP + -0x10]
0044ac51  MOV EAX,dword ptr [EDX]
0044ac53  CALL EAX
0044ac55  MOV dword ptr [EBP + -0x34],EAX
0044ac58  JMP 0x0044ac61
0044ac5a  MOV dword ptr [EBP + -0x34],0x0
0044ac61  MOV dword ptr [0x00790710],0x0
0044ac6b  MOV ECX,dword ptr [0x00790714]
0044ac71  MOV dword ptr [EBP + -0x1c],ECX
0044ac74  MOV EDX,dword ptr [EBP + -0x1c]
0044ac77  MOV dword ptr [EBP + -0x18],EDX
0044ac7a  CMP dword ptr [EBP + -0x18],0x0
0044ac7e  JZ 0x0044ac93
0044ac80  PUSH 0x1
0044ac82  MOV EAX,dword ptr [EBP + -0x18]
0044ac85  MOV EDX,dword ptr [EAX]
0044ac87  MOV ECX,dword ptr [EBP + -0x18]
0044ac8a  MOV EAX,dword ptr [EDX]
0044ac8c  CALL EAX
0044ac8e  MOV dword ptr [EBP + -0x38],EAX
0044ac91  JMP 0x0044ac9a
0044ac93  MOV dword ptr [EBP + -0x38],0x0
0044ac9a  MOV dword ptr [0x00790714],0x0
0044aca4  MOV ECX,dword ptr [0x00790718]
0044acaa  MOV dword ptr [EBP + -0x24],ECX
0044acad  MOV EDX,dword ptr [EBP + -0x24]
0044acb0  MOV dword ptr [EBP + -0x20],EDX
0044acb3  CMP dword ptr [EBP + -0x20],0x0
0044acb7  JZ 0x0044accc
0044acb9  PUSH 0x1
0044acbb  MOV EAX,dword ptr [EBP + -0x20]
0044acbe  MOV EDX,dword ptr [EAX]
0044acc0  MOV ECX,dword ptr [EBP + -0x20]
0044acc3  MOV EAX,dword ptr [EDX]
0044acc5  CALL EAX
0044acc7  MOV dword ptr [EBP + -0x3c],EAX
0044acca  JMP 0x0044acd3
0044accc  MOV dword ptr [EBP + -0x3c],0x0
0044acd3  MOV dword ptr [0x00790718],0x0
0044acdd  MOV ECX,dword ptr [0x0079071c]
0044ace3  MOV dword ptr [EBP + -0x2c],ECX
0044ace6  MOV EDX,dword ptr [EBP + -0x2c]
0044ace9  MOV dword ptr [EBP + -0x28],EDX
0044acec  CMP dword ptr [EBP + -0x28],0x0
0044acf0  JZ 0x0044ad05
0044acf2  PUSH 0x1
0044acf4  MOV EAX,dword ptr [EBP + -0x28]
0044acf7  MOV EDX,dword ptr [EAX]
0044acf9  MOV ECX,dword ptr [EBP + -0x28]
0044acfc  MOV EAX,dword ptr [EDX]
0044acfe  CALL EAX
0044ad00  MOV dword ptr [EBP + -0x40],EAX
0044ad03  JMP 0x0044ad0c
0044ad05  MOV dword ptr [EBP + -0x40],0x0
0044ad0c  MOV dword ptr [0x0079071c],0x0
0044ad16  MOV dword ptr [EBP + -0x4],0xffffffff
0044ad1d  MOV ECX,dword ptr [EBP + -0x30]
0044ad20  CALL 0x005d7bd0
0044ad25  MOV ECX,dword ptr [EBP + -0xc]
0044ad28  MOV dword ptr FS:[0x0],ECX
0044ad2f  POP ECX
0044ad30  MOV ESP,EBP
0044ad32  POP EBP
0044ad33  RET

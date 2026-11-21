; FUN_0053fc80  0053fc80
0053fc80  PUSH EBP
0053fc81  MOV EBP,ESP
0053fc83  PUSH -0x1
0053fc85  PUSH 0x6a4dcb
0053fc8a  MOV EAX,FS:[0x0]
0053fc90  PUSH EAX
0053fc91  SUB ESP,0x10
0053fc94  MOV EAX,[0x00781870]
0053fc99  XOR EAX,EBP
0053fc9b  PUSH EAX
0053fc9c  LEA EAX,[EBP + -0xc]
0053fc9f  MOV FS:[0x0],EAX
0053fca5  MOV dword ptr [EBP + -0x18],ECX
0053fca8  PUSH 0x80
0053fcad  CALL 0x00686d82
0053fcb2  ADD ESP,0x4
0053fcb5  MOV dword ptr [EBP + -0x14],EAX
0053fcb8  MOV dword ptr [EBP + -0x4],0x0
0053fcbf  CMP dword ptr [EBP + -0x14],0x0
0053fcc3  JZ 0x0053fcd2
0053fcc5  MOV ECX,dword ptr [EBP + -0x14]
0053fcc8  CALL 0x0053e9b0
0053fccd  MOV dword ptr [EBP + -0x1c],EAX
0053fcd0  JMP 0x0053fcd9
0053fcd2  MOV dword ptr [EBP + -0x1c],0x0
0053fcd9  MOV EAX,dword ptr [EBP + -0x1c]
0053fcdc  MOV dword ptr [EBP + -0x10],EAX
0053fcdf  MOV dword ptr [EBP + -0x4],0xffffffff
0053fce6  MOV EAX,dword ptr [EBP + -0x10]
0053fce9  MOV ECX,dword ptr [EBP + -0xc]
0053fcec  MOV dword ptr FS:[0x0],ECX
0053fcf3  POP ECX
0053fcf4  MOV ESP,EBP
0053fcf6  POP EBP
0053fcf7  RET

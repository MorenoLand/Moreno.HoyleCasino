; FUN_0064ee70  0064ee70
0064ee70  PUSH EBP
0064ee71  MOV EBP,ESP
0064ee73  PUSH -0x1
0064ee75  PUSH 0x6ac0a7
0064ee7a  MOV EAX,FS:[0x0]
0064ee80  PUSH EAX
0064ee81  SUB ESP,0x10
0064ee84  MOV EAX,[0x00781870]
0064ee89  XOR EAX,EBP
0064ee8b  PUSH EAX
0064ee8c  LEA EAX,[EBP + -0xc]
0064ee8f  MOV FS:[0x0],EAX
0064ee95  MOV dword ptr [EBP + -0x18],ECX
0064ee98  CMP dword ptr [0x0163068c],0x0
0064ee9f  JNZ 0x0064ef0a
0064eea1  PUSH 0x1ec
0064eea6  CALL 0x00686d82
0064eeab  ADD ESP,0x4
0064eeae  MOV dword ptr [EBP + -0x14],EAX
0064eeb1  MOV dword ptr [EBP + -0x4],0x0
0064eeb8  CMP dword ptr [EBP + -0x14],0x0
0064eebc  JZ 0x0064eecb
0064eebe  MOV ECX,dword ptr [EBP + -0x14]
0064eec1  CALL 0x0063b600
0064eec6  MOV dword ptr [EBP + -0x1c],EAX
0064eec9  JMP 0x0064eed2
0064eecb  MOV dword ptr [EBP + -0x1c],0x0
0064eed2  MOV EAX,dword ptr [EBP + -0x1c]
0064eed5  MOV dword ptr [EBP + -0x10],EAX
0064eed8  MOV dword ptr [EBP + -0x4],0xffffffff
0064eedf  MOV ECX,dword ptr [EBP + -0x10]
0064eee2  MOV dword ptr [0x0163068c],ECX
0064eee8  MOV EDX,dword ptr [0x0163068c]
0064eeee  MOV EAX,dword ptr [EDX]
0064eef0  MOV ECX,dword ptr [0x0163068c]
0064eef6  MOV EDX,dword ptr [EAX + 0x3c]
0064eef9  CALL EDX
0064eefb  PUSH 0x0
0064eefd  PUSH 0x0
0064eeff  MOV ECX,dword ptr [0x0163068c]
0064ef05  CALL 0x005f7340
0064ef0a  MOV EAX,dword ptr [EBP + 0x8]
0064ef0d  PUSH EAX
0064ef0e  MOV ECX,dword ptr [0x0163068c]
0064ef14  CALL 0x0063d610
0064ef19  MOV ECX,dword ptr [EBP + -0xc]
0064ef1c  MOV dword ptr FS:[0x0],ECX
0064ef23  POP ECX
0064ef24  MOV ESP,EBP
0064ef26  POP EBP
0064ef27  RET 0x4

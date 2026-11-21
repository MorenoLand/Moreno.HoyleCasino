; FUN_0064ed80  0064ed80
0064ed80  PUSH EBP
0064ed81  MOV EBP,ESP
0064ed83  PUSH -0x1
0064ed85  PUSH 0x6ac081
0064ed8a  MOV EAX,FS:[0x0]
0064ed90  PUSH EAX
0064ed91  SUB ESP,0x10
0064ed94  MOV EAX,[0x00781870]
0064ed99  XOR EAX,EBP
0064ed9b  PUSH EAX
0064ed9c  LEA EAX,[EBP + -0xc]
0064ed9f  MOV FS:[0x0],EAX
0064eda5  MOV dword ptr [EBP + -0x18],ECX
0064eda8  CMP dword ptr [0x016306a0],0x0
0064edaf  JNZ 0x0064ee1a
0064edb1  PUSH 0x1c0
0064edb6  CALL 0x00686d82
0064edbb  ADD ESP,0x4
0064edbe  MOV dword ptr [EBP + -0x14],EAX
0064edc1  MOV dword ptr [EBP + -0x4],0x0
0064edc8  CMP dword ptr [EBP + -0x14],0x0
0064edcc  JZ 0x0064eddb
0064edce  MOV ECX,dword ptr [EBP + -0x14]
0064edd1  CALL 0x00654930
0064edd6  MOV dword ptr [EBP + -0x1c],EAX
0064edd9  JMP 0x0064ede2
0064eddb  MOV dword ptr [EBP + -0x1c],0x0
0064ede2  MOV EAX,dword ptr [EBP + -0x1c]
0064ede5  MOV dword ptr [EBP + -0x10],EAX
0064ede8  MOV dword ptr [EBP + -0x4],0xffffffff
0064edef  MOV ECX,dword ptr [EBP + -0x10]
0064edf2  MOV dword ptr [0x016306a0],ECX
0064edf8  MOV EDX,dword ptr [0x016306a0]
0064edfe  MOV EAX,dword ptr [EDX]
0064ee00  MOV ECX,dword ptr [0x016306a0]
0064ee06  MOV EDX,dword ptr [EAX + 0x3c]
0064ee09  CALL EDX
0064ee0b  PUSH 0x0
0064ee0d  PUSH 0x0
0064ee0f  MOV ECX,dword ptr [0x016306a0]
0064ee15  CALL 0x005f7340
0064ee1a  MOV ECX,dword ptr [0x016306a0]
0064ee20  CALL 0x005f85d0
0064ee25  MOV ECX,dword ptr [EBP + -0xc]
0064ee28  MOV dword ptr FS:[0x0],ECX
0064ee2f  POP ECX
0064ee30  MOV ESP,EBP
0064ee32  POP EBP
0064ee33  RET

; FUN_0068fa90  0068fa90
0068fa90  PUSH EBP
0068fa91  MOV EBP,ESP
0068fa93  PUSH -0x1
0068fa95  PUSH 0x6ae319
0068fa9a  MOV EAX,FS:[0x0]
0068faa0  PUSH EAX
0068faa1  PUSH ECX
0068faa2  MOV EAX,[0x00781870]
0068faa7  XOR EAX,EBP
0068faa9  PUSH EAX
0068faaa  LEA EAX,[EBP + -0xc]
0068faad  MOV FS:[0x0],EAX
0068fab3  MOV EAX,dword ptr [EBP + 0x8]
0068fab6  ADD EAX,0xc
0068fab9  MOV dword ptr [EBP + -0x10],EAX
0068fabc  MOV dword ptr [EBP + -0x4],0x0
0068fac3  MOV ECX,dword ptr [EBP + -0x10]
0068fac6  ADD ECX,0x1c
0068fac9  CALL dword ptr [0x006b20f4]
0068facf  MOV dword ptr [EBP + -0x4],0xffffffff
0068fad6  MOV ECX,dword ptr [EBP + -0x10]
0068fad9  CALL dword ptr [0x006b20f4]
0068fadf  XOR ECX,ECX
0068fae1  AND ECX,0x1
0068fae4  JZ 0x0068faf2
0068fae6  MOV EDX,dword ptr [EBP + 0x8]
0068fae9  PUSH EDX
0068faea  CALL 0x00686cae
0068faef  ADD ESP,0x4
0068faf2  MOV ECX,dword ptr [EBP + -0xc]
0068faf5  MOV dword ptr FS:[0x0],ECX
0068fafc  POP ECX
0068fafd  MOV ESP,EBP
0068faff  POP EBP
0068fb00  RET

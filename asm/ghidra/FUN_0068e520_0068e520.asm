; FUN_0068e520  0068e520
0068e520  PUSH EBP
0068e521  MOV EBP,ESP
0068e523  PUSH -0x1
0068e525  PUSH 0x6ae1d0
0068e52a  MOV EAX,FS:[0x0]
0068e530  PUSH EAX
0068e531  PUSH ECX
0068e532  SUB ESP,0x50
0068e535  PUSH EBX
0068e536  PUSH ESI
0068e537  PUSH EDI
0068e538  MOV EAX,[0x00781870]
0068e53d  XOR EAX,EBP
0068e53f  PUSH EAX
0068e540  LEA EAX,[EBP + -0xc]
0068e543  MOV FS:[0x0],EAX
0068e549  MOV dword ptr [EBP + -0x10],ESP
0068e54c  MOV dword ptr [EBP + -0x54],ECX
0068e54f  PUSH 0x1
0068e551  MOV ECX,dword ptr [EBP + -0x54]
0068e554  ADD ECX,0x1
0068e557  CALL 0x0068ee80
0068e55c  MOV dword ptr [EBP + -0x18],EAX
0068e55f  MOV dword ptr [EBP + -0x14],0x0
0068e566  MOV dword ptr [EBP + -0x4],0x0
0068e56d  MOV dword ptr [EBP + -0x1c],0x0
0068e574  MOV EAX,dword ptr [EBP + -0x18]
0068e577  MOV dword ptr [EBP + -0x3c],EAX
0068e57a  MOV ECX,dword ptr [EBP + -0x3c]
0068e57d  MOV dword ptr [EBP + -0x40],ECX
0068e580  CMP dword ptr [EBP + -0x40],0x0
0068e584  JZ 0x0068e596
0068e586  MOV EDX,dword ptr [EBP + -0x40]
0068e589  MOV EAX,dword ptr [EBP + -0x1c]
0068e58c  MOV dword ptr [EDX],EAX
0068e58e  MOV ECX,dword ptr [EBP + -0x40]
0068e591  MOV dword ptr [EBP + -0x58],ECX
0068e594  JMP 0x0068e59d
0068e596  MOV dword ptr [EBP + -0x58],0x0
0068e59d  MOV EDX,dword ptr [EBP + -0x14]
0068e5a0  ADD EDX,0x1
0068e5a3  MOV dword ptr [EBP + -0x14],EDX
0068e5a6  MOV dword ptr [EBP + -0x20],0x0
0068e5ad  MOV EAX,dword ptr [EBP + -0x18]
0068e5b0  ADD EAX,0x4
0068e5b3  MOV dword ptr [EBP + -0x44],EAX
0068e5b6  MOV ECX,dword ptr [EBP + -0x44]
0068e5b9  MOV dword ptr [EBP + -0x48],ECX
0068e5bc  CMP dword ptr [EBP + -0x48],0x0
0068e5c0  JZ 0x0068e5d2
0068e5c2  MOV EDX,dword ptr [EBP + -0x48]
0068e5c5  MOV EAX,dword ptr [EBP + -0x20]
0068e5c8  MOV dword ptr [EDX],EAX
0068e5ca  MOV ECX,dword ptr [EBP + -0x48]
0068e5cd  MOV dword ptr [EBP + -0x5c],ECX
0068e5d0  JMP 0x0068e5d9
0068e5d2  MOV dword ptr [EBP + -0x5c],0x0
0068e5d9  MOV EDX,dword ptr [EBP + -0x14]
0068e5dc  ADD EDX,0x1
0068e5df  MOV dword ptr [EBP + -0x14],EDX
0068e5e2  MOV dword ptr [EBP + -0x24],0x0
0068e5e9  MOV EAX,dword ptr [EBP + -0x18]
0068e5ec  ADD EAX,0x8
0068e5ef  MOV dword ptr [EBP + -0x4c],EAX
0068e5f2  MOV ECX,dword ptr [EBP + -0x4c]
0068e5f5  MOV dword ptr [EBP + -0x50],ECX
0068e5f8  CMP dword ptr [EBP + -0x50],0x0
0068e5fc  JZ 0x0068e60e
0068e5fe  MOV EDX,dword ptr [EBP + -0x50]
0068e601  MOV EAX,dword ptr [EBP + -0x24]
0068e604  MOV dword ptr [EDX],EAX
0068e606  MOV ECX,dword ptr [EBP + -0x50]
0068e609  MOV dword ptr [EBP + -0x60],ECX
0068e60c  JMP 0x0068e615
0068e60e  MOV dword ptr [EBP + -0x60],0x0
0068e615  JMP 0x0068e639

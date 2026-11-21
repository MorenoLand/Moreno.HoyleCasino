; FUN_0059b4d0  0059b4d0
0059b4d0  PUSH EBP
0059b4d1  MOV EBP,ESP
0059b4d3  SUB ESP,0xc
0059b4d6  MOV dword ptr [EBP + -0xc],ECX
0059b4d9  MOV ECX,dword ptr [EBP + -0xc]
0059b4dc  CALL 0x005e9e20
0059b4e1  MOV EAX,dword ptr [EBP + -0xc]
0059b4e4  MOV dword ptr [EAX],0x6ced80
0059b4ea  MOV dword ptr [EBP + -0x4],0x0
0059b4f1  JMP 0x0059b4fc
0059b4f3  MOV ECX,dword ptr [EBP + -0x4]
0059b4f6  ADD ECX,0x1
0059b4f9  MOV dword ptr [EBP + -0x4],ECX
0059b4fc  CMP dword ptr [EBP + -0x4],0x6
0059b500  JGE 0x0059b523
0059b502  MOV EDX,dword ptr [EBP + -0x4]
0059b505  MOV EAX,dword ptr [EBP + -0xc]
0059b508  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
0059b510  MOV ECX,dword ptr [EBP + -0x4]
0059b513  MOV EDX,dword ptr [EBP + -0xc]
0059b516  MOV dword ptr [EDX + ECX*0x4 + 0x84],0x0
0059b521  JMP 0x0059b4f3
0059b523  MOV dword ptr [EBP + -0x8],0x0
0059b52a  JMP 0x0059b535
0059b52c  MOV EAX,dword ptr [EBP + -0x8]
0059b52f  ADD EAX,0x1
0059b532  MOV dword ptr [EBP + -0x8],EAX
0059b535  CMP dword ptr [EBP + -0x8],0xc
0059b539  JGE 0x0059b559
0059b53b  MOV ECX,dword ptr [EBP + -0x8]
0059b53e  MOV EDX,dword ptr [EBP + -0xc]
0059b541  MOV dword ptr [EDX + ECX*0x4 + 0x1c],0x0
0059b549  MOV EAX,dword ptr [EBP + -0x8]
0059b54c  MOV ECX,dword ptr [EBP + -0xc]
0059b54f  MOV dword ptr [ECX + EAX*0x4 + 0x54],0x0
0059b557  JMP 0x0059b52c
0059b559  MOV EDX,dword ptr [EBP + -0xc]
0059b55c  MOV dword ptr [EDX + 0x4c],0x0
0059b563  MOV EAX,dword ptr [EBP + -0xc]
0059b566  MOV dword ptr [EAX + 0x9c],0x0
0059b570  MOV ECX,dword ptr [EBP + -0xc]
0059b573  MOV dword ptr [ECX + 0xa0],0x0
0059b57d  MOV EDX,dword ptr [EBP + -0xc]
0059b580  MOV dword ptr [EDX + 0xa4],0x0
0059b58a  MOV EAX,dword ptr [EBP + -0xc]
0059b58d  MOV dword ptr [EAX + 0x50],0x0
0059b594  MOV EAX,dword ptr [EBP + -0xc]
0059b597  MOV ESP,EBP
0059b599  POP EBP
0059b59a  RET

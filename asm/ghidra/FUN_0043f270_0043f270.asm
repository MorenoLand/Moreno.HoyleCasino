; FUN_0043f270  0043f270
0043f270  PUSH EBP
0043f271  MOV EBP,ESP
0043f273  SUB ESP,0x8
0043f276  MOV dword ptr [EBP + -0x8],ECX
0043f279  MOV ECX,dword ptr [EBP + -0x8]
0043f27c  CALL 0x005e9e20
0043f281  MOV EAX,dword ptr [EBP + -0x8]
0043f284  MOV dword ptr [EAX],0x6b8300
0043f28a  MOV ECX,dword ptr [EBP + -0x8]
0043f28d  MOV dword ptr [ECX + 0x18],0x0
0043f294  MOV dword ptr [EBP + -0x4],0x0
0043f29b  JMP 0x0043f2a6
0043f29d  MOV EDX,dword ptr [EBP + -0x4]
0043f2a0  ADD EDX,0x1
0043f2a3  MOV dword ptr [EBP + -0x4],EDX
0043f2a6  CMP dword ptr [EBP + -0x4],0x5
0043f2aa  JGE 0x0043f2fa
0043f2ac  MOV EAX,dword ptr [EBP + -0x4]
0043f2af  MOV ECX,dword ptr [EBP + -0x8]
0043f2b2  MOV dword ptr [ECX + EAX*0x4 + 0x4],0x0
0043f2ba  MOV EDX,dword ptr [EBP + -0x4]
0043f2bd  MOV EAX,dword ptr [EBP + -0x8]
0043f2c0  MOV dword ptr [EAX + EDX*0x4 + 0x20],0x0
0043f2c8  MOV ECX,dword ptr [EBP + -0x4]
0043f2cb  MOV EDX,dword ptr [EBP + -0x8]
0043f2ce  MOV dword ptr [EDX + ECX*0x4 + 0x70],0x0
0043f2d6  MOV EAX,dword ptr [EBP + -0x4]
0043f2d9  MOV ECX,dword ptr [EBP + -0x8]
0043f2dc  MOV dword ptr [ECX + EAX*0x4 + 0x84],0x0
0043f2e7  MOV EDX,dword ptr [EBP + -0x4]
0043f2ea  MOV EAX,dword ptr [EBP + -0x8]
0043f2ed  MOV dword ptr [EAX + EDX*0x4 + 0xc8],0x0
0043f2f8  JMP 0x0043f29d
0043f2fa  MOV dword ptr [EBP + -0x4],0x0
0043f301  JMP 0x0043f30c
0043f303  MOV ECX,dword ptr [EBP + -0x4]
0043f306  ADD ECX,0x1
0043f309  MOV dword ptr [EBP + -0x4],ECX
0043f30c  CMP dword ptr [EBP + -0x4],0xf
0043f310  JGE 0x0043f322
0043f312  MOV EDX,dword ptr [EBP + -0x4]
0043f315  MOV EAX,dword ptr [EBP + -0x8]
0043f318  MOV dword ptr [EAX + EDX*0x4 + 0x34],0x0
0043f320  JMP 0x0043f303
0043f322  MOV ECX,dword ptr [EBP + -0x8]
0043f325  MOV dword ptr [ECX + 0x98],0x0
0043f32f  MOV EDX,dword ptr [EBP + -0x8]
0043f332  MOV dword ptr [EDX + 0x9c],0x0
0043f33c  MOV EAX,dword ptr [EBP + -0x8]
0043f33f  MOV dword ptr [EAX + 0xa0],0x0
0043f349  MOV ECX,dword ptr [EBP + -0x8]
0043f34c  MOV dword ptr [ECX + 0xa4],0x0
0043f356  MOV EDX,dword ptr [EBP + -0x8]
0043f359  MOV dword ptr [EDX + 0xa8],0x0
0043f363  MOV EAX,dword ptr [EBP + -0x8]
0043f366  MOV dword ptr [EAX + 0xac],0x0
0043f370  MOV dword ptr [EBP + -0x4],0x0
0043f377  JMP 0x0043f382
0043f379  MOV ECX,dword ptr [EBP + -0x4]
0043f37c  ADD ECX,0x1
0043f37f  MOV dword ptr [EBP + -0x4],ECX
0043f382  CMP dword ptr [EBP + -0x4],0x5
0043f386  JGE 0x0043f3bd
0043f388  MOV EDX,dword ptr [EBP + -0x4]
0043f38b  MOV EAX,dword ptr [EBP + -0x8]
0043f38e  MOV dword ptr [EAX + EDX*0x4 + 0xb4],0x0
0043f399  MOV ECX,dword ptr [EBP + -0x4]
0043f39c  MOV EDX,dword ptr [EBP + -0x8]
0043f39f  MOV dword ptr [EDX + ECX*0x4 + 0xdc],0x0
0043f3aa  MOV EAX,dword ptr [EBP + -0x4]
0043f3ad  MOV ECX,dword ptr [EBP + -0x8]
0043f3b0  MOV dword ptr [ECX + EAX*0x4 + 0xf0],0x0
0043f3bb  JMP 0x0043f379
0043f3bd  MOV dword ptr [EBP + -0x4],0x0
0043f3c4  JMP 0x0043f3cf
0043f3c6  MOV EDX,dword ptr [EBP + -0x4]
0043f3c9  ADD EDX,0x1
0043f3cc  MOV dword ptr [EBP + -0x4],EDX
0043f3cf  CMP dword ptr [EBP + -0x4],0x3
0043f3d3  JGE 0x0043f3e8
0043f3d5  MOV EAX,dword ptr [EBP + -0x4]
0043f3d8  MOV ECX,dword ptr [EBP + -0x8]
0043f3db  MOV dword ptr [ECX + EAX*0x4 + 0x104],0x0
0043f3e6  JMP 0x0043f3c6
0043f3e8  MOV EDX,dword ptr [EBP + -0x8]
0043f3eb  MOV dword ptr [EDX + 0x110],0x0
0043f3f5  MOV dword ptr [EBP + -0x4],0x0
0043f3fc  JMP 0x0043f407
0043f3fe  MOV EAX,dword ptr [EBP + -0x4]
0043f401  ADD EAX,0x1
0043f404  MOV dword ptr [EBP + -0x4],EAX
0043f407  CMP dword ptr [EBP + -0x4],0x2
0043f40b  JGE 0x0043f420
0043f40d  MOV ECX,dword ptr [EBP + -0x4]
0043f410  MOV EDX,dword ptr [EBP + -0x8]
0043f413  MOV dword ptr [EDX + ECX*0x4 + 0x114],0x0
0043f41e  JMP 0x0043f3fe
0043f420  MOV EAX,dword ptr [EBP + -0x8]
0043f423  MOV ESP,EBP
0043f425  POP EBP
0043f426  RET

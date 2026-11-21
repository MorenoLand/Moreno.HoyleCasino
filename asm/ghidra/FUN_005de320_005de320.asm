; FUN_005de320  005de320
005de320  PUSH EBP
005de321  MOV EBP,ESP
005de323  SUB ESP,0x2c
005de326  MOV dword ptr [EBP + -0x28],ECX
005de329  MOV dword ptr [EBP + -0x8],0x1
005de330  CMP dword ptr [EBP + 0x8],0x0
005de334  JL 0x005de350
005de336  MOV EAX,[0x0162ee84]
005de33b  MOV EDX,dword ptr [EAX]
005de33d  MOV ECX,dword ptr [0x0162ee84]
005de343  MOV EAX,dword ptr [EDX + 0x10c]
005de349  CALL EAX
005de34b  CMP dword ptr [EBP + 0x8],EAX
005de34e  JL 0x005de357
005de350  XOR EAX,EAX
005de352  JMP 0x005de440
005de357  MOV dword ptr [EBP + -0x4],0x0
005de35e  JMP 0x005de369
005de360  MOV ECX,dword ptr [EBP + -0x4]
005de363  ADD ECX,0x1
005de366  MOV dword ptr [EBP + -0x4],ECX
005de369  MOV EDX,dword ptr [0x0162ee84]
005de36f  MOV EAX,dword ptr [EDX]
005de371  MOV ECX,dword ptr [0x0162ee84]
005de377  MOV EDX,dword ptr [EAX + 0x10c]
005de37d  CALL EDX
005de37f  CMP dword ptr [EBP + -0x4],EAX
005de382  JGE 0x005de43d
005de388  MOV EAX,dword ptr [EBP + -0x4]
005de38b  CMP EAX,dword ptr [EBP + 0x8]
005de38e  JZ 0x005de438
005de394  MOV ECX,dword ptr [EBP + -0x4]
005de397  PUSH ECX
005de398  CALL 0x005dcb00
005de39d  ADD ESP,0x4
005de3a0  MOV dword ptr [EBP + -0x14],EAX
005de3a3  MOV ECX,dword ptr [EBP + -0x14]
005de3a6  CALL 0x0063aac0
005de3ab  MOV EDX,dword ptr [EAX]
005de3ad  MOV dword ptr [EBP + -0xc],EDX
005de3b0  CMP dword ptr [EBP + -0xc],0x2
005de3b4  JZ 0x005de3d2
005de3b6  MOV ECX,dword ptr [EBP + -0x14]
005de3b9  CALL 0x0063aac0
005de3be  MOV EAX,dword ptr [EAX]
005de3c0  MOV dword ptr [EBP + -0x10],EAX
005de3c3  CMP dword ptr [EBP + -0x10],0x3
005de3c7  JZ 0x005de3d2
005de3c9  MOV dword ptr [EBP + -0x2c],0x0
005de3d0  JMP 0x005de3d9
005de3d2  MOV dword ptr [EBP + -0x2c],0x1
005de3d9  MOVZX ECX,byte ptr [EBP + -0x2c]
005de3dd  TEST ECX,ECX
005de3df  JZ 0x005de438
005de3e1  MOV EDX,dword ptr [EBP + -0x4]
005de3e4  PUSH EDX
005de3e5  CALL 0x005dcb00
005de3ea  ADD ESP,0x4
005de3ed  MOV dword ptr [EBP + -0x18],EAX
005de3f0  MOV ECX,dword ptr [EBP + -0x18]
005de3f3  CALL 0x0063aac0
005de3f8  ADD EAX,0x4
005de3fb  MOV dword ptr [EBP + -0x1c],EAX
005de3fe  MOV EAX,dword ptr [EBP + 0x8]
005de401  PUSH EAX
005de402  CALL 0x005dcb00
005de407  ADD ESP,0x4
005de40a  MOV dword ptr [EBP + -0x20],EAX
005de40d  MOV ECX,dword ptr [EBP + -0x20]
005de410  CALL 0x0063aac0
005de415  ADD EAX,0x4
005de418  MOV dword ptr [EBP + -0x24],EAX
005de41b  MOV ECX,dword ptr [EBP + -0x1c]
005de41e  PUSH ECX
005de41f  MOV EDX,dword ptr [EBP + -0x24]
005de422  PUSH EDX
005de423  CALL 0x00686ec0
005de428  ADD ESP,0x8
005de42b  TEST EAX,EAX
005de42d  JNZ 0x005de438
005de42f  MOV EAX,dword ptr [EBP + -0x8]
005de432  ADD EAX,0x1
005de435  MOV dword ptr [EBP + -0x8],EAX
005de438  JMP 0x005de360
005de43d  MOV EAX,dword ptr [EBP + -0x8]
005de440  MOV ESP,EBP
005de442  POP EBP
005de443  RET 0x4

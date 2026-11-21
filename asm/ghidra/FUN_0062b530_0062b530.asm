; FUN_0062b530  0062b530
0062b530  PUSH EBP
0062b531  MOV EBP,ESP
0062b533  SUB ESP,0x18
0062b536  MOV dword ptr [EBP + -0x18],ECX
0062b539  MOV dword ptr [EBP + -0x14],0x0
0062b540  MOV EAX,dword ptr [EBP + -0x18]
0062b543  MOV ECX,dword ptr [EAX + 0x14]
0062b546  MOV EDX,dword ptr [ECX]
0062b548  SUB EDX,0x1
0062b54b  MOV dword ptr [EBP + -0x8],EDX
0062b54e  MOV EAX,dword ptr [EBP + -0x14]
0062b551  CMP EAX,dword ptr [EBP + -0x8]
0062b554  JG 0x0062b5ea
0062b55a  MOV EAX,dword ptr [EBP + -0x8]
0062b55d  ADD EAX,dword ptr [EBP + -0x14]
0062b560  CDQ
0062b561  SUB EAX,EDX
0062b563  SAR EAX,0x1
0062b565  MOV dword ptr [EBP + -0x4],EAX
0062b568  MOV ECX,dword ptr [EBP + -0x18]
0062b56b  MOV EDX,dword ptr [ECX + 0x14]
0062b56e  MOV EAX,dword ptr [EBP + -0x4]
0062b571  SHL EAX,0x4
0062b574  MOV ECX,dword ptr [EDX + EAX*0x1 + 0xc]
0062b578  MOV dword ptr [EBP + -0xc],ECX
0062b57b  MOV EDX,dword ptr [EBP + -0x18]
0062b57e  MOV EAX,dword ptr [EDX + 0x14]
0062b581  MOV ECX,dword ptr [EBP + -0x4]
0062b584  SHL ECX,0x4
0062b587  MOV EDX,dword ptr [EAX + ECX*0x1 + 0x8]
0062b58b  MOV dword ptr [EBP + -0x10],EDX
0062b58e  MOV EAX,dword ptr [EBP + -0xc]
0062b591  CMP EAX,dword ptr [EBP + 0xc]
0062b594  JNZ 0x0062b5a3
0062b596  MOV ECX,dword ptr [EBP + -0x10]
0062b599  CMP ECX,dword ptr [EBP + 0x8]
0062b59c  JNZ 0x0062b5a3
0062b59e  MOV EAX,dword ptr [EBP + -0x4]
0062b5a1  JMP 0x0062b5ed
0062b5a3  MOV EDX,dword ptr [EBP + -0xc]
0062b5a6  CMP EDX,dword ptr [EBP + 0xc]
0062b5a9  JNC 0x0062b5b6
0062b5ab  MOV EAX,dword ptr [EBP + -0x4]
0062b5ae  ADD EAX,0x1
0062b5b1  MOV dword ptr [EBP + -0x14],EAX
0062b5b4  JMP 0x0062b5e5
0062b5b6  MOV ECX,dword ptr [EBP + -0xc]
0062b5b9  CMP ECX,dword ptr [EBP + 0xc]
0062b5bc  JBE 0x0062b5c9
0062b5be  MOV EDX,dword ptr [EBP + -0x4]
0062b5c1  SUB EDX,0x1
0062b5c4  MOV dword ptr [EBP + -0x8],EDX
0062b5c7  JMP 0x0062b5e5
0062b5c9  MOV EAX,dword ptr [EBP + -0x10]
0062b5cc  CMP EAX,dword ptr [EBP + 0x8]
0062b5cf  JGE 0x0062b5dc
0062b5d1  MOV ECX,dword ptr [EBP + -0x4]
0062b5d4  ADD ECX,0x1
0062b5d7  MOV dword ptr [EBP + -0x14],ECX
0062b5da  JMP 0x0062b5e5
0062b5dc  MOV EDX,dword ptr [EBP + -0x4]
0062b5df  SUB EDX,0x1
0062b5e2  MOV dword ptr [EBP + -0x8],EDX
0062b5e5  JMP 0x0062b54e
0062b5ea  OR EAX,0xffffffff
0062b5ed  MOV ESP,EBP
0062b5ef  POP EBP
0062b5f0  RET 0x8

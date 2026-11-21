; FUN_0063a2a0  0063a2a0
0063a2a0  PUSH EBP
0063a2a1  MOV EBP,ESP
0063a2a3  SUB ESP,0x20
0063a2a6  MOV dword ptr [EBP + -0x1c],ECX
0063a2a9  MOV EAX,dword ptr [EBP + -0x1c]
0063a2ac  CMP dword ptr [EAX + 0x3a4],0x0
0063a2b3  JZ 0x0063a2da
0063a2b5  MOV ECX,dword ptr [EBP + -0x1c]
0063a2b8  MOV EDX,dword ptr [ECX + 0x3a4]
0063a2be  MOV dword ptr [EBP + -0x8],EDX
0063a2c1  MOV EAX,dword ptr [EBP + -0x8]
0063a2c4  PUSH EAX
0063a2c5  CALL 0x00686cae
0063a2ca  ADD ESP,0x4
0063a2cd  MOV ECX,dword ptr [EBP + -0x1c]
0063a2d0  MOV dword ptr [ECX + 0x3a4],0x0
0063a2da  MOV EDX,dword ptr [EBP + -0x1c]
0063a2dd  CMP dword ptr [EDX + 0x3a8],0x0
0063a2e4  JZ 0x0063a381
0063a2ea  MOV dword ptr [EBP + -0x4],0x0
0063a2f1  JMP 0x0063a2fc
0063a2f3  MOV EAX,dword ptr [EBP + -0x4]
0063a2f6  ADD EAX,0x1
0063a2f9  MOV dword ptr [EBP + -0x4],EAX
0063a2fc  MOV ECX,dword ptr [0x0162ee84]
0063a302  MOV EDX,dword ptr [ECX]
0063a304  MOV ECX,dword ptr [0x0162ee84]
0063a30a  MOV EAX,dword ptr [EDX + 0xec]
0063a310  CALL EAX
0063a312  CMP dword ptr [EBP + -0x4],EAX
0063a315  JGE 0x0063a35c
0063a317  MOV ECX,dword ptr [EBP + -0x1c]
0063a31a  MOV EDX,dword ptr [ECX + 0x3a8]
0063a320  MOV EAX,dword ptr [EBP + -0x4]
0063a323  CMP dword ptr [EDX + EAX*0x4],0x0
0063a327  JZ 0x0063a347
0063a329  MOV ECX,dword ptr [EBP + -0x1c]
0063a32c  MOV EDX,dword ptr [ECX + 0x3a8]
0063a332  MOV EAX,dword ptr [EBP + -0x4]
0063a335  MOV ECX,dword ptr [EDX + EAX*0x4]
0063a338  MOV dword ptr [EBP + -0xc],ECX
0063a33b  MOV EDX,dword ptr [EBP + -0xc]
0063a33e  PUSH EDX
0063a33f  CALL 0x00686cae
0063a344  ADD ESP,0x4
0063a347  MOV EAX,dword ptr [EBP + -0x1c]
0063a34a  MOV ECX,dword ptr [EAX + 0x3a8]
0063a350  MOV EDX,dword ptr [EBP + -0x4]
0063a353  MOV dword ptr [ECX + EDX*0x4],0x0
0063a35a  JMP 0x0063a2f3
0063a35c  MOV EAX,dword ptr [EBP + -0x1c]
0063a35f  MOV ECX,dword ptr [EAX + 0x3a8]
0063a365  MOV dword ptr [EBP + -0x10],ECX
0063a368  MOV EDX,dword ptr [EBP + -0x10]
0063a36b  PUSH EDX
0063a36c  CALL 0x00686cae
0063a371  ADD ESP,0x4
0063a374  MOV EAX,dword ptr [EBP + -0x1c]
0063a377  MOV dword ptr [EAX + 0x3a8],0x0
0063a381  PUSH 0x384
0063a386  PUSH 0x0
0063a388  MOV ECX,dword ptr [EBP + -0x1c]
0063a38b  ADD ECX,0x28
0063a38e  PUSH ECX
0063a38f  CALL 0x00686fa2
0063a394  ADD ESP,0xc
0063a397  MOV EDX,dword ptr [EBP + -0x1c]
0063a39a  CMP dword ptr [EDX + 0x24],0x0
0063a39e  JZ 0x0063a3d9
0063a3a0  MOV EAX,dword ptr [EBP + -0x1c]
0063a3a3  MOV ECX,dword ptr [EAX + 0x24]
0063a3a6  MOV dword ptr [EBP + -0x18],ECX
0063a3a9  MOV EDX,dword ptr [EBP + -0x18]
0063a3ac  MOV dword ptr [EBP + -0x14],EDX
0063a3af  CMP dword ptr [EBP + -0x14],0x0
0063a3b3  JZ 0x0063a3c8
0063a3b5  PUSH 0x1
0063a3b7  MOV EAX,dword ptr [EBP + -0x14]
0063a3ba  MOV EDX,dword ptr [EAX]
0063a3bc  MOV ECX,dword ptr [EBP + -0x14]
0063a3bf  MOV EAX,dword ptr [EDX]
0063a3c1  CALL EAX
0063a3c3  MOV dword ptr [EBP + -0x20],EAX
0063a3c6  JMP 0x0063a3cf
0063a3c8  MOV dword ptr [EBP + -0x20],0x0
0063a3cf  MOV ECX,dword ptr [EBP + -0x1c]
0063a3d2  MOV dword ptr [ECX + 0x24],0x0
0063a3d9  MOV AL,0x1
0063a3db  MOV ESP,EBP
0063a3dd  POP EBP
0063a3de  RET

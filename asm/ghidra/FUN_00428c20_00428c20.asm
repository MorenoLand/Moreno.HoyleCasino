; FUN_00428c20  00428c20
00428c20  PUSH EBP
00428c21  MOV EBP,ESP
00428c23  SUB ESP,0x8
00428c26  MOV dword ptr [EBP + -0x8],ECX
00428c29  MOV ECX,dword ptr [EBP + -0x8]
00428c2c  CALL 0x005e9e20
00428c31  MOV EAX,dword ptr [EBP + -0x8]
00428c34  MOV dword ptr [EAX],0x6b6984
00428c3a  MOV dword ptr [EBP + -0x4],0x0
00428c41  JMP 0x00428c4c
00428c43  MOV ECX,dword ptr [EBP + -0x4]
00428c46  ADD ECX,0x1
00428c49  MOV dword ptr [EBP + -0x4],ECX
00428c4c  CMP dword ptr [EBP + -0x4],0x4
00428c50  JGE 0x00428c62
00428c52  MOV EDX,dword ptr [EBP + -0x4]
00428c55  MOV EAX,dword ptr [EBP + -0x8]
00428c58  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
00428c60  JMP 0x00428c43
00428c62  MOV dword ptr [EBP + -0x4],0x0
00428c69  JMP 0x00428c74
00428c6b  MOV ECX,dword ptr [EBP + -0x4]
00428c6e  ADD ECX,0x1
00428c71  MOV dword ptr [EBP + -0x4],ECX
00428c74  CMP dword ptr [EBP + -0x4],0x4c
00428c78  JGE 0x00428c8a
00428c7a  MOV EDX,dword ptr [EBP + -0x4]
00428c7d  MOV EAX,dword ptr [EBP + -0x8]
00428c80  MOV dword ptr [EAX + EDX*0x4 + 0x14],0x0
00428c88  JMP 0x00428c6b
00428c8a  MOV dword ptr [EBP + -0x4],0x0
00428c91  JMP 0x00428c9c
00428c93  MOV ECX,dword ptr [EBP + -0x4]
00428c96  ADD ECX,0x1
00428c99  MOV dword ptr [EBP + -0x4],ECX
00428c9c  CMP dword ptr [EBP + -0x4],0x2
00428ca0  JGE 0x00428cc6
00428ca2  MOV EDX,dword ptr [EBP + -0x4]
00428ca5  MOV EAX,dword ptr [EBP + -0x8]
00428ca8  MOV dword ptr [EAX + EDX*0x4 + 0x148],0x0
00428cb3  MOV ECX,dword ptr [EBP + -0x4]
00428cb6  MOV EDX,dword ptr [EBP + -0x8]
00428cb9  MOV dword ptr [EDX + ECX*0x4 + 0x150],0x0
00428cc4  JMP 0x00428c93
00428cc6  MOV EAX,dword ptr [EBP + -0x8]
00428cc9  MOV dword ptr [EAX + 0x144],0x0
00428cd3  MOV ECX,dword ptr [EBP + -0x8]
00428cd6  MOV dword ptr [ECX + 0x158],0x0
00428ce0  MOV EDX,dword ptr [EBP + -0x8]
00428ce3  MOV dword ptr [EDX + 0x15c],0x0
00428ced  MOV EAX,dword ptr [EBP + -0x8]
00428cf0  MOV dword ptr [EAX + 0x160],0x0
00428cfa  MOV ECX,dword ptr [EBP + -0x8]
00428cfd  MOV dword ptr [ECX + 0x164],0x0
00428d07  MOV EDX,dword ptr [EBP + -0x8]
00428d0a  MOV dword ptr [EDX + 0x168],0x0
00428d14  MOV EAX,dword ptr [EBP + -0x8]
00428d17  MOV ESP,EBP
00428d19  POP EBP
00428d1a  RET

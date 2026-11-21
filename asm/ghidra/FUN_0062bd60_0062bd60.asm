; FUN_0062bd60  0062bd60
0062bd60  PUSH EBP
0062bd61  MOV EBP,ESP
0062bd63  SUB ESP,0x1c
0062bd66  MOV EAX,dword ptr [EBP + 0x10]
0062bd69  MOV dword ptr [EBP + -0x4],EAX
0062bd6c  MOV dword ptr [EBP + -0x8],0x4000
0062bd73  PUSH 0x4000
0062bd78  CALL 0x00686d82
0062bd7d  ADD ESP,0x4
0062bd80  MOV dword ptr [EBP + -0x10],EAX
0062bd83  MOV ECX,dword ptr [EBP + -0x10]
0062bd86  MOV dword ptr [EBP + -0xc],ECX
0062bd89  CMP dword ptr [EBP + -0x4],0x0
0062bd8d  JZ 0x0062be14
0062bd93  CMP dword ptr [EBP + -0x4],0x4000
0062bd9a  JBE 0x0062bda5
0062bd9c  MOV dword ptr [EBP + -0x18],0x4000
0062bda3  JMP 0x0062bdab
0062bda5  MOV EDX,dword ptr [EBP + -0x4]
0062bda8  MOV dword ptr [EBP + -0x18],EDX
0062bdab  MOV EAX,dword ptr [EBP + 0xc]
0062bdae  PUSH EAX
0062bdaf  PUSH 0x1
0062bdb1  MOV ECX,dword ptr [EBP + -0x18]
0062bdb4  PUSH ECX
0062bdb5  MOV EDX,dword ptr [EBP + -0xc]
0062bdb8  PUSH EDX
0062bdb9  CALL dword ptr [0x006b225c]
0062bdbf  ADD ESP,0x10
0062bdc2  CMP dword ptr [EBP + -0x4],0x4000
0062bdc9  JBE 0x0062bdd4
0062bdcb  MOV dword ptr [EBP + -0x1c],0x4000
0062bdd2  JMP 0x0062bdda
0062bdd4  MOV EAX,dword ptr [EBP + -0x4]
0062bdd7  MOV dword ptr [EBP + -0x1c],EAX
0062bdda  MOV ECX,dword ptr [EBP + 0x8]
0062bddd  PUSH ECX
0062bdde  PUSH 0x1
0062bde0  MOV EDX,dword ptr [EBP + -0x1c]
0062bde3  PUSH EDX
0062bde4  MOV EAX,dword ptr [EBP + -0xc]
0062bde7  PUSH EAX
0062bde8  CALL dword ptr [0x006b2260]
0062bdee  ADD ESP,0x10
0062bdf1  CMP dword ptr [EBP + -0x4],0x4000
0062bdf8  JBE 0x0062be08
0062bdfa  MOV ECX,dword ptr [EBP + -0x4]
0062bdfd  SUB ECX,0x4000
0062be03  MOV dword ptr [EBP + -0x4],ECX
0062be06  JMP 0x0062be0f
0062be08  MOV dword ptr [EBP + -0x4],0x0
0062be0f  JMP 0x0062bd89
0062be14  MOV EDX,dword ptr [EBP + -0xc]
0062be17  MOV dword ptr [EBP + -0x14],EDX
0062be1a  MOV EAX,dword ptr [EBP + -0x14]
0062be1d  PUSH EAX
0062be1e  CALL 0x00686cae
0062be23  ADD ESP,0x4
0062be26  MOV ESP,EBP
0062be28  POP EBP
0062be29  RET

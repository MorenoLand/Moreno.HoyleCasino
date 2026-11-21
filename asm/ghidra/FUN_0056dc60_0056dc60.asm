; FUN_0056dc60  0056dc60
0056dc60  PUSH EBP
0056dc61  MOV EBP,ESP
0056dc63  SUB ESP,0xc
0056dc66  MOV dword ptr [EBP + -0x8],ECX
0056dc69  MOV dword ptr [EBP + -0x4],0x0
0056dc70  CMP dword ptr [EBP + 0x8],0x3b9aca00
0056dc77  JLE 0x0056dc90
0056dc79  PUSH 0x1a7
0056dc7e  PUSH 0x6ca2b4
0056dc83  PUSH 0x6ca2f4
0056dc88  CALL 0x005e9f20
0056dc8d  ADD ESP,0xc
0056dc90  MOV ECX,dword ptr [EBP + -0x8]
0056dc93  MOV EDX,dword ptr [ECX + 0x9c]
0056dc99  MOV dword ptr [EBP + -0xc],EDX
0056dc9c  CMP dword ptr [EBP + -0xc],0xb
0056dca0  JA 0x0056dddb
0056dca6  MOV EAX,dword ptr [EBP + -0xc]
0056dca9  JMP dword ptr [EAX*0x4 + 0x56dde4]
0056dcb0  CMP dword ptr [EBP + 0x8],0x2faf07f
0056dcb7  JLE 0x0056dcc2
0056dcb9  MOV dword ptr [EBP + -0x4],0x3b9ac9ff
0056dcc0  JMP 0x0056dcdc
0056dcc2  MOV ECX,dword ptr [EBP + 0x8]
0056dcc5  IMUL ECX,ECX,0x14
0056dcc8  MOV dword ptr [EBP + -0x4],ECX
0056dccb  MOV EAX,dword ptr [EBP + 0xc]
0056dcce  CDQ
0056dccf  MOV ECX,0x5
0056dcd4  IDIV ECX
0056dcd6  ADD EAX,dword ptr [EBP + -0x4]
0056dcd9  MOV dword ptr [EBP + -0x4],EAX
0056dcdc  JMP 0x0056dddb
0056dce1  CMP dword ptr [EBP + 0x8],0x5f5e0ff
0056dce8  JLE 0x0056dcf3
0056dcea  MOV dword ptr [EBP + -0x4],0x3b9ac9ff
0056dcf1  JMP 0x0056dd0d
0056dcf3  MOV EDX,dword ptr [EBP + 0x8]
0056dcf6  IMUL EDX,EDX,0xa
0056dcf9  MOV dword ptr [EBP + -0x4],EDX
0056dcfc  MOV EAX,dword ptr [EBP + 0xc]
0056dcff  CDQ
0056dd00  MOV ECX,0xa
0056dd05  IDIV ECX
0056dd07  ADD EAX,dword ptr [EBP + -0x4]
0056dd0a  MOV dword ptr [EBP + -0x4],EAX
0056dd0d  JMP 0x0056dddb
0056dd12  CMP dword ptr [EBP + 0x8],0xee6b27f
0056dd19  JLE 0x0056dd24
0056dd1b  MOV dword ptr [EBP + -0x4],0x3b9ac9ff
0056dd22  JMP 0x0056dd3e
0056dd24  MOV EDX,dword ptr [EBP + 0x8]
0056dd27  SHL EDX,0x2
0056dd2a  MOV dword ptr [EBP + -0x4],EDX
0056dd2d  MOV EAX,dword ptr [EBP + 0xc]
0056dd30  CDQ
0056dd31  MOV ECX,0x19
0056dd36  IDIV ECX
0056dd38  ADD EAX,dword ptr [EBP + -0x4]
0056dd3b  MOV dword ptr [EBP + -0x4],EAX
0056dd3e  JMP 0x0056dddb
0056dd43  CMP dword ptr [EBP + 0x8],0x3b9ac9ff
0056dd4a  JLE 0x0056dd55
0056dd4c  MOV dword ptr [EBP + -0x4],0x3b9ac9ff
0056dd53  JMP 0x0056dd5b
0056dd55  MOV EDX,dword ptr [EBP + 0x8]
0056dd58  MOV dword ptr [EBP + -0x4],EDX
0056dd5b  JMP 0x0056dddb
0056dd5d  MOV EAX,dword ptr [EBP + 0x8]
0056dd60  CDQ
0056dd61  MOV ECX,0x5
0056dd66  IDIV ECX
0056dd68  MOV dword ptr [EBP + -0x4],EAX
0056dd6b  JMP 0x0056dddb
0056dd6d  MOV EAX,dword ptr [EBP + 0x8]
0056dd70  CDQ
0056dd71  MOV ECX,0xa
0056dd76  IDIV ECX
0056dd78  MOV dword ptr [EBP + -0x4],EAX
0056dd7b  JMP 0x0056dddb
0056dd7d  MOV EAX,dword ptr [EBP + 0x8]
0056dd80  CDQ
0056dd81  MOV ECX,0x19
0056dd86  IDIV ECX
0056dd88  MOV dword ptr [EBP + -0x4],EAX
0056dd8b  JMP 0x0056dddb
0056dd8d  MOV EAX,dword ptr [EBP + 0x8]
0056dd90  CDQ
0056dd91  MOV ECX,0x32
0056dd96  IDIV ECX
0056dd98  MOV dword ptr [EBP + -0x4],EAX
0056dd9b  JMP 0x0056dddb
0056dd9d  MOV EAX,dword ptr [EBP + 0x8]
0056dda0  CDQ
0056dda1  MOV ECX,0x64
0056dda6  IDIV ECX
0056dda8  MOV dword ptr [EBP + -0x4],EAX
0056ddab  JMP 0x0056dddb
0056ddad  MOV EAX,dword ptr [EBP + 0x8]
0056ddb0  CDQ
0056ddb1  MOV ECX,0xfa
0056ddb6  IDIV ECX
0056ddb8  MOV dword ptr [EBP + -0x4],EAX
0056ddbb  JMP 0x0056dddb
0056ddbd  MOV EAX,dword ptr [EBP + 0x8]
0056ddc0  CDQ
0056ddc1  MOV ECX,0x1f4
0056ddc6  IDIV ECX
0056ddc8  MOV dword ptr [EBP + -0x4],EAX
0056ddcb  JMP 0x0056dddb
0056ddcd  MOV EAX,dword ptr [EBP + 0x8]
0056ddd0  CDQ
0056ddd1  MOV ECX,0x3e8
0056ddd6  IDIV ECX
0056ddd8  MOV dword ptr [EBP + -0x4],EAX
0056dddb  MOV EAX,dword ptr [EBP + -0x4]
0056ddde  MOV ESP,EBP
0056dde0  POP EBP
0056dde1  RET 0x8

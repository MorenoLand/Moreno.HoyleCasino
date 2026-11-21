; FUN_0042cb70  0042cb70
0042cb70  PUSH EBP
0042cb71  MOV EBP,ESP
0042cb73  SUB ESP,0xc
0042cb76  MOV dword ptr [EBP + -0xc],ECX
0042cb79  MOV dword ptr [EBP + -0x4],0x0
0042cb80  JMP 0x0042cb8b
0042cb82  MOV EAX,dword ptr [EBP + -0x4]
0042cb85  ADD EAX,0x1
0042cb88  MOV dword ptr [EBP + -0x4],EAX
0042cb8b  CMP dword ptr [EBP + -0x4],0x5
0042cb8f  JGE 0x0042cbc5
0042cb91  MOV dword ptr [EBP + -0x8],0x0
0042cb98  JMP 0x0042cba3
0042cb9a  MOV ECX,dword ptr [EBP + -0x8]
0042cb9d  ADD ECX,0x1
0042cba0  MOV dword ptr [EBP + -0x8],ECX
0042cba3  CMP dword ptr [EBP + -0x8],0x4
0042cba7  JGE 0x0042cbc3
0042cba9  MOV EDX,dword ptr [EBP + -0x4]
0042cbac  CMP EDX,dword ptr [EBP + 0x8]
0042cbaf  JZ 0x0042cbc1
0042cbb1  MOV EAX,dword ptr [EBP + -0x8]
0042cbb4  PUSH EAX
0042cbb5  MOV ECX,dword ptr [EBP + -0x4]
0042cbb8  PUSH ECX
0042cbb9  MOV ECX,dword ptr [EBP + -0xc]
0042cbbc  CALL 0x005cc440
0042cbc1  JMP 0x0042cb9a
0042cbc3  JMP 0x0042cb82
0042cbc5  MOV ESP,EBP
0042cbc7  POP EBP
0042cbc8  RET 0x4

; FUN_0062a670  0062a670
0062a670  PUSH EBP
0062a671  MOV EBP,ESP
0062a673  SUB ESP,0x8
0062a676  MOV dword ptr [EBP + -0x4],ECX
0062a679  MOV EAX,dword ptr [EBP + -0x4]
0062a67c  MOV ECX,dword ptr [EBP + 0x8]
0062a67f  MOV dword ptr [EAX + 0x5c],ECX
0062a682  MOV EDX,dword ptr [EBP + -0x4]
0062a685  MOV EAX,dword ptr [EDX + 0x5c]
0062a688  CMP EAX,dword ptr [EBP + 0xc]
0062a68b  JGE 0x0062a695
0062a68d  MOV ECX,dword ptr [EBP + 0xc]
0062a690  MOV dword ptr [EBP + -0x8],ECX
0062a693  JMP 0x0062a69b
0062a695  MOV EDX,dword ptr [EBP + 0x8]
0062a698  MOV dword ptr [EBP + -0x8],EDX
0062a69b  MOV EAX,dword ptr [EBP + -0x4]
0062a69e  MOV ECX,dword ptr [EBP + -0x8]
0062a6a1  MOV dword ptr [EAX + 0x60],ECX
0062a6a4  MOV ESP,EBP
0062a6a6  POP EBP
0062a6a7  RET 0x8

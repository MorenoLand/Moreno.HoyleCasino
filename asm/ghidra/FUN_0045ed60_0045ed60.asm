; FUN_0045ed60  0045ed60
0045ed60  PUSH EBP
0045ed61  MOV EBP,ESP
0045ed63  SUB ESP,0xc
0045ed66  MOV dword ptr [EBP + -0x8],ECX
0045ed69  MOV dword ptr [EBP + -0x4],0x0
0045ed70  MOV EAX,dword ptr [EBP + -0x8]
0045ed73  MOV ECX,dword ptr [EAX + 0x4]
0045ed76  MOV dword ptr [EBP + -0xc],ECX
0045ed79  CMP dword ptr [EBP + -0xc],0x1
0045ed7d  JZ 0x0045ed88
0045ed7f  MOV dword ptr [EBP + -0x4],0x6ba27c
0045ed86  JMP 0x0045ed8f
0045ed88  MOV dword ptr [EBP + -0x4],0x6ba274
0045ed8f  MOV EAX,dword ptr [EBP + -0x4]
0045ed92  MOV ESP,EBP
0045ed94  POP EBP
0045ed95  RET

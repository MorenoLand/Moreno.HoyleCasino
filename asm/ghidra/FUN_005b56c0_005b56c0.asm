; FUN_005b56c0  005b56c0
005b56c0  PUSH EBP
005b56c1  MOV EBP,ESP
005b56c3  SUB ESP,0x18
005b56c6  MOV dword ptr [EBP + -0x18],ECX
005b56c9  MOV dword ptr [EBP + -0x10],0x2
005b56d0  MOV dword ptr [EBP + -0xc],0x0
005b56d7  MOV dword ptr [EBP + -0x8],0x1
005b56de  MOV dword ptr [EBP + -0x4],0x3
005b56e5  MOV dword ptr [EBP + -0x14],0x0
005b56ec  JMP 0x005b56f7
005b56ee  MOV EAX,dword ptr [EBP + -0x14]
005b56f1  ADD EAX,0x1
005b56f4  MOV dword ptr [EBP + -0x14],EAX
005b56f7  CMP dword ptr [EBP + -0x14],0x4
005b56fb  JGE 0x005b571e
005b56fd  MOV ECX,dword ptr [EBP + -0x14]
005b5700  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x10]
005b5704  MOV EAX,dword ptr [EBP + -0x18]
005b5707  MOVZX ECX,byte ptr [EAX + EDX*0x1 + 0x674]
005b570f  TEST ECX,ECX
005b5711  JNZ 0x005b571c
005b5713  MOV EDX,dword ptr [EBP + -0x14]
005b5716  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x10]
005b571a  JMP 0x005b5721
005b571c  JMP 0x005b56ee
005b571e  OR EAX,0xffffffff
005b5721  MOV ESP,EBP
005b5723  POP EBP
005b5724  RET

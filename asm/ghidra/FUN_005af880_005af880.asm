; FUN_005af880  005af880
005af880  PUSH EBP
005af881  MOV EBP,ESP
005af883  PUSH -0x1
005af885  PUSH 0x6a7d08
005af88a  MOV EAX,FS:[0x0]
005af890  PUSH EAX
005af891  SUB ESP,0xc
005af894  MOV EAX,[0x00781870]
005af899  XOR EAX,EBP
005af89b  PUSH EAX
005af89c  LEA EAX,[EBP + -0xc]
005af89f  MOV FS:[0x0],EAX
005af8a5  MOV dword ptr [EBP + -0x18],ECX
005af8a8  MOV ECX,dword ptr [EBP + -0x18]
005af8ab  CALL 0x005d7b60
005af8b0  MOV dword ptr [EBP + -0x4],0x0
005af8b7  MOV EAX,dword ptr [EBP + -0x18]
005af8ba  MOV dword ptr [EAX],0x6cfeac
005af8c0  PUSH 0xfdec
005af8c5  MOV ECX,dword ptr [EBP + -0x18]
005af8c8  CALL 0x005f1ad0
005af8cd  MOV dword ptr [EBP + -0x10],0x0
005af8d4  JMP 0x005af8df
005af8d6  MOV ECX,dword ptr [EBP + -0x10]
005af8d9  ADD ECX,0x1
005af8dc  MOV dword ptr [EBP + -0x10],ECX
005af8df  CMP dword ptr [EBP + -0x10],0x5
005af8e3  JGE 0x005af905
005af8e5  PUSH 0x0
005af8e7  MOV EDX,dword ptr [EBP + -0x10]
005af8ea  ADD EDX,0x1389
005af8f0  PUSH EDX
005af8f1  PUSH 0x20584554
005af8f6  MOV EAX,[0x007960d8]
005af8fb  MOV ECX,dword ptr [EAX + 0x18]
005af8fe  CALL 0x006044b0
005af903  JMP 0x005af8d6
005af905  MOV dword ptr [EBP + -0x14],0x0
005af90c  JMP 0x005af917
005af90e  MOV ECX,dword ptr [EBP + -0x14]
005af911  ADD ECX,0x1
005af914  MOV dword ptr [EBP + -0x14],ECX
005af917  CMP dword ptr [EBP + -0x14],0xd
005af91b  JGE 0x005af93d
005af91d  PUSH 0x0
005af91f  MOV EDX,dword ptr [EBP + -0x14]
005af922  ADD EDX,0x13a2
005af928  PUSH EDX
005af929  PUSH 0x20584554
005af92e  MOV EAX,[0x007960d8]
005af933  MOV ECX,dword ptr [EAX + 0x18]
005af936  CALL 0x006044b0
005af93b  JMP 0x005af90e
005af93d  MOV ECX,dword ptr [EBP + -0x18]
005af940  MOV dword ptr [0x00793600],ECX
005af946  MOV dword ptr [0x00793604],0x0
005af950  MOV dword ptr [0x007935fc],0x0
005af95a  MOV dword ptr [0x007935f8],0x0
005af964  MOV dword ptr [0x007935f4],0x0
005af96e  MOV dword ptr [EBP + -0x4],0xffffffff
005af975  MOV EAX,dword ptr [EBP + -0x18]
005af978  MOV ECX,dword ptr [EBP + -0xc]
005af97b  MOV dword ptr FS:[0x0],ECX
005af982  POP ECX
005af983  MOV ESP,EBP
005af985  POP EBP
005af986  RET

; FUN_004fa5b0  004fa5b0
004fa5b0  PUSH EBP
004fa5b1  MOV EBP,ESP
004fa5b3  SUB ESP,0x2c
004fa5b6  MOV dword ptr [EBP + -0x2c],ECX
004fa5b9  MOV dword ptr [EBP + -0x24],0x5
004fa5c0  MOV dword ptr [EBP + -0x20],0x0
004fa5c7  MOV dword ptr [EBP + -0x1c],0x1
004fa5ce  MOV dword ptr [EBP + -0x18],0x2
004fa5d5  MOV dword ptr [EBP + -0x14],0x3
004fa5dc  MOV dword ptr [EBP + -0x10],0x4
004fa5e3  MOV dword ptr [EBP + -0xc],0x6
004fa5ea  MOV dword ptr [EBP + -0x8],0x7
004fa5f1  MOV EAX,dword ptr [EBP + 0xc]
004fa5f4  MOV dword ptr [EAX],0x0
004fa5fa  MOV ECX,dword ptr [EBP + 0xc]
004fa5fd  MOV dword ptr [ECX + 0x4],0x0
004fa604  MOV EDX,dword ptr [EBP + -0x2c]
004fa607  MOV EAX,dword ptr [EDX]
004fa609  MOV ECX,dword ptr [EBP + -0x2c]
004fa60c  MOV EDX,dword ptr [EAX + 0x80]
004fa612  CALL EDX
004fa614  MOVZX EAX,AL
004fa617  TEST EAX,EAX
004fa619  JZ 0x004fa61d
004fa61b  JMP 0x004fa659
004fa61d  MOV ECX,dword ptr [EBP + 0x8]
004fa620  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x24]
004fa624  PUSH EDX
004fa625  MOV ECX,dword ptr [0x00791364]
004fa62b  CALL 0x0047e390
004fa630  MOV dword ptr [EBP + -0x4],EAX
004fa633  MOV ECX,dword ptr [EBP + -0x4]
004fa636  CALL 0x004c7050
004fa63b  MOV dword ptr [EBP + -0x28],EAX
004fa63e  MOV AX,word ptr [EBP + -0x28]
004fa642  PUSH EAX
004fa643  MOV ECX,dword ptr [EBP + -0x2c]
004fa646  MOV ECX,dword ptr [ECX + 0xa4]
004fa64c  ADD ECX,0x38
004fa64f  CALL 0x004f6c40
004fa654  MOV EDX,dword ptr [EBP + 0xc]
004fa657  MOV dword ptr [EDX],EAX
004fa659  MOV ESP,EBP
004fa65b  POP EBP
004fa65c  RET 0x8

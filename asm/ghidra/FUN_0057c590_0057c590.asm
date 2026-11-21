; FUN_0057c590  0057c590
0057c590  PUSH EBP
0057c591  MOV EBP,ESP
0057c593  SUB ESP,0x8
0057c596  MOV dword ptr [EBP + -0x8],ECX
0057c599  PUSH 0x1e0
0057c59e  PUSH 0x280
0057c5a3  MOV EAX,[0x015e55e8]
0057c5a8  MOV ECX,dword ptr [EAX + 0x14]
0057c5ab  PUSH ECX
0057c5ac  PUSH 0x0
0057c5ae  MOV ECX,dword ptr [EBP + -0x8]
0057c5b1  CALL 0x005f7670
0057c5b6  MOV EDX,dword ptr [EBP + -0x8]
0057c5b9  MOV dword ptr [EDX],0x6cbd84
0057c5bf  MOV EAX,dword ptr [EBP + -0x8]
0057c5c2  MOV dword ptr [EAX + 0x1b4],0xffffffff
0057c5cc  MOV dword ptr [EBP + -0x4],0x0
0057c5d3  JMP 0x0057c5de
0057c5d5  MOV ECX,dword ptr [EBP + -0x4]
0057c5d8  ADD ECX,0x1
0057c5db  MOV dword ptr [EBP + -0x4],ECX
0057c5de  CMP dword ptr [EBP + -0x4],0x6
0057c5e2  JGE 0x0057c5f7
0057c5e4  MOV EDX,dword ptr [EBP + -0x4]
0057c5e7  MOV EAX,dword ptr [EBP + -0x8]
0057c5ea  MOV dword ptr [EAX + EDX*0x4 + 0x1b8],0x0
0057c5f5  JMP 0x0057c5d5
0057c5f7  MOV ECX,dword ptr [EBP + -0x8]
0057c5fa  MOV dword ptr [ECX + 0x1d0],0x0
0057c604  MOV EDX,dword ptr [EBP + -0x8]
0057c607  MOV dword ptr [EDX + 0x1d4],0x0
0057c611  MOV EAX,dword ptr [EBP + -0x8]
0057c614  MOV dword ptr [EAX + 0x1d8],0x0
0057c61e  MOV ECX,dword ptr [EBP + -0x8]
0057c621  MOV dword ptr [ECX + 0x1dc],0x0
0057c62b  MOV EAX,dword ptr [EBP + -0x8]
0057c62e  MOV ESP,EBP
0057c630  POP EBP
0057c631  RET

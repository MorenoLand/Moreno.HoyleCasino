; FUN_005bf170  005bf170
005bf170  PUSH EBP
005bf171  MOV EBP,ESP
005bf173  PUSH -0x1
005bf175  PUSH 0x6a82ab
005bf17a  MOV EAX,FS:[0x0]
005bf180  PUSH EAX
005bf181  SUB ESP,0x14
005bf184  MOV EAX,[0x00781870]
005bf189  XOR EAX,EBP
005bf18b  PUSH EAX
005bf18c  LEA EAX,[EBP + -0xc]
005bf18f  MOV FS:[0x0],EAX
005bf195  MOV dword ptr [EBP + -0x10],0x0
005bf19c  MOV EAX,dword ptr [EBP + 0x8]
005bf19f  MOV dword ptr [EBP + -0x1c],EAX
005bf1a2  CMP dword ptr [EBP + -0x1c],0x3158d1
005bf1a9  JL 0x005bf1f7
005bf1ab  CMP dword ptr [EBP + -0x1c],0x3158d5
005bf1b2  JLE 0x005bf1b6
005bf1b4  JMP 0x005bf1f7
005bf1b6  PUSH 0x2c
005bf1b8  CALL 0x00686d82
005bf1bd  ADD ESP,0x4
005bf1c0  MOV dword ptr [EBP + -0x18],EAX
005bf1c3  MOV dword ptr [EBP + -0x4],0x0
005bf1ca  CMP dword ptr [EBP + -0x18],0x0
005bf1ce  JZ 0x005bf1dd
005bf1d0  MOV ECX,dword ptr [EBP + -0x18]
005bf1d3  CALL 0x005bf340
005bf1d8  MOV dword ptr [EBP + -0x20],EAX
005bf1db  JMP 0x005bf1e4
005bf1dd  MOV dword ptr [EBP + -0x20],0x0
005bf1e4  MOV ECX,dword ptr [EBP + -0x20]
005bf1e7  MOV dword ptr [EBP + -0x14],ECX
005bf1ea  MOV dword ptr [EBP + -0x4],0xffffffff
005bf1f1  MOV EDX,dword ptr [EBP + -0x14]
005bf1f4  MOV dword ptr [EBP + -0x10],EDX
005bf1f7  MOV EAX,dword ptr [EBP + -0x10]
005bf1fa  MOV ECX,dword ptr [EBP + -0xc]
005bf1fd  MOV dword ptr FS:[0x0],ECX
005bf204  POP ECX
005bf205  MOV ESP,EBP
005bf207  POP EBP
005bf208  RET

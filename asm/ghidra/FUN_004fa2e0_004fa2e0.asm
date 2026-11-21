; FUN_004fa2e0  004fa2e0
004fa2e0  PUSH EBP
004fa2e1  MOV EBP,ESP
004fa2e3  PUSH -0x1
004fa2e5  PUSH 0x6a2767
004fa2ea  MOV EAX,FS:[0x0]
004fa2f0  PUSH EAX
004fa2f1  SUB ESP,0x10
004fa2f4  MOV EAX,[0x00781870]
004fa2f9  XOR EAX,EBP
004fa2fb  PUSH EAX
004fa2fc  LEA EAX,[EBP + -0xc]
004fa2ff  MOV FS:[0x0],EAX
004fa305  MOV dword ptr [EBP + -0x18],ECX
004fa308  PUSH 0x7d4
004fa30d  CALL 0x00686d82
004fa312  ADD ESP,0x4
004fa315  MOV dword ptr [EBP + -0x14],EAX
004fa318  MOV dword ptr [EBP + -0x4],0x0
004fa31f  CMP dword ptr [EBP + -0x14],0x0
004fa323  JZ 0x004fa332
004fa325  MOV ECX,dword ptr [EBP + -0x14]
004fa328  CALL 0x00479140
004fa32d  MOV dword ptr [EBP + -0x1c],EAX
004fa330  JMP 0x004fa339
004fa332  MOV dword ptr [EBP + -0x1c],0x0
004fa339  MOV EAX,dword ptr [EBP + -0x1c]
004fa33c  MOV dword ptr [EBP + -0x10],EAX
004fa33f  MOV dword ptr [EBP + -0x4],0xffffffff
004fa346  MOV ECX,dword ptr [EBP + -0x18]
004fa349  MOV EDX,dword ptr [EBP + -0x10]
004fa34c  MOV dword ptr [ECX + 0xa4],EDX
004fa352  MOV EAX,dword ptr [EBP + -0x18]
004fa355  MOV ECX,dword ptr [EAX + 0xa4]
004fa35b  CALL 0x004799e0
004fa360  MOV ECX,dword ptr [EBP + -0xc]
004fa363  MOV dword ptr FS:[0x0],ECX
004fa36a  POP ECX
004fa36b  MOV ESP,EBP
004fa36d  POP EBP
004fa36e  RET

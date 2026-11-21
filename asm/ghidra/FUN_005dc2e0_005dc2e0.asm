; FUN_005dc2e0  005dc2e0
005dc2e0  PUSH EBP
005dc2e1  MOV EBP,ESP
005dc2e3  PUSH -0x1
005dc2e5  PUSH 0x6a9419
005dc2ea  MOV EAX,FS:[0x0]
005dc2f0  PUSH EAX
005dc2f1  SUB ESP,0x10
005dc2f4  MOV EAX,[0x00781870]
005dc2f9  XOR EAX,EBP
005dc2fb  PUSH EAX
005dc2fc  LEA EAX,[EBP + -0xc]
005dc2ff  MOV FS:[0x0],EAX
005dc305  MOV dword ptr [EBP + -0x18],ECX
005dc308  CMP dword ptr [0x016306a0],0x0
005dc30f  JNZ 0x005dc31a
005dc311  CMP dword ptr [0x0163068c],0x0
005dc318  JZ 0x005dc31c
005dc31a  JMP 0x005dc399
005dc31c  CMP dword ptr [0x007947d0],0x0
005dc323  JNZ 0x005dc38e
005dc325  PUSH 0x1bc
005dc32a  CALL 0x00686d82
005dc32f  ADD ESP,0x4
005dc332  MOV dword ptr [EBP + -0x14],EAX
005dc335  MOV dword ptr [EBP + -0x4],0x0
005dc33c  CMP dword ptr [EBP + -0x14],0x0
005dc340  JZ 0x005dc34f
005dc342  MOV ECX,dword ptr [EBP + -0x14]
005dc345  CALL 0x005cfaf0
005dc34a  MOV dword ptr [EBP + -0x1c],EAX
005dc34d  JMP 0x005dc356
005dc34f  MOV dword ptr [EBP + -0x1c],0x0
005dc356  MOV EAX,dword ptr [EBP + -0x1c]
005dc359  MOV dword ptr [EBP + -0x10],EAX
005dc35c  MOV dword ptr [EBP + -0x4],0xffffffff
005dc363  MOV ECX,dword ptr [EBP + -0x10]
005dc366  MOV dword ptr [0x007947d0],ECX
005dc36c  MOV EDX,dword ptr [0x007947d0]
005dc372  MOV EAX,dword ptr [EDX]
005dc374  MOV ECX,dword ptr [0x007947d0]
005dc37a  MOV EDX,dword ptr [EAX + 0x3c]
005dc37d  CALL EDX
005dc37f  PUSH 0x0
005dc381  PUSH 0x0
005dc383  MOV ECX,dword ptr [0x007947d0]
005dc389  CALL 0x005f7340
005dc38e  MOV ECX,dword ptr [0x007947d0]
005dc394  CALL 0x005f85d0
005dc399  MOV ECX,dword ptr [EBP + -0xc]
005dc39c  MOV dword ptr FS:[0x0],ECX
005dc3a3  POP ECX
005dc3a4  MOV ESP,EBP
005dc3a6  POP EBP
005dc3a7  RET

; FUN_0065d5d0  0065d5d0
0065d5d0  PUSH EBP
0065d5d1  MOV EBP,ESP
0065d5d3  PUSH -0x1
0065d5d5  PUSH 0x6ac839
0065d5da  MOV EAX,FS:[0x0]
0065d5e0  PUSH EAX
0065d5e1  SUB ESP,0x1c
0065d5e4  MOV EAX,[0x00781870]
0065d5e9  XOR EAX,EBP
0065d5eb  PUSH EAX
0065d5ec  LEA EAX,[EBP + -0xc]
0065d5ef  MOV FS:[0x0],EAX
0065d5f5  MOV dword ptr [EBP + -0x20],ECX
0065d5f8  MOV EAX,dword ptr [EBP + -0x20]
0065d5fb  MOV dword ptr [EAX],0x6de9fc
0065d601  MOV dword ptr [EBP + -0x4],0x0
0065d608  MOV ECX,dword ptr [EBP + -0x20]
0065d60b  MOV EDX,dword ptr [ECX + 0x1c0]
0065d611  MOV dword ptr [EBP + -0x14],EDX
0065d614  MOV EAX,dword ptr [EBP + -0x14]
0065d617  MOV dword ptr [EBP + -0x10],EAX
0065d61a  CMP dword ptr [EBP + -0x10],0x0
0065d61e  JZ 0x0065d633
0065d620  PUSH 0x1
0065d622  MOV ECX,dword ptr [EBP + -0x10]
0065d625  MOV EDX,dword ptr [ECX]
0065d627  MOV ECX,dword ptr [EBP + -0x10]
0065d62a  MOV EAX,dword ptr [EDX]
0065d62c  CALL EAX
0065d62e  MOV dword ptr [EBP + -0x24],EAX
0065d631  JMP 0x0065d63a
0065d633  MOV dword ptr [EBP + -0x24],0x0
0065d63a  MOV ECX,dword ptr [EBP + -0x20]
0065d63d  MOV EDX,dword ptr [ECX + 0x1c4]
0065d643  MOV dword ptr [EBP + -0x1c],EDX
0065d646  MOV EAX,dword ptr [EBP + -0x1c]
0065d649  MOV dword ptr [EBP + -0x18],EAX
0065d64c  CMP dword ptr [EBP + -0x18],0x0
0065d650  JZ 0x0065d665
0065d652  PUSH 0x1
0065d654  MOV ECX,dword ptr [EBP + -0x18]
0065d657  MOV EDX,dword ptr [ECX]
0065d659  MOV ECX,dword ptr [EBP + -0x18]
0065d65c  MOV EAX,dword ptr [EDX]
0065d65e  CALL EAX
0065d660  MOV dword ptr [EBP + -0x28],EAX
0065d663  JMP 0x0065d66c
0065d665  MOV dword ptr [EBP + -0x28],0x0
0065d66c  MOV dword ptr [0x016306ac],0x0
0065d676  MOV dword ptr [EBP + -0x4],0xffffffff
0065d67d  MOV ECX,dword ptr [EBP + -0x20]
0065d680  CALL 0x005f7260
0065d685  MOV ECX,dword ptr [EBP + -0xc]
0065d688  MOV dword ptr FS:[0x0],ECX
0065d68f  POP ECX
0065d690  MOV ESP,EBP
0065d692  POP EBP
0065d693  RET

; FUN_0064d1d0  0064d1d0
0064d1d0  PUSH EBP
0064d1d1  MOV EBP,ESP
0064d1d3  SUB ESP,0x18
0064d1d6  MOV dword ptr [EBP + -0x14],ECX
0064d1d9  MOV dword ptr [EBP + -0x4],0xffffffff
0064d1e0  LEA EAX,[EBP + -0x10]
0064d1e3  PUSH EAX
0064d1e4  CALL dword ptr [0x006b229c]
0064d1ea  ADD ESP,0x4
0064d1ed  LEA ECX,[EBP + -0x10]
0064d1f0  PUSH ECX
0064d1f1  CALL dword ptr [0x006b2298]
0064d1f7  ADD ESP,0x4
0064d1fa  MOV dword ptr [EBP + -0x8],EAX
0064d1fd  MOV EDX,dword ptr [EBP + -0x8]
0064d200  CMP dword ptr [EDX + 0x8],0x16
0064d204  JGE 0x0064d20f
0064d206  MOV EAX,dword ptr [EBP + -0x8]
0064d209  CMP dword ptr [EAX + 0x8],0x3
0064d20d  JG 0x0064d216
0064d20f  MOV dword ptr [EBP + -0x4],0x446
0064d216  MOV ECX,dword ptr [EBP + -0x8]
0064d219  CMP dword ptr [ECX + 0x8],0x5
0064d21d  JL 0x0064d22f
0064d21f  MOV EDX,dword ptr [EBP + -0x8]
0064d222  CMP dword ptr [EDX + 0x8],0xa
0064d226  JGE 0x0064d22f
0064d228  MOV dword ptr [EBP + -0x4],0x445
0064d22f  MOV EAX,dword ptr [EBP + -0x8]
0064d232  CMP dword ptr [EAX + 0x8],0xc
0064d236  JNZ 0x0064d23f
0064d238  MOV dword ptr [EBP + -0x4],0x447
0064d23f  CMP dword ptr [EBP + -0x4],-0x1
0064d243  JZ 0x0064d253
0064d245  PUSH 0x3
0064d247  CALL 0x0062fbf0
0064d24c  ADD ESP,0x4
0064d24f  TEST EAX,EAX
0064d251  JNZ 0x0064d2a9
0064d253  MOV ECX,dword ptr [EBP + -0x8]
0064d256  MOV EDX,dword ptr [ECX + 0x18]
0064d259  MOV dword ptr [EBP + -0x18],EDX
0064d25c  CMP dword ptr [EBP + -0x18],0x6
0064d260  JA 0x0064d2a9
0064d262  MOV EAX,dword ptr [EBP + -0x18]
0064d265  JMP dword ptr [EAX*0x4 + 0x64d2b0]
0064d26c  MOV dword ptr [EBP + -0x4],0x3ec
0064d273  JMP 0x0064d2a9
0064d275  MOV dword ptr [EBP + -0x4],0x3ea
0064d27c  JMP 0x0064d2a9
0064d27e  MOV dword ptr [EBP + -0x4],0x3ee
0064d285  JMP 0x0064d2a9
0064d287  MOV dword ptr [EBP + -0x4],0x3ef
0064d28e  JMP 0x0064d2a9
0064d290  MOV dword ptr [EBP + -0x4],0x3ed
0064d297  JMP 0x0064d2a9
0064d299  MOV dword ptr [EBP + -0x4],0x3e9
0064d2a0  JMP 0x0064d2a9
0064d2a2  MOV dword ptr [EBP + -0x4],0x3eb
0064d2a9  MOV EAX,dword ptr [EBP + -0x4]
0064d2ac  MOV ESP,EBP
0064d2ae  POP EBP
0064d2af  RET

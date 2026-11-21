; FUN_005bc720  005bc720
005bc720  PUSH EBP
005bc721  MOV EBP,ESP
005bc723  PUSH -0x1
005bc725  PUSH 0x6a810b
005bc72a  MOV EAX,FS:[0x0]
005bc730  PUSH EAX
005bc731  SUB ESP,0x14
005bc734  MOV EAX,[0x00781870]
005bc739  XOR EAX,EBP
005bc73b  PUSH EAX
005bc73c  LEA EAX,[EBP + -0xc]
005bc73f  MOV FS:[0x0],EAX
005bc745  MOV dword ptr [EBP + -0x10],0x0
005bc74c  JMP 0x005bc757
005bc74e  MOV EAX,dword ptr [EBP + -0x10]
005bc751  ADD EAX,0x1
005bc754  MOV dword ptr [EBP + -0x10],EAX
005bc757  MOV ECX,dword ptr [EBP + -0x10]
005bc75a  IMUL ECX,ECX,0x108
005bc760  CMP dword ptr [ECX + 0x758d20],0x0
005bc767  JZ 0x005bc7dc
005bc769  MOV EDX,dword ptr [EBP + -0x10]
005bc76c  IMUL EDX,EDX,0x108
005bc772  MOV EAX,dword ptr [EDX + 0x758d20]
005bc778  CMP EAX,dword ptr [EBP + 0x8]
005bc77b  JNZ 0x005bc7d7
005bc77d  PUSH 0x70
005bc77f  CALL 0x00686d82
005bc784  ADD ESP,0x4
005bc787  MOV dword ptr [EBP + -0x1c],EAX
005bc78a  MOV dword ptr [EBP + -0x4],0x0
005bc791  CMP dword ptr [EBP + -0x1c],0x0
005bc795  JZ 0x005bc7a4
005bc797  MOV ECX,dword ptr [EBP + -0x1c]
005bc79a  CALL 0x005bc7f0
005bc79f  MOV dword ptr [EBP + -0x20],EAX
005bc7a2  JMP 0x005bc7ab
005bc7a4  MOV dword ptr [EBP + -0x20],0x0
005bc7ab  MOV ECX,dword ptr [EBP + -0x20]
005bc7ae  MOV dword ptr [EBP + -0x18],ECX
005bc7b1  MOV dword ptr [EBP + -0x4],0xffffffff
005bc7b8  MOV EDX,dword ptr [EBP + -0x18]
005bc7bb  MOV dword ptr [EBP + -0x14],EDX
005bc7be  MOV EAX,dword ptr [EBP + -0x10]
005bc7c1  IMUL EAX,EAX,0x108
005bc7c7  ADD EAX,0x758d20
005bc7cc  MOV ECX,dword ptr [EBP + -0x14]
005bc7cf  MOV dword ptr [ECX + 0x50],EAX
005bc7d2  MOV EAX,dword ptr [EBP + -0x14]
005bc7d5  JMP 0x005bc7de
005bc7d7  JMP 0x005bc74e
005bc7dc  XOR EAX,EAX
005bc7de  MOV ECX,dword ptr [EBP + -0xc]
005bc7e1  MOV dword ptr FS:[0x0],ECX
005bc7e8  POP ECX
005bc7e9  MOV ESP,EBP
005bc7eb  POP EBP
005bc7ec  RET

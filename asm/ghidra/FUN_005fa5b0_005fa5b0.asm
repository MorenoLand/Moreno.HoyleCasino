; FUN_005fa5b0  005fa5b0
005fa5b0  PUSH EBP
005fa5b1  MOV EBP,ESP
005fa5b3  PUSH -0x1
005fa5b5  PUSH 0x6aa3c0
005fa5ba  MOV EAX,FS:[0x0]
005fa5c0  PUSH EAX
005fa5c1  SUB ESP,0x10
005fa5c4  MOV EAX,[0x00781870]
005fa5c9  XOR EAX,EBP
005fa5cb  PUSH EAX
005fa5cc  LEA EAX,[EBP + -0xc]
005fa5cf  MOV FS:[0x0],EAX
005fa5d5  MOV dword ptr [EBP + -0x18],ECX
005fa5d8  CMP dword ptr [EBP + 0x8],0x0
005fa5dc  JNZ 0x005fa622
005fa5de  PUSH 0x1d0
005fa5e3  CALL 0x00686d82
005fa5e8  ADD ESP,0x4
005fa5eb  MOV dword ptr [EBP + -0x14],EAX
005fa5ee  MOV dword ptr [EBP + -0x4],0x0
005fa5f5  CMP dword ptr [EBP + -0x14],0x0
005fa5f9  JZ 0x005fa608
005fa5fb  MOV ECX,dword ptr [EBP + -0x14]
005fa5fe  CALL 0x005ec5a0
005fa603  MOV dword ptr [EBP + -0x1c],EAX
005fa606  JMP 0x005fa60f
005fa608  MOV dword ptr [EBP + -0x1c],0x0
005fa60f  MOV EAX,dword ptr [EBP + -0x1c]
005fa612  MOV dword ptr [EBP + -0x10],EAX
005fa615  MOV dword ptr [EBP + -0x4],0xffffffff
005fa61c  MOV ECX,dword ptr [EBP + -0x10]
005fa61f  MOV dword ptr [EBP + 0x8],ECX
005fa622  MOV EDX,dword ptr [EBP + 0x8]
005fa625  PUSH EDX
005fa626  MOV ECX,dword ptr [EBP + -0x18]
005fa629  ADD ECX,0x54
005fa62c  CALL 0x0060c840
005fa631  MOV EAX,dword ptr [EBP + 0x8]
005fa634  MOV ECX,dword ptr [EBP + -0x18]
005fa637  MOV dword ptr [EAX + 0x4],ECX
005fa63a  CMP dword ptr [EBP + 0x30],-0x1
005fa63e  JZ 0x005fa64c
005fa640  MOV EDX,dword ptr [EBP + 0x30]
005fa643  PUSH EDX
005fa644  MOV ECX,dword ptr [EBP + 0x8]
005fa647  CALL 0x005ef3b0
005fa64c  MOV EAX,dword ptr [EBP + 0xc]
005fa64f  PUSH EAX
005fa650  MOV ECX,dword ptr [EBP + 0x2c]
005fa653  PUSH ECX
005fa654  MOV EDX,dword ptr [EBP + 0x28]
005fa657  PUSH EDX
005fa658  MOV EAX,dword ptr [EBP + 0x24]
005fa65b  PUSH EAX
005fa65c  MOV ECX,dword ptr [EBP + 0x20]
005fa65f  PUSH ECX
005fa660  MOV EDX,dword ptr [EBP + 0x1c]
005fa663  PUSH EDX
005fa664  MOV EAX,dword ptr [EBP + 0x18]
005fa667  PUSH EAX
005fa668  MOV ECX,dword ptr [EBP + 0x14]
005fa66b  PUSH ECX
005fa66c  MOV EDX,dword ptr [EBP + 0x10]
005fa66f  PUSH EDX
005fa670  MOV ECX,dword ptr [EBP + 0x8]
005fa673  CALL 0x005ec8f0
005fa678  MOV EAX,dword ptr [EBP + 0x8]
005fa67b  MOV EDX,dword ptr [EAX]
005fa67d  MOV ECX,dword ptr [EBP + 0x8]
005fa680  MOV EAX,dword ptr [EDX + 0x74]
005fa683  CALL EAX
005fa685  MOV EAX,dword ptr [EBP + 0x8]
005fa688  MOV ECX,dword ptr [EBP + -0xc]
005fa68b  MOV dword ptr FS:[0x0],ECX
005fa692  POP ECX
005fa693  MOV ESP,EBP
005fa695  POP EBP
005fa696  RET 0x2c

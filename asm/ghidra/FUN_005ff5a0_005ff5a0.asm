; FUN_005ff5a0  005ff5a0
005ff5a0  PUSH EBP
005ff5a1  MOV EBP,ESP
005ff5a3  PUSH -0x1
005ff5a5  PUSH 0x6aa7be
005ff5aa  MOV EAX,FS:[0x0]
005ff5b0  PUSH EAX
005ff5b1  SUB ESP,0x10
005ff5b4  MOV EAX,[0x00781870]
005ff5b9  XOR EAX,EBP
005ff5bb  PUSH EAX
005ff5bc  LEA EAX,[EBP + -0xc]
005ff5bf  MOV FS:[0x0],EAX
005ff5c5  MOV dword ptr [EBP + -0x18],ECX
005ff5c8  MOV EAX,dword ptr [EBP + -0x18]
005ff5cb  CMP dword ptr [EAX + 0x210],0x0
005ff5d2  JNZ 0x005ff61b
005ff5d4  PUSH 0x10
005ff5d6  CALL 0x00686d82
005ff5db  ADD ESP,0x4
005ff5de  MOV dword ptr [EBP + -0x14],EAX
005ff5e1  MOV dword ptr [EBP + -0x4],0x0
005ff5e8  CMP dword ptr [EBP + -0x14],0x0
005ff5ec  JZ 0x005ff5fb
005ff5ee  MOV ECX,dword ptr [EBP + -0x14]
005ff5f1  CALL 0x0060c5f0
005ff5f6  MOV dword ptr [EBP + -0x1c],EAX
005ff5f9  JMP 0x005ff602
005ff5fb  MOV dword ptr [EBP + -0x1c],0x0
005ff602  MOV ECX,dword ptr [EBP + -0x1c]
005ff605  MOV dword ptr [EBP + -0x10],ECX
005ff608  MOV dword ptr [EBP + -0x4],0xffffffff
005ff60f  MOV EDX,dword ptr [EBP + -0x18]
005ff612  MOV EAX,dword ptr [EBP + -0x10]
005ff615  MOV dword ptr [EDX + 0x210],EAX
005ff61b  MOV ECX,dword ptr [EBP + 0x8]
005ff61e  PUSH ECX
005ff61f  MOV EDX,dword ptr [EBP + -0x18]
005ff622  MOV ECX,dword ptr [EDX + 0x210]
005ff628  CALL 0x0060c9e0
005ff62d  MOVZX EAX,AL
005ff630  TEST EAX,EAX
005ff632  JNZ 0x005ff652
005ff634  MOV ECX,dword ptr [EBP + 0x8]
005ff637  PUSH ECX
005ff638  MOV EDX,dword ptr [EBP + -0x18]
005ff63b  MOV ECX,dword ptr [EDX + 0x210]
005ff641  CALL 0x0060c840
005ff646  MOV EAX,dword ptr [EBP + 0x8]
005ff649  MOV ECX,dword ptr [EBP + -0x18]
005ff64c  MOV EDX,dword ptr [ECX + 0x4]
005ff64f  MOV dword ptr [EAX + 0x4],EDX
005ff652  MOV ECX,dword ptr [EBP + -0xc]
005ff655  MOV dword ptr FS:[0x0],ECX
005ff65c  POP ECX
005ff65d  MOV ESP,EBP
005ff65f  POP EBP
005ff660  RET 0x4

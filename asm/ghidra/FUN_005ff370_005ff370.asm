; FUN_005ff370  005ff370
005ff370  PUSH EBP
005ff371  MOV EBP,ESP
005ff373  PUSH -0x1
005ff375  PUSH 0x6aa798
005ff37a  MOV EAX,FS:[0x0]
005ff380  PUSH EAX
005ff381  SUB ESP,0x10
005ff384  MOV EAX,[0x00781870]
005ff389  XOR EAX,EBP
005ff38b  PUSH EAX
005ff38c  LEA EAX,[EBP + -0xc]
005ff38f  MOV FS:[0x0],EAX
005ff395  MOV dword ptr [EBP + -0x18],ECX
005ff398  MOV EAX,dword ptr [EBP + -0x18]
005ff39b  MOV dword ptr [EAX],0x6d7124
005ff3a1  MOV dword ptr [EBP + -0x4],0x0
005ff3a8  MOV ECX,dword ptr [EBP + -0x18]
005ff3ab  CMP dword ptr [ECX + 0x210],0x0
005ff3b2  JZ 0x005ff3f4
005ff3b4  MOV EDX,dword ptr [EBP + -0x18]
005ff3b7  MOV ECX,dword ptr [EDX + 0x210]
005ff3bd  CALL 0x0060ca10
005ff3c2  MOV EAX,dword ptr [EBP + -0x18]
005ff3c5  MOV ECX,dword ptr [EAX + 0x210]
005ff3cb  MOV dword ptr [EBP + -0x14],ECX
005ff3ce  MOV EDX,dword ptr [EBP + -0x14]
005ff3d1  MOV dword ptr [EBP + -0x10],EDX
005ff3d4  CMP dword ptr [EBP + -0x10],0x0
005ff3d8  JZ 0x005ff3ed
005ff3da  PUSH 0x1
005ff3dc  MOV EAX,dword ptr [EBP + -0x10]
005ff3df  MOV EDX,dword ptr [EAX]
005ff3e1  MOV ECX,dword ptr [EBP + -0x10]
005ff3e4  MOV EAX,dword ptr [EDX]
005ff3e6  CALL EAX
005ff3e8  MOV dword ptr [EBP + -0x1c],EAX
005ff3eb  JMP 0x005ff3f4
005ff3ed  MOV dword ptr [EBP + -0x1c],0x0
005ff3f4  MOV dword ptr [EBP + -0x4],0xffffffff
005ff3fb  MOV ECX,dword ptr [EBP + -0x18]
005ff3fe  CALL 0x006060e0
005ff403  MOV ECX,dword ptr [EBP + -0xc]
005ff406  MOV dword ptr FS:[0x0],ECX
005ff40d  POP ECX
005ff40e  MOV ESP,EBP
005ff410  POP EBP
005ff411  RET

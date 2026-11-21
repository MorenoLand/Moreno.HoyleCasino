; FUN_005db510  005db510
005db510  PUSH EBP
005db511  MOV EBP,ESP
005db513  PUSH -0x1
005db515  PUSH 0x6a926d
005db51a  MOV EAX,FS:[0x0]
005db520  PUSH EAX
005db521  SUB ESP,0x10
005db524  MOV EAX,[0x00781870]
005db529  XOR EAX,EBP
005db52b  PUSH EAX
005db52c  LEA EAX,[EBP + -0xc]
005db52f  MOV FS:[0x0],EAX
005db535  MOV dword ptr [EBP + -0x18],ECX
005db538  CMP dword ptr [0x016306a0],0x0
005db53f  JNZ 0x005db5aa
005db541  PUSH 0x1c0
005db546  CALL 0x00686d82
005db54b  ADD ESP,0x4
005db54e  MOV dword ptr [EBP + -0x14],EAX
005db551  MOV dword ptr [EBP + -0x4],0x0
005db558  CMP dword ptr [EBP + -0x14],0x0
005db55c  JZ 0x005db56b
005db55e  MOV ECX,dword ptr [EBP + -0x14]
005db561  CALL 0x005e3c90
005db566  MOV dword ptr [EBP + -0x1c],EAX
005db569  JMP 0x005db572
005db56b  MOV dword ptr [EBP + -0x1c],0x0
005db572  MOV EAX,dword ptr [EBP + -0x1c]
005db575  MOV dword ptr [EBP + -0x10],EAX
005db578  MOV dword ptr [EBP + -0x4],0xffffffff
005db57f  MOV ECX,dword ptr [EBP + -0x10]
005db582  MOV dword ptr [0x016306a0],ECX
005db588  MOV EDX,dword ptr [0x016306a0]
005db58e  MOV EAX,dword ptr [EDX]
005db590  MOV ECX,dword ptr [0x016306a0]
005db596  MOV EDX,dword ptr [EAX + 0x3c]
005db599  CALL EDX
005db59b  PUSH 0x0
005db59d  PUSH 0x0
005db59f  MOV ECX,dword ptr [0x016306a0]
005db5a5  CALL 0x005f7340
005db5aa  MOV ECX,dword ptr [EBP + -0x18]
005db5ad  CALL 0x0064ed80
005db5b2  MOV ECX,dword ptr [EBP + -0xc]
005db5b5  MOV dword ptr FS:[0x0],ECX
005db5bc  POP ECX
005db5bd  MOV ESP,EBP
005db5bf  POP EBP
005db5c0  RET

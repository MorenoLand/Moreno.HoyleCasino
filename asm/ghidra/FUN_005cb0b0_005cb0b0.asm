; FUN_005cb0b0  005cb0b0
005cb0b0  PUSH EBP
005cb0b1  MOV EBP,ESP
005cb0b3  PUSH -0x1
005cb0b5  PUSH 0x6a8a8c
005cb0ba  MOV EAX,FS:[0x0]
005cb0c0  PUSH EAX
005cb0c1  SUB ESP,0x10
005cb0c4  MOV EAX,[0x00781870]
005cb0c9  XOR EAX,EBP
005cb0cb  PUSH EAX
005cb0cc  LEA EAX,[EBP + -0xc]
005cb0cf  MOV FS:[0x0],EAX
005cb0d5  MOV dword ptr [EBP + -0x18],ECX
005cb0d8  MOV EAX,dword ptr [EBP + -0x18]
005cb0db  MOV dword ptr [EAX],0x6d2574
005cb0e1  MOV dword ptr [EBP + -0x4],0x0
005cb0e8  MOV ECX,dword ptr [EBP + -0x18]
005cb0eb  MOV EDX,dword ptr [ECX + 0x1dc]
005cb0f1  MOV dword ptr [EBP + -0x14],EDX
005cb0f4  MOV EAX,dword ptr [EBP + -0x14]
005cb0f7  MOV dword ptr [EBP + -0x10],EAX
005cb0fa  CMP dword ptr [EBP + -0x10],0x0
005cb0fe  JZ 0x005cb113
005cb100  PUSH 0x1
005cb102  MOV ECX,dword ptr [EBP + -0x10]
005cb105  MOV EDX,dword ptr [ECX]
005cb107  MOV ECX,dword ptr [EBP + -0x10]
005cb10a  MOV EAX,dword ptr [EDX]
005cb10c  CALL EAX
005cb10e  MOV dword ptr [EBP + -0x1c],EAX
005cb111  JMP 0x005cb11a
005cb113  MOV dword ptr [EBP + -0x1c],0x0
005cb11a  MOV dword ptr [EBP + -0x4],0xffffffff
005cb121  MOV ECX,dword ptr [EBP + -0x18]
005cb124  CALL 0x00601ba0
005cb129  MOV ECX,dword ptr [EBP + -0xc]
005cb12c  MOV dword ptr FS:[0x0],ECX
005cb133  POP ECX
005cb134  MOV ESP,EBP
005cb136  POP EBP
005cb137  RET

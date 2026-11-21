; FUN_005cb5b0  005cb5b0
005cb5b0  PUSH EBP
005cb5b1  MOV EBP,ESP
005cb5b3  SUB ESP,0x14
005cb5b6  MOV dword ptr [EBP + -0x14],ECX
005cb5b9  PUSH 0x0
005cb5bb  PUSH 0x0
005cb5bd  CALL 0x0064c8a0
005cb5c2  ADD ESP,0x8
005cb5c5  MOV dword ptr [EBP + -0x10],EAX
005cb5c8  MOV dword ptr [EBP + -0xc],EDX
005cb5cb  MOV EAX,dword ptr [EBP + -0x10]
005cb5ce  MOV dword ptr [EBP + -0x8],EAX
005cb5d1  MOV ECX,dword ptr [EBP + -0xc]
005cb5d4  MOV dword ptr [EBP + -0x4],ECX
005cb5d7  MOV EDX,dword ptr [EBP + -0x14]
005cb5da  MOV EAX,dword ptr [EDX]
005cb5dc  MOV ECX,dword ptr [EBP + -0x14]
005cb5df  MOV EDX,dword ptr [EAX + 0xb0]
005cb5e5  CALL EDX
005cb5e7  MOVZX EAX,AL
005cb5ea  TEST EAX,EAX
005cb5ec  JZ 0x005cb60a
005cb5ee  PUSH 0x1
005cb5f0  PUSH 0x0
005cb5f2  LEA ECX,[EBP + -0x8]
005cb5f5  PUSH ECX
005cb5f6  MOV EDX,dword ptr [EBP + -0x14]
005cb5f9  MOV EAX,dword ptr [EDX]
005cb5fb  MOV ECX,dword ptr [EBP + -0x14]
005cb5fe  MOV EDX,dword ptr [EAX + 0xc4]
005cb604  CALL EDX
005cb606  MOV AL,0x1
005cb608  JMP 0x005cb60c
005cb60a  XOR AL,AL
005cb60c  MOV ESP,EBP
005cb60e  POP EBP
005cb60f  RET

; FUN_005ba570  005ba570
005ba570  PUSH EBP
005ba571  MOV EBP,ESP
005ba573  SUB ESP,0x68
005ba576  MOV dword ptr [EBP + -0x68],ECX
005ba579  CMP dword ptr [EBP + 0xc],0x0
005ba57d  JZ 0x005ba587
005ba57f  MOV EAX,dword ptr [EBP + 0xc]
005ba582  CMP EAX,dword ptr [EBP + 0x14]
005ba585  JZ 0x005ba58d
005ba587  CALL dword ptr [0x006b2274]
005ba58d  MOV ECX,dword ptr [EBP + 0x10]
005ba590  XOR EDX,EDX
005ba592  CMP ECX,dword ptr [EBP + 0x18]
005ba595  SETZ DL
005ba598  MOVZX EAX,DL
005ba59b  NEG EAX
005ba59d  SBB EAX,EAX
005ba59f  ADD EAX,0x1
005ba5a2  MOVZX ECX,AL
005ba5a5  TEST ECX,ECX
005ba5a7  JZ 0x005ba623
005ba5a9  MOV EDX,dword ptr [EBP + 0x10]
005ba5ac  PUSH EDX
005ba5ad  MOV EAX,dword ptr [EBP + -0x68]
005ba5b0  MOV ECX,dword ptr [EAX + 0x8]
005ba5b3  PUSH ECX
005ba5b4  MOV EDX,dword ptr [EBP + 0x18]
005ba5b7  PUSH EDX
005ba5b8  CALL 0x005bbb00
005ba5bd  ADD ESP,0xc
005ba5c0  MOV dword ptr [EBP + -0x4],EAX
005ba5c3  MOV EAX,dword ptr [EBP + -0x68]
005ba5c6  MOV ECX,dword ptr [EAX + 0x8]
005ba5c9  MOV dword ptr [EBP + -0x64],ECX
005ba5cc  MOV EDX,dword ptr [EBP + -0x64]
005ba5cf  MOV dword ptr [EBP + -0x60],EDX
005ba5d2  MOV EAX,dword ptr [EBP + -0x4]
005ba5d5  MOV dword ptr [EBP + -0x5c],EAX
005ba5d8  MOV CL,byte ptr [EBP + -0x34]
005ba5db  MOV byte ptr [EBP + -0x33],CL
005ba5de  MOV EDX,dword ptr [EBP + -0x60]
005ba5e1  MOV dword ptr [EBP + -0x58],EDX
005ba5e4  MOV EAX,dword ptr [EBP + -0x5c]
005ba5e7  MOV dword ptr [EBP + -0x54],EAX
005ba5ea  JMP 0x005ba5f5
005ba5ec  MOV ECX,dword ptr [EBP + -0x54]
005ba5ef  ADD ECX,0x10
005ba5f2  MOV dword ptr [EBP + -0x54],ECX
005ba5f5  MOV EDX,dword ptr [EBP + -0x54]
005ba5f8  CMP EDX,dword ptr [EBP + -0x58]
005ba5fb  JZ 0x005ba61a
005ba5fd  MOV ECX,dword ptr [EBP + -0x54]
005ba600  CALL 0x005be450
005ba605  XOR EAX,EAX
005ba607  AND EAX,0x1
005ba60a  JZ 0x005ba618
005ba60c  MOV ECX,dword ptr [EBP + -0x54]
005ba60f  PUSH ECX
005ba610  CALL 0x00686cae
005ba615  ADD ESP,0x4
005ba618  JMP 0x005ba5ec
005ba61a  MOV EDX,dword ptr [EBP + -0x68]
005ba61d  MOV EAX,dword ptr [EBP + -0x4]
005ba620  MOV dword ptr [EDX + 0x8],EAX
005ba623  MOV ECX,dword ptr [EBP + 0x8]
005ba626  MOV EDX,dword ptr [EBP + 0xc]
005ba629  MOV dword ptr [ECX],EDX
005ba62b  MOV EAX,dword ptr [EBP + 0x10]
005ba62e  MOV dword ptr [ECX + 0x4],EAX
005ba631  MOV EAX,dword ptr [EBP + 0x8]
005ba634  MOV ESP,EBP
005ba636  POP EBP
005ba637  RET 0x14

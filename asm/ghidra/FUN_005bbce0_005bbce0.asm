; FUN_005bbce0  005bbce0
005bbce0  PUSH EBP
005bbce1  MOV EBP,ESP
005bbce3  SUB ESP,0x60
005bbce6  MOV dword ptr [EBP + -0x5c],ECX
005bbce9  MOV EAX,dword ptr [EBP + -0x5c]
005bbcec  MOV dword ptr [EAX + 0x4],0x0
005bbcf3  MOV ECX,dword ptr [EBP + -0x5c]
005bbcf6  MOV dword ptr [ECX + 0x8],0x0
005bbcfd  MOV EDX,dword ptr [EBP + -0x5c]
005bbd00  MOV dword ptr [EDX + 0xc],0x0
005bbd07  CMP dword ptr [EBP + 0x8],0x0
005bbd0b  JNZ 0x005bbd13
005bbd0d  XOR AL,AL
005bbd0f  JMP 0x005bbd72
005bbd13  MOV dword ptr [EBP + -0x4],0xfffffff
005bbd1a  CMP dword ptr [EBP + -0x4],0x0
005bbd1e  JBE 0x005bbd28
005bbd20  MOV EAX,dword ptr [EBP + -0x4]
005bbd23  MOV dword ptr [EBP + -0x60],EAX
005bbd26  JMP 0x005bbd2f
005bbd28  MOV dword ptr [EBP + -0x60],0x1
005bbd2f  MOV ECX,dword ptr [EBP + -0x60]
005bbd32  CMP ECX,dword ptr [EBP + 0x8]
005bbd35  JNC 0x005bbd3e
005bbd37  CALL 0x005bb750
005bbd3c  JMP 0x005bbd70
005bbd3e  PUSH 0x0
005bbd40  MOV EDX,dword ptr [EBP + 0x8]
005bbd43  PUSH EDX
005bbd44  CALL 0x005bbbd0
005bbd49  ADD ESP,0x8
005bbd4c  MOV ECX,dword ptr [EBP + -0x5c]
005bbd4f  MOV dword ptr [ECX + 0x4],EAX
005bbd52  MOV EDX,dword ptr [EBP + -0x5c]
005bbd55  MOV EAX,dword ptr [EBP + -0x5c]
005bbd58  MOV ECX,dword ptr [EAX + 0x4]
005bbd5b  MOV dword ptr [EDX + 0x8],ECX
005bbd5e  MOV EDX,dword ptr [EBP + 0x8]
005bbd61  SHL EDX,0x4
005bbd64  MOV EAX,dword ptr [EBP + -0x5c]
005bbd67  ADD EDX,dword ptr [EAX + 0x4]
005bbd6a  MOV ECX,dword ptr [EBP + -0x5c]
005bbd6d  MOV dword ptr [ECX + 0xc],EDX
005bbd70  MOV AL,0x1
005bbd72  MOV ESP,EBP
005bbd74  POP EBP
005bbd75  RET 0x4

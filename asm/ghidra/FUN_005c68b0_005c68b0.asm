; FUN_005c68b0  005c68b0
005c68b0  PUSH EBP
005c68b1  MOV EBP,ESP
005c68b3  SUB ESP,0x60
005c68b6  MOV dword ptr [EBP + -0x5c],ECX
005c68b9  MOV EAX,dword ptr [EBP + -0x5c]
005c68bc  MOV dword ptr [EAX + 0x4],0x0
005c68c3  MOV ECX,dword ptr [EBP + -0x5c]
005c68c6  MOV dword ptr [ECX + 0x8],0x0
005c68cd  MOV EDX,dword ptr [EBP + -0x5c]
005c68d0  MOV dword ptr [EDX + 0xc],0x0
005c68d7  CMP dword ptr [EBP + 0x8],0x0
005c68db  JNZ 0x005c68e3
005c68dd  XOR AL,AL
005c68df  JMP 0x005c6942
005c68e3  MOV dword ptr [EBP + -0x4],0x4ec4ec4
005c68ea  CMP dword ptr [EBP + -0x4],0x0
005c68ee  JBE 0x005c68f8
005c68f0  MOV EAX,dword ptr [EBP + -0x4]
005c68f3  MOV dword ptr [EBP + -0x60],EAX
005c68f6  JMP 0x005c68ff
005c68f8  MOV dword ptr [EBP + -0x60],0x1
005c68ff  MOV ECX,dword ptr [EBP + -0x60]
005c6902  CMP ECX,dword ptr [EBP + 0x8]
005c6905  JNC 0x005c690e
005c6907  CALL 0x005c60c0
005c690c  JMP 0x005c6940
005c690e  PUSH 0x0
005c6910  MOV EDX,dword ptr [EBP + 0x8]
005c6913  PUSH EDX
005c6914  CALL 0x005c6370
005c6919  ADD ESP,0x8
005c691c  MOV ECX,dword ptr [EBP + -0x5c]
005c691f  MOV dword ptr [ECX + 0x4],EAX
005c6922  MOV EDX,dword ptr [EBP + -0x5c]
005c6925  MOV EAX,dword ptr [EBP + -0x5c]
005c6928  MOV ECX,dword ptr [EAX + 0x4]
005c692b  MOV dword ptr [EDX + 0x8],ECX
005c692e  MOV EDX,dword ptr [EBP + 0x8]
005c6931  IMUL EDX,EDX,0x34
005c6934  MOV EAX,dword ptr [EBP + -0x5c]
005c6937  ADD EDX,dword ptr [EAX + 0x4]
005c693a  MOV ECX,dword ptr [EBP + -0x5c]
005c693d  MOV dword ptr [ECX + 0xc],EDX
005c6940  MOV AL,0x1
005c6942  MOV ESP,EBP
005c6944  POP EBP
005c6945  RET 0x4

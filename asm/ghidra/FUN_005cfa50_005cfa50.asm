; FUN_005cfa50  005cfa50
005cfa50  PUSH EBP
005cfa51  MOV EBP,ESP
005cfa53  SUB ESP,0x8
005cfa56  MOV dword ptr [EBP + -0x4],ECX
005cfa59  MOV EAX,dword ptr [EBP + 0x8]
005cfa5c  MOV dword ptr [EBP + -0x8],EAX
005cfa5f  CMP dword ptr [EBP + -0x8],0x0
005cfa63  JZ 0x005cfa6d
005cfa65  CMP dword ptr [EBP + -0x8],0x1
005cfa69  JZ 0x005cfaa7
005cfa6b  JMP 0x005cfab2
005cfa6d  MOV ECX,dword ptr [EBP + -0x4]
005cfa70  MOVZX EDX,byte ptr [ECX + 0x1bc]
005cfa77  TEST EDX,EDX
005cfa79  JZ 0x005cfa89
005cfa7b  MOV EAX,dword ptr [EBP + -0x4]
005cfa7e  MOV ECX,dword ptr [EAX + 0x1c0]
005cfa84  CALL 0x005d6de0
005cfa89  MOV ECX,dword ptr [EBP + -0x4]
005cfa8c  MOVZX EDX,byte ptr [ECX + 0x1bd]
005cfa93  TEST EDX,EDX
005cfa95  JZ 0x005cfaa7
005cfa97  PUSH 0x1
005cfa99  MOV EAX,dword ptr [EBP + -0x4]
005cfa9c  MOV ECX,dword ptr [EAX + 0x1c0]
005cfaa2  CALL 0x005d6ee0
005cfaa7  MOV ECX,dword ptr [0x007947e4]
005cfaad  CALL 0x005dc2b0
005cfab2  PUSH -0x1
005cfab4  MOV ECX,dword ptr [0x0162ee84]
005cfaba  MOV EDX,dword ptr [ECX]
005cfabc  MOV ECX,dword ptr [0x0162ee84]
005cfac2  MOV EAX,dword ptr [EDX + 0x33c]
005cfac8  CALL EAX
005cfaca  MOVZX ECX,AL
005cfacd  TEST ECX,ECX
005cfacf  JZ 0x005cfae7
005cfad1  MOV EDX,dword ptr [0x007947e4]
005cfad7  MOV EAX,dword ptr [EDX]
005cfad9  MOV ECX,dword ptr [0x007947e4]
005cfadf  MOV EDX,dword ptr [EAX + 0x278]
005cfae5  CALL EDX
005cfae7  MOV ESP,EBP
005cfae9  POP EBP
005cfaea  RET 0x4

; FUN_005efd20  005efd20
005efd20  PUSH EBP
005efd21  MOV EBP,ESP
005efd23  PUSH ECX
005efd24  MOV dword ptr [EBP + -0x4],ECX
005efd27  MOV EAX,dword ptr [EBP + -0x4]
005efd2a  CMP dword ptr [EAX + 0x5c],0x0
005efd2e  JZ 0x005efd54
005efd30  MOV ECX,dword ptr [EBP + -0x4]
005efd33  CMP dword ptr [ECX + 0x28],0x0
005efd37  JZ 0x005efd54
005efd39  MOV EDX,dword ptr [EBP + -0x4]
005efd3c  CMP dword ptr [EDX + 0xb0],0x0
005efd43  JZ 0x005efd54
005efd45  MOV ECX,dword ptr [EBP + -0x4]
005efd48  CALL 0x005f54c0
005efd4d  MOVZX EAX,AL
005efd50  TEST EAX,EAX
005efd52  JZ 0x005efd58
005efd54  XOR AL,AL
005efd56  JMP 0x005efd5a
005efd58  MOV AL,0x1
005efd5a  MOV ESP,EBP
005efd5c  POP EBP
005efd5d  RET

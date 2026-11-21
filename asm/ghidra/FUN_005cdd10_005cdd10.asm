; FUN_005cdd10  005cdd10
005cdd10  PUSH EBP
005cdd11  MOV EBP,ESP
005cdd13  SUB ESP,0x8
005cdd16  MOV dword ptr [EBP + -0x8],ECX
005cdd19  PUSH 0x1
005cdd1b  MOV ECX,dword ptr [EBP + -0x8]
005cdd1e  CALL 0x005fb350
005cdd23  MOV dword ptr [EBP + -0x4],EAX
005cdd26  MOVZX EAX,byte ptr [EBP + 0x8]
005cdd2a  TEST EAX,EAX
005cdd2c  JZ 0x005cdd40
005cdd2e  MOV ECX,dword ptr [EBP + -0x4]
005cdd31  MOV EDX,dword ptr [ECX]
005cdd33  MOV ECX,dword ptr [EBP + -0x4]
005cdd36  MOV EAX,dword ptr [EDX + 0xf4]
005cdd3c  CALL EAX
005cdd3e  JMP 0x005cdd50
005cdd40  MOV ECX,dword ptr [EBP + -0x4]
005cdd43  MOV EDX,dword ptr [ECX]
005cdd45  MOV ECX,dword ptr [EBP + -0x4]
005cdd48  MOV EAX,dword ptr [EDX + 0xf8]
005cdd4e  CALL EAX
005cdd50  MOV ESP,EBP
005cdd52  POP EBP
005cdd53  RET 0x4

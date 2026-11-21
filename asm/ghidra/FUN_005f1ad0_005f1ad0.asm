; FUN_005f1ad0  005f1ad0
005f1ad0  PUSH EBP
005f1ad1  MOV EBP,ESP
005f1ad3  SUB ESP,0x8
005f1ad6  MOV dword ptr [EBP + -0x8],ECX
005f1ad9  MOV EAX,dword ptr [EBP + -0x8]
005f1adc  MOV ECX,dword ptr [EBP + 0x8]
005f1adf  MOV dword ptr [EAX + 0x28],ECX
005f1ae2  PUSH 0x0
005f1ae4  MOV ECX,dword ptr [0x015e55e8]
005f1aea  ADD ECX,0x4
005f1aed  CALL 0x0060ca40
005f1af2  MOV dword ptr [EBP + -0x4],EAX
005f1af5  CMP dword ptr [EBP + -0x4],0x0
005f1af9  JZ 0x005f1b09
005f1afb  PUSH 0x0
005f1afd  MOV EDX,dword ptr [EBP + 0x8]
005f1b00  PUSH EDX
005f1b01  MOV ECX,dword ptr [EBP + -0x4]
005f1b04  CALL 0x005f83d0
005f1b09  MOV ESP,EBP
005f1b0b  POP EBP
005f1b0c  RET 0x4

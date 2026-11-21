; FUN_005bc6f0  005bc6f0
005bc6f0  PUSH EBP
005bc6f1  MOV EBP,ESP
005bc6f3  SUB ESP,0x8
005bc6f6  MOV EAX,dword ptr [EBP + 0x8]
005bc6f9  MOV dword ptr [EBP + -0x4],EAX
005bc6fc  MOV ECX,dword ptr [EBP + 0xc]
005bc6ff  MOV dword ptr [EBP + -0x8],ECX
005bc702  MOV EDX,dword ptr [EBP + -0x4]
005bc705  MOV EAX,dword ptr [EBP + -0x8]
005bc708  MOV ECX,dword ptr [EDX + 0x10]
005bc70b  SUB ECX,dword ptr [EAX + 0x10]
005bc70e  MOV EAX,ECX
005bc710  MOV ESP,EBP
005bc712  POP EBP
005bc713  RET

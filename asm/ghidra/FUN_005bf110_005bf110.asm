; FUN_005bf110  005bf110
005bf110  PUSH EBP
005bf111  MOV EBP,ESP
005bf113  PUSH ECX
005bf114  MOV dword ptr [EBP + -0x4],ECX
005bf117  MOV EAX,dword ptr [EBP + -0x4]
005bf11a  CMP dword ptr [EAX + 0x8],0x0
005bf11e  JZ 0x005bf135
005bf120  PUSH 0x0
005bf122  MOV ECX,dword ptr [EBP + -0x4]
005bf125  MOV EDX,dword ptr [ECX + 0x8]
005bf128  MOV EAX,dword ptr [EBP + -0x4]
005bf12b  MOV ECX,dword ptr [EAX + 0x8]
005bf12e  MOV EDX,dword ptr [EDX]
005bf130  MOV EAX,dword ptr [EDX + 0x1c]
005bf133  CALL EAX
005bf135  MOV ECX,dword ptr [EBP + -0x4]
005bf138  MOV EDX,dword ptr [ECX + 0x20]
005bf13b  NEG EDX
005bf13d  MOV EAX,dword ptr [EBP + -0x4]
005bf140  MOV dword ptr [EAX + 0x20],EDX
005bf143  MOV ECX,dword ptr [0x015e55e8]
005bf149  CALL 0x005f3e50
005bf14e  MOV ECX,dword ptr [EBP + -0x4]
005bf151  ADD EAX,dword ptr [ECX + 0x20]
005bf154  MOV EDX,dword ptr [EBP + -0x4]
005bf157  MOV dword ptr [EDX + 0x20],EAX
005bf15a  MOV EAX,dword ptr [EBP + -0x4]
005bf15d  MOV byte ptr [EAX + 0x19],0x1
005bf161  MOV ESP,EBP
005bf163  POP EBP
005bf164  RET

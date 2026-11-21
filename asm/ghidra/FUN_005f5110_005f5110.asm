; FUN_005f5110  005f5110
005f5110  PUSH EBP
005f5111  MOV EBP,ESP
005f5113  SUB ESP,0xc
005f5116  MOV dword ptr [EBP + -0xc],ECX
005f5119  MOV EAX,dword ptr [EBP + -0xc]
005f511c  MOV ECX,dword ptr [EBP + -0xc]
005f511f  MOV EDX,dword ptr [EAX + 0x18]
005f5122  SUB EDX,dword ptr [ECX + 0x10]
005f5125  MOV dword ptr [EBP + -0x8],EDX
005f5128  MOV EAX,dword ptr [EBP + -0xc]
005f512b  MOV ECX,dword ptr [EBP + -0xc]
005f512e  MOV EDX,dword ptr [EAX + 0x1c]
005f5131  SUB EDX,dword ptr [ECX + 0x14]
005f5134  MOV dword ptr [EBP + -0x4],EDX
005f5137  MOV EAX,dword ptr [EBP + -0xc]
005f513a  MOV ECX,dword ptr [EBP + 0x8]
005f513d  MOV dword ptr [EAX + 0x10],ECX
005f5140  MOV EDX,dword ptr [EBP + -0xc]
005f5143  MOV EAX,dword ptr [EBP + 0xc]
005f5146  MOV dword ptr [EDX + 0x14],EAX
005f5149  MOV ECX,dword ptr [EBP + -0x8]
005f514c  PUSH ECX
005f514d  MOV ECX,dword ptr [EBP + -0xc]
005f5150  CALL 0x005f5530
005f5155  MOV EDX,dword ptr [EBP + -0x4]
005f5158  PUSH EDX
005f5159  MOV ECX,dword ptr [EBP + -0xc]
005f515c  CALL 0x005f5570
005f5161  MOV ESP,EBP
005f5163  POP EBP
005f5164  RET 0x8

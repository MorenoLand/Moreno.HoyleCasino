; Catch_All@005c537d  005c537d
005c537d  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c5383  MOV ECX,dword ptr [EAX + 0x8]
005c5386  MOV EDX,dword ptr [EBP + 0x10]
005c5389  LEA EAX,[ECX + EDX*0x4]
005c538c  MOV dword ptr [EBP + 0xfffffea8],EAX
005c5392  MOV ECX,dword ptr [EBP + 0xfffffea8]
005c5398  MOV dword ptr [EBP + 0xfffffeac],ECX
005c539e  MOV EDX,dword ptr [EBP + 0x10]
005c53a1  MOV EAX,dword ptr [EBP + 0xc]
005c53a4  LEA ECX,[EAX + EDX*0x4]
005c53a7  MOV dword ptr [EBP + 0xfffffeb0],ECX
005c53ad  MOV DL,byte ptr [EBP + 0xfffffeb6]
005c53b3  MOV byte ptr [EBP + 0xfffffeb7],DL
005c53b9  PUSH 0x0
005c53bb  PUSH 0x0
005c53bd  CALL 0x00686fc0

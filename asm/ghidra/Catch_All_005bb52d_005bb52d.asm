; Catch_All@005bb52d  005bb52d
005bb52d  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb533  MOV ECX,dword ptr [EAX + 0x8]
005bb536  MOV EDX,dword ptr [EBP + 0x10]
005bb539  LEA EAX,[ECX + EDX*0x4]
005bb53c  MOV dword ptr [EBP + 0xfffffea8],EAX
005bb542  MOV ECX,dword ptr [EBP + 0xfffffea8]
005bb548  MOV dword ptr [EBP + 0xfffffeac],ECX
005bb54e  MOV EDX,dword ptr [EBP + 0x10]
005bb551  MOV EAX,dword ptr [EBP + 0xc]
005bb554  LEA ECX,[EAX + EDX*0x4]
005bb557  MOV dword ptr [EBP + 0xfffffeb0],ECX
005bb55d  MOV DL,byte ptr [EBP + 0xfffffeb6]
005bb563  MOV byte ptr [EBP + 0xfffffeb7],DL
005bb569  PUSH 0x0
005bb56b  PUSH 0x0
005bb56d  CALL 0x00686fc0

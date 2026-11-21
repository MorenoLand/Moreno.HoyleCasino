; Catch_All@005bebed  005bebed
005bebed  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bebf3  MOV ECX,dword ptr [EAX + 0x8]
005bebf6  MOV EDX,dword ptr [EBP + 0x10]
005bebf9  LEA EAX,[ECX + EDX*0x4]
005bebfc  MOV dword ptr [EBP + 0xfffffea8],EAX
005bec02  MOV ECX,dword ptr [EBP + 0xfffffea8]
005bec08  MOV dword ptr [EBP + 0xfffffeac],ECX
005bec0e  MOV EDX,dword ptr [EBP + 0x10]
005bec11  MOV EAX,dword ptr [EBP + 0xc]
005bec14  LEA ECX,[EAX + EDX*0x4]
005bec17  MOV dword ptr [EBP + 0xfffffeb0],ECX
005bec1d  MOV DL,byte ptr [EBP + 0xfffffeb6]
005bec23  MOV byte ptr [EBP + 0xfffffeb7],DL
005bec29  PUSH 0x0
005bec2b  PUSH 0x0
005bec2d  CALL 0x00686fc0

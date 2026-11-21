; Catch_All@005c04cd  005c04cd
005c04cd  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c04d3  MOV ECX,dword ptr [EAX + 0x8]
005c04d6  MOV EDX,dword ptr [EBP + 0x10]
005c04d9  LEA EAX,[ECX + EDX*0x4]
005c04dc  MOV dword ptr [EBP + 0xfffffea8],EAX
005c04e2  MOV ECX,dword ptr [EBP + 0xfffffea8]
005c04e8  MOV dword ptr [EBP + 0xfffffeac],ECX
005c04ee  MOV EDX,dword ptr [EBP + 0x10]
005c04f1  MOV EAX,dword ptr [EBP + 0xc]
005c04f4  LEA ECX,[EAX + EDX*0x4]
005c04f7  MOV dword ptr [EBP + 0xfffffeb0],ECX
005c04fd  MOV DL,byte ptr [EBP + 0xfffffeb6]
005c0503  MOV byte ptr [EBP + 0xfffffeb7],DL
005c0509  PUSH 0x0
005c050b  PUSH 0x0
005c050d  CALL 0x00686fc0

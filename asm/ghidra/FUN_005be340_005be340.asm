; FUN_005be340  005be340
005be340  PUSH EBP
005be341  MOV EBP,ESP
005be343  SUB ESP,0x10
005be346  MOV dword ptr [EBP + -0x10],ECX
005be349  MOV EAX,dword ptr [EBP + -0x10]
005be34c  MOV ECX,dword ptr [EAX + 0x10]
005be34f  MOV EDX,dword ptr [EBP + 0x8]
005be352  IMUL EDX,EDX,0x7c
005be355  LEA EAX,[ECX + EDX*0x1 + 0x20]
005be359  MOV dword ptr [EBP + -0x4],EAX
005be35c  MOV ECX,dword ptr [EBP + 0xc]
005be35f  MOV dword ptr [EBP + -0xc],ECX
005be362  MOV EDX,dword ptr [EBP + -0x10]
005be365  MOV EAX,dword ptr [EDX + 0x10]
005be368  MOV ECX,dword ptr [EBP + 0x8]
005be36b  IMUL ECX,ECX,0x7c
005be36e  LEA EDX,[EAX + ECX*0x1 + 0x20]
005be372  MOV dword ptr [EBP + -0x8],EDX
005be375  CMP dword ptr [EBP + -0xc],0x0
005be379  JGE 0x005be388
005be37b  MOV EAX,dword ptr [EBP + -0x8]
005be37e  MOV ECX,dword ptr [EBP + -0xc]
005be381  ADD ECX,dword ptr [EAX]
005be383  MOV dword ptr [EBP + -0xc],ECX
005be386  JMP 0x005be375
005be388  MOV EDX,dword ptr [EBP + -0x8]
005be38b  MOV EAX,dword ptr [EBP + -0xc]
005be38e  CMP EAX,dword ptr [EDX]
005be390  JL 0x005be39f
005be392  MOV ECX,dword ptr [EBP + -0x8]
005be395  MOV EDX,dword ptr [EBP + -0xc]
005be398  SUB EDX,dword ptr [ECX]
005be39a  MOV dword ptr [EBP + -0xc],EDX
005be39d  JMP 0x005be388
005be39f  MOV EAX,dword ptr [EBP + -0xc]
005be3a2  MOV dword ptr [EBP + 0xc],EAX
005be3a5  MOV ECX,dword ptr [EBP + 0xc]
005be3a8  MOV EDX,dword ptr [EBP + -0x4]
005be3ab  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
005be3af  MOV ESP,EBP
005be3b1  POP EBP
005be3b2  RET 0x8

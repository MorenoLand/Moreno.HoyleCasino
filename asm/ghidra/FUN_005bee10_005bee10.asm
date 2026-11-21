; FUN_005bee10  005bee10
005bee10  PUSH EBP
005bee11  MOV EBP,ESP
005bee13  PUSH -0x1
005bee15  PUSH 0x6a8282
005bee1a  MOV EAX,FS:[0x0]
005bee20  PUSH EAX
005bee21  SUB ESP,0x44
005bee24  MOV EAX,[0x00781870]
005bee29  XOR EAX,EBP
005bee2b  PUSH EAX
005bee2c  LEA EAX,[EBP + -0xc]
005bee2f  MOV FS:[0x0],EAX
005bee35  PUSH 0x6d1bf4
005bee3a  LEA ECX,[EBP + -0x50]
005bee3d  CALL dword ptr [0x006b20fc]
005bee43  MOV dword ptr [EBP + -0x4],0x0
005bee4a  LEA ECX,[EBP + -0x34]
005bee4d  CALL dword ptr [0x006b227c]
005bee53  MOV byte ptr [EBP + -0x4],0x1
005bee57  MOV dword ptr [EBP + -0x34],0x6d1bec
005bee5e  LEA EAX,[EBP + -0x50]
005bee61  PUSH EAX
005bee62  LEA ECX,[EBP + -0x28]
005bee65  CALL dword ptr [0x006b20f8]
005bee6b  MOV byte ptr [EBP + -0x4],0x0
005bee6f  MOV dword ptr [EBP + -0x34],0x6d1be0
005bee76  PUSH 0x6fc53c
005bee7b  LEA ECX,[EBP + -0x34]
005bee7e  PUSH ECX
005bee7f  CALL 0x00686fc0

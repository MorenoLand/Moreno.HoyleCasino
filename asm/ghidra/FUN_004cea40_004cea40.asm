; FUN_004cea40  004cea40
004cea40  PUSH EBP
004cea41  MOV EBP,ESP
004cea43  SUB ESP,0xc
004cea46  PUSH ESI
004cea47  MOV dword ptr [EBP + -0xc],ECX
004cea4a  MOVSX EAX,word ptr [EBP + 0x8]
004cea4e  TEST EAX,EAX
004cea50  JGE 0x004cea69
004cea52  PUSH 0xc77
004cea57  PUSH 0x6bf384
004cea5c  PUSH 0x6bf888
004cea61  CALL 0x005e9f20
004cea66  ADD ESP,0xc
004cea69  MOVSX ESI,word ptr [EBP + 0x8]
004cea6d  MOV ECX,dword ptr [0x00791364]
004cea73  CALL 0x0047f950
004cea78  CMP ESI,EAX
004cea7a  JL 0x004cea93
004cea7c  PUSH 0xc78
004cea81  PUSH 0x6bf384
004cea86  PUSH 0x6bf858
004cea8b  CALL 0x005e9f20
004cea90  ADD ESP,0xc
004cea93  MOV word ptr [EBP + -0x8],0x2
004cea99  JMP 0x004ceaa7
004cea9b  MOV AX,word ptr [EBP + -0x8]
004cea9f  ADD AX,0x1
004ceaa3  MOV word ptr [EBP + -0x8],AX
004ceaa7  MOVSX ESI,word ptr [EBP + -0x8]
004ceaab  MOV ECX,dword ptr [0x00791364]
004ceab1  CALL 0x0047f950
004ceab6  CMP ESI,EAX
004ceab8  JG 0x004ceb87
004ceabe  MOVSX ECX,word ptr [EBP + 0x8]
004ceac2  IMUL ECX,ECX,0xe
004ceac5  MOV EDX,dword ptr [EBP + -0xc]
004ceac8  ADD ECX,dword ptr [EDX + 0x428]
004ceace  MOVSX EAX,word ptr [EBP + -0x8]
004cead2  MOV word ptr [ECX + EAX*0x2 + -0x4],0x0
004cead9  MOV ECX,dword ptr [EBP + -0xc]
004ceadc  MOV EDX,dword ptr [ECX + 0x428]
004ceae2  MOVSX EAX,word ptr [EBP + 0x8]
004ceae6  IMUL EAX,EAX,0xe
004ceae9  LEA ECX,[EDX + EAX*0x1 + 0x70]
004ceaed  MOVSX EDX,word ptr [EBP + -0x8]
004ceaf1  MOV word ptr [ECX + EDX*0x2 + -0x4],0x0
004ceaf8  MOV EAX,dword ptr [EBP + -0xc]
004ceafb  MOV ECX,dword ptr [EAX + 0x428]
004ceb01  MOVSX EDX,word ptr [EBP + 0x8]
004ceb05  IMUL EDX,EDX,0xe
004ceb08  LEA EAX,[ECX + EDX*0x1 + 0xe0]
004ceb0f  MOVSX ECX,word ptr [EBP + -0x8]
004ceb13  MOV word ptr [EAX + ECX*0x2 + -0x4],0x0
004ceb1a  MOV EDX,dword ptr [EBP + -0xc]
004ceb1d  MOV EAX,dword ptr [EDX + 0x428]
004ceb23  MOVSX ECX,word ptr [EBP + 0x8]
004ceb27  IMUL ECX,ECX,0x7
004ceb2a  LEA EDX,[EAX + ECX*0x1 + 0x150]
004ceb31  MOVSX EAX,word ptr [EBP + -0x8]
004ceb35  MOV byte ptr [EDX + EAX*0x1 + -0x2],0x0
004ceb3a  MOV word ptr [EBP + -0x4],0x0
004ceb40  JMP 0x004ceb4e
004ceb42  MOV CX,word ptr [EBP + -0x4]
004ceb46  ADD CX,0x1
004ceb4a  MOV word ptr [EBP + -0x4],CX
004ceb4e  MOVSX EDX,word ptr [EBP + -0x4]
004ceb52  CMP EDX,0x6
004ceb55  JGE 0x004ceb82
004ceb57  MOV EAX,dword ptr [EBP + -0xc]
004ceb5a  MOV ECX,dword ptr [EAX + 0x428]
004ceb60  MOVSX EDX,word ptr [EBP + 0x8]
004ceb64  IMUL EDX,EDX,0x2a
004ceb67  LEA EAX,[ECX + EDX*0x1 + 0x188]
004ceb6e  MOVSX ECX,word ptr [EBP + -0x4]
004ceb72  IMUL ECX,ECX,0x7
004ceb75  ADD EAX,ECX
004ceb77  MOVSX EDX,word ptr [EBP + -0x8]
004ceb7b  MOV byte ptr [EAX + EDX*0x1 + -0x2],0x0
004ceb80  JMP 0x004ceb42
004ceb82  JMP 0x004cea9b
004ceb87  POP ESI
004ceb88  MOV ESP,EBP
004ceb8a  POP EBP
004ceb8b  RET 0x4

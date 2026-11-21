; FUN_004c4b50  004c4b50
004c4b50  PUSH EBP
004c4b51  MOV EBP,ESP
004c4b53  SUB ESP,0x24
004c4b56  PUSH ESI
004c4b57  MOV dword ptr [EBP + -0x20],ECX
004c4b5a  MOV EAX,dword ptr [EBP + 0x8]
004c4b5d  PUSH EAX
004c4b5e  MOV ECX,dword ptr [EBP + -0x20]
004c4b61  CALL 0x005fc3a0
004c4b66  MOV ECX,dword ptr [EBP + -0x20]
004c4b69  MOV EDX,dword ptr [ECX + 0x14]
004c4b6c  MOV dword ptr [EBP + -0x24],EDX
004c4b6f  CMP dword ptr [EBP + -0x24],0x8
004c4b73  JA 0x004c55da
004c4b79  MOV EAX,dword ptr [EBP + -0x24]
004c4b7c  JMP dword ptr [EAX*0x4 + 0x4c55e4]

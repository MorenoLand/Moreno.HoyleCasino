; FUN_005fcf60  005fcf60
005fcf60  PUSH EBP
005fcf61  MOV EBP,ESP
005fcf63  PUSH ECX
005fcf64  MOV dword ptr [EBP + -0x4],ECX
005fcf67  MOV ECX,dword ptr [EBP + -0x4]
005fcf6a  CALL 0x00602550
005fcf6f  MOV EAX,dword ptr [EBP + -0x4]
005fcf72  MOV ECX,dword ptr [EAX + 0x1ec]
005fcf78  PUSH ECX
005fcf79  MOV ECX,dword ptr [0x015e55e4]
005fcf7f  CALL 0x005f2840
005fcf84  MOV ECX,dword ptr [EBP + -0x4]
005fcf87  CALL 0x006026d0
005fcf8c  MOVZX EDX,AL
005fcf8f  TEST EDX,EDX
005fcf91  JZ 0x005fcfa5
005fcf93  PUSH 0x0
005fcf95  MOV EAX,dword ptr [EBP + -0x4]
005fcf98  MOV EDX,dword ptr [EAX]
005fcf9a  MOV ECX,dword ptr [EBP + -0x4]
005fcf9d  MOV EAX,dword ptr [EDX + 0xd8]
005fcfa3  CALL EAX
005fcfa5  MOV ECX,dword ptr [EBP + -0x4]
005fcfa8  CMP dword ptr [ECX + 0x1f8],0x0
005fcfaf  JZ 0x005fcfca
005fcfb1  MOV EDX,dword ptr [EBP + -0x4]
005fcfb4  MOV EAX,dword ptr [EDX + 0x1f8]
005fcfba  MOV ECX,dword ptr [EBP + -0x4]
005fcfbd  MOV ECX,dword ptr [ECX + 0x1f8]
005fcfc3  MOV EDX,dword ptr [EAX]
005fcfc5  MOV EAX,dword ptr [EDX + 0x70]
005fcfc8  CALL EAX
005fcfca  MOV ECX,dword ptr [EBP + -0x4]
005fcfcd  CMP dword ptr [ECX + 0x1f4],0x0
005fcfd4  JZ 0x005fcfef
005fcfd6  MOV EDX,dword ptr [EBP + -0x4]
005fcfd9  MOV EAX,dword ptr [EDX + 0x1f4]
005fcfdf  MOV ECX,dword ptr [EBP + -0x4]
005fcfe2  MOV ECX,dword ptr [ECX + 0x1f4]
005fcfe8  MOV EDX,dword ptr [EAX]
005fcfea  MOV EAX,dword ptr [EDX + 0x70]
005fcfed  CALL EAX
005fcfef  MOV ECX,dword ptr [EBP + -0x4]
005fcff2  CMP dword ptr [ECX + 0x200],0x0
005fcff9  JZ 0x005fd014
005fcffb  MOV EDX,dword ptr [EBP + -0x4]
005fcffe  MOV EAX,dword ptr [EDX + 0x200]
005fd004  MOV ECX,dword ptr [EBP + -0x4]
005fd007  MOV ECX,dword ptr [ECX + 0x200]
005fd00d  MOV EDX,dword ptr [EAX]
005fd00f  MOV EAX,dword ptr [EDX + 0x70]
005fd012  CALL EAX
005fd014  MOV ESP,EBP
005fd016  POP EBP
005fd017  RET

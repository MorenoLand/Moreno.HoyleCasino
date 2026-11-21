; FUN_0062ac30  0062ac30
0062ac30  PUSH EBP
0062ac31  MOV EBP,ESP
0062ac33  PUSH ECX
0062ac34  MOV dword ptr [EBP + -0x4],ECX
0062ac37  MOV EAX,dword ptr [EBP + -0x4]
0062ac3a  MOV dword ptr [EAX + 0x14],0x1
0062ac41  MOV ECX,dword ptr [EBP + -0x4]
0062ac44  MOV dword ptr [ECX + 0x18],0x0
0062ac4b  MOV EDX,dword ptr [EBP + -0x4]
0062ac4e  MOV EAX,dword ptr [EBP + -0x4]
0062ac51  MOV ECX,dword ptr [EDX + 0x14]
0062ac54  CMP ECX,dword ptr [EAX + 0x8]
0062ac57  JG 0x0062ac71
0062ac59  MOV EDX,dword ptr [EBP + -0x4]
0062ac5c  MOV EAX,dword ptr [EBP + -0x4]
0062ac5f  MOV ECX,dword ptr [EAX + 0xc]
0062ac62  MOV dword ptr [EDX + 0x1c],ECX
0062ac65  MOV EDX,dword ptr [EBP + -0x4]
0062ac68  MOV EAX,dword ptr [EDX + 0x1c]
0062ac6b  MOV EAX,dword ptr [EAX]
0062ac6d  JMP 0x0062ac7d
0062ac71  MOV ECX,dword ptr [EBP + -0x4]
0062ac74  MOV dword ptr [ECX + 0x1c],0x0
0062ac7b  XOR EAX,EAX
0062ac7d  MOV ESP,EBP
0062ac7f  POP EBP
0062ac80  RET

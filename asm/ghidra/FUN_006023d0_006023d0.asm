; FUN_006023d0  006023d0
006023d0  PUSH EBP
006023d1  MOV EBP,ESP
006023d3  PUSH ECX
006023d4  MOV dword ptr [EBP + -0x4],ECX
006023d7  MOV EAX,dword ptr [EBP + -0x4]
006023da  MOV ECX,dword ptr [EBP + 0x8]
006023dd  MOV dword ptr [EAX + 0x198],ECX
006023e3  MOV EDX,dword ptr [EBP + -0x4]
006023e6  MOV EAX,dword ptr [EBP + 0xc]
006023e9  MOV dword ptr [EDX + 0x19c],EAX
006023ef  MOV ECX,dword ptr [EBP + -0x4]
006023f2  MOV EDX,dword ptr [EBP + 0x10]
006023f5  MOV dword ptr [ECX + 0x1a0],EDX
006023fb  MOV EAX,dword ptr [EBP + -0x4]
006023fe  MOV ECX,dword ptr [EBP + 0x14]
00602401  MOV dword ptr [EAX + 0x1a4],ECX
00602407  MOV EDX,dword ptr [EBP + -0x4]
0060240a  MOV EAX,dword ptr [EDX]
0060240c  MOV ECX,dword ptr [EBP + -0x4]
0060240f  MOV EDX,dword ptr [EAX + 0xec]
00602415  CALL EDX
00602417  MOV ESP,EBP
00602419  POP EBP
0060241a  RET 0x10

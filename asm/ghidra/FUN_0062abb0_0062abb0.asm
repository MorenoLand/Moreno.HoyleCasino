; FUN_0062abb0  0062abb0
0062abb0  PUSH EBP
0062abb1  MOV EBP,ESP
0062abb3  SUB ESP,0xc
0062abb6  PUSH ESI
0062abb7  MOV dword ptr [EBP + -0xc],ECX
0062abba  MOV EAX,dword ptr [EBP + -0xc]
0062abbd  CMP dword ptr [EAX + 0x8],0x0
0062abc1  JZ 0x0062ac1d
0062abc3  CMP dword ptr [EBP + 0x8],0x0
0062abc7  JL 0x0062ac1d
0062abc9  MOV ECX,dword ptr [EBP + -0xc]
0062abcc  MOV EDX,dword ptr [EBP + 0x8]
0062abcf  CMP EDX,dword ptr [ECX + 0x8]
0062abd2  JGE 0x0062ac1d
0062abd4  MOV EAX,dword ptr [EBP + -0xc]
0062abd7  MOV ECX,dword ptr [EAX + 0xc]
0062abda  MOV dword ptr [EBP + -0x4],ECX
0062abdd  MOV EDX,dword ptr [EBP + -0xc]
0062abe0  MOV EAX,dword ptr [EDX + 0x8]
0062abe3  SUB EAX,0x1
0062abe6  MOV ECX,dword ptr [EBP + -0xc]
0062abe9  MOV dword ptr [ECX + 0x8],EAX
0062abec  MOV EDX,dword ptr [EBP + 0x8]
0062abef  MOV dword ptr [EBP + -0x8],EDX
0062abf2  JMP 0x0062abfd
0062abf4  MOV EAX,dword ptr [EBP + -0x8]
0062abf7  ADD EAX,0x1
0062abfa  MOV dword ptr [EBP + -0x8],EAX
0062abfd  MOV ECX,dword ptr [EBP + -0xc]
0062ac00  MOV EDX,dword ptr [EBP + -0x8]
0062ac03  CMP EDX,dword ptr [ECX + 0x8]
0062ac06  JGE 0x0062ac1d
0062ac08  MOV EAX,dword ptr [EBP + -0x8]
0062ac0b  MOV ECX,dword ptr [EBP + -0x4]
0062ac0e  MOV EDX,dword ptr [EBP + -0x8]
0062ac11  MOV ESI,dword ptr [EBP + -0x4]
0062ac14  MOV EDX,dword ptr [ESI + EDX*0x4 + 0x4]
0062ac18  MOV dword ptr [ECX + EAX*0x4],EDX
0062ac1b  JMP 0x0062abf4
0062ac1d  POP ESI
0062ac1e  MOV ESP,EBP
0062ac20  POP EBP
0062ac21  RET 0x4

; FUN_006630e0  006630e0
006630e0  PUSH EBP
006630e1  MOV EBP,ESP
006630e3  SUB ESP,0xc
006630e6  MOV dword ptr [EBP + -0xc],ECX
006630e9  LEA EAX,[EBP + -0x8]
006630ec  PUSH EAX
006630ed  MOV ECX,dword ptr [EBP + -0xc]
006630f0  MOV EDX,dword ptr [ECX]
006630f2  MOV ECX,dword ptr [EBP + -0xc]
006630f5  MOV EAX,dword ptr [EDX]
006630f7  CALL EAX
006630f9  MOV ECX,dword ptr [EBP + -0xc]
006630fc  MOV EDX,dword ptr [ECX + 0x10]
006630ff  MOV EAX,dword ptr [EBP + -0xc]
00663102  ADD EDX,dword ptr [EAX + 0x18]
00663105  MOV ECX,dword ptr [EBP + -0xc]
00663108  MOV dword ptr [ECX + 0x10],EDX
0066310b  MOV EDX,dword ptr [EBP + -0xc]
0066310e  MOV EAX,dword ptr [EDX + 0x10]
00663111  MOV ECX,dword ptr [EBP + -0xc]
00663114  ADD EAX,dword ptr [ECX + 0x18]
00663117  MOV EDX,dword ptr [EBP + -0xc]
0066311a  MOV ECX,dword ptr [EDX + 0x8]
0066311d  CMP EAX,dword ptr [ECX + 0xc]
00663120  JLE 0x00663159
00663122  MOV EDX,dword ptr [EBP + -0xc]
00663125  MOV EAX,dword ptr [EDX + 0x8]
00663128  CMP dword ptr [EAX],0x0
0066312b  JL 0x0066313c
0066312d  MOV ECX,dword ptr [EBP + -0xc]
00663130  MOV EDX,dword ptr [ECX + 0x8]
00663133  ADD EDX,0x10
00663136  MOV EAX,dword ptr [EBP + -0xc]
00663139  MOV dword ptr [EAX + 0x8],EDX
0066313c  MOV ECX,dword ptr [EBP + -0xc]
0066313f  MOV EDX,dword ptr [ECX + 0x8]
00663142  MOV EAX,dword ptr [EBP + -0xc]
00663145  MOV ECX,dword ptr [EDX]
00663147  MOV dword ptr [EAX + 0xc],ECX
0066314a  MOV EDX,dword ptr [EBP + -0xc]
0066314d  MOV EAX,dword ptr [EDX + 0x8]
00663150  MOV ECX,dword ptr [EBP + -0xc]
00663153  MOV EDX,dword ptr [EAX + 0x4]
00663156  MOV dword ptr [ECX + 0x10],EDX
00663159  MOV EAX,dword ptr [EBP + 0x8]
0066315c  PUSH EAX
0066315d  MOV ECX,dword ptr [EBP + -0xc]
00663160  MOV EDX,dword ptr [ECX]
00663162  MOV ECX,dword ptr [EBP + -0xc]
00663165  MOV EAX,dword ptr [EDX]
00663167  CALL EAX
00663169  MOV EAX,dword ptr [EBP + 0x8]
0066316c  MOV ESP,EBP
0066316e  POP EBP
0066316f  RET 0x4

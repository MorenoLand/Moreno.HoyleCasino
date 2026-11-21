; FUN_0056df70  0056df70
0056df70  PUSH EBP
0056df71  MOV EBP,ESP
0056df73  PUSH ECX
0056df74  MOV dword ptr [EBP + -0x4],ECX
0056df77  MOV EAX,dword ptr [EBP + -0x4]
0056df7a  MOV ECX,dword ptr [EAX + 0xa0]
0056df80  ADD ECX,dword ptr [EBP + 0x8]
0056df83  MOV EDX,dword ptr [EBP + -0x4]
0056df86  MOV dword ptr [EDX + 0xa0],ECX
0056df8c  MOV EAX,dword ptr [EBP + -0x4]
0056df8f  CMP dword ptr [EAX + 0xa0],0x3b9ac9ff
0056df99  JBE 0x0056dfc9
0056df9b  PUSH 0x0
0056df9d  PUSH 0x6c54f0
0056dfa2  CALL 0x00630f40
0056dfa7  ADD ESP,0x4
0056dfaa  PUSH EAX
0056dfab  PUSH 0x6ca310
0056dfb0  CALL 0x00630f40
0056dfb5  ADD ESP,0x4
0056dfb8  PUSH EAX
0056dfb9  CALL 0x0062ff10
0056dfbe  ADD ESP,0xc
0056dfc1  MOV ECX,dword ptr [EBP + -0x4]
0056dfc4  CALL 0x0056e6b0
0056dfc9  MOV ECX,dword ptr [EBP + -0x4]
0056dfcc  MOV EDX,dword ptr [ECX + 0xa0]
0056dfd2  PUSH EDX
0056dfd3  MOV EAX,dword ptr [EBP + -0x4]
0056dfd6  MOV ECX,dword ptr [EAX + 0x20]
0056dfd9  CALL 0x005709b0
0056dfde  MOV ESP,EBP
0056dfe0  POP EBP
0056dfe1  RET 0x4

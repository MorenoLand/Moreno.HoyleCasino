; FUN_0062cdd0  0062cdd0
0062cdd0  PUSH EBP
0062cdd1  MOV EBP,ESP
0062cdd3  PUSH ECX
0062cdd4  MOV dword ptr [EBP + -0x4],ECX
0062cdd7  MOV ECX,dword ptr [EBP + -0x4]
0062cdda  CALL 0x0062afa0
0062cddf  MOV EAX,dword ptr [EBP + 0x8]
0062cde2  AND EAX,0x1
0062cde5  JZ 0x0062cdf3
0062cde7  MOV ECX,dword ptr [EBP + -0x4]
0062cdea  PUSH ECX
0062cdeb  CALL 0x00686cae
0062cdf0  ADD ESP,0x4
0062cdf3  MOV EAX,dword ptr [EBP + -0x4]
0062cdf6  MOV ESP,EBP
0062cdf8  POP EBP
0062cdf9  RET 0x4

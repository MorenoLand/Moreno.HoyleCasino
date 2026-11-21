; FUN_0062ace0  0062ace0
0062ace0  PUSH EBP
0062ace1  MOV EBP,ESP
0062ace3  PUSH ECX
0062ace4  MOV dword ptr [EBP + -0x4],ECX
0062ace7  MOV EAX,dword ptr [EBP + -0x4]
0062acea  MOV ECX,dword ptr [EBP + -0x4]
0062aced  MOV EDX,dword ptr [EAX + 0x14]
0062acf0  CMP EDX,dword ptr [ECX + 0x8]
0062acf3  JGE 0x0062ad1f
0062acf5  MOV EAX,dword ptr [EBP + -0x4]
0062acf8  MOV ECX,dword ptr [EAX + 0x14]
0062acfb  ADD ECX,0x1
0062acfe  MOV EDX,dword ptr [EBP + -0x4]
0062ad01  MOV dword ptr [EDX + 0x14],ECX
0062ad04  MOV EAX,dword ptr [EBP + -0x4]
0062ad07  MOV ECX,dword ptr [EAX + 0x1c]
0062ad0a  ADD ECX,0x4
0062ad0d  MOV EDX,dword ptr [EBP + -0x4]
0062ad10  MOV dword ptr [EDX + 0x1c],ECX
0062ad13  MOV EAX,dword ptr [EBP + -0x4]
0062ad16  MOV ECX,dword ptr [EAX + 0x1c]
0062ad19  MOV EAX,dword ptr [ECX]
0062ad1b  JMP 0x0062ad21
0062ad1f  XOR EAX,EAX
0062ad21  MOV ESP,EBP
0062ad23  POP EBP
0062ad24  RET

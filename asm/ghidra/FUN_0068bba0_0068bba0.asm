; FUN_0068bba0  0068bba0
0068bba0  PUSH EBP
0068bba1  MOV EBP,ESP
0068bba3  PUSH -0x1
0068bba5  PUSH 0x6ae099
0068bbaa  MOV EAX,FS:[0x0]
0068bbb0  PUSH EAX
0068bbb1  PUSH ECX
0068bbb2  MOV EAX,[0x00781870]
0068bbb7  XOR EAX,EBP
0068bbb9  PUSH EAX
0068bbba  LEA EAX,[EBP + -0xc]
0068bbbd  MOV FS:[0x0],EAX
0068bbc3  MOV dword ptr [EBP + -0x10],ECX
0068bbc6  MOV dword ptr [EBP + -0x4],0x0
0068bbcd  MOV ECX,dword ptr [EBP + -0x10]
0068bbd0  ADD ECX,0x1c
0068bbd3  CALL dword ptr [0x006b20f4]
0068bbd9  MOV dword ptr [EBP + -0x4],0xffffffff
0068bbe0  MOV ECX,dword ptr [EBP + -0x10]
0068bbe3  CALL dword ptr [0x006b20f4]
0068bbe9  MOV ECX,dword ptr [EBP + -0xc]
0068bbec  MOV dword ptr FS:[0x0],ECX
0068bbf3  POP ECX
0068bbf4  MOV ESP,EBP
0068bbf6  POP EBP
0068bbf7  RET

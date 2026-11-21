; FUN_0059ffa0  0059ffa0
0059ffa0  PUSH EBP
0059ffa1  MOV EBP,ESP
0059ffa3  PUSH -0x1
0059ffa5  PUSH 0x6a7778
0059ffaa  MOV EAX,FS:[0x0]
0059ffb0  PUSH EAX
0059ffb1  PUSH ECX
0059ffb2  MOV EAX,[0x00781870]
0059ffb7  XOR EAX,EBP
0059ffb9  PUSH EAX
0059ffba  LEA EAX,[EBP + -0xc]
0059ffbd  MOV FS:[0x0],EAX
0059ffc3  MOV dword ptr [EBP + -0x10],ECX
0059ffc6  MOV ECX,dword ptr [EBP + -0x10]
0059ffc9  CALL 0x005d7b60
0059ffce  MOV dword ptr [EBP + -0x4],0x0
0059ffd5  MOV EAX,dword ptr [EBP + -0x10]
0059ffd8  MOV dword ptr [EAX],0x6cf08c
0059ffde  PUSH 0xfde8
0059ffe3  MOV ECX,dword ptr [EBP + -0x10]
0059ffe6  CALL 0x005f1ad0
0059ffeb  MOV ECX,dword ptr [EBP + -0x10]
0059ffee  MOV dword ptr [0x007935cc],ECX
0059fff4  MOV dword ptr [0x007935c0],0x0
0059fffe  MOV dword ptr [0x007935c4],0x0
005a0008  MOV dword ptr [0x007935c8],0x0
005a0012  MOV dword ptr [0x007935d0],0x0
005a001c  MOV dword ptr [EBP + -0x4],0xffffffff
005a0023  MOV EAX,dword ptr [EBP + -0x10]
005a0026  MOV ECX,dword ptr [EBP + -0xc]
005a0029  MOV dword ptr FS:[0x0],ECX
005a0030  POP ECX
005a0031  MOV ESP,EBP
005a0033  POP EBP
005a0034  RET

; FUN_00600330  00600330
00600330  PUSH EBP
00600331  MOV EBP,ESP
00600333  PUSH ECX
00600334  MOV dword ptr [EBP + -0x4],ECX
00600337  MOV EAX,dword ptr [EBP + -0x4]
0060033a  MOVZX ECX,byte ptr [EAX + 0x1dc]
00600341  TEST ECX,ECX
00600343  JZ 0x0060038f
00600345  MOV EDX,dword ptr [EBP + -0x4]
00600348  MOV EAX,dword ptr [EBP + -0x4]
0060034b  MOV ECX,dword ptr [EAX + 0x1f0]
00600351  MOV dword ptr [EDX + 0x198],ECX
00600357  MOV EDX,dword ptr [EBP + -0x4]
0060035a  MOV EAX,dword ptr [EBP + -0x4]
0060035d  MOV ECX,dword ptr [EAX + 0x1f4]
00600363  MOV dword ptr [EDX + 0x19c],ECX
00600369  MOV EDX,dword ptr [EBP + -0x4]
0060036c  MOV EAX,dword ptr [EBP + -0x4]
0060036f  MOV ECX,dword ptr [EAX + 0x1f8]
00600375  MOV dword ptr [EDX + 0x1a0],ECX
0060037b  MOV EDX,dword ptr [EBP + -0x4]
0060037e  MOV EAX,dword ptr [EBP + -0x4]
00600381  MOV ECX,dword ptr [EAX + 0x1fc]
00600387  MOV dword ptr [EDX + 0x1a4],ECX
0060038d  JMP 0x006003d7
0060038f  MOV EDX,dword ptr [EBP + -0x4]
00600392  MOV EAX,dword ptr [EBP + -0x4]
00600395  MOV ECX,dword ptr [EAX + 0x1e0]
0060039b  MOV dword ptr [EDX + 0x198],ECX
006003a1  MOV EDX,dword ptr [EBP + -0x4]
006003a4  MOV EAX,dword ptr [EBP + -0x4]
006003a7  MOV ECX,dword ptr [EAX + 0x1e4]
006003ad  MOV dword ptr [EDX + 0x19c],ECX
006003b3  MOV EDX,dword ptr [EBP + -0x4]
006003b6  MOV EAX,dword ptr [EBP + -0x4]
006003b9  MOV ECX,dword ptr [EAX + 0x1e8]
006003bf  MOV dword ptr [EDX + 0x1a0],ECX
006003c5  MOV EDX,dword ptr [EBP + -0x4]
006003c8  MOV EAX,dword ptr [EBP + -0x4]
006003cb  MOV ECX,dword ptr [EAX + 0x1ec]
006003d1  MOV dword ptr [EDX + 0x1a4],ECX
006003d7  MOV ECX,dword ptr [EBP + -0x4]
006003da  CALL 0x00602f60
006003df  MOV ESP,EBP
006003e1  POP EBP
006003e2  RET

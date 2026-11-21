; FUN_00590c80  00590c80
00590c80  PUSH EBP
00590c81  MOV EBP,ESP
00590c83  PUSH ECX
00590c84  MOV dword ptr [EBP + -0x4],ECX
00590c87  MOV EAX,dword ptr [EBP + -0x4]
00590c8a  MOV ECX,dword ptr [EBP + 0x8]
00590c8d  MOV dword ptr [EAX + 0x1e4],ECX
00590c93  MOV EDX,dword ptr [EBP + -0x4]
00590c96  MOV EAX,dword ptr [EBP + 0xc]
00590c99  MOV dword ptr [EDX + 0x1e0],EAX
00590c9f  MOV ECX,dword ptr [EBP + -0x4]
00590ca2  MOV byte ptr [ECX + 0x1dc],0x0
00590ca9  MOV ESP,EBP
00590cab  POP EBP
00590cac  RET 0x8

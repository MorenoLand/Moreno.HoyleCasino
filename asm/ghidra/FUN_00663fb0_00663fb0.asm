; FUN_00663fb0  00663fb0
00663fb0  PUSH EBP
00663fb1  MOV EBP,ESP
00663fb3  PUSH ECX
00663fb4  MOV dword ptr [EBP + -0x4],ECX
00663fb7  MOV EAX,dword ptr [EBP + 0x8]
00663fba  MOV byte ptr [EAX + 0x4],0x1
00663fbe  MOV ECX,dword ptr [EBP + -0x4]
00663fc1  MOV byte ptr [ECX + 0x8],0x0
00663fc5  MOV EDX,dword ptr [EBP + -0x4]
00663fc8  MOV byte ptr [EDX + 0x9],0x0
00663fcc  MOV EAX,dword ptr [EBP + 0x8]
00663fcf  MOV ECX,dword ptr [EAX + 0x20]
00663fd2  CMP ECX,dword ptr [0x016306a4]
00663fd8  JZ 0x00664009
00663fda  MOV EDX,dword ptr [EBP + -0x4]
00663fdd  CMP dword ptr [EDX + 0x184],0x0
00663fe4  JZ 0x00664009
00663fe6  MOV EAX,dword ptr [EBP + -0x4]
00663fe9  MOV ECX,dword ptr [EAX + 0x184]
00663fef  PUSH ECX
00663ff0  MOV EDX,dword ptr [EBP + 0x8]
00663ff3  PUSH EDX
00663ff4  MOV EAX,[0x0162ee80]
00663ff9  MOV EDX,dword ptr [EAX]
00663ffb  MOV ECX,dword ptr [0x0162ee80]
00664001  MOV EAX,dword ptr [EDX + 0x120]
00664007  CALL EAX
00664009  MOV ESP,EBP
0066400b  POP EBP
0066400c  RET 0x4

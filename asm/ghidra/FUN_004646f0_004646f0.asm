; FUN_004646f0  004646f0
004646f0  PUSH EBP
004646f1  MOV EBP,ESP
004646f3  PUSH ECX
004646f4  MOV dword ptr [EBP + -0x4],ECX
004646f7  MOV EAX,dword ptr [EBP + -0x4]
004646fa  MOV word ptr [EAX],0x1fff
004646ff  MOV ECX,dword ptr [EBP + -0x4]
00464702  MOV word ptr [ECX + 0x2],0x1fff
00464708  MOV EDX,dword ptr [EBP + -0x4]
0046470b  MOV word ptr [EDX + 0x4],0x1fff
00464711  MOV EAX,dword ptr [EBP + -0x4]
00464714  MOV word ptr [EAX + 0x6],0x1fff
0046471a  MOV ECX,dword ptr [EBP + -0x4]
0046471d  MOV byte ptr [ECX + 0x8],0x0
00464721  MOV EDX,dword ptr [EBP + -0x4]
00464724  MOV byte ptr [EDX + 0x9],0x0
00464728  MOV ESP,EBP
0046472a  POP EBP
0046472b  RET

; FUN_00420a00  00420a00
00420a00  PUSH EBP
00420a01  MOV EBP,ESP
00420a03  SUB ESP,0x24
00420a06  MOV dword ptr [EBP + -0x24],ECX
00420a09  MOV dword ptr [EBP + -0x20],0x127
00420a10  MOV dword ptr [EBP + -0x1c],0x152
00420a17  MOV dword ptr [EBP + -0x18],0x127
00420a1e  MOV dword ptr [EBP + -0x14],0x151
00420a25  MOV dword ptr [EBP + -0x10],0xf2
00420a2c  MOV dword ptr [EBP + -0xc],0x112
00420a33  MOV dword ptr [EBP + -0x8],0xf2
00420a3a  MOV dword ptr [EBP + -0x4],0x113
00420a41  MOV EAX,dword ptr [EBP + -0x24]
00420a44  MOV ECX,dword ptr [EAX + 0xae0]
00420a4a  MOV EAX,dword ptr [EBP + ECX*0x4 + -0x20]
00420a4e  MOV ESP,EBP
00420a50  POP EBP
00420a51  RET 0x8

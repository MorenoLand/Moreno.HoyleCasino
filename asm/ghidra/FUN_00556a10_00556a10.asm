; FUN_00556a10  00556a10
00556a10  PUSH EBP
00556a11  MOV EBP,ESP
00556a13  PUSH ECX
00556a14  MOV dword ptr [EBP + -0x4],ECX
00556a17  CMP dword ptr [EBP + 0x8],0x0
00556a1b  JNZ 0x00556a21
00556a1d  XOR AL,AL
00556a1f  JMP 0x00556a68
00556a21  MOV EAX,dword ptr [EBP + 0x8]
00556a24  MOV dword ptr [EAX],0x1
00556a2a  MOV ECX,dword ptr [EBP + 0x8]
00556a2d  MOV dword ptr [ECX + 0x4],0x1
00556a34  MOV EDX,dword ptr [EBP + 0x8]
00556a37  MOV dword ptr [EDX + 0x8],0x1
00556a3e  MOV EAX,dword ptr [EBP + 0x8]
00556a41  MOV dword ptr [EAX + 0xc],0x1
00556a48  MOV ECX,dword ptr [EBP + 0x8]
00556a4b  MOV dword ptr [ECX + 0x10],0x1
00556a52  MOV EDX,dword ptr [EBP + 0x8]
00556a55  MOV dword ptr [EDX + 0x14],0x0
00556a5c  MOV EAX,dword ptr [EBP + 0x8]
00556a5f  MOV dword ptr [EAX + 0x18],0x0
00556a66  MOV AL,0x1
00556a68  MOV ESP,EBP
00556a6a  POP EBP
00556a6b  RET 0x8

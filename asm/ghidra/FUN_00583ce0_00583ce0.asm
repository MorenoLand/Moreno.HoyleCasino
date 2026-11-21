; FUN_00583ce0  00583ce0
00583ce0  PUSH EBP
00583ce1  MOV EBP,ESP
00583ce3  PUSH ECX
00583ce4  MOV dword ptr [EBP + -0x4],ECX
00583ce7  CMP dword ptr [EBP + 0x8],0x0
00583ceb  JNZ 0x00583cf1
00583ced  XOR AL,AL
00583cef  JMP 0x00583d38
00583cf1  MOV EAX,dword ptr [EBP + 0x8]
00583cf4  MOV dword ptr [EAX],0x1
00583cfa  MOV ECX,dword ptr [EBP + 0x8]
00583cfd  MOV dword ptr [ECX + 0x4],0x1
00583d04  MOV EDX,dword ptr [EBP + 0x8]
00583d07  MOV dword ptr [EDX + 0x8],0x1
00583d0e  MOV EAX,dword ptr [EBP + 0x8]
00583d11  MOV dword ptr [EAX + 0xc],0x1
00583d18  MOV ECX,dword ptr [EBP + 0x8]
00583d1b  MOV dword ptr [ECX + 0x10],0x1
00583d22  MOV EDX,dword ptr [EBP + 0x8]
00583d25  MOV dword ptr [EDX + 0x14],0x0
00583d2c  MOV EAX,dword ptr [EBP + 0x8]
00583d2f  MOV dword ptr [EAX + 0x18],0x0
00583d36  MOV AL,0x1
00583d38  MOV ESP,EBP
00583d3a  POP EBP
00583d3b  RET 0x8

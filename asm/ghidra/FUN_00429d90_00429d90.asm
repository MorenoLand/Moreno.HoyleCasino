; FUN_00429d90  00429d90
00429d90  PUSH EBP
00429d91  MOV EBP,ESP
00429d93  SUB ESP,0x8
00429d96  MOV dword ptr [EBP + -0x8],ECX
00429d99  MOV EAX,dword ptr [EBP + 0x8]
00429d9c  MOV ECX,dword ptr [EBP + -0x8]
00429d9f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x14]
00429da3  MOV EAX,dword ptr [EBP + 0xc]
00429da6  MOV ECX,dword ptr [EDX + EAX*0x4 + 0xafc]
00429dad  MOV dword ptr [EBP + -0x4],ECX
00429db0  CMP dword ptr [EBP + -0x4],0x0
00429db4  JNZ 0x00429db8
00429db6  JMP 0x00429dc5
00429db8  MOV EDX,dword ptr [EBP + -0x4]
00429dbb  MOV EAX,dword ptr [EDX]
00429dbd  MOV ECX,dword ptr [EBP + -0x4]
00429dc0  MOV EDX,dword ptr [EAX + 0x74]
00429dc3  CALL EDX
00429dc5  MOV ESP,EBP
00429dc7  POP EBP
00429dc8  RET 0x8

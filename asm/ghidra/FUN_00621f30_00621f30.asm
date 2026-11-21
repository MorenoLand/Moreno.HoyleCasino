; FUN_00621f30  00621f30
00621f30  PUSH EBP
00621f31  MOV EBP,ESP
00621f33  SUB ESP,0x10
00621f36  MOV dword ptr [EBP + -0x4],0x0
00621f3d  MOV dword ptr [EBP + -0xc],0x0
00621f44  MOV dword ptr [EBP + -0x8],0x0
00621f4b  MOV EAX,dword ptr [EBP + 0x8]
00621f4e  MOV dword ptr [EBP + -0x10],EAX
00621f51  JMP 0x00621f65
00621f53  MOV ECX,dword ptr [EBP + -0x8]
00621f56  ADD ECX,0x1
00621f59  MOV dword ptr [EBP + -0x8],ECX
00621f5c  MOV EDX,dword ptr [EBP + -0x10]
00621f5f  ADD EDX,0x20
00621f62  MOV dword ptr [EBP + -0x10],EDX
00621f65  MOV EAX,dword ptr [EBP + -0x8]
00621f68  CMP EAX,dword ptr [EBP + 0xc]
00621f6b  JGE 0x00621f89
00621f6d  MOV ECX,dword ptr [EBP + -0x10]
00621f70  MOV EDX,dword ptr [ECX + 0x18]
00621f73  CMP EDX,dword ptr [EBP + -0x4]
00621f76  JLE 0x00621f87
00621f78  MOV EAX,dword ptr [EBP + -0x10]
00621f7b  MOV dword ptr [EBP + -0xc],EAX
00621f7e  MOV ECX,dword ptr [EBP + -0x10]
00621f81  MOV EDX,dword ptr [ECX + 0x18]
00621f84  MOV dword ptr [EBP + -0x4],EDX
00621f87  JMP 0x00621f53
00621f89  MOV EAX,dword ptr [EBP + -0xc]
00621f8c  MOV ESP,EBP
00621f8e  POP EBP
00621f8f  RET

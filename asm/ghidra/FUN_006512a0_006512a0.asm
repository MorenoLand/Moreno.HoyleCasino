; FUN_006512a0  006512a0
006512a0  PUSH EBP
006512a1  MOV EBP,ESP
006512a3  SUB ESP,0x8
006512a6  MOV dword ptr [EBP + -0x4],ECX
006512a9  MOV EAX,dword ptr [EBP + 0x8]
006512ac  MOV dword ptr [EBP + -0x8],EAX
006512af  CMP dword ptr [EBP + -0x8],0x0
006512b3  JZ 0x006512c3
006512b5  CMP dword ptr [EBP + -0x8],0x1
006512b9  JZ 0x006512d7
006512bb  CMP dword ptr [EBP + -0x8],0x2
006512bf  JZ 0x006512eb
006512c1  JMP 0x006512fd
006512c3  MOV ECX,dword ptr [EBP + -0x4]
006512c6  MOV EDX,dword ptr [EBP + -0x4]
006512c9  MOV EAX,dword ptr [EDX + 0x1c4]
006512cf  MOV dword ptr [ECX + 0x1c0],EAX
006512d5  JMP 0x006512fd
006512d7  MOV ECX,dword ptr [EBP + -0x4]
006512da  MOV EDX,dword ptr [EBP + -0x4]
006512dd  MOV EAX,dword ptr [EDX + 0x1c8]
006512e3  MOV dword ptr [ECX + 0x1c0],EAX
006512e9  JMP 0x006512fd
006512eb  MOV ECX,dword ptr [EBP + -0x4]
006512ee  MOV EDX,dword ptr [EBP + -0x4]
006512f1  MOV EAX,dword ptr [EDX + 0x1cc]
006512f7  MOV dword ptr [ECX + 0x1c0],EAX
006512fd  MOV ECX,dword ptr [EBP + -0x4]
00651300  MOV byte ptr [ECX + 0x1bc],0x1
00651307  MOV ESP,EBP
00651309  POP EBP
0065130a  RET 0x4

; FUN_00429dd0  00429dd0
00429dd0  PUSH EBP
00429dd1  MOV EBP,ESP
00429dd3  SUB ESP,0x8
00429dd6  MOV dword ptr [EBP + -0x8],ECX
00429dd9  MOV EAX,dword ptr [EBP + 0x8]
00429ddc  MOV ECX,dword ptr [EBP + -0x8]
00429ddf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x14]
00429de3  MOV EAX,dword ptr [EBP + 0xc]
00429de6  MOV ECX,dword ptr [EDX + EAX*0x4 + 0xaec]
00429ded  MOV dword ptr [EBP + -0x4],ECX
00429df0  CMP dword ptr [EBP + -0x4],0x0
00429df4  JNZ 0x00429df8
00429df6  JMP 0x00429e05
00429df8  MOV EDX,dword ptr [EBP + -0x4]
00429dfb  MOV EAX,dword ptr [EDX]
00429dfd  MOV ECX,dword ptr [EBP + -0x4]
00429e00  MOV EDX,dword ptr [EAX + 0x74]
00429e03  CALL EDX
00429e05  MOV ESP,EBP
00429e07  POP EBP
00429e08  RET 0x8

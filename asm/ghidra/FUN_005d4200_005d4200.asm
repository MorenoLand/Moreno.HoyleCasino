; FUN_005d4200  005d4200
005d4200  PUSH EBP
005d4201  MOV EBP,ESP
005d4203  SUB ESP,0x10
005d4206  MOV dword ptr [EBP + -0xc],ECX
005d4209  MOV EAX,dword ptr [EBP + -0xc]
005d420c  CMP dword ptr [EAX + 0x88],0x0
005d4213  JZ 0x005d426d
005d4215  MOV ECX,dword ptr [EBP + -0xc]
005d4218  MOV EDX,dword ptr [ECX + 0x88]
005d421e  MOV EAX,dword ptr [EBP + -0xc]
005d4221  MOV ECX,dword ptr [EAX + 0x88]
005d4227  MOV EDX,dword ptr [EDX]
005d4229  MOV EAX,dword ptr [EDX + 0x70]
005d422c  CALL EAX
005d422e  MOV ECX,dword ptr [EBP + -0xc]
005d4231  MOV EDX,dword ptr [ECX + 0x88]
005d4237  MOV dword ptr [EBP + -0x8],EDX
005d423a  MOV EAX,dword ptr [EBP + -0x8]
005d423d  MOV dword ptr [EBP + -0x4],EAX
005d4240  CMP dword ptr [EBP + -0x4],0x0
005d4244  JZ 0x005d4259
005d4246  PUSH 0x1
005d4248  MOV ECX,dword ptr [EBP + -0x4]
005d424b  MOV EDX,dword ptr [ECX]
005d424d  MOV ECX,dword ptr [EBP + -0x4]
005d4250  MOV EAX,dword ptr [EDX]
005d4252  CALL EAX
005d4254  MOV dword ptr [EBP + -0x10],EAX
005d4257  JMP 0x005d4260
005d4259  MOV dword ptr [EBP + -0x10],0x0
005d4260  MOV ECX,dword ptr [EBP + -0xc]
005d4263  MOV dword ptr [ECX + 0x88],0x0
005d426d  MOV ESP,EBP
005d426f  POP EBP
005d4270  RET

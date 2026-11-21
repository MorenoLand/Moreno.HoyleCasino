; FUN_00610650  00610650
00610650  PUSH EBP
00610651  MOV EBP,ESP
00610653  SUB ESP,0x140
00610659  PUSH ESI
0061065a  PUSH EDI
0061065b  MOV dword ptr [EBP + 0xfffffec0],ECX
00610661  MOV ESI,dword ptr [EBP + 0x8]
00610664  MOV ECX,0x8
00610669  MOV EDI,dword ptr [EBP + 0xfffffec0]
0061066f  MOVSD.REP ES:EDI,ESI
00610671  MOV EAX,dword ptr [EBP + 0x8]
00610674  ADD EAX,0x20
00610677  PUSH EAX
00610678  MOV ECX,dword ptr [EBP + 0xfffffec0]
0061067e  ADD ECX,0x20
00610681  CALL 0x005bc040
00610686  MOV ECX,dword ptr [EBP + 0xfffffec0]
0061068c  MOV EDX,dword ptr [EBP + 0x8]
0061068f  MOV EAX,dword ptr [EDX + 0x30]
00610692  MOV dword ptr [ECX + 0x30],EAX
00610695  MOV ECX,dword ptr [EBP + 0xfffffec0]
0061069b  MOV EDX,dword ptr [EBP + 0x8]
0061069e  MOV EAX,dword ptr [EDX + 0x34]
006106a1  MOV dword ptr [ECX + 0x34],EAX
006106a4  MOV ECX,dword ptr [EBP + 0xfffffec0]
006106aa  MOV EDX,dword ptr [EBP + 0x8]
006106ad  FLD float ptr [EDX + 0x38]
006106b0  FSTP float ptr [ECX + 0x38]
006106b3  MOV EAX,dword ptr [EBP + 0xfffffec0]
006106b9  MOV ECX,dword ptr [EBP + 0x8]
006106bc  FLD float ptr [ECX + 0x3c]
006106bf  FSTP float ptr [EAX + 0x3c]
006106c2  MOV EDX,dword ptr [EBP + 0xfffffec0]
006106c8  MOV EAX,dword ptr [EBP + 0x8]
006106cb  FLD float ptr [EAX + 0x40]
006106ce  FSTP float ptr [EDX + 0x40]
006106d1  MOV ECX,dword ptr [EBP + 0xfffffec0]
006106d7  MOV EDX,dword ptr [EBP + 0x8]
006106da  MOV EAX,dword ptr [EDX + 0x44]
006106dd  MOV dword ptr [ECX + 0x44],EAX
006106e0  POP EDI
006106e1  POP ESI
006106e2  MOV ESP,EBP
006106e4  POP EBP
006106e5  RET 0x4

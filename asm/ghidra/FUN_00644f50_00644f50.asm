; FUN_00644f50  00644f50
00644f50  PUSH EBP
00644f51  MOV EBP,ESP
00644f53  SUB ESP,0x8
00644f56  MOV dword ptr [EBP + -0x8],ECX
00644f59  MOV dword ptr [EBP + -0x4],0x3ff
00644f60  JMP 0x00644f6b
00644f62  MOV EAX,dword ptr [EBP + -0x4]
00644f65  SUB EAX,0x1
00644f68  MOV dword ptr [EBP + -0x4],EAX
00644f6b  CMP dword ptr [EBP + -0x4],0x0
00644f6f  JL 0x00644fbf
00644f71  MOV ECX,dword ptr [EBP + -0x4]
00644f74  MOV EDX,dword ptr [EBP + -0x8]
00644f77  CMP dword ptr [EDX + ECX*0x4 + 0x194],0x0
00644f7f  JZ 0x00644fbd
00644f81  MOV EAX,dword ptr [EBP + -0x4]
00644f84  MOV ECX,dword ptr [EBP + -0x8]
00644f87  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x194]
00644f8e  CALL 0x005f54a0
00644f93  MOVZX EDX,AL
00644f96  TEST EDX,EDX
00644f98  JZ 0x00644fbd
00644f9a  MOV EAX,dword ptr [EBP + -0x4]
00644f9d  MOV ECX,dword ptr [EBP + -0x8]
00644fa0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x194]
00644fa7  MOV EAX,dword ptr [EBP + -0x4]
00644faa  MOV ECX,dword ptr [EBP + -0x8]
00644fad  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x194]
00644fb4  MOV EDX,dword ptr [EDX]
00644fb6  MOV EAX,dword ptr [EDX + 0x4c]
00644fb9  CALL EAX
00644fbb  JMP 0x00644fcc
00644fbd  JMP 0x00644f62
00644fbf  MOV ECX,dword ptr [EBP + -0x8]
00644fc2  MOV EDX,dword ptr [ECX]
00644fc4  MOV ECX,dword ptr [EBP + -0x8]
00644fc7  MOV EAX,dword ptr [EDX + 0x4c]
00644fca  CALL EAX
00644fcc  MOV ESP,EBP
00644fce  POP EBP
00644fcf  RET

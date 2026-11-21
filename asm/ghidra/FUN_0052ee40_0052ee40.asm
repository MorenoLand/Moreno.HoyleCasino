; FUN_0052ee40  0052ee40
0052ee40  PUSH EBP
0052ee41  MOV EBP,ESP
0052ee43  PUSH ECX
0052ee44  MOV dword ptr [EBP + -0x4],ECX
0052ee47  MOV EAX,dword ptr [EBP + -0x4]
0052ee4a  MOV ECX,dword ptr [EBP + 0x10]
0052ee4d  MOV dword ptr [EAX + 0x1a0],ECX
0052ee53  MOV EDX,dword ptr [EBP + 0xc]
0052ee56  PUSH EDX
0052ee57  MOV EAX,dword ptr [EBP + 0x8]
0052ee5a  PUSH EAX
0052ee5b  MOV ECX,dword ptr [EBP + -0x4]
0052ee5e  MOV EDX,dword ptr [ECX]
0052ee60  MOV ECX,dword ptr [EBP + -0x4]
0052ee63  MOV EAX,dword ptr [EDX + 0x44]
0052ee66  CALL EAX
0052ee68  MOV ESP,EBP
0052ee6a  POP EBP
0052ee6b  RET 0xc

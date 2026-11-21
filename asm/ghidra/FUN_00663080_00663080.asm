; FUN_00663080  00663080
00663080  PUSH EBP
00663081  MOV EBP,ESP
00663083  PUSH ECX
00663084  MOV dword ptr [EBP + -0x4],ECX
00663087  MOV EAX,dword ptr [EBP + -0x4]
0066308a  CMP dword ptr [EAX + 0x8],0x0
0066308e  JNZ 0x006630b9
00663090  MOV ECX,dword ptr [EBP + -0x4]
00663093  MOV EDX,dword ptr [EBP + -0x4]
00663096  MOV EAX,dword ptr [EDX + 0x4]
00663099  MOV dword ptr [ECX + 0x8],EAX
0066309c  MOV ECX,dword ptr [EBP + -0x4]
0066309f  MOV EDX,dword ptr [ECX + 0x8]
006630a2  MOV EAX,dword ptr [EBP + -0x4]
006630a5  MOV ECX,dword ptr [EDX]
006630a7  MOV dword ptr [EAX + 0xc],ECX
006630aa  MOV EDX,dword ptr [EBP + -0x4]
006630ad  MOV EAX,dword ptr [EDX + 0x8]
006630b0  MOV ECX,dword ptr [EBP + -0x4]
006630b3  MOV EDX,dword ptr [EAX + 0x4]
006630b6  MOV dword ptr [ECX + 0x10],EDX
006630b9  MOV EAX,dword ptr [EBP + -0x4]
006630bc  MOV ECX,dword ptr [EAX + 0xc]
006630bf  MOV EDX,dword ptr [EAX + 0x10]
006630c2  MOV EAX,dword ptr [EBP + 0x8]
006630c5  MOV dword ptr [EAX],ECX
006630c7  MOV dword ptr [EAX + 0x4],EDX
006630ca  MOV EAX,dword ptr [EBP + 0x8]
006630cd  MOV ESP,EBP
006630cf  POP EBP
006630d0  RET 0x4

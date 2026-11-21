; FUN_0045ef30  0045ef30
0045ef30  PUSH EBP
0045ef31  MOV EBP,ESP
0045ef33  SUB ESP,0x8
0045ef36  MOV dword ptr [EBP + -0x8],ECX
0045ef39  CMP dword ptr [EBP + 0x8],0x0
0045ef3d  JNZ 0x0045ef43
0045ef3f  XOR AL,AL
0045ef41  JMP 0x0045ef73
0045ef43  MOV EAX,dword ptr [EBP + 0x8]
0045ef46  MOV dword ptr [EBP + -0x4],EAX
0045ef49  MOV ECX,dword ptr [EBP + -0x4]
0045ef4c  MOV dword ptr [ECX + 0x8],0x0
0045ef53  MOV EDX,dword ptr [EBP + -0x4]
0045ef56  MOV dword ptr [EDX + 0xc],0x0
0045ef5d  MOV EAX,dword ptr [EBP + -0x4]
0045ef60  MOV dword ptr [EAX + 0x10],0x0
0045ef67  MOV ECX,dword ptr [EBP + -0x4]
0045ef6a  MOV dword ptr [ECX + 0x14],0x0
0045ef71  MOV AL,0x1
0045ef73  MOV ESP,EBP
0045ef75  POP EBP
0045ef76  RET 0x4

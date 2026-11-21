; FUN_0068d4b0  0068d4b0
0068d4b0  PUSH EBP
0068d4b1  MOV EBP,ESP
0068d4b3  PUSH ECX
0068d4b4  MOV dword ptr [EBP + -0x4],ECX
0068d4b7  MOV EAX,dword ptr [EBP + -0x4]
0068d4ba  MOV dword ptr [EAX],0x0
0068d4c0  MOV ECX,dword ptr [EBP + -0x4]
0068d4c3  MOV EDX,dword ptr [EBP + 0x8]
0068d4c6  MOV dword ptr [ECX + 0x4],EDX
0068d4c9  CMP dword ptr [EBP + 0xc],0x0
0068d4cd  JNZ 0x0068d4d5
0068d4cf  CALL dword ptr [0x006b2274]
0068d4d5  MOV EAX,dword ptr [EBP + -0x4]
0068d4d8  MOV ECX,dword ptr [EBP + 0xc]
0068d4db  MOV dword ptr [EAX],ECX
0068d4dd  MOV EAX,dword ptr [EBP + -0x4]
0068d4e0  MOV ESP,EBP
0068d4e2  POP EBP
0068d4e3  RET 0x8

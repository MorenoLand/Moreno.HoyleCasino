; FUN_0062a280  0062a280
0062a280  PUSH EBP
0062a281  MOV EBP,ESP
0062a283  PUSH ECX
0062a284  MOV dword ptr [EBP + -0x4],ECX
0062a287  MOV ECX,dword ptr [EBP + -0x4]
0062a28a  CALL 0x005f5440
0062a28f  MOV EAX,dword ptr [EBP + -0x4]
0062a292  CMP dword ptr [EAX + 0x48],0x0
0062a296  JZ 0x0062a2ab
0062a298  MOV ECX,dword ptr [EBP + -0x4]
0062a29b  MOV EDX,dword ptr [ECX + 0x48]
0062a29e  MOV EAX,dword ptr [EBP + -0x4]
0062a2a1  MOV ECX,dword ptr [EAX + 0x48]
0062a2a4  MOV EDX,dword ptr [EDX]
0062a2a6  MOV EAX,dword ptr [EDX + 0x74]
0062a2a9  CALL EAX
0062a2ab  MOV ECX,dword ptr [EBP + -0x4]
0062a2ae  MOV EDX,dword ptr [ECX + 0x4c]
0062a2b1  MOV EAX,dword ptr [EBP + -0x4]
0062a2b4  MOV ECX,dword ptr [EAX + 0x4c]
0062a2b7  MOV EDX,dword ptr [EDX]
0062a2b9  MOV EAX,dword ptr [EDX + 0x74]
0062a2bc  CALL EAX
0062a2be  MOV ECX,dword ptr [EBP + -0x4]
0062a2c1  MOV EDX,dword ptr [ECX + 0x50]
0062a2c4  MOV EAX,dword ptr [EBP + -0x4]
0062a2c7  MOV ECX,dword ptr [EAX + 0x50]
0062a2ca  MOV EDX,dword ptr [EDX]
0062a2cc  MOV EAX,dword ptr [EDX + 0x74]
0062a2cf  CALL EAX
0062a2d1  MOV ECX,dword ptr [EBP + -0x4]
0062a2d4  CMP dword ptr [ECX + 0x54],0x0
0062a2d8  JZ 0x0062a2ed
0062a2da  MOV EDX,dword ptr [EBP + -0x4]
0062a2dd  MOV EAX,dword ptr [EDX + 0x54]
0062a2e0  MOV ECX,dword ptr [EBP + -0x4]
0062a2e3  MOV ECX,dword ptr [ECX + 0x54]
0062a2e6  MOV EDX,dword ptr [EAX]
0062a2e8  MOV EAX,dword ptr [EDX + 0x74]
0062a2eb  CALL EAX
0062a2ed  MOV ESP,EBP
0062a2ef  POP EBP
0062a2f0  RET

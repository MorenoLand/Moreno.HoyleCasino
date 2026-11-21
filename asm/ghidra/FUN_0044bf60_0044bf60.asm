; FUN_0044bf60  0044bf60
0044bf60  PUSH EBP
0044bf61  MOV EBP,ESP
0044bf63  PUSH ECX
0044bf64  MOV dword ptr [EBP + -0x4],ECX
0044bf67  CMP dword ptr [EBP + 0x8],0x0
0044bf6b  JNZ 0x0044bf71
0044bf6d  XOR AL,AL
0044bf6f  JMP 0x0044bfb8
0044bf71  MOV EAX,dword ptr [EBP + 0x8]
0044bf74  MOV dword ptr [EAX],0x4
0044bf7a  MOV ECX,dword ptr [EBP + 0x8]
0044bf7d  MOV dword ptr [ECX + 0x4],0x1
0044bf84  MOV EDX,dword ptr [EBP + 0x8]
0044bf87  MOV dword ptr [EDX + 0x8],0x4
0044bf8e  MOV EAX,dword ptr [EBP + 0x8]
0044bf91  MOV dword ptr [EAX + 0xc],0x1
0044bf98  MOV ECX,dword ptr [EBP + 0x8]
0044bf9b  MOV dword ptr [ECX + 0x10],0x4
0044bfa2  MOV EDX,dword ptr [EBP + 0x8]
0044bfa5  MOV dword ptr [EDX + 0x14],0x0
0044bfac  MOV EAX,dword ptr [EBP + 0x8]
0044bfaf  MOV dword ptr [EAX + 0x18],0x3
0044bfb6  MOV AL,0x1
0044bfb8  MOV ESP,EBP
0044bfba  POP EBP
0044bfbb  RET 0x8

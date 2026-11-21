; FUN_00572e80  00572e80
00572e80  PUSH EBP
00572e81  MOV EBP,ESP
00572e83  PUSH ECX
00572e84  MOV dword ptr [EBP + -0x4],ECX
00572e87  CMP dword ptr [EBP + 0x8],0x0
00572e8b  JNZ 0x00572e91
00572e8d  XOR AL,AL
00572e8f  JMP 0x00572ed8
00572e91  MOV EAX,dword ptr [EBP + 0x8]
00572e94  MOV dword ptr [EAX],0x1
00572e9a  MOV ECX,dword ptr [EBP + 0x8]
00572e9d  MOV dword ptr [ECX + 0x4],0x1
00572ea4  MOV EDX,dword ptr [EBP + 0x8]
00572ea7  MOV dword ptr [EDX + 0x8],0x1
00572eae  MOV EAX,dword ptr [EBP + 0x8]
00572eb1  MOV dword ptr [EAX + 0xc],0x1
00572eb8  MOV ECX,dword ptr [EBP + 0x8]
00572ebb  MOV dword ptr [ECX + 0x10],0x1
00572ec2  MOV EDX,dword ptr [EBP + 0x8]
00572ec5  MOV dword ptr [EDX + 0x14],0x0
00572ecc  MOV EAX,dword ptr [EBP + 0x8]
00572ecf  MOV dword ptr [EAX + 0x18],0x0
00572ed6  MOV AL,0x1
00572ed8  MOV ESP,EBP
00572eda  POP EBP
00572edb  RET 0x8

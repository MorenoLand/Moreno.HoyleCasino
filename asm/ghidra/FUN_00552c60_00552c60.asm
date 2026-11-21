; FUN_00552c60  00552c60
00552c60  PUSH EBP
00552c61  MOV EBP,ESP
00552c63  SUB ESP,0x8
00552c66  MOV dword ptr [EBP + -0x8],ECX
00552c69  MOV ECX,dword ptr [EBP + -0x8]
00552c6c  CALL 0x00552720
00552c71  MOV EAX,dword ptr [EBP + -0x8]
00552c74  MOV dword ptr [EAX],0x6c84f8
00552c7a  MOV dword ptr [EBP + -0x4],0x0
00552c81  JMP 0x00552c8c
00552c83  MOV ECX,dword ptr [EBP + -0x4]
00552c86  ADD ECX,0x1
00552c89  MOV dword ptr [EBP + -0x4],ECX
00552c8c  CMP dword ptr [EBP + -0x4],0x5
00552c90  JGE 0x00552ca5
00552c92  MOV EDX,dword ptr [EBP + -0x4]
00552c95  MOV EAX,dword ptr [EBP + -0x8]
00552c98  MOV dword ptr [EAX + EDX*0x4 + 0x9c],0x0
00552ca3  JMP 0x00552c83
00552ca5  MOV ECX,dword ptr [EBP + -0x8]
00552ca8  MOV dword ptr [ECX + 0xb0],0x0
00552cb2  MOV EDX,dword ptr [EBP + -0x8]
00552cb5  MOV dword ptr [EDX + 0xb4],0x0
00552cbf  MOV EAX,dword ptr [EBP + -0x8]
00552cc2  MOV dword ptr [EAX + 0xb8],0x0
00552ccc  MOV EAX,dword ptr [EBP + -0x8]
00552ccf  MOV ESP,EBP
00552cd1  POP EBP
00552cd2  RET

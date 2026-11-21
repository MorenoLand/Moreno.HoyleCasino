; FUN_00650bb0  00650bb0
00650bb0  PUSH EBP
00650bb1  MOV EBP,ESP
00650bb3  SUB ESP,0x8
00650bb6  MOV dword ptr [EBP + -0x4],ECX
00650bb9  CMP dword ptr [EBP + 0xc],0x0
00650bbd  JZ 0x00650bc7
00650bbf  MOV EAX,dword ptr [EBP + 0xc]
00650bc2  MOV dword ptr [EBP + -0x8],EAX
00650bc5  JMP 0x00650bd3
00650bc7  MOV ECX,dword ptr [0x0162ee84]
00650bcd  MOV EDX,dword ptr [ECX + 0x14]
00650bd0  MOV dword ptr [EBP + -0x8],EDX
00650bd3  MOV EAX,dword ptr [EBP + -0x8]
00650bd6  PUSH EAX
00650bd7  MOV CL,byte ptr [EBP + 0x8]
00650bda  PUSH ECX
00650bdb  MOV ECX,dword ptr [EBP + -0x4]
00650bde  CALL 0x005f71f0
00650be3  MOV EDX,dword ptr [EBP + -0x4]
00650be6  MOV dword ptr [EDX],0x6dd1f4
00650bec  MOV EAX,dword ptr [EBP + -0x4]
00650bef  MOV byte ptr [EAX + 0x1bc],0x0
00650bf6  MOV EAX,dword ptr [EBP + -0x4]
00650bf9  MOV ESP,EBP
00650bfb  POP EBP
00650bfc  RET 0x8

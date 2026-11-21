; FUN_00540cb0  00540cb0
00540cb0  PUSH EBP
00540cb1  MOV EBP,ESP
00540cb3  SUB ESP,0xc
00540cb6  MOV dword ptr [EBP + -0xc],ECX
00540cb9  MOV dword ptr [EBP + -0x8],0x0
00540cc0  MOV dword ptr [EBP + -0x4],0x0
00540cc7  JMP 0x00540cd2
00540cc9  MOV EAX,dword ptr [EBP + -0x4]
00540ccc  ADD EAX,0x1
00540ccf  MOV dword ptr [EBP + -0x4],EAX
00540cd2  CMP dword ptr [EBP + -0x4],0x5
00540cd6  JGE 0x00540cec
00540cd8  MOV ECX,dword ptr [EBP + -0x4]
00540cdb  PUSH ECX
00540cdc  MOV ECX,dword ptr [EBP + -0xc]
00540cdf  CALL 0x00540c30
00540ce4  ADD EAX,dword ptr [EBP + -0x8]
00540ce7  MOV dword ptr [EBP + -0x8],EAX
00540cea  JMP 0x00540cc9
00540cec  MOV EAX,dword ptr [EBP + -0x8]
00540cef  MOV ESP,EBP
00540cf1  POP EBP
00540cf2  RET

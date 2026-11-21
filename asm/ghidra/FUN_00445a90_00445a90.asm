; FUN_00445a90  00445a90
00445a90  PUSH EBP
00445a91  MOV EBP,ESP
00445a93  SUB ESP,0xc
00445a96  MOV dword ptr [EBP + -0xc],ECX
00445a99  MOV dword ptr [EBP + -0x8],0x0
00445aa0  MOV dword ptr [EBP + -0x4],0x0
00445aa7  JMP 0x00445ab2
00445aa9  MOV EAX,dword ptr [EBP + -0x4]
00445aac  ADD EAX,0x1
00445aaf  MOV dword ptr [EBP + -0x4],EAX
00445ab2  CMP dword ptr [EBP + -0x4],0x5
00445ab6  JGE 0x00445acc
00445ab8  MOV ECX,dword ptr [EBP + -0x4]
00445abb  PUSH ECX
00445abc  MOV ECX,dword ptr [EBP + -0xc]
00445abf  CALL 0x00445a00
00445ac4  ADD EAX,dword ptr [EBP + -0x8]
00445ac7  MOV dword ptr [EBP + -0x8],EAX
00445aca  JMP 0x00445aa9
00445acc  MOV EAX,dword ptr [EBP + -0x8]
00445acf  MOV ESP,EBP
00445ad1  POP EBP
00445ad2  RET

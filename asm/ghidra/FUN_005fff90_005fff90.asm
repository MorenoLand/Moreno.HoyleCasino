; FUN_005fff90  005fff90
005fff90  PUSH EBP
005fff91  MOV EBP,ESP
005fff93  PUSH ECX
005fff94  MOV dword ptr [EBP + -0x4],ECX
005fff97  MOV EAX,dword ptr [EBP + -0x4]
005fff9a  MOV ECX,dword ptr [EBP + 0x8]
005fff9d  MOV dword ptr [EAX + 0x1e0],ECX
005fffa3  MOV EDX,dword ptr [EBP + -0x4]
005fffa6  MOV EAX,dword ptr [EBP + 0xc]
005fffa9  MOV dword ptr [EDX + 0x1e4],EAX
005fffaf  MOV ECX,dword ptr [EBP + -0x4]
005fffb2  MOV EDX,dword ptr [EBP + 0x10]
005fffb5  MOV dword ptr [ECX + 0x1e8],EDX
005fffbb  MOV EAX,dword ptr [EBP + -0x4]
005fffbe  MOV ECX,dword ptr [EBP + 0x14]
005fffc1  MOV dword ptr [EAX + 0x1ec],ECX
005fffc7  MOV EDX,dword ptr [EBP + -0x4]
005fffca  MOV EAX,dword ptr [EBP + 0x18]
005fffcd  MOV dword ptr [EDX + 0x1f0],EAX
005fffd3  MOV ECX,dword ptr [EBP + -0x4]
005fffd6  MOV EDX,dword ptr [EBP + 0x1c]
005fffd9  MOV dword ptr [ECX + 0x1f4],EDX
005fffdf  MOV EAX,dword ptr [EBP + -0x4]
005fffe2  MOV ECX,dword ptr [EBP + 0x20]
005fffe5  MOV dword ptr [EAX + 0x1f8],ECX
005fffeb  MOV EDX,dword ptr [EBP + -0x4]
005fffee  MOV EAX,dword ptr [EBP + 0x24]
005ffff1  MOV dword ptr [EDX + 0x1fc],EAX
005ffff7  MOV ECX,dword ptr [EBP + -0x4]
005ffffa  MOV EDX,dword ptr [ECX]
005ffffc  MOV ECX,dword ptr [EBP + -0x4]
005fffff  MOV EAX,dword ptr [EDX + 0xec]
00600005  CALL EAX
00600007  MOV ESP,EBP
00600009  POP EBP
0060000a  RET 0x20

; FUN_0047fab0  0047fab0
0047fab0  PUSH EBP
0047fab1  MOV EBP,ESP
0047fab3  PUSH ECX
0047fab4  MOV dword ptr [EBP + -0x4],ECX
0047fab7  MOV EAX,dword ptr [EBP + -0x4]
0047faba  MOV ECX,dword ptr [EAX + 0x34]
0047fabd  CALL 0x0060ca10
0047fac2  MOV ECX,dword ptr [EBP + -0x4]
0047fac5  MOV dword ptr [ECX + 0x4a4],0x0
0047facf  MOV EDX,dword ptr [EBP + -0x4]
0047fad2  MOV dword ptr [EDX + 0x4a8],0x0
0047fadc  MOV ESP,EBP
0047fade  POP EBP
0047fadf  RET

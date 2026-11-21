; FUN_00600fd0  00600fd0
00600fd0  PUSH EBP
00600fd1  MOV EBP,ESP
00600fd3  PUSH ECX
00600fd4  MOV dword ptr [EBP + -0x4],ECX
00600fd7  MOV EAX,dword ptr [EBP + 0xc]
00600fda  PUSH EAX
00600fdb  MOV ECX,dword ptr [EBP + -0x4]
00600fde  CALL 0x00600de0
00600fe3  MOV ECX,dword ptr [EBP + -0x4]
00600fe6  MOV dword ptr [ECX],0x6d7500
00600fec  MOV EDX,dword ptr [EBP + -0x4]
00600fef  MOV dword ptr [EDX + 0xc],0xffffffff
00600ff6  MOV EAX,dword ptr [EBP + -0x4]
00600ff9  MOV ECX,dword ptr [EBP + 0x8]
00600ffc  MOV dword ptr [EAX + 0x1c],ECX
00600fff  MOV EAX,dword ptr [EBP + -0x4]
00601002  MOV ESP,EBP
00601004  POP EBP
00601005  RET 0x8

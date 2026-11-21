; FUN_00600ef0  00600ef0
00600ef0  PUSH EBP
00600ef1  MOV EBP,ESP
00600ef3  PUSH ECX
00600ef4  MOV dword ptr [EBP + -0x4],ECX
00600ef7  MOV EAX,dword ptr [EBP + 0x8]
00600efa  PUSH EAX
00600efb  MOV ECX,dword ptr [EBP + -0x4]
00600efe  CALL 0x00600de0
00600f03  MOV ECX,dword ptr [EBP + -0x4]
00600f06  MOV dword ptr [ECX],0x6d74e4
00600f0c  MOV EDX,dword ptr [EBP + -0x4]
00600f0f  MOV dword ptr [EDX + 0xc],0x1
00600f16  MOV EAX,dword ptr [EBP + -0x4]
00600f19  MOV dword ptr [EAX + 0x1c],0x0
00600f20  MOV EAX,dword ptr [EBP + -0x4]
00600f23  MOV ESP,EBP
00600f25  POP EBP
00600f26  RET 0x4

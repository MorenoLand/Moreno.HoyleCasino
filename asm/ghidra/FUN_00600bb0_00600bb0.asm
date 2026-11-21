; FUN_00600bb0  00600bb0
00600bb0  PUSH EBP
00600bb1  MOV EBP,ESP
00600bb3  PUSH ECX
00600bb4  MOV dword ptr [EBP + -0x4],ECX
00600bb7  MOV EAX,dword ptr [EBP + -0x4]
00600bba  CMP dword ptr [EAX + 0x8],0x0
00600bbe  JZ 0x00600bd5
00600bc0  PUSH 0x0
00600bc2  MOV ECX,dword ptr [EBP + -0x4]
00600bc5  MOV EDX,dword ptr [ECX + 0x8]
00600bc8  MOV EAX,dword ptr [EBP + -0x4]
00600bcb  MOV ECX,dword ptr [EAX + 0x8]
00600bce  MOV EDX,dword ptr [EDX]
00600bd0  MOV EAX,dword ptr [EDX + 0x1c]
00600bd3  CALL EAX
00600bd5  MOV ECX,dword ptr [EBP + -0x4]
00600bd8  CALL 0x00600b30
00600bdd  MOV ESP,EBP
00600bdf  POP EBP
00600be0  RET

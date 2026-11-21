; FUN_00600da0  00600da0
00600da0  PUSH EBP
00600da1  MOV EBP,ESP
00600da3  PUSH ECX
00600da4  MOV dword ptr [EBP + -0x4],ECX
00600da7  MOV EAX,dword ptr [EBP + -0x4]
00600daa  CMP dword ptr [EAX + 0x8],0x0
00600dae  JZ 0x00600dc5
00600db0  PUSH 0x0
00600db2  MOV ECX,dword ptr [EBP + -0x4]
00600db5  MOV EDX,dword ptr [ECX + 0x8]
00600db8  MOV EAX,dword ptr [EBP + -0x4]
00600dbb  MOV ECX,dword ptr [EAX + 0x8]
00600dbe  MOV EDX,dword ptr [EDX]
00600dc0  MOV EAX,dword ptr [EDX + 0x1c]
00600dc3  CALL EAX
00600dc5  MOV ECX,dword ptr [EBP + -0x4]
00600dc8  CALL 0x00600d20
00600dcd  MOV ESP,EBP
00600dcf  POP EBP
00600dd0  RET

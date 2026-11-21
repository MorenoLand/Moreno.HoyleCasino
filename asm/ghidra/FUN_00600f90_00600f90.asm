; FUN_00600f90  00600f90
00600f90  PUSH EBP
00600f91  MOV EBP,ESP
00600f93  PUSH ECX
00600f94  MOV dword ptr [EBP + -0x4],ECX
00600f97  MOV EAX,dword ptr [EBP + 0x8]
00600f9a  PUSH EAX
00600f9b  MOV ECX,dword ptr [EBP + -0x4]
00600f9e  CALL 0x00600de0
00600fa3  MOV ECX,dword ptr [EBP + -0x4]
00600fa6  MOV dword ptr [ECX],0x6d7500
00600fac  MOV EDX,dword ptr [EBP + -0x4]
00600faf  MOV dword ptr [EDX + 0xc],0xffffffff
00600fb6  MOV EAX,dword ptr [EBP + -0x4]
00600fb9  MOV dword ptr [EAX + 0x1c],0x0
00600fc0  MOV EAX,dword ptr [EBP + -0x4]
00600fc3  MOV ESP,EBP
00600fc5  POP EBP
00600fc6  RET 0x4

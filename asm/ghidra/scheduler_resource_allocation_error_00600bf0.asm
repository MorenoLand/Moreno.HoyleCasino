; scheduler_resource_allocation_error  00600bf0
00600bf0  PUSH EBP
00600bf1  MOV EBP,ESP
00600bf3  PUSH ECX
00600bf4  MOV dword ptr [EBP + -0x4],ECX
00600bf7  MOV EAX,dword ptr [EBP + 0xc]
00600bfa  PUSH EAX
00600bfb  MOV ECX,dword ptr [EBP + -0x4]
00600bfe  CALL 0x00600a70
00600c03  MOV ECX,dword ptr [EBP + -0x4]
00600c06  MOV dword ptr [ECX],0x6d7474
00600c0c  MOV EDX,dword ptr [EBP + -0x4]
00600c0f  MOV EAX,dword ptr [EBP + 0x8]
00600c12  MOV dword ptr [EDX + 0x1c],EAX
00600c15  MOV EAX,dword ptr [EBP + -0x4]
00600c18  MOV ESP,EBP
00600c1a  POP EBP
00600c1b  RET 0x8

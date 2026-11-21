; scheduler_resource_allocation_error  0042d860
0042d860  PUSH EBP
0042d861  MOV EBP,ESP
0042d863  PUSH ECX
0042d864  MOV dword ptr [EBP + -0x4],ECX
0042d867  MOV EAX,dword ptr [EBP + 0xc]
0042d86a  PUSH EAX
0042d86b  MOV ECX,dword ptr [EBP + -0x4]
0042d86e  CALL 0x006010a0
0042d873  MOV ECX,dword ptr [EBP + -0x4]
0042d876  MOV dword ptr [ECX],0x6b6e00
0042d87c  MOV EDX,dword ptr [EBP + -0x4]
0042d87f  MOV EAX,dword ptr [EBP + 0x8]
0042d882  MOV dword ptr [EDX + 0x20],EAX
0042d885  MOV EAX,dword ptr [EBP + -0x4]
0042d888  MOV ESP,EBP
0042d88a  POP EBP
0042d88b  RET 0x8

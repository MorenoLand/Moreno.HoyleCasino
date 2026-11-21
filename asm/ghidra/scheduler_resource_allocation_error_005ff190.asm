; scheduler_resource_allocation_error  005ff190
005ff190  PUSH EBP
005ff191  MOV EBP,ESP
005ff193  PUSH ECX
005ff194  MOV dword ptr [EBP + -0x4],ECX
005ff197  MOV EAX,dword ptr [EBP + 0xc]
005ff19a  PUSH EAX
005ff19b  MOV ECX,dword ptr [EBP + -0x4]
005ff19e  CALL 0x005fc0d0
005ff1a3  MOV ECX,dword ptr [EBP + -0x4]
005ff1a6  MOV dword ptr [ECX],0x6d70fc
005ff1ac  MOV EDX,dword ptr [EBP + -0x4]
005ff1af  MOV EAX,dword ptr [EBP + 0x8]
005ff1b2  MOV dword ptr [EDX + 0x20],EAX
005ff1b5  MOV EAX,dword ptr [EBP + -0x4]
005ff1b8  MOV ESP,EBP
005ff1ba  POP EBP
005ff1bb  RET 0x8

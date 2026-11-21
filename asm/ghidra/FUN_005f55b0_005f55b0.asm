; FUN_005f55b0  005f55b0
005f55b0  PUSH EBP
005f55b1  MOV EBP,ESP
005f55b3  PUSH ECX
005f55b4  MOV dword ptr [EBP + -0x4],ECX
005f55b7  MOV EAX,dword ptr [EBP + -0x4]
005f55ba  MOV ECX,dword ptr [EBP + 0x8]
005f55bd  MOV dword ptr [EAX + 0x40],ECX
005f55c0  MOV EDX,dword ptr [EBP + -0x4]
005f55c3  MOV EAX,dword ptr [EDX]
005f55c5  MOV ECX,dword ptr [EBP + -0x4]
005f55c8  MOV EDX,dword ptr [EAX + 0xac]
005f55ce  CALL EDX
005f55d0  MOV ESP,EBP
005f55d2  POP EBP
005f55d3  RET 0x4

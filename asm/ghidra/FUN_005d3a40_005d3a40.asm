; FUN_005d3a40  005d3a40
005d3a40  PUSH EBP
005d3a41  MOV EBP,ESP
005d3a43  SUB ESP,0x8
005d3a46  MOV dword ptr [EBP + -0x4],ECX
005d3a49  MOV EAX,dword ptr [EBP + 0x8]
005d3a4c  MOV dword ptr [EBP + -0x8],EAX
005d3a4f  MOV ECX,dword ptr [EBP + -0x8]
005d3a52  SUB ECX,0x64
005d3a55  MOV dword ptr [EBP + -0x8],ECX
005d3a58  CMP dword ptr [EBP + -0x8],0x5
005d3a5c  JA 0x005d3af0
005d3a62  MOV EDX,dword ptr [EBP + -0x8]
005d3a65  JMP dword ptr [EDX*0x4 + 0x5d3af8]
005d3af0  MOV ESP,EBP
005d3af2  POP EBP
005d3af3  RET 0x4

; FUN_005d2ef0  005d2ef0
005d2ef0  PUSH EBP
005d2ef1  MOV EBP,ESP
005d2ef3  SUB ESP,0x8
005d2ef6  MOV dword ptr [EBP + -0x4],ECX
005d2ef9  MOV EAX,dword ptr [EBP + 0x8]
005d2efc  MOV dword ptr [EBP + -0x8],EAX
005d2eff  MOV ECX,dword ptr [EBP + -0x8]
005d2f02  SUB ECX,0x64
005d2f05  MOV dword ptr [EBP + -0x8],ECX
005d2f08  CMP dword ptr [EBP + -0x8],0x14
005d2f0c  JA 0x005d3135
005d2f12  MOV EDX,dword ptr [EBP + -0x8]
005d2f15  JMP dword ptr [EDX*0x4 + 0x5d313c]
005d3135  MOV ESP,EBP
005d3137  POP EBP
005d3138  RET 0x4

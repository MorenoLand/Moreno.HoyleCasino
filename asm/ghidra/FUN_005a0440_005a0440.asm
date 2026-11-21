; FUN_005a0440  005a0440
005a0440  PUSH EBP
005a0441  MOV EBP,ESP
005a0443  SUB ESP,0x2c
005a0446  MOV dword ptr [EBP + -0x2c],ECX
005a0449  MOV dword ptr [EBP + -0x28],0x132
005a0450  MOV dword ptr [EBP + -0x24],0xf6
005a0457  MOV dword ptr [EBP + -0x20],0x96
005a045e  MOV dword ptr [EBP + -0x1c],0xf6
005a0465  MOV dword ptr [EBP + -0x18],0x1ca
005a046c  MOV dword ptr [EBP + -0x14],0x4c
005a0473  MOV dword ptr [EBP + -0x10],0x5
005a047a  MOV dword ptr [EBP + -0xc],0x4a
005a0481  CMP dword ptr [EBP + 0xc],0x4
005a0485  JGE 0x005a049f
005a0487  MOV EAX,dword ptr [EBP + 0xc]
005a048a  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x28]
005a048e  MOV EDX,dword ptr [EBP + EAX*0x8 + -0x24]
005a0492  MOV EAX,dword ptr [EBP + 0x8]
005a0495  MOV dword ptr [EAX],ECX
005a0497  MOV dword ptr [EAX + 0x4],EDX
005a049a  MOV EAX,dword ptr [EBP + 0x8]
005a049d  JMP 0x005a04d9
005a049f  MOV dword ptr [EBP + -0x8],0x0
005a04a6  MOV dword ptr [EBP + -0x4],0x0
005a04ad  XOR ECX,ECX
005a04af  JNZ 0x005a04c8
005a04b1  PUSH 0x8f
005a04b6  PUSH 0x6cf3a8
005a04bb  PUSH 0x6b2f58
005a04c0  CALL 0x005e9f20
005a04c5  ADD ESP,0xc
005a04c8  MOV EAX,dword ptr [EBP + 0x8]
005a04cb  MOV ECX,dword ptr [EBP + -0x8]
005a04ce  MOV dword ptr [EAX],ECX
005a04d0  MOV EDX,dword ptr [EBP + -0x4]
005a04d3  MOV dword ptr [EAX + 0x4],EDX
005a04d6  MOV EAX,dword ptr [EBP + 0x8]
005a04d9  MOV ESP,EBP
005a04db  POP EBP
005a04dc  RET 0x8

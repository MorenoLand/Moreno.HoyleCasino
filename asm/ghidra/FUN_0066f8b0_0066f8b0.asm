; FUN_0066f8b0  0066f8b0
0066f8b0  PUSH EBP
0066f8b1  MOV EBP,ESP
0066f8b3  SUB ESP,0x8
0066f8b6  MOV dword ptr [EBP + -0x8],ECX
0066f8b9  MOV ECX,dword ptr [EBP + -0x8]
0066f8bc  CALL 0x005e9e20
0066f8c1  MOV EAX,dword ptr [EBP + -0x8]
0066f8c4  MOV dword ptr [EAX],0x6e0ee4
0066f8ca  MOV dword ptr [EBP + -0x4],0x0
0066f8d1  JMP 0x0066f8dc
0066f8d3  MOV ECX,dword ptr [EBP + -0x4]
0066f8d6  ADD ECX,0x1
0066f8d9  MOV dword ptr [EBP + -0x4],ECX
0066f8dc  CMP dword ptr [EBP + -0x4],0x2bc
0066f8e3  JGE 0x0066f8f5
0066f8e5  MOV EDX,dword ptr [EBP + -0x4]
0066f8e8  MOV EAX,dword ptr [EBP + -0x8]
0066f8eb  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
0066f8f3  JMP 0x0066f8d3
0066f8f5  MOV ECX,dword ptr [EBP + -0x8]
0066f8f8  MOV dword ptr [ECX + 0xaf4],0x0
0066f902  MOV EDX,dword ptr [EBP + -0x8]
0066f905  MOV dword ptr [EDX + 0xaf8],0x0
0066f90f  MOV EAX,dword ptr [EBP + -0x8]
0066f912  MOV dword ptr [EAX + 0xb00],0xffffffff
0066f91c  MOV ECX,dword ptr [EBP + -0x8]
0066f91f  MOV EDX,dword ptr [EBP + 0x8]
0066f922  MOV dword ptr [ECX + 0xafc],EDX
0066f928  MOV EAX,dword ptr [EBP + -0x8]
0066f92b  MOV ESP,EBP
0066f92d  POP EBP
0066f92e  RET 0x4

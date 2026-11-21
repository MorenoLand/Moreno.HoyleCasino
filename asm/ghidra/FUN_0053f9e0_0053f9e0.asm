; FUN_0053f9e0  0053f9e0
0053f9e0  PUSH EBP
0053f9e1  MOV EBP,ESP
0053f9e3  SUB ESP,0x2c
0053f9e6  MOV dword ptr [EBP + -0x2c],ECX
0053f9e9  MOV dword ptr [EBP + -0x28],0x132
0053f9f0  MOV dword ptr [EBP + -0x24],0xf6
0053f9f7  MOV dword ptr [EBP + -0x20],0x96
0053f9fe  MOV dword ptr [EBP + -0x1c],0xf6
0053fa05  MOV dword ptr [EBP + -0x18],0x1ca
0053fa0c  MOV dword ptr [EBP + -0x14],0x4c
0053fa13  MOV dword ptr [EBP + -0x10],0x5
0053fa1a  MOV dword ptr [EBP + -0xc],0x4a
0053fa21  MOV dword ptr [EBP + -0x8],0x0
0053fa28  MOV dword ptr [EBP + -0x4],0x0
0053fa2f  CMP dword ptr [EBP + 0xc],0x4
0053fa33  JGE 0x0053fa4d
0053fa35  MOV EAX,dword ptr [EBP + 0xc]
0053fa38  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x28]
0053fa3c  MOV EDX,dword ptr [EBP + EAX*0x8 + -0x24]
0053fa40  MOV EAX,dword ptr [EBP + 0x8]
0053fa43  MOV dword ptr [EAX],ECX
0053fa45  MOV dword ptr [EAX + 0x4],EDX
0053fa48  MOV EAX,dword ptr [EBP + 0x8]
0053fa4b  JMP 0x0053fa79
0053fa4d  XOR ECX,ECX
0053fa4f  JNZ 0x0053fa68
0053fa51  PUSH 0x177
0053fa56  PUSH 0x6c6198
0053fa5b  PUSH 0x6b2f58
0053fa60  CALL 0x005e9f20
0053fa65  ADD ESP,0xc
0053fa68  MOV EAX,dword ptr [EBP + 0x8]
0053fa6b  MOV ECX,dword ptr [EBP + -0x8]
0053fa6e  MOV dword ptr [EAX],ECX
0053fa70  MOV EDX,dword ptr [EBP + -0x4]
0053fa73  MOV dword ptr [EAX + 0x4],EDX
0053fa76  MOV EAX,dword ptr [EBP + 0x8]
0053fa79  MOV ESP,EBP
0053fa7b  POP EBP
0053fa7c  RET 0x8

; FUN_0064fa40  0064fa40
0064fa40  PUSH EBP
0064fa41  MOV EBP,ESP
0064fa43  SUB ESP,0x10
0064fa46  MOV dword ptr [EBP + -0xc],ECX
0064fa49  CMP dword ptr [0x016306c4],0x0
0064fa50  JZ 0x0064fa8a
0064fa52  MOV EAX,[0x016306c4]
0064fa57  MOV dword ptr [EBP + -0x8],EAX
0064fa5a  MOV ECX,dword ptr [EBP + -0x8]
0064fa5d  MOV dword ptr [EBP + -0x4],ECX
0064fa60  CMP dword ptr [EBP + -0x4],0x0
0064fa64  JZ 0x0064fa79
0064fa66  PUSH 0x1
0064fa68  MOV EDX,dword ptr [EBP + -0x4]
0064fa6b  MOV EAX,dword ptr [EDX]
0064fa6d  MOV ECX,dword ptr [EBP + -0x4]
0064fa70  MOV EDX,dword ptr [EAX]
0064fa72  CALL EDX
0064fa74  MOV dword ptr [EBP + -0x10],EAX
0064fa77  JMP 0x0064fa80
0064fa79  MOV dword ptr [EBP + -0x10],0x0
0064fa80  MOV dword ptr [0x016306c4],0x0
0064fa8a  MOV ESP,EBP
0064fa8c  POP EBP
0064fa8d  RET

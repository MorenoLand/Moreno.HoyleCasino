; FUN_0063b2d0  0063b2d0
0063b2d0  PUSH EBP
0063b2d1  MOV EBP,ESP
0063b2d3  SUB ESP,0x18
0063b2d6  MOV dword ptr [EBP + -0x14],ECX
0063b2d9  MOV EAX,dword ptr [EBP + -0x14]
0063b2dc  MOV ECX,dword ptr [EAX + 0x20]
0063b2df  MOV dword ptr [EBP + -0xc],ECX
0063b2e2  CMP dword ptr [EBP + -0xc],0x0
0063b2e6  JZ 0x0063b2fb
0063b2e8  MOV EDX,dword ptr [EBP + -0x14]
0063b2eb  MOV EAX,dword ptr [EDX + 0x20]
0063b2ee  MOV dword ptr [EBP + -0x10],EAX
0063b2f1  PUSH 0x1
0063b2f3  MOV ECX,dword ptr [EBP + -0x10]
0063b2f6  CALL 0x00646c20
0063b2fb  MOV ECX,dword ptr [EBP + -0x14]
0063b2fe  MOV EDX,dword ptr [ECX + 0x20]
0063b301  MOV dword ptr [EBP + -0x8],EDX
0063b304  MOV EAX,dword ptr [EBP + -0x8]
0063b307  MOV dword ptr [EBP + -0x4],EAX
0063b30a  CMP dword ptr [EBP + -0x4],0x0
0063b30e  JZ 0x0063b323
0063b310  PUSH 0x1
0063b312  MOV ECX,dword ptr [EBP + -0x4]
0063b315  MOV EDX,dword ptr [ECX]
0063b317  MOV ECX,dword ptr [EBP + -0x4]
0063b31a  MOV EAX,dword ptr [EDX]
0063b31c  CALL EAX
0063b31e  MOV dword ptr [EBP + -0x18],EAX
0063b321  JMP 0x0063b32a
0063b323  MOV dword ptr [EBP + -0x18],0x0
0063b32a  MOV ECX,dword ptr [EBP + -0x14]
0063b32d  MOV dword ptr [ECX + 0x20],0x0
0063b334  MOV ESP,EBP
0063b336  POP EBP
0063b337  RET

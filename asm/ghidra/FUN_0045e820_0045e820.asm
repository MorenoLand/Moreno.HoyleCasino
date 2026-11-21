; FUN_0045e820  0045e820
0045e820  PUSH EBP
0045e821  MOV EBP,ESP
0045e823  SUB ESP,0x2c
0045e826  MOV dword ptr [EBP + -0x2c],ECX
0045e829  MOV dword ptr [EBP + -0x28],0x132
0045e830  MOV dword ptr [EBP + -0x24],0xf6
0045e837  MOV dword ptr [EBP + -0x20],0x96
0045e83e  MOV dword ptr [EBP + -0x1c],0xf6
0045e845  MOV dword ptr [EBP + -0x18],0x1ca
0045e84c  MOV dword ptr [EBP + -0x14],0x4c
0045e853  MOV dword ptr [EBP + -0x10],0x5
0045e85a  MOV dword ptr [EBP + -0xc],0x4a
0045e861  MOV dword ptr [EBP + -0x8],0x0
0045e868  MOV dword ptr [EBP + -0x4],0x0
0045e86f  CMP dword ptr [EBP + 0xc],0x4
0045e873  JGE 0x0045e88d
0045e875  MOV EAX,dword ptr [EBP + 0xc]
0045e878  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x28]
0045e87c  MOV EDX,dword ptr [EBP + EAX*0x8 + -0x24]
0045e880  MOV EAX,dword ptr [EBP + 0x8]
0045e883  MOV dword ptr [EAX],ECX
0045e885  MOV dword ptr [EAX + 0x4],EDX
0045e888  MOV EAX,dword ptr [EBP + 0x8]
0045e88b  JMP 0x0045e8b9
0045e88d  XOR ECX,ECX
0045e88f  JNZ 0x0045e8a8
0045e891  PUSH 0x1e1
0045e896  PUSH 0x6ba04c
0045e89b  PUSH 0x6b2f58
0045e8a0  CALL 0x005e9f20
0045e8a5  ADD ESP,0xc
0045e8a8  MOV EAX,dword ptr [EBP + 0x8]
0045e8ab  MOV ECX,dword ptr [EBP + -0x8]
0045e8ae  MOV dword ptr [EAX],ECX
0045e8b0  MOV EDX,dword ptr [EBP + -0x4]
0045e8b3  MOV dword ptr [EAX + 0x4],EDX
0045e8b6  MOV EAX,dword ptr [EBP + 0x8]
0045e8b9  MOV ESP,EBP
0045e8bb  POP EBP
0045e8bc  RET 0x8

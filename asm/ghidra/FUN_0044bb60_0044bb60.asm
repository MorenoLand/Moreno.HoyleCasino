; FUN_0044bb60  0044bb60
0044bb60  PUSH EBP
0044bb61  MOV EBP,ESP
0044bb63  SUB ESP,0x2c
0044bb66  MOV dword ptr [EBP + -0x2c],ECX
0044bb69  MOV dword ptr [EBP + -0x28],0x132
0044bb70  MOV dword ptr [EBP + -0x24],0xf6
0044bb77  MOV dword ptr [EBP + -0x20],0x96
0044bb7e  MOV dword ptr [EBP + -0x1c],0xf6
0044bb85  MOV dword ptr [EBP + -0x18],0x1ca
0044bb8c  MOV dword ptr [EBP + -0x14],0x4c
0044bb93  MOV dword ptr [EBP + -0x10],0x5
0044bb9a  MOV dword ptr [EBP + -0xc],0x4a
0044bba1  MOV dword ptr [EBP + -0x8],0x0
0044bba8  MOV dword ptr [EBP + -0x4],0x0
0044bbaf  CMP dword ptr [EBP + 0xc],0x4
0044bbb3  JGE 0x0044bbcd
0044bbb5  MOV EAX,dword ptr [EBP + 0xc]
0044bbb8  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x28]
0044bbbc  MOV EDX,dword ptr [EBP + EAX*0x8 + -0x24]
0044bbc0  MOV EAX,dword ptr [EBP + 0x8]
0044bbc3  MOV dword ptr [EAX],ECX
0044bbc5  MOV dword ptr [EAX + 0x4],EDX
0044bbc8  MOV EAX,dword ptr [EBP + 0x8]
0044bbcb  JMP 0x0044bbf9
0044bbcd  XOR ECX,ECX
0044bbcf  JNZ 0x0044bbe8
0044bbd1  PUSH 0x178
0044bbd6  PUSH 0x6b9128
0044bbdb  PUSH 0x6b2f58
0044bbe0  CALL 0x005e9f20
0044bbe5  ADD ESP,0xc
0044bbe8  MOV EAX,dword ptr [EBP + 0x8]
0044bbeb  MOV ECX,dword ptr [EBP + -0x8]
0044bbee  MOV dword ptr [EAX],ECX
0044bbf0  MOV EDX,dword ptr [EBP + -0x4]
0044bbf3  MOV dword ptr [EAX + 0x4],EDX
0044bbf6  MOV EAX,dword ptr [EBP + 0x8]
0044bbf9  MOV ESP,EBP
0044bbfb  POP EBP
0044bbfc  RET 0x8

; FUN_0042bfe0  0042bfe0
0042bfe0  PUSH EBP
0042bfe1  MOV EBP,ESP
0042bfe3  PUSH -0x1
0042bfe5  PUSH 0x69e542
0042bfea  MOV EAX,FS:[0x0]
0042bff0  PUSH EAX
0042bff1  SUB ESP,0x44
0042bff4  MOV EAX,[0x00781870]
0042bff9  XOR EAX,EBP
0042bffb  PUSH EAX
0042bffc  LEA EAX,[EBP + -0xc]
0042bfff  MOV FS:[0x0],EAX
0042c005  MOV dword ptr [EBP + -0x3c],ECX
0042c008  MOV EAX,dword ptr [EBP + -0x3c]
0042c00b  MOV dword ptr [EAX],0x6b6b74
0042c011  MOV dword ptr [EBP + -0x4],0x0
0042c018  MOV ECX,dword ptr [EBP + -0x3c]
0042c01b  MOV EDX,dword ptr [ECX + 0xae4]
0042c021  MOV dword ptr [EBP + -0x18],EDX
0042c024  MOV EAX,dword ptr [EBP + -0x18]
0042c027  MOV dword ptr [EBP + -0x14],EAX
0042c02a  CMP dword ptr [EBP + -0x14],0x0
0042c02e  JZ 0x0042c043
0042c030  PUSH 0x1
0042c032  MOV ECX,dword ptr [EBP + -0x14]
0042c035  MOV EDX,dword ptr [ECX]
0042c037  MOV ECX,dword ptr [EBP + -0x14]
0042c03a  MOV EAX,dword ptr [EDX]
0042c03c  CALL EAX
0042c03e  MOV dword ptr [EBP + -0x40],EAX
0042c041  JMP 0x0042c04a
0042c043  MOV dword ptr [EBP + -0x40],0x0
0042c04a  MOV ECX,dword ptr [EBP + -0x3c]
0042c04d  MOV EDX,dword ptr [ECX + 0xae8]
0042c053  MOV dword ptr [EBP + -0x20],EDX
0042c056  MOV EAX,dword ptr [EBP + -0x20]
0042c059  MOV dword ptr [EBP + -0x1c],EAX
0042c05c  CMP dword ptr [EBP + -0x1c],0x0
0042c060  JZ 0x0042c075
0042c062  PUSH 0x1
0042c064  MOV ECX,dword ptr [EBP + -0x1c]
0042c067  MOV EDX,dword ptr [ECX]
0042c069  MOV ECX,dword ptr [EBP + -0x1c]
0042c06c  MOV EAX,dword ptr [EDX]
0042c06e  CALL EAX
0042c070  MOV dword ptr [EBP + -0x44],EAX
0042c073  JMP 0x0042c07c
0042c075  MOV dword ptr [EBP + -0x44],0x0
0042c07c  MOV ECX,dword ptr [EBP + -0x3c]
0042c07f  MOV EDX,dword ptr [ECX + 0xae0]
0042c085  MOV dword ptr [EBP + -0x28],EDX
0042c088  MOV EAX,dword ptr [EBP + -0x28]
0042c08b  MOV dword ptr [EBP + -0x24],EAX
0042c08e  CMP dword ptr [EBP + -0x24],0x0
0042c092  JZ 0x0042c0a7
0042c094  PUSH 0x1
0042c096  MOV ECX,dword ptr [EBP + -0x24]
0042c099  MOV EDX,dword ptr [ECX]
0042c09b  MOV ECX,dword ptr [EBP + -0x24]
0042c09e  MOV EAX,dword ptr [EDX]
0042c0a0  CALL EAX
0042c0a2  MOV dword ptr [EBP + -0x48],EAX
0042c0a5  JMP 0x0042c0ae
0042c0a7  MOV dword ptr [EBP + -0x48],0x0
0042c0ae  MOV dword ptr [EBP + -0x10],0x0
0042c0b5  JMP 0x0042c0c0
0042c0b7  MOV ECX,dword ptr [EBP + -0x10]
0042c0ba  ADD ECX,0x1
0042c0bd  MOV dword ptr [EBP + -0x10],ECX
0042c0c0  CMP dword ptr [EBP + -0x10],0x4
0042c0c4  JGE 0x0042c134
0042c0c6  MOV EDX,dword ptr [EBP + -0x10]
0042c0c9  MOV EAX,dword ptr [EBP + -0x3c]
0042c0cc  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xaec]
0042c0d3  MOV dword ptr [EBP + -0x30],ECX
0042c0d6  MOV EDX,dword ptr [EBP + -0x30]
0042c0d9  MOV dword ptr [EBP + -0x2c],EDX
0042c0dc  CMP dword ptr [EBP + -0x2c],0x0
0042c0e0  JZ 0x0042c0f5
0042c0e2  PUSH 0x1
0042c0e4  MOV EAX,dword ptr [EBP + -0x2c]
0042c0e7  MOV EDX,dword ptr [EAX]
0042c0e9  MOV ECX,dword ptr [EBP + -0x2c]
0042c0ec  MOV EAX,dword ptr [EDX]
0042c0ee  CALL EAX
0042c0f0  MOV dword ptr [EBP + -0x4c],EAX
0042c0f3  JMP 0x0042c0fc
0042c0f5  MOV dword ptr [EBP + -0x4c],0x0
0042c0fc  MOV ECX,dword ptr [EBP + -0x10]
0042c0ff  MOV EDX,dword ptr [EBP + -0x3c]
0042c102  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xafc]
0042c109  MOV dword ptr [EBP + -0x38],EAX
0042c10c  MOV ECX,dword ptr [EBP + -0x38]
0042c10f  MOV dword ptr [EBP + -0x34],ECX
0042c112  CMP dword ptr [EBP + -0x34],0x0
0042c116  JZ 0x0042c12b
0042c118  PUSH 0x1
0042c11a  MOV EDX,dword ptr [EBP + -0x34]
0042c11d  MOV EAX,dword ptr [EDX]
0042c11f  MOV ECX,dword ptr [EBP + -0x34]
0042c122  MOV EDX,dword ptr [EAX]
0042c124  CALL EDX
0042c126  MOV dword ptr [EBP + -0x50],EAX
0042c129  JMP 0x0042c132
0042c12b  MOV dword ptr [EBP + -0x50],0x0
0042c132  JMP 0x0042c0b7
0042c134  MOV dword ptr [EBP + -0x4],0xffffffff
0042c13b  MOV ECX,dword ptr [EBP + -0x3c]
0042c13e  CALL 0x005cc230
0042c143  MOV ECX,dword ptr [EBP + -0xc]
0042c146  MOV dword ptr FS:[0x0],ECX
0042c14d  POP ECX
0042c14e  MOV ESP,EBP
0042c150  POP EBP
0042c151  RET

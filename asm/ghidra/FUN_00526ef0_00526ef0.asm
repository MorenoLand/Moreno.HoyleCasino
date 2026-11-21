; FUN_00526ef0  00526ef0
00526ef0  PUSH EBP
00526ef1  MOV EBP,ESP
00526ef3  SUB ESP,0x2c
00526ef6  MOV dword ptr [EBP + -0x2c],ECX
00526ef9  MOV dword ptr [EBP + -0x28],0x3d
00526f00  MOV dword ptr [EBP + -0x24],0x11e
00526f07  MOV dword ptr [EBP + -0x20],0xe3
00526f0e  MOV dword ptr [EBP + -0x1c],0x11e
00526f15  MOV dword ptr [EBP + -0x18],0x173
00526f1c  MOV dword ptr [EBP + -0x14],0xbf
00526f23  MOV dword ptr [EBP + -0x10],0x173
00526f2a  MOV dword ptr [EBP + -0xc],0x20
00526f31  MOV dword ptr [EBP + -0x8],0x0
00526f38  MOV dword ptr [EBP + -0x4],0x0
00526f3f  CMP dword ptr [EBP + 0xc],0x4
00526f43  JGE 0x00526f5d
00526f45  MOV EAX,dword ptr [EBP + 0xc]
00526f48  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x28]
00526f4c  MOV EDX,dword ptr [EBP + EAX*0x8 + -0x24]
00526f50  MOV EAX,dword ptr [EBP + 0x8]
00526f53  MOV dword ptr [EAX],ECX
00526f55  MOV dword ptr [EAX + 0x4],EDX
00526f58  MOV EAX,dword ptr [EBP + 0x8]
00526f5b  JMP 0x00526f89
00526f5d  XOR ECX,ECX
00526f5f  JNZ 0x00526f78
00526f61  PUSH 0x1d6
00526f66  PUSH 0x6c357c
00526f6b  PUSH 0x6b2f58
00526f70  CALL 0x005e9f20
00526f75  ADD ESP,0xc
00526f78  MOV EAX,dword ptr [EBP + 0x8]
00526f7b  MOV ECX,dword ptr [EBP + -0x8]
00526f7e  MOV dword ptr [EAX],ECX
00526f80  MOV EDX,dword ptr [EBP + -0x4]
00526f83  MOV dword ptr [EAX + 0x4],EDX
00526f86  MOV EAX,dword ptr [EBP + 0x8]
00526f89  MOV ESP,EBP
00526f8b  POP EBP
00526f8c  RET 0x8

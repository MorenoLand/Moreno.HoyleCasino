; FUN_00566df0  00566df0
00566df0  PUSH EBP
00566df1  MOV EBP,ESP
00566df3  PUSH -0x1
00566df5  PUSH 0x6a5b98
00566dfa  MOV EAX,FS:[0x0]
00566e00  PUSH EAX
00566e01  SUB ESP,0x28
00566e04  MOV EAX,[0x00781870]
00566e09  XOR EAX,EBP
00566e0b  PUSH EAX
00566e0c  LEA EAX,[EBP + -0xc]
00566e0f  MOV FS:[0x0],EAX
00566e15  MOV dword ptr [EBP + -0x28],ECX
00566e18  MOV EAX,dword ptr [EBP + -0x28]
00566e1b  MOV dword ptr [EAX],0x6c9ad4
00566e21  MOV dword ptr [EBP + -0x4],0x0
00566e28  MOV dword ptr [0x00793438],0x0
00566e32  MOV ECX,dword ptr [0x0079343c]
00566e38  MOV dword ptr [EBP + -0x14],ECX
00566e3b  MOV EDX,dword ptr [EBP + -0x14]
00566e3e  MOV dword ptr [EBP + -0x10],EDX
00566e41  CMP dword ptr [EBP + -0x10],0x0
00566e45  JZ 0x00566e5a
00566e47  PUSH 0x1
00566e49  MOV EAX,dword ptr [EBP + -0x10]
00566e4c  MOV EDX,dword ptr [EAX]
00566e4e  MOV ECX,dword ptr [EBP + -0x10]
00566e51  MOV EAX,dword ptr [EDX]
00566e53  CALL EAX
00566e55  MOV dword ptr [EBP + -0x2c],EAX
00566e58  JMP 0x00566e61
00566e5a  MOV dword ptr [EBP + -0x2c],0x0
00566e61  MOV dword ptr [0x0079343c],0x0
00566e6b  MOV ECX,dword ptr [0x00793440]
00566e71  MOV dword ptr [EBP + -0x1c],ECX
00566e74  MOV EDX,dword ptr [EBP + -0x1c]
00566e77  MOV dword ptr [EBP + -0x18],EDX
00566e7a  CMP dword ptr [EBP + -0x18],0x0
00566e7e  JZ 0x00566e93
00566e80  PUSH 0x1
00566e82  MOV EAX,dword ptr [EBP + -0x18]
00566e85  MOV EDX,dword ptr [EAX]
00566e87  MOV ECX,dword ptr [EBP + -0x18]
00566e8a  MOV EAX,dword ptr [EDX]
00566e8c  CALL EAX
00566e8e  MOV dword ptr [EBP + -0x30],EAX
00566e91  JMP 0x00566e9a
00566e93  MOV dword ptr [EBP + -0x30],0x0
00566e9a  MOV dword ptr [0x00793440],0x0
00566ea4  MOV ECX,dword ptr [0x00793444]
00566eaa  MOV dword ptr [EBP + -0x24],ECX
00566ead  MOV EDX,dword ptr [EBP + -0x24]
00566eb0  MOV dword ptr [EBP + -0x20],EDX
00566eb3  CMP dword ptr [EBP + -0x20],0x0
00566eb7  JZ 0x00566ecc
00566eb9  PUSH 0x1
00566ebb  MOV EAX,dword ptr [EBP + -0x20]
00566ebe  MOV EDX,dword ptr [EAX]
00566ec0  MOV ECX,dword ptr [EBP + -0x20]
00566ec3  MOV EAX,dword ptr [EDX]
00566ec5  CALL EAX
00566ec7  MOV dword ptr [EBP + -0x34],EAX
00566eca  JMP 0x00566ed3
00566ecc  MOV dword ptr [EBP + -0x34],0x0
00566ed3  MOV dword ptr [0x00793444],0x0
00566edd  MOV dword ptr [EBP + -0x4],0xffffffff
00566ee4  MOV ECX,dword ptr [EBP + -0x28]
00566ee7  CALL 0x005d7bd0
00566eec  MOV ECX,dword ptr [EBP + -0xc]
00566eef  MOV dword ptr FS:[0x0],ECX
00566ef6  POP ECX
00566ef7  MOV ESP,EBP
00566ef9  POP EBP
00566efa  RET

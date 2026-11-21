; FUN_00525dc0  00525dc0
00525dc0  PUSH EBP
00525dc1  MOV EBP,ESP
00525dc3  PUSH -0x1
00525dc5  PUSH 0x6a40fb
00525dca  MOV EAX,FS:[0x0]
00525dd0  PUSH EAX
00525dd1  SUB ESP,0x34
00525dd4  MOV EAX,[0x00781870]
00525dd9  XOR EAX,EBP
00525ddb  PUSH EAX
00525ddc  LEA EAX,[EBP + -0xc]
00525ddf  MOV FS:[0x0],EAX
00525de5  MOV dword ptr [EBP + -0x30],ECX
00525de8  MOV EAX,dword ptr [EBP + -0x30]
00525deb  MOV dword ptr [EAX],0x6c316c
00525df1  MOV dword ptr [EBP + -0x4],0x0
00525df8  MOV dword ptr [0x00793370],0x0
00525e02  MOV ECX,dword ptr [0x00793374]
00525e08  MOV dword ptr [EBP + -0x14],ECX
00525e0b  MOV EDX,dword ptr [EBP + -0x14]
00525e0e  MOV dword ptr [EBP + -0x10],EDX
00525e11  CMP dword ptr [EBP + -0x10],0x0
00525e15  JZ 0x00525e2a
00525e17  PUSH 0x1
00525e19  MOV EAX,dword ptr [EBP + -0x10]
00525e1c  MOV EDX,dword ptr [EAX]
00525e1e  MOV ECX,dword ptr [EBP + -0x10]
00525e21  MOV EAX,dword ptr [EDX]
00525e23  CALL EAX
00525e25  MOV dword ptr [EBP + -0x34],EAX
00525e28  JMP 0x00525e31
00525e2a  MOV dword ptr [EBP + -0x34],0x0
00525e31  MOV dword ptr [0x00793374],0x0
00525e3b  MOV ECX,dword ptr [0x00793378]
00525e41  MOV dword ptr [EBP + -0x1c],ECX
00525e44  MOV EDX,dword ptr [EBP + -0x1c]
00525e47  MOV dword ptr [EBP + -0x18],EDX
00525e4a  CMP dword ptr [EBP + -0x18],0x0
00525e4e  JZ 0x00525e63
00525e50  PUSH 0x1
00525e52  MOV EAX,dword ptr [EBP + -0x18]
00525e55  MOV EDX,dword ptr [EAX]
00525e57  MOV ECX,dword ptr [EBP + -0x18]
00525e5a  MOV EAX,dword ptr [EDX]
00525e5c  CALL EAX
00525e5e  MOV dword ptr [EBP + -0x38],EAX
00525e61  JMP 0x00525e6a
00525e63  MOV dword ptr [EBP + -0x38],0x0
00525e6a  MOV dword ptr [0x00793378],0x0
00525e74  MOV ECX,dword ptr [0x0079337c]
00525e7a  MOV dword ptr [EBP + -0x24],ECX
00525e7d  MOV EDX,dword ptr [EBP + -0x24]
00525e80  MOV dword ptr [EBP + -0x20],EDX
00525e83  CMP dword ptr [EBP + -0x20],0x0
00525e87  JZ 0x00525e9c
00525e89  PUSH 0x1
00525e8b  MOV EAX,dword ptr [EBP + -0x20]
00525e8e  MOV EDX,dword ptr [EAX]
00525e90  MOV ECX,dword ptr [EBP + -0x20]
00525e93  MOV EAX,dword ptr [EDX]
00525e95  CALL EAX
00525e97  MOV dword ptr [EBP + -0x3c],EAX
00525e9a  JMP 0x00525ea3
00525e9c  MOV dword ptr [EBP + -0x3c],0x0
00525ea3  MOV dword ptr [0x0079337c],0x0
00525ead  MOV ECX,dword ptr [0x00793380]
00525eb3  MOV dword ptr [EBP + -0x2c],ECX
00525eb6  MOV EDX,dword ptr [EBP + -0x2c]
00525eb9  MOV dword ptr [EBP + -0x28],EDX
00525ebc  CMP dword ptr [EBP + -0x28],0x0
00525ec0  JZ 0x00525ed5
00525ec2  PUSH 0x1
00525ec4  MOV EAX,dword ptr [EBP + -0x28]
00525ec7  MOV EDX,dword ptr [EAX]
00525ec9  MOV ECX,dword ptr [EBP + -0x28]
00525ecc  MOV EAX,dword ptr [EDX]
00525ece  CALL EAX
00525ed0  MOV dword ptr [EBP + -0x40],EAX
00525ed3  JMP 0x00525edc
00525ed5  MOV dword ptr [EBP + -0x40],0x0
00525edc  MOV dword ptr [0x00793380],0x0
00525ee6  MOV dword ptr [EBP + -0x4],0xffffffff
00525eed  MOV ECX,dword ptr [EBP + -0x30]
00525ef0  CALL 0x005d7bd0
00525ef5  MOV ECX,dword ptr [EBP + -0xc]
00525ef8  MOV dword ptr FS:[0x0],ECX
00525eff  POP ECX
00525f00  MOV ESP,EBP
00525f02  POP EBP
00525f03  RET

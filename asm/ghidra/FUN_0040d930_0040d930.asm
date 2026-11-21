; FUN_0040d930  0040d930
0040d930  PUSH EBP
0040d931  MOV EBP,ESP
0040d933  PUSH -0x1
0040d935  PUSH 0x69da2f
0040d93a  MOV EAX,FS:[0x0]
0040d940  PUSH EAX
0040d941  SUB ESP,0x1c
0040d944  MOV EAX,[0x00781870]
0040d949  XOR EAX,EBP
0040d94b  PUSH EAX
0040d94c  LEA EAX,[EBP + -0xc]
0040d94f  MOV FS:[0x0],EAX
0040d955  MOV dword ptr [EBP + -0x20],ECX
0040d958  MOV EAX,dword ptr [EBP + -0x20]
0040d95b  CMP dword ptr [EAX + 0x34],0x0
0040d95f  JNZ 0x0040d9cd
0040d961  PUSH 0x1bc
0040d966  CALL 0x00686d82
0040d96b  ADD ESP,0x4
0040d96e  MOV dword ptr [EBP + -0x14],EAX
0040d971  MOV dword ptr [EBP + -0x4],0x0
0040d978  CMP dword ptr [EBP + -0x14],0x0
0040d97c  JZ 0x0040d98b
0040d97e  MOV ECX,dword ptr [EBP + -0x14]
0040d981  CALL 0x00411760
0040d986  MOV dword ptr [EBP + -0x24],EAX
0040d989  JMP 0x0040d992
0040d98b  MOV dword ptr [EBP + -0x24],0x0
0040d992  MOV ECX,dword ptr [EBP + -0x24]
0040d995  MOV dword ptr [EBP + -0x10],ECX
0040d998  MOV dword ptr [EBP + -0x4],0xffffffff
0040d99f  MOV EDX,dword ptr [EBP + -0x20]
0040d9a2  MOV EAX,dword ptr [EBP + -0x10]
0040d9a5  MOV dword ptr [EDX + 0x34],EAX
0040d9a8  MOV ECX,dword ptr [EBP + -0x20]
0040d9ab  MOV EDX,dword ptr [ECX + 0x34]
0040d9ae  MOV EAX,dword ptr [EBP + -0x20]
0040d9b1  MOV ECX,dword ptr [EAX + 0x34]
0040d9b4  MOV EDX,dword ptr [EDX]
0040d9b6  MOV EAX,dword ptr [EDX + 0x3c]
0040d9b9  CALL EAX
0040d9bb  PUSH 0x82
0040d9c0  PUSH -0xa
0040d9c2  MOV ECX,dword ptr [EBP + -0x20]
0040d9c5  MOV ECX,dword ptr [ECX + 0x34]
0040d9c8  CALL 0x005f7340
0040d9cd  MOV EDX,dword ptr [EBP + -0x20]
0040d9d0  MOV ECX,dword ptr [EDX + 0x34]
0040d9d3  CALL 0x005f85d0
0040d9d8  PUSH 0x1
0040d9da  MOV ECX,dword ptr [EBP + -0x20]
0040d9dd  CALL 0x0040d6b0
0040d9e2  MOV EAX,dword ptr [EBP + -0x20]
0040d9e5  CMP dword ptr [EAX + 0x28],0x0
0040d9e9  JNZ 0x0040da2f
0040d9eb  PUSH 0x5c
0040d9ed  CALL 0x00686d82
0040d9f2  ADD ESP,0x4
0040d9f5  MOV dword ptr [EBP + -0x1c],EAX
0040d9f8  MOV dword ptr [EBP + -0x4],0x1
0040d9ff  CMP dword ptr [EBP + -0x1c],0x0
0040da03  JZ 0x0040da12
0040da05  MOV ECX,dword ptr [EBP + -0x1c]
0040da08  CALL 0x0040fb80
0040da0d  MOV dword ptr [EBP + -0x28],EAX
0040da10  JMP 0x0040da19
0040da12  MOV dword ptr [EBP + -0x28],0x0
0040da19  MOV ECX,dword ptr [EBP + -0x28]
0040da1c  MOV dword ptr [EBP + -0x18],ECX
0040da1f  MOV dword ptr [EBP + -0x4],0xffffffff
0040da26  MOV EDX,dword ptr [EBP + -0x20]
0040da29  MOV EAX,dword ptr [EBP + -0x18]
0040da2c  MOV dword ptr [EDX + 0x28],EAX
0040da2f  PUSH 0x0
0040da31  MOV ECX,dword ptr [EBP + -0x20]
0040da34  MOV EDX,dword ptr [ECX + 0x28]
0040da37  MOV EAX,dword ptr [EBP + -0x20]
0040da3a  MOV ECX,dword ptr [EAX + 0x28]
0040da3d  MOV EDX,dword ptr [EDX]
0040da3f  MOV EAX,dword ptr [EDX + 0x6c]
0040da42  CALL EAX
0040da44  MOV ECX,dword ptr [EBP + -0x20]
0040da47  MOV EDX,dword ptr [ECX + 0x28]
0040da4a  MOV EAX,dword ptr [EBP + -0x20]
0040da4d  MOV ECX,dword ptr [EAX + 0x28]
0040da50  MOV EDX,dword ptr [EDX]
0040da52  MOV EAX,dword ptr [EDX + 0x40]
0040da55  CALL EAX
0040da57  MOV ECX,dword ptr [EBP + -0xc]
0040da5a  MOV dword ptr FS:[0x0],ECX
0040da61  POP ECX
0040da62  MOV ESP,EBP
0040da64  POP EBP
0040da65  RET

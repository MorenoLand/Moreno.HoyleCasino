; FUN_00420d90  00420d90
00420d90  PUSH EBP
00420d91  MOV EBP,ESP
00420d93  PUSH -0x1
00420d95  PUSH 0x69e14a
00420d9a  MOV EAX,FS:[0x0]
00420da0  PUSH EAX
00420da1  SUB ESP,0x80
00420da7  MOV EAX,[0x00781870]
00420dac  XOR EAX,EBP
00420dae  PUSH EAX
00420daf  LEA EAX,[EBP + -0xc]
00420db2  MOV FS:[0x0],EAX
00420db8  MOV dword ptr [EBP + -0x78],ECX
00420dbb  MOV dword ptr [EBP + -0x3c],0x92
00420dc2  MOV dword ptr [EBP + -0x38],0x88
00420dc9  MOV dword ptr [EBP + -0x34],0x7d
00420dd0  MOV dword ptr [EBP + -0x30],0x71
00420dd7  MOV dword ptr [EBP + -0x2c],0x66
00420dde  MOV dword ptr [EBP + -0x28],0x5b
00420de5  MOV dword ptr [EBP + -0x24],0x4f
00420dec  MOV dword ptr [EBP + -0x20],0x44
00420df3  MOV dword ptr [EBP + -0x1c],0x39
00420dfa  MOV dword ptr [EBP + -0x18],0x2d
00420e01  MOV dword ptr [EBP + -0x14],0x22
00420e08  MOV dword ptr [EBP + -0x10],0x17
00420e0f  MOV dword ptr [EBP + -0x4c],0x76
00420e16  MOV dword ptr [EBP + -0x48],0x54
00420e1d  MOV dword ptr [EBP + -0x44],0x30
00420e24  PUSH 0x178
00420e29  CALL 0x00686d82
00420e2e  ADD ESP,0x4
00420e31  MOV dword ptr [EBP + -0x54],EAX
00420e34  MOV dword ptr [EBP + -0x4],0x0
00420e3b  CMP dword ptr [EBP + -0x54],0x0
00420e3f  JZ 0x00420e4e
00420e41  MOV ECX,dword ptr [EBP + -0x54]
00420e44  CALL 0x005eaaf0
00420e49  MOV dword ptr [EBP + -0x7c],EAX
00420e4c  JMP 0x00420e55
00420e4e  MOV dword ptr [EBP + -0x7c],0x0
00420e55  MOV EAX,dword ptr [EBP + -0x7c]
00420e58  MOV dword ptr [EBP + -0x50],EAX
00420e5b  MOV dword ptr [EBP + -0x4],0xffffffff
00420e62  MOV ECX,dword ptr [EBP + -0x78]
00420e65  MOV EDX,dword ptr [EBP + -0x50]
00420e68  MOV dword ptr [ECX + 0x4],EDX
00420e6b  PUSH -0x1
00420e6d  PUSH 0x1
00420e6f  PUSH 0x29
00420e71  MOV EAX,dword ptr [EBP + -0x24]
00420e74  PUSH EAX
00420e75  PUSH 0x3106dc
00420e7a  MOV ECX,dword ptr [EBP + -0x78]
00420e7d  MOV ECX,dword ptr [ECX + 0x4]
00420e80  CALL 0x005eae80
00420e85  MOV dword ptr [EBP + -0x40],0x0
00420e8c  JMP 0x00420e97
00420e8e  MOV EDX,dword ptr [EBP + -0x40]
00420e91  ADD EDX,0x1
00420e94  MOV dword ptr [EBP + -0x40],EDX
00420e97  CMP dword ptr [EBP + -0x40],0x3
00420e9b  JGE 0x00420f0c
00420e9d  PUSH 0x178
00420ea2  CALL 0x00686d82
00420ea7  ADD ESP,0x4
00420eaa  MOV dword ptr [EBP + -0x5c],EAX
00420ead  MOV dword ptr [EBP + -0x4],0x1
00420eb4  CMP dword ptr [EBP + -0x5c],0x0
00420eb8  JZ 0x00420ec7
00420eba  MOV ECX,dword ptr [EBP + -0x5c]
00420ebd  CALL 0x005eaaf0
00420ec2  MOV dword ptr [EBP + -0x80],EAX
00420ec5  JMP 0x00420ece
00420ec7  MOV dword ptr [EBP + -0x80],0x0
00420ece  MOV EAX,dword ptr [EBP + -0x80]
00420ed1  MOV dword ptr [EBP + -0x58],EAX
00420ed4  MOV dword ptr [EBP + -0x4],0xffffffff
00420edb  MOV ECX,dword ptr [EBP + -0x40]
00420ede  MOV EDX,dword ptr [EBP + -0x78]
00420ee1  MOV EAX,dword ptr [EBP + -0x58]
00420ee4  MOV dword ptr [EDX + ECX*0x4 + 0x8],EAX
00420ee8  PUSH -0x1
00420eea  PUSH 0x1
00420eec  PUSH 0x2d
00420eee  MOV ECX,dword ptr [EBP + -0x40]
00420ef1  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x4c]
00420ef5  PUSH EDX
00420ef6  PUSH 0x3106dd
00420efb  MOV EAX,dword ptr [EBP + -0x40]
00420efe  MOV ECX,dword ptr [EBP + -0x78]
00420f01  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
00420f05  CALL 0x005eae80
00420f0a  JMP 0x00420e8e
00420f0c  MOV dword ptr [EBP + -0x40],0x0
00420f13  JMP 0x00420f1e
00420f15  MOV EDX,dword ptr [EBP + -0x40]
00420f18  ADD EDX,0x1
00420f1b  MOV dword ptr [EBP + -0x40],EDX
00420f1e  CMP dword ptr [EBP + -0x40],0xc
00420f22  JGE 0x00420f9f
00420f24  PUSH 0x178
00420f29  CALL 0x00686d82
00420f2e  ADD ESP,0x4
00420f31  MOV dword ptr [EBP + -0x64],EAX
00420f34  MOV dword ptr [EBP + -0x4],0x2
00420f3b  CMP dword ptr [EBP + -0x64],0x0
00420f3f  JZ 0x00420f51
00420f41  MOV ECX,dword ptr [EBP + -0x64]
00420f44  CALL 0x005eaaf0
00420f49  MOV dword ptr [EBP + 0xffffff7c],EAX
00420f4f  JMP 0x00420f5b
00420f51  MOV dword ptr [EBP + 0xffffff7c],0x0
00420f5b  MOV EAX,dword ptr [EBP + 0xffffff7c]
00420f61  MOV dword ptr [EBP + -0x60],EAX
00420f64  MOV dword ptr [EBP + -0x4],0xffffffff
00420f6b  MOV ECX,dword ptr [EBP + -0x40]
00420f6e  MOV EDX,dword ptr [EBP + -0x78]
00420f71  MOV EAX,dword ptr [EBP + -0x60]
00420f74  MOV dword ptr [EDX + ECX*0x4 + 0x14],EAX
00420f78  PUSH -0x1
00420f7a  PUSH 0x1
00420f7c  PUSH 0x2b
00420f7e  MOV ECX,dword ptr [EBP + -0x40]
00420f81  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x3c]
00420f85  PUSH EDX
00420f86  PUSH 0x3106de
00420f8b  MOV EAX,dword ptr [EBP + -0x40]
00420f8e  MOV ECX,dword ptr [EBP + -0x78]
00420f91  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x14]
00420f95  CALL 0x005eae80
00420f9a  JMP 0x00420f15
00420f9f  PUSH 0x188
00420fa4  CALL 0x00686d82
00420fa9  ADD ESP,0x4
00420fac  MOV dword ptr [EBP + -0x6c],EAX
00420faf  MOV dword ptr [EBP + -0x4],0x3
00420fb6  CMP dword ptr [EBP + -0x6c],0x0
00420fba  JZ 0x00420fcc
00420fbc  MOV ECX,dword ptr [EBP + -0x6c]
00420fbf  CALL 0x004212a0
00420fc4  MOV dword ptr [EBP + 0xffffff78],EAX
00420fca  JMP 0x00420fd6
00420fcc  MOV dword ptr [EBP + 0xffffff78],0x0
00420fd6  MOV EDX,dword ptr [EBP + 0xffffff78]
00420fdc  MOV dword ptr [EBP + -0x68],EDX
00420fdf  MOV dword ptr [EBP + -0x4],0xffffffff
00420fe6  MOV EAX,dword ptr [EBP + -0x78]
00420fe9  MOV ECX,dword ptr [EBP + -0x68]
00420fec  MOV dword ptr [EAX + 0x44],ECX
00420fef  PUSH -0x1
00420ff1  PUSH 0x1
00420ff3  PUSH 0x2e
00420ff5  PUSH 0x9b
00420ffa  PUSH 0x3106e1
00420fff  MOV EDX,dword ptr [EBP + -0x78]
00421002  MOV ECX,dword ptr [EDX + 0x44]
00421005  CALL 0x005eae80
0042100a  PUSH 0x1c
0042100c  CALL 0x00686d82
00421011  ADD ESP,0x4
00421014  MOV dword ptr [EBP + -0x74],EAX
00421017  MOV dword ptr [EBP + -0x4],0x4
0042101e  CMP dword ptr [EBP + -0x74],0x0
00421022  JZ 0x00421036
00421024  PUSH 0x0
00421026  MOV ECX,dword ptr [EBP + -0x74]
00421029  CALL 0x00600a70
0042102e  MOV dword ptr [EBP + 0xffffff74],EAX
00421034  JMP 0x00421040
00421036  MOV dword ptr [EBP + 0xffffff74],0x0
00421040  MOV EAX,dword ptr [EBP + 0xffffff74]
00421046  MOV dword ptr [EBP + -0x70],EAX
00421049  MOV dword ptr [EBP + -0x4],0xffffffff
00421050  MOV ECX,dword ptr [EBP + -0x70]
00421053  PUSH ECX
00421054  MOV EDX,dword ptr [EBP + -0x78]
00421057  MOV ECX,dword ptr [EDX + 0x44]
0042105a  CALL 0x005f5d50
0042105f  MOV ECX,dword ptr [EBP + -0xc]
00421062  MOV dword ptr FS:[0x0],ECX
00421069  POP ECX
0042106a  MOV ESP,EBP
0042106c  POP EBP
0042106d  RET

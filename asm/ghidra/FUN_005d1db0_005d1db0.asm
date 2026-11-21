; FUN_005d1db0  005d1db0
005d1db0  PUSH EBP
005d1db1  MOV EBP,ESP
005d1db3  PUSH -0x1
005d1db5  PUSH 0x6a8e83
005d1dba  MOV EAX,FS:[0x0]
005d1dc0  PUSH EAX
005d1dc1  SUB ESP,0x54
005d1dc4  MOV EAX,[0x00781870]
005d1dc9  XOR EAX,EBP
005d1dcb  PUSH EAX
005d1dcc  LEA EAX,[EBP + -0xc]
005d1dcf  MOV FS:[0x0],EAX
005d1dd5  MOV dword ptr [EBP + -0x54],ECX
005d1dd8  MOV dword ptr [EBP + -0x38],0xffffffff
005d1ddf  MOV dword ptr [EBP + -0x34],0x30d46c
005d1de6  MOV dword ptr [EBP + -0x30],0x30d46d
005d1ded  MOV dword ptr [EBP + -0x2c],0x30d46e
005d1df4  MOV dword ptr [EBP + -0x28],0x30d46f
005d1dfb  MOV dword ptr [EBP + -0x24],0x30d470
005d1e02  MOV dword ptr [EBP + -0x20],0x30d471
005d1e09  MOV dword ptr [EBP + -0x1c],0x30d472
005d1e10  MOV dword ptr [EBP + -0x18],0x30d473
005d1e17  MOV dword ptr [EBP + -0x14],0x0
005d1e1e  JMP 0x005d1e29
005d1e20  MOV EAX,dword ptr [EBP + -0x14]
005d1e23  ADD EAX,0x1
005d1e26  MOV dword ptr [EBP + -0x14],EAX
005d1e29  MOV ECX,dword ptr [EBP + -0x54]
005d1e2c  MOV EDX,dword ptr [EBP + -0x14]
005d1e2f  CMP EDX,dword ptr [ECX + 0x84]
005d1e35  JGE 0x005d1e50
005d1e37  MOV EAX,dword ptr [EBP + -0x14]
005d1e3a  ADD EAX,0x64
005d1e3d  PUSH EAX
005d1e3e  PUSH 0x0
005d1e40  MOV ECX,dword ptr [0x0162ee84]
005d1e46  MOV ECX,dword ptr [ECX + 0x14]
005d1e49  CALL 0x005fbcb0
005d1e4e  JMP 0x005d1e20
005d1e50  PUSH 0x178
005d1e55  CALL 0x00686d82
005d1e5a  ADD ESP,0x4
005d1e5d  MOV dword ptr [EBP + -0x40],EAX
005d1e60  MOV dword ptr [EBP + -0x4],0x0
005d1e67  CMP dword ptr [EBP + -0x40],0x0
005d1e6b  JZ 0x005d1e7a
005d1e6d  MOV ECX,dword ptr [EBP + -0x40]
005d1e70  CALL 0x005eaaf0
005d1e75  MOV dword ptr [EBP + -0x58],EAX
005d1e78  JMP 0x005d1e81
005d1e7a  MOV dword ptr [EBP + -0x58],0x0
005d1e81  MOV EDX,dword ptr [EBP + -0x58]
005d1e84  MOV dword ptr [EBP + -0x3c],EDX
005d1e87  MOV dword ptr [EBP + -0x4],0xffffffff
005d1e8e  MOV EAX,dword ptr [EBP + -0x3c]
005d1e91  MOV dword ptr [EBP + -0x10],EAX
005d1e94  MOV ECX,dword ptr [EBP + -0x10]
005d1e97  MOV EDX,dword ptr [ECX]
005d1e99  MOV ECX,dword ptr [EBP + -0x10]
005d1e9c  MOV EAX,dword ptr [EDX + 0x40]
005d1e9f  CALL EAX
005d1ea1  MOV ECX,dword ptr [EBP + -0x54]
005d1ea4  MOV EDX,dword ptr [ECX + 0x80]
005d1eaa  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x38]
005d1eae  PUSH EAX
005d1eaf  MOV ECX,dword ptr [EBP + -0x10]
005d1eb2  CALL 0x005eaf00
005d1eb7  MOV ECX,dword ptr [EBP + -0x10]
005d1eba  CALL 0x005eb240
005d1ebf  ADD EAX,0x1
005d1ec2  MOV ECX,dword ptr [EBP + -0x54]
005d1ec5  MOV dword ptr [ECX + 0x84],EAX
005d1ecb  MOV EDX,dword ptr [EBP + -0x10]
005d1ece  MOV dword ptr [EBP + -0x48],EDX
005d1ed1  MOV EAX,dword ptr [EBP + -0x48]
005d1ed4  MOV dword ptr [EBP + -0x44],EAX
005d1ed7  CMP dword ptr [EBP + -0x44],0x0
005d1edb  JZ 0x005d1ef0
005d1edd  PUSH 0x1
005d1edf  MOV ECX,dword ptr [EBP + -0x44]
005d1ee2  MOV EDX,dword ptr [ECX]
005d1ee4  MOV ECX,dword ptr [EBP + -0x44]
005d1ee7  MOV EAX,dword ptr [EDX]
005d1ee9  CALL EAX
005d1eeb  MOV dword ptr [EBP + -0x5c],EAX
005d1eee  JMP 0x005d1ef7
005d1ef0  MOV dword ptr [EBP + -0x5c],0x0
005d1ef7  MOV dword ptr [EBP + -0x14],0x0
005d1efe  JMP 0x005d1f09
005d1f00  MOV ECX,dword ptr [EBP + -0x14]
005d1f03  ADD ECX,0x1
005d1f06  MOV dword ptr [EBP + -0x14],ECX
005d1f09  MOV EDX,dword ptr [EBP + -0x54]
005d1f0c  MOV EAX,dword ptr [EBP + -0x14]
005d1f0f  CMP EAX,dword ptr [EDX + 0x84]
005d1f15  JGE 0x005d2027
005d1f1b  PUSH 0x1dc
005d1f20  CALL 0x00686d82
005d1f25  ADD ESP,0x4
005d1f28  MOV dword ptr [EBP + -0x50],EAX
005d1f2b  MOV dword ptr [EBP + -0x4],0x1
005d1f32  CMP dword ptr [EBP + -0x50],0x0
005d1f36  JZ 0x005d1f51
005d1f38  MOV ECX,dword ptr [EBP + -0x50]
005d1f3b  CALL 0x00601a80
005d1f40  MOV ECX,dword ptr [EBP + -0x50]
005d1f43  MOV dword ptr [ECX],0x6d3904
005d1f49  MOV EDX,dword ptr [EBP + -0x50]
005d1f4c  MOV dword ptr [EBP + -0x60],EDX
005d1f4f  JMP 0x005d1f58
005d1f51  MOV dword ptr [EBP + -0x60],0x0
005d1f58  MOV EAX,dword ptr [EBP + -0x60]
005d1f5b  MOV dword ptr [EBP + -0x4c],EAX
005d1f5e  MOV dword ptr [EBP + -0x4],0xffffffff
005d1f65  PUSH 0x0
005d1f67  PUSH -0x1
005d1f69  PUSH -0x1
005d1f6b  PUSH -0x1
005d1f6d  PUSH -0x1
005d1f6f  PUSH 0x6b27f8
005d1f74  PUSH 0x1
005d1f76  PUSH 0x0
005d1f78  PUSH 0x0
005d1f7a  MOV ECX,dword ptr [EBP + -0x54]
005d1f7d  MOV EDX,dword ptr [ECX + 0x80]
005d1f83  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x38]
005d1f87  PUSH EAX
005d1f88  MOV ECX,dword ptr [EBP + -0x14]
005d1f8b  ADD ECX,0x64
005d1f8e  PUSH ECX
005d1f8f  MOV EDX,dword ptr [EBP + -0x4c]
005d1f92  PUSH EDX
005d1f93  MOV EAX,[0x0162ee84]
005d1f98  MOV ECX,dword ptr [EAX + 0x14]
005d1f9b  CALL 0x005f9de0
005d1fa0  MOV ECX,dword ptr [EBP + -0x14]
005d1fa3  PUSH ECX
005d1fa4  MOV EDX,dword ptr [EBP + -0x14]
005d1fa7  PUSH EDX
005d1fa8  MOV EAX,dword ptr [EBP + -0x14]
005d1fab  PUSH EAX
005d1fac  MOV ECX,dword ptr [EBP + -0x14]
005d1faf  PUSH ECX
005d1fb0  MOV EDX,dword ptr [EBP + -0x14]
005d1fb3  ADD EDX,0x64
005d1fb6  PUSH EDX
005d1fb7  MOV EAX,[0x0162ee84]
005d1fbc  MOV ECX,dword ptr [EAX + 0x14]
005d1fbf  CALL 0x005fb300
005d1fc4  MOV ECX,EAX
005d1fc6  CALL 0x006023d0
005d1fcb  MOV ECX,dword ptr [EBP + -0x14]
005d1fce  ADD ECX,0x64
005d1fd1  PUSH ECX
005d1fd2  MOV EDX,dword ptr [0x0162ee84]
005d1fd8  MOV ECX,dword ptr [EDX + 0x14]
005d1fdb  CALL 0x005fb300
005d1fe0  MOV ECX,EAX
005d1fe2  CALL 0x00602eb0
005d1fe7  PUSH 0x0
005d1fe9  MOV EAX,dword ptr [EBP + -0x14]
005d1fec  ADD EAX,0x64
005d1fef  PUSH EAX
005d1ff0  MOV ECX,dword ptr [0x0162ee84]
005d1ff6  MOV ECX,dword ptr [ECX + 0x14]
005d1ff9  CALL 0x005fb300
005d1ffe  MOV ECX,EAX
005d2000  CALL 0x00602790
005d2005  PUSH 0x1
005d2007  MOV EDX,dword ptr [EBP + -0x14]
005d200a  ADD EDX,0x64
005d200d  PUSH EDX
005d200e  MOV EAX,[0x0162ee84]
005d2013  MOV ECX,dword ptr [EAX + 0x14]
005d2016  CALL 0x005fb300
005d201b  MOV ECX,EAX
005d201d  CALL 0x005eb700
005d2022  JMP 0x005d1f00
005d2027  MOV ECX,dword ptr [EBP + -0xc]
005d202a  MOV dword ptr FS:[0x0],ECX
005d2031  POP ECX
005d2032  MOV ESP,EBP
005d2034  POP EBP
005d2035  RET

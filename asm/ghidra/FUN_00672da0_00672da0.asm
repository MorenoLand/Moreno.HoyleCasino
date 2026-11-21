; FUN_00672da0  00672da0
00672da0  PUSH EBP
00672da1  MOV EBP,ESP
00672da3  SUB ESP,0x20
00672da6  MOV dword ptr [EBP + -0x4],ECX
00672da9  MOV EAX,dword ptr [EBP + 0x8]
00672dac  MOV dword ptr [EBP + -0x8],EAX
00672daf  CMP dword ptr [EBP + -0x8],0x1
00672db3  JZ 0x00672dca
00672db5  CMP dword ptr [EBP + -0x8],0x2
00672db9  JZ 0x00672ded
00672dbb  CMP dword ptr [EBP + -0x8],0x3
00672dbf  JZ 0x00672ea8
00672dc5  JMP 0x00672f79
00672dca  MOV ECX,dword ptr [0x007947e4]
00672dd0  MOV EDX,dword ptr [ECX]
00672dd2  MOV ECX,dword ptr [0x007947e4]
00672dd8  MOV EAX,dword ptr [EDX + 0x188]
00672dde  CALL EAX
00672de0  MOV ECX,dword ptr [EBP + -0x4]
00672de3  CALL 0x005f87d0
00672de8  JMP 0x00672f79
00672ded  MOV ECX,dword ptr [EBP + -0x4]
00672df0  MOV EDX,dword ptr [ECX + 0x1f4]
00672df6  SUB EDX,0x1
00672df9  MOV EAX,dword ptr [EBP + -0x4]
00672dfc  MOV dword ptr [EAX + 0x1f4],EDX
00672e02  MOV ECX,dword ptr [EBP + -0x4]
00672e05  CMP dword ptr [ECX + 0x1f4],0x0
00672e0c  JGE 0x00672e1b
00672e0e  MOV EDX,dword ptr [EBP + -0x4]
00672e11  MOV dword ptr [EDX + 0x1f4],0x0
00672e1b  PUSH 0x2
00672e1d  MOV ECX,dword ptr [EBP + -0x4]
00672e20  CALL 0x005fb300
00672e25  MOV dword ptr [EBP + -0xc],EAX
00672e28  MOV EAX,dword ptr [EBP + -0xc]
00672e2b  MOV EDX,dword ptr [EAX]
00672e2d  MOV ECX,dword ptr [EBP + -0xc]
00672e30  MOV EAX,dword ptr [EDX + 0xcc]
00672e36  CALL EAX
00672e38  PUSH 0x3
00672e3a  MOV ECX,dword ptr [EBP + -0x4]
00672e3d  CALL 0x005fb300
00672e42  MOV dword ptr [EBP + -0x10],EAX
00672e45  MOV ECX,dword ptr [EBP + -0x10]
00672e48  MOV EDX,dword ptr [ECX]
00672e4a  MOV ECX,dword ptr [EBP + -0x10]
00672e4d  MOV EAX,dword ptr [EDX + 0xcc]
00672e53  CALL EAX
00672e55  MOV ECX,dword ptr [EBP + -0x4]
00672e58  CMP dword ptr [ECX + 0x1f4],0x0
00672e5f  JNZ 0x00672e7e
00672e61  PUSH 0x2
00672e63  MOV ECX,dword ptr [EBP + -0x4]
00672e66  CALL 0x005fb300
00672e6b  MOV dword ptr [EBP + -0x14],EAX
00672e6e  MOV EDX,dword ptr [EBP + -0x14]
00672e71  MOV EAX,dword ptr [EDX]
00672e73  MOV ECX,dword ptr [EBP + -0x14]
00672e76  MOV EDX,dword ptr [EAX + 0xd0]
00672e7c  CALL EDX
00672e7e  MOV EAX,dword ptr [EBP + -0x4]
00672e81  MOV ECX,dword ptr [EAX + 0x1f4]
00672e87  MOV EDX,dword ptr [EBP + -0x4]
00672e8a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1c4]
00672e91  PUSH EAX
00672e92  PUSH 0x4
00672e94  MOV ECX,dword ptr [EBP + -0x4]
00672e97  CALL 0x005fb2b0
00672e9c  MOV ECX,EAX
00672e9e  CALL 0x005eaf00
00672ea3  JMP 0x00672f79
00672ea8  MOV ECX,dword ptr [EBP + -0x4]
00672eab  MOV EDX,dword ptr [ECX + 0x1f4]
00672eb1  ADD EDX,0x1
00672eb4  MOV EAX,dword ptr [EBP + -0x4]
00672eb7  MOV dword ptr [EAX + 0x1f4],EDX
00672ebd  MOV ECX,dword ptr [EBP + -0x4]
00672ec0  MOV EDX,dword ptr [EBP + -0x4]
00672ec3  MOV EAX,dword ptr [ECX + 0x1f4]
00672ec9  CMP EAX,dword ptr [EDX + 0x1f0]
00672ecf  JL 0x00672ee6
00672ed1  MOV ECX,dword ptr [EBP + -0x4]
00672ed4  MOV EDX,dword ptr [ECX + 0x1f0]
00672eda  SUB EDX,0x1
00672edd  MOV EAX,dword ptr [EBP + -0x4]
00672ee0  MOV dword ptr [EAX + 0x1f4],EDX
00672ee6  PUSH 0x2
00672ee8  MOV ECX,dword ptr [EBP + -0x4]
00672eeb  CALL 0x005fb300
00672ef0  MOV dword ptr [EBP + -0x18],EAX
00672ef3  MOV ECX,dword ptr [EBP + -0x18]
00672ef6  MOV EDX,dword ptr [ECX]
00672ef8  MOV ECX,dword ptr [EBP + -0x18]
00672efb  MOV EAX,dword ptr [EDX + 0xcc]
00672f01  CALL EAX
00672f03  PUSH 0x3
00672f05  MOV ECX,dword ptr [EBP + -0x4]
00672f08  CALL 0x005fb300
00672f0d  MOV dword ptr [EBP + -0x1c],EAX
00672f10  MOV ECX,dword ptr [EBP + -0x1c]
00672f13  MOV EDX,dword ptr [ECX]
00672f15  MOV ECX,dword ptr [EBP + -0x1c]
00672f18  MOV EAX,dword ptr [EDX + 0xcc]
00672f1e  CALL EAX
00672f20  MOV ECX,dword ptr [EBP + -0x4]
00672f23  MOV EDX,dword ptr [ECX + 0x1f0]
00672f29  SUB EDX,0x1
00672f2c  MOV EAX,dword ptr [EBP + -0x4]
00672f2f  CMP dword ptr [EAX + 0x1f4],EDX
00672f35  JNZ 0x00672f54
00672f37  PUSH 0x3
00672f39  MOV ECX,dword ptr [EBP + -0x4]
00672f3c  CALL 0x005fb300
00672f41  MOV dword ptr [EBP + -0x20],EAX
00672f44  MOV ECX,dword ptr [EBP + -0x20]
00672f47  MOV EDX,dword ptr [ECX]
00672f49  MOV ECX,dword ptr [EBP + -0x20]
00672f4c  MOV EAX,dword ptr [EDX + 0xd0]
00672f52  CALL EAX
00672f54  MOV ECX,dword ptr [EBP + -0x4]
00672f57  MOV EDX,dword ptr [ECX + 0x1f4]
00672f5d  MOV EAX,dword ptr [EBP + -0x4]
00672f60  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1c4]
00672f67  PUSH ECX
00672f68  PUSH 0x4
00672f6a  MOV ECX,dword ptr [EBP + -0x4]
00672f6d  CALL 0x005fb2b0
00672f72  MOV ECX,EAX
00672f74  CALL 0x005eaf00
00672f79  MOV ESP,EBP
00672f7b  POP EBP
00672f7c  RET 0x4

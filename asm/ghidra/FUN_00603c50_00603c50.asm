; FUN_00603c50  00603c50
00603c50  PUSH EBP
00603c51  MOV EBP,ESP
00603c53  PUSH -0x1
00603c55  PUSH 0x6aaa5e
00603c5a  MOV EAX,FS:[0x0]
00603c60  PUSH EAX
00603c61  SUB ESP,0x6c
00603c64  MOV EAX,[0x00781870]
00603c69  XOR EAX,EBP
00603c6b  PUSH EAX
00603c6c  LEA EAX,[EBP + -0xc]
00603c6f  MOV FS:[0x0],EAX
00603c75  MOV dword ptr [EBP + -0x54],ECX
00603c78  MOV dword ptr [EBP + -0x10],0x0
00603c7f  MOV EAX,dword ptr [EBP + 0xc]
00603c82  PUSH EAX
00603c83  MOV ECX,dword ptr [EBP + 0x8]
00603c86  PUSH ECX
00603c87  MOV ECX,dword ptr [EBP + -0x54]
00603c8a  CALL 0x006043a0
00603c8f  MOV dword ptr [EBP + -0x10],EAX
00603c92  CMP dword ptr [EBP + -0x10],0x0
00603c96  JNZ 0x00603f81
00603c9c  PUSH 0x10
00603c9e  CALL 0x00686d82
00603ca3  ADD ESP,0x4
00603ca6  MOV dword ptr [EBP + -0x18],EAX
00603ca9  MOV dword ptr [EBP + -0x4],0x0
00603cb0  CMP dword ptr [EBP + -0x18],0x0
00603cb4  JZ 0x00603ccf
00603cb6  MOV ECX,dword ptr [EBP + -0x18]
00603cb9  CALL 0x0062aea0
00603cbe  MOV EDX,dword ptr [EBP + -0x18]
00603cc1  MOV dword ptr [EDX],0x6d7828
00603cc7  MOV EAX,dword ptr [EBP + -0x18]
00603cca  MOV dword ptr [EBP + -0x58],EAX
00603ccd  JMP 0x00603cd6
00603ccf  MOV dword ptr [EBP + -0x58],0x0
00603cd6  MOV ECX,dword ptr [EBP + -0x58]
00603cd9  MOV dword ptr [EBP + -0x14],ECX
00603cdc  MOV dword ptr [EBP + -0x4],0xffffffff
00603ce3  MOV EDX,dword ptr [EBP + -0x14]
00603ce6  MOV dword ptr [EBP + -0x10],EDX
00603ce9  MOV EAX,dword ptr [EBP + 0x8]
00603cec  MOV dword ptr [EBP + -0x5c],EAX
00603cef  CMP dword ptr [EBP + -0x5c],0x20584554
00603cf6  JG 0x00603d21
00603cf8  CMP dword ptr [EBP + -0x5c],0x20584554
00603cff  JZ 0x00603e94
00603d05  CMP dword ptr [EBP + -0x5c],0x2033504d
00603d0c  JZ 0x00603ddf
00603d12  CMP dword ptr [EBP + -0x5c],0x2047474f
00603d19  JZ 0x00603e3b
00603d1f  JMP 0x00603d2a
00603d21  CMP dword ptr [EBP + -0x5c],0x474e4f53
00603d28  JZ 0x00603d84
00603d2a  PUSH 0x160
00603d2f  CALL 0x00686d82
00603d34  ADD ESP,0x4
00603d37  MOV dword ptr [EBP + -0x20],EAX
00603d3a  MOV dword ptr [EBP + -0x4],0x1
00603d41  CMP dword ptr [EBP + -0x20],0x0
00603d45  JZ 0x00603d62
00603d47  PUSH 0x1
00603d49  MOV ECX,dword ptr [EBP + -0x54]
00603d4c  PUSH ECX
00603d4d  MOV EDX,dword ptr [EBP + 0xc]
00603d50  PUSH EDX
00603d51  MOV EAX,dword ptr [EBP + 0x8]
00603d54  PUSH EAX
00603d55  MOV ECX,dword ptr [EBP + -0x20]
00603d58  CALL 0x0061dc00
00603d5d  MOV dword ptr [EBP + -0x60],EAX
00603d60  JMP 0x00603d69
00603d62  MOV dword ptr [EBP + -0x60],0x0
00603d69  MOV ECX,dword ptr [EBP + -0x60]
00603d6c  MOV dword ptr [EBP + -0x1c],ECX
00603d6f  MOV dword ptr [EBP + -0x4],0xffffffff
00603d76  MOV EDX,dword ptr [EBP + -0x10]
00603d79  MOV EAX,dword ptr [EBP + -0x1c]
00603d7c  MOV dword ptr [EDX + 0x8],EAX
00603d7f  JMP 0x00603ee8
00603d84  PUSH 0x160
00603d89  CALL 0x00686d82
00603d8e  ADD ESP,0x4
00603d91  MOV dword ptr [EBP + -0x28],EAX
00603d94  MOV dword ptr [EBP + -0x4],0x2
00603d9b  CMP dword ptr [EBP + -0x28],0x0
00603d9f  JZ 0x00603dbd
00603da1  PUSH 0x0
00603da3  MOV ECX,dword ptr [EBP + -0x54]
00603da6  PUSH ECX
00603da7  MOV EDX,dword ptr [EBP + 0xc]
00603daa  PUSH EDX
00603dab  PUSH 0x20564157
00603db0  MOV ECX,dword ptr [EBP + -0x28]
00603db3  CALL 0x0061dc00
00603db8  MOV dword ptr [EBP + -0x64],EAX
00603dbb  JMP 0x00603dc4
00603dbd  MOV dword ptr [EBP + -0x64],0x0
00603dc4  MOV EAX,dword ptr [EBP + -0x64]
00603dc7  MOV dword ptr [EBP + -0x24],EAX
00603dca  MOV dword ptr [EBP + -0x4],0xffffffff
00603dd1  MOV ECX,dword ptr [EBP + -0x10]
00603dd4  MOV EDX,dword ptr [EBP + -0x24]
00603dd7  MOV dword ptr [ECX + 0x8],EDX
00603dda  JMP 0x00603ee8
00603ddf  PUSH 0x160
00603de4  CALL 0x00686d82
00603de9  ADD ESP,0x4
00603dec  MOV dword ptr [EBP + -0x30],EAX
00603def  MOV dword ptr [EBP + -0x4],0x3
00603df6  CMP dword ptr [EBP + -0x30],0x0
00603dfa  JZ 0x00603e19
00603dfc  MOV AL,byte ptr [EBP + 0x10]
00603dff  PUSH EAX
00603e00  MOV ECX,dword ptr [EBP + -0x54]
00603e03  PUSH ECX
00603e04  MOV EDX,dword ptr [EBP + 0xc]
00603e07  PUSH EDX
00603e08  MOV EAX,dword ptr [EBP + 0x8]
00603e0b  PUSH EAX
00603e0c  MOV ECX,dword ptr [EBP + -0x30]
00603e0f  CALL 0x0061dc00
00603e14  MOV dword ptr [EBP + -0x68],EAX
00603e17  JMP 0x00603e20
00603e19  MOV dword ptr [EBP + -0x68],0x0
00603e20  MOV ECX,dword ptr [EBP + -0x68]
00603e23  MOV dword ptr [EBP + -0x2c],ECX
00603e26  MOV dword ptr [EBP + -0x4],0xffffffff
00603e2d  MOV EDX,dword ptr [EBP + -0x10]
00603e30  MOV EAX,dword ptr [EBP + -0x2c]
00603e33  MOV dword ptr [EDX + 0x8],EAX
00603e36  JMP 0x00603ee8
00603e3b  PUSH 0x160
00603e40  CALL 0x00686d82
00603e45  ADD ESP,0x4
00603e48  MOV dword ptr [EBP + -0x38],EAX
00603e4b  MOV dword ptr [EBP + -0x4],0x4
00603e52  CMP dword ptr [EBP + -0x38],0x0
00603e56  JZ 0x00603e75
00603e58  MOV CL,byte ptr [EBP + 0x10]
00603e5b  PUSH ECX
00603e5c  MOV EDX,dword ptr [EBP + -0x54]
00603e5f  PUSH EDX
00603e60  MOV EAX,dword ptr [EBP + 0xc]
00603e63  PUSH EAX
00603e64  MOV ECX,dword ptr [EBP + 0x8]
00603e67  PUSH ECX
00603e68  MOV ECX,dword ptr [EBP + -0x38]
00603e6b  CALL 0x0061dc00
00603e70  MOV dword ptr [EBP + -0x6c],EAX
00603e73  JMP 0x00603e7c
00603e75  MOV dword ptr [EBP + -0x6c],0x0
00603e7c  MOV EDX,dword ptr [EBP + -0x6c]
00603e7f  MOV dword ptr [EBP + -0x34],EDX
00603e82  MOV dword ptr [EBP + -0x4],0xffffffff
00603e89  MOV EAX,dword ptr [EBP + -0x10]
00603e8c  MOV ECX,dword ptr [EBP + -0x34]
00603e8f  MOV dword ptr [EAX + 0x8],ECX
00603e92  JMP 0x00603ee8
00603e94  PUSH 0x96c
00603e99  CALL 0x00686d82
00603e9e  ADD ESP,0x4
00603ea1  MOV dword ptr [EBP + -0x40],EAX
00603ea4  MOV dword ptr [EBP + -0x4],0x5
00603eab  CMP dword ptr [EBP + -0x40],0x0
00603eaf  JZ 0x00603ecb
00603eb1  MOV EDX,dword ptr [EBP + -0x54]
00603eb4  PUSH EDX
00603eb5  MOV EAX,dword ptr [EBP + 0xc]
00603eb8  PUSH EAX
00603eb9  PUSH 0x20584554
00603ebe  MOV ECX,dword ptr [EBP + -0x40]
00603ec1  CALL 0x00615fe0
00603ec6  MOV dword ptr [EBP + -0x70],EAX
00603ec9  JMP 0x00603ed2
00603ecb  MOV dword ptr [EBP + -0x70],0x0
00603ed2  MOV ECX,dword ptr [EBP + -0x70]
00603ed5  MOV dword ptr [EBP + -0x3c],ECX
00603ed8  MOV dword ptr [EBP + -0x4],0xffffffff
00603edf  MOV EDX,dword ptr [EBP + -0x10]
00603ee2  MOV EAX,dword ptr [EBP + -0x3c]
00603ee5  MOV dword ptr [EDX + 0x8],EAX
00603ee8  MOV ECX,dword ptr [EBP + -0x10]
00603eeb  CMP dword ptr [ECX + 0x8],0x0
00603eef  JZ 0x00603f17
00603ef1  MOV EDX,dword ptr [EBP + -0x10]
00603ef4  MOV dword ptr [EDX + 0xc],0x1
00603efb  MOV EAX,dword ptr [EBP + -0x10]
00603efe  PUSH EAX
00603eff  MOV ECX,dword ptr [EBP + -0x54]
00603f02  ADD ECX,0x28
00603f05  CALL 0x0062aa20
00603f0a  MOV ECX,dword ptr [EBP + -0x10]
00603f0d  MOV EAX,dword ptr [ECX + 0x8]
00603f10  JMP 0x00603f96
00603f17  MOV EDX,dword ptr [EBP + -0x10]
00603f1a  CMP dword ptr [EDX + 0x8],0x0
00603f1e  JZ 0x00603f4f
00603f20  MOV EAX,dword ptr [EBP + -0x10]
00603f23  MOV ECX,dword ptr [EAX + 0x8]
00603f26  MOV dword ptr [EBP + -0x48],ECX
00603f29  MOV EDX,dword ptr [EBP + -0x48]
00603f2c  MOV dword ptr [EBP + -0x44],EDX
00603f2f  CMP dword ptr [EBP + -0x44],0x0
00603f33  JZ 0x00603f48
00603f35  PUSH 0x1
00603f37  MOV EAX,dword ptr [EBP + -0x44]
00603f3a  MOV EDX,dword ptr [EAX]
00603f3c  MOV ECX,dword ptr [EBP + -0x44]
00603f3f  MOV EAX,dword ptr [EDX]
00603f41  CALL EAX
00603f43  MOV dword ptr [EBP + -0x74],EAX
00603f46  JMP 0x00603f4f
00603f48  MOV dword ptr [EBP + -0x74],0x0
00603f4f  MOV ECX,dword ptr [EBP + -0x10]
00603f52  MOV dword ptr [EBP + -0x50],ECX
00603f55  MOV EDX,dword ptr [EBP + -0x50]
00603f58  MOV dword ptr [EBP + -0x4c],EDX
00603f5b  CMP dword ptr [EBP + -0x4c],0x0
00603f5f  JZ 0x00603f74
00603f61  PUSH 0x1
00603f63  MOV EAX,dword ptr [EBP + -0x4c]
00603f66  MOV EDX,dword ptr [EAX]
00603f68  MOV ECX,dword ptr [EBP + -0x4c]
00603f6b  MOV EAX,dword ptr [EDX]
00603f6d  CALL EAX
00603f6f  MOV dword ptr [EBP + -0x78],EAX
00603f72  JMP 0x00603f7b
00603f74  MOV dword ptr [EBP + -0x78],0x0
00603f7b  XOR EAX,EAX
00603f7d  JMP 0x00603f96
00603f81  MOV ECX,dword ptr [EBP + -0x10]
00603f84  MOV EDX,dword ptr [ECX + 0xc]
00603f87  ADD EDX,0x1
00603f8a  MOV EAX,dword ptr [EBP + -0x10]
00603f8d  MOV dword ptr [EAX + 0xc],EDX
00603f90  MOV ECX,dword ptr [EBP + -0x10]
00603f93  MOV EAX,dword ptr [ECX + 0x8]
00603f96  MOV ECX,dword ptr [EBP + -0xc]
00603f99  MOV dword ptr FS:[0x0],ECX
00603fa0  POP ECX
00603fa1  MOV ESP,EBP
00603fa3  POP EBP
00603fa4  RET 0xc

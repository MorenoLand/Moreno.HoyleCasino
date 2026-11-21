; FUN_005c9c70  005c9c70
005c9c70  PUSH EBP
005c9c71  MOV EBP,ESP
005c9c73  PUSH -0x1
005c9c75  PUSH 0x6a8a20
005c9c7a  MOV EAX,FS:[0x0]
005c9c80  PUSH EAX
005c9c81  SUB ESP,0x98
005c9c87  MOV EAX,[0x00781870]
005c9c8c  XOR EAX,EBP
005c9c8e  PUSH EAX
005c9c8f  LEA EAX,[EBP + -0xc]
005c9c92  MOV FS:[0x0],EAX
005c9c98  MOV dword ptr [EBP + 0xffffff70],ECX
005c9c9e  FLD double ptr [0x006b3e40]
005c9ca4  FSTP double ptr [EBP + -0x64]
005c9ca7  FLD1
005c9ca9  FSTP double ptr [EBP + -0x5c]
005c9cac  FLD double ptr [0x006be720]
005c9cb2  FSTP double ptr [EBP + -0x54]
005c9cb5  FLD double ptr [0x006be518]
005c9cbb  FSTP double ptr [EBP + -0x4c]
005c9cbe  FLD double ptr [0x006d2430]
005c9cc4  FSTP double ptr [EBP + -0x44]
005c9cc7  FLD double ptr [0x006be520]
005c9ccd  FSTP double ptr [EBP + -0x3c]
005c9cd0  MOV dword ptr [EBP + -0x2c],0x1b7
005c9cd7  MOV dword ptr [EBP + -0x28],0x1b4
005c9cde  MOV dword ptr [EBP + -0x24],0x1e2
005c9ce5  MOV dword ptr [EBP + -0x20],0x1b0
005c9cec  MOV dword ptr [EBP + -0x1c],0x20b
005c9cf3  MOV dword ptr [EBP + -0x18],0x1a8
005c9cfa  MOV dword ptr [EBP + -0x14],0x22e
005c9d01  MOV dword ptr [EBP + -0x10],0x198
005c9d08  MOV dword ptr [EBP + -0x30],0x0
005c9d0f  JMP 0x005c9d1a
005c9d11  MOV EAX,dword ptr [EBP + -0x30]
005c9d14  ADD EAX,0x1
005c9d17  MOV dword ptr [EBP + -0x30],EAX
005c9d1a  CMP dword ptr [EBP + -0x30],0x4
005c9d1e  JGE 0x005c9e15
005c9d24  MOV ECX,dword ptr [EBP + -0x30]
005c9d27  MOV EDX,dword ptr [EBP + 0xffffff70]
005c9d2d  CMP dword ptr [EDX + ECX*0x4 + 0x4],0x0
005c9d32  JNZ 0x005c9def
005c9d38  PUSH 0x1e8
005c9d3d  CALL 0x00686d82
005c9d42  ADD ESP,0x4
005c9d45  MOV dword ptr [EBP + -0x6c],EAX
005c9d48  MOV dword ptr [EBP + -0x4],0x0
005c9d4f  CMP dword ptr [EBP + -0x6c],0x0
005c9d53  JZ 0x005c9d72
005c9d55  MOV EAX,dword ptr [EBP + -0x30]
005c9d58  SUB ESP,0x8
005c9d5b  FLD double ptr [EBP + EAX*0x8 + -0x5c]
005c9d5f  FSTP double ptr [ESP]
005c9d62  MOV ECX,dword ptr [EBP + -0x6c]
005c9d65  CALL 0x005ca9f0
005c9d6a  MOV dword ptr [EBP + 0xffffff6c],EAX
005c9d70  JMP 0x005c9d7c
005c9d72  MOV dword ptr [EBP + 0xffffff6c],0x0
005c9d7c  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c9d82  MOV dword ptr [EBP + -0x68],ECX
005c9d85  MOV dword ptr [EBP + -0x4],0xffffffff
005c9d8c  MOV EDX,dword ptr [EBP + -0x30]
005c9d8f  MOV EAX,dword ptr [EBP + 0xffffff70]
005c9d95  MOV ECX,dword ptr [EBP + -0x68]
005c9d98  MOV dword ptr [EAX + EDX*0x4 + 0x4],ECX
005c9d9c  PUSH -0x1
005c9d9e  PUSH 0x64
005c9da0  MOV EDX,dword ptr [EBP + -0x30]
005c9da3  MOV EAX,dword ptr [EBP + EDX*0x8 + -0x28]
005c9da7  PUSH EAX
005c9da8  MOV ECX,dword ptr [EBP + -0x30]
005c9dab  MOV EDX,dword ptr [EBP + ECX*0x8 + -0x2c]
005c9daf  PUSH EDX
005c9db0  MOV EAX,dword ptr [EBP + -0x30]
005c9db3  ADD EAX,0x3f8
005c9db8  PUSH EAX
005c9db9  MOV ECX,dword ptr [EBP + -0x30]
005c9dbc  MOV EDX,dword ptr [EBP + 0xffffff70]
005c9dc2  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
005c9dc6  CALL 0x005eae80
005c9dcb  MOV EAX,dword ptr [EBP + -0x30]
005c9dce  MOV ECX,dword ptr [EBP + 0xffffff70]
005c9dd4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
005c9dd8  MOV EAX,dword ptr [EBP + -0x30]
005c9ddb  MOV ECX,dword ptr [EBP + 0xffffff70]
005c9de1  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
005c9de5  MOV EDX,dword ptr [EDX]
005c9de7  MOV EAX,dword ptr [EDX + 0xd0]
005c9ded  CALL EAX
005c9def  MOV ECX,dword ptr [EBP + -0x30]
005c9df2  MOV EDX,dword ptr [EBP + 0xffffff70]
005c9df8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
005c9dfc  MOV ECX,dword ptr [EBP + -0x30]
005c9dff  MOV EDX,dword ptr [EBP + 0xffffff70]
005c9e05  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
005c9e09  MOV EAX,dword ptr [EAX]
005c9e0b  MOV EDX,dword ptr [EAX + 0x74]
005c9e0e  CALL EDX
005c9e10  JMP 0x005c9d11
005c9e15  MOV dword ptr [EBP + -0x30],0x0
005c9e1c  JMP 0x005c9e27
005c9e1e  MOV EAX,dword ptr [EBP + -0x30]
005c9e21  ADD EAX,0x1
005c9e24  MOV dword ptr [EBP + -0x30],EAX
005c9e27  CMP dword ptr [EBP + -0x30],0x2
005c9e2b  JGE 0x005c9f10
005c9e31  MOV ECX,dword ptr [EBP + -0x30]
005c9e34  MOV EDX,dword ptr [EBP + 0xffffff70]
005c9e3a  CMP dword ptr [EDX + ECX*0x4 + 0x14],0x0
005c9e3f  JNZ 0x005c9f0b
005c9e45  PUSH 0x1e0
005c9e4a  CALL 0x00686d82
005c9e4f  ADD ESP,0x4
005c9e52  MOV dword ptr [EBP + -0x74],EAX
005c9e55  MOV dword ptr [EBP + -0x4],0x1
005c9e5c  CMP dword ptr [EBP + -0x74],0x0
005c9e60  JZ 0x005c9e76
005c9e62  MOV EAX,dword ptr [EBP + -0x30]
005c9e65  PUSH EAX
005c9e66  MOV ECX,dword ptr [EBP + -0x74]
005c9e69  CALL 0x005cb320
005c9e6e  MOV dword ptr [EBP + 0xffffff68],EAX
005c9e74  JMP 0x005c9e80
005c9e76  MOV dword ptr [EBP + 0xffffff68],0x0
005c9e80  MOV ECX,dword ptr [EBP + 0xffffff68]
005c9e86  MOV dword ptr [EBP + -0x70],ECX
005c9e89  MOV dword ptr [EBP + -0x4],0xffffffff
005c9e90  MOV EDX,dword ptr [EBP + -0x30]
005c9e93  MOV EAX,dword ptr [EBP + 0xffffff70]
005c9e99  MOV ECX,dword ptr [EBP + -0x70]
005c9e9c  MOV dword ptr [EAX + EDX*0x4 + 0x14],ECX
005c9ea0  PUSH -0x1
005c9ea2  PUSH 0x32
005c9ea4  PUSH 0x0
005c9ea6  PUSH 0x0
005c9ea8  MOV EDX,dword ptr [EBP + -0x30]
005c9eab  ADD EDX,0x408
005c9eb1  PUSH EDX
005c9eb2  MOV EAX,dword ptr [EBP + -0x30]
005c9eb5  MOV ECX,dword ptr [EBP + 0xffffff70]
005c9ebb  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x14]
005c9ebf  CALL 0x005eae80
005c9ec4  MOV EDX,dword ptr [EBP + -0x30]
005c9ec7  MOV EAX,dword ptr [EBP + 0xffffff70]
005c9ecd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x14]
005c9ed1  MOV EDX,dword ptr [EBP + -0x30]
005c9ed4  MOV EAX,dword ptr [EBP + 0xffffff70]
005c9eda  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x14]
005c9ede  MOV EAX,dword ptr [ECX]
005c9ee0  MOV ECX,EDX
005c9ee2  MOV EDX,dword ptr [EAX + 0xd0]
005c9ee8  CALL EDX
005c9eea  MOV EAX,dword ptr [EBP + -0x30]
005c9eed  MOV ECX,dword ptr [EBP + 0xffffff70]
005c9ef3  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x14]
005c9ef7  MOV EAX,dword ptr [EBP + -0x30]
005c9efa  MOV ECX,dword ptr [EBP + 0xffffff70]
005c9f00  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x14]
005c9f04  MOV EDX,dword ptr [EDX]
005c9f06  MOV EAX,dword ptr [EDX + 0x74]
005c9f09  CALL EAX
005c9f0b  JMP 0x005c9e1e
005c9f10  MOV ECX,dword ptr [EBP + 0xffffff70]
005c9f16  CMP dword ptr [ECX + 0x1c],0x0
005c9f1a  JNZ 0x005c9faf
005c9f20  PUSH 0x1e0
005c9f25  CALL 0x00686d82
005c9f2a  ADD ESP,0x4
005c9f2d  MOV dword ptr [EBP + -0x7c],EAX
005c9f30  MOV dword ptr [EBP + -0x4],0x2
005c9f37  CMP dword ptr [EBP + -0x7c],0x0
005c9f3b  JZ 0x005c9f4d
005c9f3d  MOV ECX,dword ptr [EBP + -0x7c]
005c9f40  CALL 0x005cb040
005c9f45  MOV dword ptr [EBP + 0xffffff64],EAX
005c9f4b  JMP 0x005c9f57
005c9f4d  MOV dword ptr [EBP + 0xffffff64],0x0
005c9f57  MOV EDX,dword ptr [EBP + 0xffffff64]
005c9f5d  MOV dword ptr [EBP + -0x78],EDX
005c9f60  MOV dword ptr [EBP + -0x4],0xffffffff
005c9f67  MOV EAX,dword ptr [EBP + 0xffffff70]
005c9f6d  MOV ECX,dword ptr [EBP + -0x78]
005c9f70  MOV dword ptr [EAX + 0x1c],ECX
005c9f73  PUSH -0x1
005c9f75  PUSH 0x64
005c9f77  PUSH 0x1c6
005c9f7c  PUSH 0x199
005c9f81  PUSH 0x42e
005c9f86  MOV EDX,dword ptr [EBP + 0xffffff70]
005c9f8c  MOV ECX,dword ptr [EDX + 0x1c]
005c9f8f  CALL 0x005eae80
005c9f94  MOV EAX,dword ptr [EBP + 0xffffff70]
005c9f9a  MOV ECX,dword ptr [EAX + 0x1c]
005c9f9d  MOV EDX,dword ptr [EBP + 0xffffff70]
005c9fa3  MOV EAX,dword ptr [EDX + 0x1c]
005c9fa6  MOV EDX,dword ptr [ECX]
005c9fa8  MOV ECX,EAX
005c9faa  MOV EAX,dword ptr [EDX + 0x74]
005c9fad  CALL EAX
005c9faf  MOV ECX,dword ptr [EBP + 0xffffff70]
005c9fb5  CALL 0x005ca570
005c9fba  MOV ECX,dword ptr [EBP + 0xffffff70]
005c9fc0  CMP dword ptr [ECX + 0x20],0x0
005c9fc4  JNZ 0x005ca05b
005c9fca  PUSH 0x1d0
005c9fcf  CALL 0x00686d82
005c9fd4  ADD ESP,0x4
005c9fd7  MOV dword ptr [EBP + 0xffffff7c],EAX
005c9fdd  MOV dword ptr [EBP + -0x4],0x3
005c9fe4  CMP dword ptr [EBP + 0xffffff7c],0x0
005c9feb  JZ 0x005ca000
005c9fed  MOV ECX,dword ptr [EBP + 0xffffff7c]
005c9ff3  CALL 0x005ec5a0
005c9ff8  MOV dword ptr [EBP + 0xffffff60],EAX
005c9ffe  JMP 0x005ca00a
005ca000  MOV dword ptr [EBP + 0xffffff60],0x0
005ca00a  MOV EDX,dword ptr [EBP + 0xffffff60]
005ca010  MOV dword ptr [EBP + -0x80],EDX
005ca013  MOV dword ptr [EBP + -0x4],0xffffffff
005ca01a  MOV EAX,dword ptr [EBP + 0xffffff70]
005ca020  MOV ECX,dword ptr [EBP + -0x80]
005ca023  MOV dword ptr [EAX + 0x20],ECX
005ca026  PUSH -0x1
005ca028  PUSH 0x30
005ca02a  PUSH 0x3e9
005ca02f  PUSH 0x1bd
005ca034  PUSH 0x258
005ca039  PUSH 0x10
005ca03b  PUSH 0x18
005ca03d  PUSH 0x20
005ca03f  PUSH 0x6d2414
005ca044  CALL 0x00630f40
005ca049  ADD ESP,0x4
005ca04c  PUSH EAX
005ca04d  MOV EDX,dword ptr [EBP + 0xffffff70]
005ca053  MOV ECX,dword ptr [EDX + 0x20]
005ca056  CALL 0x005ec8f0
005ca05b  MOV EAX,dword ptr [EBP + 0xffffff70]
005ca061  CMP dword ptr [EAX + 0x24],0x0
005ca065  JNZ 0x005ca0f9
005ca06b  PUSH 0x1d0
005ca070  CALL 0x00686d82
005ca075  ADD ESP,0x4
005ca078  MOV dword ptr [EBP + 0xffffff74],EAX
005ca07e  MOV dword ptr [EBP + -0x4],0x4
005ca085  CMP dword ptr [EBP + 0xffffff74],0x0
005ca08c  JZ 0x005ca0a1
005ca08e  MOV ECX,dword ptr [EBP + 0xffffff74]
005ca094  CALL 0x005ec5a0
005ca099  MOV dword ptr [EBP + 0xffffff5c],EAX
005ca09f  JMP 0x005ca0ab
005ca0a1  MOV dword ptr [EBP + 0xffffff5c],0x0
005ca0ab  MOV ECX,dword ptr [EBP + 0xffffff5c]
005ca0b1  MOV dword ptr [EBP + 0xffffff78],ECX
005ca0b7  MOV dword ptr [EBP + -0x4],0xffffffff
005ca0be  MOV EDX,dword ptr [EBP + 0xffffff70]
005ca0c4  MOV EAX,dword ptr [EBP + 0xffffff78]
005ca0ca  MOV dword ptr [EDX + 0x24],EAX
005ca0cd  PUSH -0x1
005ca0cf  PUSH 0x5
005ca0d1  PUSH 0x3e9
005ca0d6  PUSH 0x1ce
005ca0db  PUSH 0x258
005ca0e0  PUSH 0x10
005ca0e2  PUSH 0x64
005ca0e4  PUSH 0x20
005ca0e6  PUSH 0x6b27f8
005ca0eb  MOV ECX,dword ptr [EBP + 0xffffff70]
005ca0f1  MOV ECX,dword ptr [ECX + 0x24]
005ca0f4  CALL 0x005ec8f0
005ca0f9  MOV ECX,dword ptr [EBP + -0xc]
005ca0fc  MOV dword ptr FS:[0x0],ECX
005ca103  POP ECX
005ca104  MOV ESP,EBP
005ca106  POP EBP
005ca107  RET

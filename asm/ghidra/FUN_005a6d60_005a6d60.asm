; FUN_005a6d60  005a6d60
005a6d60  PUSH EBP
005a6d61  MOV EBP,ESP
005a6d63  PUSH -0x1
005a6d65  PUSH 0x6a78e8
005a6d6a  MOV EAX,FS:[0x0]
005a6d70  PUSH EAX
005a6d71  SUB ESP,0x9c
005a6d77  MOV EAX,[0x00781870]
005a6d7c  XOR EAX,EBP
005a6d7e  PUSH EAX
005a6d7f  LEA EAX,[EBP + -0xc]
005a6d82  MOV FS:[0x0],EAX
005a6d88  MOV dword ptr [EBP + -0x78],ECX
005a6d8b  MOV EAX,dword ptr [EBP + -0x78]
005a6d8e  MOV dword ptr [EAX],0x6cf81c
005a6d94  MOV dword ptr [EBP + -0x4],0x0
005a6d9b  MOV dword ptr [EBP + -0x10],0x0
005a6da2  JMP 0x005a6dad
005a6da4  MOV ECX,dword ptr [EBP + -0x10]
005a6da7  ADD ECX,0x1
005a6daa  MOV dword ptr [EBP + -0x10],ECX
005a6dad  CMP dword ptr [EBP + -0x10],0x5
005a6db1  JGE 0x005a6de8
005a6db3  MOV EDX,dword ptr [EBP + -0x10]
005a6db6  MOV EAX,dword ptr [EBP + -0x78]
005a6db9  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
005a6dbd  MOV dword ptr [EBP + -0x1c],ECX
005a6dc0  MOV EDX,dword ptr [EBP + -0x1c]
005a6dc3  MOV dword ptr [EBP + -0x18],EDX
005a6dc6  CMP dword ptr [EBP + -0x18],0x0
005a6dca  JZ 0x005a6ddf
005a6dcc  PUSH 0x1
005a6dce  MOV EAX,dword ptr [EBP + -0x18]
005a6dd1  MOV EDX,dword ptr [EAX]
005a6dd3  MOV ECX,dword ptr [EBP + -0x18]
005a6dd6  MOV EAX,dword ptr [EDX]
005a6dd8  CALL EAX
005a6dda  MOV dword ptr [EBP + -0x7c],EAX
005a6ddd  JMP 0x005a6de6
005a6ddf  MOV dword ptr [EBP + -0x7c],0x0
005a6de6  JMP 0x005a6da4
005a6de8  MOV dword ptr [EBP + -0x14],0x0
005a6def  JMP 0x005a6dfa
005a6df1  MOV ECX,dword ptr [EBP + -0x14]
005a6df4  ADD ECX,0x1
005a6df7  MOV dword ptr [EBP + -0x14],ECX
005a6dfa  CMP dword ptr [EBP + -0x14],0x4
005a6dfe  JGE 0x005a6eae
005a6e04  MOV EDX,dword ptr [EBP + -0x14]
005a6e07  MOV EAX,dword ptr [EBP + -0x78]
005a6e0a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005a6e0e  MOV dword ptr [EBP + -0x24],ECX
005a6e11  MOV EDX,dword ptr [EBP + -0x24]
005a6e14  MOV dword ptr [EBP + -0x20],EDX
005a6e17  CMP dword ptr [EBP + -0x20],0x0
005a6e1b  JZ 0x005a6e30
005a6e1d  PUSH 0x1
005a6e1f  MOV EAX,dword ptr [EBP + -0x20]
005a6e22  MOV EDX,dword ptr [EAX]
005a6e24  MOV ECX,dword ptr [EBP + -0x20]
005a6e27  MOV EAX,dword ptr [EDX]
005a6e29  CALL EAX
005a6e2b  MOV dword ptr [EBP + -0x80],EAX
005a6e2e  JMP 0x005a6e37
005a6e30  MOV dword ptr [EBP + -0x80],0x0
005a6e37  MOV ECX,dword ptr [EBP + -0x14]
005a6e3a  MOV EDX,dword ptr [EBP + -0x78]
005a6e3d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
005a6e41  MOV dword ptr [EBP + -0x2c],EAX
005a6e44  MOV ECX,dword ptr [EBP + -0x2c]
005a6e47  MOV dword ptr [EBP + -0x28],ECX
005a6e4a  CMP dword ptr [EBP + -0x28],0x0
005a6e4e  JZ 0x005a6e66
005a6e50  PUSH 0x1
005a6e52  MOV EDX,dword ptr [EBP + -0x28]
005a6e55  MOV EAX,dword ptr [EDX]
005a6e57  MOV ECX,dword ptr [EBP + -0x28]
005a6e5a  MOV EDX,dword ptr [EAX]
005a6e5c  CALL EDX
005a6e5e  MOV dword ptr [EBP + 0xffffff7c],EAX
005a6e64  JMP 0x005a6e70
005a6e66  MOV dword ptr [EBP + 0xffffff7c],0x0
005a6e70  MOV EAX,dword ptr [EBP + -0x14]
005a6e73  MOV ECX,dword ptr [EBP + -0x78]
005a6e76  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x58]
005a6e7a  MOV dword ptr [EBP + -0x34],EDX
005a6e7d  MOV EAX,dword ptr [EBP + -0x34]
005a6e80  MOV dword ptr [EBP + -0x30],EAX
005a6e83  CMP dword ptr [EBP + -0x30],0x0
005a6e87  JZ 0x005a6e9f
005a6e89  PUSH 0x1
005a6e8b  MOV ECX,dword ptr [EBP + -0x30]
005a6e8e  MOV EDX,dword ptr [ECX]
005a6e90  MOV ECX,dword ptr [EBP + -0x30]
005a6e93  MOV EAX,dword ptr [EDX]
005a6e95  CALL EAX
005a6e97  MOV dword ptr [EBP + 0xffffff78],EAX
005a6e9d  JMP 0x005a6ea9
005a6e9f  MOV dword ptr [EBP + 0xffffff78],0x0
005a6ea9  JMP 0x005a6df1
005a6eae  MOV ECX,dword ptr [EBP + -0x78]
005a6eb1  MOV EDX,dword ptr [ECX + 0x28]
005a6eb4  MOV dword ptr [EBP + -0x3c],EDX
005a6eb7  MOV EAX,dword ptr [EBP + -0x3c]
005a6eba  MOV dword ptr [EBP + -0x38],EAX
005a6ebd  CMP dword ptr [EBP + -0x38],0x0
005a6ec1  JZ 0x005a6ed9
005a6ec3  PUSH 0x1
005a6ec5  MOV ECX,dword ptr [EBP + -0x38]
005a6ec8  MOV EDX,dword ptr [ECX]
005a6eca  MOV ECX,dword ptr [EBP + -0x38]
005a6ecd  MOV EAX,dword ptr [EDX]
005a6ecf  CALL EAX
005a6ed1  MOV dword ptr [EBP + 0xffffff74],EAX
005a6ed7  JMP 0x005a6ee3
005a6ed9  MOV dword ptr [EBP + 0xffffff74],0x0
005a6ee3  MOV ECX,dword ptr [EBP + -0x78]
005a6ee6  MOV EDX,dword ptr [ECX + 0x2c]
005a6ee9  MOV dword ptr [EBP + -0x44],EDX
005a6eec  MOV EAX,dword ptr [EBP + -0x44]
005a6eef  MOV dword ptr [EBP + -0x40],EAX
005a6ef2  CMP dword ptr [EBP + -0x40],0x0
005a6ef6  JZ 0x005a6f0e
005a6ef8  PUSH 0x1
005a6efa  MOV ECX,dword ptr [EBP + -0x40]
005a6efd  MOV EDX,dword ptr [ECX]
005a6eff  MOV ECX,dword ptr [EBP + -0x40]
005a6f02  MOV EAX,dword ptr [EDX]
005a6f04  CALL EAX
005a6f06  MOV dword ptr [EBP + 0xffffff70],EAX
005a6f0c  JMP 0x005a6f18
005a6f0e  MOV dword ptr [EBP + 0xffffff70],0x0
005a6f18  MOV ECX,dword ptr [EBP + -0x78]
005a6f1b  MOV EDX,dword ptr [ECX + 0x3c]
005a6f1e  MOV dword ptr [EBP + -0x4c],EDX
005a6f21  MOV EAX,dword ptr [EBP + -0x4c]
005a6f24  MOV dword ptr [EBP + -0x48],EAX
005a6f27  CMP dword ptr [EBP + -0x48],0x0
005a6f2b  JZ 0x005a6f43
005a6f2d  PUSH 0x1
005a6f2f  MOV ECX,dword ptr [EBP + -0x48]
005a6f32  MOV EDX,dword ptr [ECX]
005a6f34  MOV ECX,dword ptr [EBP + -0x48]
005a6f37  MOV EAX,dword ptr [EDX]
005a6f39  CALL EAX
005a6f3b  MOV dword ptr [EBP + 0xffffff6c],EAX
005a6f41  JMP 0x005a6f4d
005a6f43  MOV dword ptr [EBP + 0xffffff6c],0x0
005a6f4d  MOV ECX,dword ptr [EBP + -0x78]
005a6f50  MOV EDX,dword ptr [ECX + 0x40]
005a6f53  MOV dword ptr [EBP + -0x54],EDX
005a6f56  MOV EAX,dword ptr [EBP + -0x54]
005a6f59  MOV dword ptr [EBP + -0x50],EAX
005a6f5c  CMP dword ptr [EBP + -0x50],0x0
005a6f60  JZ 0x005a6f78
005a6f62  PUSH 0x1
005a6f64  MOV ECX,dword ptr [EBP + -0x50]
005a6f67  MOV EDX,dword ptr [ECX]
005a6f69  MOV ECX,dword ptr [EBP + -0x50]
005a6f6c  MOV EAX,dword ptr [EDX]
005a6f6e  CALL EAX
005a6f70  MOV dword ptr [EBP + 0xffffff68],EAX
005a6f76  JMP 0x005a6f82
005a6f78  MOV dword ptr [EBP + 0xffffff68],0x0
005a6f82  MOV ECX,dword ptr [EBP + -0x78]
005a6f85  MOV EDX,dword ptr [ECX + 0x44]
005a6f88  MOV dword ptr [EBP + -0x5c],EDX
005a6f8b  MOV EAX,dword ptr [EBP + -0x5c]
005a6f8e  MOV dword ptr [EBP + -0x58],EAX
005a6f91  CMP dword ptr [EBP + -0x58],0x0
005a6f95  JZ 0x005a6fad
005a6f97  PUSH 0x1
005a6f99  MOV ECX,dword ptr [EBP + -0x58]
005a6f9c  MOV EDX,dword ptr [ECX]
005a6f9e  MOV ECX,dword ptr [EBP + -0x58]
005a6fa1  MOV EAX,dword ptr [EDX]
005a6fa3  CALL EAX
005a6fa5  MOV dword ptr [EBP + 0xffffff64],EAX
005a6fab  JMP 0x005a6fb7
005a6fad  MOV dword ptr [EBP + 0xffffff64],0x0
005a6fb7  MOV ECX,dword ptr [EBP + -0x78]
005a6fba  MOV EDX,dword ptr [ECX + 0x30]
005a6fbd  MOV dword ptr [EBP + -0x64],EDX
005a6fc0  MOV EAX,dword ptr [EBP + -0x64]
005a6fc3  MOV dword ptr [EBP + -0x60],EAX
005a6fc6  CMP dword ptr [EBP + -0x60],0x0
005a6fca  JZ 0x005a6fe2
005a6fcc  PUSH 0x1
005a6fce  MOV ECX,dword ptr [EBP + -0x60]
005a6fd1  MOV EDX,dword ptr [ECX]
005a6fd3  MOV ECX,dword ptr [EBP + -0x60]
005a6fd6  MOV EAX,dword ptr [EDX]
005a6fd8  CALL EAX
005a6fda  MOV dword ptr [EBP + 0xffffff60],EAX
005a6fe0  JMP 0x005a6fec
005a6fe2  MOV dword ptr [EBP + 0xffffff60],0x0
005a6fec  MOV ECX,dword ptr [EBP + -0x78]
005a6fef  MOV EDX,dword ptr [ECX + 0x34]
005a6ff2  MOV dword ptr [EBP + -0x6c],EDX
005a6ff5  MOV EAX,dword ptr [EBP + -0x6c]
005a6ff8  MOV dword ptr [EBP + -0x68],EAX
005a6ffb  CMP dword ptr [EBP + -0x68],0x0
005a6fff  JZ 0x005a7017
005a7001  PUSH 0x1
005a7003  MOV ECX,dword ptr [EBP + -0x68]
005a7006  MOV EDX,dword ptr [ECX]
005a7008  MOV ECX,dword ptr [EBP + -0x68]
005a700b  MOV EAX,dword ptr [EDX]
005a700d  CALL EAX
005a700f  MOV dword ptr [EBP + 0xffffff5c],EAX
005a7015  JMP 0x005a7021
005a7017  MOV dword ptr [EBP + 0xffffff5c],0x0
005a7021  MOV ECX,dword ptr [EBP + -0x78]
005a7024  MOV EDX,dword ptr [ECX + 0x38]
005a7027  MOV dword ptr [EBP + -0x74],EDX
005a702a  MOV EAX,dword ptr [EBP + -0x74]
005a702d  MOV dword ptr [EBP + -0x70],EAX
005a7030  CMP dword ptr [EBP + -0x70],0x0
005a7034  JZ 0x005a704c
005a7036  PUSH 0x1
005a7038  MOV ECX,dword ptr [EBP + -0x70]
005a703b  MOV EDX,dword ptr [ECX]
005a703d  MOV ECX,dword ptr [EBP + -0x70]
005a7040  MOV EAX,dword ptr [EDX]
005a7042  CALL EAX
005a7044  MOV dword ptr [EBP + 0xffffff58],EAX
005a704a  JMP 0x005a7056
005a704c  MOV dword ptr [EBP + 0xffffff58],0x0
005a7056  MOV dword ptr [EBP + -0x4],0xffffffff
005a705d  MOV ECX,dword ptr [EBP + -0x78]
005a7060  CALL 0x005e9e40
005a7065  MOV ECX,dword ptr [EBP + -0xc]
005a7068  MOV dword ptr FS:[0x0],ECX
005a706f  POP ECX
005a7070  MOV ESP,EBP
005a7072  POP EBP
005a7073  RET

; FUN_005f0d60  005f0d60
005f0d60  PUSH EBP
005f0d61  MOV EBP,ESP
005f0d63  PUSH -0x1
005f0d65  PUSH 0x6a9d25
005f0d6a  MOV EAX,FS:[0x0]
005f0d70  PUSH EAX
005f0d71  SUB ESP,0xe8
005f0d77  MOV EAX,[0x00781870]
005f0d7c  XOR EAX,EBP
005f0d7e  MOV dword ptr [EBP + -0x18],EAX
005f0d81  PUSH EAX
005f0d82  LEA EAX,[EBP + -0xc]
005f0d85  MOV FS:[0x0],EAX
005f0d8b  MOV dword ptr [EBP + 0xffffff28],ECX
005f0d91  MOV EAX,dword ptr [EBP + 0xffffff28]
005f0d97  MOV dword ptr [EAX],0x6d657c
005f0d9d  MOV dword ptr [EBP + -0x4],0x2
005f0da4  MOV ECX,dword ptr [0x007950ac]
005f0daa  PUSH ECX
005f0dab  PUSH 0x6d6624
005f0db0  LEA EDX,[EBP + 0xffffff64]
005f0db6  PUSH EDX
005f0db7  CALL dword ptr [0x006b2220]
005f0dbd  ADD ESP,0xc
005f0dc0  LEA EAX,[EBP + 0xffffff64]
005f0dc6  PUSH EAX
005f0dc7  CALL 0x0062fde0
005f0dcc  ADD ESP,0x4
005f0dcf  MOV ECX,dword ptr [EBP + 0xffffff28]
005f0dd5  ADD ECX,0x8
005f0dd8  CALL 0x0060c9a0
005f0ddd  TEST EAX,EAX
005f0ddf  JZ 0x005f0e4c
005f0de1  PUSH 0x0
005f0de3  MOV ECX,dword ptr [EBP + 0xffffff28]
005f0de9  ADD ECX,0x8
005f0dec  CALL 0x0060ca40
005f0df1  MOV dword ptr [EBP + -0x10],EAX
005f0df4  MOV ECX,dword ptr [EBP + -0x10]
005f0df7  PUSH ECX
005f0df8  MOV ECX,dword ptr [EBP + 0xffffff28]
005f0dfe  ADD ECX,0x8
005f0e01  CALL 0x0060c890
005f0e06  MOV EDX,dword ptr [EBP + -0x10]
005f0e09  MOV dword ptr [EBP + 0xffffff5c],EDX
005f0e0f  MOV EAX,dword ptr [EBP + 0xffffff5c]
005f0e15  MOV dword ptr [EBP + 0xffffff60],EAX
005f0e1b  CMP dword ptr [EBP + 0xffffff60],0x0
005f0e22  JZ 0x005f0e40
005f0e24  PUSH 0x1
005f0e26  MOV ECX,dword ptr [EBP + 0xffffff60]
005f0e2c  MOV EDX,dword ptr [ECX]
005f0e2e  MOV ECX,dword ptr [EBP + 0xffffff60]
005f0e34  MOV EAX,dword ptr [EDX]
005f0e36  CALL EAX
005f0e38  MOV dword ptr [EBP + 0xffffff24],EAX
005f0e3e  JMP 0x005f0e4a
005f0e40  MOV dword ptr [EBP + 0xffffff24],0x0
005f0e4a  JMP 0x005f0dcf
005f0e4c  CMP dword ptr [0x00795078],0x0
005f0e53  JZ 0x005f0ea6
005f0e55  MOV ECX,dword ptr [0x00795078]
005f0e5b  MOV dword ptr [EBP + 0xffffff54],ECX
005f0e61  MOV EDX,dword ptr [EBP + 0xffffff54]
005f0e67  MOV dword ptr [EBP + 0xffffff58],EDX
005f0e6d  CMP dword ptr [EBP + 0xffffff58],0x0
005f0e74  JZ 0x005f0e92
005f0e76  PUSH 0x1
005f0e78  MOV EAX,dword ptr [EBP + 0xffffff58]
005f0e7e  MOV EDX,dword ptr [EAX]
005f0e80  MOV ECX,dword ptr [EBP + 0xffffff58]
005f0e86  MOV EAX,dword ptr [EDX]
005f0e88  CALL EAX
005f0e8a  MOV dword ptr [EBP + 0xffffff20],EAX
005f0e90  JMP 0x005f0e9c
005f0e92  MOV dword ptr [EBP + 0xffffff20],0x0
005f0e9c  MOV dword ptr [0x00795078],0x0
005f0ea6  CMP dword ptr [0x00795088],0x0
005f0ead  JZ 0x005f0f00
005f0eaf  MOV ECX,dword ptr [0x00795088]
005f0eb5  MOV dword ptr [EBP + 0xffffff4c],ECX
005f0ebb  MOV EDX,dword ptr [EBP + 0xffffff4c]
005f0ec1  MOV dword ptr [EBP + 0xffffff50],EDX
005f0ec7  CMP dword ptr [EBP + 0xffffff50],0x0
005f0ece  JZ 0x005f0eec
005f0ed0  PUSH 0x1
005f0ed2  MOV EAX,dword ptr [EBP + 0xffffff50]
005f0ed8  MOV EDX,dword ptr [EAX]
005f0eda  MOV ECX,dword ptr [EBP + 0xffffff50]
005f0ee0  MOV EAX,dword ptr [EDX]
005f0ee2  CALL EAX
005f0ee4  MOV dword ptr [EBP + 0xffffff1c],EAX
005f0eea  JMP 0x005f0ef6
005f0eec  MOV dword ptr [EBP + 0xffffff1c],0x0
005f0ef6  MOV dword ptr [0x00795088],0x0
005f0f00  CMP dword ptr [0x0079507c],0x0
005f0f07  JZ 0x005f0f5a
005f0f09  MOV ECX,dword ptr [0x0079507c]
005f0f0f  MOV dword ptr [EBP + 0xffffff44],ECX
005f0f15  MOV EDX,dword ptr [EBP + 0xffffff44]
005f0f1b  MOV dword ptr [EBP + 0xffffff48],EDX
005f0f21  CMP dword ptr [EBP + 0xffffff48],0x0
005f0f28  JZ 0x005f0f46
005f0f2a  PUSH 0x1
005f0f2c  MOV EAX,dword ptr [EBP + 0xffffff48]
005f0f32  MOV EDX,dword ptr [EAX]
005f0f34  MOV ECX,dword ptr [EBP + 0xffffff48]
005f0f3a  MOV EAX,dword ptr [EDX]
005f0f3c  CALL EAX
005f0f3e  MOV dword ptr [EBP + 0xffffff18],EAX
005f0f44  JMP 0x005f0f50
005f0f46  MOV dword ptr [EBP + 0xffffff18],0x0
005f0f50  MOV dword ptr [0x0079507c],0x0
005f0f5a  CMP dword ptr [0x00795080],0x0
005f0f61  JZ 0x005f0fb4
005f0f63  MOV ECX,dword ptr [0x00795080]
005f0f69  MOV dword ptr [EBP + 0xffffff3c],ECX
005f0f6f  MOV EDX,dword ptr [EBP + 0xffffff3c]
005f0f75  MOV dword ptr [EBP + 0xffffff40],EDX
005f0f7b  CMP dword ptr [EBP + 0xffffff40],0x0
005f0f82  JZ 0x005f0fa0
005f0f84  PUSH 0x1
005f0f86  MOV EAX,dword ptr [EBP + 0xffffff40]
005f0f8c  MOV EDX,dword ptr [EAX]
005f0f8e  MOV ECX,dword ptr [EBP + 0xffffff40]
005f0f94  MOV EAX,dword ptr [EDX]
005f0f96  CALL EAX
005f0f98  MOV dword ptr [EBP + 0xffffff14],EAX
005f0f9e  JMP 0x005f0faa
005f0fa0  MOV dword ptr [EBP + 0xffffff14],0x0
005f0faa  MOV dword ptr [0x00795080],0x0
005f0fb4  CMP dword ptr [0x00795084],0x0
005f0fbb  JZ 0x005f100e
005f0fbd  MOV ECX,dword ptr [0x00795084]
005f0fc3  MOV dword ptr [EBP + 0xffffff34],ECX
005f0fc9  MOV EDX,dword ptr [EBP + 0xffffff34]
005f0fcf  MOV dword ptr [EBP + 0xffffff38],EDX
005f0fd5  CMP dword ptr [EBP + 0xffffff38],0x0
005f0fdc  JZ 0x005f0ffa
005f0fde  PUSH 0x1
005f0fe0  MOV EAX,dword ptr [EBP + 0xffffff38]
005f0fe6  MOV EDX,dword ptr [EAX]
005f0fe8  MOV ECX,dword ptr [EBP + 0xffffff38]
005f0fee  MOV EAX,dword ptr [EDX]
005f0ff0  CALL EAX
005f0ff2  MOV dword ptr [EBP + 0xffffff10],EAX
005f0ff8  JMP 0x005f1004
005f0ffa  MOV dword ptr [EBP + 0xffffff10],0x0
005f1004  MOV dword ptr [0x00795084],0x0
005f100e  PUSH 0x0
005f1010  MOV ECX,dword ptr [0x015e55e8]
005f1016  ADD ECX,0x4
005f1019  CALL 0x0060ca40
005f101e  MOV ECX,dword ptr [0x015e55e8]
005f1024  CMP EAX,dword ptr [ECX + 0x14]
005f1027  JZ 0x005f103d
005f1029  PUSH 0x3c
005f102b  PUSH 0x6d660c
005f1030  PUSH 0x6d65d0
005f1035  CALL 0x005e9f20
005f103a  ADD ESP,0xc
005f103d  MOV ECX,dword ptr [0x015e55e8]
005f1043  ADD ECX,0x4
005f1046  CALL 0x0060c9a0
005f104b  CMP EAX,0x1
005f104e  JLE 0x005f10a9
005f1050  PUSH 0x1
005f1052  MOV ECX,dword ptr [0x015e55e8]
005f1058  ADD ECX,0x4
005f105b  CALL 0x0060ca40
005f1060  MOV dword ptr [EBP + -0x14],EAX
005f1063  MOV EAX,dword ptr [EBP + -0x14]
005f1066  MOV dword ptr [EBP + 0xffffff2c],EAX
005f106c  MOV ECX,dword ptr [EBP + 0xffffff2c]
005f1072  MOV dword ptr [EBP + 0xffffff30],ECX
005f1078  CMP dword ptr [EBP + 0xffffff30],0x0
005f107f  JZ 0x005f109d
005f1081  PUSH 0x1
005f1083  MOV EDX,dword ptr [EBP + 0xffffff30]
005f1089  MOV EAX,dword ptr [EDX]
005f108b  MOV ECX,dword ptr [EBP + 0xffffff30]
005f1091  MOV EDX,dword ptr [EAX]
005f1093  CALL EDX
005f1095  MOV dword ptr [EBP + 0xffffff0c],EAX
005f109b  JMP 0x005f10a7
005f109d  MOV dword ptr [EBP + 0xffffff0c],0x0
005f10a7  JMP 0x005f103d
005f10a9  MOV EAX,[0x015e55e8]
005f10ae  MOV ECX,dword ptr [EAX + 0x14]
005f10b1  CALL 0x005fb0c0
005f10b6  PUSH 0x0
005f10b8  MOV ECX,dword ptr [EBP + 0xffffff28]
005f10be  CALL 0x005f1b70
005f10c3  MOV dword ptr [0x015e55e4],0x0
005f10cd  MOV byte ptr [EBP + -0x4],0x1
005f10d1  MOV ECX,dword ptr [EBP + 0xffffff28]
005f10d7  ADD ECX,0x18
005f10da  CALL 0x0060c6a0
005f10df  MOV byte ptr [EBP + -0x4],0x0
005f10e3  MOV ECX,dword ptr [EBP + 0xffffff28]
005f10e9  ADD ECX,0x8
005f10ec  CALL 0x0060c6a0
005f10f1  MOV dword ptr [EBP + -0x4],0xffffffff
005f10f8  MOV ECX,dword ptr [EBP + 0xffffff28]
005f10fe  CALL 0x005e9e40
005f1103  MOV ECX,dword ptr [EBP + -0xc]
005f1106  MOV dword ptr FS:[0x0],ECX
005f110d  POP ECX
005f110e  MOV ECX,dword ptr [EBP + -0x18]
005f1111  XOR ECX,EBP
005f1113  CALL 0x00686d72
005f1118  MOV ESP,EBP
005f111a  POP EBP
005f111b  RET

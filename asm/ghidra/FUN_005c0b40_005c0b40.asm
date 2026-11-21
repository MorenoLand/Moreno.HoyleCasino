; FUN_005c0b40  005c0b40
005c0b40  PUSH EBP
005c0b41  MOV EBP,ESP
005c0b43  PUSH -0x1
005c0b45  PUSH 0x6a844e
005c0b4a  MOV EAX,FS:[0x0]
005c0b50  PUSH EAX
005c0b51  SUB ESP,0xc4
005c0b57  MOV EAX,[0x00781870]
005c0b5c  XOR EAX,EBP
005c0b5e  PUSH EAX
005c0b5f  LEA EAX,[EBP + -0xc]
005c0b62  MOV FS:[0x0],EAX
005c0b68  MOV dword ptr [EBP + 0xffffff58],ECX
005c0b6e  MOV EAX,dword ptr [EBP + 0xffffff58]
005c0b74  MOV dword ptr [EAX],0x6d1d3c
005c0b7a  MOV dword ptr [EBP + -0x4],0x2
005c0b81  MOV dword ptr [EBP + -0x10],0x0
005c0b88  JMP 0x005c0b93
005c0b8a  MOV ECX,dword ptr [EBP + -0x10]
005c0b8d  ADD ECX,0x1
005c0b90  MOV dword ptr [EBP + -0x10],ECX
005c0b93  MOV EDX,dword ptr [EBP + 0xffffff58]
005c0b99  ADD EDX,0x28
005c0b9c  MOV dword ptr [EBP + -0x58],EDX
005c0b9f  MOV EAX,dword ptr [EBP + -0x58]
005c0ba2  CMP dword ptr [EAX + 0x4],0x0
005c0ba6  JNZ 0x005c0bb4
005c0ba8  MOV dword ptr [EBP + 0xffffff54],0x0
005c0bb2  JMP 0x005c0bc9
005c0bb4  MOV ECX,dword ptr [EBP + -0x58]
005c0bb7  MOV EDX,dword ptr [EBP + -0x58]
005c0bba  MOV EAX,dword ptr [ECX + 0x8]
005c0bbd  SUB EAX,dword ptr [EDX + 0x4]
005c0bc0  SAR EAX,0x2
005c0bc3  MOV dword ptr [EBP + 0xffffff54],EAX
005c0bc9  MOV ECX,dword ptr [EBP + -0x10]
005c0bcc  CMP ECX,dword ptr [EBP + 0xffffff54]
005c0bd2  JGE 0x005c0d10
005c0bd8  MOV EDX,dword ptr [EBP + 0xffffff58]
005c0bde  ADD EDX,0x28
005c0be1  MOV dword ptr [EBP + -0x5c],EDX
005c0be4  MOV EAX,dword ptr [EBP + -0x5c]
005c0be7  CMP dword ptr [EAX + 0x4],0x0
005c0beb  JNZ 0x005c0bf9
005c0bed  MOV dword ptr [EBP + 0xffffff50],0x0
005c0bf7  JMP 0x005c0c0e
005c0bf9  MOV ECX,dword ptr [EBP + -0x5c]
005c0bfc  MOV EDX,dword ptr [EBP + -0x5c]
005c0bff  MOV EAX,dword ptr [ECX + 0x8]
005c0c02  SUB EAX,dword ptr [EDX + 0x4]
005c0c05  SAR EAX,0x2
005c0c08  MOV dword ptr [EBP + 0xffffff50],EAX
005c0c0e  MOV ECX,dword ptr [EBP + -0x10]
005c0c11  CMP ECX,dword ptr [EBP + 0xffffff50]
005c0c17  JC 0x005c0c1f
005c0c19  CALL dword ptr [0x006b2274]
005c0c1f  MOV EDX,dword ptr [EBP + -0x5c]
005c0c22  MOV EAX,dword ptr [EDX + 0x4]
005c0c25  MOV ECX,dword ptr [EBP + -0x10]
005c0c28  CMP dword ptr [EAX + ECX*0x4],0x0
005c0c2c  JZ 0x005c0cb4
005c0c32  MOV EDX,dword ptr [EBP + 0xffffff58]
005c0c38  ADD EDX,0x28
005c0c3b  MOV dword ptr [EBP + -0x60],EDX
005c0c3e  MOV EAX,dword ptr [EBP + -0x60]
005c0c41  CMP dword ptr [EAX + 0x4],0x0
005c0c45  JNZ 0x005c0c53
005c0c47  MOV dword ptr [EBP + 0xffffff4c],0x0
005c0c51  JMP 0x005c0c68
005c0c53  MOV ECX,dword ptr [EBP + -0x60]
005c0c56  MOV EDX,dword ptr [EBP + -0x60]
005c0c59  MOV EAX,dword ptr [ECX + 0x8]
005c0c5c  SUB EAX,dword ptr [EDX + 0x4]
005c0c5f  SAR EAX,0x2
005c0c62  MOV dword ptr [EBP + 0xffffff4c],EAX
005c0c68  MOV ECX,dword ptr [EBP + -0x10]
005c0c6b  CMP ECX,dword ptr [EBP + 0xffffff4c]
005c0c71  JC 0x005c0c79
005c0c73  CALL dword ptr [0x006b2274]
005c0c79  MOV EDX,dword ptr [EBP + -0x60]
005c0c7c  MOV EAX,dword ptr [EDX + 0x4]
005c0c7f  MOV ECX,dword ptr [EBP + -0x10]
005c0c82  MOV EDX,dword ptr [EAX + ECX*0x4]
005c0c85  MOV dword ptr [EBP + -0x2c],EDX
005c0c88  MOV EAX,dword ptr [EBP + -0x2c]
005c0c8b  MOV dword ptr [EBP + -0x28],EAX
005c0c8e  CMP dword ptr [EBP + -0x28],0x0
005c0c92  JZ 0x005c0caa
005c0c94  PUSH 0x1
005c0c96  MOV ECX,dword ptr [EBP + -0x28]
005c0c99  MOV EDX,dword ptr [ECX]
005c0c9b  MOV ECX,dword ptr [EBP + -0x28]
005c0c9e  MOV EAX,dword ptr [EDX]
005c0ca0  CALL EAX
005c0ca2  MOV dword ptr [EBP + 0xffffff48],EAX
005c0ca8  JMP 0x005c0cb4
005c0caa  MOV dword ptr [EBP + 0xffffff48],0x0
005c0cb4  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0cba  ADD ECX,0x28
005c0cbd  MOV dword ptr [EBP + -0x64],ECX
005c0cc0  MOV EDX,dword ptr [EBP + -0x64]
005c0cc3  CMP dword ptr [EDX + 0x4],0x0
005c0cc7  JNZ 0x005c0cd5
005c0cc9  MOV dword ptr [EBP + 0xffffff44],0x0
005c0cd3  JMP 0x005c0cea
005c0cd5  MOV EAX,dword ptr [EBP + -0x64]
005c0cd8  MOV ECX,dword ptr [EBP + -0x64]
005c0cdb  MOV EDX,dword ptr [EAX + 0x8]
005c0cde  SUB EDX,dword ptr [ECX + 0x4]
005c0ce1  SAR EDX,0x2
005c0ce4  MOV dword ptr [EBP + 0xffffff44],EDX
005c0cea  MOV EAX,dword ptr [EBP + -0x10]
005c0ced  CMP EAX,dword ptr [EBP + 0xffffff44]
005c0cf3  JC 0x005c0cfb
005c0cf5  CALL dword ptr [0x006b2274]
005c0cfb  MOV ECX,dword ptr [EBP + -0x64]
005c0cfe  MOV EDX,dword ptr [ECX + 0x4]
005c0d01  MOV EAX,dword ptr [EBP + -0x10]
005c0d04  MOV dword ptr [EDX + EAX*0x4],0x0
005c0d0b  JMP 0x005c0b8a
005c0d10  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0d16  MOV EDX,dword ptr [ECX + 0x38]
005c0d19  MOV dword ptr [EBP + -0x24],EDX
005c0d1c  MOV EAX,dword ptr [EBP + 0xffffff58]
005c0d22  MOV ECX,dword ptr [EAX + 0x3c]
005c0d25  MOV dword ptr [EBP + -0x20],ECX
005c0d28  MOV EDX,dword ptr [EBP + 0xffffff58]
005c0d2e  MOV EAX,dword ptr [EDX + 0x40]
005c0d31  MOV dword ptr [EBP + -0x1c],EAX
005c0d34  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0d3a  MOV EDX,dword ptr [ECX + 0x44]
005c0d3d  MOV dword ptr [EBP + -0x18],EDX
005c0d40  MOV EAX,dword ptr [EBP + 0xffffff58]
005c0d46  MOV ECX,dword ptr [EAX + 0x48]
005c0d49  MOV dword ptr [EBP + -0x14],ECX
005c0d4c  MOV dword ptr [EBP + -0x10],0x0
005c0d53  JMP 0x005c0d5e
005c0d55  MOV EDX,dword ptr [EBP + -0x10]
005c0d58  ADD EDX,0x1
005c0d5b  MOV dword ptr [EBP + -0x10],EDX
005c0d5e  CMP dword ptr [EBP + -0x10],0x5
005c0d62  JGE 0x005c0da6
005c0d64  MOV EAX,dword ptr [EBP + -0x10]
005c0d67  CMP dword ptr [EBP + EAX*0x4 + -0x24],0x0
005c0d6c  JZ 0x005c0da4
005c0d6e  MOV ECX,dword ptr [EBP + -0x10]
005c0d71  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x24]
005c0d75  MOV dword ptr [EBP + -0x34],EDX
005c0d78  MOV EAX,dword ptr [EBP + -0x34]
005c0d7b  MOV dword ptr [EBP + -0x30],EAX
005c0d7e  CMP dword ptr [EBP + -0x30],0x0
005c0d82  JZ 0x005c0d9a
005c0d84  PUSH 0x1
005c0d86  MOV ECX,dword ptr [EBP + -0x30]
005c0d89  MOV EDX,dword ptr [ECX]
005c0d8b  MOV ECX,dword ptr [EBP + -0x30]
005c0d8e  MOV EAX,dword ptr [EDX]
005c0d90  CALL EAX
005c0d92  MOV dword ptr [EBP + 0xffffff40],EAX
005c0d98  JMP 0x005c0da4
005c0d9a  MOV dword ptr [EBP + 0xffffff40],0x0
005c0da4  JMP 0x005c0d55
005c0da6  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0dac  CMP dword ptr [ECX + 0x4c],0x0
005c0db0  JZ 0x005c0dea
005c0db2  MOV EDX,dword ptr [EBP + 0xffffff58]
005c0db8  MOV EAX,dword ptr [EDX + 0x4c]
005c0dbb  MOV dword ptr [EBP + -0x3c],EAX
005c0dbe  MOV ECX,dword ptr [EBP + -0x3c]
005c0dc1  MOV dword ptr [EBP + -0x38],ECX
005c0dc4  CMP dword ptr [EBP + -0x38],0x0
005c0dc8  JZ 0x005c0de0
005c0dca  PUSH 0x1
005c0dcc  MOV EDX,dword ptr [EBP + -0x38]
005c0dcf  MOV EAX,dword ptr [EDX]
005c0dd1  MOV ECX,dword ptr [EBP + -0x38]
005c0dd4  MOV EDX,dword ptr [EAX]
005c0dd6  CALL EDX
005c0dd8  MOV dword ptr [EBP + 0xffffff3c],EAX
005c0dde  JMP 0x005c0dea
005c0de0  MOV dword ptr [EBP + 0xffffff3c],0x0
005c0dea  MOV EAX,dword ptr [EBP + 0xffffff58]
005c0df0  CMP dword ptr [EAX + 0x10],0x0
005c0df4  JZ 0x005c0e2e
005c0df6  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0dfc  MOV EDX,dword ptr [ECX + 0x10]
005c0dff  MOV dword ptr [EBP + -0x44],EDX
005c0e02  MOV EAX,dword ptr [EBP + -0x44]
005c0e05  MOV dword ptr [EBP + -0x40],EAX
005c0e08  CMP dword ptr [EBP + -0x40],0x0
005c0e0c  JZ 0x005c0e24
005c0e0e  PUSH 0x1
005c0e10  MOV ECX,dword ptr [EBP + -0x40]
005c0e13  MOV EDX,dword ptr [ECX]
005c0e15  MOV ECX,dword ptr [EBP + -0x40]
005c0e18  MOV EAX,dword ptr [EDX]
005c0e1a  CALL EAX
005c0e1c  MOV dword ptr [EBP + 0xffffff38],EAX
005c0e22  JMP 0x005c0e2e
005c0e24  MOV dword ptr [EBP + 0xffffff38],0x0
005c0e2e  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0e34  CMP dword ptr [ECX + 0x14],0x0
005c0e38  JZ 0x005c0e72
005c0e3a  MOV EDX,dword ptr [EBP + 0xffffff58]
005c0e40  MOV EAX,dword ptr [EDX + 0x14]
005c0e43  MOV dword ptr [EBP + -0x4c],EAX
005c0e46  MOV ECX,dword ptr [EBP + -0x4c]
005c0e49  MOV dword ptr [EBP + -0x48],ECX
005c0e4c  CMP dword ptr [EBP + -0x48],0x0
005c0e50  JZ 0x005c0e68
005c0e52  PUSH 0x1
005c0e54  MOV EDX,dword ptr [EBP + -0x48]
005c0e57  MOV EAX,dword ptr [EDX]
005c0e59  MOV ECX,dword ptr [EBP + -0x48]
005c0e5c  MOV EDX,dword ptr [EAX]
005c0e5e  CALL EDX
005c0e60  MOV dword ptr [EBP + 0xffffff34],EAX
005c0e66  JMP 0x005c0e72
005c0e68  MOV dword ptr [EBP + 0xffffff34],0x0
005c0e72  MOV EAX,dword ptr [EBP + 0xffffff58]
005c0e78  CMP dword ptr [EAX + 0x4],0x0
005c0e7c  JZ 0x005c0eb6
005c0e7e  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0e84  MOV EDX,dword ptr [ECX + 0x4]
005c0e87  MOV dword ptr [EBP + -0x54],EDX
005c0e8a  MOV EAX,dword ptr [EBP + -0x54]
005c0e8d  MOV dword ptr [EBP + -0x50],EAX
005c0e90  CMP dword ptr [EBP + -0x50],0x0
005c0e94  JZ 0x005c0eac
005c0e96  PUSH 0x1
005c0e98  MOV ECX,dword ptr [EBP + -0x50]
005c0e9b  MOV EDX,dword ptr [ECX]
005c0e9d  MOV ECX,dword ptr [EBP + -0x50]
005c0ea0  MOV EAX,dword ptr [EDX]
005c0ea2  CALL EAX
005c0ea4  MOV dword ptr [EBP + 0xffffff30],EAX
005c0eaa  JMP 0x005c0eb6
005c0eac  MOV dword ptr [EBP + 0xffffff30],0x0
005c0eb6  MOV byte ptr [EBP + -0x4],0x1
005c0eba  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0ec0  ADD ECX,0x28
005c0ec3  MOV dword ptr [EBP + 0xffffff7c],ECX
005c0ec9  MOV ECX,dword ptr [EBP + 0xffffff7c]
005c0ecf  CALL 0x005be450
005c0ed4  MOV byte ptr [EBP + -0x4],0x0
005c0ed8  MOV EDX,dword ptr [EBP + 0xffffff58]
005c0ede  ADD EDX,0x18
005c0ee1  MOV dword ptr [EBP + 0xffffff5c],EDX
005c0ee7  MOV ECX,dword ptr [EBP + 0xffffff5c]
005c0eed  CALL 0x005be450
005c0ef2  MOV dword ptr [EBP + -0x4],0xffffffff
005c0ef9  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0eff  CALL 0x005e9e40
005c0f04  MOV ECX,dword ptr [EBP + -0xc]
005c0f07  MOV dword ptr FS:[0x0],ECX
005c0f0e  POP ECX
005c0f0f  MOV ESP,EBP
005c0f11  POP EBP
005c0f12  RET

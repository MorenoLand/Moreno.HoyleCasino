; FUN_005d3b10  005d3b10
005d3b10  PUSH EBP
005d3b11  MOV EBP,ESP
005d3b13  PUSH -0x1
005d3b15  PUSH 0x6a8eba
005d3b1a  MOV EAX,FS:[0x0]
005d3b20  PUSH EAX
005d3b21  SUB ESP,0x9c
005d3b27  MOV EAX,[0x00781870]
005d3b2c  XOR EAX,EBP
005d3b2e  MOV dword ptr [EBP + -0x60],EAX
005d3b31  PUSH ESI
005d3b32  PUSH EAX
005d3b33  LEA EAX,[EBP + -0xc]
005d3b36  MOV FS:[0x0],EAX
005d3b3c  MOV dword ptr [EBP + 0xffffff70],ECX
005d3b42  MOV dword ptr [EBP + -0x5c],0x0
005d3b49  MOV dword ptr [EBP + -0x30],0x0
005d3b50  MOV dword ptr [EBP + -0x2c],0xb
005d3b57  MOV dword ptr [EBP + -0x28],0x2
005d3b5e  MOV dword ptr [EBP + -0x24],0x10
005d3b65  MOV dword ptr [EBP + -0x20],0xb
005d3b6c  MOV dword ptr [EBP + -0x1c],0xa
005d3b73  MOV dword ptr [EBP + -0x18],0x7
005d3b7a  MOV dword ptr [EBP + -0x14],0x11
005d3b81  MOV dword ptr [EBP + -0x10],0x18
005d3b88  MOV dword ptr [EBP + -0x54],0xffffffff
005d3b8f  MOV dword ptr [EBP + -0x50],0x30e878
005d3b96  MOV dword ptr [EBP + -0x4c],0x30e864
005d3b9d  MOV dword ptr [EBP + -0x48],0x30e83c
005d3ba4  MOV dword ptr [EBP + -0x44],0x30e850
005d3bab  MOV dword ptr [EBP + -0x40],0x30e88c
005d3bb2  MOV dword ptr [EBP + -0x3c],0x30e86e
005d3bb9  MOV dword ptr [EBP + -0x38],0x30e828
005d3bc0  MOV dword ptr [EBP + -0x34],0x30e80a
005d3bc7  MOV dword ptr [EBP + -0x58],0x0
005d3bce  JMP 0x005d3bd9
005d3bd0  MOV EAX,dword ptr [EBP + -0x58]
005d3bd3  ADD EAX,0x1
005d3bd6  MOV dword ptr [EBP + -0x58],EAX
005d3bd9  CMP dword ptr [EBP + -0x58],0x19
005d3bdd  JGE 0x005d3c63
005d3be3  MOV ECX,dword ptr [EBP + -0x58]
005d3be6  ADD ECX,0xa
005d3be9  PUSH ECX
005d3bea  MOV EDX,dword ptr [0x0162ee84]
005d3bf0  MOV ECX,dword ptr [EDX + 0x14]
005d3bf3  CALL 0x005fb2b0
005d3bf8  TEST EAX,EAX
005d3bfa  JZ 0x005d3c5e
005d3bfc  PUSH 0x0
005d3bfe  MOV EAX,dword ptr [EBP + -0x58]
005d3c01  ADD EAX,0xa
005d3c04  PUSH EAX
005d3c05  MOV ECX,dword ptr [0x0162ee84]
005d3c0b  MOV ECX,dword ptr [ECX + 0x14]
005d3c0e  CALL 0x005fb2b0
005d3c13  MOV ECX,EAX
005d3c15  CALL 0x005f5d50
005d3c1a  MOV EDX,dword ptr [EBP + -0x58]
005d3c1d  ADD EDX,0xa
005d3c20  PUSH EDX
005d3c21  MOV EAX,[0x0162ee84]
005d3c26  MOV ECX,dword ptr [EAX + 0x14]
005d3c29  CALL 0x005fb2b0
005d3c2e  MOV dword ptr [EBP + 0xffffff6c],EAX
005d3c34  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d3c3a  MOV EDX,dword ptr [ECX]
005d3c3c  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d3c42  MOV EAX,dword ptr [EDX + 0x70]
005d3c45  CALL EAX
005d3c47  MOV ECX,dword ptr [EBP + -0x58]
005d3c4a  ADD ECX,0xa
005d3c4d  PUSH ECX
005d3c4e  PUSH 0x0
005d3c50  MOV EDX,dword ptr [0x0162ee84]
005d3c56  MOV ECX,dword ptr [EDX + 0x14]
005d3c59  CALL 0x005fbc80
005d3c5e  JMP 0x005d3bd0
005d3c63  MOV dword ptr [EBP + -0x58],0x0
005d3c6a  JMP 0x005d3c75
005d3c6c  MOV EAX,dword ptr [EBP + -0x58]
005d3c6f  ADD EAX,0x1
005d3c72  MOV dword ptr [EBP + -0x58],EAX
005d3c75  MOV ECX,dword ptr [EBP + 0xffffff70]
005d3c7b  MOV EDX,dword ptr [ECX + 0x80]
005d3c81  MOV EAX,dword ptr [EBP + -0x58]
005d3c84  CMP EAX,dword ptr [EBP + EDX*0x4 + -0x30]
005d3c88  JGE 0x005d3d4c
005d3c8e  PUSH 0x184
005d3c93  CALL 0x00686d82
005d3c98  ADD ESP,0x4
005d3c9b  MOV dword ptr [EBP + 0xffffff7c],EAX
005d3ca1  MOV dword ptr [EBP + -0x4],0x0
005d3ca8  CMP dword ptr [EBP + 0xffffff7c],0x0
005d3caf  JZ 0x005d3cc4
005d3cb1  MOV ECX,dword ptr [EBP + 0xffffff7c]
005d3cb7  CALL 0x005f5bf0
005d3cbc  MOV dword ptr [EBP + 0xffffff68],EAX
005d3cc2  JMP 0x005d3cce
005d3cc4  MOV dword ptr [EBP + 0xffffff68],0x0
005d3cce  MOV ECX,dword ptr [EBP + 0xffffff68]
005d3cd4  MOV dword ptr [EBP + -0x80],ECX
005d3cd7  MOV dword ptr [EBP + -0x4],0xffffffff
005d3cde  PUSH 0x0
005d3ce0  PUSH 0xff
005d3ce5  PUSH 0x0
005d3ce7  PUSH 0x1
005d3ce9  PUSH 0x0
005d3ceb  PUSH 0x0
005d3ced  MOV EDX,dword ptr [EBP + 0xffffff70]
005d3cf3  MOV EAX,dword ptr [EDX + 0x80]
005d3cf9  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x54]
005d3cfd  ADD ECX,dword ptr [EBP + -0x58]
005d3d00  PUSH ECX
005d3d01  MOV EDX,dword ptr [EBP + -0x58]
005d3d04  ADD EDX,0xa
005d3d07  PUSH EDX
005d3d08  MOV EAX,dword ptr [EBP + -0x80]
005d3d0b  PUSH EAX
005d3d0c  MOV ECX,dword ptr [0x0162ee84]
005d3d12  MOV ECX,dword ptr [ECX + 0x14]
005d3d15  CALL 0x005f9ce0
005d3d1a  MOV EDX,dword ptr [EBP + -0x58]
005d3d1d  ADD EDX,0xa
005d3d20  PUSH EDX
005d3d21  MOV EAX,[0x0162ee84]
005d3d26  MOV ECX,dword ptr [EAX + 0x14]
005d3d29  CALL 0x005fb2b0
005d3d2e  MOV dword ptr [EBP + 0xffffff64],EAX
005d3d34  MOV ECX,dword ptr [EBP + 0xffffff64]
005d3d3a  MOV EDX,dword ptr [ECX]
005d3d3c  MOV ECX,dword ptr [EBP + 0xffffff64]
005d3d42  MOV EAX,dword ptr [EDX + 0x70]
005d3d45  CALL EAX
005d3d47  JMP 0x005d3c6c
005d3d4c  MOV ECX,dword ptr [EBP + 0xffffff70]
005d3d52  MOV EDX,dword ptr [ECX + 0x80]
005d3d58  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x30]
005d3d5c  CDQ
005d3d5d  MOV ECX,0x3
005d3d62  IDIV ECX
005d3d64  PUSH EAX
005d3d65  PUSH 0x1
005d3d67  CALL 0x0062fc30
005d3d6c  ADD ESP,0x8
005d3d6f  MOV dword ptr [EBP + -0x5c],EAX
005d3d72  MOV dword ptr [EBP + -0x58],0x0
005d3d79  JMP 0x005d3d84
005d3d7b  MOV EDX,dword ptr [EBP + -0x58]
005d3d7e  ADD EDX,0x1
005d3d81  MOV dword ptr [EBP + -0x58],EDX
005d3d84  CMP dword ptr [EBP + -0x58],0x19
005d3d88  JGE 0x005d3d94
005d3d8a  MOV EAX,dword ptr [EBP + -0x58]
005d3d8d  MOV byte ptr [EBP + EAX*0x1 + -0x7c],0x0
005d3d92  JMP 0x005d3d7b
005d3d94  MOV dword ptr [EBP + -0x58],0x0
005d3d9b  JMP 0x005d3da6
005d3d9d  MOV ECX,dword ptr [EBP + -0x58]
005d3da0  ADD ECX,0x1
005d3da3  MOV dword ptr [EBP + -0x58],ECX
005d3da6  MOV EDX,dword ptr [EBP + -0x58]
005d3da9  CMP EDX,dword ptr [EBP + -0x5c]
005d3dac  JGE 0x005d3dce
005d3dae  MOV EAX,dword ptr [EBP + 0xffffff70]
005d3db4  MOV ECX,dword ptr [EAX + 0x80]
005d3dba  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x30]
005d3dbe  PUSH EDX
005d3dbf  CALL 0x0062fbf0
005d3dc4  ADD ESP,0x4
005d3dc7  MOV byte ptr [EBP + EAX*0x1 + -0x7c],0x1
005d3dcc  JMP 0x005d3d9d
005d3dce  MOV dword ptr [EBP + -0x58],0x0
005d3dd5  JMP 0x005d3de0
005d3dd7  MOV EAX,dword ptr [EBP + -0x58]
005d3dda  ADD EAX,0x1
005d3ddd  MOV dword ptr [EBP + -0x58],EAX
005d3de0  MOV ECX,dword ptr [EBP + 0xffffff70]
005d3de6  MOV EDX,dword ptr [ECX + 0x80]
005d3dec  MOV EAX,dword ptr [EBP + -0x58]
005d3def  CMP EAX,dword ptr [EBP + EDX*0x4 + -0x30]
005d3df3  JGE 0x005d3f0d
005d3df9  MOV ECX,dword ptr [EBP + -0x58]
005d3dfc  MOVZX EDX,byte ptr [EBP + ECX*0x1 + -0x7c]
005d3e01  TEST EDX,EDX
005d3e03  JZ 0x005d3f08
005d3e09  MOV EAX,dword ptr [EBP + -0x58]
005d3e0c  ADD EAX,0xa
005d3e0f  PUSH EAX
005d3e10  MOV ECX,dword ptr [0x0162ee84]
005d3e16  MOV ECX,dword ptr [ECX + 0x14]
005d3e19  CALL 0x005fb2b0
005d3e1e  MOV dword ptr [EBP + 0xffffff60],EAX
005d3e24  PUSH 0x0
005d3e26  MOV EDX,dword ptr [EBP + 0xffffff60]
005d3e2c  MOV EAX,dword ptr [EDX]
005d3e2e  MOV ECX,dword ptr [EBP + 0xffffff60]
005d3e34  MOV EDX,dword ptr [EAX + 0xb0]
005d3e3a  CALL EDX
005d3e3c  MOV EAX,dword ptr [EBP + -0x58]
005d3e3f  ADD EAX,0xa
005d3e42  PUSH EAX
005d3e43  MOV ECX,dword ptr [0x0162ee84]
005d3e49  MOV ECX,dword ptr [ECX + 0x14]
005d3e4c  CALL 0x005fb2b0
005d3e51  MOV dword ptr [EBP + 0xffffff5c],EAX
005d3e57  MOV EDX,dword ptr [EBP + 0xffffff5c]
005d3e5d  MOV EAX,dword ptr [EDX]
005d3e5f  MOV ECX,dword ptr [EBP + 0xffffff5c]
005d3e65  MOV EDX,dword ptr [EAX + 0x74]
005d3e68  CALL EDX
005d3e6a  PUSH 0x8
005d3e6c  PUSH 0x4
005d3e6e  CALL 0x0062fc30
005d3e73  ADD ESP,0x8
005d3e76  MOV ESI,EAX
005d3e78  MOV EAX,dword ptr [EBP + -0x58]
005d3e7b  ADD EAX,0xa
005d3e7e  PUSH EAX
005d3e7f  MOV ECX,dword ptr [0x0162ee84]
005d3e85  MOV ECX,dword ptr [ECX + 0x14]
005d3e88  CALL 0x005fb2b0
005d3e8d  MOV dword ptr [EAX + 0x178],ESI
005d3e93  PUSH 0x20
005d3e95  CALL 0x00686d82
005d3e9a  ADD ESP,0x4
005d3e9d  MOV dword ptr [EBP + 0xffffff74],EAX
005d3ea3  MOV dword ptr [EBP + -0x4],0x1
005d3eaa  CMP dword ptr [EBP + 0xffffff74],0x0
005d3eb1  JZ 0x005d3ec8
005d3eb3  PUSH 0x0
005d3eb5  MOV ECX,dword ptr [EBP + 0xffffff74]
005d3ebb  CALL 0x006010a0
005d3ec0  MOV dword ptr [EBP + 0xffffff58],EAX
005d3ec6  JMP 0x005d3ed2
005d3ec8  MOV dword ptr [EBP + 0xffffff58],0x0
005d3ed2  MOV EDX,dword ptr [EBP + 0xffffff58]
005d3ed8  MOV dword ptr [EBP + 0xffffff78],EDX
005d3ede  MOV dword ptr [EBP + -0x4],0xffffffff
005d3ee5  MOV EAX,dword ptr [EBP + 0xffffff78]
005d3eeb  PUSH EAX
005d3eec  MOV ECX,dword ptr [EBP + -0x58]
005d3eef  ADD ECX,0xa
005d3ef2  PUSH ECX
005d3ef3  MOV EDX,dword ptr [0x0162ee84]
005d3ef9  MOV ECX,dword ptr [EDX + 0x14]
005d3efc  CALL 0x005fb2b0
005d3f01  MOV ECX,EAX
005d3f03  CALL 0x005f5d50
005d3f08  JMP 0x005d3dd7
005d3f0d  MOV ECX,dword ptr [EBP + -0xc]
005d3f10  MOV dword ptr FS:[0x0],ECX
005d3f17  POP ECX
005d3f18  POP ESI
005d3f19  MOV ECX,dword ptr [EBP + -0x60]
005d3f1c  XOR ECX,EBP
005d3f1e  CALL 0x00686d72
005d3f23  MOV ESP,EBP
005d3f25  POP EBP
005d3f26  RET

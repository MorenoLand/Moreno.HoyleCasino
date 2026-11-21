; FUN_005d7bd0  005d7bd0
005d7bd0  PUSH EBP
005d7bd1  MOV EBP,ESP
005d7bd3  PUSH -0x1
005d7bd5  PUSH 0x6a9138
005d7bda  MOV EAX,FS:[0x0]
005d7be0  PUSH EAX
005d7be1  SUB ESP,0x70
005d7be4  MOV EAX,[0x00781870]
005d7be9  XOR EAX,EBP
005d7beb  PUSH EAX
005d7bec  LEA EAX,[EBP + -0xc]
005d7bef  MOV FS:[0x0],EAX
005d7bf5  MOV dword ptr [EBP + -0x58],ECX
005d7bf8  MOV EAX,dword ptr [EBP + -0x58]
005d7bfb  MOV dword ptr [EAX],0x6d3f7c
005d7c01  MOV dword ptr [EBP + -0x4],0x0
005d7c08  MOV dword ptr [EBP + -0x10],0x0
005d7c0f  JMP 0x005d7c1a
005d7c11  MOV ECX,dword ptr [EBP + -0x10]
005d7c14  ADD ECX,0x1
005d7c17  MOV dword ptr [EBP + -0x10],ECX
005d7c1a  MOV EDX,dword ptr [0x0162ee84]
005d7c20  MOV EAX,dword ptr [EDX]
005d7c22  MOV ECX,dword ptr [0x0162ee84]
005d7c28  MOV EDX,dword ptr [EAX + 0x10c]
005d7c2e  CALL EDX
005d7c30  CMP dword ptr [EBP + -0x10],EAX
005d7c33  JGE 0x005d7caf
005d7c35  MOV EAX,dword ptr [EBP + -0x10]
005d7c38  PUSH EAX
005d7c39  CALL 0x005dcb00
005d7c3e  ADD ESP,0x4
005d7c41  MOV dword ptr [EBP + -0x54],EAX
005d7c44  MOV ECX,dword ptr [EBP + -0x54]
005d7c47  CALL 0x0063aac0
005d7c4c  MOV ECX,dword ptr [EAX]
005d7c4e  MOV dword ptr [EBP + -0x4c],ECX
005d7c51  CMP dword ptr [EBP + -0x4c],0x2
005d7c55  JZ 0x005d7c73
005d7c57  MOV ECX,dword ptr [EBP + -0x54]
005d7c5a  CALL 0x0063aac0
005d7c5f  MOV EDX,dword ptr [EAX]
005d7c61  MOV dword ptr [EBP + -0x50],EDX
005d7c64  CMP dword ptr [EBP + -0x50],0x3
005d7c68  JZ 0x005d7c73
005d7c6a  MOV dword ptr [EBP + -0x5c],0x0
005d7c71  JMP 0x005d7c7a
005d7c73  MOV dword ptr [EBP + -0x5c],0x1
005d7c7a  MOVZX EAX,byte ptr [EBP + -0x5c]
005d7c7e  TEST EAX,EAX
005d7c80  JZ 0x005d7caa
005d7c82  MOV ECX,dword ptr [EBP + -0x10]
005d7c85  PUSH ECX
005d7c86  CALL 0x005dcb00
005d7c8b  ADD ESP,0x4
005d7c8e  CMP dword ptr [EAX + 0x4b4],0x0
005d7c95  JZ 0x005d7caa
005d7c97  MOV EDX,dword ptr [EBP + -0x10]
005d7c9a  PUSH EDX
005d7c9b  CALL 0x005dcb00
005d7ca0  ADD ESP,0x4
005d7ca3  MOV ECX,EAX
005d7ca5  CALL 0x005d74b0
005d7caa  JMP 0x005d7c11
005d7caf  MOV ECX,dword ptr [EBP + -0x58]
005d7cb2  CALL 0x005da7b0
005d7cb7  MOVZX EAX,AL
005d7cba  TEST EAX,EAX
005d7cbc  JZ 0x005d7ccb
005d7cbe  MOV ECX,dword ptr [0x007947e0]
005d7cc4  MOV byte ptr [ECX + 0x4ee8],0x0
005d7ccb  MOV ECX,dword ptr [EBP + -0x58]
005d7cce  CALL 0x005dbf30
005d7cd3  MOV ECX,dword ptr [EBP + -0x58]
005d7cd6  CALL 0x005db890
005d7cdb  MOV ECX,dword ptr [EBP + -0x58]
005d7cde  CALL 0x005db9b0
005d7ce3  PUSH 0x0
005d7ce5  PUSH -0x1
005d7ce7  PUSH 0x0
005d7ce9  MOV ECX,dword ptr [EBP + -0x58]
005d7cec  CALL 0x005d8a20
005d7cf1  MOV dword ptr [EBP + -0x10],0x0
005d7cf8  JMP 0x005d7d03
005d7cfa  MOV EDX,dword ptr [EBP + -0x10]
005d7cfd  ADD EDX,0x1
005d7d00  MOV dword ptr [EBP + -0x10],EDX
005d7d03  MOV EAX,[0x0162ee84]
005d7d08  MOV EDX,dword ptr [EAX]
005d7d0a  MOV ECX,dword ptr [0x0162ee84]
005d7d10  MOV EAX,dword ptr [EDX + 0x10c]
005d7d16  CALL EAX
005d7d18  CMP dword ptr [EBP + -0x10],EAX
005d7d1b  JGE 0x005d7dc1
005d7d21  MOV ECX,dword ptr [EBP + -0x10]
005d7d24  PUSH ECX
005d7d25  CALL 0x005dcb00
005d7d2a  ADD ESP,0x4
005d7d2d  CMP dword ptr [EAX + 0x49c],0x0
005d7d34  JZ 0x005d7da9
005d7d36  MOV EDX,dword ptr [EBP + -0x10]
005d7d39  PUSH EDX
005d7d3a  CALL 0x005dcb00
005d7d3f  ADD ESP,0x4
005d7d42  MOV EAX,dword ptr [EAX + 0x49c]
005d7d48  MOV dword ptr [EBP + -0x60],EAX
005d7d4b  MOV ECX,dword ptr [EBP + -0x60]
005d7d4e  MOV EDX,dword ptr [ECX]
005d7d50  MOV ECX,dword ptr [EBP + -0x60]
005d7d53  MOV EAX,dword ptr [EDX + 0x70]
005d7d56  CALL EAX
005d7d58  MOV ECX,dword ptr [EBP + -0x10]
005d7d5b  PUSH ECX
005d7d5c  CALL 0x005dcb00
005d7d61  ADD ESP,0x4
005d7d64  MOV EDX,dword ptr [EAX + 0x49c]
005d7d6a  MOV dword ptr [EBP + -0x18],EDX
005d7d6d  MOV EAX,dword ptr [EBP + -0x18]
005d7d70  MOV dword ptr [EBP + -0x14],EAX
005d7d73  CMP dword ptr [EBP + -0x14],0x0
005d7d77  JZ 0x005d7d8c
005d7d79  PUSH 0x1
005d7d7b  MOV ECX,dword ptr [EBP + -0x14]
005d7d7e  MOV EDX,dword ptr [ECX]
005d7d80  MOV ECX,dword ptr [EBP + -0x14]
005d7d83  MOV EAX,dword ptr [EDX]
005d7d85  CALL EAX
005d7d87  MOV dword ptr [EBP + -0x64],EAX
005d7d8a  JMP 0x005d7d93
005d7d8c  MOV dword ptr [EBP + -0x64],0x0
005d7d93  MOV ECX,dword ptr [EBP + -0x10]
005d7d96  PUSH ECX
005d7d97  CALL 0x005dcb00
005d7d9c  ADD ESP,0x4
005d7d9f  MOV dword ptr [EAX + 0x49c],0x0
005d7da9  MOV EDX,dword ptr [EBP + -0x10]
005d7dac  PUSH EDX
005d7dad  CALL 0x005dcb00
005d7db2  ADD ESP,0x4
005d7db5  MOV ECX,EAX
005d7db7  CALL 0x005d55d0
005d7dbc  JMP 0x005d7cfa
005d7dc1  MOV EAX,dword ptr [EBP + -0x58]
005d7dc4  MOV ECX,dword ptr [EAX + 0x68]
005d7dc7  MOV dword ptr [EBP + -0x20],ECX
005d7dca  MOV EDX,dword ptr [EBP + -0x20]
005d7dcd  MOV dword ptr [EBP + -0x1c],EDX
005d7dd0  CMP dword ptr [EBP + -0x1c],0x0
005d7dd4  JZ 0x005d7de9
005d7dd6  PUSH 0x1
005d7dd8  MOV EAX,dword ptr [EBP + -0x1c]
005d7ddb  MOV EDX,dword ptr [EAX]
005d7ddd  MOV ECX,dword ptr [EBP + -0x1c]
005d7de0  MOV EAX,dword ptr [EDX]
005d7de2  CALL EAX
005d7de4  MOV dword ptr [EBP + -0x68],EAX
005d7de7  JMP 0x005d7df0
005d7de9  MOV dword ptr [EBP + -0x68],0x0
005d7df0  MOV ECX,dword ptr [EBP + -0x58]
005d7df3  CMP dword ptr [ECX + 0x70],0x0
005d7df7  JZ 0x005d7e28
005d7df9  MOV EDX,dword ptr [EBP + -0x58]
005d7dfc  MOV EAX,dword ptr [EDX + 0x70]
005d7dff  MOV dword ptr [EBP + -0x28],EAX
005d7e02  MOV ECX,dword ptr [EBP + -0x28]
005d7e05  MOV dword ptr [EBP + -0x24],ECX
005d7e08  CMP dword ptr [EBP + -0x24],0x0
005d7e0c  JZ 0x005d7e21
005d7e0e  PUSH 0x1
005d7e10  MOV EDX,dword ptr [EBP + -0x24]
005d7e13  MOV EAX,dword ptr [EDX]
005d7e15  MOV ECX,dword ptr [EBP + -0x24]
005d7e18  MOV EDX,dword ptr [EAX]
005d7e1a  CALL EDX
005d7e1c  MOV dword ptr [EBP + -0x6c],EAX
005d7e1f  JMP 0x005d7e28
005d7e21  MOV dword ptr [EBP + -0x6c],0x0
005d7e28  MOV EAX,dword ptr [EBP + -0x58]
005d7e2b  CMP dword ptr [EAX + 0x74],0x0
005d7e2f  JZ 0x005d7e60
005d7e31  MOV ECX,dword ptr [EBP + -0x58]
005d7e34  MOV EDX,dword ptr [ECX + 0x74]
005d7e37  MOV dword ptr [EBP + -0x30],EDX
005d7e3a  MOV EAX,dword ptr [EBP + -0x30]
005d7e3d  MOV dword ptr [EBP + -0x2c],EAX
005d7e40  CMP dword ptr [EBP + -0x2c],0x0
005d7e44  JZ 0x005d7e59
005d7e46  PUSH 0x1
005d7e48  MOV ECX,dword ptr [EBP + -0x2c]
005d7e4b  MOV EDX,dword ptr [ECX]
005d7e4d  MOV ECX,dword ptr [EBP + -0x2c]
005d7e50  MOV EAX,dword ptr [EDX]
005d7e52  CALL EAX
005d7e54  MOV dword ptr [EBP + -0x70],EAX
005d7e57  JMP 0x005d7e60
005d7e59  MOV dword ptr [EBP + -0x70],0x0
005d7e60  MOV ECX,dword ptr [EBP + -0x58]
005d7e63  CMP dword ptr [ECX + 0x78],0x0
005d7e67  JZ 0x005d7e98
005d7e69  MOV EDX,dword ptr [EBP + -0x58]
005d7e6c  MOV EAX,dword ptr [EDX + 0x78]
005d7e6f  MOV dword ptr [EBP + -0x38],EAX
005d7e72  MOV ECX,dword ptr [EBP + -0x38]
005d7e75  MOV dword ptr [EBP + -0x34],ECX
005d7e78  CMP dword ptr [EBP + -0x34],0x0
005d7e7c  JZ 0x005d7e91
005d7e7e  PUSH 0x1
005d7e80  MOV EDX,dword ptr [EBP + -0x34]
005d7e83  MOV EAX,dword ptr [EDX]
005d7e85  MOV ECX,dword ptr [EBP + -0x34]
005d7e88  MOV EDX,dword ptr [EAX]
005d7e8a  CALL EDX
005d7e8c  MOV dword ptr [EBP + -0x74],EAX
005d7e8f  JMP 0x005d7e98
005d7e91  MOV dword ptr [EBP + -0x74],0x0
005d7e98  CMP dword ptr [0x00793578],0x0
005d7e9f  JZ 0x005d7ed9
005d7ea1  MOV EAX,[0x00793578]
005d7ea6  MOV dword ptr [EBP + -0x40],EAX
005d7ea9  MOV ECX,dword ptr [EBP + -0x40]
005d7eac  MOV dword ptr [EBP + -0x3c],ECX
005d7eaf  CMP dword ptr [EBP + -0x3c],0x0
005d7eb3  JZ 0x005d7ec8
005d7eb5  PUSH 0x1
005d7eb7  MOV EDX,dword ptr [EBP + -0x3c]
005d7eba  MOV EAX,dword ptr [EDX]
005d7ebc  MOV ECX,dword ptr [EBP + -0x3c]
005d7ebf  MOV EDX,dword ptr [EAX]
005d7ec1  CALL EDX
005d7ec3  MOV dword ptr [EBP + -0x78],EAX
005d7ec6  JMP 0x005d7ecf
005d7ec8  MOV dword ptr [EBP + -0x78],0x0
005d7ecf  MOV dword ptr [0x00793578],0x0
005d7ed9  MOV EAX,dword ptr [EBP + -0x58]
005d7edc  CMP dword ptr [EAX + 0x5c],0x0
005d7ee0  JZ 0x005d7f1b
005d7ee2  MOV ECX,dword ptr [EBP + -0x58]
005d7ee5  MOV EDX,dword ptr [ECX + 0x5c]
005d7ee8  MOV dword ptr [EBP + -0x48],EDX
005d7eeb  MOV EAX,dword ptr [EBP + -0x48]
005d7eee  MOV dword ptr [EBP + -0x44],EAX
005d7ef1  CMP dword ptr [EBP + -0x44],0x0
005d7ef5  JZ 0x005d7f0a
005d7ef7  PUSH 0x1
005d7ef9  MOV ECX,dword ptr [EBP + -0x44]
005d7efc  MOV EDX,dword ptr [ECX]
005d7efe  MOV ECX,dword ptr [EBP + -0x44]
005d7f01  MOV EAX,dword ptr [EDX]
005d7f03  CALL EAX
005d7f05  MOV dword ptr [EBP + -0x7c],EAX
005d7f08  JMP 0x005d7f11
005d7f0a  MOV dword ptr [EBP + -0x7c],0x0
005d7f11  MOV ECX,dword ptr [EBP + -0x58]
005d7f14  MOV dword ptr [ECX + 0x5c],0x0
005d7f1b  MOV dword ptr [EBP + -0x4],0xffffffff
005d7f22  MOV ECX,dword ptr [EBP + -0x58]
005d7f25  CALL 0x0064cc80
005d7f2a  MOV ECX,dword ptr [EBP + -0xc]
005d7f2d  MOV dword ptr FS:[0x0],ECX
005d7f34  POP ECX
005d7f35  MOV ESP,EBP
005d7f37  POP EBP
005d7f38  RET

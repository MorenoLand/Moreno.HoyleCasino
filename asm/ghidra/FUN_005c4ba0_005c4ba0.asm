; FUN_005c4ba0  005c4ba0
005c4ba0  PUSH EBP
005c4ba1  MOV EBP,ESP
005c4ba3  PUSH -0x1
005c4ba5  PUSH 0x6a86c8
005c4baa  MOV EAX,FS:[0x0]
005c4bb0  PUSH EAX
005c4bb1  SUB ESP,0x94
005c4bb7  MOV EAX,[0x00781870]
005c4bbc  XOR EAX,EBP
005c4bbe  PUSH EAX
005c4bbf  LEA EAX,[EBP + -0xc]
005c4bc2  MOV FS:[0x0],EAX
005c4bc8  MOV dword ptr [EBP + 0xffffff6c],ECX
005c4bce  MOV dword ptr [EBP + -0x4],0x0
005c4bd5  MOV EAX,dword ptr [EBP + 0xffffff6c]
005c4bdb  CMP dword ptr [EAX + 0x4],0x0
005c4bdf  JNZ 0x005c4bed
005c4be1  MOV dword ptr [EBP + 0xffffff68],0x0
005c4beb  JMP 0x005c4c0d
005c4bed  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c4bf3  MOV EDX,dword ptr [EBP + 0xffffff6c]
005c4bf9  MOV EAX,dword ptr [ECX + 0x8]
005c4bfc  SUB EAX,dword ptr [EDX + 0x4]
005c4bff  CDQ
005c4c00  MOV ECX,0x34
005c4c05  IDIV ECX
005c4c07  MOV dword ptr [EBP + 0xffffff68],EAX
005c4c0d  MOV EDX,dword ptr [EBP + 0xffffff68]
005c4c13  CMP EDX,dword ptr [EBP + 0x8]
005c4c16  JNC 0x005c4cc7
005c4c1c  MOV EAX,dword ptr [EBP + 0xffffff6c]
005c4c22  CMP dword ptr [EAX + 0x4],0x0
005c4c26  JNZ 0x005c4c34
005c4c28  MOV dword ptr [EBP + 0xffffff64],0x0
005c4c32  JMP 0x005c4c54
005c4c34  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c4c3a  MOV EDX,dword ptr [EBP + 0xffffff6c]
005c4c40  MOV EAX,dword ptr [ECX + 0x8]
005c4c43  SUB EAX,dword ptr [EDX + 0x4]
005c4c46  CDQ
005c4c47  MOV ECX,0x34
005c4c4c  IDIV ECX
005c4c4e  MOV dword ptr [EBP + 0xffffff64],EAX
005c4c54  MOV EDX,dword ptr [EBP + 0xffffff6c]
005c4c5a  MOV EAX,dword ptr [EDX + 0x8]
005c4c5d  MOV dword ptr [EBP + -0x38],EAX
005c4c60  MOV dword ptr [EBP + -0x14],0x0
005c4c67  CMP dword ptr [EBP + 0xffffff6c],0x0
005c4c6e  JZ 0x005c4c8c
005c4c70  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c4c76  MOV EDX,dword ptr [ECX + 0x4]
005c4c79  CMP EDX,dword ptr [EBP + -0x38]
005c4c7c  JA 0x005c4c8c
005c4c7e  MOV EAX,dword ptr [EBP + 0xffffff6c]
005c4c84  MOV ECX,dword ptr [EBP + -0x38]
005c4c87  CMP ECX,dword ptr [EAX + 0x8]
005c4c8a  JBE 0x005c4c92
005c4c8c  CALL dword ptr [0x006b2274]
005c4c92  MOV EDX,dword ptr [EBP + 0xffffff6c]
005c4c98  MOV dword ptr [EBP + -0x14],EDX
005c4c9b  MOV EAX,dword ptr [EBP + -0x38]
005c4c9e  MOV dword ptr [EBP + -0x10],EAX
005c4ca1  LEA ECX,[EBP + 0xc]
005c4ca4  PUSH ECX
005c4ca5  MOV EDX,dword ptr [EBP + 0x8]
005c4ca8  SUB EDX,dword ptr [EBP + 0xffffff64]
005c4cae  PUSH EDX
005c4caf  MOV EAX,dword ptr [EBP + -0x10]
005c4cb2  PUSH EAX
005c4cb3  MOV ECX,dword ptr [EBP + -0x14]
005c4cb6  PUSH ECX
005c4cb7  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c4cbd  CALL 0x005c5670
005c4cc2  JMP 0x005c4deb
005c4cc7  MOV EDX,dword ptr [EBP + 0xffffff6c]
005c4ccd  CMP dword ptr [EDX + 0x4],0x0
005c4cd1  JNZ 0x005c4cdf
005c4cd3  MOV dword ptr [EBP + 0xffffff60],0x0
005c4cdd  JMP 0x005c4cff
005c4cdf  MOV EAX,dword ptr [EBP + 0xffffff6c]
005c4ce5  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c4ceb  MOV EAX,dword ptr [EAX + 0x8]
005c4cee  SUB EAX,dword ptr [ECX + 0x4]
005c4cf1  CDQ
005c4cf2  MOV ECX,0x34
005c4cf7  IDIV ECX
005c4cf9  MOV dword ptr [EBP + 0xffffff60],EAX
005c4cff  MOV EDX,dword ptr [EBP + 0x8]
005c4d02  CMP EDX,dword ptr [EBP + 0xffffff60]
005c4d08  JNC 0x005c4deb
005c4d0e  MOV EAX,dword ptr [EBP + 0xffffff6c]
005c4d14  MOV ECX,dword ptr [EAX + 0x8]
005c4d17  MOV dword ptr [EBP + -0x3c],ECX
005c4d1a  MOV dword ptr [EBP + -0x1c],0x0
005c4d21  CMP dword ptr [EBP + 0xffffff6c],0x0
005c4d28  JZ 0x005c4d46
005c4d2a  MOV EDX,dword ptr [EBP + 0xffffff6c]
005c4d30  MOV EAX,dword ptr [EDX + 0x4]
005c4d33  CMP EAX,dword ptr [EBP + -0x3c]
005c4d36  JA 0x005c4d46
005c4d38  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c4d3e  MOV EDX,dword ptr [EBP + -0x3c]
005c4d41  CMP EDX,dword ptr [ECX + 0x8]
005c4d44  JBE 0x005c4d4c
005c4d46  CALL dword ptr [0x006b2274]
005c4d4c  MOV EAX,dword ptr [EBP + 0xffffff6c]
005c4d52  MOV dword ptr [EBP + -0x1c],EAX
005c4d55  MOV ECX,dword ptr [EBP + -0x3c]
005c4d58  MOV dword ptr [EBP + -0x18],ECX
005c4d5b  MOV EDX,dword ptr [EBP + 0xffffff6c]
005c4d61  MOV EAX,dword ptr [EDX + 0x4]
005c4d64  MOV dword ptr [EBP + -0x40],EAX
005c4d67  MOV dword ptr [EBP + -0x24],0x0
005c4d6e  CMP dword ptr [EBP + 0xffffff6c],0x0
005c4d75  JZ 0x005c4d93
005c4d77  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c4d7d  MOV EDX,dword ptr [ECX + 0x4]
005c4d80  CMP EDX,dword ptr [EBP + -0x40]
005c4d83  JA 0x005c4d93
005c4d85  MOV EAX,dword ptr [EBP + 0xffffff6c]
005c4d8b  MOV ECX,dword ptr [EBP + -0x40]
005c4d8e  CMP ECX,dword ptr [EAX + 0x8]
005c4d91  JBE 0x005c4d99
005c4d93  CALL dword ptr [0x006b2274]
005c4d99  MOV EDX,dword ptr [EBP + 0xffffff6c]
005c4d9f  MOV dword ptr [EBP + -0x24],EDX
005c4da2  MOV EAX,dword ptr [EBP + -0x40]
005c4da5  MOV dword ptr [EBP + -0x20],EAX
005c4da8  MOV ECX,dword ptr [EBP + -0x24]
005c4dab  MOV EDX,dword ptr [EBP + -0x20]
005c4dae  MOV dword ptr [EBP + -0x48],ECX
005c4db1  MOV dword ptr [EBP + -0x44],EDX
005c4db4  MOV EAX,dword ptr [EBP + 0x8]
005c4db7  PUSH EAX
005c4db8  LEA ECX,[EBP + -0x48]
005c4dbb  CALL 0x005c6160
005c4dc0  MOV ECX,dword ptr [EBP + -0x48]
005c4dc3  MOV EDX,dword ptr [EBP + -0x44]
005c4dc6  MOV dword ptr [EBP + -0x2c],ECX
005c4dc9  MOV dword ptr [EBP + -0x28],EDX
005c4dcc  MOV EAX,dword ptr [EBP + -0x18]
005c4dcf  PUSH EAX
005c4dd0  MOV ECX,dword ptr [EBP + -0x1c]
005c4dd3  PUSH ECX
005c4dd4  MOV EDX,dword ptr [EBP + -0x28]
005c4dd7  PUSH EDX
005c4dd8  MOV EAX,dword ptr [EBP + -0x2c]
005c4ddb  PUSH EAX
005c4ddc  LEA ECX,[EBP + -0x34]
005c4ddf  PUSH ECX
005c4de0  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c4de6  CALL 0x005c55a0
005c4deb  MOV dword ptr [EBP + -0x4],0xffffffff
005c4df2  LEA ECX,[EBP + 0xc]
005c4df5  CALL 0x005c3980
005c4dfa  MOV ECX,dword ptr [EBP + -0xc]
005c4dfd  MOV dword ptr FS:[0x0],ECX
005c4e04  POP ECX
005c4e05  MOV ESP,EBP
005c4e07  POP EBP
005c4e08  RET 0x38

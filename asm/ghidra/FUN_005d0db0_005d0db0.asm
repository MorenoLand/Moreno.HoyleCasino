; FUN_005d0db0  005d0db0
005d0db0  PUSH EBP
005d0db1  MOV EBP,ESP
005d0db3  SUB ESP,0x40
005d0db6  MOV dword ptr [EBP + -0x40],ECX
005d0db9  MOV EAX,dword ptr [EBP + -0x40]
005d0dbc  MOV ECX,dword ptr [EAX + 0x4]
005d0dbf  MOV dword ptr [EBP + -0x38],ECX
005d0dc2  MOV EDX,dword ptr [EBP + -0x38]
005d0dc5  ADD EDX,dword ptr [EBP + 0xc]
005d0dc8  MOV dword ptr [EBP + -0x4],EDX
005d0dcb  MOV EAX,dword ptr [EBP + 0xc]
005d0dce  PUSH EAX
005d0dcf  LEA ECX,[EBP + -0xc]
005d0dd2  PUSH ECX
005d0dd3  MOV ECX,dword ptr [EBP + -0x40]
005d0dd6  CALL 0x005d0c30
005d0ddb  PUSH 0x0
005d0ddd  PUSH 0x0
005d0ddf  CALL 0x0064c8a0
005d0de4  ADD ESP,0x8
005d0de7  MOV dword ptr [EBP + -0x1c],EAX
005d0dea  MOV dword ptr [EBP + -0x18],EDX
005d0ded  MOV EDX,dword ptr [EBP + -0x1c]
005d0df0  MOV dword ptr [EBP + -0x14],EDX
005d0df3  MOV EAX,dword ptr [EBP + -0x18]
005d0df6  MOV dword ptr [EBP + -0x10],EAX
005d0df9  MOV ECX,dword ptr [EBP + 0xc]
005d0dfc  PUSH ECX
005d0dfd  MOV ECX,dword ptr [EBP + -0x40]
005d0e00  CALL 0x005d0d60
005d0e05  MOVZX EDX,AL
005d0e08  TEST EDX,EDX
005d0e0a  JNZ 0x005d0e60
005d0e0c  LEA EAX,[EBP + -0x24]
005d0e0f  PUSH EAX
005d0e10  PUSH 0x0
005d0e12  CALL 0x005dcb00
005d0e17  ADD ESP,0x4
005d0e1a  MOV ECX,EAX
005d0e1c  CALL 0x005d5a90
005d0e21  MOV ECX,dword ptr [EAX + 0x4]
005d0e24  PUSH ECX
005d0e25  MOV EDX,dword ptr [EAX]
005d0e27  PUSH EDX
005d0e28  MOV ECX,dword ptr [EBP + -0x40]
005d0e2b  CALL 0x005d0d30
005d0e30  MOV dword ptr [EBP + 0xc],EAX
005d0e33  MOV EAX,dword ptr [EBP + -0x40]
005d0e36  MOV ECX,dword ptr [EAX + 0x4]
005d0e39  MOV dword ptr [EBP + -0x3c],ECX
005d0e3c  MOV EDX,dword ptr [EBP + -0x3c]
005d0e3f  ADD EDX,dword ptr [EBP + 0xc]
005d0e42  MOV dword ptr [EBP + -0x4],EDX
005d0e45  MOV EAX,dword ptr [EBP + 0xc]
005d0e48  PUSH EAX
005d0e49  LEA ECX,[EBP + -0x2c]
005d0e4c  PUSH ECX
005d0e4d  MOV ECX,dword ptr [EBP + -0x40]
005d0e50  CALL 0x005d0c30
005d0e55  MOV EDX,dword ptr [EAX]
005d0e57  MOV EAX,dword ptr [EAX + 0x4]
005d0e5a  MOV dword ptr [EBP + -0xc],EDX
005d0e5d  MOV dword ptr [EBP + -0x8],EAX
005d0e60  CMP dword ptr [EBP + -0x4],0xf423f
005d0e67  JL 0x005d0e9c
005d0e69  MOV ECX,dword ptr [EBP + -0x4]
005d0e6c  SUB ECX,0xf423f
005d0e72  MOV EDX,dword ptr [EBP + 0xc]
005d0e75  SUB EDX,ECX
005d0e77  MOV dword ptr [EBP + 0xc],EDX
005d0e7a  MOV dword ptr [EBP + -0x4],0xf423f
005d0e81  MOV EAX,dword ptr [EBP + 0xc]
005d0e84  PUSH EAX
005d0e85  LEA ECX,[EBP + -0x34]
005d0e88  PUSH ECX
005d0e89  MOV ECX,dword ptr [EBP + -0x40]
005d0e8c  CALL 0x005d0c30
005d0e91  MOV EDX,dword ptr [EAX]
005d0e93  MOV EAX,dword ptr [EAX + 0x4]
005d0e96  MOV dword ptr [EBP + -0xc],EDX
005d0e99  MOV dword ptr [EBP + -0x8],EAX
005d0e9c  MOV ECX,dword ptr [EBP + -0xc]
005d0e9f  MOV dword ptr [EBP + -0x14],ECX
005d0ea2  MOV EDX,dword ptr [EBP + -0x8]
005d0ea5  MOV dword ptr [EBP + -0x10],EDX
005d0ea8  CMP dword ptr [EBP + 0xc],0x0
005d0eac  JZ 0x005d0edc
005d0eae  MOV EAX,dword ptr [EBP + -0xc]
005d0eb1  IMUL EAX,EAX,-0x1
005d0eb4  MOV dword ptr [EBP + -0xc],EAX
005d0eb7  MOV ECX,dword ptr [EBP + -0x8]
005d0eba  IMUL ECX,ECX,-0x1
005d0ebd  MOV dword ptr [EBP + -0x8],ECX
005d0ec0  MOV EDX,dword ptr [EBP + -0x8]
005d0ec3  PUSH EDX
005d0ec4  MOV EAX,dword ptr [EBP + -0xc]
005d0ec7  PUSH EAX
005d0ec8  MOV ECX,dword ptr [EBP + -0x40]
005d0ecb  CALL 0x005d1420
005d0ed0  MOV ECX,dword ptr [EBP + -0x4]
005d0ed3  PUSH ECX
005d0ed4  MOV ECX,dword ptr [EBP + -0x40]
005d0ed7  CALL 0x005d0a20
005d0edc  MOV EDX,dword ptr [EBP + 0x8]
005d0edf  MOV EAX,dword ptr [EBP + -0x14]
005d0ee2  MOV dword ptr [EDX],EAX
005d0ee4  MOV ECX,dword ptr [EBP + -0x10]
005d0ee7  MOV dword ptr [EDX + 0x4],ECX
005d0eea  MOV EAX,dword ptr [EBP + 0x8]
005d0eed  MOV ESP,EBP
005d0eef  POP EBP
005d0ef0  RET 0x8

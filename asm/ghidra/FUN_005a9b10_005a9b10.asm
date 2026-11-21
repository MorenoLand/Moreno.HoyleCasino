; FUN_005a9b10  005a9b10
005a9b10  PUSH EBP
005a9b11  MOV EBP,ESP
005a9b13  SUB ESP,0x108
005a9b19  MOV dword ptr [EBP + 0xfffffefc],ECX
005a9b1f  MOV dword ptr [EBP + 0xffffff00],0x167
005a9b29  MOV dword ptr [EBP + 0xffffff04],0x13c
005a9b33  MOV dword ptr [EBP + 0xffffff08],0x12c
005a9b3d  MOV dword ptr [EBP + 0xffffff0c],0x110
005a9b47  MOV dword ptr [EBP + 0xffffff10],0x17a
005a9b51  MOV dword ptr [EBP + 0xffffff14],0x110
005a9b5b  MOV dword ptr [EBP + 0xffffff18],0x15e
005a9b65  MOV dword ptr [EBP + 0xffffff1c],0xb8
005a9b6f  MOV dword ptr [EBP + 0xffffff20],0x12c
005a9b79  MOV dword ptr [EBP + 0xffffff24],0xb8
005a9b83  MOV dword ptr [EBP + 0xffffff28],0x17a
005a9b8d  MOV dword ptr [EBP + 0xffffff2c],0xb8
005a9b97  MOV dword ptr [EBP + 0xffffff30],0xe2
005a9ba1  MOV dword ptr [EBP + 0xffffff34],0x13f
005a9bab  MOV dword ptr [EBP + 0xffffff38],0x7a
005a9bb5  MOV dword ptr [EBP + 0xffffff3c],0x110
005a9bbf  MOV dword ptr [EBP + 0xffffff40],0xc8
005a9bc9  MOV dword ptr [EBP + 0xffffff44],0x110
005a9bd3  MOV dword ptr [EBP + 0xffffff48],0xb1
005a9bdd  MOV dword ptr [EBP + 0xffffff4c],0xb8
005a9be7  MOV dword ptr [EBP + 0xffffff50],0x83
005a9bf1  MOV dword ptr [EBP + 0xffffff54],0xb8
005a9bfb  MOV dword ptr [EBP + 0xffffff58],0xd1
005a9c05  MOV dword ptr [EBP + 0xffffff5c],0xb8
005a9c0f  MOV dword ptr [EBP + 0xffffff60],0x1e9
005a9c19  MOV dword ptr [EBP + 0xffffff64],0x109
005a9c23  MOV dword ptr [EBP + 0xffffff68],0x1c5
005a9c2d  MOV dword ptr [EBP + 0xffffff6c],0xcb
005a9c37  MOV dword ptr [EBP + 0xffffff70],0x214
005a9c41  MOV dword ptr [EBP + 0xffffff74],0xcb
005a9c4b  MOV dword ptr [EBP + 0xffffff78],0x1f3
005a9c55  MOV dword ptr [EBP + 0xffffff7c],0x78
005a9c5f  MOV dword ptr [EBP + -0x80],0x1c2
005a9c66  MOV dword ptr [EBP + -0x7c],0x78
005a9c6d  MOV dword ptr [EBP + -0x78],0x211
005a9c74  MOV dword ptr [EBP + -0x74],0x78
005a9c7b  MOV dword ptr [EBP + -0x70],0x5a
005a9c82  MOV dword ptr [EBP + -0x6c],0x111
005a9c89  MOV dword ptr [EBP + -0x68],0xffffffee
005a9c90  MOV dword ptr [EBP + -0x64],0xcb
005a9c97  MOV dword ptr [EBP + -0x60],0x3d
005a9c9e  MOV dword ptr [EBP + -0x5c],0xcb
005a9ca5  MOV dword ptr [EBP + -0x58],0x24
005a9cac  MOV dword ptr [EBP + -0x54],0x78
005a9cb3  MOV dword ptr [EBP + -0x50],0xffffffee
005a9cba  MOV dword ptr [EBP + -0x4c],0x78
005a9cc1  MOV dword ptr [EBP + -0x48],0x3d
005a9cc8  MOV dword ptr [EBP + -0x44],0x78
005a9ccf  MOV dword ptr [EBP + -0x20],0x143
005a9cd6  MOV dword ptr [EBP + -0x1c],0x131
005a9cdd  MOV dword ptr [EBP + -0x18],0xf3
005a9ce4  MOV dword ptr [EBP + -0x14],0x132
005a9ceb  MOV dword ptr [EBP + -0x10],0x1c7
005a9cf2  MOV dword ptr [EBP + -0xc],0xeb
005a9cf9  MOV dword ptr [EBP + -0x8],0x6e
005a9d00  MOV dword ptr [EBP + -0x4],0xea
005a9d07  MOV dword ptr [EBP + -0x40],0x186
005a9d0e  MOV dword ptr [EBP + -0x3c],0x110
005a9d15  MOV dword ptr [EBP + -0x38],0x10f
005a9d1c  MOV dword ptr [EBP + -0x34],0x123
005a9d23  MOV dword ptr [EBP + -0x30],0x1f5
005a9d2a  MOV dword ptr [EBP + -0x2c],0xdd
005a9d31  MOV dword ptr [EBP + -0x28],0x8d
005a9d38  MOV dword ptr [EBP + -0x24],0x10b
005a9d3f  MOV EAX,dword ptr [EBP + 0xfffffefc]
005a9d45  CMP dword ptr [EAX + 0xcc0],0x65
005a9d4c  JNZ 0x005a9d5a
005a9d4e  MOV ECX,dword ptr [EBP + 0x8]
005a9d51  MOV EAX,dword ptr [EBP + ECX*0x8 + -0x3c]
005a9d55  JMP 0x005a9e54
005a9d5a  MOV EDX,dword ptr [EBP + 0x8]
005a9d5d  PUSH EDX
005a9d5e  MOV EAX,dword ptr [EBP + 0xfffffefc]
005a9d64  MOV ECX,dword ptr [EAX + 0x178]
005a9d6a  CALL 0x005cb820
005a9d6f  MOV dword ptr [EBP + 0xfffffef8],EAX
005a9d75  MOV ECX,dword ptr [EBP + 0xfffffef8]
005a9d7b  SUB ECX,0x1
005a9d7e  MOV dword ptr [EBP + 0xfffffef8],ECX
005a9d84  CMP dword ptr [EBP + 0xfffffef8],0x3
005a9d8b  JA 0x005a9e37
005a9d91  MOV EDX,dword ptr [EBP + 0xfffffef8]
005a9d97  JMP dword ptr [EDX*0x4 + 0x5a9e5c]
005a9d9e  MOV EAX,dword ptr [EBP + 0x8]
005a9da1  IMUL EAX,EAX,0x30
005a9da4  MOV EAX,dword ptr [EBP + EAX*0x1 + 0xffffff04]
005a9dab  JMP 0x005a9e54
005a9db0  MOV ECX,dword ptr [EBP + 0x8]
005a9db3  PUSH ECX
005a9db4  MOV ECX,dword ptr [0x00793604]
005a9dba  CALL 0x005b6660
005a9dbf  MOVZX EDX,AL
005a9dc2  TEST EDX,EDX
005a9dc4  JZ 0x005a9dd7
005a9dc6  CMP dword ptr [EBP + 0xc],0x1
005a9dca  JNZ 0x005a9dd7
005a9dcc  MOV EAX,dword ptr [EBP + 0x8]
005a9dcf  MOV EAX,dword ptr [EBP + EAX*0x8 + -0x1c]
005a9dd3  JMP 0x005a9e54
005a9dd7  MOV ECX,dword ptr [EBP + 0x8]
005a9dda  IMUL ECX,ECX,0x30
005a9ddd  LEA EDX,[EBP + ECX*0x1 + 0xffffff00]
005a9de4  MOV EAX,dword ptr [EBP + 0xc]
005a9de7  MOV EAX,dword ptr [EDX + EAX*0x8 + 0xc]
005a9deb  JMP 0x005a9e54
005a9ded  MOV ECX,dword ptr [EBP + 0x8]
005a9df0  IMUL ECX,ECX,0x30
005a9df3  LEA EDX,[EBP + ECX*0x1 + 0xffffff00]
005a9dfa  MOV EAX,dword ptr [EBP + 0xc]
005a9dfd  MOV EAX,dword ptr [EDX + EAX*0x8 + 0xc]
005a9e01  JMP 0x005a9e54
005a9e03  CMP dword ptr [EBP + 0xc],0x2
005a9e07  JGE 0x005a9e21
005a9e09  MOV ECX,dword ptr [EBP + 0x8]
005a9e0c  IMUL ECX,ECX,0x30
005a9e0f  LEA EDX,[EBP + ECX*0x1 + 0xffffff00]
005a9e16  MOV EAX,dword ptr [EBP + 0xc]
005a9e19  MOV EAX,dword ptr [EDX + EAX*0x8 + 0xc]
005a9e1d  JMP 0x005a9e54
005a9e21  MOV ECX,dword ptr [EBP + 0x8]
005a9e24  IMUL ECX,ECX,0x30
005a9e27  LEA EDX,[EBP + ECX*0x1 + 0xffffff00]
005a9e2e  MOV EAX,dword ptr [EBP + 0xc]
005a9e31  MOV EAX,dword ptr [EDX + EAX*0x8 + 0x14]
005a9e35  JMP 0x005a9e54
005a9e37  XOR ECX,ECX
005a9e39  JNZ 0x005a9e52
005a9e3b  PUSH 0x35f
005a9e40  PUSH 0x6cf934
005a9e45  PUSH 0x6b2f58
005a9e4a  CALL 0x005e9f20
005a9e4f  ADD ESP,0xc
005a9e52  XOR EAX,EAX
005a9e54  MOV ESP,EBP
005a9e56  POP EBP
005a9e57  RET 0x8

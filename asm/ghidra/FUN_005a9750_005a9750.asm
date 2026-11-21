; FUN_005a9750  005a9750
005a9750  PUSH EBP
005a9751  MOV EBP,ESP
005a9753  SUB ESP,0x108
005a9759  MOV dword ptr [EBP + 0xfffffefc],ECX
005a975f  MOV dword ptr [EBP + 0xffffff00],0x167
005a9769  MOV dword ptr [EBP + 0xffffff04],0x13c
005a9773  MOV dword ptr [EBP + 0xffffff08],0x12c
005a977d  MOV dword ptr [EBP + 0xffffff0c],0x110
005a9787  MOV dword ptr [EBP + 0xffffff10],0x17a
005a9791  MOV dword ptr [EBP + 0xffffff14],0x110
005a979b  MOV dword ptr [EBP + 0xffffff18],0x15e
005a97a5  MOV dword ptr [EBP + 0xffffff1c],0xb8
005a97af  MOV dword ptr [EBP + 0xffffff20],0x12c
005a97b9  MOV dword ptr [EBP + 0xffffff24],0xb8
005a97c3  MOV dword ptr [EBP + 0xffffff28],0x17a
005a97cd  MOV dword ptr [EBP + 0xffffff2c],0xb8
005a97d7  MOV dword ptr [EBP + 0xffffff30],0xe2
005a97e1  MOV dword ptr [EBP + 0xffffff34],0x13f
005a97eb  MOV dword ptr [EBP + 0xffffff38],0x7a
005a97f5  MOV dword ptr [EBP + 0xffffff3c],0x110
005a97ff  MOV dword ptr [EBP + 0xffffff40],0xc8
005a9809  MOV dword ptr [EBP + 0xffffff44],0x110
005a9813  MOV dword ptr [EBP + 0xffffff48],0xb1
005a981d  MOV dword ptr [EBP + 0xffffff4c],0xb8
005a9827  MOV dword ptr [EBP + 0xffffff50],0x83
005a9831  MOV dword ptr [EBP + 0xffffff54],0xb8
005a983b  MOV dword ptr [EBP + 0xffffff58],0xd1
005a9845  MOV dword ptr [EBP + 0xffffff5c],0xb8
005a984f  MOV dword ptr [EBP + 0xffffff60],0x1e9
005a9859  MOV dword ptr [EBP + 0xffffff64],0x109
005a9863  MOV dword ptr [EBP + 0xffffff68],0x1c5
005a986d  MOV dword ptr [EBP + 0xffffff6c],0xcb
005a9877  MOV dword ptr [EBP + 0xffffff70],0x214
005a9881  MOV dword ptr [EBP + 0xffffff74],0xcb
005a988b  MOV dword ptr [EBP + 0xffffff78],0x1f3
005a9895  MOV dword ptr [EBP + 0xffffff7c],0x78
005a989f  MOV dword ptr [EBP + -0x80],0x1c2
005a98a6  MOV dword ptr [EBP + -0x7c],0x78
005a98ad  MOV dword ptr [EBP + -0x78],0x211
005a98b4  MOV dword ptr [EBP + -0x74],0x78
005a98bb  MOV dword ptr [EBP + -0x70],0x5a
005a98c2  MOV dword ptr [EBP + -0x6c],0x111
005a98c9  MOV dword ptr [EBP + -0x68],0xffffffee
005a98d0  MOV dword ptr [EBP + -0x64],0xcb
005a98d7  MOV dword ptr [EBP + -0x60],0x3d
005a98de  MOV dword ptr [EBP + -0x5c],0xcb
005a98e5  MOV dword ptr [EBP + -0x58],0x24
005a98ec  MOV dword ptr [EBP + -0x54],0x78
005a98f3  MOV dword ptr [EBP + -0x50],0xffffffee
005a98fa  MOV dword ptr [EBP + -0x4c],0x78
005a9901  MOV dword ptr [EBP + -0x48],0x3d
005a9908  MOV dword ptr [EBP + -0x44],0x78
005a990f  MOV dword ptr [EBP + -0x20],0x143
005a9916  MOV dword ptr [EBP + -0x1c],0x131
005a991d  MOV dword ptr [EBP + -0x18],0xf3
005a9924  MOV dword ptr [EBP + -0x14],0x132
005a992b  MOV dword ptr [EBP + -0x10],0x1c7
005a9932  MOV dword ptr [EBP + -0xc],0xeb
005a9939  MOV dword ptr [EBP + -0x8],0x6e
005a9940  MOV dword ptr [EBP + -0x4],0xea
005a9947  MOV dword ptr [EBP + -0x40],0x186
005a994e  MOV dword ptr [EBP + -0x3c],0x110
005a9955  MOV dword ptr [EBP + -0x38],0x10f
005a995c  MOV dword ptr [EBP + -0x34],0x123
005a9963  MOV dword ptr [EBP + -0x30],0x1f5
005a996a  MOV dword ptr [EBP + -0x2c],0xdd
005a9971  MOV dword ptr [EBP + -0x28],0x8d
005a9978  MOV dword ptr [EBP + -0x24],0x10b
005a997f  MOV EAX,dword ptr [EBP + 0xfffffefc]
005a9985  CMP dword ptr [EAX + 0xcc0],0x65
005a998c  JNZ 0x005a999a
005a998e  MOV ECX,dword ptr [EBP + 0x8]
005a9991  MOV EAX,dword ptr [EBP + ECX*0x8 + -0x40]
005a9995  JMP 0x005a9a94
005a999a  MOV EDX,dword ptr [EBP + 0x8]
005a999d  PUSH EDX
005a999e  MOV EAX,dword ptr [EBP + 0xfffffefc]
005a99a4  MOV ECX,dword ptr [EAX + 0x178]
005a99aa  CALL 0x005cb820
005a99af  MOV dword ptr [EBP + 0xfffffef8],EAX
005a99b5  MOV ECX,dword ptr [EBP + 0xfffffef8]
005a99bb  SUB ECX,0x1
005a99be  MOV dword ptr [EBP + 0xfffffef8],ECX
005a99c4  CMP dword ptr [EBP + 0xfffffef8],0x3
005a99cb  JA 0x005a9a77
005a99d1  MOV EDX,dword ptr [EBP + 0xfffffef8]
005a99d7  JMP dword ptr [EDX*0x4 + 0x5a9a9c]
005a99de  MOV EAX,dword ptr [EBP + 0x8]
005a99e1  IMUL EAX,EAX,0x30
005a99e4  MOV EAX,dword ptr [EBP + EAX*0x1 + 0xffffff00]
005a99eb  JMP 0x005a9a94
005a99f0  MOV ECX,dword ptr [EBP + 0x8]
005a99f3  PUSH ECX
005a99f4  MOV ECX,dword ptr [0x00793604]
005a99fa  CALL 0x005b6660
005a99ff  MOVZX EDX,AL
005a9a02  TEST EDX,EDX
005a9a04  JZ 0x005a9a17
005a9a06  CMP dword ptr [EBP + 0xc],0x1
005a9a0a  JNZ 0x005a9a17
005a9a0c  MOV EAX,dword ptr [EBP + 0x8]
005a9a0f  MOV EAX,dword ptr [EBP + EAX*0x8 + -0x20]
005a9a13  JMP 0x005a9a94
005a9a17  MOV ECX,dword ptr [EBP + 0x8]
005a9a1a  IMUL ECX,ECX,0x30
005a9a1d  LEA EDX,[EBP + ECX*0x1 + 0xffffff00]
005a9a24  MOV EAX,dword ptr [EBP + 0xc]
005a9a27  MOV EAX,dword ptr [EDX + EAX*0x8 + 0x8]
005a9a2b  JMP 0x005a9a94
005a9a2d  MOV ECX,dword ptr [EBP + 0x8]
005a9a30  IMUL ECX,ECX,0x30
005a9a33  LEA EDX,[EBP + ECX*0x1 + 0xffffff00]
005a9a3a  MOV EAX,dword ptr [EBP + 0xc]
005a9a3d  MOV EAX,dword ptr [EDX + EAX*0x8 + 0x8]
005a9a41  JMP 0x005a9a94
005a9a43  CMP dword ptr [EBP + 0xc],0x2
005a9a47  JGE 0x005a9a61
005a9a49  MOV ECX,dword ptr [EBP + 0x8]
005a9a4c  IMUL ECX,ECX,0x30
005a9a4f  LEA EDX,[EBP + ECX*0x1 + 0xffffff00]
005a9a56  MOV EAX,dword ptr [EBP + 0xc]
005a9a59  MOV EAX,dword ptr [EDX + EAX*0x8 + 0x8]
005a9a5d  JMP 0x005a9a94
005a9a61  MOV ECX,dword ptr [EBP + 0x8]
005a9a64  IMUL ECX,ECX,0x30
005a9a67  LEA EDX,[EBP + ECX*0x1 + 0xffffff00]
005a9a6e  MOV EAX,dword ptr [EBP + 0xc]
005a9a71  MOV EAX,dword ptr [EDX + EAX*0x8 + 0x10]
005a9a75  JMP 0x005a9a94
005a9a77  XOR ECX,ECX
005a9a79  JNZ 0x005a9a92
005a9a7b  PUSH 0x31e
005a9a80  PUSH 0x6cf934
005a9a85  PUSH 0x6b2f58
005a9a8a  CALL 0x005e9f20
005a9a8f  ADD ESP,0xc
005a9a92  XOR EAX,EAX
005a9a94  MOV ESP,EBP
005a9a96  POP EBP
005a9a97  RET 0x8

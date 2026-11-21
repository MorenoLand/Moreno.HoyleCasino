; FUN_0040f790  0040f790
0040f790  PUSH EBP
0040f791  MOV EBP,ESP
0040f793  SUB ESP,0xf0
0040f799  MOV dword ptr [EBP + 0xffffff14],ECX
0040f79f  MOV dword ptr [EBP + 0xffffff18],0x16b
0040f7a9  MOV dword ptr [EBP + 0xffffff1c],0x131
0040f7b3  MOV dword ptr [EBP + 0xffffff20],0x12c
0040f7bd  MOV dword ptr [EBP + 0xffffff24],0x110
0040f7c7  MOV dword ptr [EBP + 0xffffff28],0x17a
0040f7d1  MOV dword ptr [EBP + 0xffffff2c],0x110
0040f7db  MOV dword ptr [EBP + 0xffffff30],0x15e
0040f7e5  MOV dword ptr [EBP + 0xffffff34],0xb8
0040f7ef  MOV dword ptr [EBP + 0xffffff38],0x12c
0040f7f9  MOV dword ptr [EBP + 0xffffff3c],0xb8
0040f803  MOV dword ptr [EBP + 0xffffff40],0x17a
0040f80d  MOV dword ptr [EBP + 0xffffff44],0xb8
0040f817  MOV dword ptr [EBP + 0xffffff48],0xcb
0040f821  MOV dword ptr [EBP + 0xffffff4c],0x132
0040f82b  MOV dword ptr [EBP + 0xffffff50],0x7a
0040f835  MOV dword ptr [EBP + 0xffffff54],0x110
0040f83f  MOV dword ptr [EBP + 0xffffff58],0xc8
0040f849  MOV dword ptr [EBP + 0xffffff5c],0x110
0040f853  MOV dword ptr [EBP + 0xffffff60],0xb1
0040f85d  MOV dword ptr [EBP + 0xffffff64],0xb8
0040f867  MOV dword ptr [EBP + 0xffffff68],0x83
0040f871  MOV dword ptr [EBP + 0xffffff6c],0xb8
0040f87b  MOV dword ptr [EBP + 0xffffff70],0xd1
0040f885  MOV dword ptr [EBP + 0xffffff74],0xb8
0040f88f  MOV dword ptr [EBP + 0xffffff78],0x1ef
0040f899  MOV dword ptr [EBP + 0xffffff7c],0xeb
0040f8a3  MOV dword ptr [EBP + -0x80],0x1c5
0040f8aa  MOV dword ptr [EBP + -0x7c],0xcb
0040f8b1  MOV dword ptr [EBP + -0x78],0x214
0040f8b8  MOV dword ptr [EBP + -0x74],0xcb
0040f8bf  MOV dword ptr [EBP + -0x70],0x1f3
0040f8c6  MOV dword ptr [EBP + -0x6c],0x78
0040f8cd  MOV dword ptr [EBP + -0x68],0x1c2
0040f8d4  MOV dword ptr [EBP + -0x64],0x78
0040f8db  MOV dword ptr [EBP + -0x60],0x211
0040f8e2  MOV dword ptr [EBP + -0x5c],0x78
0040f8e9  MOV dword ptr [EBP + -0x58],0x46
0040f8f0  MOV dword ptr [EBP + -0x54],0xea
0040f8f7  MOV dword ptr [EBP + -0x50],0xffffffee
0040f8fe  MOV dword ptr [EBP + -0x4c],0xcb
0040f905  MOV dword ptr [EBP + -0x48],0x3d
0040f90c  MOV dword ptr [EBP + -0x44],0xcb
0040f913  MOV dword ptr [EBP + -0x40],0x24
0040f91a  MOV dword ptr [EBP + -0x3c],0x78
0040f921  MOV dword ptr [EBP + -0x38],0xffffffee
0040f928  MOV dword ptr [EBP + -0x34],0x78
0040f92f  MOV dword ptr [EBP + -0x30],0x3d
0040f936  MOV dword ptr [EBP + -0x2c],0x78
0040f93d  MOV dword ptr [EBP + -0x24],0x143
0040f944  MOV dword ptr [EBP + -0x20],0x131
0040f94b  MOV dword ptr [EBP + -0x1c],0xf3
0040f952  MOV dword ptr [EBP + -0x18],0x132
0040f959  MOV dword ptr [EBP + -0x14],0x1c7
0040f960  MOV dword ptr [EBP + -0x10],0xeb
0040f967  MOV dword ptr [EBP + -0xc],0x6e
0040f96e  MOV dword ptr [EBP + -0x8],0xea
0040f975  MOV EAX,dword ptr [EBP + 0x8]
0040f978  PUSH EAX
0040f979  MOV ECX,dword ptr [EBP + 0xffffff14]
0040f97f  MOV ECX,dword ptr [ECX + 0x178]
0040f985  CALL 0x005cb820
0040f98a  MOV dword ptr [EBP + -0x4],EAX
0040f98d  MOV EDX,dword ptr [EBP + -0x4]
0040f990  MOV dword ptr [EBP + 0xffffff10],EDX
0040f996  MOV EAX,dword ptr [EBP + 0xffffff10]
0040f99c  SUB EAX,0x1
0040f99f  MOV dword ptr [EBP + 0xffffff10],EAX
0040f9a5  CMP dword ptr [EBP + 0xffffff10],0x3
0040f9ac  JA 0x0040fa61
0040f9b2  MOV ECX,dword ptr [EBP + 0xffffff10]
0040f9b8  JMP dword ptr [ECX*0x4 + 0x40fa6c]
0040f9bf  MOV EDX,dword ptr [EBP + 0x8]
0040f9c2  IMUL EDX,EDX,0x30
0040f9c5  MOV EAX,dword ptr [EBP + EDX*0x1 + 0xffffff1c]
0040f9cc  JMP 0x0040fa63
0040f9d1  MOV EAX,dword ptr [EBP + 0x8]
0040f9d4  IMUL EAX,EAX,0x118
0040f9da  MOV ECX,dword ptr [0x00790324]
0040f9e0  CMP byte ptr [ECX + EAX*0x1 + 0x11b],0x0
0040f9e8  SETNZ DL
0040f9eb  MOVZX EAX,DL
0040f9ee  TEST EAX,EAX
0040f9f0  JZ 0x0040fa03
0040f9f2  CMP dword ptr [EBP + 0xc],0x1
0040f9f6  JNZ 0x0040fa03
0040f9f8  MOV ECX,dword ptr [EBP + 0x8]
0040f9fb  MOV EAX,dword ptr [EBP + ECX*0x8 + -0x20]
0040f9ff  JMP 0x0040fa63
0040fa03  MOV EDX,dword ptr [EBP + 0x8]
0040fa06  IMUL EDX,EDX,0x30
0040fa09  LEA EAX,[EBP + EDX*0x1 + 0xffffff18]
0040fa10  MOV ECX,dword ptr [EBP + 0xc]
0040fa13  MOV EAX,dword ptr [EAX + ECX*0x8 + 0xc]
0040fa17  JMP 0x0040fa63
0040fa19  MOV EDX,dword ptr [EBP + 0x8]
0040fa1c  IMUL EDX,EDX,0x30
0040fa1f  LEA EAX,[EBP + EDX*0x1 + 0xffffff18]
0040fa26  MOV ECX,dword ptr [EBP + 0xc]
0040fa29  MOV EAX,dword ptr [EAX + ECX*0x8 + 0xc]
0040fa2d  JMP 0x0040fa63
0040fa2f  CMP dword ptr [EBP + 0xc],0x2
0040fa33  JGE 0x0040fa4b
0040fa35  MOV EDX,dword ptr [EBP + 0x8]
0040fa38  IMUL EDX,EDX,0x30
0040fa3b  LEA EAX,[EBP + EDX*0x1 + 0xffffff18]
0040fa42  MOV ECX,dword ptr [EBP + 0xc]
0040fa45  MOV EAX,dword ptr [EAX + ECX*0x8 + 0xc]
0040fa49  JMP 0x0040fa63
0040fa4b  MOV EDX,dword ptr [EBP + 0x8]
0040fa4e  IMUL EDX,EDX,0x30
0040fa51  LEA EAX,[EBP + EDX*0x1 + 0xffffff18]
0040fa58  MOV ECX,dword ptr [EBP + 0xc]
0040fa5b  MOV EAX,dword ptr [EAX + ECX*0x8 + 0x14]
0040fa5f  JMP 0x0040fa63
0040fa61  XOR EAX,EAX
0040fa63  MOV ESP,EBP
0040fa65  POP EBP
0040fa66  RET 0x8

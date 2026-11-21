; FUN_0040d0f0  0040d0f0
0040d0f0  PUSH EBP
0040d0f1  MOV EBP,ESP
0040d0f3  SUB ESP,0xcc
0040d0f9  MOV dword ptr [EBP + 0xffffff34],ECX
0040d0ff  MOV dword ptr [EBP + -0x4],0x0
0040d106  MOV dword ptr [EBP + -0x8],0x0
0040d10d  MOV dword ptr [EBP + 0xffffff38],0x180
0040d117  MOV dword ptr [EBP + 0xffffff3c],0xec
0040d121  MOV dword ptr [EBP + 0xffffff40],0x143
0040d12b  MOV dword ptr [EBP + 0xffffff44],0xec
0040d135  MOV dword ptr [EBP + 0xffffff48],0x192
0040d13f  MOV dword ptr [EBP + 0xffffff4c],0xec
0040d149  MOV dword ptr [EBP + 0xffffff50],0x176
0040d153  MOV dword ptr [EBP + 0xffffff54],0x93
0040d15d  MOV dword ptr [EBP + 0xffffff58],0x143
0040d167  MOV dword ptr [EBP + 0xffffff5c],0x93
0040d171  MOV dword ptr [EBP + 0xffffff60],0x192
0040d17b  MOV dword ptr [EBP + 0xffffff64],0x93
0040d185  MOV dword ptr [EBP + 0xffffff68],0xc0
0040d18f  MOV dword ptr [EBP + 0xffffff6c],0xec
0040d199  MOV dword ptr [EBP + 0xffffff70],0x91
0040d1a3  MOV dword ptr [EBP + 0xffffff74],0xec
0040d1ad  MOV dword ptr [EBP + 0xffffff78],0xe0
0040d1b7  MOV dword ptr [EBP + 0xffffff7c],0xec
0040d1c1  MOV dword ptr [EBP + -0x80],0xca
0040d1c8  MOV dword ptr [EBP + -0x7c],0x93
0040d1cf  MOV dword ptr [EBP + -0x78],0x9b
0040d1d6  MOV dword ptr [EBP + -0x74],0x93
0040d1dd  MOV dword ptr [EBP + -0x70],0xea
0040d1e4  MOV dword ptr [EBP + -0x6c],0x93
0040d1eb  MOV dword ptr [EBP + -0x68],0x203
0040d1f2  MOV dword ptr [EBP + -0x64],0xae
0040d1f9  MOV dword ptr [EBP + -0x60],0x1d5
0040d200  MOV dword ptr [EBP + -0x5c],0xae
0040d207  MOV dword ptr [EBP + -0x58],0x224
0040d20e  MOV dword ptr [EBP + -0x54],0xae
0040d215  MOV dword ptr [EBP + -0x50],0x203
0040d21c  MOV dword ptr [EBP + -0x4c],0x59
0040d223  MOV dword ptr [EBP + -0x48],0x1d5
0040d22a  MOV dword ptr [EBP + -0x44],0x59
0040d231  MOV dword ptr [EBP + -0x40],0x224
0040d238  MOV dword ptr [EBP + -0x3c],0x59
0040d23f  MOV dword ptr [EBP + -0x38],0x39
0040d246  MOV dword ptr [EBP + -0x34],0xae
0040d24d  MOV dword ptr [EBP + -0x30],0x1
0040d254  MOV dword ptr [EBP + -0x2c],0xae
0040d25b  MOV dword ptr [EBP + -0x28],0x50
0040d262  MOV dword ptr [EBP + -0x24],0xae
0040d269  MOV dword ptr [EBP + -0x20],0x39
0040d270  MOV dword ptr [EBP + -0x1c],0x59
0040d277  MOV dword ptr [EBP + -0x18],0x1
0040d27e  MOV dword ptr [EBP + -0x14],0x59
0040d285  MOV dword ptr [EBP + -0x10],0x50
0040d28c  MOV dword ptr [EBP + -0xc],0x59
0040d293  CMP dword ptr [EBP + 0x8],0x4
0040d297  JNZ 0x0040d2a6
0040d299  MOV EAX,dword ptr [EBP + 0x10]
0040d29c  IMUL EAX,EAX,0xe
0040d29f  ADD EAX,0x109
0040d2a4  JMP 0x0040d31d
0040d2a6  MOV EAX,dword ptr [EBP + 0xc]
0040d2a9  PUSH EAX
0040d2aa  MOV ECX,dword ptr [EBP + 0x8]
0040d2ad  PUSH ECX
0040d2ae  MOV ECX,dword ptr [0x00790324]
0040d2b4  CALL 0x004194c0
0040d2b9  PUSH EAX
0040d2ba  MOV ECX,dword ptr [EBP + 0xffffff34]
0040d2c0  CALL 0x0040d0b0
0040d2c5  MOV dword ptr [EBP + -0x8],EAX
0040d2c8  MOV EDX,dword ptr [EBP + 0x8]
0040d2cb  IMUL EDX,EDX,0x30
0040d2ce  LEA EAX,[EBP + EDX*0x1 + 0xffffff38]
0040d2d5  MOV ECX,dword ptr [EBP + 0xc]
0040d2d8  ADD ECX,dword ptr [EBP + -0x8]
0040d2db  MOV EDX,dword ptr [EBP + 0x10]
0040d2de  IMUL EDX,EDX,0xc
0040d2e1  ADD EDX,dword ptr [EAX + ECX*0x8]
0040d2e4  MOV dword ptr [EBP + -0x4],EDX
0040d2e7  MOV EAX,dword ptr [EBP + 0x8]
0040d2ea  IMUL EAX,EAX,0x118
0040d2f0  ADD EAX,dword ptr [EBP + 0xc]
0040d2f3  MOV ECX,dword ptr [0x00790324]
0040d2f9  CMP byte ptr [ECX + EAX*0x1 + 0x10c],0x0
0040d301  SETNZ DL
0040d304  MOVZX EAX,DL
0040d307  TEST EAX,EAX
0040d309  JZ 0x0040d31a
0040d30b  CMP dword ptr [EBP + 0x10],0x2
0040d30f  JNZ 0x0040d31a
0040d311  MOV ECX,dword ptr [EBP + -0x4]
0040d314  SUB ECX,0x14
0040d317  MOV dword ptr [EBP + -0x4],ECX
0040d31a  MOV EAX,dword ptr [EBP + -0x4]
0040d31d  MOV ESP,EBP
0040d31f  POP EBP
0040d320  RET 0xc

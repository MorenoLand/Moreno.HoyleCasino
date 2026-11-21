; FUN_0040d330  0040d330
0040d330  PUSH EBP
0040d331  MOV EBP,ESP
0040d333  SUB ESP,0xcc
0040d339  MOV dword ptr [EBP + 0xffffff34],ECX
0040d33f  MOV dword ptr [EBP + -0x8],0x0
0040d346  MOV dword ptr [EBP + -0x4],0x0
0040d34d  MOV dword ptr [EBP + 0xffffff38],0x180
0040d357  MOV dword ptr [EBP + 0xffffff3c],0xec
0040d361  MOV dword ptr [EBP + 0xffffff40],0x143
0040d36b  MOV dword ptr [EBP + 0xffffff44],0xec
0040d375  MOV dword ptr [EBP + 0xffffff48],0x192
0040d37f  MOV dword ptr [EBP + 0xffffff4c],0xec
0040d389  MOV dword ptr [EBP + 0xffffff50],0x176
0040d393  MOV dword ptr [EBP + 0xffffff54],0x93
0040d39d  MOV dword ptr [EBP + 0xffffff58],0x143
0040d3a7  MOV dword ptr [EBP + 0xffffff5c],0x93
0040d3b1  MOV dword ptr [EBP + 0xffffff60],0x192
0040d3bb  MOV dword ptr [EBP + 0xffffff64],0x93
0040d3c5  MOV dword ptr [EBP + 0xffffff68],0xc0
0040d3cf  MOV dword ptr [EBP + 0xffffff6c],0xec
0040d3d9  MOV dword ptr [EBP + 0xffffff70],0x91
0040d3e3  MOV dword ptr [EBP + 0xffffff74],0xec
0040d3ed  MOV dword ptr [EBP + 0xffffff78],0xe0
0040d3f7  MOV dword ptr [EBP + 0xffffff7c],0xec
0040d401  MOV dword ptr [EBP + -0x80],0xca
0040d408  MOV dword ptr [EBP + -0x7c],0x93
0040d40f  MOV dword ptr [EBP + -0x78],0x9b
0040d416  MOV dword ptr [EBP + -0x74],0x93
0040d41d  MOV dword ptr [EBP + -0x70],0xea
0040d424  MOV dword ptr [EBP + -0x6c],0x93
0040d42b  MOV dword ptr [EBP + -0x68],0x203
0040d432  MOV dword ptr [EBP + -0x64],0xae
0040d439  MOV dword ptr [EBP + -0x60],0x1d5
0040d440  MOV dword ptr [EBP + -0x5c],0xae
0040d447  MOV dword ptr [EBP + -0x58],0x224
0040d44e  MOV dword ptr [EBP + -0x54],0xae
0040d455  MOV dword ptr [EBP + -0x50],0x203
0040d45c  MOV dword ptr [EBP + -0x4c],0x59
0040d463  MOV dword ptr [EBP + -0x48],0x1d5
0040d46a  MOV dword ptr [EBP + -0x44],0x59
0040d471  MOV dword ptr [EBP + -0x40],0x224
0040d478  MOV dword ptr [EBP + -0x3c],0x59
0040d47f  MOV dword ptr [EBP + -0x38],0x39
0040d486  MOV dword ptr [EBP + -0x34],0xae
0040d48d  MOV dword ptr [EBP + -0x30],0x1
0040d494  MOV dword ptr [EBP + -0x2c],0xae
0040d49b  MOV dword ptr [EBP + -0x28],0x50
0040d4a2  MOV dword ptr [EBP + -0x24],0xae
0040d4a9  MOV dword ptr [EBP + -0x20],0x39
0040d4b0  MOV dword ptr [EBP + -0x1c],0x59
0040d4b7  MOV dword ptr [EBP + -0x18],0x1
0040d4be  MOV dword ptr [EBP + -0x14],0x59
0040d4c5  MOV dword ptr [EBP + -0x10],0x50
0040d4cc  MOV dword ptr [EBP + -0xc],0x59
0040d4d3  CMP dword ptr [EBP + 0x8],0x4
0040d4d7  JNZ 0x0040d4e0
0040d4d9  MOV EAX,0x46
0040d4de  JMP 0x0040d527
0040d4e0  MOV EAX,dword ptr [EBP + 0xc]
0040d4e3  PUSH EAX
0040d4e4  MOV ECX,dword ptr [EBP + 0x8]
0040d4e7  PUSH ECX
0040d4e8  MOV ECX,dword ptr [0x00790324]
0040d4ee  CALL 0x004194c0
0040d4f3  PUSH EAX
0040d4f4  MOV ECX,dword ptr [EBP + 0xffffff34]
0040d4fa  CALL 0x0040d0b0
0040d4ff  MOV dword ptr [EBP + -0x4],EAX
0040d502  MOV EDX,dword ptr [EBP + 0x8]
0040d505  IMUL EDX,EDX,0x30
0040d508  LEA EAX,[EBP + EDX*0x1 + 0xffffff38]
0040d50f  MOV ECX,dword ptr [EBP + 0xc]
0040d512  ADD ECX,dword ptr [EBP + -0x4]
0040d515  MOV EDX,dword ptr [EBP + 0x10]
0040d518  IMUL EDX,EDX,0x6
0040d51b  MOV EAX,dword ptr [EAX + ECX*0x8 + 0x4]
0040d51f  SUB EAX,EDX
0040d521  MOV dword ptr [EBP + -0x8],EAX
0040d524  MOV EAX,dword ptr [EBP + -0x8]
0040d527  MOV ESP,EBP
0040d529  POP EBP
0040d52a  RET 0xc

; FUN_0062f180  0062f180
0062f180  PUSH EBP
0062f181  MOV EBP,ESP
0062f183  SUB ESP,0x18
0062f186  MOV dword ptr [EBP + -0x10],ECX
0062f189  MOV EAX,dword ptr [EBP + 0xc]
0062f18c  MOV dword ptr [EBP + -0x8],EAX
0062f18f  MOV ECX,dword ptr [EBP + 0x8]
0062f192  MOV dword ptr [EBP + -0x4],ECX
0062f195  MOV ECX,dword ptr [EBP + -0x10]
0062f198  CALL 0x0062ee80
0062f19d  MOV dword ptr [EBP + -0xc],EAX
0062f1a0  MOV EDX,dword ptr [EBP + -0x10]
0062f1a3  MOVZX EAX,byte ptr [EDX + 0x3f]
0062f1a7  TEST EAX,EAX
0062f1a9  JZ 0x0062f1b8
0062f1ab  CMP dword ptr [EBP + -0xc],0x22
0062f1af  JNZ 0x0062f1b8
0062f1b1  MOV dword ptr [EBP + -0x4],0x22
0062f1b8  CMP dword ptr [EBP + -0x4],0x20
0062f1bc  JNZ 0x0062f1de
0062f1be  MOV ECX,dword ptr [EBP + -0xc]
0062f1c1  PUSH ECX
0062f1c2  MOV EDX,dword ptr [EBP + -0x10]
0062f1c5  MOV EAX,dword ptr [EDX]
0062f1c7  MOV ECX,dword ptr [EBP + -0x10]
0062f1ca  MOV EDX,dword ptr [EAX + 0x18]
0062f1cd  CALL EDX
0062f1cf  MOVZX EAX,AL
0062f1d2  NEG EAX
0062f1d4  SBB EAX,EAX
0062f1d6  ADD EAX,0x1
0062f1d9  MOV dword ptr [EBP + -0x14],EAX
0062f1dc  JMP 0x0062f1ec
0062f1de  MOV ECX,dword ptr [EBP + -0xc]
0062f1e1  XOR EDX,EDX
0062f1e3  CMP ECX,dword ptr [EBP + -0x4]
0062f1e6  SETNZ DL
0062f1e9  MOV dword ptr [EBP + -0x14],EDX
0062f1ec  CMP dword ptr [EBP + -0x14],0x0
0062f1f0  JZ 0x0062f345
0062f1f6  MOV EAX,dword ptr [EBP + -0xc]
0062f1f9  PUSH EAX
0062f1fa  MOV ECX,dword ptr [EBP + -0x10]
0062f1fd  MOV EDX,dword ptr [ECX]
0062f1ff  MOV ECX,dword ptr [EBP + -0x10]
0062f202  MOV EAX,dword ptr [EDX + 0x1c]
0062f205  CALL EAX
0062f207  MOVZX ECX,AL
0062f20a  TEST ECX,ECX
0062f20c  JNZ 0x0062f345
0062f212  MOV EDX,dword ptr [EBP + 0x10]
0062f215  MOV EAX,dword ptr [EBP + 0xc]
0062f218  LEA ECX,[EAX + EDX*0x1 + -0x1]
0062f21c  CMP dword ptr [EBP + -0x8],ECX
0062f21f  JC 0x0062f28d
0062f221  PUSH 0x6d9c50
0062f226  CALL 0x0062fde0
0062f22b  ADD ESP,0x4
0062f22e  XOR EDX,EDX
0062f230  JNZ 0x0062f249
0062f232  PUSH 0xea
0062f237  PUSH 0x6d9c18
0062f23c  PUSH 0x6b2f58
0062f241  CALL 0x005e9f20
0062f246  ADD ESP,0xc
0062f249  MOV ECX,dword ptr [EBP + -0x8]
0062f24c  SUB ECX,0x1
0062f24f  CMP ECX,dword ptr [EBP + 0xc]
0062f252  JC 0x0062f27f
0062f254  MOV EDX,dword ptr [EBP + -0x8]
0062f257  MOV byte ptr [EDX + -0x1],0x2e
0062f25b  MOV EAX,dword ptr [EBP + -0x8]
0062f25e  SUB EAX,0x2
0062f261  CMP EAX,dword ptr [EBP + 0xc]
0062f264  JC 0x0062f27f
0062f266  MOV ECX,dword ptr [EBP + -0x8]
0062f269  MOV byte ptr [ECX + -0x2],0x2e
0062f26d  MOV EDX,dword ptr [EBP + -0x8]
0062f270  SUB EDX,0x3
0062f273  CMP EDX,dword ptr [EBP + 0xc]
0062f276  JC 0x0062f27f
0062f278  MOV EAX,dword ptr [EBP + -0x8]
0062f27b  MOV byte ptr [EAX + -0x3],0x2e
0062f27f  MOV ECX,dword ptr [EBP + -0x8]
0062f282  MOV byte ptr [ECX],0x0
0062f285  MOV EAX,dword ptr [EBP + 0xc]
0062f288  JMP 0x0062f34e
0062f28d  CMP dword ptr [EBP + -0xc],0x100
0062f294  JGE 0x0062f2a0
0062f296  MOV EDX,dword ptr [EBP + -0x8]
0062f299  MOV AL,byte ptr [EBP + -0xc]
0062f29c  MOV byte ptr [EDX],AL
0062f29e  JMP 0x0062f2ea
0062f2a0  CMP dword ptr [EBP + -0xc],0x10000
0062f2a7  JGE 0x0062f2b5
0062f2a9  MOV ECX,dword ptr [EBP + -0x8]
0062f2ac  MOV DX,word ptr [EBP + -0xc]
0062f2b0  MOV word ptr [ECX],DX
0062f2b3  JMP 0x0062f2ea
0062f2b5  MOV EAX,dword ptr [EBP + -0x8]
0062f2b8  MOV CL,byte ptr [EBP + -0xc]
0062f2bb  MOV byte ptr [EAX],CL
0062f2bd  MOV EDX,dword ptr [EBP + -0x8]
0062f2c0  MOV AL,byte ptr [EBP + -0xb]
0062f2c3  MOV byte ptr [EDX + 0x1],AL
0062f2c6  MOV ECX,dword ptr [EBP + -0x8]
0062f2c9  MOV DL,byte ptr [EBP + -0xa]
0062f2cc  MOV byte ptr [ECX + 0x2],DL
0062f2cf  XOR EAX,EAX
0062f2d1  JNZ 0x0062f2ea
0062f2d3  PUSH 0x109
0062f2d8  PUSH 0x6d9c18
0062f2dd  PUSH 0x6b2f58
0062f2e2  CALL 0x005e9f20
0062f2e7  ADD ESP,0xc
0062f2ea  MOV EDX,dword ptr [EBP + -0x8]
0062f2ed  PUSH EDX
0062f2ee  CALL dword ptr [0x006b2194]
0062f2f4  ADD ESP,0x4
0062f2f7  MOV dword ptr [EBP + -0x8],EAX
0062f2fa  MOV EAX,dword ptr [EBP + -0x10]
0062f2fd  MOV ECX,dword ptr [EAX + 0x24]
0062f300  MOVZX EDX,byte ptr [ECX]
0062f303  TEST EDX,EDX
0062f305  JZ 0x0062f324
0062f307  MOV EAX,dword ptr [EBP + -0x10]
0062f30a  MOV ECX,dword ptr [EAX + 0x20]
0062f30d  MOV EDX,dword ptr [EBP + -0x10]
0062f310  ADD ECX,dword ptr [EDX + 0x28]
0062f313  MOV EAX,dword ptr [EBP + -0x10]
0062f316  CMP dword ptr [EAX + 0x24],ECX
0062f319  JNC 0x0062f324
0062f31b  MOV dword ptr [EBP + -0x18],0x0
0062f322  JMP 0x0062f32b
0062f324  MOV dword ptr [EBP + -0x18],0x1
0062f32b  MOVZX ECX,byte ptr [EBP + -0x18]
0062f32f  TEST ECX,ECX
0062f331  JZ 0x0062f335
0062f333  JMP 0x0062f345
0062f335  MOV ECX,dword ptr [EBP + -0x10]
0062f338  CALL 0x0062ee80
0062f33d  MOV dword ptr [EBP + -0xc],EAX
0062f340  JMP 0x0062f1b8
0062f345  MOV EDX,dword ptr [EBP + -0x8]
0062f348  MOV byte ptr [EDX],0x0
0062f34b  MOV EAX,dword ptr [EBP + 0xc]
0062f34e  MOV ESP,EBP
0062f350  POP EBP
0062f351  RET 0xc

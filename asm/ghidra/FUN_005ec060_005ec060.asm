; FUN_005ec060  005ec060
005ec060  PUSH EBP
005ec061  MOV EBP,ESP
005ec063  SUB ESP,0x20
005ec066  MOV dword ptr [EBP + -0x20],ECX
005ec069  MOV ECX,dword ptr [EBP + -0x20]
005ec06c  CALL 0x005f5550
005ec071  MOV dword ptr [EBP + -0x4],EAX
005ec074  MOV ECX,dword ptr [EBP + -0x20]
005ec077  CALL 0x005f5590
005ec07c  MOV dword ptr [EBP + -0x8],EAX
005ec07f  MOV EAX,dword ptr [EBP + 0xc]
005ec082  MOV dword ptr [EAX],0x0
005ec088  MOV dword ptr [EBP + -0x14],0x0
005ec08f  JMP 0x005ec09a
005ec091  MOV ECX,dword ptr [EBP + -0x14]
005ec094  ADD ECX,0x1
005ec097  MOV dword ptr [EBP + -0x14],ECX
005ec09a  MOV EDX,dword ptr [EBP + -0x14]
005ec09d  CMP EDX,dword ptr [EBP + -0x8]
005ec0a0  JGE 0x005ec12e
005ec0a6  MOV byte ptr [EBP + -0x19],0x1
005ec0aa  MOV dword ptr [EBP + -0x18],0x0
005ec0b1  JMP 0x005ec0bc
005ec0b3  MOV EAX,dword ptr [EBP + -0x18]
005ec0b6  ADD EAX,0x1
005ec0b9  MOV dword ptr [EBP + -0x18],EAX
005ec0bc  MOV ECX,dword ptr [EBP + -0x18]
005ec0bf  CMP ECX,dword ptr [EBP + -0x4]
005ec0c2  JGE 0x005ec10e
005ec0c4  LEA EDX,[EBP + -0x9]
005ec0c7  PUSH EDX
005ec0c8  LEA EAX,[EBP + -0x10]
005ec0cb  PUSH EAX
005ec0cc  MOV ECX,dword ptr [EBP + -0x14]
005ec0cf  PUSH ECX
005ec0d0  MOV EDX,dword ptr [EBP + -0x18]
005ec0d3  PUSH EDX
005ec0d4  MOV EAX,dword ptr [EBP + -0x20]
005ec0d7  MOV ECX,dword ptr [EAX + 0x15c]
005ec0dd  PUSH ECX
005ec0de  MOV EDX,dword ptr [EBP + -0x20]
005ec0e1  MOV EAX,dword ptr [EDX + 0x164]
005ec0e7  PUSH EAX
005ec0e8  MOV ECX,dword ptr [EBP + -0x20]
005ec0eb  MOV ECX,dword ptr [ECX + 0x174]
005ec0f1  CALL 0x00616b30
005ec0f6  MOVZX EDX,byte ptr [EBP + -0xd]
005ec0fa  CMP EDX,0xff
005ec100  JNZ 0x005ec10c
005ec102  MOV byte ptr [EBP + -0x19],0x0
005ec106  MOV EAX,dword ptr [EBP + -0x4]
005ec109  MOV dword ptr [EBP + -0x18],EAX
005ec10c  JMP 0x005ec0b3
005ec10e  MOVZX ECX,byte ptr [EBP + -0x19]
005ec112  TEST ECX,ECX
005ec114  JZ 0x005ec123
005ec116  MOV EDX,dword ptr [EBP + -0x14]
005ec119  ADD EDX,0x1
005ec11c  MOV EAX,dword ptr [EBP + 0xc]
005ec11f  MOV dword ptr [EAX],EDX
005ec121  JMP 0x005ec129
005ec123  MOV ECX,dword ptr [EBP + -0x8]
005ec126  MOV dword ptr [EBP + -0x14],ECX
005ec129  JMP 0x005ec091
005ec12e  MOV EDX,dword ptr [EBP + 0x8]
005ec131  MOV dword ptr [EDX],0x0
005ec137  MOV dword ptr [EBP + -0x18],0x0
005ec13e  JMP 0x005ec149
005ec140  MOV EAX,dword ptr [EBP + -0x18]
005ec143  ADD EAX,0x1
005ec146  MOV dword ptr [EBP + -0x18],EAX
005ec149  MOV ECX,dword ptr [EBP + -0x18]
005ec14c  CMP ECX,dword ptr [EBP + -0x4]
005ec14f  JGE 0x005ec1dd
005ec155  MOV byte ptr [EBP + -0x19],0x1
005ec159  MOV dword ptr [EBP + -0x14],0x0
005ec160  JMP 0x005ec16b
005ec162  MOV EDX,dword ptr [EBP + -0x14]
005ec165  ADD EDX,0x1
005ec168  MOV dword ptr [EBP + -0x14],EDX
005ec16b  MOV EAX,dword ptr [EBP + -0x14]
005ec16e  CMP EAX,dword ptr [EBP + -0x8]
005ec171  JGE 0x005ec1bd
005ec173  LEA ECX,[EBP + -0x9]
005ec176  PUSH ECX
005ec177  LEA EDX,[EBP + -0x10]
005ec17a  PUSH EDX
005ec17b  MOV EAX,dword ptr [EBP + -0x14]
005ec17e  PUSH EAX
005ec17f  MOV ECX,dword ptr [EBP + -0x18]
005ec182  PUSH ECX
005ec183  MOV EDX,dword ptr [EBP + -0x20]
005ec186  MOV EAX,dword ptr [EDX + 0x15c]
005ec18c  PUSH EAX
005ec18d  MOV ECX,dword ptr [EBP + -0x20]
005ec190  MOV EDX,dword ptr [ECX + 0x164]
005ec196  PUSH EDX
005ec197  MOV EAX,dword ptr [EBP + -0x20]
005ec19a  MOV ECX,dword ptr [EAX + 0x174]
005ec1a0  CALL 0x00616b30
005ec1a5  MOVZX ECX,byte ptr [EBP + -0xd]
005ec1a9  CMP ECX,0xff
005ec1af  JNZ 0x005ec1bb
005ec1b1  MOV byte ptr [EBP + -0x19],0x0
005ec1b5  MOV EDX,dword ptr [EBP + -0x8]
005ec1b8  MOV dword ptr [EBP + -0x14],EDX
005ec1bb  JMP 0x005ec162
005ec1bd  MOVZX EAX,byte ptr [EBP + -0x19]
005ec1c1  TEST EAX,EAX
005ec1c3  JZ 0x005ec1d2
005ec1c5  MOV ECX,dword ptr [EBP + -0x18]
005ec1c8  ADD ECX,0x1
005ec1cb  MOV EDX,dword ptr [EBP + 0x8]
005ec1ce  MOV dword ptr [EDX],ECX
005ec1d0  JMP 0x005ec1d8
005ec1d2  MOV EAX,dword ptr [EBP + -0x4]
005ec1d5  MOV dword ptr [EBP + -0x18],EAX
005ec1d8  JMP 0x005ec140
005ec1dd  MOV ECX,dword ptr [EBP + 0x14]
005ec1e0  MOV dword ptr [ECX],0x0
005ec1e6  MOV EDX,dword ptr [EBP + -0x8]
005ec1e9  SUB EDX,0x1
005ec1ec  MOV dword ptr [EBP + -0x14],EDX
005ec1ef  JMP 0x005ec1fa
005ec1f1  MOV EAX,dword ptr [EBP + -0x14]
005ec1f4  SUB EAX,0x1
005ec1f7  MOV dword ptr [EBP + -0x14],EAX
005ec1fa  CMP dword ptr [EBP + -0x14],0x0
005ec1fe  JL 0x005ec28c
005ec204  MOV byte ptr [EBP + -0x19],0x1
005ec208  MOV dword ptr [EBP + -0x18],0x0
005ec20f  JMP 0x005ec21a
005ec211  MOV ECX,dword ptr [EBP + -0x18]
005ec214  ADD ECX,0x1
005ec217  MOV dword ptr [EBP + -0x18],ECX
005ec21a  MOV EDX,dword ptr [EBP + -0x18]
005ec21d  CMP EDX,dword ptr [EBP + -0x4]
005ec220  JGE 0x005ec26b
005ec222  LEA EAX,[EBP + -0x9]
005ec225  PUSH EAX
005ec226  LEA ECX,[EBP + -0x10]
005ec229  PUSH ECX
005ec22a  MOV EDX,dword ptr [EBP + -0x14]
005ec22d  PUSH EDX
005ec22e  MOV EAX,dword ptr [EBP + -0x18]
005ec231  PUSH EAX
005ec232  MOV ECX,dword ptr [EBP + -0x20]
005ec235  MOV EDX,dword ptr [ECX + 0x15c]
005ec23b  PUSH EDX
005ec23c  MOV EAX,dword ptr [EBP + -0x20]
005ec23f  MOV ECX,dword ptr [EAX + 0x164]
005ec245  PUSH ECX
005ec246  MOV EDX,dword ptr [EBP + -0x20]
005ec249  MOV ECX,dword ptr [EDX + 0x174]
005ec24f  CALL 0x00616b30
005ec254  MOVZX EAX,byte ptr [EBP + -0xd]
005ec258  CMP EAX,0xff
005ec25d  JNZ 0x005ec269
005ec25f  MOV byte ptr [EBP + -0x19],0x0
005ec263  MOV ECX,dword ptr [EBP + -0x4]
005ec266  MOV dword ptr [EBP + -0x18],ECX
005ec269  JMP 0x005ec211
005ec26b  MOVZX EDX,byte ptr [EBP + -0x19]
005ec26f  TEST EDX,EDX
005ec271  JZ 0x005ec280
005ec273  MOV EAX,dword ptr [EBP + -0x8]
005ec276  SUB EAX,dword ptr [EBP + -0x14]
005ec279  MOV ECX,dword ptr [EBP + 0x14]
005ec27c  MOV dword ptr [ECX],EAX
005ec27e  JMP 0x005ec287
005ec280  MOV dword ptr [EBP + -0x14],0x0
005ec287  JMP 0x005ec1f1
005ec28c  MOV EDX,dword ptr [EBP + 0x10]
005ec28f  MOV dword ptr [EDX],0x0
005ec295  MOV EAX,dword ptr [EBP + -0x4]
005ec298  SUB EAX,0x1
005ec29b  MOV dword ptr [EBP + -0x18],EAX
005ec29e  JMP 0x005ec2a9
005ec2a0  MOV ECX,dword ptr [EBP + -0x18]
005ec2a3  SUB ECX,0x1
005ec2a6  MOV dword ptr [EBP + -0x18],ECX
005ec2a9  CMP dword ptr [EBP + -0x18],0x0
005ec2ad  JL 0x005ec33c
005ec2b3  MOV byte ptr [EBP + -0x19],0x1
005ec2b7  MOV dword ptr [EBP + -0x14],0x0
005ec2be  JMP 0x005ec2c9
005ec2c0  MOV EDX,dword ptr [EBP + -0x14]
005ec2c3  ADD EDX,0x1
005ec2c6  MOV dword ptr [EBP + -0x14],EDX
005ec2c9  MOV EAX,dword ptr [EBP + -0x14]
005ec2cc  CMP EAX,dword ptr [EBP + -0x8]
005ec2cf  JGE 0x005ec31b
005ec2d1  LEA ECX,[EBP + -0x9]
005ec2d4  PUSH ECX
005ec2d5  LEA EDX,[EBP + -0x10]
005ec2d8  PUSH EDX
005ec2d9  MOV EAX,dword ptr [EBP + -0x14]
005ec2dc  PUSH EAX
005ec2dd  MOV ECX,dword ptr [EBP + -0x18]
005ec2e0  PUSH ECX
005ec2e1  MOV EDX,dword ptr [EBP + -0x20]
005ec2e4  MOV EAX,dword ptr [EDX + 0x15c]
005ec2ea  PUSH EAX
005ec2eb  MOV ECX,dword ptr [EBP + -0x20]
005ec2ee  MOV EDX,dword ptr [ECX + 0x164]
005ec2f4  PUSH EDX
005ec2f5  MOV EAX,dword ptr [EBP + -0x20]
005ec2f8  MOV ECX,dword ptr [EAX + 0x174]
005ec2fe  CALL 0x00616b30
005ec303  MOVZX ECX,byte ptr [EBP + -0xd]
005ec307  CMP ECX,0xff
005ec30d  JNZ 0x005ec319
005ec30f  MOV byte ptr [EBP + -0x19],0x0
005ec313  MOV EDX,dword ptr [EBP + -0x8]
005ec316  MOV dword ptr [EBP + -0x14],EDX
005ec319  JMP 0x005ec2c0
005ec31b  MOVZX EAX,byte ptr [EBP + -0x19]
005ec31f  TEST EAX,EAX
005ec321  JZ 0x005ec330
005ec323  MOV ECX,dword ptr [EBP + -0x4]
005ec326  SUB ECX,dword ptr [EBP + -0x18]
005ec329  MOV EDX,dword ptr [EBP + 0x10]
005ec32c  MOV dword ptr [EDX],ECX
005ec32e  JMP 0x005ec337
005ec330  MOV dword ptr [EBP + -0x18],0x0
005ec337  JMP 0x005ec2a0
005ec33c  MOV ESP,EBP
005ec33e  POP EBP
005ec33f  RET 0x10

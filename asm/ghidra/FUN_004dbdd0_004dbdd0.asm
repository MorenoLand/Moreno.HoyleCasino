; FUN_004dbdd0  004dbdd0
004dbdd0  PUSH EBP
004dbdd1  MOV EBP,ESP
004dbdd3  PUSH -0x1
004dbdd5  PUSH 0x6a25ee
004dbdda  MOV EAX,FS:[0x0]
004dbde0  PUSH EAX
004dbde1  SUB ESP,0x58
004dbde4  MOV EAX,[0x00781870]
004dbde9  XOR EAX,EBP
004dbdeb  PUSH EAX
004dbdec  LEA EAX,[EBP + -0xc]
004dbdef  MOV FS:[0x0],EAX
004dbdf5  MOV dword ptr [EBP + -0x48],ECX
004dbdf8  MOV byte ptr [EBP + -0x11],0x1
004dbdfc  MOV ECX,dword ptr [EBP + -0x48]
004dbdff  CALL 0x004c70d0
004dbe04  MOV dword ptr [EBP + -0x4c],EAX
004dbe07  MOV EAX,dword ptr [EBP + -0x4c]
004dbe0a  ADD EAX,0x1
004dbe0d  MOV dword ptr [EBP + -0x4c],EAX
004dbe10  CMP dword ptr [EBP + -0x4c],0x8
004dbe14  JA 0x004dbe31
004dbe16  MOV ECX,dword ptr [EBP + -0x4c]
004dbe19  MOVZX EDX,byte ptr [ECX + 0x4dc478]
004dbe20  JMP dword ptr [EDX*0x4 + 0x4dc470]
004dbe27  MOV byte ptr [EBP + -0x11],0x1
004dbe2b  JMP 0x004dbe31
004dbe2d  MOV byte ptr [EBP + -0x11],0x0
004dbe31  MOV EAX,dword ptr [EBP + -0x48]
004dbe34  CMP dword ptr [EAX + 0x44],0x0
004dbe38  JNZ 0x004dbf3d
004dbe3e  PUSH 0x178
004dbe43  CALL 0x00686d82
004dbe48  ADD ESP,0x4
004dbe4b  MOV dword ptr [EBP + -0x1c],EAX
004dbe4e  MOV dword ptr [EBP + -0x4],0x0
004dbe55  CMP dword ptr [EBP + -0x1c],0x0
004dbe59  JZ 0x004dbe68
004dbe5b  MOV ECX,dword ptr [EBP + -0x1c]
004dbe5e  CALL 0x005eaaf0
004dbe63  MOV dword ptr [EBP + -0x50],EAX
004dbe66  JMP 0x004dbe6f
004dbe68  MOV dword ptr [EBP + -0x50],0x0
004dbe6f  MOV ECX,dword ptr [EBP + -0x50]
004dbe72  MOV dword ptr [EBP + -0x18],ECX
004dbe75  MOV dword ptr [EBP + -0x4],0xffffffff
004dbe7c  MOV EDX,dword ptr [EBP + -0x48]
004dbe7f  MOV EAX,dword ptr [EBP + -0x18]
004dbe82  MOV dword ptr [EDX + 0x44],EAX
004dbe85  MOVZX ECX,byte ptr [EBP + -0x11]
004dbe89  TEST ECX,ECX
004dbe8b  JZ 0x004dbec6
004dbe8d  PUSH 0x186a5
004dbe92  MOV EDX,dword ptr [EBP + -0x48]
004dbe95  MOV ECX,dword ptr [EDX + 0x44]
004dbe98  CALL 0x005eaf00
004dbe9d  MOV EAX,dword ptr [EBP + -0x48]
004dbea0  MOV ECX,dword ptr [EAX + 0x14]
004dbea3  ADD ECX,0x5a
004dbea6  PUSH ECX
004dbea7  MOV EDX,dword ptr [EBP + -0x48]
004dbeaa  MOV EAX,dword ptr [EDX + 0x10]
004dbead  ADD EAX,0x64
004dbeb0  PUSH EAX
004dbeb1  MOV ECX,dword ptr [EBP + -0x48]
004dbeb4  MOV EDX,dword ptr [ECX + 0x44]
004dbeb7  MOV EAX,dword ptr [EBP + -0x48]
004dbeba  MOV ECX,dword ptr [EAX + 0x44]
004dbebd  MOV EDX,dword ptr [EDX]
004dbebf  MOV EAX,dword ptr [EDX + 0x44]
004dbec2  CALL EAX
004dbec4  JMP 0x004dbeff
004dbec6  PUSH 0x186a6
004dbecb  MOV ECX,dword ptr [EBP + -0x48]
004dbece  MOV ECX,dword ptr [ECX + 0x44]
004dbed1  CALL 0x005eaf00
004dbed6  MOV EDX,dword ptr [EBP + -0x48]
004dbed9  MOV EAX,dword ptr [EDX + 0x14]
004dbedc  ADD EAX,0x5a
004dbedf  PUSH EAX
004dbee0  MOV ECX,dword ptr [EBP + -0x48]
004dbee3  MOV EDX,dword ptr [ECX + 0x10]
004dbee6  SUB EDX,0x61
004dbee9  PUSH EDX
004dbeea  MOV EAX,dword ptr [EBP + -0x48]
004dbeed  MOV ECX,dword ptr [EAX + 0x44]
004dbef0  MOV EDX,dword ptr [EBP + -0x48]
004dbef3  MOV EAX,dword ptr [EDX + 0x44]
004dbef6  MOV EDX,dword ptr [ECX]
004dbef8  MOV ECX,EAX
004dbefa  MOV EAX,dword ptr [EDX + 0x44]
004dbefd  CALL EAX
004dbeff  MOV ECX,dword ptr [EBP + -0x48]
004dbf02  MOV EDX,dword ptr [ECX + 0x44]
004dbf05  MOV EAX,dword ptr [EBP + -0x48]
004dbf08  MOV ECX,dword ptr [EAX + 0x44]
004dbf0b  MOV EDX,dword ptr [EDX]
004dbf0d  MOV EAX,dword ptr [EDX + 0x70]
004dbf10  CALL EAX
004dbf12  PUSH 0xb4
004dbf17  MOV ECX,dword ptr [EBP + -0x48]
004dbf1a  MOV EDX,dword ptr [ECX + 0x44]
004dbf1d  MOV EAX,dword ptr [EBP + -0x48]
004dbf20  MOV ECX,dword ptr [EAX + 0x44]
004dbf23  MOV EDX,dword ptr [EDX]
004dbf25  MOV EAX,dword ptr [EDX + 0x6c]
004dbf28  CALL EAX
004dbf2a  MOV ECX,dword ptr [EBP + -0x48]
004dbf2d  MOV EDX,dword ptr [ECX + 0x44]
004dbf30  MOV EAX,dword ptr [EBP + -0x48]
004dbf33  MOV ECX,dword ptr [EAX + 0x44]
004dbf36  MOV EDX,dword ptr [EDX]
004dbf38  MOV EAX,dword ptr [EDX + 0x40]
004dbf3b  CALL EAX
004dbf3d  MOV ECX,dword ptr [EBP + -0x48]
004dbf40  CMP dword ptr [ECX + 0x3c],0x0
004dbf44  JNZ 0x004dc074
004dbf4a  PUSH 0x1d0
004dbf4f  CALL 0x00686d82
004dbf54  ADD ESP,0x4
004dbf57  MOV dword ptr [EBP + -0x24],EAX
004dbf5a  MOV dword ptr [EBP + -0x4],0x1
004dbf61  CMP dword ptr [EBP + -0x24],0x0
004dbf65  JZ 0x004dbf74
004dbf67  MOV ECX,dword ptr [EBP + -0x24]
004dbf6a  CALL 0x005ec5a0
004dbf6f  MOV dword ptr [EBP + -0x54],EAX
004dbf72  JMP 0x004dbf7b
004dbf74  MOV dword ptr [EBP + -0x54],0x0
004dbf7b  MOV EDX,dword ptr [EBP + -0x54]
004dbf7e  MOV dword ptr [EBP + -0x20],EDX
004dbf81  MOV dword ptr [EBP + -0x4],0xffffffff
004dbf88  MOV EAX,dword ptr [EBP + -0x48]
004dbf8b  MOV ECX,dword ptr [EBP + -0x20]
004dbf8e  MOV dword ptr [EAX + 0x3c],ECX
004dbf91  PUSH ECX
004dbf92  MOV EDX,ESP
004dbf94  MOV AX,[0x0075ee1c]
004dbf9a  MOV word ptr [EDX],AX
004dbf9d  MOV CL,byte ptr [0x0075ee1e]
004dbfa3  MOV byte ptr [EDX + 0x2],CL
004dbfa6  PUSH -0x1
004dbfa8  PUSH 0x38
004dbfaa  MOV EDX,dword ptr [EBP + -0x48]
004dbfad  MOV ECX,dword ptr [EDX + 0x3c]
004dbfb0  CALL 0x005ecd00
004dbfb5  MOV EAX,dword ptr [EBP + -0x48]
004dbfb8  MOV ECX,dword ptr [EAX + 0x44]
004dbfbb  MOV EDX,dword ptr [EBP + -0x48]
004dbfbe  MOV EAX,dword ptr [EDX + 0x44]
004dbfc1  MOV EDX,dword ptr [ECX]
004dbfc3  MOV ECX,EAX
004dbfc5  MOV EAX,dword ptr [EDX + 0x54]
004dbfc8  CALL EAX
004dbfca  ADD EAX,0x2
004dbfcd  PUSH EAX
004dbfce  MOV ECX,dword ptr [EBP + -0x48]
004dbfd1  MOV EDX,dword ptr [ECX + 0x44]
004dbfd4  MOV EAX,dword ptr [EBP + -0x48]
004dbfd7  MOV ECX,dword ptr [EAX + 0x44]
004dbfda  MOV EDX,dword ptr [EDX]
004dbfdc  MOV EAX,dword ptr [EDX + 0x4c]
004dbfdf  CALL EAX
004dbfe1  MOVZX ECX,byte ptr [EBP + -0x11]
004dbfe5  NEG ECX
004dbfe7  SBB ECX,ECX
004dbfe9  AND ECX,0xfffffffe
004dbfec  ADD ECX,0x7
004dbfef  ADD EAX,ECX
004dbff1  PUSH EAX
004dbff2  MOV EDX,dword ptr [EBP + -0x48]
004dbff5  MOV EAX,dword ptr [EDX + 0x3c]
004dbff8  MOV ECX,dword ptr [EBP + -0x48]
004dbffb  MOV ECX,dword ptr [ECX + 0x3c]
004dbffe  MOV EDX,dword ptr [EAX]
004dc000  MOV EAX,dword ptr [EDX + 0x44]
004dc003  CALL EAX
004dc005  PUSH 0x14
004dc007  MOV ECX,dword ptr [EBP + -0x48]
004dc00a  MOV ECX,dword ptr [ECX + 0x3c]
004dc00d  CALL 0x005eccb0
004dc012  PUSH 0x53
004dc014  MOV EDX,dword ptr [EBP + -0x48]
004dc017  MOV ECX,dword ptr [EDX + 0x3c]
004dc01a  CALL 0x005ecc60
004dc01f  PUSH 0x30
004dc021  MOV EAX,dword ptr [EBP + -0x48]
004dc024  MOV ECX,dword ptr [EAX + 0x3c]
004dc027  CALL 0x005ef310
004dc02c  MOV ECX,dword ptr [EBP + -0x48]
004dc02f  MOV EDX,dword ptr [ECX + 0x3c]
004dc032  MOV EAX,dword ptr [EBP + -0x48]
004dc035  MOV ECX,dword ptr [EAX + 0x3c]
004dc038  MOV EDX,dword ptr [EDX]
004dc03a  MOV EAX,dword ptr [EDX + 0x70]
004dc03d  CALL EAX
004dc03f  MOV ECX,dword ptr [EBP + -0x48]
004dc042  MOV ECX,dword ptr [ECX + 0x44]
004dc045  CALL 0x005f53c0
004dc04a  ADD EAX,0x1
004dc04d  PUSH EAX
004dc04e  MOV EDX,dword ptr [EBP + -0x48]
004dc051  MOV EAX,dword ptr [EDX + 0x3c]
004dc054  MOV ECX,dword ptr [EBP + -0x48]
004dc057  MOV ECX,dword ptr [ECX + 0x3c]
004dc05a  MOV EDX,dword ptr [EAX]
004dc05c  MOV EAX,dword ptr [EDX + 0x6c]
004dc05f  CALL EAX
004dc061  MOV ECX,dword ptr [EBP + -0x48]
004dc064  MOV EDX,dword ptr [ECX + 0x3c]
004dc067  MOV EAX,dword ptr [EBP + -0x48]
004dc06a  MOV ECX,dword ptr [EAX + 0x3c]
004dc06d  MOV EDX,dword ptr [EDX]
004dc06f  MOV EAX,dword ptr [EDX + 0x40]
004dc072  CALL EAX
004dc074  MOV ECX,dword ptr [EBP + -0x48]
004dc077  CMP dword ptr [ECX + 0x40],0x0
004dc07b  JNZ 0x004dc1ab
004dc081  PUSH 0x1d0
004dc086  CALL 0x00686d82
004dc08b  ADD ESP,0x4
004dc08e  MOV dword ptr [EBP + -0x2c],EAX
004dc091  MOV dword ptr [EBP + -0x4],0x2
004dc098  CMP dword ptr [EBP + -0x2c],0x0
004dc09c  JZ 0x004dc0ab
004dc09e  MOV ECX,dword ptr [EBP + -0x2c]
004dc0a1  CALL 0x005ec5a0
004dc0a6  MOV dword ptr [EBP + -0x58],EAX
004dc0a9  JMP 0x004dc0b2
004dc0ab  MOV dword ptr [EBP + -0x58],0x0
004dc0b2  MOV EDX,dword ptr [EBP + -0x58]
004dc0b5  MOV dword ptr [EBP + -0x28],EDX
004dc0b8  MOV dword ptr [EBP + -0x4],0xffffffff
004dc0bf  MOV EAX,dword ptr [EBP + -0x48]
004dc0c2  MOV ECX,dword ptr [EBP + -0x28]
004dc0c5  MOV dword ptr [EAX + 0x40],ECX
004dc0c8  PUSH ECX
004dc0c9  MOV EDX,ESP
004dc0cb  MOV AX,[0x0075ee1c]
004dc0d1  MOV word ptr [EDX],AX
004dc0d4  MOV CL,byte ptr [0x0075ee1e]
004dc0da  MOV byte ptr [EDX + 0x2],CL
004dc0dd  PUSH -0x1
004dc0df  PUSH 0x38
004dc0e1  MOV EDX,dword ptr [EBP + -0x48]
004dc0e4  MOV ECX,dword ptr [EDX + 0x40]
004dc0e7  CALL 0x005ecd00
004dc0ec  MOV EAX,dword ptr [EBP + -0x48]
004dc0ef  MOV ECX,dword ptr [EAX + 0x3c]
004dc0f2  MOV EDX,dword ptr [EBP + -0x48]
004dc0f5  MOV EAX,dword ptr [EDX + 0x3c]
004dc0f8  MOV EDX,dword ptr [ECX]
004dc0fa  MOV ECX,EAX
004dc0fc  MOV EAX,dword ptr [EDX + 0x54]
004dc0ff  CALL EAX
004dc101  ADD EAX,0x12
004dc104  PUSH EAX
004dc105  MOV ECX,dword ptr [EBP + -0x48]
004dc108  MOV EDX,dword ptr [ECX + 0x44]
004dc10b  MOV EAX,dword ptr [EBP + -0x48]
004dc10e  MOV ECX,dword ptr [EAX + 0x44]
004dc111  MOV EDX,dword ptr [EDX]
004dc113  MOV EAX,dword ptr [EDX + 0x4c]
004dc116  CALL EAX
004dc118  MOVZX ECX,byte ptr [EBP + -0x11]
004dc11c  NEG ECX
004dc11e  SBB ECX,ECX
004dc120  AND ECX,0xfffffffe
004dc123  ADD ECX,0x7
004dc126  ADD EAX,ECX
004dc128  PUSH EAX
004dc129  MOV EDX,dword ptr [EBP + -0x48]
004dc12c  MOV EAX,dword ptr [EDX + 0x40]
004dc12f  MOV ECX,dword ptr [EBP + -0x48]
004dc132  MOV ECX,dword ptr [ECX + 0x40]
004dc135  MOV EDX,dword ptr [EAX]
004dc137  MOV EAX,dword ptr [EDX + 0x44]
004dc13a  CALL EAX
004dc13c  PUSH 0x14
004dc13e  MOV ECX,dword ptr [EBP + -0x48]
004dc141  MOV ECX,dword ptr [ECX + 0x40]
004dc144  CALL 0x005eccb0
004dc149  PUSH 0x53
004dc14b  MOV EDX,dword ptr [EBP + -0x48]
004dc14e  MOV ECX,dword ptr [EDX + 0x40]
004dc151  CALL 0x005ecc60
004dc156  PUSH 0x30
004dc158  MOV EAX,dword ptr [EBP + -0x48]
004dc15b  MOV ECX,dword ptr [EAX + 0x40]
004dc15e  CALL 0x005ef310
004dc163  MOV ECX,dword ptr [EBP + -0x48]
004dc166  MOV EDX,dword ptr [ECX + 0x40]
004dc169  MOV EAX,dword ptr [EBP + -0x48]
004dc16c  MOV ECX,dword ptr [EAX + 0x40]
004dc16f  MOV EDX,dword ptr [EDX]
004dc171  MOV EAX,dword ptr [EDX + 0x70]
004dc174  CALL EAX
004dc176  MOV ECX,dword ptr [EBP + -0x48]
004dc179  MOV ECX,dword ptr [ECX + 0x44]
004dc17c  CALL 0x005f53c0
004dc181  ADD EAX,0x1
004dc184  PUSH EAX
004dc185  MOV EDX,dword ptr [EBP + -0x48]
004dc188  MOV EAX,dword ptr [EDX + 0x40]
004dc18b  MOV ECX,dword ptr [EBP + -0x48]
004dc18e  MOV ECX,dword ptr [ECX + 0x40]
004dc191  MOV EDX,dword ptr [EAX]
004dc193  MOV EAX,dword ptr [EDX + 0x6c]
004dc196  CALL EAX
004dc198  MOV ECX,dword ptr [EBP + -0x48]
004dc19b  MOV EDX,dword ptr [ECX + 0x40]
004dc19e  MOV EAX,dword ptr [EBP + -0x48]
004dc1a1  MOV ECX,dword ptr [EAX + 0x40]
004dc1a4  MOV EDX,dword ptr [EDX]
004dc1a6  MOV EAX,dword ptr [EDX + 0x40]
004dc1a9  CALL EAX
004dc1ab  MOV word ptr [EBP + -0x10],0x0
004dc1b1  JMP 0x004dc1bf
004dc1b3  MOV CX,word ptr [EBP + -0x10]
004dc1b7  ADD CX,0x1
004dc1bb  MOV word ptr [EBP + -0x10],CX
004dc1bf  MOVSX EDX,word ptr [EBP + -0x10]
004dc1c3  CMP EDX,0x2
004dc1c6  JGE 0x004dc36d
004dc1cc  MOVSX EAX,word ptr [EBP + -0x10]
004dc1d0  MOV ECX,dword ptr [EBP + -0x48]
004dc1d3  CMP dword ptr [ECX + EAX*0x4 + 0x48],0x0
004dc1d8  JNZ 0x004dc29a
004dc1de  PUSH 0x178
004dc1e3  CALL 0x00686d82
004dc1e8  ADD ESP,0x4
004dc1eb  MOV dword ptr [EBP + -0x34],EAX
004dc1ee  MOV dword ptr [EBP + -0x4],0x3
004dc1f5  CMP dword ptr [EBP + -0x34],0x0
004dc1f9  JZ 0x004dc208
004dc1fb  MOV ECX,dword ptr [EBP + -0x34]
004dc1fe  CALL 0x005eaaf0
004dc203  MOV dword ptr [EBP + -0x5c],EAX
004dc206  JMP 0x004dc20f
004dc208  MOV dword ptr [EBP + -0x5c],0x0
004dc20f  MOV EDX,dword ptr [EBP + -0x5c]
004dc212  MOV dword ptr [EBP + -0x30],EDX
004dc215  MOV dword ptr [EBP + -0x4],0xffffffff
004dc21c  MOVSX EAX,word ptr [EBP + -0x10]
004dc220  MOV ECX,dword ptr [EBP + -0x48]
004dc223  MOV EDX,dword ptr [EBP + -0x30]
004dc226  MOV dword ptr [ECX + EAX*0x4 + 0x48],EDX
004dc22a  PUSH 0x18a8b
004dc22f  MOVSX EAX,word ptr [EBP + -0x10]
004dc233  MOV ECX,dword ptr [EBP + -0x48]
004dc236  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x48]
004dc23a  CALL 0x005eaf00
004dc23f  MOVSX EDX,word ptr [EBP + -0x10]
004dc243  MOV EAX,dword ptr [EBP + -0x48]
004dc246  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x48]
004dc24a  MOVSX EDX,word ptr [EBP + -0x10]
004dc24e  MOV EAX,dword ptr [EBP + -0x48]
004dc251  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x48]
004dc255  MOV EAX,dword ptr [ECX]
004dc257  MOV ECX,EDX
004dc259  MOV EDX,dword ptr [EAX + 0x70]
004dc25c  CALL EDX
004dc25e  PUSH 0x65
004dc260  MOVSX EAX,word ptr [EBP + -0x10]
004dc264  MOV ECX,dword ptr [EBP + -0x48]
004dc267  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x48]
004dc26b  MOVSX EAX,word ptr [EBP + -0x10]
004dc26f  MOV ECX,dword ptr [EBP + -0x48]
004dc272  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x48]
004dc276  MOV EDX,dword ptr [EDX]
004dc278  MOV EAX,dword ptr [EDX + 0x6c]
004dc27b  CALL EAX
004dc27d  MOVSX ECX,word ptr [EBP + -0x10]
004dc281  MOV EDX,dword ptr [EBP + -0x48]
004dc284  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
004dc288  MOVSX ECX,word ptr [EBP + -0x10]
004dc28c  MOV EDX,dword ptr [EBP + -0x48]
004dc28f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x48]
004dc293  MOV EAX,dword ptr [EAX]
004dc295  MOV EDX,dword ptr [EAX + 0x40]
004dc298  CALL EDX
004dc29a  MOVSX EAX,word ptr [EBP + -0x10]
004dc29e  MOV ECX,dword ptr [EBP + -0x48]
004dc2a1  CMP dword ptr [ECX + EAX*0x4 + 0x50],0x0
004dc2a6  JNZ 0x004dc368
004dc2ac  PUSH 0x178
004dc2b1  CALL 0x00686d82
004dc2b6  ADD ESP,0x4
004dc2b9  MOV dword ptr [EBP + -0x3c],EAX
004dc2bc  MOV dword ptr [EBP + -0x4],0x4
004dc2c3  CMP dword ptr [EBP + -0x3c],0x0
004dc2c7  JZ 0x004dc2d6
004dc2c9  MOV ECX,dword ptr [EBP + -0x3c]
004dc2cc  CALL 0x005eaaf0
004dc2d1  MOV dword ptr [EBP + -0x60],EAX
004dc2d4  JMP 0x004dc2dd
004dc2d6  MOV dword ptr [EBP + -0x60],0x0
004dc2dd  MOV EDX,dword ptr [EBP + -0x60]
004dc2e0  MOV dword ptr [EBP + -0x38],EDX
004dc2e3  MOV dword ptr [EBP + -0x4],0xffffffff
004dc2ea  MOVSX EAX,word ptr [EBP + -0x10]
004dc2ee  MOV ECX,dword ptr [EBP + -0x48]
004dc2f1  MOV EDX,dword ptr [EBP + -0x38]
004dc2f4  MOV dword ptr [ECX + EAX*0x4 + 0x50],EDX
004dc2f8  PUSH 0x18a8b
004dc2fd  MOVSX EAX,word ptr [EBP + -0x10]
004dc301  MOV ECX,dword ptr [EBP + -0x48]
004dc304  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x50]
004dc308  CALL 0x005eaf00
004dc30d  MOVSX EDX,word ptr [EBP + -0x10]
004dc311  MOV EAX,dword ptr [EBP + -0x48]
004dc314  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x50]
004dc318  MOVSX EDX,word ptr [EBP + -0x10]
004dc31c  MOV EAX,dword ptr [EBP + -0x48]
004dc31f  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x50]
004dc323  MOV EAX,dword ptr [ECX]
004dc325  MOV ECX,EDX
004dc327  MOV EDX,dword ptr [EAX + 0x70]
004dc32a  CALL EDX
004dc32c  PUSH 0x65
004dc32e  MOVSX EAX,word ptr [EBP + -0x10]
004dc332  MOV ECX,dword ptr [EBP + -0x48]
004dc335  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x50]
004dc339  MOVSX EAX,word ptr [EBP + -0x10]
004dc33d  MOV ECX,dword ptr [EBP + -0x48]
004dc340  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x50]
004dc344  MOV EDX,dword ptr [EDX]
004dc346  MOV EAX,dword ptr [EDX + 0x6c]
004dc349  CALL EAX
004dc34b  MOVSX ECX,word ptr [EBP + -0x10]
004dc34f  MOV EDX,dword ptr [EBP + -0x48]
004dc352  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x50]
004dc356  MOVSX ECX,word ptr [EBP + -0x10]
004dc35a  MOV EDX,dword ptr [EBP + -0x48]
004dc35d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x50]
004dc361  MOV EAX,dword ptr [EAX]
004dc363  MOV EDX,dword ptr [EAX + 0x40]
004dc366  CALL EDX
004dc368  JMP 0x004dc1b3
004dc36d  MOV word ptr [EBP + -0x10],0x0
004dc373  JMP 0x004dc381
004dc375  MOV AX,word ptr [EBP + -0x10]
004dc379  ADD AX,0x1
004dc37d  MOV word ptr [EBP + -0x10],AX
004dc381  MOVSX ECX,word ptr [EBP + -0x10]
004dc385  CMP ECX,0x3
004dc388  JGE 0x004dc45f
004dc38e  MOVSX EDX,word ptr [EBP + -0x10]
004dc392  MOV EAX,dword ptr [EBP + -0x48]
004dc395  CMP dword ptr [EAX + EDX*0x4 + 0x58],0x0
004dc39a  JNZ 0x004dc45a
004dc3a0  PUSH 0x178
004dc3a5  CALL 0x00686d82
004dc3aa  ADD ESP,0x4
004dc3ad  MOV dword ptr [EBP + -0x44],EAX
004dc3b0  MOV dword ptr [EBP + -0x4],0x5
004dc3b7  CMP dword ptr [EBP + -0x44],0x0
004dc3bb  JZ 0x004dc3ca
004dc3bd  MOV ECX,dword ptr [EBP + -0x44]
004dc3c0  CALL 0x005eaaf0
004dc3c5  MOV dword ptr [EBP + -0x64],EAX
004dc3c8  JMP 0x004dc3d1
004dc3ca  MOV dword ptr [EBP + -0x64],0x0
004dc3d1  MOV ECX,dword ptr [EBP + -0x64]
004dc3d4  MOV dword ptr [EBP + -0x40],ECX
004dc3d7  MOV dword ptr [EBP + -0x4],0xffffffff
004dc3de  MOVSX EDX,word ptr [EBP + -0x10]
004dc3e2  MOV EAX,dword ptr [EBP + -0x48]
004dc3e5  MOV ECX,dword ptr [EBP + -0x40]
004dc3e8  MOV dword ptr [EAX + EDX*0x4 + 0x58],ECX
004dc3ec  PUSH 0x18a8a
004dc3f1  MOVSX EDX,word ptr [EBP + -0x10]
004dc3f5  MOV EAX,dword ptr [EBP + -0x48]
004dc3f8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x58]
004dc3fc  CALL 0x005eaf00
004dc401  MOVSX ECX,word ptr [EBP + -0x10]
004dc405  MOV EDX,dword ptr [EBP + -0x48]
004dc408  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x58]
004dc40c  MOVSX ECX,word ptr [EBP + -0x10]
004dc410  MOV EDX,dword ptr [EBP + -0x48]
004dc413  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x58]
004dc417  MOV EAX,dword ptr [EAX]
004dc419  MOV EDX,dword ptr [EAX + 0x70]
004dc41c  CALL EDX
004dc41e  PUSH 0x79
004dc420  MOVSX EAX,word ptr [EBP + -0x10]
004dc424  MOV ECX,dword ptr [EBP + -0x48]
004dc427  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x58]
004dc42b  MOVSX EAX,word ptr [EBP + -0x10]
004dc42f  MOV ECX,dword ptr [EBP + -0x48]
004dc432  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x58]
004dc436  MOV EDX,dword ptr [EDX]
004dc438  MOV EAX,dword ptr [EDX + 0x6c]
004dc43b  CALL EAX
004dc43d  MOVSX ECX,word ptr [EBP + -0x10]
004dc441  MOV EDX,dword ptr [EBP + -0x48]
004dc444  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x58]
004dc448  MOVSX ECX,word ptr [EBP + -0x10]
004dc44c  MOV EDX,dword ptr [EBP + -0x48]
004dc44f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x58]
004dc453  MOV EAX,dword ptr [EAX]
004dc455  MOV EDX,dword ptr [EAX + 0x40]
004dc458  CALL EDX
004dc45a  JMP 0x004dc375
004dc45f  MOV ECX,dword ptr [EBP + -0xc]
004dc462  MOV dword ptr FS:[0x0],ECX
004dc469  POP ECX
004dc46a  MOV ESP,EBP
004dc46c  POP EBP
004dc46d  RET

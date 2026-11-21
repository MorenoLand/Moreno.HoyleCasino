; FUN_0068ef90  0068ef90
0068ef90  PUSH EBP
0068ef91  MOV EBP,ESP
0068ef93  PUSH -0x1
0068ef95  PUSH 0x6ae279
0068ef9a  MOV EAX,FS:[0x0]
0068efa0  PUSH EAX
0068efa1  SUB ESP,0xc8
0068efa7  MOV EAX,[0x00781870]
0068efac  XOR EAX,EBP
0068efae  PUSH EAX
0068efaf  LEA EAX,[EBP + -0xc]
0068efb2  MOV FS:[0x0],EAX
0068efb8  MOV dword ptr [EBP + 0xffffff34],ECX
0068efbe  MOV EAX,dword ptr [EBP + 0x10]
0068efc1  MOV dword ptr [EBP + -0x64],EAX
0068efc4  MOV ECX,dword ptr [EBP + -0x64]
0068efc7  MOVSX EDX,byte ptr [ECX + 0x45]
0068efcb  TEST EDX,EDX
0068efcd  JZ 0x0068f015
0068efcf  PUSH 0x6e5680
0068efd4  LEA ECX,[EBP + -0x60]
0068efd7  CALL dword ptr [0x006b20fc]
0068efdd  MOV dword ptr [EBP + -0x4],0x0
0068efe4  LEA EAX,[EBP + -0x60]
0068efe7  PUSH EAX
0068efe8  LEA ECX,[EBP + -0x44]
0068efeb  CALL 0x0068d440
0068eff0  MOV dword ptr [EBP + -0x44],0x6e5678
0068eff7  PUSH 0x702f5c
0068effc  LEA ECX,[EBP + -0x44]
0068efff  PUSH ECX
0068f000  CALL 0x00686fc0
0068f015  MOV EDX,dword ptr [EBP + 0x10]
0068f018  MOV dword ptr [EBP + -0x10],EDX
0068f01b  LEA ECX,[EBP + 0xc]
0068f01e  CALL 0x0068edc0
0068f023  MOV EAX,dword ptr [EBP + -0x10]
0068f026  MOV dword ptr [EBP + -0x18],EAX
0068f029  MOV ECX,dword ptr [EBP + -0x18]
0068f02c  MOV EDX,dword ptr [ECX]
0068f02e  MOVSX EAX,byte ptr [EDX + 0x45]
0068f032  TEST EAX,EAX
0068f034  JZ 0x0068f041
0068f036  MOV ECX,dword ptr [EBP + -0x18]
0068f039  MOV EDX,dword ptr [ECX + 0x8]
0068f03c  MOV dword ptr [EBP + -0x14],EDX
0068f03f  JMP 0x0068f068
0068f041  MOV EAX,dword ptr [EBP + -0x18]
0068f044  MOV ECX,dword ptr [EAX + 0x8]
0068f047  MOVSX EDX,byte ptr [ECX + 0x45]
0068f04b  TEST EDX,EDX
0068f04d  JZ 0x0068f059
0068f04f  MOV EAX,dword ptr [EBP + -0x18]
0068f052  MOV ECX,dword ptr [EAX]
0068f054  MOV dword ptr [EBP + -0x14],ECX
0068f057  JMP 0x0068f068
0068f059  MOV EDX,dword ptr [EBP + 0x10]
0068f05c  MOV dword ptr [EBP + -0x18],EDX
0068f05f  MOV EAX,dword ptr [EBP + -0x18]
0068f062  MOV ECX,dword ptr [EAX + 0x8]
0068f065  MOV dword ptr [EBP + -0x14],ECX
0068f068  MOV EDX,dword ptr [EBP + -0x18]
0068f06b  CMP EDX,dword ptr [EBP + -0x10]
0068f06e  JNZ 0x0068f19f
0068f074  MOV EAX,dword ptr [EBP + -0x10]
0068f077  MOV ECX,dword ptr [EAX + 0x4]
0068f07a  MOV dword ptr [EBP + -0x1c],ECX
0068f07d  MOV EDX,dword ptr [EBP + -0x14]
0068f080  MOVSX EAX,byte ptr [EDX + 0x45]
0068f084  TEST EAX,EAX
0068f086  JNZ 0x0068f091
0068f088  MOV ECX,dword ptr [EBP + -0x14]
0068f08b  MOV EDX,dword ptr [EBP + -0x1c]
0068f08e  MOV dword ptr [ECX + 0x4],EDX
0068f091  MOV EAX,dword ptr [EBP + 0xffffff34]
0068f097  MOV ECX,dword ptr [EAX + 0x4]
0068f09a  MOV EDX,dword ptr [ECX + 0x4]
0068f09d  CMP EDX,dword ptr [EBP + -0x10]
0068f0a0  JNZ 0x0068f0b3
0068f0a2  MOV EAX,dword ptr [EBP + 0xffffff34]
0068f0a8  MOV ECX,dword ptr [EAX + 0x4]
0068f0ab  MOV EDX,dword ptr [EBP + -0x14]
0068f0ae  MOV dword ptr [ECX + 0x4],EDX
0068f0b1  JMP 0x0068f0d0
0068f0b3  MOV EAX,dword ptr [EBP + -0x1c]
0068f0b6  MOV ECX,dword ptr [EAX]
0068f0b8  CMP ECX,dword ptr [EBP + -0x10]
0068f0bb  JNZ 0x0068f0c7
0068f0bd  MOV EDX,dword ptr [EBP + -0x1c]
0068f0c0  MOV EAX,dword ptr [EBP + -0x14]
0068f0c3  MOV dword ptr [EDX],EAX
0068f0c5  JMP 0x0068f0d0
0068f0c7  MOV ECX,dword ptr [EBP + -0x1c]
0068f0ca  MOV EDX,dword ptr [EBP + -0x14]
0068f0cd  MOV dword ptr [ECX + 0x8],EDX
0068f0d0  MOV EAX,dword ptr [EBP + 0xffffff34]
0068f0d6  MOV ECX,dword ptr [EAX + 0x4]
0068f0d9  MOV dword ptr [EBP + -0x68],ECX
0068f0dc  MOV EDX,dword ptr [EBP + -0x68]
0068f0df  MOV EAX,dword ptr [EDX]
0068f0e1  CMP EAX,dword ptr [EBP + -0x10]
0068f0e4  JNZ 0x0068f139
0068f0e6  MOV ECX,dword ptr [EBP + -0x14]
0068f0e9  MOVSX EDX,byte ptr [ECX + 0x45]
0068f0ed  TEST EDX,EDX
0068f0ef  JZ 0x0068f0fc
0068f0f1  MOV EAX,dword ptr [EBP + -0x1c]
0068f0f4  MOV dword ptr [EBP + 0xffffff30],EAX
0068f0fa  JMP 0x0068f122
0068f0fc  MOV ECX,dword ptr [EBP + -0x14]
0068f0ff  MOV dword ptr [EBP + -0x6c],ECX
0068f102  MOV EDX,dword ptr [EBP + -0x6c]
0068f105  MOV EAX,dword ptr [EDX]
0068f107  MOVSX ECX,byte ptr [EAX + 0x45]
0068f10b  TEST ECX,ECX
0068f10d  JNZ 0x0068f119
0068f10f  MOV EDX,dword ptr [EBP + -0x6c]
0068f112  MOV EAX,dword ptr [EDX]
0068f114  MOV dword ptr [EBP + -0x6c],EAX
0068f117  JMP 0x0068f102
0068f119  MOV ECX,dword ptr [EBP + -0x6c]
0068f11c  MOV dword ptr [EBP + 0xffffff30],ECX
0068f122  MOV EDX,dword ptr [EBP + 0xffffff34]
0068f128  MOV EAX,dword ptr [EDX + 0x4]
0068f12b  MOV dword ptr [EBP + -0x70],EAX
0068f12e  MOV ECX,dword ptr [EBP + -0x70]
0068f131  MOV EDX,dword ptr [EBP + 0xffffff30]
0068f137  MOV dword ptr [ECX],EDX
0068f139  MOV EAX,dword ptr [EBP + 0xffffff34]
0068f13f  MOV ECX,dword ptr [EAX + 0x4]
0068f142  MOV EDX,dword ptr [ECX + 0x8]
0068f145  CMP EDX,dword ptr [EBP + -0x10]
0068f148  JNZ 0x0068f19a
0068f14a  MOV EAX,dword ptr [EBP + -0x14]
0068f14d  MOVSX ECX,byte ptr [EAX + 0x45]
0068f151  TEST ECX,ECX
0068f153  JZ 0x0068f160
0068f155  MOV EDX,dword ptr [EBP + -0x1c]
0068f158  MOV dword ptr [EBP + 0xffffff2c],EDX
0068f15e  JMP 0x0068f188
0068f160  MOV EAX,dword ptr [EBP + -0x14]
0068f163  MOV dword ptr [EBP + -0x74],EAX
0068f166  MOV ECX,dword ptr [EBP + -0x74]
0068f169  MOV EDX,dword ptr [ECX + 0x8]
0068f16c  MOVSX EAX,byte ptr [EDX + 0x45]
0068f170  TEST EAX,EAX
0068f172  JNZ 0x0068f17f
0068f174  MOV ECX,dword ptr [EBP + -0x74]
0068f177  MOV EDX,dword ptr [ECX + 0x8]
0068f17a  MOV dword ptr [EBP + -0x74],EDX
0068f17d  JMP 0x0068f166
0068f17f  MOV EAX,dword ptr [EBP + -0x74]
0068f182  MOV dword ptr [EBP + 0xffffff2c],EAX
0068f188  MOV ECX,dword ptr [EBP + 0xffffff34]
0068f18e  MOV EDX,dword ptr [ECX + 0x4]
0068f191  MOV EAX,dword ptr [EBP + 0xffffff2c]
0068f197  MOV dword ptr [EDX + 0x8],EAX
0068f19a  JMP 0x0068f2a2
0068f19f  MOV ECX,dword ptr [EBP + -0x10]
0068f1a2  MOV EDX,dword ptr [ECX]
0068f1a4  MOV EAX,dword ptr [EBP + -0x18]
0068f1a7  MOV dword ptr [EDX + 0x4],EAX
0068f1aa  MOV ECX,dword ptr [EBP + -0x18]
0068f1ad  MOV EDX,dword ptr [EBP + -0x10]
0068f1b0  MOV EAX,dword ptr [EDX]
0068f1b2  MOV dword ptr [ECX],EAX
0068f1b4  MOV ECX,dword ptr [EBP + -0x10]
0068f1b7  MOV EDX,dword ptr [EBP + -0x18]
0068f1ba  CMP EDX,dword ptr [ECX + 0x8]
0068f1bd  JNZ 0x0068f1c7
0068f1bf  MOV EAX,dword ptr [EBP + -0x18]
0068f1c2  MOV dword ptr [EBP + -0x1c],EAX
0068f1c5  JMP 0x0068f204
0068f1c7  MOV ECX,dword ptr [EBP + -0x18]
0068f1ca  MOV EDX,dword ptr [ECX + 0x4]
0068f1cd  MOV dword ptr [EBP + -0x1c],EDX
0068f1d0  MOV EAX,dword ptr [EBP + -0x14]
0068f1d3  MOVSX ECX,byte ptr [EAX + 0x45]
0068f1d7  TEST ECX,ECX
0068f1d9  JNZ 0x0068f1e4
0068f1db  MOV EDX,dword ptr [EBP + -0x14]
0068f1de  MOV EAX,dword ptr [EBP + -0x1c]
0068f1e1  MOV dword ptr [EDX + 0x4],EAX
0068f1e4  MOV ECX,dword ptr [EBP + -0x1c]
0068f1e7  MOV EDX,dword ptr [EBP + -0x14]
0068f1ea  MOV dword ptr [ECX],EDX
0068f1ec  MOV EAX,dword ptr [EBP + -0x18]
0068f1ef  MOV ECX,dword ptr [EBP + -0x10]
0068f1f2  MOV EDX,dword ptr [ECX + 0x8]
0068f1f5  MOV dword ptr [EAX + 0x8],EDX
0068f1f8  MOV EAX,dword ptr [EBP + -0x10]
0068f1fb  MOV ECX,dword ptr [EAX + 0x8]
0068f1fe  MOV EDX,dword ptr [EBP + -0x18]
0068f201  MOV dword ptr [ECX + 0x4],EDX
0068f204  MOV EAX,dword ptr [EBP + 0xffffff34]
0068f20a  MOV ECX,dword ptr [EAX + 0x4]
0068f20d  MOV EDX,dword ptr [ECX + 0x4]
0068f210  CMP EDX,dword ptr [EBP + -0x10]
0068f213  JNZ 0x0068f226
0068f215  MOV EAX,dword ptr [EBP + 0xffffff34]
0068f21b  MOV ECX,dword ptr [EAX + 0x4]
0068f21e  MOV EDX,dword ptr [EBP + -0x18]
0068f221  MOV dword ptr [ECX + 0x4],EDX
0068f224  JMP 0x0068f258
0068f226  MOV EAX,dword ptr [EBP + -0x10]
0068f229  MOV ECX,dword ptr [EAX + 0x4]
0068f22c  MOV dword ptr [EBP + -0x78],ECX
0068f22f  MOV EDX,dword ptr [EBP + -0x78]
0068f232  MOV EAX,dword ptr [EDX]
0068f234  CMP EAX,dword ptr [EBP + -0x10]
0068f237  JNZ 0x0068f24c
0068f239  MOV ECX,dword ptr [EBP + -0x10]
0068f23c  MOV EDX,dword ptr [ECX + 0x4]
0068f23f  MOV dword ptr [EBP + -0x7c],EDX
0068f242  MOV EAX,dword ptr [EBP + -0x7c]
0068f245  MOV ECX,dword ptr [EBP + -0x18]
0068f248  MOV dword ptr [EAX],ECX
0068f24a  JMP 0x0068f258
0068f24c  MOV EDX,dword ptr [EBP + -0x10]
0068f24f  MOV EAX,dword ptr [EDX + 0x4]
0068f252  MOV ECX,dword ptr [EBP + -0x18]
0068f255  MOV dword ptr [EAX + 0x8],ECX
0068f258  MOV EDX,dword ptr [EBP + -0x18]
0068f25b  MOV EAX,dword ptr [EBP + -0x10]
0068f25e  MOV ECX,dword ptr [EAX + 0x4]
0068f261  MOV dword ptr [EDX + 0x4],ECX
0068f264  MOV EDX,dword ptr [EBP + -0x10]
0068f267  ADD EDX,0x44
0068f26a  MOV dword ptr [EBP + 0xffffff78],EDX
0068f270  MOV EAX,dword ptr [EBP + -0x18]
0068f273  ADD EAX,0x44
0068f276  MOV dword ptr [EBP + 0xffffff7c],EAX
0068f27c  MOV ECX,dword ptr [EBP + 0xffffff7c]
0068f282  MOV DL,byte ptr [ECX]
0068f284  MOV byte ptr [EBP + -0x7d],DL
0068f287  MOV EAX,dword ptr [EBP + 0xffffff7c]
0068f28d  MOV ECX,dword ptr [EBP + 0xffffff78]
0068f293  MOV DL,byte ptr [ECX]
0068f295  MOV byte ptr [EAX],DL
0068f297  MOV EAX,dword ptr [EBP + 0xffffff78]
0068f29d  MOV CL,byte ptr [EBP + -0x7d]
0068f2a0  MOV byte ptr [EAX],CL
0068f2a2  MOV EDX,dword ptr [EBP + -0x10]
0068f2a5  MOVSX EAX,byte ptr [EDX + 0x44]
0068f2a9  CMP EAX,0x1
0068f2ac  JNZ 0x0068f4c2
0068f2b2  JMP 0x0068f2bd
0068f2b4  MOV ECX,dword ptr [EBP + -0x14]
0068f2b7  MOV EDX,dword ptr [ECX + 0x4]
0068f2ba  MOV dword ptr [EBP + -0x1c],EDX
0068f2bd  MOV EAX,dword ptr [EBP + 0xffffff34]
0068f2c3  MOV ECX,dword ptr [EAX + 0x4]
0068f2c6  MOV EDX,dword ptr [EBP + -0x14]
0068f2c9  CMP EDX,dword ptr [ECX + 0x4]
0068f2cc  JZ 0x0068f4bb
0068f2d2  MOV EAX,dword ptr [EBP + -0x14]
0068f2d5  MOVSX ECX,byte ptr [EAX + 0x44]
0068f2d9  CMP ECX,0x1
0068f2dc  JNZ 0x0068f4bb
0068f2e2  MOV EDX,dword ptr [EBP + -0x1c]
0068f2e5  MOV EAX,dword ptr [EBP + -0x14]
0068f2e8  CMP EAX,dword ptr [EDX]
0068f2ea  JNZ 0x0068f3d9
0068f2f0  MOV ECX,dword ptr [EBP + -0x1c]
0068f2f3  MOV EDX,dword ptr [ECX + 0x8]
0068f2f6  MOV dword ptr [EBP + -0x18],EDX
0068f2f9  MOV EAX,dword ptr [EBP + -0x18]
0068f2fc  MOVSX ECX,byte ptr [EAX + 0x44]
0068f300  TEST ECX,ECX
0068f302  JNZ 0x0068f32a
0068f304  MOV EDX,dword ptr [EBP + -0x18]
0068f307  MOV byte ptr [EDX + 0x44],0x1
0068f30b  MOV EAX,dword ptr [EBP + -0x1c]
0068f30e  MOV byte ptr [EAX + 0x44],0x0
0068f312  MOV ECX,dword ptr [EBP + -0x1c]
0068f315  PUSH ECX
0068f316  MOV ECX,dword ptr [EBP + 0xffffff34]
0068f31c  CALL 0x0068eb50
0068f321  MOV EDX,dword ptr [EBP + -0x1c]
0068f324  MOV EAX,dword ptr [EDX + 0x8]
0068f327  MOV dword ptr [EBP + -0x18],EAX
0068f32a  MOV ECX,dword ptr [EBP + -0x18]
0068f32d  MOVSX EDX,byte ptr [ECX + 0x45]
0068f331  TEST EDX,EDX
0068f333  JZ 0x0068f340
0068f335  MOV EAX,dword ptr [EBP + -0x1c]
0068f338  MOV dword ptr [EBP + -0x14],EAX
0068f33b  JMP 0x0068f3d4
0068f340  MOV ECX,dword ptr [EBP + -0x18]
0068f343  MOV EDX,dword ptr [ECX]
0068f345  MOVSX EAX,byte ptr [EDX + 0x44]
0068f349  CMP EAX,0x1
0068f34c  JNZ 0x0068f36c
0068f34e  MOV ECX,dword ptr [EBP + -0x18]
0068f351  MOV EDX,dword ptr [ECX + 0x8]
0068f354  MOVSX EAX,byte ptr [EDX + 0x44]
0068f358  CMP EAX,0x1
0068f35b  JNZ 0x0068f36c
0068f35d  MOV ECX,dword ptr [EBP + -0x18]
0068f360  MOV byte ptr [ECX + 0x44],0x0
0068f364  MOV EDX,dword ptr [EBP + -0x1c]
0068f367  MOV dword ptr [EBP + -0x14],EDX
0068f36a  JMP 0x0068f3d4
0068f36c  MOV EAX,dword ptr [EBP + -0x18]
0068f36f  MOV ECX,dword ptr [EAX + 0x8]
0068f372  MOVSX EDX,byte ptr [ECX + 0x44]
0068f376  CMP EDX,0x1
0068f379  JNZ 0x0068f3a3
0068f37b  MOV EAX,dword ptr [EBP + -0x18]
0068f37e  MOV ECX,dword ptr [EAX]
0068f380  MOV byte ptr [ECX + 0x44],0x1
0068f384  MOV EDX,dword ptr [EBP + -0x18]
0068f387  MOV byte ptr [EDX + 0x44],0x0
0068f38b  MOV EAX,dword ptr [EBP + -0x18]
0068f38e  PUSH EAX
0068f38f  MOV ECX,dword ptr [EBP + 0xffffff34]
0068f395  CALL 0x0068ec00
0068f39a  MOV ECX,dword ptr [EBP + -0x1c]
0068f39d  MOV EDX,dword ptr [ECX + 0x8]
0068f3a0  MOV dword ptr [EBP + -0x18],EDX
0068f3a3  MOV EAX,dword ptr [EBP + -0x18]
0068f3a6  MOV ECX,dword ptr [EBP + -0x1c]
0068f3a9  MOV DL,byte ptr [ECX + 0x44]
0068f3ac  MOV byte ptr [EAX + 0x44],DL
0068f3af  MOV EAX,dword ptr [EBP + -0x1c]
0068f3b2  MOV byte ptr [EAX + 0x44],0x1
0068f3b6  MOV ECX,dword ptr [EBP + -0x18]
0068f3b9  MOV EDX,dword ptr [ECX + 0x8]
0068f3bc  MOV byte ptr [EDX + 0x44],0x1
0068f3c0  MOV EAX,dword ptr [EBP + -0x1c]
0068f3c3  PUSH EAX
0068f3c4  MOV ECX,dword ptr [EBP + 0xffffff34]
0068f3ca  CALL 0x0068eb50
0068f3cf  JMP 0x0068f4bb
0068f3d4  JMP 0x0068f4b6
0068f3d9  MOV ECX,dword ptr [EBP + -0x1c]
0068f3dc  MOV EDX,dword ptr [ECX]
0068f3de  MOV dword ptr [EBP + -0x18],EDX
0068f3e1  MOV EAX,dword ptr [EBP + -0x18]
0068f3e4  MOVSX ECX,byte ptr [EAX + 0x44]
0068f3e8  TEST ECX,ECX
0068f3ea  JNZ 0x0068f411
0068f3ec  MOV EDX,dword ptr [EBP + -0x18]
0068f3ef  MOV byte ptr [EDX + 0x44],0x1
0068f3f3  MOV EAX,dword ptr [EBP + -0x1c]
0068f3f6  MOV byte ptr [EAX + 0x44],0x0
0068f3fa  MOV ECX,dword ptr [EBP + -0x1c]
0068f3fd  PUSH ECX
0068f3fe  MOV ECX,dword ptr [EBP + 0xffffff34]
0068f404  CALL 0x0068ec00
0068f409  MOV EDX,dword ptr [EBP + -0x1c]
0068f40c  MOV EAX,dword ptr [EDX]
0068f40e  MOV dword ptr [EBP + -0x18],EAX
0068f411  MOV ECX,dword ptr [EBP + -0x18]
0068f414  MOVSX EDX,byte ptr [ECX + 0x45]
0068f418  TEST EDX,EDX
0068f41a  JZ 0x0068f427
0068f41c  MOV EAX,dword ptr [EBP + -0x1c]
0068f41f  MOV dword ptr [EBP + -0x14],EAX
0068f422  JMP 0x0068f4b6
0068f427  MOV ECX,dword ptr [EBP + -0x18]
0068f42a  MOV EDX,dword ptr [ECX + 0x8]
0068f42d  MOVSX EAX,byte ptr [EDX + 0x44]
0068f431  CMP EAX,0x1
0068f434  JNZ 0x0068f453
0068f436  MOV ECX,dword ptr [EBP + -0x18]
0068f439  MOV EDX,dword ptr [ECX]
0068f43b  MOVSX EAX,byte ptr [EDX + 0x44]
0068f43f  CMP EAX,0x1
0068f442  JNZ 0x0068f453
0068f444  MOV ECX,dword ptr [EBP + -0x18]
0068f447  MOV byte ptr [ECX + 0x44],0x0
0068f44b  MOV EDX,dword ptr [EBP + -0x1c]
0068f44e  MOV dword ptr [EBP + -0x14],EDX
0068f451  JMP 0x0068f4b6
0068f453  MOV EAX,dword ptr [EBP + -0x18]
0068f456  MOV ECX,dword ptr [EAX]
0068f458  MOVSX EDX,byte ptr [ECX + 0x44]
0068f45c  CMP EDX,0x1
0068f45f  JNZ 0x0068f489
0068f461  MOV EAX,dword ptr [EBP + -0x18]
0068f464  MOV ECX,dword ptr [EAX + 0x8]
0068f467  MOV byte ptr [ECX + 0x44],0x1
0068f46b  MOV EDX,dword ptr [EBP + -0x18]
0068f46e  MOV byte ptr [EDX + 0x44],0x0
0068f472  MOV EAX,dword ptr [EBP + -0x18]
0068f475  PUSH EAX
0068f476  MOV ECX,dword ptr [EBP + 0xffffff34]
0068f47c  CALL 0x0068eb50
0068f481  MOV ECX,dword ptr [EBP + -0x1c]
0068f484  MOV EDX,dword ptr [ECX]
0068f486  MOV dword ptr [EBP + -0x18],EDX
0068f489  MOV EAX,dword ptr [EBP + -0x18]
0068f48c  MOV ECX,dword ptr [EBP + -0x1c]
0068f48f  MOV DL,byte ptr [ECX + 0x44]
0068f492  MOV byte ptr [EAX + 0x44],DL
0068f495  MOV EAX,dword ptr [EBP + -0x1c]
0068f498  MOV byte ptr [EAX + 0x44],0x1
0068f49c  MOV ECX,dword ptr [EBP + -0x18]
0068f49f  MOV EDX,dword ptr [ECX]
0068f4a1  MOV byte ptr [EDX + 0x44],0x1
0068f4a5  MOV EAX,dword ptr [EBP + -0x1c]
0068f4a8  PUSH EAX
0068f4a9  MOV ECX,dword ptr [EBP + 0xffffff34]
0068f4af  CALL 0x0068ec00
0068f4b4  JMP 0x0068f4bb
0068f4b6  JMP 0x0068f2b4
0068f4bb  MOV ECX,dword ptr [EBP + -0x14]
0068f4be  MOV byte ptr [ECX + 0x44],0x1
0068f4c2  MOV EDX,dword ptr [EBP + -0x10]
0068f4c5  PUSH EDX
0068f4c6  CALL 0x0068fa90
0068f4cb  ADD ESP,0x4
0068f4ce  MOV EAX,dword ptr [EBP + -0x10]
0068f4d1  PUSH EAX
0068f4d2  CALL 0x00686cae
0068f4d7  ADD ESP,0x4
0068f4da  MOV ECX,dword ptr [EBP + 0xffffff34]
0068f4e0  CMP dword ptr [ECX + 0x8],0x0
0068f4e4  JBE 0x0068f4fb
0068f4e6  MOV EDX,dword ptr [EBP + 0xffffff34]
0068f4ec  MOV EAX,dword ptr [EDX + 0x8]
0068f4ef  SUB EAX,0x1
0068f4f2  MOV ECX,dword ptr [EBP + 0xffffff34]
0068f4f8  MOV dword ptr [ECX + 0x8],EAX
0068f4fb  MOV EDX,dword ptr [EBP + 0x8]
0068f4fe  MOV EAX,dword ptr [EBP + 0xc]
0068f501  MOV dword ptr [EDX],EAX
0068f503  MOV ECX,dword ptr [EBP + 0x10]
0068f506  MOV dword ptr [EDX + 0x4],ECX
0068f509  MOV EAX,dword ptr [EBP + 0x8]
0068f50c  MOV ECX,dword ptr [EBP + -0xc]
0068f50f  MOV dword ptr FS:[0x0],ECX
0068f516  POP ECX
0068f517  MOV ESP,EBP
0068f519  POP EBP
0068f51a  RET 0xc

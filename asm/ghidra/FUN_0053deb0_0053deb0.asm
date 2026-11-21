; FUN_0053deb0  0053deb0
0053deb0  PUSH EBP
0053deb1  MOV EBP,ESP
0053deb3  SUB ESP,0x154
0053deb9  MOV dword ptr [EBP + 0xfffffef4],ECX
0053debf  PUSH 0x0
0053dec1  PUSH 0x0
0053dec3  CALL 0x0064c8a0
0053dec8  ADD ESP,0x8
0053decb  MOV dword ptr [EBP + -0x60],EAX
0053dece  MOV dword ptr [EBP + -0x5c],EDX
0053ded1  MOV EAX,dword ptr [EBP + -0x60]
0053ded4  MOV dword ptr [EBP + -0x58],EAX
0053ded7  MOV ECX,dword ptr [EBP + -0x5c]
0053deda  MOV dword ptr [EBP + -0x54],ECX
0053dedd  MOV dword ptr [EBP + -0x48],0xffffffff
0053dee4  MOV dword ptr [EBP + -0x20],0xffffffff
0053deeb  MOV dword ptr [EBP + -0x4c],0xffffffff
0053def2  FLDZ
0053def4  FSTP double ptr [EBP + -0x18]
0053def7  FLD1
0053def9  FSTP double ptr [EBP + -0x10]
0053defc  MOV EDX,dword ptr [0x007933ec]
0053df02  MOV EAX,dword ptr [EDX + 0xe8]
0053df08  MOV dword ptr [EBP + -0x4],EAX
0053df0b  MOV dword ptr [EBP + -0x1c],0xffffffff
0053df12  MOV dword ptr [EBP + -0x8],0xffffffff
0053df19  MOV dword ptr [EBP + -0x50],0xffffffff
0053df20  MOV dword ptr [EBP + -0x44],0x0
0053df27  MOV ECX,dword ptr [0x007933ec]
0053df2d  MOV EDX,dword ptr [ECX + 0x104]
0053df33  MOV dword ptr [EBP + -0x48],EDX
0053df36  MOV EAX,dword ptr [EBP + -0x64]
0053df39  MOV dword ptr [EBP + 0xfffffef0],EAX
0053df3f  MOV ECX,dword ptr [0x007933ec]
0053df45  MOV EDX,dword ptr [ECX + 0x100]
0053df4b  MOV dword ptr [EBP + 0xfffffef0],EDX
0053df51  CMP dword ptr [EBP + 0xfffffef0],0x7
0053df58  JA 0x0053e79e
0053df5e  MOV EAX,dword ptr [EBP + 0xfffffef0]
0053df64  JMP dword ptr [EAX*0x4 + 0x53e958]
0053df6b  MOV dword ptr [EBP + -0x20],0x803
0053df72  FLD double ptr [0x006b2c40]
0053df78  FSTP double ptr [EBP + -0x10]
0053df7b  JMP 0x0053e79e
0053df80  MOV dword ptr [EBP + -0x20],0x82e
0053df87  FLD double ptr [0x006b2c40]
0053df8d  FSTP double ptr [EBP + -0x10]
0053df90  JMP 0x0053e79e
0053df95  LEA ECX,[EBP + -0x58]
0053df98  PUSH ECX
0053df99  MOV EDX,dword ptr [EBP + -0x4]
0053df9c  PUSH EDX
0053df9d  CALL 0x005dcb00
0053dfa2  ADD ESP,0x4
0053dfa5  MOV ECX,EAX
0053dfa7  CALL 0x005d6020
0053dfac  MOV EAX,dword ptr [EBP + -0x4]
0053dfaf  PUSH EAX
0053dfb0  CALL 0x005dcb00
0053dfb5  ADD ESP,0x4
0053dfb8  CMP dword ptr [EAX + 0x4a8],0x3
0053dfbf  JLE 0x0053e03f
0053dfc1  PUSH 0x2
0053dfc3  CALL 0x0062fbf0
0053dfc8  ADD ESP,0x4
0053dfcb  TEST EAX,EAX
0053dfcd  JNZ 0x0053e03f
0053dfcf  MOV ECX,dword ptr [EBP + -0x4]
0053dfd2  PUSH ECX
0053dfd3  CALL 0x005dcb00
0053dfd8  ADD ESP,0x4
0053dfdb  MOV dword ptr [EBP + -0x70],EAX
0053dfde  MOV ECX,dword ptr [EBP + -0x70]
0053dfe1  CALL 0x0063aac0
0053dfe6  MOV EDX,dword ptr [EAX]
0053dfe8  MOV dword ptr [EBP + -0x68],EDX
0053dfeb  CMP dword ptr [EBP + -0x68],0x2
0053dfef  JZ 0x0053e010
0053dff1  MOV ECX,dword ptr [EBP + -0x70]
0053dff4  CALL 0x0063aac0
0053dff9  MOV EAX,dword ptr [EAX]
0053dffb  MOV dword ptr [EBP + -0x6c],EAX
0053dffe  CMP dword ptr [EBP + -0x6c],0x3
0053e002  JZ 0x0053e010
0053e004  MOV dword ptr [EBP + 0xfffffeec],0x0
0053e00e  JMP 0x0053e01a
0053e010  MOV dword ptr [EBP + 0xfffffeec],0x1
0053e01a  MOVZX ECX,byte ptr [EBP + 0xfffffeec]
0053e021  NEG ECX
0053e023  SBB ECX,ECX
0053e025  AND ECX,0x14
0053e028  ADD ECX,0x400
0053e02e  MOV dword ptr [EBP + -0x20],ECX
0053e031  FLD double ptr [0x006b2c40]
0053e037  FSTP double ptr [EBP + -0x10]
0053e03a  JMP 0x0053e79e
0053e03f  MOV EDX,dword ptr [EBP + -0x4]
0053e042  PUSH EDX
0053e043  CALL 0x005dcb00
0053e048  ADD ESP,0x4
0053e04b  CMP dword ptr [EAX + 0x4a8],-0x3
0053e052  JGE 0x0053e0d1
0053e054  PUSH 0x2
0053e056  CALL 0x0062fbf0
0053e05b  ADD ESP,0x4
0053e05e  TEST EAX,EAX
0053e060  JNZ 0x0053e0d1
0053e062  MOV EAX,dword ptr [EBP + -0x4]
0053e065  PUSH EAX
0053e066  CALL 0x005dcb00
0053e06b  ADD ESP,0x4
0053e06e  MOV dword ptr [EBP + -0x7c],EAX
0053e071  MOV ECX,dword ptr [EBP + -0x7c]
0053e074  CALL 0x0063aac0
0053e079  MOV ECX,dword ptr [EAX]
0053e07b  MOV dword ptr [EBP + -0x74],ECX
0053e07e  CMP dword ptr [EBP + -0x74],0x2
0053e082  JZ 0x0053e0a3
0053e084  MOV ECX,dword ptr [EBP + -0x7c]
0053e087  CALL 0x0063aac0
0053e08c  MOV EDX,dword ptr [EAX]
0053e08e  MOV dword ptr [EBP + -0x78],EDX
0053e091  CMP dword ptr [EBP + -0x78],0x3
0053e095  JZ 0x0053e0a3
0053e097  MOV dword ptr [EBP + 0xfffffee8],0x0
0053e0a1  JMP 0x0053e0ad
0053e0a3  MOV dword ptr [EBP + 0xfffffee8],0x1
0053e0ad  MOVZX EAX,byte ptr [EBP + 0xfffffee8]
0053e0b4  NEG EAX
0053e0b6  SBB EAX,EAX
0053e0b8  AND EAX,0xa
0053e0bb  ADD EAX,0x3ff
0053e0c0  MOV dword ptr [EBP + -0x20],EAX
0053e0c3  FLD double ptr [0x006b2c40]
0053e0c9  FSTP double ptr [EBP + -0x10]
0053e0cc  JMP 0x0053e79e
0053e0d1  MOV ECX,dword ptr [0x007933ec]
0053e0d7  ADD ECX,dword ptr [EBP + -0x4]
0053e0da  MOVZX EDX,byte ptr [ECX + 0xfb]
0053e0e1  TEST EDX,EDX
0053e0e3  JZ 0x0053e15f
0053e0e5  MOV EAX,dword ptr [EBP + -0x4]
0053e0e8  PUSH EAX
0053e0e9  CALL 0x005dcb00
0053e0ee  ADD ESP,0x4
0053e0f1  MOV dword ptr [EBP + 0xffffff78],EAX
0053e0f7  MOV ECX,dword ptr [EBP + 0xffffff78]
0053e0fd  CALL 0x0063aac0
0053e102  MOV ECX,dword ptr [EAX]
0053e104  MOV dword ptr [EBP + -0x80],ECX
0053e107  CMP dword ptr [EBP + -0x80],0x2
0053e10b  JZ 0x0053e135
0053e10d  MOV ECX,dword ptr [EBP + 0xffffff78]
0053e113  CALL 0x0063aac0
0053e118  MOV EDX,dword ptr [EAX]
0053e11a  MOV dword ptr [EBP + 0xffffff7c],EDX
0053e120  CMP dword ptr [EBP + 0xffffff7c],0x3
0053e127  JZ 0x0053e135
0053e129  MOV dword ptr [EBP + 0xfffffee4],0x0
0053e133  JMP 0x0053e13f
0053e135  MOV dword ptr [EBP + 0xfffffee4],0x1
0053e13f  MOVZX EAX,byte ptr [EBP + 0xfffffee4]
0053e146  NEG EAX
0053e148  SBB EAX,EAX
0053e14a  AND EAX,0x15
0053e14d  ADD EAX,0x3fe
0053e152  MOV dword ptr [EBP + -0x20],EAX
0053e155  FLD1
0053e157  FSTP double ptr [EBP + -0x10]
0053e15a  JMP 0x0053e79e
0053e15f  MOV ECX,dword ptr [EBP + -0x4]
0053e162  PUSH ECX
0053e163  MOV ECX,dword ptr [0x007933ec]
0053e169  CALL 0x00541de0
0053e16e  MOVZX EDX,AL
0053e171  TEST EDX,EDX
0053e173  JZ 0x0053e1fb
0053e179  MOV EAX,dword ptr [EBP + -0x4]
0053e17c  PUSH EAX
0053e17d  CALL 0x005dcb00
0053e182  ADD ESP,0x4
0053e185  MOV dword ptr [EBP + 0xffffff6c],EAX
0053e18b  MOV ECX,dword ptr [EBP + 0xffffff6c]
0053e191  CALL 0x0063aac0
0053e196  MOV ECX,dword ptr [EAX]
0053e198  MOV dword ptr [EBP + 0xffffff74],ECX
0053e19e  CMP dword ptr [EBP + 0xffffff74],0x2
0053e1a5  JZ 0x0053e1cf
0053e1a7  MOV ECX,dword ptr [EBP + 0xffffff6c]
0053e1ad  CALL 0x0063aac0
0053e1b2  MOV EDX,dword ptr [EAX]
0053e1b4  MOV dword ptr [EBP + 0xffffff70],EDX
0053e1ba  CMP dword ptr [EBP + 0xffffff70],0x3
0053e1c1  JZ 0x0053e1cf
0053e1c3  MOV dword ptr [EBP + 0xfffffee0],0x0
0053e1cd  JMP 0x0053e1d9
0053e1cf  MOV dword ptr [EBP + 0xfffffee0],0x1
0053e1d9  MOVZX EAX,byte ptr [EBP + 0xfffffee0]
0053e1e0  TEST EAX,EAX
0053e1e2  JNZ 0x0053e1fb
0053e1e4  CMP dword ptr [EBP + -0x58],0x0
0053e1e8  JGE 0x0053e1fb
0053e1ea  MOV dword ptr [EBP + -0x20],0x82d
0053e1f1  FLD1
0053e1f3  FSTP double ptr [EBP + -0x10]
0053e1f6  JMP 0x0053e79e
0053e1fb  CMP dword ptr [EBP + -0x58],0x0
0053e1ff  JGE 0x0053e28a
0053e205  MOV ECX,dword ptr [EBP + -0x4]
0053e208  PUSH ECX
0053e209  CALL 0x005dcb00
0053e20e  ADD ESP,0x4
0053e211  MOV dword ptr [EBP + 0xffffff60],EAX
0053e217  MOV ECX,dword ptr [EBP + 0xffffff60]
0053e21d  CALL 0x0063aac0
0053e222  MOV EDX,dword ptr [EAX]
0053e224  MOV dword ptr [EBP + 0xffffff68],EDX
0053e22a  CMP dword ptr [EBP + 0xffffff68],0x2
0053e231  JZ 0x0053e25b
0053e233  MOV ECX,dword ptr [EBP + 0xffffff60]
0053e239  CALL 0x0063aac0
0053e23e  MOV EAX,dword ptr [EAX]
0053e240  MOV dword ptr [EBP + 0xffffff64],EAX
0053e246  CMP dword ptr [EBP + 0xffffff64],0x3
0053e24d  JZ 0x0053e25b
0053e24f  MOV dword ptr [EBP + 0xfffffedc],0x0
0053e259  JMP 0x0053e265
0053e25b  MOV dword ptr [EBP + 0xfffffedc],0x1
0053e265  MOVZX ECX,byte ptr [EBP + 0xfffffedc]
0053e26c  NEG ECX
0053e26e  SBB ECX,ECX
0053e270  AND ECX,0xffffffe6
0053e273  ADD ECX,0x402
0053e279  MOV dword ptr [EBP + -0x20],ECX
0053e27c  FLD double ptr [0x006b2c38]
0053e282  FSTP double ptr [EBP + -0x10]
0053e285  JMP 0x0053e79e
0053e28a  CMP dword ptr [EBP + -0x58],0x0
0053e28e  JLE 0x0053e319
0053e294  MOV EDX,dword ptr [EBP + -0x4]
0053e297  PUSH EDX
0053e298  CALL 0x005dcb00
0053e29d  ADD ESP,0x4
0053e2a0  MOV dword ptr [EBP + 0xffffff54],EAX
0053e2a6  MOV ECX,dword ptr [EBP + 0xffffff54]
0053e2ac  CALL 0x0063aac0
0053e2b1  MOV EAX,dword ptr [EAX]
0053e2b3  MOV dword ptr [EBP + 0xffffff5c],EAX
0053e2b9  CMP dword ptr [EBP + 0xffffff5c],0x2
0053e2c0  JZ 0x0053e2ea
0053e2c2  MOV ECX,dword ptr [EBP + 0xffffff54]
0053e2c8  CALL 0x0063aac0
0053e2cd  MOV ECX,dword ptr [EAX]
0053e2cf  MOV dword ptr [EBP + 0xffffff58],ECX
0053e2d5  CMP dword ptr [EBP + 0xffffff58],0x3
0053e2dc  JZ 0x0053e2ea
0053e2de  MOV dword ptr [EBP + 0xfffffed8],0x0
0053e2e8  JMP 0x0053e2f4
0053e2ea  MOV dword ptr [EBP + 0xfffffed8],0x1
0053e2f4  MOVZX EDX,byte ptr [EBP + 0xfffffed8]
0053e2fb  NEG EDX
0053e2fd  SBB EDX,EDX
0053e2ff  AND EDX,0xffffffec
0053e302  ADD EDX,0x404
0053e308  MOV dword ptr [EBP + -0x20],EDX
0053e30b  FLD double ptr [0x006b2c38]
0053e311  FSTP double ptr [EBP + -0x10]
0053e314  JMP 0x0053e79e
0053e319  JMP 0x0053e79e
0053e31e  MOV ECX,dword ptr [0x007933e8]
0053e324  CALL 0x005dac90
0053e329  MOV dword ptr [EBP + -0x8],EAX
0053e32c  MOV ECX,dword ptr [0x007933e8]
0053e332  CALL 0x005dada0
0053e337  MOV dword ptr [EBP + -0x50],EAX
0053e33a  MOV ECX,dword ptr [0x007933e8]
0053e340  CALL 0x005db190
0053e345  MOVZX EAX,AL
0053e348  TEST EAX,EAX
0053e34a  JZ 0x0053e464
0053e350  CMP dword ptr [EBP + -0x8],-0x1
0053e354  JZ 0x0053e464
0053e35a  MOV ECX,dword ptr [EBP + -0x8]
0053e35d  PUSH ECX
0053e35e  CALL 0x005dcb00
0053e363  ADD ESP,0x4
0053e366  MOV dword ptr [EBP + 0xffffff48],EAX
0053e36c  MOV ECX,dword ptr [EBP + 0xffffff48]
0053e372  CALL 0x0063aac0
0053e377  MOV EDX,dword ptr [EAX]
0053e379  MOV dword ptr [EBP + 0xffffff50],EDX
0053e37f  CMP dword ptr [EBP + 0xffffff50],0x2
0053e386  JZ 0x0053e3b0
0053e388  MOV ECX,dword ptr [EBP + 0xffffff48]
0053e38e  CALL 0x0063aac0
0053e393  MOV EAX,dword ptr [EAX]
0053e395  MOV dword ptr [EBP + 0xffffff4c],EAX
0053e39b  CMP dword ptr [EBP + 0xffffff4c],0x3
0053e3a2  JZ 0x0053e3b0
0053e3a4  MOV dword ptr [EBP + 0xfffffed4],0x0
0053e3ae  JMP 0x0053e3ba
0053e3b0  MOV dword ptr [EBP + 0xfffffed4],0x1
0053e3ba  MOVZX ECX,byte ptr [EBP + 0xfffffed4]
0053e3c1  TEST ECX,ECX
0053e3c3  JZ 0x0053e3d1
0053e3c5  MOV dword ptr [EBP + 0xfffffed0],0xffffffff
0053e3cf  JMP 0x0053e3da
0053e3d1  MOV EDX,dword ptr [EBP + -0x8]
0053e3d4  MOV dword ptr [EBP + 0xfffffed0],EDX
0053e3da  MOV EAX,dword ptr [EBP + 0xfffffed0]
0053e3e0  MOV dword ptr [EBP + -0x48],EAX
0053e3e3  MOV ECX,dword ptr [EBP + -0x8]
0053e3e6  PUSH ECX
0053e3e7  CALL 0x005dcb00
0053e3ec  ADD ESP,0x4
0053e3ef  MOV dword ptr [EBP + 0xffffff3c],EAX
0053e3f5  MOV ECX,dword ptr [EBP + 0xffffff3c]
0053e3fb  CALL 0x0063aac0
0053e400  MOV EDX,dword ptr [EAX]
0053e402  MOV dword ptr [EBP + 0xffffff44],EDX
0053e408  CMP dword ptr [EBP + 0xffffff44],0x2
0053e40f  JZ 0x0053e439
0053e411  MOV ECX,dword ptr [EBP + 0xffffff3c]
0053e417  CALL 0x0063aac0
0053e41c  MOV EAX,dword ptr [EAX]
0053e41e  MOV dword ptr [EBP + 0xffffff40],EAX
0053e424  CMP dword ptr [EBP + 0xffffff40],0x3
0053e42b  JZ 0x0053e439
0053e42d  MOV dword ptr [EBP + 0xfffffecc],0x0
0053e437  JMP 0x0053e443
0053e439  MOV dword ptr [EBP + 0xfffffecc],0x1
0053e443  MOVZX ECX,byte ptr [EBP + 0xfffffecc]
0053e44a  NEG ECX
0053e44c  SBB ECX,ECX
0053e44e  AND ECX,0x15
0053e451  ADD ECX,0x3fd
0053e457  MOV dword ptr [EBP + -0x20],ECX
0053e45a  FLD1
0053e45c  FSTP double ptr [EBP + -0x10]
0053e45f  JMP 0x0053e6c8
0053e464  CMP dword ptr [EBP + -0x8],-0x1
0053e468  JZ 0x0053e481
0053e46a  LEA EDX,[EBP + -0x58]
0053e46d  PUSH EDX
0053e46e  MOV EAX,dword ptr [EBP + -0x8]
0053e471  PUSH EAX
0053e472  CALL 0x005dcb00
0053e477  ADD ESP,0x4
0053e47a  MOV ECX,EAX
0053e47c  CALL 0x005d6020
0053e481  CMP dword ptr [EBP + -0x8],-0x1
0053e485  JZ 0x0053e5b5
0053e48b  CMP dword ptr [EBP + -0x58],0x0
0053e48f  JLE 0x0053e5b5
0053e495  PUSH 0x2
0053e497  CALL 0x0062fbf0
0053e49c  ADD ESP,0x4
0053e49f  TEST EAX,EAX
0053e4a1  JNZ 0x0053e5b5
0053e4a7  MOV ECX,dword ptr [EBP + -0x8]
0053e4aa  PUSH ECX
0053e4ab  CALL 0x005dcb00
0053e4b0  ADD ESP,0x4
0053e4b3  MOV dword ptr [EBP + 0xffffff30],EAX
0053e4b9  MOV ECX,dword ptr [EBP + 0xffffff30]
0053e4bf  CALL 0x0063aac0
0053e4c4  MOV EDX,dword ptr [EAX]
0053e4c6  MOV dword ptr [EBP + 0xffffff38],EDX
0053e4cc  CMP dword ptr [EBP + 0xffffff38],0x2
0053e4d3  JZ 0x0053e4fd
0053e4d5  MOV ECX,dword ptr [EBP + 0xffffff30]
0053e4db  CALL 0x0063aac0
0053e4e0  MOV EAX,dword ptr [EAX]
0053e4e2  MOV dword ptr [EBP + 0xffffff34],EAX
0053e4e8  CMP dword ptr [EBP + 0xffffff34],0x3
0053e4ef  JZ 0x0053e4fd
0053e4f1  MOV dword ptr [EBP + 0xfffffec8],0x0
0053e4fb  JMP 0x0053e507
0053e4fd  MOV dword ptr [EBP + 0xfffffec8],0x1
0053e507  MOVZX ECX,byte ptr [EBP + 0xfffffec8]
0053e50e  TEST ECX,ECX
0053e510  JZ 0x0053e51e
0053e512  MOV dword ptr [EBP + 0xfffffec4],0xffffffff
0053e51c  JMP 0x0053e527
0053e51e  MOV EDX,dword ptr [EBP + -0x8]
0053e521  MOV dword ptr [EBP + 0xfffffec4],EDX
0053e527  MOV EAX,dword ptr [EBP + 0xfffffec4]
0053e52d  MOV dword ptr [EBP + -0x48],EAX
0053e530  MOV ECX,dword ptr [EBP + -0x8]
0053e533  PUSH ECX
0053e534  CALL 0x005dcb00
0053e539  ADD ESP,0x4
0053e53c  MOV dword ptr [EBP + 0xffffff24],EAX
0053e542  MOV ECX,dword ptr [EBP + 0xffffff24]
0053e548  CALL 0x0063aac0
0053e54d  MOV EDX,dword ptr [EAX]
0053e54f  MOV dword ptr [EBP + 0xffffff2c],EDX
0053e555  CMP dword ptr [EBP + 0xffffff2c],0x2
0053e55c  JZ 0x0053e586
0053e55e  MOV ECX,dword ptr [EBP + 0xffffff24]
0053e564  CALL 0x0063aac0
0053e569  MOV EAX,dword ptr [EAX]
0053e56b  MOV dword ptr [EBP + 0xffffff28],EAX
0053e571  CMP dword ptr [EBP + 0xffffff28],0x3
0053e578  JZ 0x0053e586
0053e57a  MOV dword ptr [EBP + 0xfffffec0],0x0
0053e584  JMP 0x0053e590
0053e586  MOV dword ptr [EBP + 0xfffffec0],0x1
0053e590  MOVZX ECX,byte ptr [EBP + 0xfffffec0]
0053e597  NEG ECX
0053e599  SBB ECX,ECX
0053e59b  AND ECX,0x19
0053e59e  ADD ECX,0x3f2
0053e5a4  MOV dword ptr [EBP + -0x20],ECX
0053e5a7  FLD double ptr [0x006b2c38]
0053e5ad  FSTP double ptr [EBP + -0x10]
0053e5b0  JMP 0x0053e6c8
0053e5b5  CMP dword ptr [EBP + -0x50],-0x1
0053e5b9  JZ 0x0053e6c8
0053e5bf  MOV EDX,dword ptr [EBP + -0x50]
0053e5c2  PUSH EDX
0053e5c3  CALL 0x005dcb00
0053e5c8  ADD ESP,0x4
0053e5cb  MOV dword ptr [EBP + 0xffffff18],EAX
0053e5d1  MOV ECX,dword ptr [EBP + 0xffffff18]
0053e5d7  CALL 0x0063aac0
0053e5dc  MOV EAX,dword ptr [EAX]
0053e5de  MOV dword ptr [EBP + 0xffffff20],EAX
0053e5e4  CMP dword ptr [EBP + 0xffffff20],0x2
0053e5eb  JZ 0x0053e615
0053e5ed  MOV ECX,dword ptr [EBP + 0xffffff18]
0053e5f3  CALL 0x0063aac0
0053e5f8  MOV ECX,dword ptr [EAX]
0053e5fa  MOV dword ptr [EBP + 0xffffff1c],ECX
0053e600  CMP dword ptr [EBP + 0xffffff1c],0x3
0053e607  JZ 0x0053e615
0053e609  MOV dword ptr [EBP + 0xfffffebc],0x0
0053e613  JMP 0x0053e61f
0053e615  MOV dword ptr [EBP + 0xfffffebc],0x1
0053e61f  MOVZX EDX,byte ptr [EBP + 0xfffffebc]
0053e626  TEST EDX,EDX
0053e628  JZ 0x0053e636
0053e62a  MOV dword ptr [EBP + 0xfffffeb8],0xffffffff
0053e634  JMP 0x0053e63f
0053e636  MOV EAX,dword ptr [EBP + -0x50]
0053e639  MOV dword ptr [EBP + 0xfffffeb8],EAX
0053e63f  MOV ECX,dword ptr [EBP + 0xfffffeb8]
0053e645  MOV dword ptr [EBP + -0x48],ECX
0053e648  MOV EDX,dword ptr [EBP + -0x50]
0053e64b  PUSH EDX
0053e64c  CALL 0x005dcb00
0053e651  ADD ESP,0x4
0053e654  MOV dword ptr [EBP + 0xffffff0c],EAX
0053e65a  MOV ECX,dword ptr [EBP + 0xffffff0c]
0053e660  CALL 0x0063aac0
0053e665  MOV EAX,dword ptr [EAX]
0053e667  MOV dword ptr [EBP + 0xffffff14],EAX
0053e66d  CMP dword ptr [EBP + 0xffffff14],0x2
0053e674  JZ 0x0053e69e
0053e676  MOV ECX,dword ptr [EBP + 0xffffff0c]
0053e67c  CALL 0x0063aac0
0053e681  MOV ECX,dword ptr [EAX]
0053e683  MOV dword ptr [EBP + 0xffffff10],ECX
0053e689  CMP dword ptr [EBP + 0xffffff10],0x3
0053e690  JZ 0x0053e69e
0053e692  MOV dword ptr [EBP + 0xfffffeb4],0x0
0053e69c  JMP 0x0053e6a8
0053e69e  MOV dword ptr [EBP + 0xfffffeb4],0x1
0053e6a8  MOVZX EDX,byte ptr [EBP + 0xfffffeb4]
0053e6af  NEG EDX
0053e6b1  SBB EDX,EDX
0053e6b3  AND EDX,0x19
0053e6b6  ADD EDX,0x3f3
0053e6bc  MOV dword ptr [EBP + -0x20],EDX
0053e6bf  FLD double ptr [0x006b2c38]
0053e6c5  FSTP double ptr [EBP + -0x10]
0053e6c8  JMP 0x0053e79e
0053e6cd  MOV dword ptr [EBP + -0x1c],0x29810
0053e6d4  JMP 0x0053e79e
0053e6d9  MOV dword ptr [EBP + -0x1c],0x29816
0053e6e0  JMP 0x0053e79e
0053e6e5  MOV ECX,dword ptr [0x007933ec]
0053e6eb  CALL 0x00541790
0053e6f0  MOVZX EAX,AL
0053e6f3  TEST EAX,EAX
0053e6f5  JZ 0x0053e78e
0053e6fb  MOV dword ptr [EBP + -0x1c],0x2982b
0053e702  MOV ECX,dword ptr [0x007933ec]
0053e708  CALL 0x00541740
0053e70d  MOVZX ECX,AL
0053e710  TEST ECX,ECX
0053e712  JZ 0x0053e725
0053e714  PUSH 0x2
0053e716  PUSH 0x0
0053e718  CALL 0x0062fc30
0053e71d  ADD ESP,0x8
0053e720  MOV dword ptr [EBP + -0x44],EAX
0053e723  JMP 0x0053e734
0053e725  PUSH 0x2
0053e727  PUSH 0x1
0053e729  CALL 0x0062fc30
0053e72e  ADD ESP,0x8
0053e731  MOV dword ptr [EBP + -0x44],EAX
0053e734  MOV EDX,dword ptr [0x007933ec]
0053e73a  MOV dword ptr [EBP + 0xffffff08],EDX
0053e740  MOV EAX,dword ptr [EBP + 0xffffff08]
0053e746  MOV dword ptr [EAX + 0x100],0xffffffff
0053e750  MOV ECX,dword ptr [EBP + 0xffffff08]
0053e756  MOV dword ptr [ECX + 0x104],0xffffffff
0053e760  CMP dword ptr [EBP + -0x48],0x4
0053e764  JNZ 0x0053e78c
0053e766  PUSH 0x0
0053e768  MOV EDX,dword ptr [0x0162ee80]
0053e76e  MOV EAX,dword ptr [EDX + 0x4]
0053e771  PUSH EAX
0053e772  MOV ECX,dword ptr [EBP + -0x44]
0053e775  PUSH ECX
0053e776  MOV EDX,dword ptr [EBP + -0x1c]
0053e779  PUSH EDX
0053e77a  MOV EAX,[0x007933f4]
0053e77f  MOV ECX,dword ptr [EAX + 0x48]
0053e782  CALL 0x005cd700
0053e787  JMP 0x0053e952
0053e78c  JMP 0x0053e795
0053e78e  MOV dword ptr [EBP + -0x1c],0x29828
0053e795  JMP 0x0053e79e
0053e797  MOV dword ptr [EBP + -0x1c],0x2982e
0053e79e  MOV ECX,dword ptr [0x007933ec]
0053e7a4  MOV dword ptr [EBP + 0xffffff04],ECX
0053e7aa  MOV EDX,dword ptr [EBP + 0xffffff04]
0053e7b0  MOV dword ptr [EDX + 0x100],0xffffffff
0053e7ba  MOV EAX,dword ptr [EBP + 0xffffff04]
0053e7c0  MOV dword ptr [EAX + 0x104],0xffffffff
0053e7ca  CMP dword ptr [EBP + -0x48],0x4
0053e7ce  JNZ 0x0053e81a
0053e7d0  CMP dword ptr [EBP + -0x1c],-0x1
0053e7d4  JNZ 0x0053e7f7
0053e7d6  PUSH 0x0
0053e7d8  PUSH 0x1
0053e7da  MOV ECX,dword ptr [0x0162ee80]
0053e7e0  MOV EDX,dword ptr [ECX + 0x4]
0053e7e3  MOV EAX,[0x0162ee80]
0053e7e8  MOV ECX,dword ptr [EAX + 0x4]
0053e7eb  MOV EDX,dword ptr [EDX]
0053e7ed  MOV EAX,dword ptr [EDX + 0x8]
0053e7f0  CALL EAX
0053e7f2  JMP 0x0053e952
0053e7f7  PUSH 0x0
0053e7f9  MOV ECX,dword ptr [0x0162ee80]
0053e7ff  MOV EDX,dword ptr [ECX + 0x4]
0053e802  PUSH EDX
0053e803  MOV EAX,dword ptr [EBP + -0x1c]
0053e806  PUSH EAX
0053e807  MOV ECX,dword ptr [0x007933f4]
0053e80d  MOV ECX,dword ptr [ECX + 0x48]
0053e810  CALL 0x005cd7c0
0053e815  JMP 0x0053e952
0053e81a  CMP dword ptr [EBP + -0x20],-0x1
0053e81e  JZ 0x0053e8a8
0053e824  MOV ECX,dword ptr [0x0162ee84]
0053e82a  CALL 0x00636730
0053e82f  TEST EAX,EAX
0053e831  JZ 0x0053e8a8
0053e833  CMP dword ptr [EBP + -0x48],-0x1
0053e837  JLE 0x0053e8cb
0053e83d  MOV EDX,dword ptr [EBP + -0x48]
0053e840  PUSH EDX
0053e841  CALL 0x005dcb00
0053e846  ADD ESP,0x4
0053e849  MOV dword ptr [EBP + 0xfffffef8],EAX
0053e84f  MOV ECX,dword ptr [EBP + 0xfffffef8]
0053e855  CALL 0x0063aac0
0053e85a  MOV EAX,dword ptr [EAX]
0053e85c  MOV dword ptr [EBP + 0xffffff00],EAX
0053e862  CMP dword ptr [EBP + 0xffffff00],0x2
0053e869  JZ 0x0053e893
0053e86b  MOV ECX,dword ptr [EBP + 0xfffffef8]
0053e871  CALL 0x0063aac0
0053e876  MOV ECX,dword ptr [EAX]
0053e878  MOV dword ptr [EBP + 0xfffffefc],ECX
0053e87e  CMP dword ptr [EBP + 0xfffffefc],0x3
0053e885  JZ 0x0053e893
0053e887  MOV dword ptr [EBP + 0xfffffeb0],0x0
0053e891  JMP 0x0053e89d
0053e893  MOV dword ptr [EBP + 0xfffffeb0],0x1
0053e89d  MOVZX EDX,byte ptr [EBP + 0xfffffeb0]
0053e8a4  TEST EDX,EDX
0053e8a6  JZ 0x0053e8cb
0053e8a8  PUSH 0x0
0053e8aa  PUSH 0x1
0053e8ac  MOV EAX,[0x0162ee80]
0053e8b1  MOV ECX,dword ptr [EAX + 0x4]
0053e8b4  MOV EDX,dword ptr [0x0162ee80]
0053e8ba  MOV EAX,dword ptr [EDX + 0x4]
0053e8bd  MOV EDX,dword ptr [ECX]
0053e8bf  MOV ECX,EAX
0053e8c1  MOV EAX,dword ptr [EDX + 0x8]
0053e8c4  CALL EAX
0053e8c6  JMP 0x0053e952
0053e8cb  CMP dword ptr [EBP + -0x48],-0x1
0053e8cf  JZ 0x0053e8dc
0053e8d1  MOV ECX,dword ptr [EBP + -0x48]
0053e8d4  MOV dword ptr [EBP + 0xfffffeac],ECX
0053e8da  JMP 0x0053e8ed
0053e8dc  MOV ECX,dword ptr [0x0162ee84]
0053e8e2  CALL 0x00636c50
0053e8e7  MOV dword ptr [EBP + 0xfffffeac],EAX
0053e8ed  MOV EDX,dword ptr [EBP + 0xfffffeac]
0053e8f3  MOV dword ptr [EBP + -0x40],EDX
0053e8f6  MOV EAX,dword ptr [EBP + -0x20]
0053e8f9  MOV dword ptr [EBP + -0x3c],EAX
0053e8fc  MOV ECX,dword ptr [EBP + -0x4c]
0053e8ff  MOV dword ptr [EBP + -0x38],ECX
0053e902  FLD double ptr [EBP + -0x18]
0053e905  FSTP double ptr [EBP + -0x30]
0053e908  FLD double ptr [EBP + -0x10]
0053e90b  FSTP double ptr [EBP + -0x28]
0053e90e  PUSH 0x1
0053e910  MOV EDX,dword ptr [0x0162ee80]
0053e916  MOV EAX,dword ptr [EDX + 0x4]
0053e919  MOV ECX,dword ptr [0x0162ee80]
0053e91f  MOV ECX,dword ptr [ECX + 0x4]
0053e922  MOV EDX,dword ptr [EAX]
0053e924  MOV EAX,dword ptr [EDX + 0x4]
0053e927  CALL EAX
0053e929  PUSH 0x1
0053e92b  PUSH 0x2
0053e92d  MOV ECX,dword ptr [0x0162ee84]
0053e933  CALL 0x00637810
0053e938  PUSH EAX
0053e939  MOV ECX,dword ptr [0x0162ee80]
0053e93f  MOV EDX,dword ptr [ECX + 0x4]
0053e942  PUSH EDX
0053e943  LEA EAX,[EBP + -0x40]
0053e946  PUSH EAX
0053e947  MOV ECX,dword ptr [0x0162ee84]
0053e94d  CALL 0x00639390
0053e952  MOV ESP,EBP
0053e954  POP EBP
0053e955  RET

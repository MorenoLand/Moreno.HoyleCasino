; FUN_0068dd20  0068dd20
0068dd20  PUSH EBP
0068dd21  MOV EBP,ESP
0068dd23  PUSH -0x1
0068dd25  PUSH 0x6ae179
0068dd2a  MOV EAX,FS:[0x0]
0068dd30  PUSH EAX
0068dd31  SUB ESP,0x12c
0068dd37  MOV EAX,[0x00781870]
0068dd3c  XOR EAX,EBP
0068dd3e  PUSH EAX
0068dd3f  LEA EAX,[EBP + -0xc]
0068dd42  MOV FS:[0x0],EAX
0068dd48  MOV dword ptr [EBP + 0xfffffed0],ECX
0068dd4e  MOV EAX,dword ptr [EBP + 0x10]
0068dd51  MOV dword ptr [EBP + -0x64],EAX
0068dd54  MOV ECX,dword ptr [EBP + -0x64]
0068dd57  MOVSX EDX,byte ptr [ECX + 0x35]
0068dd5b  TEST EDX,EDX
0068dd5d  JZ 0x0068dda5
0068dd5f  PUSH 0x6e5680
0068dd64  LEA ECX,[EBP + -0x60]
0068dd67  CALL dword ptr [0x006b20fc]
0068dd6d  MOV dword ptr [EBP + -0x4],0x0
0068dd74  LEA EAX,[EBP + -0x60]
0068dd77  PUSH EAX
0068dd78  LEA ECX,[EBP + -0x44]
0068dd7b  CALL 0x0068d440
0068dd80  MOV dword ptr [EBP + -0x44],0x6e5678
0068dd87  PUSH 0x702f5c
0068dd8c  LEA ECX,[EBP + -0x44]
0068dd8f  PUSH ECX
0068dd90  CALL 0x00686fc0
0068dda5  MOV EDX,dword ptr [EBP + 0x10]
0068dda8  MOV dword ptr [EBP + -0x10],EDX
0068ddab  LEA ECX,[EBP + 0xc]
0068ddae  CALL 0x0068e790
0068ddb3  MOV EAX,dword ptr [EBP + -0x10]
0068ddb6  MOV dword ptr [EBP + -0x18],EAX
0068ddb9  MOV ECX,dword ptr [EBP + -0x18]
0068ddbc  MOV EDX,dword ptr [ECX]
0068ddbe  MOVSX EAX,byte ptr [EDX + 0x35]
0068ddc2  TEST EAX,EAX
0068ddc4  JZ 0x0068ddd1
0068ddc6  MOV ECX,dword ptr [EBP + -0x18]
0068ddc9  MOV EDX,dword ptr [ECX + 0x8]
0068ddcc  MOV dword ptr [EBP + -0x14],EDX
0068ddcf  JMP 0x0068ddf8
0068ddd1  MOV EAX,dword ptr [EBP + -0x18]
0068ddd4  MOV ECX,dword ptr [EAX + 0x8]
0068ddd7  MOVSX EDX,byte ptr [ECX + 0x35]
0068dddb  TEST EDX,EDX
0068dddd  JZ 0x0068dde9
0068dddf  MOV EAX,dword ptr [EBP + -0x18]
0068dde2  MOV ECX,dword ptr [EAX]
0068dde4  MOV dword ptr [EBP + -0x14],ECX
0068dde7  JMP 0x0068ddf8
0068dde9  MOV EDX,dword ptr [EBP + 0x10]
0068ddec  MOV dword ptr [EBP + -0x18],EDX
0068ddef  MOV EAX,dword ptr [EBP + -0x18]
0068ddf2  MOV ECX,dword ptr [EAX + 0x8]
0068ddf5  MOV dword ptr [EBP + -0x14],ECX
0068ddf8  MOV EDX,dword ptr [EBP + -0x18]
0068ddfb  CMP EDX,dword ptr [EBP + -0x10]
0068ddfe  JNZ 0x0068df2f
0068de04  MOV EAX,dword ptr [EBP + -0x10]
0068de07  MOV ECX,dword ptr [EAX + 0x4]
0068de0a  MOV dword ptr [EBP + -0x1c],ECX
0068de0d  MOV EDX,dword ptr [EBP + -0x14]
0068de10  MOVSX EAX,byte ptr [EDX + 0x35]
0068de14  TEST EAX,EAX
0068de16  JNZ 0x0068de21
0068de18  MOV ECX,dword ptr [EBP + -0x14]
0068de1b  MOV EDX,dword ptr [EBP + -0x1c]
0068de1e  MOV dword ptr [ECX + 0x4],EDX
0068de21  MOV EAX,dword ptr [EBP + 0xfffffed0]
0068de27  MOV ECX,dword ptr [EAX + 0x4]
0068de2a  MOV EDX,dword ptr [ECX + 0x4]
0068de2d  CMP EDX,dword ptr [EBP + -0x10]
0068de30  JNZ 0x0068de43
0068de32  MOV EAX,dword ptr [EBP + 0xfffffed0]
0068de38  MOV ECX,dword ptr [EAX + 0x4]
0068de3b  MOV EDX,dword ptr [EBP + -0x14]
0068de3e  MOV dword ptr [ECX + 0x4],EDX
0068de41  JMP 0x0068de60
0068de43  MOV EAX,dword ptr [EBP + -0x1c]
0068de46  MOV ECX,dword ptr [EAX]
0068de48  CMP ECX,dword ptr [EBP + -0x10]
0068de4b  JNZ 0x0068de57
0068de4d  MOV EDX,dword ptr [EBP + -0x1c]
0068de50  MOV EAX,dword ptr [EBP + -0x14]
0068de53  MOV dword ptr [EDX],EAX
0068de55  JMP 0x0068de60
0068de57  MOV ECX,dword ptr [EBP + -0x1c]
0068de5a  MOV EDX,dword ptr [EBP + -0x14]
0068de5d  MOV dword ptr [ECX + 0x8],EDX
0068de60  MOV EAX,dword ptr [EBP + 0xfffffed0]
0068de66  MOV ECX,dword ptr [EAX + 0x4]
0068de69  MOV dword ptr [EBP + -0x68],ECX
0068de6c  MOV EDX,dword ptr [EBP + -0x68]
0068de6f  MOV EAX,dword ptr [EDX]
0068de71  CMP EAX,dword ptr [EBP + -0x10]
0068de74  JNZ 0x0068dec9
0068de76  MOV ECX,dword ptr [EBP + -0x14]
0068de79  MOVSX EDX,byte ptr [ECX + 0x35]
0068de7d  TEST EDX,EDX
0068de7f  JZ 0x0068de8c
0068de81  MOV EAX,dword ptr [EBP + -0x1c]
0068de84  MOV dword ptr [EBP + 0xfffffecc],EAX
0068de8a  JMP 0x0068deb2
0068de8c  MOV ECX,dword ptr [EBP + -0x14]
0068de8f  MOV dword ptr [EBP + -0x6c],ECX
0068de92  MOV EDX,dword ptr [EBP + -0x6c]
0068de95  MOV EAX,dword ptr [EDX]
0068de97  MOVSX ECX,byte ptr [EAX + 0x35]
0068de9b  TEST ECX,ECX
0068de9d  JNZ 0x0068dea9
0068de9f  MOV EDX,dword ptr [EBP + -0x6c]
0068dea2  MOV EAX,dword ptr [EDX]
0068dea4  MOV dword ptr [EBP + -0x6c],EAX
0068dea7  JMP 0x0068de92
0068dea9  MOV ECX,dword ptr [EBP + -0x6c]
0068deac  MOV dword ptr [EBP + 0xfffffecc],ECX
0068deb2  MOV EDX,dword ptr [EBP + 0xfffffed0]
0068deb8  MOV EAX,dword ptr [EDX + 0x4]
0068debb  MOV dword ptr [EBP + -0x70],EAX
0068debe  MOV ECX,dword ptr [EBP + -0x70]
0068dec1  MOV EDX,dword ptr [EBP + 0xfffffecc]
0068dec7  MOV dword ptr [ECX],EDX
0068dec9  MOV EAX,dword ptr [EBP + 0xfffffed0]
0068decf  MOV ECX,dword ptr [EAX + 0x4]
0068ded2  MOV EDX,dword ptr [ECX + 0x8]
0068ded5  CMP EDX,dword ptr [EBP + -0x10]
0068ded8  JNZ 0x0068df2a
0068deda  MOV EAX,dword ptr [EBP + -0x14]
0068dedd  MOVSX ECX,byte ptr [EAX + 0x35]
0068dee1  TEST ECX,ECX
0068dee3  JZ 0x0068def0
0068dee5  MOV EDX,dword ptr [EBP + -0x1c]
0068dee8  MOV dword ptr [EBP + 0xfffffec8],EDX
0068deee  JMP 0x0068df18
0068def0  MOV EAX,dword ptr [EBP + -0x14]
0068def3  MOV dword ptr [EBP + -0x74],EAX
0068def6  MOV ECX,dword ptr [EBP + -0x74]
0068def9  MOV EDX,dword ptr [ECX + 0x8]
0068defc  MOVSX EAX,byte ptr [EDX + 0x35]
0068df00  TEST EAX,EAX
0068df02  JNZ 0x0068df0f
0068df04  MOV ECX,dword ptr [EBP + -0x74]
0068df07  MOV EDX,dword ptr [ECX + 0x8]
0068df0a  MOV dword ptr [EBP + -0x74],EDX
0068df0d  JMP 0x0068def6
0068df0f  MOV EAX,dword ptr [EBP + -0x74]
0068df12  MOV dword ptr [EBP + 0xfffffec8],EAX
0068df18  MOV ECX,dword ptr [EBP + 0xfffffed0]
0068df1e  MOV EDX,dword ptr [ECX + 0x4]
0068df21  MOV EAX,dword ptr [EBP + 0xfffffec8]
0068df27  MOV dword ptr [EDX + 0x8],EAX
0068df2a  JMP 0x0068e032
0068df2f  MOV ECX,dword ptr [EBP + -0x10]
0068df32  MOV EDX,dword ptr [ECX]
0068df34  MOV EAX,dword ptr [EBP + -0x18]
0068df37  MOV dword ptr [EDX + 0x4],EAX
0068df3a  MOV ECX,dword ptr [EBP + -0x18]
0068df3d  MOV EDX,dword ptr [EBP + -0x10]
0068df40  MOV EAX,dword ptr [EDX]
0068df42  MOV dword ptr [ECX],EAX
0068df44  MOV ECX,dword ptr [EBP + -0x10]
0068df47  MOV EDX,dword ptr [EBP + -0x18]
0068df4a  CMP EDX,dword ptr [ECX + 0x8]
0068df4d  JNZ 0x0068df57
0068df4f  MOV EAX,dword ptr [EBP + -0x18]
0068df52  MOV dword ptr [EBP + -0x1c],EAX
0068df55  JMP 0x0068df94
0068df57  MOV ECX,dword ptr [EBP + -0x18]
0068df5a  MOV EDX,dword ptr [ECX + 0x4]
0068df5d  MOV dword ptr [EBP + -0x1c],EDX
0068df60  MOV EAX,dword ptr [EBP + -0x14]
0068df63  MOVSX ECX,byte ptr [EAX + 0x35]
0068df67  TEST ECX,ECX
0068df69  JNZ 0x0068df74
0068df6b  MOV EDX,dword ptr [EBP + -0x14]
0068df6e  MOV EAX,dword ptr [EBP + -0x1c]
0068df71  MOV dword ptr [EDX + 0x4],EAX
0068df74  MOV ECX,dword ptr [EBP + -0x1c]
0068df77  MOV EDX,dword ptr [EBP + -0x14]
0068df7a  MOV dword ptr [ECX],EDX
0068df7c  MOV EAX,dword ptr [EBP + -0x18]
0068df7f  MOV ECX,dword ptr [EBP + -0x10]
0068df82  MOV EDX,dword ptr [ECX + 0x8]
0068df85  MOV dword ptr [EAX + 0x8],EDX
0068df88  MOV EAX,dword ptr [EBP + -0x10]
0068df8b  MOV ECX,dword ptr [EAX + 0x8]
0068df8e  MOV EDX,dword ptr [EBP + -0x18]
0068df91  MOV dword ptr [ECX + 0x4],EDX
0068df94  MOV EAX,dword ptr [EBP + 0xfffffed0]
0068df9a  MOV ECX,dword ptr [EAX + 0x4]
0068df9d  MOV EDX,dword ptr [ECX + 0x4]
0068dfa0  CMP EDX,dword ptr [EBP + -0x10]
0068dfa3  JNZ 0x0068dfb6
0068dfa5  MOV EAX,dword ptr [EBP + 0xfffffed0]
0068dfab  MOV ECX,dword ptr [EAX + 0x4]
0068dfae  MOV EDX,dword ptr [EBP + -0x18]
0068dfb1  MOV dword ptr [ECX + 0x4],EDX
0068dfb4  JMP 0x0068dfe8
0068dfb6  MOV EAX,dword ptr [EBP + -0x10]
0068dfb9  MOV ECX,dword ptr [EAX + 0x4]
0068dfbc  MOV dword ptr [EBP + -0x78],ECX
0068dfbf  MOV EDX,dword ptr [EBP + -0x78]
0068dfc2  MOV EAX,dword ptr [EDX]
0068dfc4  CMP EAX,dword ptr [EBP + -0x10]
0068dfc7  JNZ 0x0068dfdc
0068dfc9  MOV ECX,dword ptr [EBP + -0x10]
0068dfcc  MOV EDX,dword ptr [ECX + 0x4]
0068dfcf  MOV dword ptr [EBP + -0x7c],EDX
0068dfd2  MOV EAX,dword ptr [EBP + -0x7c]
0068dfd5  MOV ECX,dword ptr [EBP + -0x18]
0068dfd8  MOV dword ptr [EAX],ECX
0068dfda  JMP 0x0068dfe8
0068dfdc  MOV EDX,dword ptr [EBP + -0x10]
0068dfdf  MOV EAX,dword ptr [EDX + 0x4]
0068dfe2  MOV ECX,dword ptr [EBP + -0x18]
0068dfe5  MOV dword ptr [EAX + 0x8],ECX
0068dfe8  MOV EDX,dword ptr [EBP + -0x18]
0068dfeb  MOV EAX,dword ptr [EBP + -0x10]
0068dfee  MOV ECX,dword ptr [EAX + 0x4]
0068dff1  MOV dword ptr [EDX + 0x4],ECX
0068dff4  MOV EDX,dword ptr [EBP + -0x10]
0068dff7  ADD EDX,0x34
0068dffa  MOV dword ptr [EBP + 0xffffff78],EDX
0068e000  MOV EAX,dword ptr [EBP + -0x18]
0068e003  ADD EAX,0x34
0068e006  MOV dword ptr [EBP + 0xffffff7c],EAX
0068e00c  MOV ECX,dword ptr [EBP + 0xffffff7c]
0068e012  MOV DL,byte ptr [ECX]
0068e014  MOV byte ptr [EBP + -0x7d],DL
0068e017  MOV EAX,dword ptr [EBP + 0xffffff7c]
0068e01d  MOV ECX,dword ptr [EBP + 0xffffff78]
0068e023  MOV DL,byte ptr [ECX]
0068e025  MOV byte ptr [EAX],DL
0068e027  MOV EAX,dword ptr [EBP + 0xffffff78]
0068e02d  MOV CL,byte ptr [EBP + -0x7d]
0068e030  MOV byte ptr [EAX],CL
0068e032  MOV EDX,dword ptr [EBP + -0x10]
0068e035  MOVSX EAX,byte ptr [EDX + 0x34]
0068e039  CMP EAX,0x1
0068e03c  JNZ 0x0068e252
0068e042  JMP 0x0068e04d
0068e044  MOV ECX,dword ptr [EBP + -0x14]
0068e047  MOV EDX,dword ptr [ECX + 0x4]
0068e04a  MOV dword ptr [EBP + -0x1c],EDX
0068e04d  MOV EAX,dword ptr [EBP + 0xfffffed0]
0068e053  MOV ECX,dword ptr [EAX + 0x4]
0068e056  MOV EDX,dword ptr [EBP + -0x14]
0068e059  CMP EDX,dword ptr [ECX + 0x4]
0068e05c  JZ 0x0068e24b
0068e062  MOV EAX,dword ptr [EBP + -0x14]
0068e065  MOVSX ECX,byte ptr [EAX + 0x34]
0068e069  CMP ECX,0x1
0068e06c  JNZ 0x0068e24b
0068e072  MOV EDX,dword ptr [EBP + -0x1c]
0068e075  MOV EAX,dword ptr [EBP + -0x14]
0068e078  CMP EAX,dword ptr [EDX]
0068e07a  JNZ 0x0068e169
0068e080  MOV ECX,dword ptr [EBP + -0x1c]
0068e083  MOV EDX,dword ptr [ECX + 0x8]
0068e086  MOV dword ptr [EBP + -0x18],EDX
0068e089  MOV EAX,dword ptr [EBP + -0x18]
0068e08c  MOVSX ECX,byte ptr [EAX + 0x34]
0068e090  TEST ECX,ECX
0068e092  JNZ 0x0068e0ba
0068e094  MOV EDX,dword ptr [EBP + -0x18]
0068e097  MOV byte ptr [EDX + 0x34],0x1
0068e09b  MOV EAX,dword ptr [EBP + -0x1c]
0068e09e  MOV byte ptr [EAX + 0x34],0x0
0068e0a2  MOV ECX,dword ptr [EBP + -0x1c]
0068e0a5  PUSH ECX
0068e0a6  MOV ECX,dword ptr [EBP + 0xfffffed0]
0068e0ac  CALL 0x0068e3c0
0068e0b1  MOV EDX,dword ptr [EBP + -0x1c]
0068e0b4  MOV EAX,dword ptr [EDX + 0x8]
0068e0b7  MOV dword ptr [EBP + -0x18],EAX
0068e0ba  MOV ECX,dword ptr [EBP + -0x18]
0068e0bd  MOVSX EDX,byte ptr [ECX + 0x35]
0068e0c1  TEST EDX,EDX
0068e0c3  JZ 0x0068e0d0
0068e0c5  MOV EAX,dword ptr [EBP + -0x1c]
0068e0c8  MOV dword ptr [EBP + -0x14],EAX
0068e0cb  JMP 0x0068e164
0068e0d0  MOV ECX,dword ptr [EBP + -0x18]
0068e0d3  MOV EDX,dword ptr [ECX]
0068e0d5  MOVSX EAX,byte ptr [EDX + 0x34]
0068e0d9  CMP EAX,0x1
0068e0dc  JNZ 0x0068e0fc
0068e0de  MOV ECX,dword ptr [EBP + -0x18]
0068e0e1  MOV EDX,dword ptr [ECX + 0x8]
0068e0e4  MOVSX EAX,byte ptr [EDX + 0x34]
0068e0e8  CMP EAX,0x1
0068e0eb  JNZ 0x0068e0fc
0068e0ed  MOV ECX,dword ptr [EBP + -0x18]
0068e0f0  MOV byte ptr [ECX + 0x34],0x0
0068e0f4  MOV EDX,dword ptr [EBP + -0x1c]
0068e0f7  MOV dword ptr [EBP + -0x14],EDX
0068e0fa  JMP 0x0068e164
0068e0fc  MOV EAX,dword ptr [EBP + -0x18]
0068e0ff  MOV ECX,dword ptr [EAX + 0x8]
0068e102  MOVSX EDX,byte ptr [ECX + 0x34]
0068e106  CMP EDX,0x1
0068e109  JNZ 0x0068e133
0068e10b  MOV EAX,dword ptr [EBP + -0x18]
0068e10e  MOV ECX,dword ptr [EAX]
0068e110  MOV byte ptr [ECX + 0x34],0x1
0068e114  MOV EDX,dword ptr [EBP + -0x18]
0068e117  MOV byte ptr [EDX + 0x34],0x0
0068e11b  MOV EAX,dword ptr [EBP + -0x18]
0068e11e  PUSH EAX
0068e11f  MOV ECX,dword ptr [EBP + 0xfffffed0]
0068e125  CALL 0x0068e470
0068e12a  MOV ECX,dword ptr [EBP + -0x1c]
0068e12d  MOV EDX,dword ptr [ECX + 0x8]
0068e130  MOV dword ptr [EBP + -0x18],EDX
0068e133  MOV EAX,dword ptr [EBP + -0x18]
0068e136  MOV ECX,dword ptr [EBP + -0x1c]
0068e139  MOV DL,byte ptr [ECX + 0x34]
0068e13c  MOV byte ptr [EAX + 0x34],DL
0068e13f  MOV EAX,dword ptr [EBP + -0x1c]
0068e142  MOV byte ptr [EAX + 0x34],0x1
0068e146  MOV ECX,dword ptr [EBP + -0x18]
0068e149  MOV EDX,dword ptr [ECX + 0x8]
0068e14c  MOV byte ptr [EDX + 0x34],0x1
0068e150  MOV EAX,dword ptr [EBP + -0x1c]
0068e153  PUSH EAX
0068e154  MOV ECX,dword ptr [EBP + 0xfffffed0]
0068e15a  CALL 0x0068e3c0
0068e15f  JMP 0x0068e24b
0068e164  JMP 0x0068e246
0068e169  MOV ECX,dword ptr [EBP + -0x1c]
0068e16c  MOV EDX,dword ptr [ECX]
0068e16e  MOV dword ptr [EBP + -0x18],EDX
0068e171  MOV EAX,dword ptr [EBP + -0x18]
0068e174  MOVSX ECX,byte ptr [EAX + 0x34]
0068e178  TEST ECX,ECX
0068e17a  JNZ 0x0068e1a1
0068e17c  MOV EDX,dword ptr [EBP + -0x18]
0068e17f  MOV byte ptr [EDX + 0x34],0x1
0068e183  MOV EAX,dword ptr [EBP + -0x1c]
0068e186  MOV byte ptr [EAX + 0x34],0x0
0068e18a  MOV ECX,dword ptr [EBP + -0x1c]
0068e18d  PUSH ECX
0068e18e  MOV ECX,dword ptr [EBP + 0xfffffed0]
0068e194  CALL 0x0068e470
0068e199  MOV EDX,dword ptr [EBP + -0x1c]
0068e19c  MOV EAX,dword ptr [EDX]
0068e19e  MOV dword ptr [EBP + -0x18],EAX
0068e1a1  MOV ECX,dword ptr [EBP + -0x18]
0068e1a4  MOVSX EDX,byte ptr [ECX + 0x35]
0068e1a8  TEST EDX,EDX
0068e1aa  JZ 0x0068e1b7
0068e1ac  MOV EAX,dword ptr [EBP + -0x1c]
0068e1af  MOV dword ptr [EBP + -0x14],EAX
0068e1b2  JMP 0x0068e246
0068e1b7  MOV ECX,dword ptr [EBP + -0x18]
0068e1ba  MOV EDX,dword ptr [ECX + 0x8]
0068e1bd  MOVSX EAX,byte ptr [EDX + 0x34]
0068e1c1  CMP EAX,0x1
0068e1c4  JNZ 0x0068e1e3
0068e1c6  MOV ECX,dword ptr [EBP + -0x18]
0068e1c9  MOV EDX,dword ptr [ECX]
0068e1cb  MOVSX EAX,byte ptr [EDX + 0x34]
0068e1cf  CMP EAX,0x1
0068e1d2  JNZ 0x0068e1e3
0068e1d4  MOV ECX,dword ptr [EBP + -0x18]
0068e1d7  MOV byte ptr [ECX + 0x34],0x0
0068e1db  MOV EDX,dword ptr [EBP + -0x1c]
0068e1de  MOV dword ptr [EBP + -0x14],EDX
0068e1e1  JMP 0x0068e246
0068e1e3  MOV EAX,dword ptr [EBP + -0x18]
0068e1e6  MOV ECX,dword ptr [EAX]
0068e1e8  MOVSX EDX,byte ptr [ECX + 0x34]
0068e1ec  CMP EDX,0x1
0068e1ef  JNZ 0x0068e219
0068e1f1  MOV EAX,dword ptr [EBP + -0x18]
0068e1f4  MOV ECX,dword ptr [EAX + 0x8]
0068e1f7  MOV byte ptr [ECX + 0x34],0x1
0068e1fb  MOV EDX,dword ptr [EBP + -0x18]
0068e1fe  MOV byte ptr [EDX + 0x34],0x0
0068e202  MOV EAX,dword ptr [EBP + -0x18]
0068e205  PUSH EAX
0068e206  MOV ECX,dword ptr [EBP + 0xfffffed0]
0068e20c  CALL 0x0068e3c0
0068e211  MOV ECX,dword ptr [EBP + -0x1c]
0068e214  MOV EDX,dword ptr [ECX]
0068e216  MOV dword ptr [EBP + -0x18],EDX
0068e219  MOV EAX,dword ptr [EBP + -0x18]
0068e21c  MOV ECX,dword ptr [EBP + -0x1c]
0068e21f  MOV DL,byte ptr [ECX + 0x34]
0068e222  MOV byte ptr [EAX + 0x34],DL
0068e225  MOV EAX,dword ptr [EBP + -0x1c]
0068e228  MOV byte ptr [EAX + 0x34],0x1
0068e22c  MOV ECX,dword ptr [EBP + -0x18]
0068e22f  MOV EDX,dword ptr [ECX]
0068e231  MOV byte ptr [EDX + 0x34],0x1
0068e235  MOV EAX,dword ptr [EBP + -0x1c]
0068e238  PUSH EAX
0068e239  MOV ECX,dword ptr [EBP + 0xfffffed0]
0068e23f  CALL 0x0068e470
0068e244  JMP 0x0068e24b
0068e246  JMP 0x0068e044
0068e24b  MOV ECX,dword ptr [EBP + -0x14]
0068e24e  MOV byte ptr [ECX + 0x34],0x1
0068e252  MOV EDX,dword ptr [EBP + -0x10]
0068e255  PUSH EDX
0068e256  CALL 0x0068f950
0068e25b  ADD ESP,0x4
0068e25e  MOV EAX,dword ptr [EBP + -0x10]
0068e261  PUSH EAX
0068e262  CALL 0x00686cae
0068e267  ADD ESP,0x4
0068e26a  MOV ECX,dword ptr [EBP + 0xfffffed0]
0068e270  CMP dword ptr [ECX + 0x8],0x0
0068e274  JBE 0x0068e28b
0068e276  MOV EDX,dword ptr [EBP + 0xfffffed0]
0068e27c  MOV EAX,dword ptr [EDX + 0x8]
0068e27f  SUB EAX,0x1
0068e282  MOV ECX,dword ptr [EBP + 0xfffffed0]
0068e288  MOV dword ptr [ECX + 0x8],EAX
0068e28b  MOV EDX,dword ptr [EBP + 0x8]
0068e28e  MOV EAX,dword ptr [EBP + 0xc]
0068e291  MOV dword ptr [EDX],EAX
0068e293  MOV ECX,dword ptr [EBP + 0x10]
0068e296  MOV dword ptr [EDX + 0x4],ECX
0068e299  MOV EAX,dword ptr [EBP + 0x8]
0068e29c  MOV ECX,dword ptr [EBP + -0xc]
0068e29f  MOV dword ptr FS:[0x0],ECX
0068e2a6  POP ECX
0068e2a7  MOV ESP,EBP
0068e2a9  POP EBP
0068e2aa  RET 0xc

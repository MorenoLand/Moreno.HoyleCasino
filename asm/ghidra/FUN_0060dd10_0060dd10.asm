; FUN_0060dd10  0060dd10
0060dd10  PUSH EBP
0060dd11  MOV EBP,ESP
0060dd13  SUB ESP,0x80
0060dd19  PUSH ESI
0060dd1a  MOV dword ptr [EBP + -0x7c],ECX
0060dd1d  MOV EAX,dword ptr [EBP + -0x7c]
0060dd20  MOV EDX,dword ptr [EAX]
0060dd22  MOV ECX,dword ptr [EBP + -0x7c]
0060dd25  MOV EAX,dword ptr [EDX + 0x38]
0060dd28  CALL EAX
0060dd2a  MOVZX ECX,AX
0060dd2d  MOV dword ptr [EBP + -0x20],ECX
0060dd30  MOV EDX,dword ptr [EBP + -0x7c]
0060dd33  MOV EAX,dword ptr [EDX]
0060dd35  MOV ECX,dword ptr [EBP + -0x7c]
0060dd38  MOV EDX,dword ptr [EAX + 0x3c]
0060dd3b  CALL EDX
0060dd3d  MOVZX EAX,AX
0060dd40  MOV dword ptr [EBP + -0x4],EAX
0060dd43  PUSH 0x0
0060dd45  LEA ECX,[EBP + -0x18]
0060dd48  PUSH ECX
0060dd49  PUSH 0x0
0060dd4b  PUSH 0x30
0060dd4d  CALL dword ptr [0x006b23bc]
0060dd53  TEST EAX,EAX
0060dd55  JNZ 0x0060dd7b
0060dd57  MOV dword ptr [EBP + -0x14],0x0
0060dd5e  MOV dword ptr [EBP + -0x18],0x0
0060dd65  PUSH 0x0
0060dd67  CALL dword ptr [0x006b23fc]
0060dd6d  MOV dword ptr [EBP + -0xc],EAX
0060dd70  PUSH 0x1
0060dd72  CALL dword ptr [0x006b23fc]
0060dd78  MOV dword ptr [EBP + -0x10],EAX
0060dd7b  MOV EDX,dword ptr [EBP + -0x10]
0060dd7e  SUB EDX,dword ptr [EBP + -0x18]
0060dd81  MOV dword ptr [EBP + -0x3c],EDX
0060dd84  MOV EAX,dword ptr [EBP + -0xc]
0060dd87  SUB EAX,dword ptr [EBP + -0x14]
0060dd8a  MOV dword ptr [EBP + -0x8],EAX
0060dd8d  PUSH 0x1
0060dd8f  CALL dword ptr [0x006b23fc]
0060dd95  MOV ESI,EAX
0060dd97  MOV ECX,dword ptr [EBP + -0x7c]
0060dd9a  CALL 0x00613620
0060dd9f  MOVZX ECX,AX
0060dda2  CMP ESI,ECX
0060dda4  JG 0x0060ddd0
0060dda6  MOVZX EDX,byte ptr [EBP + 0x8]
0060ddaa  TEST EDX,EDX
0060ddac  JZ 0x0060ddd0
0060ddae  MOV EAX,dword ptr [EBP + -0x7c]
0060ddb1  MOVZX ECX,byte ptr [EAX + 0x5c]
0060ddb5  TEST ECX,ECX
0060ddb7  JNZ 0x0060ddd0
0060ddb9  MOV EDX,dword ptr [EBP + -0x7c]
0060ddbc  MOV byte ptr [EDX + 0x96],0x1
0060ddc3  MOV ECX,dword ptr [EBP + -0x7c]
0060ddc6  CALL 0x0060e050
0060ddcb  JMP 0x0060e03f
0060ddd0  MOV dword ptr [EBP + -0x24],0xcb0000
0060ddd7  MOV EAX,dword ptr [EBP + -0x7c]
0060ddda  PUSH EAX
0060dddb  MOV ECX,dword ptr [0x016306b4]
0060dde1  PUSH ECX
0060dde2  PUSH 0x0
0060dde4  PUSH 0x0
0060dde6  MOV EDX,dword ptr [EBP + -0x4]
0060dde9  PUSH EDX
0060ddea  MOV EAX,dword ptr [EBP + -0x20]
0060dded  PUSH EAX
0060ddee  MOV EAX,dword ptr [EBP + -0x8]
0060ddf1  SUB EAX,dword ptr [EBP + -0x4]
0060ddf4  CDQ
0060ddf5  SUB EAX,EDX
0060ddf7  SAR EAX,0x1
0060ddf9  PUSH EAX
0060ddfa  MOV EAX,dword ptr [EBP + -0x3c]
0060ddfd  SUB EAX,dword ptr [EBP + -0x20]
0060de00  CDQ
0060de01  SUB EAX,EDX
0060de03  SAR EAX,0x1
0060de05  PUSH EAX
0060de06  MOV ECX,dword ptr [EBP + -0x24]
0060de09  PUSH ECX
0060de0a  MOV EDX,dword ptr [EBP + -0x7c]
0060de0d  MOV EAX,dword ptr [EDX + 0x84]
0060de13  PUSH EAX
0060de14  MOV ECX,dword ptr [EBP + -0x7c]
0060de17  MOV EDX,dword ptr [ECX + 0xbc]
0060de1d  PUSH EDX
0060de1e  PUSH 0x0
0060de20  CALL dword ptr [0x006b23c0]
0060de26  MOV ECX,dword ptr [EBP + -0x7c]
0060de29  MOV dword ptr [ECX + 0x8c],EAX
0060de2f  MOVZX EDX,byte ptr [0x00795fba]
0060de36  PUSH EDX
0060de37  MOV EAX,dword ptr [EBP + -0x7c]
0060de3a  MOV ECX,dword ptr [EAX + 0x8c]
0060de40  PUSH ECX
0060de41  CALL dword ptr [0x006b2398]
0060de47  MOV EDX,dword ptr [EBP + -0x7c]
0060de4a  MOV EAX,dword ptr [EDX + 0x8c]
0060de50  PUSH EAX
0060de51  CALL dword ptr [0x006b23c4]
0060de57  MOV ECX,dword ptr [EBP + -0x7c]
0060de5a  MOV dword ptr [ECX + 0x90],EAX
0060de60  LEA EDX,[EBP + -0x38]
0060de63  PUSH EDX
0060de64  MOV EAX,dword ptr [EBP + -0x7c]
0060de67  MOV ECX,dword ptr [EAX + 0x8c]
0060de6d  PUSH ECX
0060de6e  CALL dword ptr [0x006b23c8]
0060de74  MOV EDX,dword ptr [EBP + -0x30]
0060de77  SUB EDX,dword ptr [EBP + -0x38]
0060de7a  MOV dword ptr [EBP + -0x1c],EDX
0060de7d  MOV EAX,dword ptr [EBP + -0x1c]
0060de80  MOV dword ptr [EBP + -0x80],EAX
0060de83  CMP dword ptr [EBP + -0x80],0x480
0060de8a  JG 0x0060deb2
0060de8c  CMP dword ptr [EBP + -0x80],0x480
0060de93  JZ 0x0060dee1
0060de95  CMP dword ptr [EBP + -0x80],0x280
0060de9c  JZ 0x0060dec6
0060de9e  CMP dword ptr [EBP + -0x80],0x320
0060dea5  JZ 0x0060decf
0060dea7  CMP dword ptr [EBP + -0x80],0x400
0060deae  JZ 0x0060ded8
0060deb0  JMP 0x0060defc
0060deb2  CMP dword ptr [EBP + -0x80],0x500
0060deb9  JZ 0x0060deea
0060debb  CMP dword ptr [EBP + -0x80],0x640
0060dec2  JZ 0x0060def3
0060dec4  JMP 0x0060defc
0060dec6  MOV dword ptr [EBP + -0x28],0x1e0
0060decd  JMP 0x0060df05
0060decf  MOV dword ptr [EBP + -0x28],0x258
0060ded6  JMP 0x0060df05
0060ded8  MOV dword ptr [EBP + -0x28],0x300
0060dedf  JMP 0x0060df05
0060dee1  MOV dword ptr [EBP + -0x28],0x360
0060dee8  JMP 0x0060df05
0060deea  MOV dword ptr [EBP + -0x28],0x400
0060def1  JMP 0x0060df05
0060def3  MOV dword ptr [EBP + -0x28],0x4b0
0060defa  JMP 0x0060df05
0060defc  MOV ECX,dword ptr [EBP + -0x2c]
0060deff  SUB ECX,dword ptr [EBP + -0x34]
0060df02  MOV dword ptr [EBP + -0x28],ECX
0060df05  MOV EDX,dword ptr [EBP + -0x34]
0060df08  ADD EDX,dword ptr [EBP + -0x28]
0060df0b  MOV dword ptr [EBP + -0x50],EDX
0060df0e  MOV EAX,dword ptr [EBP + -0x38]
0060df11  ADD EAX,dword ptr [EBP + -0x1c]
0060df14  MOV dword ptr [EBP + -0x4c],EAX
0060df17  MOV ECX,dword ptr [EBP + -0x34]
0060df1a  MOV dword ptr [EBP + -0x48],ECX
0060df1d  MOV EDX,dword ptr [EBP + -0x38]
0060df20  MOV dword ptr [EBP + -0x44],EDX
0060df23  MOV EAX,dword ptr [EBP + -0x7c]
0060df26  ADD EAX,0x18
0060df29  MOV dword ptr [EBP + -0x40],EAX
0060df2c  MOV ECX,dword ptr [EBP + -0x40]
0060df2f  MOV EDX,dword ptr [EBP + -0x44]
0060df32  MOV dword ptr [ECX],EDX
0060df34  MOV EAX,dword ptr [EBP + -0x40]
0060df37  MOV ECX,dword ptr [EBP + -0x48]
0060df3a  MOV dword ptr [EAX + 0x4],ECX
0060df3d  MOV EDX,dword ptr [EBP + -0x40]
0060df40  MOV EAX,dword ptr [EBP + -0x4c]
0060df43  MOV dword ptr [EDX + 0x8],EAX
0060df46  MOV ECX,dword ptr [EBP + -0x40]
0060df49  MOV EDX,dword ptr [EBP + -0x50]
0060df4c  MOV dword ptr [ECX + 0xc],EDX
0060df4f  MOV EAX,dword ptr [EBP + -0x34]
0060df52  ADD EAX,dword ptr [EBP + -0x28]
0060df55  MOV dword ptr [EBP + -0x64],EAX
0060df58  MOV ECX,dword ptr [EBP + -0x38]
0060df5b  ADD ECX,dword ptr [EBP + -0x1c]
0060df5e  MOV dword ptr [EBP + -0x60],ECX
0060df61  MOV EDX,dword ptr [EBP + -0x34]
0060df64  MOV dword ptr [EBP + -0x5c],EDX
0060df67  MOV EAX,dword ptr [EBP + -0x38]
0060df6a  MOV dword ptr [EBP + -0x58],EAX
0060df6d  MOV ECX,dword ptr [EBP + -0x7c]
0060df70  ADD ECX,0x28
0060df73  MOV dword ptr [EBP + -0x54],ECX
0060df76  MOV EDX,dword ptr [EBP + -0x54]
0060df79  MOV EAX,dword ptr [EBP + -0x58]
0060df7c  MOV dword ptr [EDX],EAX
0060df7e  MOV ECX,dword ptr [EBP + -0x54]
0060df81  MOV EDX,dword ptr [EBP + -0x5c]
0060df84  MOV dword ptr [ECX + 0x4],EDX
0060df87  MOV EAX,dword ptr [EBP + -0x54]
0060df8a  MOV ECX,dword ptr [EBP + -0x60]
0060df8d  MOV dword ptr [EAX + 0x8],ECX
0060df90  MOV EDX,dword ptr [EBP + -0x54]
0060df93  MOV EAX,dword ptr [EBP + -0x64]
0060df96  MOV dword ptr [EDX + 0xc],EAX
0060df99  LEA ECX,[EBP + -0x38]
0060df9c  PUSH ECX
0060df9d  MOV EDX,dword ptr [EBP + -0x7c]
0060dfa0  MOV EAX,dword ptr [EDX + 0x8c]
0060dfa6  PUSH EAX
0060dfa7  CALL dword ptr [0x006b23cc]
0060dfad  MOV ECX,dword ptr [EBP + -0x2c]
0060dfb0  MOV dword ptr [EBP + -0x78],ECX
0060dfb3  MOV EDX,dword ptr [EBP + -0x30]
0060dfb6  MOV dword ptr [EBP + -0x74],EDX
0060dfb9  MOV EAX,dword ptr [EBP + -0x34]
0060dfbc  MOV dword ptr [EBP + -0x70],EAX
0060dfbf  MOV ECX,dword ptr [EBP + -0x38]
0060dfc2  MOV dword ptr [EBP + -0x6c],ECX
0060dfc5  MOV EDX,dword ptr [EBP + -0x7c]
0060dfc8  ADD EDX,0x8
0060dfcb  MOV dword ptr [EBP + -0x68],EDX
0060dfce  MOV EAX,dword ptr [EBP + -0x68]
0060dfd1  MOV ECX,dword ptr [EBP + -0x6c]
0060dfd4  MOV dword ptr [EAX],ECX
0060dfd6  MOV EDX,dword ptr [EBP + -0x68]
0060dfd9  MOV EAX,dword ptr [EBP + -0x70]
0060dfdc  MOV dword ptr [EDX + 0x4],EAX
0060dfdf  MOV ECX,dword ptr [EBP + -0x68]
0060dfe2  MOV EDX,dword ptr [EBP + -0x74]
0060dfe5  MOV dword ptr [ECX + 0x8],EDX
0060dfe8  MOV EAX,dword ptr [EBP + -0x68]
0060dfeb  MOV ECX,dword ptr [EBP + -0x78]
0060dfee  MOV dword ptr [EAX + 0xc],ECX
0060dff1  MOV EDX,dword ptr [EBP + -0x7c]
0060dff4  MOV byte ptr [EDX + 0x95],0x0
0060dffb  MOV EAX,dword ptr [EBP + -0x7c]
0060dffe  MOV EDX,dword ptr [EAX]
0060e000  MOV ECX,dword ptr [EBP + -0x7c]
0060e003  MOV EAX,dword ptr [EDX + 0x8]
0060e006  CALL EAX
0060e008  MOVZX ECX,byte ptr [EBP + 0x8]
0060e00c  TEST ECX,ECX
0060e00e  JZ 0x0060e025
0060e010  PUSH 0x0
0060e012  PUSH 0x6d82f0
0060e017  MOV EDX,dword ptr [0x007960d8]
0060e01d  MOV ECX,dword ptr [EDX + 0x14]
0060e020  CALL 0x00607930
0060e025  MOVZX EAX,byte ptr [EBP + 0x8]
0060e029  NEG EAX
0060e02b  SBB EAX,EAX
0060e02d  ADD EAX,0x1
0060e030  MOV [0x015e55d0],AL
0060e035  PUSH 0x0
0060e037  CALL 0x0060cd90
0060e03c  ADD ESP,0x4
0060e03f  POP ESI
0060e040  MOV ESP,EBP
0060e042  POP EBP
0060e043  RET 0x4

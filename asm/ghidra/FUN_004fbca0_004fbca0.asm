; FUN_004fbca0  004fbca0
004fbca0  PUSH EBP
004fbca1  MOV EBP,ESP
004fbca3  SUB ESP,0x68
004fbca6  PUSH ESI
004fbca7  MOV dword ptr [EBP + -0x68],ECX
004fbcaa  MOV EAX,[0x00791364]
004fbcaf  MOV ECX,dword ptr [EAX + 0xf4]
004fbcb5  MOV dword ptr [EBP + -0xc],ECX
004fbcb8  MOV EDX,dword ptr [EBP + -0xc]
004fbcbb  PUSH EDX
004fbcbc  CALL 0x00520540
004fbcc1  ADD ESP,0x4
004fbcc4  MOV dword ptr [EBP + -0x8],EAX
004fbcc7  MOV ECX,dword ptr [EBP + -0x68]
004fbcca  CALL 0x004fb840
004fbccf  PUSH 0x1
004fbcd1  MOV ECX,dword ptr [0x00791364]
004fbcd7  CALL 0x0047e540
004fbcdc  MOV EAX,[0x00791364]
004fbce1  MOV ECX,dword ptr [EBP + -0x8]
004fbce4  MOV EDX,dword ptr [ECX + 0x14]
004fbce7  MOV dword ptr [EAX + 0xec],EDX
004fbced  MOV EAX,[0x00791364]
004fbcf2  MOV ECX,dword ptr [EBP + -0x8]
004fbcf5  MOV EDX,dword ptr [ECX + 0x18]
004fbcf8  MOV dword ptr [EAX + 0xf0],EDX
004fbcfe  MOV EAX,dword ptr [EBP + -0x8]
004fbd01  MOVSX ECX,word ptr [EAX + 0x3c]
004fbd05  MOV dword ptr [EBP + -0x40],ECX
004fbd08  MOV EDX,dword ptr [0x00791364]
004fbd0e  MOV dword ptr [EBP + -0x3c],EDX
004fbd11  MOV EAX,dword ptr [EBP + -0x3c]
004fbd14  MOV ECX,dword ptr [EBP + -0x40]
004fbd17  MOV dword ptr [EAX + 0x488],ECX
004fbd1d  MOV EDX,dword ptr [EBP + -0x8]
004fbd20  MOVSX EAX,word ptr [EDX + 0x3e]
004fbd24  PUSH EAX
004fbd25  MOV ECX,dword ptr [0x00791364]
004fbd2b  CALL 0x0047cb10
004fbd30  MOV ECX,dword ptr [EBP + -0x8]
004fbd33  MOV EDX,dword ptr [ECX + 0x8]
004fbd36  PUSH EDX
004fbd37  MOV ECX,dword ptr [0x00791364]
004fbd3d  CALL 0x0047ce80
004fbd42  MOV EAX,dword ptr [EBP + -0x8]
004fbd45  MOV ECX,dword ptr [EAX + 0x38]
004fbd48  MOV dword ptr [EBP + -0x48],ECX
004fbd4b  MOV EDX,dword ptr [0x00791364]
004fbd51  MOV dword ptr [EBP + -0x44],EDX
004fbd54  MOV EAX,dword ptr [EBP + -0x44]
004fbd57  MOV ECX,dword ptr [EBP + -0x48]
004fbd5a  MOV dword ptr [EAX + 0x100],ECX
004fbd60  MOV EDX,dword ptr [EBP + -0x8]
004fbd63  MOV AL,byte ptr [EDX + 0x28]
004fbd66  MOV byte ptr [EBP + -0x4d],AL
004fbd69  MOV ECX,dword ptr [0x00791364]
004fbd6f  MOV dword ptr [EBP + -0x4c],ECX
004fbd72  MOV EDX,dword ptr [EBP + -0x4c]
004fbd75  MOV AL,byte ptr [EBP + -0x4d]
004fbd78  MOV byte ptr [EDX + 0x104],AL
004fbd7e  MOV ECX,dword ptr [EBP + -0x8]
004fbd81  MOV EDX,dword ptr [ECX + 0x4]
004fbd84  MOV dword ptr [EBP + -0x58],EDX
004fbd87  MOV EAX,[0x00791364]
004fbd8c  MOV dword ptr [EBP + -0x54],EAX
004fbd8f  MOV ECX,dword ptr [EBP + -0x54]
004fbd92  MOV EDX,dword ptr [EBP + -0x58]
004fbd95  MOV dword ptr [ECX + 0xf8],EDX
004fbd9b  MOV EAX,dword ptr [EBP + -0x8]
004fbd9e  MOV ECX,dword ptr [EAX + 0x24]
004fbda1  MOV dword ptr [EBP + -0x60],ECX
004fbda4  MOV EDX,dword ptr [0x00791364]
004fbdaa  MOV dword ptr [EBP + -0x5c],EDX
004fbdad  MOV EAX,dword ptr [EBP + -0x5c]
004fbdb0  MOV ECX,dword ptr [EBP + -0x60]
004fbdb3  MOV dword ptr [EAX + 0xfc],ECX
004fbdb9  MOV dword ptr [EBP + -0x4],0x0
004fbdc0  JMP 0x004fbdcb
004fbdc2  MOV EDX,dword ptr [EBP + -0x4]
004fbdc5  ADD EDX,0x1
004fbdc8  MOV dword ptr [EBP + -0x4],EDX
004fbdcb  CMP dword ptr [EBP + -0x4],0x3
004fbdcf  JGE 0x004fbdec
004fbdd1  MOV EAX,dword ptr [EBP + -0x8]
004fbdd4  ADD EAX,dword ptr [EBP + -0x4]
004fbdd7  MOVZX ECX,byte ptr [EAX + 0x29]
004fbddb  MOV EDX,dword ptr [EBP + -0x4]
004fbdde  MOV EAX,[0x00791364]
004fbde3  MOV dword ptr [EAX + EDX*0x4 + 0x114],ECX
004fbdea  JMP 0x004fbdc2
004fbdec  MOV ECX,dword ptr [EBP + -0x8]
004fbdef  MOV EDX,dword ptr [ECX + 0x20]
004fbdf2  PUSH EDX
004fbdf3  MOV ECX,dword ptr [0x00791364]
004fbdf9  CALL 0x0047a440
004fbdfe  MOV dword ptr [EBP + -0x4],0x0
004fbe05  JMP 0x004fbe10
004fbe07  MOV EAX,dword ptr [EBP + -0x4]
004fbe0a  ADD EAX,0x1
004fbe0d  MOV dword ptr [EBP + -0x4],EAX
004fbe10  CMP dword ptr [EBP + -0x4],0x3
004fbe14  JGE 0x004fbe32
004fbe16  MOV ECX,dword ptr [EBP + -0x4]
004fbe19  MOV EDX,dword ptr [0x00791364]
004fbe1f  MOV EAX,dword ptr [EBP + -0x4]
004fbe22  MOV ESI,dword ptr [EBP + -0x8]
004fbe25  MOV EAX,dword ptr [ESI + EAX*0x4 + 0x2c]
004fbe29  MOV dword ptr [EDX + ECX*0x4 + 0x108],EAX
004fbe30  JMP 0x004fbe07
004fbe32  MOV dword ptr [EBP + -0x4],0x0
004fbe39  JMP 0x004fbe44
004fbe3b  MOV ECX,dword ptr [EBP + -0x4]
004fbe3e  ADD ECX,0x1
004fbe41  MOV dword ptr [EBP + -0x4],ECX
004fbe44  CMP dword ptr [EBP + -0x4],0x7
004fbe48  JGE 0x004fbe65
004fbe4a  MOV EDX,dword ptr [EBP + -0x4]
004fbe4d  MOV EAX,[0x00791364]
004fbe52  MOV ECX,dword ptr [EBP + -0x4]
004fbe55  MOV ESI,dword ptr [EBP + -0x8]
004fbe58  MOV ECX,dword ptr [ESI + ECX*0x4 + 0x40]
004fbe5c  MOV dword ptr [EAX + EDX*0x4 + 0x3b4],ECX
004fbe63  JMP 0x004fbe3b
004fbe65  MOV dword ptr [EBP + -0x4],0x0
004fbe6c  JMP 0x004fbe77
004fbe6e  MOV EDX,dword ptr [EBP + -0x4]
004fbe71  ADD EDX,0x1
004fbe74  MOV dword ptr [EBP + -0x4],EDX
004fbe77  CMP dword ptr [EBP + -0x4],0x7
004fbe7b  JGE 0x004fbff6
004fbe81  MOV EAX,dword ptr [EBP + -0x4]
004fbe84  PUSH EAX
004fbe85  MOV ECX,dword ptr [0x00791364]
004fbe8b  CALL 0x0047e390
004fbe90  MOV dword ptr [EBP + -0x30],EAX
004fbe93  MOV ECX,dword ptr [EBP + -0x4]
004fbe96  IMUL ECX,ECX,0x7c
004fbe99  MOV EDX,dword ptr [EBP + -0x8]
004fbe9c  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xe8]
004fbea3  MOV dword ptr [EBP + -0x2c],EAX
004fbea6  MOV ECX,dword ptr [EBP + -0x2c]
004fbea9  PUSH ECX
004fbeaa  CALL 0x005dcb00
004fbeaf  ADD ESP,0x4
004fbeb2  MOV dword ptr [EBP + -0x20],EAX
004fbeb5  MOV EDX,dword ptr [EBP + -0x4]
004fbeb8  IMUL EDX,EDX,0x7c
004fbebb  MOV EAX,dword ptr [EBP + -0x8]
004fbebe  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xe4]
004fbec5  PUSH ECX
004fbec6  MOV ECX,dword ptr [EBP + -0x30]
004fbec9  CALL 0x004c6d90
004fbece  MOV EDX,dword ptr [EBP + -0x4]
004fbed1  IMUL EDX,EDX,0x7c
004fbed4  MOV EAX,dword ptr [EBP + -0x8]
004fbed7  CMP dword ptr [EAX + EDX*0x1 + 0xe0],-0x1
004fbedf  JZ 0x004fbf24
004fbee1  MOV ECX,dword ptr [EBP + -0x4]
004fbee4  IMUL ECX,ECX,0x7c
004fbee7  MOV EDX,dword ptr [EBP + -0x8]
004fbeea  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xe0]
004fbef1  PUSH EAX
004fbef2  MOV ECX,dword ptr [EBP + -0x30]
004fbef5  CALL 0x004c6aa0
004fbefa  MOV ECX,dword ptr [EBP + -0x4]
004fbefd  IMUL ECX,ECX,0x7c
004fbf00  MOV EDX,dword ptr [EBP + -0x8]
004fbf03  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xe0]
004fbf0a  MOV dword ptr [EBP + -0x14],EAX
004fbf0d  MOV dword ptr [EBP + -0x10],0x0
004fbf14  MOV ECX,dword ptr [EBP + -0x10]
004fbf17  PUSH ECX
004fbf18  MOV EDX,dword ptr [EBP + -0x14]
004fbf1b  PUSH EDX
004fbf1c  MOV ECX,dword ptr [EBP + -0x20]
004fbf1f  CALL 0x005d5af0
004fbf24  MOV ECX,dword ptr [EBP + -0x30]
004fbf27  CALL 0x004c61b0
004fbf2c  MOVZX EAX,AL
004fbf2f  TEST EAX,EAX
004fbf31  JNZ 0x004fbff1
004fbf37  MOV ECX,dword ptr [EBP + -0x4]
004fbf3a  IMUL ECX,ECX,0x7c
004fbf3d  MOV EDX,dword ptr [EBP + -0x8]
004fbf40  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xec]
004fbf47  MOV dword ptr [EBP + -0x18],EAX
004fbf4a  MOV ECX,dword ptr [EBP + -0x18]
004fbf4d  IMUL ECX,ECX,0xc
004fbf50  MOV EDX,dword ptr [ECX + 0x720648]
004fbf56  MOV dword ptr [EBP + -0x28],EDX
004fbf59  MOV EAX,dword ptr [EBP + -0x30]
004fbf5c  MOV ECX,dword ptr [EBP + -0x18]
004fbf5f  MOV dword ptr [EAX + 0x74],ECX
004fbf62  CMP dword ptr [EBP + -0x18],0x21
004fbf66  JGE 0x004fbf86
004fbf68  CMP dword ptr [EBP + -0x18],0x17
004fbf6c  JL 0x004fbf86
004fbf6e  MOV EDX,dword ptr [EBP + -0x28]
004fbf71  PUSH EDX
004fbf72  MOV ECX,dword ptr [EBP + -0x20]
004fbf75  CALL 0x0063b490
004fbf7a  MOV EAX,dword ptr [EBP + -0x20]
004fbf7d  MOV dword ptr [EAX + 0xc],0xffffffff
004fbf84  JMP 0x004fbf8f
004fbf86  MOV ECX,dword ptr [EBP + -0x20]
004fbf89  MOV EDX,dword ptr [EBP + -0x28]
004fbf8c  MOV dword ptr [ECX + 0xc],EDX
004fbf8f  MOV EAX,dword ptr [EBP + -0x4]
004fbf92  IMUL EAX,EAX,0x7c
004fbf95  MOV ECX,dword ptr [EBP + -0x8]
004fbf98  MOV EDX,dword ptr [ECX + EAX*0x1 + 0xf0]
004fbf9f  PUSH EDX
004fbfa0  MOV ECX,dword ptr [EBP + -0x30]
004fbfa3  CALL 0x004c67d0
004fbfa8  MOV EAX,dword ptr [EBP + -0x4]
004fbfab  IMUL EAX,EAX,0x7c
004fbfae  MOV ECX,dword ptr [EBP + -0x8]
004fbfb1  MOV EDX,dword ptr [ECX + EAX*0x1 + 0xf4]
004fbfb8  PUSH EDX
004fbfb9  MOV ECX,dword ptr [EBP + -0x30]
004fbfbc  CALL 0x004c68c0
004fbfc1  MOV EAX,dword ptr [EBP + -0x18]
004fbfc4  IMUL EAX,EAX,0xc
004fbfc7  MOV ECX,dword ptr [EAX + 0x720650]
004fbfcd  PUSH ECX
004fbfce  CALL 0x00630f40
004fbfd3  ADD ESP,0x4
004fbfd6  MOV dword ptr [EBP + -0x64],EAX
004fbfd9  MOV EDX,dword ptr [EBP + -0x64]
004fbfdc  PUSH EDX
004fbfdd  MOV ECX,dword ptr [EBP + -0x20]
004fbfe0  CALL 0x0063aac0
004fbfe5  ADD EAX,0x4
004fbfe8  PUSH EAX
004fbfe9  CALL 0x00686d8e
004fbfee  ADD ESP,0x8
004fbff1  JMP 0x004fbe6e
004fbff6  PUSH 0xb
004fbff8  MOV ECX,dword ptr [0x0162ee84]
004fbffe  CALL 0x006375d0
004fc003  MOV dword ptr [EBP + -0x1c],EAX
004fc006  PUSH 0x0
004fc008  CALL 0x005dcb00
004fc00d  ADD ESP,0x4
004fc010  MOV ECX,dword ptr [EAX + 0x4d8]
004fc016  PUSH ECX
004fc017  MOV EDX,dword ptr [EAX + 0x4d4]
004fc01d  PUSH EDX
004fc01e  LEA EAX,[EBP + -0x38]
004fc021  PUSH EAX
004fc022  MOV ECX,dword ptr [EBP + -0x1c]
004fc025  ADD ECX,0x10
004fc028  CALL 0x0064c630
004fc02d  MOV ECX,dword ptr [EAX]
004fc02f  MOV EDX,dword ptr [EAX + 0x4]
004fc032  MOV EAX,dword ptr [EBP + -0x1c]
004fc035  MOV dword ptr [EAX + 0x10],ECX
004fc038  MOV dword ptr [EAX + 0x14],EDX
004fc03b  PUSH 0x0
004fc03d  CALL 0x005dcb00
004fc042  ADD ESP,0x4
004fc045  MOV ECX,EAX
004fc047  CALL 0x0063b0a0
004fc04c  MOV dword ptr [EBP + -0x4],0x0
004fc053  JMP 0x004fc05e
004fc055  MOV ECX,dword ptr [EBP + -0x4]
004fc058  ADD ECX,0x1
004fc05b  MOV dword ptr [EBP + -0x4],ECX
004fc05e  CMP dword ptr [EBP + -0x4],0x21
004fc062  JGE 0x004fc11b
004fc068  MOV EDX,dword ptr [EBP + -0x4]
004fc06b  IMUL EDX,EDX,0x14
004fc06e  MOV EAX,dword ptr [EBP + -0x4]
004fc071  IMUL EAX,EAX,0x14
004fc074  MOV ECX,dword ptr [0x00791364]
004fc07a  MOV ESI,dword ptr [EBP + -0x8]
004fc07d  MOV EDX,dword ptr [ESI + EDX*0x1 + 0x3f4]
004fc084  MOV dword ptr [ECX + EAX*0x1 + 0x120],EDX
004fc08b  MOV EAX,dword ptr [EBP + -0x4]
004fc08e  IMUL EAX,EAX,0x14
004fc091  MOV ECX,dword ptr [EBP + -0x4]
004fc094  IMUL ECX,ECX,0x14
004fc097  MOV EDX,dword ptr [0x00791364]
004fc09d  MOV ESI,dword ptr [EBP + -0x8]
004fc0a0  MOV EAX,dword ptr [ESI + EAX*0x1 + 0x400]
004fc0a7  MOV dword ptr [EDX + ECX*0x1 + 0x12c],EAX
004fc0ae  MOV ECX,dword ptr [EBP + -0x4]
004fc0b1  IMUL ECX,ECX,0x14
004fc0b4  MOV EDX,dword ptr [EBP + -0x4]
004fc0b7  IMUL EDX,EDX,0x14
004fc0ba  MOV EAX,[0x00791364]
004fc0bf  MOV ESI,dword ptr [EBP + -0x8]
004fc0c2  MOV ECX,dword ptr [ESI + ECX*0x1 + 0x3f8]
004fc0c9  MOV dword ptr [EAX + EDX*0x1 + 0x124],ECX
004fc0d0  MOV EDX,dword ptr [EBP + -0x4]
004fc0d3  IMUL EDX,EDX,0x14
004fc0d6  MOV EAX,dword ptr [EBP + -0x4]
004fc0d9  IMUL EAX,EAX,0x14
004fc0dc  MOV ECX,dword ptr [0x00791364]
004fc0e2  MOV ESI,dword ptr [EBP + -0x8]
004fc0e5  MOV EDX,dword ptr [ESI + EDX*0x1 + 0x404]
004fc0ec  MOV dword ptr [ECX + EAX*0x1 + 0x130],EDX
004fc0f3  MOV EAX,dword ptr [EBP + -0x4]
004fc0f6  IMUL EAX,EAX,0x14
004fc0f9  MOV ECX,dword ptr [EBP + -0x4]
004fc0fc  IMUL ECX,ECX,0x14
004fc0ff  MOV EDX,dword ptr [0x00791364]
004fc105  MOV ESI,dword ptr [EBP + -0x8]
004fc108  MOV AL,byte ptr [ESI + EAX*0x1 + 0x3fc]
004fc10f  MOV byte ptr [EDX + ECX*0x1 + 0x128],AL
004fc116  JMP 0x004fc055
004fc11b  MOV dword ptr [EBP + -0x4],0x0
004fc122  JMP 0x004fc12d
004fc124  MOV ECX,dword ptr [EBP + -0x4]
004fc127  ADD ECX,0x1
004fc12a  MOV dword ptr [EBP + -0x4],ECX
004fc12d  CMP dword ptr [EBP + -0x4],0x7
004fc131  JGE 0x004fc14e
004fc133  MOV EDX,dword ptr [EBP + -0x4]
004fc136  MOV EAX,[0x00791364]
004fc13b  MOV ECX,dword ptr [EBP + -0x4]
004fc13e  MOV ESI,dword ptr [EBP + -0x8]
004fc141  MOV ECX,dword ptr [ESI + ECX*0x4 + 0x5c]
004fc145  MOV dword ptr [EAX + EDX*0x4 + 0x3e4],ECX
004fc14c  JMP 0x004fc124
004fc14e  MOV EDX,dword ptr [0x00791364]
004fc154  MOV EAX,dword ptr [EBP + -0x8]
004fc157  MOV ECX,dword ptr [EAX + 0x78]
004fc15a  MOV dword ptr [EDX + 0x400],ECX
004fc160  MOV ECX,dword ptr [0x00791364]
004fc166  CALL 0x00480d20
004fc16b  MOV dword ptr [EBP + -0x24],EAX
004fc16e  MOV EAX,dword ptr [EBP + -0x24]
004fc171  CDQ
004fc172  SUB EAX,EDX
004fc174  SAR EAX,0x1
004fc176  PUSH EAX
004fc177  MOV ECX,dword ptr [0x00791364]
004fc17d  CALL 0x0047bc40
004fc182  MOV EAX,dword ptr [EBP + -0x24]
004fc185  CDQ
004fc186  SUB EAX,EDX
004fc188  SAR EAX,0x1
004fc18a  PUSH EAX
004fc18b  MOV ECX,dword ptr [0x00791364]
004fc191  CALL 0x0047bc80
004fc196  MOV EDX,dword ptr [EBP + -0x24]
004fc199  PUSH EDX
004fc19a  MOV ECX,dword ptr [0x00791364]
004fc1a0  CALL 0x0047bcc0
004fc1a5  MOV EAX,dword ptr [EBP + -0x24]
004fc1a8  SHL EAX,0x1
004fc1aa  PUSH EAX
004fc1ab  MOV ECX,dword ptr [0x00791364]
004fc1b1  CALL 0x0047bd00
004fc1b6  PUSH 0x2
004fc1b8  MOV ECX,dword ptr [0x00791eb8]
004fc1be  MOV EDX,dword ptr [ECX + 0x4]
004fc1c1  MOV EAX,[0x00791eb8]
004fc1c6  MOV ECX,dword ptr [EAX + 0x4]
004fc1c9  MOV EDX,dword ptr [EDX]
004fc1cb  MOV EAX,dword ptr [EDX + 0x4]
004fc1ce  CALL EAX
004fc1d0  MOV ECX,dword ptr [0x00791364]
004fc1d6  CALL 0x0047e860
004fc1db  MOV dword ptr [EBP + -0x4],0x0
004fc1e2  JMP 0x004fc1ed
004fc1e4  MOV ECX,dword ptr [EBP + -0x4]
004fc1e7  ADD ECX,0x1
004fc1ea  MOV dword ptr [EBP + -0x4],ECX
004fc1ed  CMP dword ptr [EBP + -0x4],0x7
004fc1f1  JGE 0x004fc206
004fc1f3  PUSH 0x1
004fc1f5  MOV EDX,dword ptr [EBP + -0x4]
004fc1f8  PUSH EDX
004fc1f9  MOV ECX,dword ptr [0x007947e4]
004fc1ff  CALL 0x005d9180
004fc204  JMP 0x004fc1e4
004fc206  POP ESI
004fc207  MOV ESP,EBP
004fc209  POP EBP
004fc20a  RET

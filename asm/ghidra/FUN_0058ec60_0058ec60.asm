; FUN_0058ec60  0058ec60
0058ec60  PUSH EBP
0058ec61  MOV EBP,ESP
0058ec63  PUSH -0x1
0058ec65  PUSH 0x6a6ff1
0058ec6a  MOV EAX,FS:[0x0]
0058ec70  PUSH EAX
0058ec71  SUB ESP,0x58
0058ec74  MOV EAX,[0x00781870]
0058ec79  XOR EAX,EBP
0058ec7b  PUSH EAX
0058ec7c  LEA EAX,[EBP + -0xc]
0058ec7f  MOV FS:[0x0],EAX
0058ec85  MOV dword ptr [EBP + -0x54],ECX
0058ec88  MOV ECX,dword ptr [EBP + -0x54]
0058ec8b  CALL 0x005e9e20
0058ec90  MOV dword ptr [EBP + -0x4],0x0
0058ec97  MOV EAX,dword ptr [EBP + -0x54]
0058ec9a  MOV dword ptr [EAX],0x6cde04
0058eca0  MOV dword ptr [EBP + -0x28],0x1e
0058eca7  MOV ECX,dword ptr [EBP + -0x54]
0058ecaa  MOV EDX,dword ptr [EBP + 0x8]
0058ecad  MOV dword ptr [ECX + 0x174],EDX
0058ecb3  MOV EAX,dword ptr [EBP + -0x54]
0058ecb6  MOV dword ptr [EAX + 0x14c],0x0
0058ecc0  MOV ECX,dword ptr [EBP + -0x54]
0058ecc3  MOV dword ptr [ECX + 0x150],0x0
0058eccd  PUSH 0x1e4
0058ecd2  CALL 0x00686d82
0058ecd7  ADD ESP,0x4
0058ecda  MOV dword ptr [EBP + -0x38],EAX
0058ecdd  MOV byte ptr [EBP + -0x4],0x1
0058ece1  CMP dword ptr [EBP + -0x38],0x0
0058ece5  JZ 0x0058ecfa
0058ece7  MOV EDX,dword ptr [EBP + -0x54]
0058ecea  PUSH EDX
0058eceb  PUSH 0x0
0058eced  MOV ECX,dword ptr [EBP + -0x38]
0058ecf0  CALL 0x0058fae0
0058ecf5  MOV dword ptr [EBP + -0x58],EAX
0058ecf8  JMP 0x0058ed01
0058ecfa  MOV dword ptr [EBP + -0x58],0x0
0058ed01  MOV EAX,dword ptr [EBP + -0x58]
0058ed04  MOV dword ptr [EBP + -0x34],EAX
0058ed07  MOV byte ptr [EBP + -0x4],0x0
0058ed0b  MOV ECX,dword ptr [EBP + -0x54]
0058ed0e  MOV EDX,dword ptr [EBP + -0x34]
0058ed11  MOV dword ptr [ECX + 0x144],EDX
0058ed17  MOV EAX,dword ptr [EBP + -0x54]
0058ed1a  MOV ECX,dword ptr [EAX + 0x144]
0058ed20  MOV EDX,dword ptr [EBP + -0x54]
0058ed23  MOV EAX,dword ptr [EDX + 0x174]
0058ed29  MOV dword ptr [ECX + 0x4],EAX
0058ed2c  PUSH 0x30dfeb
0058ed31  MOV ECX,dword ptr [EBP + -0x54]
0058ed34  MOV EDX,dword ptr [ECX + 0x144]
0058ed3a  MOV EAX,dword ptr [EBP + -0x54]
0058ed3d  MOV ECX,dword ptr [EAX + 0x144]
0058ed43  MOV EDX,dword ptr [EDX]
0058ed45  MOV EAX,dword ptr [EDX + 0xc8]
0058ed4b  CALL EAX
0058ed4d  MOV ECX,dword ptr [EBP + -0x54]
0058ed50  MOV EDX,dword ptr [ECX + 0x144]
0058ed56  MOV EAX,dword ptr [EBP + -0x54]
0058ed59  MOV ECX,dword ptr [EAX + 0x144]
0058ed5f  MOV EDX,dword ptr [EDX]
0058ed61  MOV EAX,dword ptr [EDX + 0x40]
0058ed64  CALL EAX
0058ed66  MOV ECX,dword ptr [EBP + -0x28]
0058ed69  PUSH ECX
0058ed6a  MOV EDX,dword ptr [EBP + -0x54]
0058ed6d  MOV EAX,dword ptr [EDX + 0x144]
0058ed73  MOV ECX,dword ptr [EBP + -0x54]
0058ed76  MOV ECX,dword ptr [ECX + 0x144]
0058ed7c  MOV EDX,dword ptr [EAX]
0058ed7e  MOV EAX,dword ptr [EDX + 0x6c]
0058ed81  CALL EAX
0058ed83  PUSH 0xd0
0058ed88  PUSH 0xc1
0058ed8d  MOV ECX,dword ptr [EBP + -0x54]
0058ed90  MOV EDX,dword ptr [ECX + 0x144]
0058ed96  MOV EAX,dword ptr [EBP + -0x54]
0058ed99  MOV ECX,dword ptr [EAX + 0x144]
0058ed9f  MOV EDX,dword ptr [EDX]
0058eda1  MOV EAX,dword ptr [EDX + 0x44]
0058eda4  CALL EAX
0058eda6  MOV ECX,dword ptr [EBP + -0x54]
0058eda9  MOV ECX,dword ptr [ECX + 0x144]
0058edaf  CALL 0x0058fb90
0058edb4  PUSH 0x1e4
0058edb9  CALL 0x00686d82
0058edbe  ADD ESP,0x4
0058edc1  MOV dword ptr [EBP + -0x40],EAX
0058edc4  MOV byte ptr [EBP + -0x4],0x2
0058edc8  CMP dword ptr [EBP + -0x40],0x0
0058edcc  JZ 0x0058ede1
0058edce  MOV EDX,dword ptr [EBP + -0x54]
0058edd1  PUSH EDX
0058edd2  PUSH 0x1
0058edd4  MOV ECX,dword ptr [EBP + -0x40]
0058edd7  CALL 0x0058fae0
0058eddc  MOV dword ptr [EBP + -0x5c],EAX
0058eddf  JMP 0x0058ede8
0058ede1  MOV dword ptr [EBP + -0x5c],0x0
0058ede8  MOV EAX,dword ptr [EBP + -0x5c]
0058edeb  MOV dword ptr [EBP + -0x3c],EAX
0058edee  MOV byte ptr [EBP + -0x4],0x0
0058edf2  MOV ECX,dword ptr [EBP + -0x54]
0058edf5  MOV EDX,dword ptr [EBP + -0x3c]
0058edf8  MOV dword ptr [ECX + 0x148],EDX
0058edfe  MOV EAX,dword ptr [EBP + -0x54]
0058ee01  MOV ECX,dword ptr [EAX + 0x148]
0058ee07  MOV EDX,dword ptr [EBP + -0x54]
0058ee0a  MOV EAX,dword ptr [EDX + 0x174]
0058ee10  MOV dword ptr [ECX + 0x4],EAX
0058ee13  PUSH 0x30dfec
0058ee18  MOV ECX,dword ptr [EBP + -0x54]
0058ee1b  MOV EDX,dword ptr [ECX + 0x148]
0058ee21  MOV EAX,dword ptr [EBP + -0x54]
0058ee24  MOV ECX,dword ptr [EAX + 0x148]
0058ee2a  MOV EDX,dword ptr [EDX]
0058ee2c  MOV EAX,dword ptr [EDX + 0xc8]
0058ee32  CALL EAX
0058ee34  MOV ECX,dword ptr [EBP + -0x54]
0058ee37  MOV EDX,dword ptr [ECX + 0x148]
0058ee3d  MOV EAX,dword ptr [EBP + -0x54]
0058ee40  MOV ECX,dword ptr [EAX + 0x148]
0058ee46  MOV EDX,dword ptr [EDX]
0058ee48  MOV EAX,dword ptr [EDX + 0x40]
0058ee4b  CALL EAX
0058ee4d  MOV ECX,dword ptr [EBP + -0x28]
0058ee50  PUSH ECX
0058ee51  MOV EDX,dword ptr [EBP + -0x54]
0058ee54  MOV EAX,dword ptr [EDX + 0x148]
0058ee5a  MOV ECX,dword ptr [EBP + -0x54]
0058ee5d  MOV ECX,dword ptr [ECX + 0x148]
0058ee63  MOV EDX,dword ptr [EAX]
0058ee65  MOV EAX,dword ptr [EDX + 0x6c]
0058ee68  CALL EAX
0058ee6a  PUSH 0xd0
0058ee6f  PUSH 0xfd
0058ee74  MOV ECX,dword ptr [EBP + -0x54]
0058ee77  MOV EDX,dword ptr [ECX + 0x148]
0058ee7d  MOV EAX,dword ptr [EBP + -0x54]
0058ee80  MOV ECX,dword ptr [EAX + 0x148]
0058ee86  MOV EDX,dword ptr [EDX]
0058ee88  MOV EAX,dword ptr [EDX + 0x44]
0058ee8b  CALL EAX
0058ee8d  MOV ECX,dword ptr [EBP + -0x54]
0058ee90  MOV ECX,dword ptr [ECX + 0x148]
0058ee96  CALL 0x0058fb90
0058ee9b  PUSH 0x1d0
0058eea0  CALL 0x00686d82
0058eea5  ADD ESP,0x4
0058eea8  MOV dword ptr [EBP + -0x48],EAX
0058eeab  MOV byte ptr [EBP + -0x4],0x3
0058eeaf  CMP dword ptr [EBP + -0x48],0x0
0058eeb3  JZ 0x0058eec2
0058eeb5  MOV ECX,dword ptr [EBP + -0x48]
0058eeb8  CALL 0x005ec5a0
0058eebd  MOV dword ptr [EBP + -0x60],EAX
0058eec0  JMP 0x0058eec9
0058eec2  MOV dword ptr [EBP + -0x60],0x0
0058eec9  MOV EDX,dword ptr [EBP + -0x60]
0058eecc  MOV dword ptr [EBP + -0x44],EDX
0058eecf  MOV byte ptr [EBP + -0x4],0x0
0058eed3  MOV EAX,dword ptr [EBP + -0x54]
0058eed6  MOV ECX,dword ptr [EBP + -0x44]
0058eed9  MOV dword ptr [EAX + 0x178],ECX
0058eedf  MOV EDX,dword ptr [EBP + -0x54]
0058eee2  MOV EAX,dword ptr [EDX + 0x178]
0058eee8  MOV ECX,dword ptr [EBP + -0x54]
0058eeeb  MOV EDX,dword ptr [ECX + 0x174]
0058eef1  MOV dword ptr [EAX + 0x4],EDX
0058eef4  MOV EAX,dword ptr [EBP + -0x54]
0058eef7  MOV ECX,dword ptr [EAX + 0x178]
0058eefd  MOV EDX,dword ptr [EBP + -0x54]
0058ef00  MOV EAX,dword ptr [EDX + 0x178]
0058ef06  MOV EDX,dword ptr [ECX]
0058ef08  MOV ECX,EAX
0058ef0a  MOV EAX,dword ptr [EDX + 0x40]
0058ef0d  CALL EAX
0058ef0f  PUSH 0x6b27f8
0058ef14  MOV ECX,dword ptr [EBP + -0x54]
0058ef17  MOV EDX,dword ptr [ECX + 0x178]
0058ef1d  MOV EAX,dword ptr [EBP + -0x54]
0058ef20  MOV ECX,dword ptr [EAX + 0x178]
0058ef26  MOV EDX,dword ptr [EDX]
0058ef28  MOV EAX,dword ptr [EDX + 0xb4]
0058ef2e  CALL EAX
0058ef30  PUSH ECX
0058ef31  MOV ECX,ESP
0058ef33  MOV DX,word ptr [0x0075ee1c]
0058ef3a  MOV word ptr [ECX],DX
0058ef3d  MOV AL,[0x0075ee1e]
0058ef42  MOV byte ptr [ECX + 0x2],AL
0058ef45  PUSH -0x1
0058ef47  PUSH 0x37
0058ef49  MOV ECX,dword ptr [EBP + -0x54]
0058ef4c  MOV ECX,dword ptr [ECX + 0x178]
0058ef52  CALL 0x005ecd00
0058ef57  MOV EDX,dword ptr [EBP + -0x54]
0058ef5a  MOV EAX,dword ptr [EDX + 0x178]
0058ef60  MOV ECX,dword ptr [EBP + -0x54]
0058ef63  MOV ECX,dword ptr [ECX + 0x178]
0058ef69  MOV EDX,dword ptr [EAX]
0058ef6b  MOV EAX,dword ptr [EDX + 0x40]
0058ef6e  CALL EAX
0058ef70  PUSH 0xcc
0058ef75  PUSH 0xc9
0058ef7a  MOV ECX,dword ptr [EBP + -0x54]
0058ef7d  MOV EDX,dword ptr [ECX + 0x178]
0058ef83  MOV EAX,dword ptr [EBP + -0x54]
0058ef86  MOV ECX,dword ptr [EAX + 0x178]
0058ef8c  MOV EDX,dword ptr [EDX]
0058ef8e  MOV EAX,dword ptr [EDX + 0x44]
0058ef91  CALL EAX
0058ef93  PUSH 0x18
0058ef95  MOV ECX,dword ptr [EBP + -0x54]
0058ef98  MOV ECX,dword ptr [ECX + 0x178]
0058ef9e  CALL 0x005eccb0
0058efa3  PUSH 0x32
0058efa5  MOV EDX,dword ptr [EBP + -0x54]
0058efa8  MOV ECX,dword ptr [EDX + 0x178]
0058efae  CALL 0x005ecc60
0058efb3  PUSH 0x24
0058efb5  MOV EAX,dword ptr [EBP + -0x54]
0058efb8  MOV ECX,dword ptr [EAX + 0x178]
0058efbe  CALL 0x005ef310
0058efc3  MOV ECX,dword ptr [EBP + -0x28]
0058efc6  PUSH ECX
0058efc7  MOV EDX,dword ptr [EBP + -0x54]
0058efca  MOV EAX,dword ptr [EDX + 0x178]
0058efd0  MOV ECX,dword ptr [EBP + -0x54]
0058efd3  MOV ECX,dword ptr [ECX + 0x178]
0058efd9  MOV EDX,dword ptr [EAX]
0058efdb  MOV EAX,dword ptr [EDX + 0x6c]
0058efde  CALL EAX
0058efe0  MOV ECX,dword ptr [EBP + -0x54]
0058efe3  MOV EDX,dword ptr [ECX + 0x178]
0058efe9  MOV EAX,dword ptr [EBP + -0x54]
0058efec  MOV ECX,dword ptr [EAX + 0x178]
0058eff2  MOV EDX,dword ptr [EDX]
0058eff4  MOV EAX,dword ptr [EDX + 0x74]
0058eff7  CALL EAX
0058eff9  MOV dword ptr [EBP + -0x10],0x0
0058f000  JMP 0x0058f00b
0058f002  MOV ECX,dword ptr [EBP + -0x10]
0058f005  ADD ECX,0x1
0058f008  MOV dword ptr [EBP + -0x10],ECX
0058f00b  CMP dword ptr [EBP + -0x10],0x50
0058f00f  JGE 0x0058f0de
0058f015  PUSH 0x178
0058f01a  CALL 0x00686d82
0058f01f  ADD ESP,0x4
0058f022  MOV dword ptr [EBP + -0x50],EAX
0058f025  MOV byte ptr [EBP + -0x4],0x4
0058f029  CMP dword ptr [EBP + -0x50],0x0
0058f02d  JZ 0x0058f03c
0058f02f  MOV ECX,dword ptr [EBP + -0x50]
0058f032  CALL 0x005eaaf0
0058f037  MOV dword ptr [EBP + -0x64],EAX
0058f03a  JMP 0x0058f043
0058f03c  MOV dword ptr [EBP + -0x64],0x0
0058f043  MOV EDX,dword ptr [EBP + -0x64]
0058f046  MOV dword ptr [EBP + -0x4c],EDX
0058f049  MOV byte ptr [EBP + -0x4],0x0
0058f04d  MOV EAX,dword ptr [EBP + -0x10]
0058f050  MOV ECX,dword ptr [EBP + -0x54]
0058f053  MOV EDX,dword ptr [EBP + -0x4c]
0058f056  MOV dword ptr [ECX + EAX*0x4 + 0x4],EDX
0058f05a  MOV EAX,dword ptr [EBP + -0x10]
0058f05d  MOV ECX,dword ptr [EBP + -0x54]
0058f060  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
0058f064  MOV EAX,dword ptr [EBP + -0x54]
0058f067  MOV ECX,dword ptr [EAX + 0x174]
0058f06d  MOV dword ptr [EDX + 0x4],ECX
0058f070  PUSH 0x30dfed
0058f075  MOV EDX,dword ptr [EBP + -0x10]
0058f078  MOV EAX,dword ptr [EBP + -0x54]
0058f07b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0058f07f  CALL 0x005eaf00
0058f084  MOV ECX,dword ptr [EBP + -0x10]
0058f087  MOV EDX,dword ptr [EBP + -0x54]
0058f08a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
0058f08e  MOV ECX,dword ptr [EBP + -0x10]
0058f091  MOV EDX,dword ptr [EBP + -0x54]
0058f094  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0058f098  MOV EAX,dword ptr [EAX]
0058f09a  MOV EDX,dword ptr [EAX + 0x40]
0058f09d  CALL EDX
0058f09f  MOV EAX,dword ptr [EBP + -0x28]
0058f0a2  PUSH EAX
0058f0a3  MOV ECX,dword ptr [EBP + -0x10]
0058f0a6  MOV EDX,dword ptr [EBP + -0x54]
0058f0a9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
0058f0ad  MOV ECX,dword ptr [EBP + -0x10]
0058f0b0  MOV EDX,dword ptr [EBP + -0x54]
0058f0b3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0058f0b7  MOV EAX,dword ptr [EAX]
0058f0b9  MOV EDX,dword ptr [EAX + 0x6c]
0058f0bc  CALL EDX
0058f0be  MOV EAX,dword ptr [EBP + -0x10]
0058f0c1  MOV ECX,dword ptr [EBP + -0x54]
0058f0c4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
0058f0c8  MOV EAX,dword ptr [EBP + -0x10]
0058f0cb  MOV ECX,dword ptr [EBP + -0x54]
0058f0ce  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
0058f0d2  MOV EDX,dword ptr [EDX]
0058f0d4  MOV EAX,dword ptr [EDX + 0x70]
0058f0d7  CALL EAX
0058f0d9  JMP 0x0058f002
0058f0de  MOV dword ptr [EBP + -0x20],0x1a
0058f0e5  MOV dword ptr [EBP + -0x1c],0x1a
0058f0ec  MOV dword ptr [EBP + -0x18],0x3
0058f0f3  MOV dword ptr [EBP + -0x14],0x67
0058f0fa  MOV dword ptr [EBP + -0x10],0x0
0058f101  JMP 0x0058f10c
0058f103  MOV ECX,dword ptr [EBP + -0x10]
0058f106  ADD ECX,0x1
0058f109  MOV dword ptr [EBP + -0x10],ECX
0058f10c  CMP dword ptr [EBP + -0x10],0x2
0058f110  JGE 0x0058f225
0058f116  MOV dword ptr [EBP + -0x2c],0x0
0058f11d  JMP 0x0058f128
0058f11f  MOV EDX,dword ptr [EBP + -0x2c]
0058f122  ADD EDX,0x1
0058f125  MOV dword ptr [EBP + -0x2c],EDX
0058f128  CMP dword ptr [EBP + -0x2c],0x4
0058f12c  JGE 0x0058f219
0058f132  MOV dword ptr [EBP + -0x24],0x0
0058f139  JMP 0x0058f144
0058f13b  MOV EAX,dword ptr [EBP + -0x24]
0058f13e  ADD EAX,0x1
0058f141  MOV dword ptr [EBP + -0x24],EAX
0058f144  CMP dword ptr [EBP + -0x24],0xa
0058f148  JGE 0x0058f214
0058f14e  MOV ECX,dword ptr [EBP + -0x10]
0058f151  IMUL ECX,ECX,0x28
0058f154  MOV EDX,dword ptr [EBP + -0x2c]
0058f157  IMUL EDX,EDX,0xa
0058f15a  ADD ECX,dword ptr [EBP + -0x24]
0058f15d  ADD EDX,ECX
0058f15f  MOV dword ptr [EBP + -0x30],EDX
0058f162  CMP dword ptr [EBP + -0x24],0x4
0058f166  JLE 0x0058f1dc
0058f168  CMP dword ptr [EBP + -0x24],0x6
0058f16c  JLE 0x0058f1a5
0058f16e  MOV EAX,dword ptr [EBP + -0x2c]
0058f171  IMUL EAX,dword ptr [EBP + -0x1c]
0058f175  ADD EAX,dword ptr [EBP + -0x14]
0058f178  PUSH EAX
0058f179  MOV ECX,dword ptr [EBP + -0x24]
0058f17c  IMUL ECX,dword ptr [EBP + -0x20]
0058f180  MOV EDX,dword ptr [EBP + -0x18]
0058f183  LEA EAX,[EDX + ECX*0x1 + -0x3]
0058f187  PUSH EAX
0058f188  MOV ECX,dword ptr [EBP + -0x30]
0058f18b  MOV EDX,dword ptr [EBP + -0x54]
0058f18e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
0058f192  MOV ECX,dword ptr [EBP + -0x30]
0058f195  MOV EDX,dword ptr [EBP + -0x54]
0058f198  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0058f19c  MOV EAX,dword ptr [EAX]
0058f19e  MOV EDX,dword ptr [EAX + 0x44]
0058f1a1  CALL EDX
0058f1a3  JMP 0x0058f1da
0058f1a5  MOV EAX,dword ptr [EBP + -0x2c]
0058f1a8  IMUL EAX,dword ptr [EBP + -0x1c]
0058f1ac  ADD EAX,dword ptr [EBP + -0x14]
0058f1af  PUSH EAX
0058f1b0  MOV ECX,dword ptr [EBP + -0x24]
0058f1b3  IMUL ECX,dword ptr [EBP + -0x20]
0058f1b7  MOV EDX,dword ptr [EBP + -0x18]
0058f1ba  LEA EAX,[EDX + ECX*0x1 + -0x1]
0058f1be  PUSH EAX
0058f1bf  MOV ECX,dword ptr [EBP + -0x30]
0058f1c2  MOV EDX,dword ptr [EBP + -0x54]
0058f1c5  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
0058f1c9  MOV ECX,dword ptr [EBP + -0x30]
0058f1cc  MOV EDX,dword ptr [EBP + -0x54]
0058f1cf  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0058f1d3  MOV EAX,dword ptr [EAX]
0058f1d5  MOV EDX,dword ptr [EAX + 0x44]
0058f1d8  CALL EDX
0058f1da  JMP 0x0058f20f
0058f1dc  MOV EAX,dword ptr [EBP + -0x2c]
0058f1df  IMUL EAX,dword ptr [EBP + -0x1c]
0058f1e3  ADD EAX,dword ptr [EBP + -0x14]
0058f1e6  PUSH EAX
0058f1e7  MOV ECX,dword ptr [EBP + -0x24]
0058f1ea  IMUL ECX,dword ptr [EBP + -0x20]
0058f1ee  ADD ECX,dword ptr [EBP + -0x18]
0058f1f1  PUSH ECX
0058f1f2  MOV EDX,dword ptr [EBP + -0x30]
0058f1f5  MOV EAX,dword ptr [EBP + -0x54]
0058f1f8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0058f1fc  MOV EDX,dword ptr [EBP + -0x30]
0058f1ff  MOV EAX,dword ptr [EBP + -0x54]
0058f202  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4]
0058f206  MOV EAX,dword ptr [ECX]
0058f208  MOV ECX,EDX
0058f20a  MOV EDX,dword ptr [EAX + 0x44]
0058f20d  CALL EDX
0058f20f  JMP 0x0058f13b
0058f214  JMP 0x0058f11f
0058f219  MOV dword ptr [EBP + -0x14],0xdf
0058f220  JMP 0x0058f103
0058f225  MOV dword ptr [EBP + -0x10],0x0
0058f22c  JMP 0x0058f237
0058f22e  MOV EAX,dword ptr [EBP + -0x10]
0058f231  ADD EAX,0x1
0058f234  MOV dword ptr [EBP + -0x10],EAX
0058f237  CMP dword ptr [EBP + -0x10],0x4
0058f23b  JGE 0x0058f261
0058f23d  MOV ECX,dword ptr [EBP + -0x10]
0058f240  MOV EDX,dword ptr [EBP + -0x54]
0058f243  MOV dword ptr [EDX + ECX*0x4 + 0x154],0x0
0058f24e  MOV EAX,dword ptr [EBP + -0x10]
0058f251  MOV ECX,dword ptr [EBP + -0x54]
0058f254  MOV dword ptr [ECX + EAX*0x4 + 0x164],0x0
0058f25f  JMP 0x0058f22e
0058f261  MOV dword ptr [EBP + -0x4],0xffffffff
0058f268  MOV EAX,dword ptr [EBP + -0x54]
0058f26b  MOV ECX,dword ptr [EBP + -0xc]
0058f26e  MOV dword ptr FS:[0x0],ECX
0058f275  POP ECX
0058f276  MOV ESP,EBP
0058f278  POP EBP
0058f279  RET 0x4

; FUN_0067f900  0067f900
0067f900  PUSH EBP
0067f901  MOV EBP,ESP
0067f903  PUSH -0x1
0067f905  PUSH 0x6adc81
0067f90a  MOV EAX,FS:[0x0]
0067f910  PUSH EAX
0067f911  SUB ESP,0x48
0067f914  PUSH ESI
0067f915  PUSH EDI
0067f916  MOV EAX,[0x00781870]
0067f91b  XOR EAX,EBP
0067f91d  PUSH EAX
0067f91e  LEA EAX,[EBP + -0xc]
0067f921  MOV FS:[0x0],EAX
0067f927  MOV dword ptr [EBP + -0x40],ECX
0067f92a  MOV dword ptr [EBP + -0x14],0x0
0067f931  JMP 0x0067f93c
0067f933  MOV EAX,dword ptr [EBP + -0x14]
0067f936  ADD EAX,0x1
0067f939  MOV dword ptr [EBP + -0x14],EAX
0067f93c  CMP dword ptr [EBP + -0x14],0xc
0067f940  JGE 0x0067fba3
0067f946  MOV ECX,dword ptr [EBP + -0x14]
0067f949  MOV EDX,dword ptr [EBP + -0x40]
0067f94c  CMP dword ptr [EDX + ECX*0x4 + 0x198],0x0
0067f954  JNZ 0x0067f9a4
0067f956  PUSH 0x190
0067f95b  CALL 0x00686d82
0067f960  ADD ESP,0x4
0067f963  MOV dword ptr [EBP + -0x1c],EAX
0067f966  MOV dword ptr [EBP + -0x4],0x0
0067f96d  CMP dword ptr [EBP + -0x1c],0x0
0067f971  JZ 0x0067f980
0067f973  MOV ECX,dword ptr [EBP + -0x1c]
0067f976  CALL 0x005f5f50
0067f97b  MOV dword ptr [EBP + -0x44],EAX
0067f97e  JMP 0x0067f987
0067f980  MOV dword ptr [EBP + -0x44],0x0
0067f987  MOV EAX,dword ptr [EBP + -0x44]
0067f98a  MOV dword ptr [EBP + -0x18],EAX
0067f98d  MOV dword ptr [EBP + -0x4],0xffffffff
0067f994  MOV ECX,dword ptr [EBP + -0x14]
0067f997  MOV EDX,dword ptr [EBP + -0x40]
0067f99a  MOV EAX,dword ptr [EBP + -0x18]
0067f99d  MOV dword ptr [EDX + ECX*0x4 + 0x198],EAX
0067f9a4  MOV ECX,dword ptr [EBP + -0x14]
0067f9a7  MOV EDX,dword ptr [EBP + -0x40]
0067f9aa  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x198]
0067f9b1  MOV ECX,dword ptr [EBP + -0x40]
0067f9b4  MOV EDX,dword ptr [ECX + 0x4]
0067f9b7  MOV dword ptr [EAX + 0x4],EDX
0067f9ba  MOV EAX,dword ptr [EBP + -0x14]
0067f9bd  ADD EAX,0x249f45
0067f9c2  PUSH EAX
0067f9c3  MOV ECX,dword ptr [EBP + -0x14]
0067f9c6  MOV EDX,dword ptr [EBP + -0x40]
0067f9c9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x198]
0067f9d0  CALL 0x005eaf00
0067f9d5  PUSH 0x2
0067f9d7  CALL 0x0062fbf0
0067f9dc  ADD ESP,0x4
0067f9df  TEST EAX,EAX
0067f9e1  JZ 0x0067f9f7
0067f9e3  PUSH 0x14
0067f9e5  CALL 0x0062fbf0
0067f9ea  ADD ESP,0x4
0067f9ed  ADD EAX,0xe6
0067f9f2  MOV dword ptr [EBP + -0x10],EAX
0067f9f5  JMP 0x0067fa0b
0067f9f7  PUSH 0x14
0067f9f9  CALL 0x0062fbf0
0067f9fe  ADD ESP,0x4
0067fa01  MOV ECX,0xe6
0067fa06  SUB ECX,EAX
0067fa08  MOV dword ptr [EBP + -0x10],ECX
0067fa0b  MOV EDX,dword ptr [0x0162ee84]
0067fa11  MOV ECX,dword ptr [EDX + 0x14]
0067fa14  CALL 0x005f8570
0067fa19  MOV ESI,EAX
0067fa1b  MOV EDI,dword ptr [EBP + -0x14]
0067fa1e  SHL EDI,0x2
0067fa21  PUSH 0xa
0067fa23  CALL 0x0062fbf0
0067fa28  ADD ESP,0x4
0067fa2b  IMUL EDI,EAX
0067fa2e  ADD ESI,EDI
0067fa30  PUSH ESI
0067fa31  MOV EAX,dword ptr [EBP + -0x10]
0067fa34  PUSH EAX
0067fa35  MOV ECX,dword ptr [EBP + -0x14]
0067fa38  MOV EDX,dword ptr [EBP + -0x40]
0067fa3b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x198]
0067fa42  MOV ECX,dword ptr [EBP + -0x14]
0067fa45  MOV EDX,dword ptr [EBP + -0x40]
0067fa48  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x198]
0067fa4f  MOV EAX,dword ptr [EAX]
0067fa51  MOV EDX,dword ptr [EAX + 0x44]
0067fa54  CALL EDX
0067fa56  PUSH 0x14
0067fa58  CALL 0x0062fbf0
0067fa5d  ADD ESP,0x4
0067fa60  ADD EAX,0x7c6
0067fa65  PUSH EAX
0067fa66  MOV EAX,dword ptr [EBP + -0x14]
0067fa69  MOV ECX,dword ptr [EBP + -0x40]
0067fa6c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x198]
0067fa73  MOV EAX,dword ptr [EBP + -0x14]
0067fa76  MOV ECX,dword ptr [EBP + -0x40]
0067fa79  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x198]
0067fa80  MOV EDX,dword ptr [EDX]
0067fa82  MOV EAX,dword ptr [EDX + 0x6c]
0067fa85  CALL EAX
0067fa87  MOV ECX,dword ptr [EBP + -0x14]
0067fa8a  MOV EDX,dword ptr [EBP + -0x40]
0067fa8d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x198]
0067fa94  MOV ECX,dword ptr [EBP + -0x14]
0067fa97  MOV EDX,dword ptr [EBP + -0x40]
0067fa9a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x198]
0067faa1  MOV EAX,dword ptr [EAX]
0067faa3  MOV EDX,dword ptr [EAX + 0x40]
0067faa6  CALL EDX
0067faa8  MOV EAX,dword ptr [EBP + -0x14]
0067faab  MOV ECX,dword ptr [EBP + -0x40]
0067faae  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x198]
0067fab5  MOV EAX,dword ptr [EBP + -0x14]
0067fab8  MOV ECX,dword ptr [EBP + -0x40]
0067fabb  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x198]
0067fac2  MOV EDX,dword ptr [EDX]
0067fac4  MOV EAX,dword ptr [EDX + 0x74]
0067fac7  CALL EAX
0067fac9  PUSH 0xf
0067facb  CALL 0x0062fbf0
0067fad0  ADD ESP,0x4
0067fad3  MOV ECX,dword ptr [EBP + -0x14]
0067fad6  MOV EDX,dword ptr [EBP + -0x40]
0067fad9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x198]
0067fae0  MOV dword ptr [ECX + 0x178],EAX
0067fae6  PUSH 0x3
0067fae8  CALL 0x0062fbf0
0067faed  ADD ESP,0x4
0067faf0  LEA EDX,[EAX + EAX*0x1 + 0x2]
0067faf4  MOV EAX,dword ptr [EBP + -0x14]
0067faf7  MOV ECX,dword ptr [EBP + -0x40]
0067fafa  MOV EAX,dword ptr [ECX + EAX*0x4 + 0x198]
0067fb01  MOV dword ptr [EAX + 0x184],EDX
0067fb07  MOV ECX,dword ptr [EBP + -0x14]
0067fb0a  MOV EDX,dword ptr [EBP + -0x40]
0067fb0d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x198]
0067fb14  MOV dword ptr [EAX + 0x188],0x1e
0067fb1e  PUSH 0x7
0067fb20  CALL 0x0062fbf0
0067fb25  ADD ESP,0x4
0067fb28  PUSH EAX
0067fb29  MOV ECX,dword ptr [EBP + -0x14]
0067fb2c  MOV EDX,dword ptr [EBP + -0x40]
0067fb2f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x198]
0067fb36  MOV ECX,dword ptr [EBP + -0x14]
0067fb39  MOV EDX,dword ptr [EBP + -0x40]
0067fb3c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x198]
0067fb43  MOV EAX,dword ptr [EAX]
0067fb45  MOV EDX,dword ptr [EAX + 0xb0]
0067fb4b  CALL EDX
0067fb4d  PUSH 0x1c
0067fb4f  CALL 0x00686d82
0067fb54  ADD ESP,0x4
0067fb57  MOV dword ptr [EBP + -0x24],EAX
0067fb5a  MOV dword ptr [EBP + -0x4],0x1
0067fb61  CMP dword ptr [EBP + -0x24],0x0
0067fb65  JZ 0x0067fb74
0067fb67  MOV ECX,dword ptr [EBP + -0x24]
0067fb6a  CALL 0x006012f0
0067fb6f  MOV dword ptr [EBP + -0x48],EAX
0067fb72  JMP 0x0067fb7b
0067fb74  MOV dword ptr [EBP + -0x48],0x0
0067fb7b  MOV EAX,dword ptr [EBP + -0x48]
0067fb7e  MOV dword ptr [EBP + -0x20],EAX
0067fb81  MOV dword ptr [EBP + -0x4],0xffffffff
0067fb88  MOV ECX,dword ptr [EBP + -0x20]
0067fb8b  PUSH ECX
0067fb8c  MOV EDX,dword ptr [EBP + -0x14]
0067fb8f  MOV EAX,dword ptr [EBP + -0x40]
0067fb92  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x198]
0067fb99  CALL 0x005f5d50
0067fb9e  JMP 0x0067f933
0067fba3  MOV dword ptr [EBP + -0x14],0x0
0067fbaa  JMP 0x0067fbb5
0067fbac  MOV ECX,dword ptr [EBP + -0x14]
0067fbaf  ADD ECX,0x1
0067fbb2  MOV dword ptr [EBP + -0x14],ECX
0067fbb5  CMP dword ptr [EBP + -0x14],0xc
0067fbb9  JGE 0x0067fd55
0067fbbf  MOV EDX,dword ptr [EBP + -0x14]
0067fbc2  MOV EAX,dword ptr [EBP + -0x40]
0067fbc5  CMP dword ptr [EAX + EDX*0x4 + 0x1c8],0x0
0067fbcd  JNZ 0x0067fc1d
0067fbcf  PUSH 0x190
0067fbd4  CALL 0x00686d82
0067fbd9  ADD ESP,0x4
0067fbdc  MOV dword ptr [EBP + -0x2c],EAX
0067fbdf  MOV dword ptr [EBP + -0x4],0x2
0067fbe6  CMP dword ptr [EBP + -0x2c],0x0
0067fbea  JZ 0x0067fbf9
0067fbec  MOV ECX,dword ptr [EBP + -0x2c]
0067fbef  CALL 0x005f5f50
0067fbf4  MOV dword ptr [EBP + -0x4c],EAX
0067fbf7  JMP 0x0067fc00
0067fbf9  MOV dword ptr [EBP + -0x4c],0x0
0067fc00  MOV ECX,dword ptr [EBP + -0x4c]
0067fc03  MOV dword ptr [EBP + -0x28],ECX
0067fc06  MOV dword ptr [EBP + -0x4],0xffffffff
0067fc0d  MOV EDX,dword ptr [EBP + -0x14]
0067fc10  MOV EAX,dword ptr [EBP + -0x40]
0067fc13  MOV ECX,dword ptr [EBP + -0x28]
0067fc16  MOV dword ptr [EAX + EDX*0x4 + 0x1c8],ECX
0067fc1d  MOV EDX,dword ptr [EBP + -0x14]
0067fc20  MOV EAX,dword ptr [EBP + -0x40]
0067fc23  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1c8]
0067fc2a  MOV EDX,dword ptr [EBP + -0x40]
0067fc2d  MOV EAX,dword ptr [EDX + 0x4]
0067fc30  MOV dword ptr [ECX + 0x4],EAX
0067fc33  MOV ECX,dword ptr [EBP + -0x14]
0067fc36  ADD ECX,0x249f51
0067fc3c  PUSH ECX
0067fc3d  MOV EDX,dword ptr [EBP + -0x14]
0067fc40  MOV EAX,dword ptr [EBP + -0x40]
0067fc43  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1c8]
0067fc4a  CALL 0x005eaf00
0067fc4f  PUSH 0x96
0067fc54  PUSH 0xffffff6a
0067fc59  CALL 0x0062fc30
0067fc5e  ADD ESP,0x8
0067fc61  PUSH EAX
0067fc62  MOV ECX,dword ptr [EBP + -0x14]
0067fc65  MOV EDX,dword ptr [EBP + -0x40]
0067fc68  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0067fc6f  MOV ECX,dword ptr [EBP + -0x14]
0067fc72  MOV EDX,dword ptr [EBP + -0x40]
0067fc75  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0067fc7c  MOV EAX,dword ptr [EAX]
0067fc7e  MOV EDX,dword ptr [EAX + 0x48]
0067fc81  CALL EDX
0067fc83  PUSH 0x14
0067fc85  CALL 0x0062fbf0
0067fc8a  ADD ESP,0x4
0067fc8d  ADD EAX,0x7c6
0067fc92  PUSH EAX
0067fc93  MOV EAX,dword ptr [EBP + -0x14]
0067fc96  MOV ECX,dword ptr [EBP + -0x40]
0067fc99  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1c8]
0067fca0  MOV EAX,dword ptr [EBP + -0x14]
0067fca3  MOV ECX,dword ptr [EBP + -0x40]
0067fca6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1c8]
0067fcad  MOV EDX,dword ptr [EDX]
0067fcaf  MOV EAX,dword ptr [EDX + 0x6c]
0067fcb2  CALL EAX
0067fcb4  MOV ECX,dword ptr [EBP + -0x14]
0067fcb7  MOV EDX,dword ptr [EBP + -0x40]
0067fcba  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0067fcc1  MOV ECX,dword ptr [EBP + -0x14]
0067fcc4  MOV EDX,dword ptr [EBP + -0x40]
0067fcc7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0067fcce  MOV EAX,dword ptr [EAX]
0067fcd0  MOV EDX,dword ptr [EAX + 0x40]
0067fcd3  CALL EDX
0067fcd5  MOV EAX,dword ptr [EBP + -0x14]
0067fcd8  MOV ECX,dword ptr [EBP + -0x40]
0067fcdb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1c8]
0067fce2  MOV EAX,dword ptr [EBP + -0x14]
0067fce5  MOV ECX,dword ptr [EBP + -0x40]
0067fce8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1c8]
0067fcef  MOV EDX,dword ptr [EDX]
0067fcf1  MOV EAX,dword ptr [EDX + 0x74]
0067fcf4  CALL EAX
0067fcf6  PUSH 0x6
0067fcf8  CALL 0x0062fbf0
0067fcfd  ADD ESP,0x4
0067fd00  ADD EAX,0xa
0067fd03  MOV ECX,dword ptr [EBP + -0x14]
0067fd06  MOV EDX,dword ptr [EBP + -0x40]
0067fd09  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0067fd10  MOV dword ptr [ECX + 0x178],EAX
0067fd16  PUSH 0x3
0067fd18  CALL 0x0062fbf0
0067fd1d  ADD ESP,0x4
0067fd20  MOV EDX,dword ptr [EBP + -0x14]
0067fd23  MOV ECX,dword ptr [EBP + -0x40]
0067fd26  MOV EDX,dword ptr [ECX + EDX*0x4 + 0x1c8]
0067fd2d  MOV dword ptr [EDX + 0x184],EAX
0067fd33  PUSH 0x3
0067fd35  CALL 0x0062fbf0
0067fd3a  ADD ESP,0x4
0067fd3d  MOV ECX,dword ptr [EBP + -0x14]
0067fd40  MOV EDX,dword ptr [EBP + -0x40]
0067fd43  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0067fd4a  MOV dword ptr [ECX + 0x188],EAX
0067fd50  JMP 0x0067fbac
0067fd55  MOV dword ptr [EBP + -0x14],0x0
0067fd5c  JMP 0x0067fd67
0067fd5e  MOV EDX,dword ptr [EBP + -0x14]
0067fd61  ADD EDX,0x1
0067fd64  MOV dword ptr [EBP + -0x14],EDX
0067fd67  CMP dword ptr [EBP + -0x14],0x3
0067fd6b  JGE 0x0067feea
0067fd71  MOV EAX,dword ptr [EBP + -0x14]
0067fd74  MOV ECX,dword ptr [EBP + -0x40]
0067fd77  CMP dword ptr [ECX + EAX*0x4 + 0x1f8],0x0
0067fd7f  JNZ 0x0067fdcf
0067fd81  PUSH 0x190
0067fd86  CALL 0x00686d82
0067fd8b  ADD ESP,0x4
0067fd8e  MOV dword ptr [EBP + -0x34],EAX
0067fd91  MOV dword ptr [EBP + -0x4],0x3
0067fd98  CMP dword ptr [EBP + -0x34],0x0
0067fd9c  JZ 0x0067fdab
0067fd9e  MOV ECX,dword ptr [EBP + -0x34]
0067fda1  CALL 0x005f5f50
0067fda6  MOV dword ptr [EBP + -0x50],EAX
0067fda9  JMP 0x0067fdb2
0067fdab  MOV dword ptr [EBP + -0x50],0x0
0067fdb2  MOV EDX,dword ptr [EBP + -0x50]
0067fdb5  MOV dword ptr [EBP + -0x30],EDX
0067fdb8  MOV dword ptr [EBP + -0x4],0xffffffff
0067fdbf  MOV EAX,dword ptr [EBP + -0x14]
0067fdc2  MOV ECX,dword ptr [EBP + -0x40]
0067fdc5  MOV EDX,dword ptr [EBP + -0x30]
0067fdc8  MOV dword ptr [ECX + EAX*0x4 + 0x1f8],EDX
0067fdcf  MOV EAX,dword ptr [EBP + -0x14]
0067fdd2  MOV ECX,dword ptr [EBP + -0x40]
0067fdd5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1f8]
0067fddc  MOV EAX,dword ptr [EBP + -0x40]
0067fddf  MOV ECX,dword ptr [EAX + 0x4]
0067fde2  MOV dword ptr [EDX + 0x4],ECX
0067fde5  PUSH 0x249f5d
0067fdea  MOV EDX,dword ptr [EBP + -0x14]
0067fded  MOV EAX,dword ptr [EBP + -0x40]
0067fdf0  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1f8]
0067fdf7  CALL 0x005eaf00
0067fdfc  PUSH 0x14
0067fdfe  CALL 0x0062fbf0
0067fe03  ADD ESP,0x4
0067fe06  ADD EAX,0x7c6
0067fe0b  PUSH EAX
0067fe0c  MOV ECX,dword ptr [EBP + -0x14]
0067fe0f  MOV EDX,dword ptr [EBP + -0x40]
0067fe12  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1f8]
0067fe19  MOV ECX,dword ptr [EBP + -0x14]
0067fe1c  MOV EDX,dword ptr [EBP + -0x40]
0067fe1f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1f8]
0067fe26  MOV EAX,dword ptr [EAX]
0067fe28  MOV EDX,dword ptr [EAX + 0x6c]
0067fe2b  CALL EDX
0067fe2d  MOV EAX,dword ptr [EBP + -0x14]
0067fe30  MOV ECX,dword ptr [EBP + -0x40]
0067fe33  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1f8]
0067fe3a  MOV EAX,dword ptr [EBP + -0x14]
0067fe3d  MOV ECX,dword ptr [EBP + -0x40]
0067fe40  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1f8]
0067fe47  MOV EDX,dword ptr [EDX]
0067fe49  MOV EAX,dword ptr [EDX + 0x40]
0067fe4c  CALL EAX
0067fe4e  MOV ECX,dword ptr [EBP + -0x14]
0067fe51  MOV EDX,dword ptr [EBP + -0x40]
0067fe54  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1f8]
0067fe5b  MOV dword ptr [EAX + 0x188],0x1e
0067fe65  PUSH 0x3
0067fe67  CALL 0x0062fbf0
0067fe6c  ADD ESP,0x4
0067fe6f  PUSH EAX
0067fe70  MOV ECX,dword ptr [EBP + -0x14]
0067fe73  MOV EDX,dword ptr [EBP + -0x40]
0067fe76  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1f8]
0067fe7d  MOV ECX,dword ptr [EBP + -0x14]
0067fe80  MOV EDX,dword ptr [EBP + -0x40]
0067fe83  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1f8]
0067fe8a  MOV EAX,dword ptr [EAX]
0067fe8c  MOV EDX,dword ptr [EAX + 0xb0]
0067fe92  CALL EDX
0067fe94  PUSH 0x1c
0067fe96  CALL 0x00686d82
0067fe9b  ADD ESP,0x4
0067fe9e  MOV dword ptr [EBP + -0x3c],EAX
0067fea1  MOV dword ptr [EBP + -0x4],0x4
0067fea8  CMP dword ptr [EBP + -0x3c],0x0
0067feac  JZ 0x0067febb
0067feae  MOV ECX,dword ptr [EBP + -0x3c]
0067feb1  CALL 0x006012f0
0067feb6  MOV dword ptr [EBP + -0x54],EAX
0067feb9  JMP 0x0067fec2
0067febb  MOV dword ptr [EBP + -0x54],0x0
0067fec2  MOV EAX,dword ptr [EBP + -0x54]
0067fec5  MOV dword ptr [EBP + -0x38],EAX
0067fec8  MOV dword ptr [EBP + -0x4],0xffffffff
0067fecf  MOV ECX,dword ptr [EBP + -0x38]
0067fed2  PUSH ECX
0067fed3  MOV EDX,dword ptr [EBP + -0x14]
0067fed6  MOV EAX,dword ptr [EBP + -0x40]
0067fed9  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1f8]
0067fee0  CALL 0x005f5d50
0067fee5  JMP 0x0067fd5e
0067feea  PUSH 0xffffff38
0067feef  MOV ECX,dword ptr [EBP + -0x40]
0067fef2  MOV EDX,dword ptr [ECX + 0x1f8]
0067fef8  MOV EAX,dword ptr [EBP + -0x40]
0067fefb  MOV ECX,dword ptr [EAX + 0x1f8]
0067ff01  MOV EDX,dword ptr [EDX]
0067ff03  MOV EAX,dword ptr [EDX + 0x50]
0067ff06  CALL EAX
0067ff08  PUSH 0xfffffea2
0067ff0d  MOV ECX,dword ptr [EBP + -0x40]
0067ff10  MOV EDX,dword ptr [ECX + 0x1fc]
0067ff16  MOV EAX,dword ptr [EBP + -0x40]
0067ff19  MOV ECX,dword ptr [EAX + 0x1fc]
0067ff1f  MOV EDX,dword ptr [EDX]
0067ff21  MOV EAX,dword ptr [EDX + 0x50]
0067ff24  CALL EAX
0067ff26  PUSH 0xfffffe0c
0067ff2b  MOV ECX,dword ptr [EBP + -0x40]
0067ff2e  MOV EDX,dword ptr [ECX + 0x200]
0067ff34  MOV EAX,dword ptr [EBP + -0x40]
0067ff37  MOV ECX,dword ptr [EAX + 0x200]
0067ff3d  MOV EDX,dword ptr [EDX]
0067ff3f  MOV EAX,dword ptr [EDX + 0x50]
0067ff42  CALL EAX
0067ff44  MOV dword ptr [EBP + -0x14],0x0
0067ff4b  JMP 0x0067ff56
0067ff4d  MOV ECX,dword ptr [EBP + -0x14]
0067ff50  ADD ECX,0x1
0067ff53  MOV dword ptr [EBP + -0x14],ECX
0067ff56  CMP dword ptr [EBP + -0x14],0x3
0067ff5a  JGE 0x0067ff81
0067ff5c  MOV EDX,dword ptr [EBP + -0x14]
0067ff5f  MOV EAX,dword ptr [EBP + -0x40]
0067ff62  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1f8]
0067ff69  MOV EDX,dword ptr [EBP + -0x14]
0067ff6c  MOV EAX,dword ptr [EBP + -0x40]
0067ff6f  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x1f8]
0067ff76  MOV EAX,dword ptr [ECX]
0067ff78  MOV ECX,EDX
0067ff7a  MOV EDX,dword ptr [EAX + 0x74]
0067ff7d  CALL EDX
0067ff7f  JMP 0x0067ff4d
0067ff81  MOV ECX,dword ptr [EBP + -0xc]
0067ff84  MOV dword ptr FS:[0x0],ECX
0067ff8b  POP ECX
0067ff8c  POP EDI
0067ff8d  POP ESI
0067ff8e  MOV ESP,EBP
0067ff90  POP EBP
0067ff91  RET

; FUN_005bd050  005bd050
005bd050  PUSH EBP
005bd051  MOV EBP,ESP
005bd053  PUSH -0x1
005bd055  PUSH 0x6a822c
005bd05a  MOV EAX,FS:[0x0]
005bd060  PUSH EAX
005bd061  SUB ESP,0x144
005bd067  MOV EAX,[0x00781870]
005bd06c  XOR EAX,EBP
005bd06e  PUSH EAX
005bd06f  LEA EAX,[EBP + -0xc]
005bd072  MOV FS:[0x0],EAX
005bd078  MOV dword ptr [EBP + 0xffffff10],ECX
005bd07e  MOV ECX,dword ptr [EBP + 0xffffff10]
005bd084  CALL 0x005c1550
005bd089  MOV EAX,dword ptr [EBP + 0xffffff10]
005bd08f  MOV ECX,dword ptr [EAX + 0x54]
005bd092  MOV dword ptr [EBP + 0xffffff0c],ECX
005bd098  MOV EDX,dword ptr [EBP + 0xffffff0c]
005bd09e  SUB EDX,0x1
005bd0a1  MOV dword ptr [EBP + 0xffffff0c],EDX
005bd0a7  CMP dword ptr [EBP + 0xffffff0c],0x3
005bd0ae  JA 0x005bda35
005bd0b4  MOV EAX,dword ptr [EBP + 0xffffff0c]
005bd0ba  JMP dword ptr [EAX*0x4 + 0x5bdeac]
005bda35  MOV EDX,dword ptr [EBP + 0xffffff10]
005bda3b  MOV EAX,dword ptr [EDX + 0x50]
005bda3e  MOV ECX,dword ptr [EAX + 0x54]
005bda41  MOV dword ptr [EBP + -0x14],ECX
005bda44  MOV EDX,dword ptr [0x007960d8]
005bda4a  MOV EAX,dword ptr [EDX + 0xc]
005bda4d  MOV ECX,dword ptr [0x007960d8]
005bda53  MOV ECX,dword ptr [ECX + 0xc]
005bda56  MOV EDX,dword ptr [EAX]
005bda58  MOV EAX,dword ptr [EDX + 0x8]
005bda5b  CALL EAX
005bda5d  MOV ECX,dword ptr [EBP + 0xffffff10]
005bda63  SUB EAX,dword ptr [ECX + 0x68]
005bda66  MOV dword ptr [EBP + -0x10],EAX
005bda69  MOV dword ptr [EBP + -0x2c],0x0
005bda70  JMP 0x005bda7b
005bda72  MOV EDX,dword ptr [EBP + -0x2c]
005bda75  ADD EDX,0x1
005bda78  MOV dword ptr [EBP + -0x2c],EDX
005bda7b  MOV EAX,dword ptr [EBP + -0x2c]
005bda7e  IMUL EAX,EAX,0x14
005bda81  MOV ECX,dword ptr [EBP + -0x14]
005bda84  CMP dword ptr [ECX + EAX*0x1],0x0
005bda88  JL 0x005bde85
005bda8e  MOV EDX,dword ptr [EBP + -0x2c]
005bda91  IMUL EDX,EDX,0x14
005bda94  MOV EAX,dword ptr [EBP + -0x14]
005bda97  MOV ECX,dword ptr [EAX + EDX*0x1]
005bda9a  MOV EDX,dword ptr [EAX + EDX*0x1 + 0x4]
005bda9e  MOV dword ptr [EBP + -0x44],ECX
005bdaa1  MOV dword ptr [EBP + -0x40],EDX
005bdaa4  MOV EAX,dword ptr [EBP + 0xffffff10]
005bdaaa  MOV ECX,dword ptr [EAX + 0x4]
005bdaad  MOV dword ptr [EBP + 0xffffff24],ECX
005bdab3  MOV EDX,dword ptr [EBP + -0x44]
005bdab6  MOV EAX,dword ptr [EBP + 0xffffff24]
005bdabc  CMP dword ptr [EAX + EDX*0x4 + 0x18],0x0
005bdac1  JL 0x005bdad8
005bdac3  MOV ECX,dword ptr [EBP + -0x44]
005bdac6  MOV EDX,dword ptr [EBP + 0xffffff24]
005bdacc  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005bdad0  MOV dword ptr [EBP + 0xfffffec4],EAX
005bdad6  JMP 0x005bdaed
005bdad8  MOV ECX,dword ptr [EBP + -0x44]
005bdadb  MOV EDX,dword ptr [EBP + 0xffffff24]
005bdae1  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005bdae5  NEG EAX
005bdae7  MOV dword ptr [EBP + 0xfffffec4],EAX
005bdaed  MOV ECX,dword ptr [EBP + -0x40]
005bdaf0  ADD ECX,dword ptr [EBP + 0xfffffec4]
005bdaf6  MOV dword ptr [EBP + -0x40],ECX
005bdaf9  LEA EDX,[EBP + -0x38]
005bdafc  PUSH EDX
005bdafd  MOV EAX,dword ptr [EBP + -0x40]
005bdb00  PUSH EAX
005bdb01  MOV ECX,dword ptr [EBP + -0x44]
005bdb04  PUSH ECX
005bdb05  MOV ECX,dword ptr [EBP + 0xffffff10]
005bdb0b  CALL 0x005bcee0
005bdb10  MOV EDX,dword ptr [EBP + 0xffffff10]
005bdb16  ADD EDX,0x58
005bdb19  MOV dword ptr [EBP + 0xffffff20],EDX
005bdb1f  MOV EAX,dword ptr [EBP + 0xffffff20]
005bdb25  CMP dword ptr [EAX + 0x4],0x0
005bdb29  JNZ 0x005bdb37
005bdb2b  MOV dword ptr [EBP + 0xfffffec0],0x0
005bdb35  JMP 0x005bdb52
005bdb37  MOV ECX,dword ptr [EBP + 0xffffff20]
005bdb3d  MOV EDX,dword ptr [EBP + 0xffffff20]
005bdb43  MOV EAX,dword ptr [ECX + 0x8]
005bdb46  SUB EAX,dword ptr [EDX + 0x4]
005bdb49  SAR EAX,0x2
005bdb4c  MOV dword ptr [EBP + 0xfffffec0],EAX
005bdb52  MOV ECX,dword ptr [EBP + -0x2c]
005bdb55  CMP ECX,dword ptr [EBP + 0xfffffec0]
005bdb5b  JC 0x005bdb63
005bdb5d  CALL dword ptr [0x006b2274]
005bdb63  MOV EDX,dword ptr [EBP + 0xffffff20]
005bdb69  MOV EAX,dword ptr [EDX + 0x4]
005bdb6c  MOV ECX,dword ptr [EBP + -0x2c]
005bdb6f  MOV EDX,dword ptr [EAX + ECX*0x4]
005bdb72  MOV dword ptr [EBP + -0x18],EDX
005bdb75  CMP dword ptr [EBP + -0x18],0x0
005bdb79  JZ 0x005bdbac
005bdb7b  MOV ECX,dword ptr [EBP + -0x18]
005bdb7e  CALL 0x005eafc0
005bdb83  CMP EAX,dword ptr [EBP + -0x38]
005bdb86  JNZ 0x005bdb99
005bdb88  MOV ECX,dword ptr [EBP + -0x18]
005bdb8b  CALL 0x005eb110
005bdb90  CMP EAX,dword ptr [EBP + -0x34]
005bdb93  JZ 0x005bdc8b
005bdb99  MOV ECX,dword ptr [EBP + -0x18]
005bdb9c  CALL 0x005eb610
005bdba1  MOVZX EAX,AL
005bdba4  TEST EAX,EAX
005bdba6  JG 0x005bdc8b
005bdbac  MOV byte ptr [EBP + -0x45],0x0
005bdbb0  CMP dword ptr [EBP + -0x18],0x0
005bdbb4  JZ 0x005bdbfe
005bdbb6  MOV ECX,dword ptr [EBP + -0x18]
005bdbb9  MOV dword ptr [EBP + 0xffffff74],ECX
005bdbbf  MOV EDX,dword ptr [EBP + 0xffffff74]
005bdbc5  MOV dword ptr [EBP + 0xffffff78],EDX
005bdbcb  CMP dword ptr [EBP + 0xffffff78],0x0
005bdbd2  JZ 0x005bdbf0
005bdbd4  PUSH 0x1
005bdbd6  MOV EAX,dword ptr [EBP + 0xffffff78]
005bdbdc  MOV EDX,dword ptr [EAX]
005bdbde  MOV ECX,dword ptr [EBP + 0xffffff78]
005bdbe4  MOV EAX,dword ptr [EDX]
005bdbe6  CALL EAX
005bdbe8  MOV dword ptr [EBP + 0xfffffebc],EAX
005bdbee  JMP 0x005bdbfa
005bdbf0  MOV dword ptr [EBP + 0xfffffebc],0x0
005bdbfa  MOV byte ptr [EBP + -0x45],0x1
005bdbfe  MOV ECX,dword ptr [EBP + -0x40]
005bdc01  PUSH ECX
005bdc02  MOV EDX,dword ptr [EBP + -0x44]
005bdc05  PUSH EDX
005bdc06  MOV ECX,dword ptr [EBP + 0xffffff10]
005bdc0c  CALL 0x005bcf70
005bdc11  MOV dword ptr [EBP + -0x18],EAX
005bdc14  MOV EAX,dword ptr [EBP + 0xffffff10]
005bdc1a  ADD EAX,0x58
005bdc1d  MOV dword ptr [EBP + 0xffffff1c],EAX
005bdc23  MOV ECX,dword ptr [EBP + 0xffffff1c]
005bdc29  CMP dword ptr [ECX + 0x4],0x0
005bdc2d  JNZ 0x005bdc3b
005bdc2f  MOV dword ptr [EBP + 0xfffffeb8],0x0
005bdc39  JMP 0x005bdc56
005bdc3b  MOV EDX,dword ptr [EBP + 0xffffff1c]
005bdc41  MOV EAX,dword ptr [EBP + 0xffffff1c]
005bdc47  MOV ECX,dword ptr [EDX + 0x8]
005bdc4a  SUB ECX,dword ptr [EAX + 0x4]
005bdc4d  SAR ECX,0x2
005bdc50  MOV dword ptr [EBP + 0xfffffeb8],ECX
005bdc56  MOV EDX,dword ptr [EBP + -0x2c]
005bdc59  CMP EDX,dword ptr [EBP + 0xfffffeb8]
005bdc5f  JC 0x005bdc67
005bdc61  CALL dword ptr [0x006b2274]
005bdc67  MOV EAX,dword ptr [EBP + 0xffffff1c]
005bdc6d  MOV ECX,dword ptr [EAX + 0x4]
005bdc70  MOV EDX,dword ptr [EBP + -0x2c]
005bdc73  MOV EAX,dword ptr [EBP + -0x18]
005bdc76  MOV dword ptr [ECX + EDX*0x4],EAX
005bdc79  MOVZX ECX,byte ptr [EBP + -0x45]
005bdc7d  TEST ECX,ECX
005bdc7f  JZ 0x005bdc8b
005bdc81  PUSH 0x0
005bdc83  MOV ECX,dword ptr [EBP + -0x18]
005bdc86  CALL 0x005eb5d0
005bdc8b  MOV ECX,dword ptr [EBP + -0x18]
005bdc8e  CALL 0x005eb610
005bdc93  MOVZX EDX,AL
005bdc96  TEST EDX,EDX
005bdc98  JG 0x005bddb0
005bdc9e  MOV ECX,dword ptr [EBP + -0x18]
005bdca1  CALL 0x005f60e0
005bdca6  TEST EAX,EAX
005bdca8  JNZ 0x005bddb0
005bdcae  PUSH 0x34
005bdcb0  CALL 0x00686d82
005bdcb5  ADD ESP,0x4
005bdcb8  MOV dword ptr [EBP + 0xffffff6c],EAX
005bdcbe  MOV dword ptr [EBP + -0x4],0x5
005bdcc5  CMP dword ptr [EBP + 0xffffff6c],0x0
005bdccc  JZ 0x005bdd84
005bdcd2  MOV EAX,dword ptr [EBP + 0xffffff10]
005bdcd8  MOV ECX,dword ptr [EAX + 0x50]
005bdcdb  MOV EDX,dword ptr [ECX + 0x64]
005bdcde  MOV dword ptr [EBP + 0xffffff14],EDX
005bdce4  MOV ECX,dword ptr [EBP + 0xffffff10]
005bdcea  CALL 0x005c21c0
005bdcef  FLD1
005bdcf1  FDIVRP
005bdcf3  MOV EAX,dword ptr [EBP + -0x2c]
005bdcf6  IMUL EAX,EAX,0x14
005bdcf9  MOV ECX,dword ptr [EBP + 0xffffff10]
005bdcff  MOV EDX,dword ptr [ECX + 0x50]
005bdd02  MOV ECX,dword ptr [EDX + 0x60]
005bdd05  MOV EDX,dword ptr [EBP + -0x14]
005bdd08  ADD ECX,dword ptr [EDX + EAX*0x1 + 0x10]
005bdd0c  MOV dword ptr [EBP + 0xfffffeb4],ECX
005bdd12  FILD dword ptr [EBP + 0xfffffeb4]
005bdd18  FMULP
005bdd1a  CALL 0x00686cc0
005bdd1f  MOV dword ptr [EBP + 0xffffff18],EAX
005bdd25  PUSH 0x0
005bdd27  MOV ECX,dword ptr [EBP + 0xffffff6c]
005bdd2d  CALL 0x006069b0
005bdd32  MOV EAX,dword ptr [EBP + 0xffffff6c]
005bdd38  MOV dword ptr [EAX],0x6d1cbc
005bdd3e  MOV ECX,dword ptr [EBP + 0xffffff6c]
005bdd44  MOV EDX,dword ptr [EBP + 0xffffff14]
005bdd4a  MOV dword ptr [ECX + 0x2c],EDX
005bdd4d  MOV EAX,dword ptr [EBP + 0xffffff6c]
005bdd53  MOV ECX,dword ptr [EBP + 0xffffff18]
005bdd59  MOV dword ptr [EAX + 0x30],ECX
005bdd5c  MOV EDX,dword ptr [EBP + 0xffffff6c]
005bdd62  MOV dword ptr [EDX + 0x14],0xffffffff
005bdd69  MOV EAX,dword ptr [EBP + 0xffffff6c]
005bdd6f  MOV dword ptr [EAX + 0x10],0xffffffff
005bdd76  MOV ECX,dword ptr [EBP + 0xffffff6c]
005bdd7c  MOV dword ptr [EBP + 0xfffffeb0],ECX
005bdd82  JMP 0x005bdd8e
005bdd84  MOV dword ptr [EBP + 0xfffffeb0],0x0
005bdd8e  MOV EDX,dword ptr [EBP + 0xfffffeb0]
005bdd94  MOV dword ptr [EBP + 0xffffff70],EDX
005bdd9a  MOV dword ptr [EBP + -0x4],0xffffffff
005bdda1  MOV EAX,dword ptr [EBP + 0xffffff70]
005bdda7  PUSH EAX
005bdda8  MOV ECX,dword ptr [EBP + -0x18]
005bddab  CALL 0x005f6050
005bddb0  MOV dword ptr [EBP + -0x3c],0x0
005bddb7  MOV ECX,dword ptr [EBP + 0xffffff10]
005bddbd  MOV EDX,dword ptr [ECX]
005bddbf  MOV ECX,dword ptr [EBP + 0xffffff10]
005bddc5  MOV EAX,dword ptr [EDX + 0x2c]
005bddc8  CALL EAX
005bddca  MOVZX ECX,AL
005bddcd  TEST ECX,ECX
005bddcf  JZ 0x005bde36
005bddd1  MOV EDX,dword ptr [EBP + -0x40]
005bddd4  PUSH EDX
005bddd5  MOV EAX,dword ptr [EBP + -0x44]
005bddd8  PUSH EAX
005bddd9  MOV ECX,dword ptr [EBP + 0xffffff10]
005bdddf  MOV ECX,dword ptr [ECX + 0x4]
005bdde2  CALL 0x005c9960
005bdde7  TEST EAX,EAX
005bdde9  JLE 0x005bde36
005bddeb  MOV dword ptr [EBP + -0x54],0xfa
005bddf2  MOV dword ptr [EBP + -0x4c],0x0
005bddf9  MOV ECX,dword ptr [EBP + -0x18]
005bddfc  CALL 0x005eb240
005bde01  ADD EAX,0x1
005bde04  MOV dword ptr [EBP + -0x50],EAX
005bde07  MOV EDX,dword ptr [EBP + -0x50]
005bde0a  MOV dword ptr [EBP + -0x58],EDX
005bde0d  MOV EAX,dword ptr [EBP + -0x10]
005bde10  CDQ
005bde11  MOV ECX,0xfa
005bde16  IDIV ECX
005bde18  MOV dword ptr [EBP + -0x3c],EAX
005bde1b  MOV EAX,dword ptr [EBP + -0x3c]
005bde1e  CDQ
005bde1f  IDIV dword ptr [EBP + -0x58]
005bde22  MOV dword ptr [EBP + -0x3c],EDX
005bde25  MOV EDX,dword ptr [EBP + -0x3c]
005bde28  CMP EDX,dword ptr [EBP + -0x50]
005bde2b  JL 0x005bde36
005bde2d  MOV EAX,dword ptr [EBP + -0x50]
005bde30  SUB EAX,0x1
005bde33  MOV dword ptr [EBP + -0x3c],EAX
005bde36  MOV ECX,dword ptr [EBP + -0x18]
005bde39  CALL 0x005eb220
005bde3e  CMP dword ptr [EBP + -0x3c],EAX
005bde41  JZ 0x005bde57
005bde43  MOV ECX,dword ptr [EBP + -0x3c]
005bde46  PUSH ECX
005bde47  MOV EDX,dword ptr [EBP + -0x18]
005bde4a  MOV EAX,dword ptr [EDX]
005bde4c  MOV ECX,dword ptr [EBP + -0x18]
005bde4f  MOV EDX,dword ptr [EAX + 0xb0]
005bde55  CALL EDX
005bde57  MOV EAX,dword ptr [EBP + -0x2c]
005bde5a  IMUL EAX,EAX,0x14
005bde5d  MOV ECX,dword ptr [EBP + -0x14]
005bde60  MOV EDX,dword ptr [ECX + EAX*0x1 + 0xc]
005bde64  PUSH EDX
005bde65  MOV EAX,dword ptr [EBP + -0x2c]
005bde68  IMUL EAX,EAX,0x14
005bde6b  MOV ECX,dword ptr [EBP + -0x14]
005bde6e  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x8]
005bde72  PUSH EDX
005bde73  MOV EAX,dword ptr [EBP + -0x18]
005bde76  MOV EDX,dword ptr [EAX]
005bde78  MOV ECX,dword ptr [EBP + -0x18]
005bde7b  MOV EAX,dword ptr [EDX + 0x44]
005bde7e  CALL EAX
005bde80  JMP 0x005bda72
005bde85  MOV ECX,dword ptr [EBP + 0xffffff10]
005bde8b  CALL 0x005c1b60
005bde90  PUSH 0x0
005bde92  MOV ECX,dword ptr [EBP + 0xffffff10]
005bde98  CALL 0x005c1d60
005bde9d  MOV ECX,dword ptr [EBP + -0xc]
005bdea0  MOV dword ptr FS:[0x0],ECX
005bdea7  POP ECX
005bdea8  MOV ESP,EBP
005bdeaa  POP EBP
005bdeab  RET

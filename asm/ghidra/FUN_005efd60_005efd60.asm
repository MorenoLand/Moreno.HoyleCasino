; FUN_005efd60  005efd60
005efd60  PUSH EBP
005efd61  MOV EBP,ESP
005efd63  SUB ESP,0xf0
005efd69  MOV dword ptr [EBP + 0xffffff14],ECX
005efd6f  MOV dword ptr [EBP + 0xffffff78],0x0
005efd79  MOV dword ptr [EBP + -0x1c],0x0
005efd80  MOV dword ptr [EBP + -0x80],0x0
005efd87  MOV dword ptr [EBP + -0x7c],0x0
005efd8e  MOV dword ptr [EBP + -0x18],0x0
005efd95  MOV dword ptr [EBP + 0xffffff48],0x0
005efd9f  MOV dword ptr [EBP + -0x34],0x0
005efda6  MOV dword ptr [EBP + 0xffffff7c],0x0
005efdb0  MOV dword ptr [EBP + 0xffffff4c],0x0
005efdba  MOV dword ptr [EBP + 0xffffff74],0x0
005efdc4  MOV dword ptr [EBP + -0x14],0x0
005efdcb  MOV dword ptr [EBP + -0x38],0x0
005efdd2  MOV EAX,dword ptr [EBP + 0xffffff14]
005efdd8  MOV EDX,dword ptr [EAX]
005efdda  MOV ECX,dword ptr [EBP + 0xffffff14]
005efde0  MOV EAX,dword ptr [EDX + 0xbc]
005efde6  CALL EAX
005efde8  MOVZX ECX,AL
005efdeb  TEST ECX,ECX
005efded  JNZ 0x005efdf4
005efdef  JMP 0x005f0a2a
005efdf4  MOV EDX,dword ptr [EBP + 0x8]
005efdf7  PUSH EDX
005efdf8  MOV ECX,dword ptr [EBP + 0xffffff14]
005efdfe  CALL 0x005f6820
005efe03  MOV EAX,dword ptr [EBP + 0xffffff14]
005efe09  MOV ECX,dword ptr [EAX + 0x1c]
005efe0c  MOV dword ptr [EBP + 0xffffff30],ECX
005efe12  MOV EDX,dword ptr [EBP + 0xffffff14]
005efe18  MOV EAX,dword ptr [EDX + 0x18]
005efe1b  MOV dword ptr [EBP + 0xffffff34],EAX
005efe21  MOV ECX,dword ptr [EBP + 0xffffff14]
005efe27  MOV EDX,dword ptr [ECX + 0x14]
005efe2a  MOV dword ptr [EBP + 0xffffff38],EDX
005efe30  MOV EAX,dword ptr [EBP + 0xffffff14]
005efe36  MOV ECX,dword ptr [EAX + 0x10]
005efe39  MOV dword ptr [EBP + 0xffffff3c],ECX
005efe3f  MOV EDX,dword ptr [EBP + 0xffffff3c]
005efe45  MOV dword ptr [EBP + 0xffffff50],EDX
005efe4b  MOV EAX,dword ptr [EBP + 0xffffff38]
005efe51  MOV dword ptr [EBP + 0xffffff54],EAX
005efe57  MOV ECX,dword ptr [EBP + 0xffffff34]
005efe5d  MOV dword ptr [EBP + 0xffffff58],ECX
005efe63  MOV EDX,dword ptr [EBP + 0xffffff30]
005efe69  MOV dword ptr [EBP + 0xffffff5c],EDX
005efe6f  MOV EAX,dword ptr [EBP + 0x8]
005efe72  PUSH EAX
005efe73  LEA ECX,[EBP + 0xffffff50]
005efe79  PUSH ECX
005efe7a  LEA EDX,[EBP + 0xffffff50]
005efe80  PUSH EDX
005efe81  CALL 0x005ec3a0
005efe86  ADD ESP,0xc
005efe89  MOV EAX,dword ptr [EBP + 0xffffff50]
005efe8f  CMP EAX,dword ptr [EBP + 0xffffff58]
005efe95  JL 0x005efea0
005efe97  MOV byte ptr [EBP + 0xffffff2f],0x1
005efe9e  JMP 0x005efebe
005efea0  MOV ECX,dword ptr [EBP + 0xffffff54]
005efea6  CMP ECX,dword ptr [EBP + 0xffffff5c]
005efeac  JL 0x005efeb7
005efeae  MOV byte ptr [EBP + 0xffffff2f],0x1
005efeb5  JMP 0x005efebe
005efeb7  MOV byte ptr [EBP + 0xffffff2f],0x0
005efebe  MOVZX EDX,byte ptr [EBP + 0xffffff2f]
005efec5  TEST EDX,EDX
005efec7  JZ 0x005efece
005efec9  JMP 0x005f0a2a
005efece  LEA EAX,[EBP + -0x50]
005efed1  PUSH EAX
005efed2  LEA ECX,[EBP + -0x3c]
005efed5  PUSH ECX
005efed6  MOV EDX,dword ptr [EBP + 0xffffff14]
005efedc  MOV EAX,dword ptr [EDX + 0x5c]
005efedf  PUSH EAX
005efee0  MOV ECX,dword ptr [EBP + 0xffffff14]
005efee6  CALL 0x005eedc0
005efeeb  MOV ECX,dword ptr [EBP + 0xffffff14]
005efef1  MOV EDX,dword ptr [ECX + 0x5c]
005efef4  MOVZX EAX,byte ptr [EDX]
005efef7  TEST EAX,EAX
005efef9  JZ 0x005eff82
005efeff  MOV ECX,dword ptr [EBP + 0xffffff14]
005eff05  CALL 0x005f5590
005eff0a  CMP dword ptr [EBP + -0x50],EAX
005eff0d  JG 0x005eff1f
005eff0f  MOV ECX,dword ptr [EBP + 0xffffff14]
005eff15  CALL 0x005f5550
005eff1a  CMP dword ptr [EBP + -0x3c],EAX
005eff1d  JLE 0x005eff82
005eff1f  MOV ECX,dword ptr [EBP + 0xffffff14]
005eff25  CALL 0x005f5590
005eff2a  MOV ECX,dword ptr [EBP + 0xffffff14]
005eff30  MOVSX EDX,word ptr [ECX + 0x96]
005eff37  ADD EAX,EDX
005eff39  CMP dword ptr [EBP + -0x50],EAX
005eff3c  JL 0x005eff67
005eff3e  MOV ECX,dword ptr [EBP + 0xffffff14]
005eff44  CALL 0x005f5590
005eff49  CMP dword ptr [EBP + -0x50],EAX
005eff4c  JLE 0x005eff65
005eff4e  MOV EAX,dword ptr [EBP + 0xffffff14]
005eff54  MOVSX ECX,word ptr [EAX + 0x96]
005eff5b  MOV EDX,dword ptr [EBP + -0x50]
005eff5e  SUB EDX,ECX
005eff60  MOV dword ptr [EBP + -0x50],EDX
005eff63  JMP 0x005eff3e
005eff65  JMP 0x005eff82
005eff67  MOV ECX,dword ptr [EBP + 0xffffff14]
005eff6d  CALL 0x005f5590
005eff72  CMP dword ptr [EBP + -0x50],EAX
005eff75  JLE 0x005eff82
005eff77  MOV EAX,dword ptr [EBP + -0x50]
005eff7a  SUB EAX,0x1
005eff7d  MOV dword ptr [EBP + -0x50],EAX
005eff80  JMP 0x005eff67
005eff82  MOV ECX,dword ptr [EBP + 0xffffff14]
005eff88  MOV EDX,dword ptr [ECX + 0x70]
005eff8b  AND EDX,0x4
005eff8e  JZ 0x005eff97
005eff90  MOV dword ptr [EBP + -0x1c],0x0
005eff97  MOV EAX,dword ptr [EBP + 0xffffff14]
005eff9d  MOV ECX,dword ptr [EAX + 0x70]
005effa0  AND ECX,0x8
005effa3  JZ 0x005effb4
005effa5  MOV EDX,dword ptr [EBP + 0xffffff14]
005effab  MOV EAX,dword ptr [EDX + 0x6c]
005effae  SUB EAX,dword ptr [EBP + -0x50]
005effb1  MOV dword ptr [EBP + -0x1c],EAX
005effb4  MOV ECX,dword ptr [EBP + 0xffffff14]
005effba  MOV EDX,dword ptr [ECX + 0x70]
005effbd  AND EDX,0x10
005effc0  JZ 0x005effd6
005effc2  MOV EAX,dword ptr [EBP + 0xffffff14]
005effc8  MOV EAX,dword ptr [EAX + 0x6c]
005effcb  SUB EAX,dword ptr [EBP + -0x50]
005effce  CDQ
005effcf  SUB EAX,EDX
005effd1  SAR EAX,0x1
005effd3  MOV dword ptr [EBP + -0x1c],EAX
005effd6  MOV ECX,dword ptr [EBP + 0xffffff14]
005effdc  MOV EDX,dword ptr [EBP + -0x1c]
005effdf  ADD EDX,dword ptr [ECX + 0x78]
005effe2  MOV dword ptr [EBP + -0x1c],EDX
005effe5  MOV EAX,dword ptr [EBP + -0x1c]
005effe8  MOV dword ptr [EBP + -0x38],EAX
005effeb  MOV dword ptr [EBP + -0x10],0x0
005efff2  MOV dword ptr [EBP + -0xc],0x0
005efff9  MOV ECX,dword ptr [EBP + 0xffffff14]
005effff  CALL 0x005f5550
005f0004  MOV dword ptr [EBP + -0x8],EAX
005f0007  MOV ECX,dword ptr [EBP + 0xffffff14]
005f000d  CALL 0x005f5590
005f0012  MOV dword ptr [EBP + -0x4],EAX
005f0015  MOV dword ptr [EBP + -0x30],0x0
005f001c  JMP 0x005f0024
005f001e  MOV ECX,dword ptr [EBP + -0x74]
005f0021  MOV dword ptr [EBP + -0x30],ECX
005f0024  MOV EDX,dword ptr [EBP + 0xffffff14]
005f002a  MOV EAX,dword ptr [EDX + 0x5c]
005f002d  MOV ECX,dword ptr [EBP + -0x30]
005f0030  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005f0034  TEST EDX,EDX
005f0036  JZ 0x005f0838
005f003c  PUSH 0x0
005f003e  LEA EAX,[EBP + -0x34]
005f0041  PUSH EAX
005f0042  LEA ECX,[EBP + -0x74]
005f0045  PUSH ECX
005f0046  LEA EDX,[EBP + -0x78]
005f0049  PUSH EDX
005f004a  MOV EAX,dword ptr [EBP + -0x30]
005f004d  PUSH EAX
005f004e  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0054  CALL 0x005eebf0
005f0059  CMP dword ptr [EBP + 0xffffff4c],0x0
005f0060  JLE 0x005f00a6
005f0062  LEA ECX,[EBP + -0x50]
005f0065  PUSH ECX
005f0066  LEA EDX,[EBP + -0x3c]
005f0069  PUSH EDX
005f006a  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0070  MOV ECX,dword ptr [EAX + 0x5c]
005f0073  ADD ECX,dword ptr [EBP + -0x78]
005f0076  PUSH ECX
005f0077  MOV ECX,dword ptr [EBP + 0xffffff14]
005f007d  CALL 0x005eedc0
005f0082  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0088  CALL 0x005f5590
005f008d  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0093  MOVSX ECX,word ptr [EDX + 0x96]
005f009a  ADD ECX,dword ptr [EBP + -0x1c]
005f009d  CMP EAX,ECX
005f009f  JGE 0x005f00a6
005f00a1  JMP 0x005f0838
005f00a6  MOV EDX,dword ptr [EBP + 0xffffff14]
005f00ac  MOV EAX,dword ptr [EDX + 0x5c]
005f00af  MOV ECX,dword ptr [EBP + -0x78]
005f00b2  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005f00b6  TEST EDX,EDX
005f00b8  JNZ 0x005f00bf
005f00ba  JMP 0x005f0838
005f00bf  MOV EAX,dword ptr [EBP + 0xffffff14]
005f00c5  MOV ECX,dword ptr [EAX + 0x70]
005f00c8  AND ECX,0x1
005f00cb  JZ 0x005f0101
005f00cd  MOV dword ptr [EBP + 0xffffff78],0x0
005f00d7  MOV EDX,dword ptr [EBP + 0xffffff14]
005f00dd  MOVSX EAX,word ptr [EDX + 0x94]
005f00e4  MOV ECX,dword ptr [EBP + 0xffffff14]
005f00ea  ADD EAX,dword ptr [ECX + 0xa8]
005f00f0  CDQ
005f00f1  SUB EAX,EDX
005f00f3  SAR EAX,0x1
005f00f5  ADD EAX,dword ptr [EBP + 0xffffff78]
005f00fb  MOV dword ptr [EBP + 0xffffff78],EAX
005f0101  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0107  MOV EAX,dword ptr [EDX + 0x70]
005f010a  AND EAX,0x2
005f010d  JZ 0x005f0146
005f010f  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0115  MOV EDX,dword ptr [ECX + 0x68]
005f0118  SUB EDX,dword ptr [EBP + -0x34]
005f011b  MOV dword ptr [EBP + 0xffffff78],EDX
005f0121  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0127  MOVSX ECX,word ptr [EAX + 0x94]
005f012e  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0134  ADD ECX,dword ptr [EDX + 0xa8]
005f013a  ADD ECX,dword ptr [EBP + 0xffffff78]
005f0140  MOV dword ptr [EBP + 0xffffff78],ECX
005f0146  MOV EAX,dword ptr [EBP + 0xffffff14]
005f014c  MOV ECX,dword ptr [EAX + 0x70]
005f014f  AND ECX,0x20
005f0152  JZ 0x005f016b
005f0154  MOV EDX,dword ptr [EBP + 0xffffff14]
005f015a  MOV EAX,dword ptr [EDX + 0x68]
005f015d  SUB EAX,dword ptr [EBP + -0x34]
005f0160  CDQ
005f0161  SUB EAX,EDX
005f0163  SAR EAX,0x1
005f0165  MOV dword ptr [EBP + 0xffffff78],EAX
005f016b  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0171  MOV ECX,dword ptr [EBP + 0xffffff78]
005f0177  ADD ECX,dword ptr [EAX + 0x74]
005f017a  MOV dword ptr [EBP + 0xffffff78],ECX
005f0180  MOV EDX,dword ptr [EBP + 0xffffff48]
005f0186  CMP EDX,dword ptr [EBP + -0x78]
005f0189  JGE 0x005f01c5
005f018b  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0191  MOV ECX,dword ptr [EBP + 0xffffff48]
005f0197  CMP ECX,dword ptr [EAX + 0xa0]
005f019d  JNZ 0x005f01b4
005f019f  MOV EDX,dword ptr [EBP + -0x80]
005f01a2  MOV dword ptr [EBP + -0x14],EDX
005f01a5  MOV EAX,dword ptr [EBP + -0x7c]
005f01a8  MOV dword ptr [EBP + -0x38],EAX
005f01ab  MOV ECX,dword ptr [EBP + -0x18]
005f01ae  MOV dword ptr [EBP + 0xffffff7c],ECX
005f01b4  MOV EDX,dword ptr [EBP + 0xffffff48]
005f01ba  ADD EDX,0x1
005f01bd  MOV dword ptr [EBP + 0xffffff48],EDX
005f01c3  JMP 0x005f0180
005f01c5  MOV EAX,dword ptr [EBP + -0x78]
005f01c8  MOV dword ptr [EBP + 0xffffff48],EAX
005f01ce  JMP 0x005f01df
005f01d0  MOV ECX,dword ptr [EBP + 0xffffff48]
005f01d6  ADD ECX,0x1
005f01d9  MOV dword ptr [EBP + 0xffffff48],ECX
005f01df  MOV EDX,dword ptr [EBP + 0xffffff48]
005f01e5  CMP EDX,dword ptr [EBP + -0x74]
005f01e8  JGE 0x005f07d1
005f01ee  MOV EAX,dword ptr [EBP + 0xffffff14]
005f01f4  MOV ECX,dword ptr [EAX + 0x5c]
005f01f7  MOV EDX,dword ptr [EBP + 0xffffff48]
005f01fd  MOV AL,byte ptr [ECX + EDX*0x1]
005f0200  PUSH EAX
005f0201  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0207  CALL 0x005f0a30
005f020c  MOVZX ECX,AL
005f020f  MOV dword ptr [EBP + 0xffffff70],ECX
005f0215  PUSH 0x10
005f0217  PUSH 0x0
005f0219  LEA EDX,[EBP + -0x4c]
005f021c  PUSH EDX
005f021d  CALL 0x00686fa2
005f0222  ADD ESP,0xc
005f0225  MOV EAX,dword ptr [EBP + 0xffffff14]
005f022b  MOV ECX,dword ptr [EAX + 0x64]
005f022e  MOV dword ptr [EBP + 0xffffff10],ECX
005f0234  CMP dword ptr [EBP + 0xffffff10],0x1
005f023b  JZ 0x005f025c
005f023d  CMP dword ptr [EBP + 0xffffff10],0x2
005f0244  JZ 0x005f02eb
005f024a  CMP dword ptr [EBP + 0xffffff10],0x3
005f0251  JZ 0x005f035d
005f0257  JMP 0x005f03f8
005f025c  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0262  MOV EAX,dword ptr [EDX + 0x98]
005f0268  MOV ECX,dword ptr [EBP + 0xffffff70]
005f026e  MOVZX EDX,word ptr [EAX + ECX*0x8 + 0x2]
005f0273  MOV dword ptr [EBP + -0x48],EDX
005f0276  MOV EAX,dword ptr [EBP + 0xffffff14]
005f027c  MOV ECX,dword ptr [EAX + 0x98]
005f0282  MOV EDX,dword ptr [EBP + 0xffffff70]
005f0288  MOVZX EAX,word ptr [ECX + EDX*0x8 + 0x4]
005f028d  MOV dword ptr [EBP + -0x4c],EAX
005f0290  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0296  MOV EDX,dword ptr [ECX + 0x98]
005f029c  MOV EAX,dword ptr [EBP + 0xffffff70]
005f02a2  MOVZX ECX,word ptr [EDX + EAX*0x8 + 0x6]
005f02a7  MOV EDX,dword ptr [EBP + 0xffffff14]
005f02ad  MOVZX EAX,word ptr [EDX + 0x92]
005f02b4  LEA ECX,[ECX + EAX*0x1 + 0x1]
005f02b8  MOV dword ptr [EBP + -0x40],ECX
005f02bb  MOV EDX,dword ptr [EBP + 0xffffff14]
005f02c1  MOV EAX,dword ptr [EDX + 0x98]
005f02c7  MOV ECX,dword ptr [EBP + 0xffffff70]
005f02cd  MOVZX EDX,word ptr [EAX + ECX*0x8 + 0x8]
005f02d2  MOV EAX,dword ptr [EBP + 0xffffff14]
005f02d8  MOVZX ECX,word ptr [EAX + 0x90]
005f02df  LEA EDX,[EDX + ECX*0x1 + 0x1]
005f02e3  MOV dword ptr [EBP + -0x44],EDX
005f02e6  JMP 0x005f03f8
005f02eb  MOV EAX,dword ptr [EBP + 0xffffff70]
005f02f1  SUB EAX,0x20
005f02f4  MOV dword ptr [EBP + 0xffffff74],EAX
005f02fa  JNS 0x005f0306
005f02fc  MOV dword ptr [EBP + 0xffffff74],0x0
005f0306  MOV dword ptr [EBP + -0x4c],0x0
005f030d  MOV dword ptr [EBP + -0x48],0x0
005f0314  PUSH -0x1
005f0316  MOV ECX,dword ptr [EBP + 0xffffff14]
005f031c  MOV EDX,dword ptr [ECX + 0x5c]
005f031f  MOV EAX,dword ptr [EBP + 0xffffff48]
005f0325  MOV CL,byte ptr [EDX + EAX*0x1]
005f0328  PUSH ECX
005f0329  MOV ECX,dword ptr [EBP + 0xffffff14]
005f032f  CALL 0x005ee950
005f0334  MOV dword ptr [EBP + -0x44],EAX
005f0337  MOV EDX,dword ptr [EBP + 0xffffff14]
005f033d  MOV EAX,dword ptr [EDX + 0x5c]
005f0340  MOV ECX,dword ptr [EBP + 0xffffff48]
005f0346  MOV DL,byte ptr [EAX + ECX*0x1]
005f0349  PUSH EDX
005f034a  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0350  CALL 0x005eeaf0
005f0355  MOV dword ptr [EBP + -0x40],EAX
005f0358  JMP 0x005f03f8
005f035d  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0363  MOV ECX,dword ptr [EAX + 0x5c]
005f0366  MOV EDX,dword ptr [EBP + 0xffffff48]
005f036c  MOVZX EAX,byte ptr [ECX + EDX*0x1]
005f0370  MOV dword ptr [EBP + 0xffffff74],EAX
005f0376  MOV dword ptr [EBP + -0x4c],0x0
005f037d  MOV dword ptr [EBP + -0x48],0x0
005f0384  MOV ECX,dword ptr [EBP + 0xffffff14]
005f038a  MOV EDX,dword ptr [ECX + 0x5c]
005f038d  MOV EAX,dword ptr [EBP + 0xffffff48]
005f0393  MOVZX ECX,byte ptr [EDX + EAX*0x1]
005f0397  CMP ECX,0xd
005f039a  JZ 0x005f03f8
005f039c  MOV EDX,dword ptr [EBP + 0xffffff14]
005f03a2  MOV EAX,dword ptr [EDX + 0x5c]
005f03a5  MOV ECX,dword ptr [EBP + 0xffffff48]
005f03ab  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005f03af  CMP EDX,0xa
005f03b2  JZ 0x005f03f8
005f03b4  PUSH -0x1
005f03b6  MOV EAX,dword ptr [EBP + 0xffffff14]
005f03bc  MOV ECX,dword ptr [EAX + 0x5c]
005f03bf  MOV EDX,dword ptr [EBP + 0xffffff48]
005f03c5  MOV AL,byte ptr [ECX + EDX*0x1]
005f03c8  PUSH EAX
005f03c9  MOV ECX,dword ptr [EBP + 0xffffff14]
005f03cf  CALL 0x005ee950
005f03d4  MOV dword ptr [EBP + -0x44],EAX
005f03d7  MOV ECX,dword ptr [EBP + 0xffffff14]
005f03dd  MOV EDX,dword ptr [ECX + 0x5c]
005f03e0  MOV EAX,dword ptr [EBP + 0xffffff48]
005f03e6  MOV CL,byte ptr [EDX + EAX*0x1]
005f03e9  PUSH ECX
005f03ea  MOV ECX,dword ptr [EBP + 0xffffff14]
005f03f0  CALL 0x005eeaf0
005f03f5  MOV dword ptr [EBP + -0x40],EAX
005f03f8  MOV EDX,dword ptr [EBP + 0xffffff14]
005f03fe  CMP dword ptr [EDX + 0x64],0x3
005f0402  JNZ 0x005f0505
005f0408  MOV EAX,dword ptr [EBP + 0xffffff14]
005f040e  MOVZX ECX,byte ptr [EAX + 0xcc]
005f0415  TEST ECX,ECX
005f0417  JZ 0x005f0505
005f041d  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0423  CMP dword ptr [EDX + 0xb0],0x0
005f042a  JZ 0x005f0505
005f0430  MOV EAX,dword ptr [EBP + 0xffffff48]
005f0436  CMP EAX,dword ptr [EBP + -0x78]
005f0439  JLE 0x005f0505
005f043f  LEA ECX,[EBP + 0xffffff40]
005f0445  PUSH ECX
005f0446  PUSH 0x0
005f0448  MOV EDX,dword ptr [EBP + 0xffffff14]
005f044e  MOV EAX,dword ptr [EDX + 0x5c]
005f0451  MOV ECX,dword ptr [EBP + 0xffffff48]
005f0457  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005f045b  PUSH EDX
005f045c  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0462  MOV ECX,dword ptr [EAX + 0xbc]
005f0468  PUSH ECX
005f0469  CALL 0x00686c5a
005f046e  ADD ESP,0x8
005f0471  PUSH EAX
005f0472  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0478  MOV EAX,dword ptr [EDX + 0x5c]
005f047b  MOV ECX,dword ptr [EBP + 0xffffff48]
005f0481  MOVZX EDX,byte ptr [EAX + ECX*0x1 + -0x1]
005f0486  PUSH EDX
005f0487  MOV EAX,dword ptr [EBP + 0xffffff14]
005f048d  MOV ECX,dword ptr [EAX + 0xbc]
005f0493  PUSH ECX
005f0494  CALL 0x00686c5a
005f0499  ADD ESP,0x8
005f049c  PUSH EAX
005f049d  MOV EDX,dword ptr [EBP + 0xffffff14]
005f04a3  MOV EAX,dword ptr [EDX + 0xbc]
005f04a9  PUSH EAX
005f04aa  CALL 0x00686c54
005f04af  ADD ESP,0x14
005f04b2  XOR EAX,EAX
005f04b4  CMP dword ptr [EBP + 0xffffff40],0x0
005f04bb  SETL AL
005f04be  SUB EAX,0x1
005f04c1  AND EAX,0x40
005f04c4  ADD EAX,-0x20
005f04c7  ADD EAX,dword ptr [EBP + 0xffffff40]
005f04cd  CDQ
005f04ce  AND EDX,0x3f
005f04d1  ADD EAX,EDX
005f04d3  SAR EAX,0x6
005f04d6  MOV ECX,dword ptr [EBP + 0xffffff14]
005f04dc  MOV EDX,dword ptr [ECX + 0x5c]
005f04df  MOV ECX,dword ptr [EBP + 0xffffff48]
005f04e5  MOVZX EDX,byte ptr [EDX + ECX*0x1]
005f04e9  MOV ECX,dword ptr [EBP + 0xffffff14]
005f04ef  MOVSX EDX,byte ptr [ECX + EDX*0x1 + 0xd0]
005f04f7  ADD EDX,dword ptr [EBP + 0xffffff78]
005f04fd  ADD EDX,EAX
005f04ff  MOV dword ptr [EBP + 0xffffff78],EDX
005f0505  MOV EAX,dword ptr [EBP + 0xffffff78]
005f050b  MOV dword ptr [EBP + -0x10],EAX
005f050e  MOV ECX,dword ptr [EBP + -0x1c]
005f0511  MOV dword ptr [EBP + -0xc],ECX
005f0514  MOV EDX,dword ptr [EBP + -0x44]
005f0517  SUB EDX,dword ptr [EBP + -0x4c]
005f051a  ADD EDX,dword ptr [EBP + 0xffffff78]
005f0520  MOV dword ptr [EBP + -0x8],EDX
005f0523  MOV EAX,dword ptr [EBP + -0x40]
005f0526  SUB EAX,dword ptr [EBP + -0x48]
005f0529  ADD EAX,dword ptr [EBP + -0xc]
005f052c  MOV dword ptr [EBP + -0x4],EAX
005f052f  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0535  MOV EDX,dword ptr [ECX + 0x14]
005f0538  MOV dword ptr [EBP + 0xffffff24],EDX
005f053e  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0544  MOV ECX,dword ptr [EAX + 0x10]
005f0547  MOV dword ptr [EBP + 0xffffff28],ECX
005f054d  MOV EDX,dword ptr [EBP + -0x10]
005f0550  ADD EDX,dword ptr [EBP + 0xffffff28]
005f0556  MOV dword ptr [EBP + -0x10],EDX
005f0559  MOV EAX,dword ptr [EBP + -0xc]
005f055c  ADD EAX,dword ptr [EBP + 0xffffff24]
005f0562  MOV dword ptr [EBP + -0xc],EAX
005f0565  MOV ECX,dword ptr [EBP + -0x8]
005f0568  ADD ECX,dword ptr [EBP + 0xffffff28]
005f056e  MOV dword ptr [EBP + -0x8],ECX
005f0571  MOV EDX,dword ptr [EBP + -0x4]
005f0574  ADD EDX,dword ptr [EBP + 0xffffff24]
005f057a  MOV dword ptr [EBP + -0x4],EDX
005f057d  MOV EAX,dword ptr [EBP + -0x10]
005f0580  MOV dword ptr [EBP + -0x2c],EAX
005f0583  MOV ECX,dword ptr [EBP + -0xc]
005f0586  MOV dword ptr [EBP + -0x28],ECX
005f0589  MOV EDX,dword ptr [EBP + -0x8]
005f058c  MOV dword ptr [EBP + -0x24],EDX
005f058f  MOV EAX,dword ptr [EBP + -0x4]
005f0592  MOV dword ptr [EBP + -0x20],EAX
005f0595  MOV ECX,dword ptr [EBP + 0xffffff50]
005f059b  MOV dword ptr [EBP + -0x70],ECX
005f059e  MOV EDX,dword ptr [EBP + 0xffffff54]
005f05a4  MOV dword ptr [EBP + -0x6c],EDX
005f05a7  MOV EAX,dword ptr [EBP + 0xffffff58]
005f05ad  MOV dword ptr [EBP + -0x68],EAX
005f05b0  MOV ECX,dword ptr [EBP + 0xffffff5c]
005f05b6  MOV dword ptr [EBP + -0x64],ECX
005f05b9  MOV EDX,dword ptr [EBP + -0x4c]
005f05bc  MOV dword ptr [EBP + 0xffffff60],EDX
005f05c2  MOV EAX,dword ptr [EBP + -0x48]
005f05c5  MOV dword ptr [EBP + 0xffffff64],EAX
005f05cb  MOV ECX,dword ptr [EBP + -0x44]
005f05ce  MOV dword ptr [EBP + 0xffffff68],ECX
005f05d4  MOV EDX,dword ptr [EBP + -0x40]
005f05d7  MOV dword ptr [EBP + 0xffffff6c],EDX
005f05dd  MOV EAX,dword ptr [EBP + -0x4c]
005f05e0  MOV dword ptr [EBP + -0x60],EAX
005f05e3  MOV ECX,dword ptr [EBP + -0x48]
005f05e6  MOV dword ptr [EBP + -0x5c],ECX
005f05e9  MOV EDX,dword ptr [EBP + -0x44]
005f05ec  MOV dword ptr [EBP + -0x58],EDX
005f05ef  MOV EAX,dword ptr [EBP + -0x40]
005f05f2  MOV dword ptr [EBP + -0x54],EAX
005f05f5  LEA ECX,[EBP + -0x60]
005f05f8  PUSH ECX
005f05f9  LEA EDX,[EBP + 0xffffff60]
005f05ff  PUSH EDX
005f0600  LEA EAX,[EBP + -0x70]
005f0603  PUSH EAX
005f0604  LEA ECX,[EBP + -0x2c]
005f0607  PUSH ECX
005f0608  CALL 0x00624a70
005f060d  ADD ESP,0x10
005f0610  MOVZX EDX,AL
005f0613  TEST EDX,EDX
005f0615  JZ 0x005f072d
005f061b  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0621  MOV ECX,dword ptr [EAX + 0x4]
005f0624  CALL 0x005f84f0
005f0629  MOV dword ptr [EBP + 0xffffff1c],EAX
005f062f  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0635  MOV ECX,dword ptr [ECX + 0x4]
005f0638  CALL 0x005f84d0
005f063d  MOV dword ptr [EBP + 0xffffff20],EAX
005f0643  MOV EDX,dword ptr [EBP + -0x2c]
005f0646  ADD EDX,dword ptr [EBP + 0xffffff20]
005f064c  MOV dword ptr [EBP + -0x2c],EDX
005f064f  MOV EAX,dword ptr [EBP + -0x28]
005f0652  ADD EAX,dword ptr [EBP + 0xffffff1c]
005f0658  MOV dword ptr [EBP + -0x28],EAX
005f065b  MOV ECX,dword ptr [EBP + -0x24]
005f065e  ADD ECX,dword ptr [EBP + 0xffffff20]
005f0664  MOV dword ptr [EBP + -0x24],ECX
005f0667  MOV EDX,dword ptr [EBP + -0x20]
005f066a  ADD EDX,dword ptr [EBP + 0xffffff1c]
005f0670  MOV dword ptr [EBP + -0x20],EDX
005f0673  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0679  MOV ECX,dword ptr [EAX + 0x4]
005f067c  MOV EDX,dword ptr [ECX + 0x1a8]
005f0682  MOV dword ptr [EBP + 0xffffff18],EDX
005f0688  PUSH 0x0
005f068a  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0690  CMP dword ptr [EAX + 0xac],0x0
005f0697  SETNZ CL
005f069a  PUSH ECX
005f069b  PUSH 0x1
005f069d  MOV EDX,dword ptr [EBP + 0xffffff14]
005f06a3  MOVZX EAX,byte ptr [EDX + 0x9c]
005f06aa  PUSH EAX
005f06ab  SUB ESP,0x10
005f06ae  MOV ECX,ESP
005f06b0  MOV EDX,dword ptr [EBP + 0xffffff60]
005f06b6  MOV dword ptr [ECX],EDX
005f06b8  MOV EAX,dword ptr [EBP + 0xffffff64]
005f06be  MOV dword ptr [ECX + 0x4],EAX
005f06c1  MOV EDX,dword ptr [EBP + 0xffffff68]
005f06c7  MOV dword ptr [ECX + 0x8],EDX
005f06ca  MOV EAX,dword ptr [EBP + 0xffffff6c]
005f06d0  MOV dword ptr [ECX + 0xc],EAX
005f06d3  SUB ESP,0x10
005f06d6  MOV ECX,ESP
005f06d8  MOV EDX,dword ptr [EBP + -0x2c]
005f06db  MOV dword ptr [ECX],EDX
005f06dd  MOV EAX,dword ptr [EBP + -0x28]
005f06e0  MOV dword ptr [ECX + 0x4],EAX
005f06e3  MOV EDX,dword ptr [EBP + -0x24]
005f06e6  MOV dword ptr [ECX + 0x8],EDX
005f06e9  MOV EAX,dword ptr [EBP + -0x20]
005f06ec  MOV dword ptr [ECX + 0xc],EAX
005f06ef  MOV ECX,dword ptr [EBP + 0xffffff18]
005f06f5  MOV EDX,dword ptr [ECX + 0x50]
005f06f8  PUSH EDX
005f06f9  PUSH 0x0
005f06fb  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0701  MOV ECX,dword ptr [EAX + 0xb0]
005f0707  CALL 0x006163e0
005f070c  SUB EAX,0x1
005f070f  NEG EAX
005f0711  SBB EAX,EAX
005f0713  AND EAX,dword ptr [EBP + 0xffffff74]
005f0719  PUSH EAX
005f071a  PUSH 0x0
005f071c  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0722  MOV ECX,dword ptr [ECX + 0xb0]
005f0728  CALL 0x00616510
005f072d  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0733  MOV EAX,dword ptr [EBP + 0xffffff48]
005f0739  CMP EAX,dword ptr [EDX + 0xa0]
005f073f  JNZ 0x005f0778
005f0741  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0747  MOVSX EDX,byte ptr [ECX + 0xa6]
005f074e  TEST EDX,EDX
005f0750  JZ 0x005f075d
005f0752  MOV EAX,dword ptr [EBP + 0xffffff48]
005f0758  CMP EAX,dword ptr [EBP + -0x78]
005f075b  JZ 0x005f0778
005f075d  MOV ECX,dword ptr [EBP + 0xffffff78]
005f0763  ADD ECX,0x1
005f0766  MOV dword ptr [EBP + -0x14],ECX
005f0769  MOV EDX,dword ptr [EBP + -0x1c]
005f076c  MOV dword ptr [EBP + -0x38],EDX
005f076f  MOV EAX,dword ptr [EBP + -0x34]
005f0772  MOV dword ptr [EBP + 0xffffff7c],EAX
005f0778  MOV ECX,dword ptr [EBP + -0x44]
005f077b  SUB ECX,dword ptr [EBP + -0x4c]
005f077e  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0784  MOVZX EAX,word ptr [EDX + 0x90]
005f078b  SUB ECX,EAX
005f078d  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0793  MOVSX EAX,word ptr [EDX + 0x94]
005f079a  ADD ECX,EAX
005f079c  MOV EDX,dword ptr [EBP + 0xffffff14]
005f07a2  ADD ECX,dword ptr [EDX + 0xa8]
005f07a8  ADD ECX,dword ptr [EBP + 0xffffff78]
005f07ae  MOV dword ptr [EBP + 0xffffff78],ECX
005f07b4  MOV EAX,dword ptr [EBP + 0xffffff78]
005f07ba  ADD EAX,0x1
005f07bd  MOV dword ptr [EBP + -0x80],EAX
005f07c0  MOV ECX,dword ptr [EBP + -0x1c]
005f07c3  MOV dword ptr [EBP + -0x7c],ECX
005f07c6  MOV EDX,dword ptr [EBP + -0x34]
005f07c9  MOV dword ptr [EBP + -0x18],EDX
005f07cc  JMP 0x005f01d0
005f07d1  MOV EAX,dword ptr [EBP + 0xffffff14]
005f07d7  MOV ECX,dword ptr [EBP + 0xffffff48]
005f07dd  CMP ECX,dword ptr [EAX + 0xa0]
005f07e3  JNZ 0x005f0811
005f07e5  MOV EDX,dword ptr [EBP + 0xffffff14]
005f07eb  MOVSX EAX,byte ptr [EDX + 0xa6]
005f07f2  TEST EAX,EAX
005f07f4  JZ 0x005f0811
005f07f6  MOV ECX,dword ptr [EBP + 0xffffff78]
005f07fc  ADD ECX,0x1
005f07ff  MOV dword ptr [EBP + -0x14],ECX
005f0802  MOV EDX,dword ptr [EBP + -0x1c]
005f0805  MOV dword ptr [EBP + -0x38],EDX
005f0808  MOV EAX,dword ptr [EBP + -0x34]
005f080b  MOV dword ptr [EBP + 0xffffff7c],EAX
005f0811  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0817  MOVSX EDX,word ptr [ECX + 0x96]
005f081e  ADD EDX,dword ptr [EBP + -0x1c]
005f0821  MOV dword ptr [EBP + -0x1c],EDX
005f0824  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f082a  ADD EAX,0x1
005f082d  MOV dword ptr [EBP + 0xffffff4c],EAX
005f0833  JMP 0x005f001e
005f0838  MOV ECX,dword ptr [EBP + 0xffffff14]
005f083e  MOV EDX,dword ptr [ECX + 0xa0]
005f0844  CMP EDX,dword ptr [EBP + 0xffffff48]
005f084a  JL 0x005f098b
005f0850  CMP dword ptr [EBP + 0xffffff48],0x0
005f0857  JZ 0x005f098b
005f085d  MOV EAX,dword ptr [EBP + 0xffffff78]
005f0863  ADD EAX,0x1
005f0866  MOV dword ptr [EBP + -0x14],EAX
005f0869  MOV ECX,dword ptr [EBP + 0xffffff14]
005f086f  MOV EDX,dword ptr [ECX + 0x5c]
005f0872  MOV EAX,dword ptr [EBP + 0xffffff48]
005f0878  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x1]
005f087d  CMP ECX,0xa
005f0880  JNZ 0x005f08e5
005f0882  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0888  MOVSX EAX,word ptr [EDX + 0x96]
005f088f  ADD EAX,dword ptr [EBP + -0x1c]
005f0892  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0898  CMP EAX,dword ptr [ECX + 0x6c]
005f089b  JLE 0x005f08e5
005f089d  MOV EDX,dword ptr [EBP + 0xffffff14]
005f08a3  MOV EAX,dword ptr [EDX + 0x5c]
005f08a6  MOV ECX,dword ptr [EBP + 0xffffff48]
005f08ac  MOV byte ptr [ECX + EAX*0x1 + -0x2],0x0
005f08b1  MOV EDX,dword ptr [EBP + 0xffffff14]
005f08b7  MOV EAX,dword ptr [EDX + 0x5c]
005f08ba  MOV ECX,dword ptr [EBP + 0xffffff48]
005f08c0  MOV byte ptr [ECX + EAX*0x1 + -0x1],0x0
005f08c5  MOV EDX,dword ptr [EBP + 0xffffff14]
005f08cb  MOV EAX,dword ptr [EDX + 0x5c]
005f08ce  PUSH EAX
005f08cf  MOV ECX,dword ptr [EBP + 0xffffff14]
005f08d5  MOV EDX,dword ptr [ECX]
005f08d7  MOV ECX,dword ptr [EBP + 0xffffff14]
005f08dd  MOV EAX,dword ptr [EDX + 0xb4]
005f08e3  CALL EAX
005f08e5  MOV ECX,dword ptr [EBP + 0xffffff14]
005f08eb  MOV EDX,dword ptr [ECX + 0x5c]
005f08ee  MOV EAX,dword ptr [EBP + 0xffffff48]
005f08f4  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x1]
005f08f9  CMP ECX,0xa
005f08fc  JNZ 0x005f096d
005f08fe  MOV EDX,dword ptr [EBP + -0x1c]
005f0901  MOV dword ptr [EBP + -0x38],EDX
005f0904  MOV EAX,dword ptr [EBP + 0xffffff14]
005f090a  MOV ECX,dword ptr [EAX + 0x70]
005f090d  AND ECX,0x1
005f0910  JZ 0x005f0919
005f0912  MOV dword ptr [EBP + -0x14],0x0
005f0919  MOV EDX,dword ptr [EBP + 0xffffff14]
005f091f  MOV EAX,dword ptr [EDX + 0x70]
005f0922  AND EAX,0x2
005f0925  JZ 0x005f0936
005f0927  MOV ECX,dword ptr [EBP + 0xffffff14]
005f092d  MOV EDX,dword ptr [ECX + 0x68]
005f0930  SUB EDX,dword ptr [EBP + -0x34]
005f0933  MOV dword ptr [EBP + -0x14],EDX
005f0936  MOV EAX,dword ptr [EBP + 0xffffff14]
005f093c  MOV ECX,dword ptr [EAX + 0x70]
005f093f  AND ECX,0x20
005f0942  JZ 0x005f0958
005f0944  MOV EDX,dword ptr [EBP + 0xffffff14]
005f094a  MOV EAX,dword ptr [EDX + 0x68]
005f094d  SUB EAX,dword ptr [EBP + -0x34]
005f0950  CDQ
005f0951  SUB EAX,EDX
005f0953  SAR EAX,0x1
005f0955  MOV dword ptr [EBP + -0x14],EAX
005f0958  MOV EAX,dword ptr [EBP + 0xffffff14]
005f095e  MOV ECX,dword ptr [EAX + 0x74]
005f0961  MOV EDX,dword ptr [EBP + -0x14]
005f0964  LEA EAX,[EDX + ECX*0x1 + 0x1]
005f0968  MOV dword ptr [EBP + -0x14],EAX
005f096b  JMP 0x005f098b
005f096d  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0973  MOVSX EDX,word ptr [ECX + 0x96]
005f097a  MOV EAX,dword ptr [EBP + -0x1c]
005f097d  SUB EAX,EDX
005f097f  MOV dword ptr [EBP + -0x38],EAX
005f0982  MOV ECX,dword ptr [EBP + -0x18]
005f0985  MOV dword ptr [EBP + 0xffffff7c],ECX
005f098b  MOV EDX,dword ptr [EBP + 0xffffff7c]
005f0991  PUSH EDX
005f0992  LEA EAX,[EBP + 0xffffff50]
005f0998  PUSH EAX
005f0999  MOV ECX,dword ptr [EBP + -0x38]
005f099c  PUSH ECX
005f099d  MOV EDX,dword ptr [EBP + -0x14]
005f09a0  PUSH EDX
005f09a1  MOV ECX,dword ptr [EBP + 0xffffff14]
005f09a7  CALL 0x005ef470
005f09ac  MOV EAX,dword ptr [EBP + 0xffffff14]
005f09b2  MOV EDX,dword ptr [EAX]
005f09b4  MOV ECX,dword ptr [EBP + 0xffffff14]
005f09ba  MOV EAX,dword ptr [EDX + 0x54]
005f09bd  CALL EAX
005f09bf  MOV dword ptr [EBP + -0x48],EAX
005f09c2  MOV ECX,dword ptr [EBP + 0xffffff14]
005f09c8  MOV EDX,dword ptr [ECX]
005f09ca  MOV ECX,dword ptr [EBP + 0xffffff14]
005f09d0  MOV EAX,dword ptr [EDX + 0x4c]
005f09d3  CALL EAX
005f09d5  MOV dword ptr [EBP + -0x4c],EAX
005f09d8  MOV ECX,dword ptr [EBP + 0xffffff14]
005f09de  CALL 0x005f5590
005f09e3  ADD EAX,dword ptr [EBP + -0x48]
005f09e6  MOV dword ptr [EBP + -0x40],EAX
005f09e9  MOV ECX,dword ptr [EBP + 0xffffff14]
005f09ef  CALL 0x005f5550
005f09f4  ADD EAX,dword ptr [EBP + -0x4c]
005f09f7  MOV dword ptr [EBP + -0x44],EAX
005f09fa  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0a00  MOV EDX,dword ptr [EBP + -0x48]
005f0a03  MOV dword ptr [ECX + 0x14],EDX
005f0a06  MOV EAX,dword ptr [EBP + 0xffffff14]
005f0a0c  MOV ECX,dword ptr [EBP + -0x4c]
005f0a0f  MOV dword ptr [EAX + 0x10],ECX
005f0a12  MOV EDX,dword ptr [EBP + 0xffffff14]
005f0a18  MOV EAX,dword ptr [EBP + -0x40]
005f0a1b  MOV dword ptr [EDX + 0x1c],EAX
005f0a1e  MOV ECX,dword ptr [EBP + 0xffffff14]
005f0a24  MOV EDX,dword ptr [EBP + -0x44]
005f0a27  MOV dword ptr [ECX + 0x18],EDX
005f0a2a  MOV ESP,EBP
005f0a2c  POP EBP
005f0a2d  RET 0x4

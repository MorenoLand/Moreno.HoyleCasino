; FUN_005bff60  005bff60
005bff60  PUSH EBP
005bff61  MOV EBP,ESP
005bff63  PUSH -0x1
005bff65  PUSH 0x6a83a0
005bff6a  MOV EAX,FS:[0x0]
005bff70  PUSH EAX
005bff71  PUSH ECX
005bff72  SUB ESP,0x220
005bff78  PUSH EBX
005bff79  PUSH ESI
005bff7a  PUSH EDI
005bff7b  MOV EAX,[0x00781870]
005bff80  XOR EAX,EBP
005bff82  PUSH EAX
005bff83  LEA EAX,[EBP + -0xc]
005bff86  MOV FS:[0x0],EAX
005bff8c  MOV dword ptr [EBP + -0x10],ESP
005bff8f  MOV dword ptr [EBP + 0xfffffdf8],ECX
005bff95  MOV EAX,dword ptr [EBP + 0x14]
005bff98  MOV ECX,dword ptr [EAX]
005bff9a  MOV dword ptr [EBP + -0x14],ECX
005bff9d  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bffa3  CMP dword ptr [EDX + 0x4],0x0
005bffa7  JNZ 0x005bffb5
005bffa9  MOV dword ptr [EBP + 0xfffffdf4],0x0
005bffb3  JMP 0x005bffd0
005bffb5  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bffbb  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bffc1  MOV EDX,dword ptr [EAX + 0xc]
005bffc4  SUB EDX,dword ptr [ECX + 0x4]
005bffc7  SAR EDX,0x2
005bffca  MOV dword ptr [EBP + 0xfffffdf4],EDX
005bffd0  MOV EAX,dword ptr [EBP + 0xfffffdf4]
005bffd6  MOV dword ptr [EBP + -0x18],EAX
005bffd9  CMP dword ptr [EBP + 0x10],0x0
005bffdd  JNZ 0x005bffe4
005bffdf  JMP 0x005c06d1
005bffe4  MOV dword ptr [EBP + -0x28],0x3fffffff
005bffeb  CMP dword ptr [EBP + -0x28],0x0
005bffef  JBE 0x005bfffc
005bfff1  MOV ECX,dword ptr [EBP + -0x28]
005bfff4  MOV dword ptr [EBP + 0xfffffdf0],ECX
005bfffa  JMP 0x005c0006
005bfffc  MOV dword ptr [EBP + 0xfffffdf0],0x1
005c0006  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c000c  CMP dword ptr [EDX + 0x4],0x0
005c0010  JNZ 0x005c001e
005c0012  MOV dword ptr [EBP + 0xfffffdec],0x0
005c001c  JMP 0x005c0039
005c001e  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c0024  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c002a  MOV EDX,dword ptr [EAX + 0x8]
005c002d  SUB EDX,dword ptr [ECX + 0x4]
005c0030  SAR EDX,0x2
005c0033  MOV dword ptr [EBP + 0xfffffdec],EDX
005c0039  MOV EAX,dword ptr [EBP + 0xfffffdf0]
005c003f  SUB EAX,dword ptr [EBP + 0xfffffdec]
005c0045  CMP EAX,dword ptr [EBP + 0x10]
005c0048  JNC 0x005c0054
005c004a  CALL 0x005c06f0
005c004f  JMP 0x005c06d1
005c0054  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c005a  CMP dword ptr [ECX + 0x4],0x0
005c005e  JNZ 0x005c006c
005c0060  MOV dword ptr [EBP + 0xfffffde8],0x0
005c006a  JMP 0x005c0087
005c006c  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c0072  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c0078  MOV ECX,dword ptr [EDX + 0x8]
005c007b  SUB ECX,dword ptr [EAX + 0x4]
005c007e  SAR ECX,0x2
005c0081  MOV dword ptr [EBP + 0xfffffde8],ECX
005c0087  MOV EDX,dword ptr [EBP + 0xfffffde8]
005c008d  ADD EDX,dword ptr [EBP + 0x10]
005c0090  CMP dword ptr [EBP + -0x18],EDX
005c0093  JNC 0x005c044b
005c0099  MOV dword ptr [EBP + -0x70],0x3fffffff
005c00a0  CMP dword ptr [EBP + -0x70],0x0
005c00a4  JBE 0x005c00b1
005c00a6  MOV EAX,dword ptr [EBP + -0x70]
005c00a9  MOV dword ptr [EBP + 0xfffffde4],EAX
005c00af  JMP 0x005c00bb
005c00b1  MOV dword ptr [EBP + 0xfffffde4],0x1
005c00bb  MOV ECX,dword ptr [EBP + -0x18]
005c00be  SHR ECX,0x1
005c00c0  MOV EDX,dword ptr [EBP + 0xfffffde4]
005c00c6  SUB EDX,ECX
005c00c8  CMP EDX,dword ptr [EBP + -0x18]
005c00cb  JNC 0x005c00d9
005c00cd  MOV dword ptr [EBP + 0xfffffde0],0x0
005c00d7  JMP 0x005c00e7
005c00d9  MOV EAX,dword ptr [EBP + -0x18]
005c00dc  SHR EAX,0x1
005c00de  ADD EAX,dword ptr [EBP + -0x18]
005c00e1  MOV dword ptr [EBP + 0xfffffde0],EAX
005c00e7  MOV ECX,dword ptr [EBP + 0xfffffde0]
005c00ed  MOV dword ptr [EBP + -0x18],ECX
005c00f0  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c00f6  CMP dword ptr [EDX + 0x4],0x0
005c00fa  JNZ 0x005c0108
005c00fc  MOV dword ptr [EBP + 0xfffffddc],0x0
005c0106  JMP 0x005c0123
005c0108  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c010e  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c0114  MOV EDX,dword ptr [EAX + 0x8]
005c0117  SUB EDX,dword ptr [ECX + 0x4]
005c011a  SAR EDX,0x2
005c011d  MOV dword ptr [EBP + 0xfffffddc],EDX
005c0123  MOV EAX,dword ptr [EBP + 0xfffffddc]
005c0129  ADD EAX,dword ptr [EBP + 0x10]
005c012c  CMP dword ptr [EBP + -0x18],EAX
005c012f  JNC 0x005c0170
005c0131  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c0137  CMP dword ptr [ECX + 0x4],0x0
005c013b  JNZ 0x005c0149
005c013d  MOV dword ptr [EBP + 0xfffffdd8],0x0
005c0147  JMP 0x005c0164
005c0149  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c014f  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c0155  MOV ECX,dword ptr [EDX + 0x8]
005c0158  SUB ECX,dword ptr [EAX + 0x4]
005c015b  SAR ECX,0x2
005c015e  MOV dword ptr [EBP + 0xfffffdd8],ECX
005c0164  MOV EDX,dword ptr [EBP + 0xfffffdd8]
005c016a  ADD EDX,dword ptr [EBP + 0x10]
005c016d  MOV dword ptr [EBP + -0x18],EDX
005c0170  PUSH 0x0
005c0172  MOV EAX,dword ptr [EBP + -0x18]
005c0175  PUSH EAX
005c0176  CALL 0x005c6310
005c017b  ADD ESP,0x8
005c017e  MOV dword ptr [EBP + -0x20],EAX
005c0181  MOV ECX,dword ptr [EBP + -0x20]
005c0184  MOV dword ptr [EBP + -0x1c],ECX
005c0187  MOV dword ptr [EBP + -0x4],0x0
005c018e  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c0194  MOV EAX,dword ptr [EDX + 0x4]
005c0197  MOV dword ptr [EBP + 0xffffff68],EAX
005c019d  MOV ECX,dword ptr [EBP + -0x20]
005c01a0  MOV dword ptr [EBP + 0xffffff6c],ECX
005c01a6  MOV EDX,dword ptr [EBP + 0xc]
005c01a9  MOV dword ptr [EBP + 0xffffff70],EDX
005c01af  MOV EAX,dword ptr [EBP + 0xffffff68]
005c01b5  MOV dword ptr [EBP + 0xffffff74],EAX
005c01bb  XOR ECX,ECX
005c01bd  MOV byte ptr [EBP + -0x71],CL
005c01c0  MOV DL,byte ptr [EBP + -0x73]
005c01c3  MOV byte ptr [EBP + -0x72],DL
005c01c6  MOV EAX,dword ptr [EBP + 0xffffff70]
005c01cc  MOV dword ptr [EBP + -0x78],EAX
005c01cf  MOV ECX,dword ptr [EBP + 0xffffff74]
005c01d5  MOV dword ptr [EBP + -0x80],ECX
005c01d8  MOV DL,byte ptr [EBP + -0x71]
005c01db  MOV byte ptr [EBP + 0xffffff7b],DL
005c01e1  MOV EAX,dword ptr [EBP + 0xffffff6c]
005c01e7  MOV dword ptr [EBP + 0xffffff7c],EAX
005c01ed  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c01f3  PUSH ECX
005c01f4  MOV EDX,dword ptr [EBP + 0xffffff7c]
005c01fa  PUSH EDX
005c01fb  MOV EAX,dword ptr [EBP + -0x78]
005c01fe  PUSH EAX
005c01ff  MOV ECX,dword ptr [EBP + -0x80]
005c0202  PUSH ECX
005c0203  CALL 0x005bf010
005c0208  ADD ESP,0x10
005c020b  MOV dword ptr [EBP + 0xfffffdd4],EAX
005c0211  MOV EDX,dword ptr [EBP + 0xfffffdd4]
005c0217  MOV dword ptr [EBP + -0x1c],EDX
005c021a  MOV EAX,dword ptr [EBP + -0x1c]
005c021d  MOV dword ptr [EBP + 0xffffff58],EAX
005c0223  XOR ECX,ECX
005c0225  MOV byte ptr [EBP + 0xffffff67],CL
005c022b  MOV DL,byte ptr [EBP + 0xffffff65]
005c0231  MOV byte ptr [EBP + 0xffffff66],DL
005c0237  MOV AL,byte ptr [EBP + 0xffffff67]
005c023d  MOV byte ptr [EBP + 0xffffff5f],AL
005c0243  MOV ECX,dword ptr [EBP + 0xffffff58]
005c0249  MOV dword ptr [EBP + 0xffffff60],ECX
005c024f  LEA EDX,[EBP + -0x14]
005c0252  PUSH EDX
005c0253  MOV EAX,dword ptr [EBP + 0x10]
005c0256  PUSH EAX
005c0257  MOV ECX,dword ptr [EBP + 0xffffff60]
005c025d  PUSH ECX
005c025e  CALL 0x005c0910
005c0263  ADD ESP,0xc
005c0266  MOV EDX,dword ptr [EBP + 0x10]
005c0269  MOV EAX,dword ptr [EBP + -0x1c]
005c026c  LEA ECX,[EAX + EDX*0x4]
005c026f  MOV dword ptr [EBP + -0x1c],ECX
005c0272  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c0278  MOV EAX,dword ptr [EDX + 0x8]
005c027b  MOV dword ptr [EBP + 0xffffff30],EAX
005c0281  MOV ECX,dword ptr [EBP + -0x1c]
005c0284  MOV dword ptr [EBP + 0xffffff34],ECX
005c028a  MOV EDX,dword ptr [EBP + 0xffffff30]
005c0290  MOV dword ptr [EBP + 0xffffff38],EDX
005c0296  MOV EAX,dword ptr [EBP + 0xc]
005c0299  MOV dword ptr [EBP + 0xffffff3c],EAX
005c029f  XOR ECX,ECX
005c02a1  MOV byte ptr [EBP + 0xffffff57],CL
005c02a7  MOV DL,byte ptr [EBP + 0xffffff55]
005c02ad  MOV byte ptr [EBP + 0xffffff56],DL
005c02b3  MOV EAX,dword ptr [EBP + 0xffffff38]
005c02b9  MOV dword ptr [EBP + 0xffffff50],EAX
005c02bf  MOV ECX,dword ptr [EBP + 0xffffff3c]
005c02c5  MOV dword ptr [EBP + 0xffffff48],ECX
005c02cb  MOV DL,byte ptr [EBP + 0xffffff57]
005c02d1  MOV byte ptr [EBP + 0xffffff43],DL
005c02d7  MOV EAX,dword ptr [EBP + 0xffffff34]
005c02dd  MOV dword ptr [EBP + 0xffffff44],EAX
005c02e3  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c02e9  PUSH ECX
005c02ea  MOV EDX,dword ptr [EBP + 0xffffff44]
005c02f0  PUSH EDX
005c02f1  MOV EAX,dword ptr [EBP + 0xffffff50]
005c02f7  PUSH EAX
005c02f8  MOV ECX,dword ptr [EBP + 0xffffff48]
005c02fe  PUSH ECX
005c02ff  CALL 0x005bf010
005c0304  ADD ESP,0x10
005c0307  JMP 0x005c0349
005c044b  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c0451  MOV EAX,dword ptr [EDX + 0x8]
005c0454  SUB EAX,dword ptr [EBP + 0xc]
005c0457  SAR EAX,0x2
005c045a  CMP EAX,dword ptr [EBP + 0x10]
005c045d  JNC 0x005c05a7
005c0463  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c0469  MOV EDX,dword ptr [ECX + 0x8]
005c046c  MOV dword ptr [EBP + 0xfffffed0],EDX
005c0472  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c0478  PUSH EAX
005c0479  MOV ECX,dword ptr [EBP + 0x10]
005c047c  MOV EDX,dword ptr [EBP + 0xc]
005c047f  LEA EAX,[EDX + ECX*0x4]
005c0482  PUSH EAX
005c0483  MOV ECX,dword ptr [EBP + 0xfffffed0]
005c0489  PUSH ECX
005c048a  MOV EDX,dword ptr [EBP + 0xc]
005c048d  PUSH EDX
005c048e  CALL 0x005befc0
005c0493  ADD ESP,0x10
005c0496  MOV dword ptr [EBP + -0x4],0x2
005c049d  LEA EAX,[EBP + -0x14]
005c04a0  PUSH EAX
005c04a1  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c04a7  MOV EDX,dword ptr [ECX + 0x8]
005c04aa  SUB EDX,dword ptr [EBP + 0xc]
005c04ad  SAR EDX,0x2
005c04b0  MOV EAX,dword ptr [EBP + 0x10]
005c04b3  SUB EAX,EDX
005c04b5  PUSH EAX
005c04b6  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c04bc  MOV EDX,dword ptr [ECX + 0x8]
005c04bf  PUSH EDX
005c04c0  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c04c6  CALL 0x005c5fd0
005c04cb  JMP 0x005c051f
005c05a7  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c05ad  MOV ECX,dword ptr [EAX + 0x8]
005c05b0  MOV dword ptr [EBP + -0x24],ECX
005c05b3  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c05b9  MOV EAX,dword ptr [EDX + 0x8]
005c05bc  MOV dword ptr [EBP + 0xfffffe48],EAX
005c05c2  MOV ECX,dword ptr [EBP + 0xfffffe48]
005c05c8  MOV dword ptr [EBP + 0xfffffe4c],ECX
005c05ce  MOV EDX,dword ptr [EBP + -0x24]
005c05d1  MOV dword ptr [EBP + 0xfffffe50],EDX
005c05d7  MOV EAX,dword ptr [EBP + 0x10]
005c05da  SHL EAX,0x2
005c05dd  MOV ECX,dword ptr [EBP + -0x24]
005c05e0  SUB ECX,EAX
005c05e2  MOV dword ptr [EBP + 0xfffffe54],ECX
005c05e8  XOR EDX,EDX
005c05ea  MOV byte ptr [EBP + 0xfffffe8f],DL
005c05f0  MOV AL,byte ptr [EBP + 0xfffffe8d]
005c05f6  MOV byte ptr [EBP + 0xfffffe8e],AL
005c05fc  MOV ECX,dword ptr [EBP + 0xfffffe50]
005c0602  MOV dword ptr [EBP + 0xfffffe88],ECX
005c0608  MOV EDX,dword ptr [EBP + 0xfffffe54]
005c060e  MOV dword ptr [EBP + 0xfffffe80],EDX
005c0614  MOV AL,byte ptr [EBP + 0xfffffe8f]
005c061a  MOV byte ptr [EBP + 0xfffffe5b],AL
005c0620  MOV ECX,dword ptr [EBP + 0xfffffe4c]
005c0626  MOV dword ptr [EBP + 0xfffffe5c],ECX
005c062c  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c0632  PUSH EDX
005c0633  MOV EAX,dword ptr [EBP + 0xfffffe5c]
005c0639  PUSH EAX
005c063a  MOV ECX,dword ptr [EBP + 0xfffffe88]
005c0640  PUSH ECX
005c0641  MOV EDX,dword ptr [EBP + 0xfffffe80]
005c0647  PUSH EDX
005c0648  CALL 0x005bf010
005c064d  ADD ESP,0x10
005c0650  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c0656  MOV dword ptr [ECX + 0x8],EAX
005c0659  MOV EDX,dword ptr [EBP + -0x24]
005c065c  PUSH EDX
005c065d  MOV EAX,dword ptr [EBP + 0x10]
005c0660  SHL EAX,0x2
005c0663  MOV ECX,dword ptr [EBP + -0x24]
005c0666  SUB ECX,EAX
005c0668  PUSH ECX
005c0669  MOV EDX,dword ptr [EBP + 0xc]
005c066c  PUSH EDX
005c066d  CALL 0x005c61d0
005c0672  ADD ESP,0xc
005c0675  MOV EAX,dword ptr [EBP + 0x10]
005c0678  MOV ECX,dword ptr [EBP + 0xc]
005c067b  LEA EDX,[ECX + EAX*0x4]
005c067e  MOV dword ptr [EBP + 0xfffffdfc],EDX
005c0684  MOV EAX,dword ptr [EBP + 0xc]
005c0687  MOV dword ptr [EBP + 0xfffffe00],EAX
005c068d  MOV ECX,dword ptr [EBP + 0xfffffdfc]
005c0693  MOV dword ptr [EBP + 0xfffffe0c],ECX
005c0699  MOV EDX,dword ptr [EBP + 0xfffffe00]
005c069f  MOV dword ptr [EBP + 0xfffffe04],EDX
005c06a5  JMP 0x005c06b6
005c06a7  MOV EAX,dword ptr [EBP + 0xfffffe04]
005c06ad  ADD EAX,0x4
005c06b0  MOV dword ptr [EBP + 0xfffffe04],EAX
005c06b6  MOV ECX,dword ptr [EBP + 0xfffffe04]
005c06bc  CMP ECX,dword ptr [EBP + 0xfffffe0c]
005c06c2  JZ 0x005c06d1
005c06c4  MOV EDX,dword ptr [EBP + 0xfffffe04]
005c06ca  MOV EAX,dword ptr [EBP + -0x14]
005c06cd  MOV dword ptr [EDX],EAX
005c06cf  JMP 0x005c06a7

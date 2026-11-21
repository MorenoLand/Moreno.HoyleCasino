; FUN_006277f0  006277f0
006277f0  PUSH EBP
006277f1  MOV EBP,ESP
006277f3  SUB ESP,0x74
006277f6  MOV dword ptr [EBP + -0x50],ECX
006277f9  CMP dword ptr [EBP + 0xc],0x0
006277fd  JZ 0x00627805
006277ff  CMP dword ptr [EBP + 0x10],0x0
00627803  JNZ 0x0062780c
00627805  XOR AL,AL
00627807  JMP 0x00627b02
0062780c  MOV EAX,dword ptr [EBP + -0x50]
0062780f  MOV ECX,dword ptr [EAX + 0x1c]
00627812  MOV dword ptr [EBP + -0x3c],ECX
00627815  MOV EDX,dword ptr [EBP + -0x50]
00627818  MOV EAX,dword ptr [EDX + 0x18]
0062781b  MOV dword ptr [EBP + -0x38],EAX
0062781e  MOV ECX,dword ptr [EBP + -0x50]
00627821  MOV EDX,dword ptr [ECX + 0x14]
00627824  MOV dword ptr [EBP + -0x34],EDX
00627827  MOV EAX,dword ptr [EBP + -0x50]
0062782a  MOV ECX,dword ptr [EAX + 0x10]
0062782d  MOV dword ptr [EBP + -0x30],ECX
00627830  MOV EDX,dword ptr [EBP + -0x30]
00627833  MOV dword ptr [EBP + -0x20],EDX
00627836  MOV EAX,dword ptr [EBP + -0x34]
00627839  MOV dword ptr [EBP + -0x1c],EAX
0062783c  MOV ECX,dword ptr [EBP + -0x38]
0062783f  MOV dword ptr [EBP + -0x18],ECX
00627842  MOV EDX,dword ptr [EBP + -0x3c]
00627845  MOV dword ptr [EBP + -0x14],EDX
00627848  MOV EAX,dword ptr [EBP + 0x8]
0062784b  PUSH EAX
0062784c  LEA ECX,[EBP + -0x20]
0062784f  PUSH ECX
00627850  LEA EDX,[EBP + -0x20]
00627853  PUSH EDX
00627854  CALL 0x00627fa0
00627859  ADD ESP,0xc
0062785c  MOV EAX,dword ptr [EBP + -0x50]
0062785f  MOV ECX,dword ptr [EAX + 0x50]
00627862  MOV EDX,dword ptr [EAX + 0x54]
00627865  MOV EAX,dword ptr [EBP + 0xc]
00627868  MOV dword ptr [EAX],ECX
0062786a  MOV dword ptr [EAX + 0x4],EDX
0062786d  MOV ECX,dword ptr [EBP + -0x50]
00627870  MOV EDX,dword ptr [ECX + 0x58]
00627873  MOV EAX,dword ptr [ECX + 0x5c]
00627876  MOV ECX,dword ptr [EBP + 0x10]
00627879  MOV dword ptr [ECX],EDX
0062787b  MOV dword ptr [ECX + 0x4],EAX
0062787e  MOV EDX,dword ptr [EBP + 0x10]
00627881  MOV EAX,dword ptr [EBP + 0xc]
00627884  MOV ECX,dword ptr [EDX]
00627886  SUB ECX,dword ptr [EAX]
00627888  MOV dword ptr [EBP + -0x2c],ECX
0062788b  MOV EDX,dword ptr [EBP + 0x10]
0062788e  MOV EAX,dword ptr [EBP + 0xc]
00627891  MOV ECX,dword ptr [EDX + 0x4]
00627894  SUB ECX,dword ptr [EAX + 0x4]
00627897  MOV dword ptr [EBP + -0x8],ECX
0062789a  MOV byte ptr [EBP + -0x1],0x0
0062789e  FILD dword ptr [EBP + -0x8]
006278a1  FIDIV dword ptr [EBP + -0x2c]
006278a4  FSTP double ptr [EBP + -0x28]
006278a7  MOV EDX,dword ptr [EBP + 0xc]
006278aa  FILD dword ptr [EDX + 0x4]
006278ad  MOV EAX,dword ptr [EBP + 0xc]
006278b0  FILD dword ptr [EAX]
006278b2  FMUL double ptr [EBP + -0x28]
006278b5  FSUBP
006278b7  FSTP double ptr [EBP + -0x10]
006278ba  MOV ECX,dword ptr [EBP + -0x50]
006278bd  MOV EDX,dword ptr [EBP + -0x50]
006278c0  MOV EAX,dword ptr [ECX + 0x10]
006278c3  CMP EAX,dword ptr [EDX + 0x18]
006278c6  JNZ 0x006278cc
006278c8  MOV byte ptr [EBP + -0x1],0x1
006278cc  MOV ECX,dword ptr [EBP + 0xc]
006278cf  MOV EDX,dword ptr [ECX]
006278d1  CMP EDX,dword ptr [EBP + -0x20]
006278d4  JL 0x006278e0
006278d6  MOV EAX,dword ptr [EBP + 0xc]
006278d9  MOV ECX,dword ptr [EAX]
006278db  CMP ECX,dword ptr [EBP + -0x18]
006278de  JLE 0x00627941
006278e0  MOVZX EDX,byte ptr [EBP + -0x1]
006278e4  TEST EDX,EDX
006278e6  JZ 0x006278ef
006278e8  XOR AL,AL
006278ea  JMP 0x00627b02
006278ef  MOV EAX,dword ptr [EBP + 0xc]
006278f2  MOV ECX,dword ptr [EAX]
006278f4  MOV dword ptr [EBP + -0x40],ECX
006278f7  MOV EDX,dword ptr [EBP + -0x40]
006278fa  CMP EDX,dword ptr [EBP + -0x20]
006278fd  JGE 0x00627907
006278ff  MOV EAX,dword ptr [EBP + -0x20]
00627902  MOV dword ptr [EBP + -0x54],EAX
00627905  JMP 0x00627923
00627907  MOV ECX,dword ptr [EBP + -0x40]
0062790a  CMP ECX,dword ptr [EBP + -0x18]
0062790d  JGE 0x00627917
0062790f  MOV EDX,dword ptr [EBP + -0x40]
00627912  MOV dword ptr [EBP + -0x58],EDX
00627915  JMP 0x0062791d
00627917  MOV EAX,dword ptr [EBP + -0x18]
0062791a  MOV dword ptr [EBP + -0x58],EAX
0062791d  MOV ECX,dword ptr [EBP + -0x58]
00627920  MOV dword ptr [EBP + -0x54],ECX
00627923  MOV EDX,dword ptr [EBP + 0xc]
00627926  MOV EAX,dword ptr [EBP + -0x54]
00627929  MOV dword ptr [EDX],EAX
0062792b  MOV ECX,dword ptr [EBP + 0xc]
0062792e  FILD dword ptr [ECX]
00627930  FMUL double ptr [EBP + -0x28]
00627933  FADD double ptr [EBP + -0x10]
00627936  CALL 0x00686cc0
0062793b  MOV EDX,dword ptr [EBP + 0xc]
0062793e  MOV dword ptr [EDX + 0x4],EAX
00627941  MOV EAX,dword ptr [EBP + 0xc]
00627944  MOV ECX,dword ptr [EAX + 0x4]
00627947  CMP ECX,dword ptr [EBP + -0x1c]
0062794a  JL 0x00627957
0062794c  MOV EDX,dword ptr [EBP + 0xc]
0062794f  MOV EAX,dword ptr [EDX + 0x4]
00627952  CMP EAX,dword ptr [EBP + -0x14]
00627955  JLE 0x006279ce
00627957  MOV ECX,dword ptr [EBP + 0xc]
0062795a  MOV EDX,dword ptr [ECX + 0x4]
0062795d  MOV dword ptr [EBP + -0x44],EDX
00627960  MOV EAX,dword ptr [EBP + -0x44]
00627963  CMP EAX,dword ptr [EBP + -0x1c]
00627966  JGE 0x00627970
00627968  MOV ECX,dword ptr [EBP + -0x1c]
0062796b  MOV dword ptr [EBP + -0x5c],ECX
0062796e  JMP 0x0062798c
00627970  MOV EDX,dword ptr [EBP + -0x44]
00627973  CMP EDX,dword ptr [EBP + -0x14]
00627976  JGE 0x00627980
00627978  MOV EAX,dword ptr [EBP + -0x44]
0062797b  MOV dword ptr [EBP + -0x60],EAX
0062797e  JMP 0x00627986
00627980  MOV ECX,dword ptr [EBP + -0x14]
00627983  MOV dword ptr [EBP + -0x60],ECX
00627986  MOV EDX,dword ptr [EBP + -0x60]
00627989  MOV dword ptr [EBP + -0x5c],EDX
0062798c  MOV EAX,dword ptr [EBP + 0xc]
0062798f  MOV ECX,dword ptr [EBP + -0x5c]
00627992  MOV dword ptr [EAX + 0x4],ECX
00627995  MOVZX EDX,byte ptr [EBP + -0x1]
00627999  TEST EDX,EDX
0062799b  JNZ 0x006279b3
0062799d  MOV EAX,dword ptr [EBP + 0xc]
006279a0  FILD dword ptr [EAX + 0x4]
006279a3  FSUB double ptr [EBP + -0x10]
006279a6  FDIV double ptr [EBP + -0x28]
006279a9  CALL 0x00686cc0
006279ae  MOV ECX,dword ptr [EBP + 0xc]
006279b1  MOV dword ptr [ECX],EAX
006279b3  MOV EDX,dword ptr [EBP + 0xc]
006279b6  MOV EAX,dword ptr [EDX]
006279b8  CMP EAX,dword ptr [EBP + -0x20]
006279bb  JL 0x006279c7
006279bd  MOV ECX,dword ptr [EBP + 0xc]
006279c0  MOV EDX,dword ptr [ECX]
006279c2  CMP EDX,dword ptr [EBP + -0x18]
006279c5  JLE 0x006279ce
006279c7  XOR AL,AL
006279c9  JMP 0x00627b02
006279ce  MOV EAX,dword ptr [EBP + 0x10]
006279d1  MOV ECX,dword ptr [EAX]
006279d3  CMP ECX,dword ptr [EBP + -0x20]
006279d6  JL 0x006279e2
006279d8  MOV EDX,dword ptr [EBP + 0x10]
006279db  MOV EAX,dword ptr [EDX]
006279dd  CMP EAX,dword ptr [EBP + -0x18]
006279e0  JLE 0x00627a43
006279e2  MOVZX ECX,byte ptr [EBP + -0x1]
006279e6  TEST ECX,ECX
006279e8  JZ 0x006279f1
006279ea  XOR AL,AL
006279ec  JMP 0x00627b02
006279f1  MOV EDX,dword ptr [EBP + 0x10]
006279f4  MOV EAX,dword ptr [EDX]
006279f6  MOV dword ptr [EBP + -0x48],EAX
006279f9  MOV ECX,dword ptr [EBP + -0x48]
006279fc  CMP ECX,dword ptr [EBP + -0x20]
006279ff  JGE 0x00627a09
00627a01  MOV EDX,dword ptr [EBP + -0x20]
00627a04  MOV dword ptr [EBP + -0x64],EDX
00627a07  JMP 0x00627a25
00627a09  MOV EAX,dword ptr [EBP + -0x48]
00627a0c  CMP EAX,dword ptr [EBP + -0x18]
00627a0f  JGE 0x00627a19
00627a11  MOV ECX,dword ptr [EBP + -0x48]
00627a14  MOV dword ptr [EBP + -0x68],ECX
00627a17  JMP 0x00627a1f
00627a19  MOV EDX,dword ptr [EBP + -0x18]
00627a1c  MOV dword ptr [EBP + -0x68],EDX
00627a1f  MOV EAX,dword ptr [EBP + -0x68]
00627a22  MOV dword ptr [EBP + -0x64],EAX
00627a25  MOV ECX,dword ptr [EBP + 0x10]
00627a28  MOV EDX,dword ptr [EBP + -0x64]
00627a2b  MOV dword ptr [ECX],EDX
00627a2d  MOV EAX,dword ptr [EBP + 0x10]
00627a30  FILD dword ptr [EAX]
00627a32  FMUL double ptr [EBP + -0x28]
00627a35  FADD double ptr [EBP + -0x10]
00627a38  CALL 0x00686cc0
00627a3d  MOV ECX,dword ptr [EBP + 0x10]
00627a40  MOV dword ptr [ECX + 0x4],EAX
00627a43  MOV EDX,dword ptr [EBP + 0x10]
00627a46  MOV EAX,dword ptr [EDX + 0x4]
00627a49  CMP EAX,dword ptr [EBP + -0x1c]
00627a4c  JL 0x00627a59
00627a4e  MOV ECX,dword ptr [EBP + 0x10]
00627a51  MOV EDX,dword ptr [ECX + 0x4]
00627a54  CMP EDX,dword ptr [EBP + -0x14]
00627a57  JLE 0x00627acd
00627a59  MOV EAX,dword ptr [EBP + 0x10]
00627a5c  MOV ECX,dword ptr [EAX + 0x4]
00627a5f  MOV dword ptr [EBP + -0x4c],ECX
00627a62  MOV EDX,dword ptr [EBP + -0x4c]
00627a65  CMP EDX,dword ptr [EBP + -0x1c]
00627a68  JGE 0x00627a72
00627a6a  MOV EAX,dword ptr [EBP + -0x1c]
00627a6d  MOV dword ptr [EBP + -0x6c],EAX
00627a70  JMP 0x00627a8e
00627a72  MOV ECX,dword ptr [EBP + -0x4c]
00627a75  CMP ECX,dword ptr [EBP + -0x14]
00627a78  JGE 0x00627a82
00627a7a  MOV EDX,dword ptr [EBP + -0x4c]
00627a7d  MOV dword ptr [EBP + -0x70],EDX
00627a80  JMP 0x00627a88
00627a82  MOV EAX,dword ptr [EBP + -0x14]
00627a85  MOV dword ptr [EBP + -0x70],EAX
00627a88  MOV ECX,dword ptr [EBP + -0x70]
00627a8b  MOV dword ptr [EBP + -0x6c],ECX
00627a8e  MOV EDX,dword ptr [EBP + 0x10]
00627a91  MOV EAX,dword ptr [EBP + -0x6c]
00627a94  MOV dword ptr [EDX + 0x4],EAX
00627a97  MOVZX ECX,byte ptr [EBP + -0x1]
00627a9b  TEST ECX,ECX
00627a9d  JNZ 0x00627ab5
00627a9f  MOV EDX,dword ptr [EBP + 0x10]
00627aa2  FILD dword ptr [EDX + 0x4]
00627aa5  FSUB double ptr [EBP + -0x10]
00627aa8  FDIV double ptr [EBP + -0x28]
00627aab  CALL 0x00686cc0
00627ab0  MOV ECX,dword ptr [EBP + 0x10]
00627ab3  MOV dword ptr [ECX],EAX
00627ab5  MOV EDX,dword ptr [EBP + 0x10]
00627ab8  MOV EAX,dword ptr [EDX]
00627aba  CMP EAX,dword ptr [EBP + -0x20]
00627abd  JL 0x00627ac9
00627abf  MOV ECX,dword ptr [EBP + 0x10]
00627ac2  MOV EDX,dword ptr [ECX]
00627ac4  CMP EDX,dword ptr [EBP + -0x18]
00627ac7  JLE 0x00627acd
00627ac9  XOR AL,AL
00627acb  JMP 0x00627b02
00627acd  MOV EAX,dword ptr [EBP + 0xc]
00627ad0  CMP dword ptr [EAX],0x0
00627ad3  JNZ 0x00627af8
00627ad5  MOV ECX,dword ptr [EBP + 0x10]
00627ad8  CMP dword ptr [ECX],0x0
00627adb  JNZ 0x00627af8
00627add  MOV EDX,dword ptr [EBP + 0xc]
00627ae0  CMP dword ptr [EDX + 0x4],0x0
00627ae4  JNZ 0x00627af8
00627ae6  MOV EAX,dword ptr [EBP + 0x10]
00627ae9  CMP dword ptr [EAX + 0x4],0x0
00627aed  JNZ 0x00627af8
00627aef  MOV dword ptr [EBP + -0x74],0x0
00627af6  JMP 0x00627aff
00627af8  MOV dword ptr [EBP + -0x74],0x1
00627aff  MOV AL,byte ptr [EBP + -0x74]
00627b02  MOV ESP,EBP
00627b04  POP EBP
00627b05  RET 0xc

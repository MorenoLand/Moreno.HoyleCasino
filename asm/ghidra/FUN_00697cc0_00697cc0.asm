; FUN_00697cc0  00697cc0
00697cc0  SUB ESP,0x8
00697cc3  MOV EAX,dword ptr [ESP + 0xc]
00697cc7  FLD float ptr [EAX + 0x78]
00697cca  FSUB float ptr [EAX + 0x38]
00697ccd  FLD float ptr [EAX + 0x7c]
00697cd0  FSUB float ptr [EAX + 0x3c]
00697cd3  FLD float ptr [EAX + 0x38]
00697cd6  FADD float ptr [EAX + 0x78]
00697cd9  FSTP float ptr [EAX + 0x78]
00697cdc  FLD float ptr [EAX + 0x7c]
00697cdf  FADD float ptr [EAX + 0x3c]
00697ce2  FSTP float ptr [EAX + 0x7c]
00697ce5  FXCH
00697ce7  FSTP float ptr [EAX + 0x38]
00697cea  FSTP float ptr [EAX + 0x3c]
00697ced  FLD float ptr [EAX + 0x70]
00697cf0  FSUB float ptr [EAX + 0x30]
00697cf3  FLD float ptr [EAX + 0x74]
00697cf6  FSUB float ptr [EAX + 0x34]
00697cf9  FLD float ptr [EAX + 0x30]
00697cfc  FADD float ptr [EAX + 0x70]
00697cff  FSTP float ptr [EAX + 0x70]
00697d02  FLD float ptr [EAX + 0x74]
00697d05  FADD float ptr [EAX + 0x34]
00697d08  FSTP float ptr [EAX + 0x74]
00697d0b  FLD ST1
00697d0d  FMUL float ptr [0x006e57dc]
00697d13  FLD ST1
00697d15  FMUL float ptr [0x006e57d8]
00697d1b  FSUBP
00697d1d  FSTP float ptr [EAX + 0x30]
00697d20  FMUL float ptr [0x006e57dc]
00697d26  FXCH
00697d28  FMUL float ptr [0x006e57d8]
00697d2e  FADDP
00697d30  FSTP float ptr [EAX + 0x34]
00697d33  FLD float ptr [EAX + 0x68]
00697d36  FSUB float ptr [EAX + 0x28]
00697d39  FLD float ptr [EAX + 0x6c]
00697d3c  FSUB float ptr [EAX + 0x2c]
00697d3f  FLD float ptr [EAX + 0x28]
00697d42  FADD float ptr [EAX + 0x68]
00697d45  FSTP float ptr [EAX + 0x68]
00697d48  FLD float ptr [EAX + 0x6c]
00697d4b  FADD float ptr [EAX + 0x2c]
00697d4e  FSTP float ptr [EAX + 0x6c]
00697d51  FLD ST1
00697d53  FSUB ST0,ST1
00697d55  FMUL float ptr [0x006e57d4]
00697d5b  FSTP float ptr [EAX + 0x28]
00697d5e  FADD ST0,ST1
00697d60  FMUL float ptr [0x006e57d4]
00697d66  FSTP float ptr [EAX + 0x2c]
00697d69  FSTP ST0
00697d6b  FLD float ptr [EAX + 0x60]
00697d6e  FSUB float ptr [EAX + 0x20]
00697d71  FLD float ptr [EAX + 0x64]
00697d74  FSUB float ptr [EAX + 0x24]
00697d77  FLD float ptr [EAX + 0x20]
00697d7a  FADD float ptr [EAX + 0x60]
00697d7d  FSTP float ptr [EAX + 0x60]
00697d80  FLD float ptr [EAX + 0x64]
00697d83  FADD float ptr [EAX + 0x24]
00697d86  FSTP float ptr [EAX + 0x64]
00697d89  FLD ST1
00697d8b  FMUL float ptr [0x006e57d8]
00697d91  FLD ST1
00697d93  FMUL float ptr [0x006e57dc]
00697d99  FSUBP
00697d9b  FSTP float ptr [EAX + 0x20]
00697d9e  FMUL float ptr [0x006e57d8]
00697da4  FXCH
00697da6  FMUL float ptr [0x006e57dc]
00697dac  FADDP
00697dae  FSTP float ptr [EAX + 0x24]
00697db1  FLD float ptr [EAX + 0x58]
00697db4  FSUB float ptr [EAX + 0x18]
00697db7  FLD float ptr [EAX + 0x1c]
00697dba  FSUB float ptr [EAX + 0x5c]
00697dbd  FLD float ptr [EAX + 0x18]
00697dc0  FADD float ptr [EAX + 0x58]
00697dc3  FSTP float ptr [EAX + 0x58]
00697dc6  FLD float ptr [EAX + 0x1c]
00697dc9  FADD float ptr [EAX + 0x5c]
00697dcc  FSTP float ptr [EAX + 0x5c]
00697dcf  FSTP float ptr [EAX + 0x18]
00697dd2  FSTP float ptr [EAX + 0x1c]
00697dd5  FLD float ptr [EAX + 0x10]
00697dd8  FSUB float ptr [EAX + 0x50]
00697ddb  FLD float ptr [EAX + 0x14]
00697dde  FSUB float ptr [EAX + 0x54]
00697de1  FLD float ptr [EAX + 0x50]
00697de4  FADD float ptr [EAX + 0x10]
00697de7  FSTP float ptr [EAX + 0x50]
00697dea  FLD float ptr [EAX + 0x14]
00697ded  FADD float ptr [EAX + 0x54]
00697df0  FSTP float ptr [EAX + 0x54]
00697df3  FLD float ptr [0x006e57dc]
00697df9  FMUL ST1
00697dfb  FLD ST2
00697dfd  FMUL float ptr [0x006e57d8]
00697e03  FADDP
00697e05  FSTP float ptr [EAX + 0x10]
00697e08  FMUL float ptr [0x006e57d8]
00697e0e  FXCH
00697e10  FMUL float ptr [0x006e57dc]
00697e16  FSUBP
00697e18  FSTP float ptr [EAX + 0x14]
00697e1b  FLD float ptr [EAX + 0x8]
00697e1e  FSUB float ptr [EAX + 0x48]
00697e21  FLD float ptr [EAX + 0xc]
00697e24  FSUB float ptr [EAX + 0x4c]
00697e27  FLD float ptr [EAX + 0x48]
00697e2a  FADD float ptr [EAX + 0x8]
00697e2d  FSTP float ptr [EAX + 0x48]
00697e30  FLD float ptr [EAX + 0x4c]
00697e33  FADD float ptr [EAX + 0xc]
00697e36  FSTP float ptr [EAX + 0x4c]
00697e39  FLD ST0
00697e3b  FADD ST0,ST2
00697e3d  FMUL float ptr [0x006e57d4]
00697e43  FSTP float ptr [EAX + 0x8]
00697e46  FSUB ST0,ST1
00697e48  FMUL float ptr [0x006e57d4]
00697e4e  FSTP float ptr [EAX + 0xc]
00697e51  FSTP ST0
00697e53  FLD float ptr [EAX]
00697e55  FSUB float ptr [EAX + 0x40]
00697e58  FLD float ptr [EAX + 0x4]
00697e5b  FSUB float ptr [EAX + 0x44]
00697e5e  FLD float ptr [EAX + 0x40]
00697e61  FADD float ptr [EAX]
00697e63  FSTP float ptr [EAX + 0x40]
00697e66  FLD float ptr [EAX + 0x44]
00697e69  FADD float ptr [EAX + 0x4]
00697e6c  FSTP float ptr [EAX + 0x44]
00697e6f  FLD float ptr [0x006e57d8]
00697e75  FMUL ST1
00697e77  FLD ST2
00697e79  FMUL float ptr [0x006e57dc]
00697e7f  FADDP
00697e81  FSTP float ptr [ESP + 0xc]
00697e85  FMUL float ptr [0x006e57dc]
00697e8b  FXCH
00697e8d  FMUL float ptr [0x006e57d8]
00697e93  FSUBP
00697e95  FLD ST0
00697e97  FSUB float ptr [EAX + 0x24]
00697e9a  FLD float ptr [ESP + 0xc]
00697e9e  FSUB float ptr [EAX + 0x20]
00697ea1  FLD float ptr [ESP + 0xc]
00697ea5  FADD float ptr [EAX + 0x20]
00697ea8  FSTP float ptr [EAX + 0x20]
00697eab  FXCH ST2
00697ead  FADD float ptr [EAX + 0x24]
00697eb0  FSTP float ptr [EAX + 0x24]
00697eb3  FXCH
00697eb5  FLD ST0
00697eb7  FADD ST0,ST2
00697eb9  FMUL float ptr [0x006e57d4]
00697ebf  FSTP float ptr [EAX]
00697ec1  FXCH
00697ec3  FSUB ST0,ST1
00697ec5  FMUL float ptr [0x006e57d4]
00697ecb  FSTP float ptr [EAX + 0x4]
00697ece  FSTP ST0
00697ed0  FLD float ptr [EAX + 0xc]
00697ed3  FSUB float ptr [EAX + 0x2c]
00697ed6  FLD float ptr [EAX + 0x28]
00697ed9  FSUB float ptr [EAX + 0x8]
00697edc  FLD float ptr [EAX + 0x8]
00697edf  FADD float ptr [EAX + 0x28]
00697ee2  FSTP float ptr [EAX + 0x28]
00697ee5  FLD float ptr [EAX + 0xc]
00697ee8  FADD float ptr [EAX + 0x2c]
00697eeb  FSTP float ptr [EAX + 0x2c]
00697eee  FXCH
00697ef0  FSTP float ptr [EAX + 0x8]
00697ef3  FSTP float ptr [EAX + 0xc]
00697ef6  FLD float ptr [EAX + 0x30]
00697ef9  FSUB float ptr [EAX + 0x10]
00697efc  FLD float ptr [EAX + 0x34]
00697eff  FSUB float ptr [EAX + 0x14]
00697f02  FLD float ptr [EAX + 0x30]
00697f05  FADD float ptr [EAX + 0x10]
00697f08  FSTP float ptr [EAX + 0x30]
00697f0b  FLD float ptr [EAX + 0x14]
00697f0e  FADD float ptr [EAX + 0x34]
00697f11  FSTP float ptr [EAX + 0x34]
00697f14  FLD ST1
00697f16  FSUB ST0,ST1
00697f18  FMUL float ptr [0x006e57d4]
00697f1e  FSTP float ptr [EAX + 0x10]
00697f21  FADD ST0,ST1
00697f23  FMUL float ptr [0x006e57d4]
00697f29  FSTP float ptr [EAX + 0x14]
00697f2c  FSTP ST0
00697f2e  FLD float ptr [EAX + 0x38]
00697f31  FSUB float ptr [EAX + 0x18]
00697f34  FLD float ptr [EAX + 0x3c]
00697f37  FSUB float ptr [EAX + 0x1c]
00697f3a  FLD float ptr [EAX + 0x38]
00697f3d  FADD float ptr [EAX + 0x18]
00697f40  FSTP float ptr [EAX + 0x38]
00697f43  FLD float ptr [EAX + 0x1c]
00697f46  FADD float ptr [EAX + 0x3c]
00697f49  FSTP float ptr [EAX + 0x3c]
00697f4c  FLD ST1
00697f4e  FADD float ptr [EAX + 0x8]
00697f51  FXCH ST2
00697f53  FSUB float ptr [EAX + 0x8]
00697f56  FLD float ptr [EAX]
00697f58  FADD float ptr [EAX + 0x10]
00697f5b  FLD float ptr [EAX + 0x10]
00697f5e  FSUB float ptr [EAX]
00697f60  FSTP float ptr [ESP]
00697f64  FLD ST0
00697f66  FADD ST0,ST4
00697f68  FSTP float ptr [EAX + 0x18]
00697f6b  FXCH ST3
00697f6d  FSUB ST0,ST3
00697f6f  LEA ECX,[EAX + 0x60]
00697f72  FSTP float ptr [EAX + 0x10]
00697f75  FSTP ST2
00697f77  FLD float ptr [EAX + 0x14]
00697f7a  FSUB float ptr [EAX + 0x4]
00697f7d  FLD ST1
00697f7f  FSUB float ptr [EAX + 0xc]
00697f82  FSTP float ptr [ESP + 0xc]
00697f86  FLD ST2
00697f88  FADD ST0,ST1
00697f8a  FSTP float ptr [EAX]
00697f8c  FXCH ST2
00697f8e  FSUB ST0,ST2
00697f90  FSTP float ptr [EAX + 0x8]
00697f93  FSTP ST1
00697f95  FLD float ptr [EAX + 0x14]
00697f98  FADD float ptr [EAX + 0x4]
00697f9b  FSTP float ptr [ESP + 0x4]
00697f9f  FADD float ptr [EAX + 0xc]
00697fa2  FLD float ptr [ESP]
00697fa6  FADD float ptr [ESP + 0xc]
00697faa  FSTP float ptr [EAX + 0xc]
00697fad  FLD float ptr [ESP + 0xc]
00697fb1  FSUB float ptr [ESP]
00697fb5  FSTP float ptr [EAX + 0x4]
00697fb8  FLD float ptr [ESP + 0x4]
00697fbc  FADD ST0,ST1
00697fbe  FSTP float ptr [EAX + 0x1c]
00697fc1  FSUB float ptr [ESP + 0x4]
00697fc5  FSTP float ptr [EAX + 0x14]
00697fc8  FLD float ptr [EAX + 0x28]
00697fcb  FADD float ptr [EAX + 0x38]
00697fce  FLD float ptr [EAX + 0x38]
00697fd1  FSUB float ptr [EAX + 0x28]
00697fd4  FLD float ptr [EAX + 0x20]
00697fd7  FADD float ptr [EAX + 0x30]
00697fda  FLD float ptr [EAX + 0x30]
00697fdd  FSUB float ptr [EAX + 0x20]
00697fe0  FSTP float ptr [ESP + 0x4]
00697fe4  FLD ST0
00697fe6  FADD ST0,ST3
00697fe8  FSTP float ptr [EAX + 0x38]
00697feb  FXCH ST2
00697fed  FSUB ST0,ST2
00697fef  FSTP float ptr [EAX + 0x30]
00697ff2  FSTP ST1
00697ff4  FLD float ptr [EAX + 0x34]
00697ff7  FSUB float ptr [EAX + 0x24]
00697ffa  FLD float ptr [EAX + 0x3c]
00697ffd  FSUB float ptr [EAX + 0x2c]
00698000  FSTP float ptr [ESP + 0xc]
00698004  FLD ST1
00698006  FADD ST0,ST1
00698008  FSTP float ptr [EAX + 0x20]
0069800b  FXCH
0069800d  FSUB ST0,ST1
0069800f  FSTP float ptr [EAX + 0x28]
00698012  FSTP ST0
00698014  FLD float ptr [EAX + 0x24]
00698017  FADD float ptr [EAX + 0x34]
0069801a  FLD float ptr [EAX + 0x2c]
0069801d  FADD float ptr [EAX + 0x3c]
00698020  FLD float ptr [ESP + 0x4]
00698024  FADD float ptr [ESP + 0xc]
00698028  FSTP float ptr [EAX + 0x2c]
0069802b  FLD float ptr [ESP + 0xc]
0069802f  FSUB float ptr [ESP + 0x4]
00698033  FSTP float ptr [EAX + 0x24]
00698036  FLD ST0
00698038  FADD ST0,ST2
0069803a  FSTP float ptr [EAX + 0x3c]
0069803d  FSUB ST0,ST1
0069803f  FSTP float ptr [EAX + 0x34]
00698042  FSTP ST0
00698044  FLD float ptr [EAX + 0x44]
00698047  FSUB float ptr [EAX + 0x64]
0069804a  FLD float ptr [EAX + 0x40]
0069804d  FSUB float ptr [ECX]
0069804f  FLD float ptr [EAX + 0x40]
00698052  FADD float ptr [ECX]
00698054  FSTP float ptr [ECX]
00698056  FLD float ptr [EAX + 0x64]
00698059  FADD float ptr [EAX + 0x44]
0069805c  FSTP float ptr [EAX + 0x64]
0069805f  FLD ST0
00698061  FADD ST0,ST2
00698063  FMUL float ptr [0x006e57d4]
00698069  FSTP float ptr [EAX + 0x40]
0069806c  FXCH
0069806e  FSUB ST0,ST1
00698070  FMUL float ptr [0x006e57d4]
00698076  FSTP float ptr [EAX + 0x44]
00698079  FSTP ST0
0069807b  FLD float ptr [EAX + 0x4c]
0069807e  FSUB float ptr [EAX + 0x6c]
00698081  FLD float ptr [EAX + 0x68]
00698084  FSUB float ptr [EAX + 0x48]
00698087  FLD float ptr [EAX + 0x48]
0069808a  FADD float ptr [EAX + 0x68]
0069808d  FSTP float ptr [EAX + 0x68]
00698090  FLD float ptr [EAX + 0x6c]
00698093  FADD float ptr [EAX + 0x4c]
00698096  FSTP float ptr [EAX + 0x6c]
00698099  FXCH
0069809b  FSTP float ptr [EAX + 0x48]
0069809e  FSTP float ptr [EAX + 0x4c]
006980a1  FLD float ptr [EAX + 0x70]
006980a4  FSUB float ptr [EAX + 0x50]
006980a7  FLD float ptr [EAX + 0x74]
006980aa  FSUB float ptr [EAX + 0x54]
006980ad  FLD float ptr [EAX + 0x50]
006980b0  FADD float ptr [EAX + 0x70]
006980b3  FSTP float ptr [EAX + 0x70]
006980b6  FLD float ptr [EAX + 0x54]
006980b9  FADD float ptr [EAX + 0x74]
006980bc  FSTP float ptr [EAX + 0x74]
006980bf  FLD ST1
006980c1  FSUB ST0,ST1
006980c3  FMUL float ptr [0x006e57d4]
006980c9  FSTP float ptr [EAX + 0x50]
006980cc  FADD ST0,ST1
006980ce  FMUL float ptr [0x006e57d4]
006980d4  FSTP float ptr [EAX + 0x54]
006980d7  FSTP ST0
006980d9  FLD float ptr [EAX + 0x78]
006980dc  FSUB float ptr [EAX + 0x58]
006980df  FLD float ptr [EAX + 0x7c]
006980e2  FSUB float ptr [EAX + 0x5c]
006980e5  FLD float ptr [EAX + 0x58]
006980e8  FADD float ptr [EAX + 0x78]
006980eb  FSTP float ptr [EAX + 0x78]
006980ee  FLD float ptr [EAX + 0x5c]
006980f1  FADD float ptr [EAX + 0x7c]
006980f4  FSTP float ptr [EAX + 0x7c]
006980f7  FLD ST1
006980f9  FADD float ptr [EAX + 0x48]
006980fc  FXCH ST2
006980fe  FSUB float ptr [EAX + 0x48]
00698101  FLD float ptr [EAX + 0x50]
00698104  FADD float ptr [EAX + 0x40]
00698107  FLD float ptr [EAX + 0x50]
0069810a  FSUB float ptr [EAX + 0x40]
0069810d  FSTP float ptr [ESP + 0x4]
00698111  FLD ST0
00698113  FADD ST0,ST4
00698115  FSTP float ptr [EAX + 0x58]
00698118  FXCH ST3
0069811a  FSUB ST0,ST3
0069811c  FSTP float ptr [EAX + 0x50]
0069811f  FSTP ST2
00698121  FLD float ptr [EAX + 0x54]
00698124  FSUB float ptr [EAX + 0x44]
00698127  FLD ST1
00698129  FSUB float ptr [EAX + 0x4c]
0069812c  ADD ESP,0x8
0069812f  FSTP float ptr [ESP + 0x4]
00698133  FLD ST2
00698135  FADD ST0,ST1
00698137  FSTP float ptr [EAX + 0x40]
0069813a  FXCH ST2
0069813c  FSUB ST0,ST2
0069813e  FSTP float ptr [EAX + 0x48]
00698141  FSTP ST1
00698143  FLD float ptr [EAX + 0x44]
00698146  FADD float ptr [EAX + 0x54]
00698149  FSTP float ptr [ESP + -0x8]
0069814d  FADD float ptr [EAX + 0x4c]
00698150  FLD float ptr [ESP + -0x4]
00698154  FADD float ptr [ESP + 0x4]
00698158  FSTP float ptr [EAX + 0x4c]
0069815b  FLD float ptr [ESP + 0x4]
0069815f  FSUB float ptr [ESP + -0x4]
00698163  MOV dword ptr [ESP + 0x4],ECX
00698167  FSTP float ptr [EAX + 0x44]
0069816a  FLD float ptr [ESP + -0x8]
0069816e  FADD ST0,ST1
00698170  FSTP float ptr [EAX + 0x5c]
00698173  FSUB float ptr [ESP + -0x8]
00698177  FSTP float ptr [EAX + 0x54]
0069817a  JMP 0x00698180
00698180  PUSH ECX
00698181  MOV EAX,dword ptr [ESP + 0x8]
00698185  FLD float ptr [EAX + 0x8]
00698188  FADD float ptr [EAX + 0x18]
0069818b  FLD float ptr [EAX + 0x18]
0069818e  FSUB float ptr [EAX + 0x8]
00698191  FLD float ptr [EAX]
00698193  FADD float ptr [EAX + 0x10]
00698196  FLD float ptr [EAX + 0x10]
00698199  FSUB float ptr [EAX]
0069819b  FSTP float ptr [ESP]
0069819f  FLD ST0
006981a1  FADD ST0,ST3
006981a3  FSTP float ptr [EAX + 0x18]
006981a6  FXCH ST2
006981a8  FSUB ST0,ST2
006981aa  FSTP float ptr [EAX + 0x10]
006981ad  FSTP ST1
006981af  FLD float ptr [EAX + 0x14]
006981b2  FSUB float ptr [EAX + 0x4]
006981b5  FLD float ptr [EAX + 0x1c]
006981b8  FSUB float ptr [EAX + 0xc]
006981bb  FSTP float ptr [ESP + 0x8]
006981bf  FLD ST1
006981c1  FADD ST0,ST1
006981c3  FSTP float ptr [EAX]
006981c5  FXCH
006981c7  FSUB ST0,ST1
006981c9  FSTP float ptr [EAX + 0x8]
006981cc  FSTP ST0
006981ce  FLD float ptr [EAX + 0x4]
006981d1  FADD float ptr [EAX + 0x14]
006981d4  FLD float ptr [EAX + 0xc]
006981d7  FADD float ptr [EAX + 0x1c]
006981da  FLD float ptr [ESP]
006981de  FADD float ptr [ESP + 0x8]
006981e2  FSTP float ptr [EAX + 0xc]
006981e5  FLD float ptr [ESP + 0x8]
006981e9  FSUB float ptr [ESP]
006981ed  FSTP float ptr [EAX + 0x4]
006981f0  FLD ST0
006981f2  FADD ST0,ST2
006981f4  FSTP float ptr [EAX + 0x1c]
006981f7  FSUB ST0,ST1
006981f9  FSTP float ptr [EAX + 0x14]
006981fc  FSTP ST0
006981fe  POP ECX
006981ff  RET

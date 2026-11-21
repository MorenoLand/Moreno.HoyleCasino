; FUN_00611ca0  00611ca0
00611ca0  PUSH EBP
00611ca1  MOV EBP,ESP
00611ca3  PUSH -0x1
00611ca5  PUSH 0x6aaf88
00611caa  MOV EAX,FS:[0x0]
00611cb0  PUSH EAX
00611cb1  PUSH ECX
00611cb2  SUB ESP,0x2ac
00611cb8  PUSH EBX
00611cb9  PUSH ESI
00611cba  PUSH EDI
00611cbb  MOV EAX,[0x00781870]
00611cc0  XOR EAX,EBP
00611cc2  PUSH EAX
00611cc3  LEA EAX,[EBP + -0xc]
00611cc6  MOV FS:[0x0],EAX
00611ccc  MOV dword ptr [EBP + -0x10],ESP
00611ccf  MOV dword ptr [EBP + 0xfffffd6c],ECX
00611cd5  MOV EAX,dword ptr [EBP + 0x14]
00611cd8  PUSH EAX
00611cd9  LEA ECX,[EBP + -0x58]
00611cdc  CALL 0x00610570
00611ce1  MOV dword ptr [EBP + -0x4],0x0
00611ce8  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00611cee  CMP dword ptr [ECX + 0x4],0x0
00611cf2  JNZ 0x00611d00
00611cf4  MOV dword ptr [EBP + 0xfffffd68],0x0
00611cfe  JMP 0x00611d22
00611d00  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00611d06  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00611d0c  MOV ECX,dword ptr [EDX + 0xc]
00611d0f  SUB ECX,dword ptr [EAX + 0x4]
00611d12  MOV EAX,ECX
00611d14  CDQ
00611d15  MOV ECX,0x48
00611d1a  IDIV ECX
00611d1c  MOV dword ptr [EBP + 0xfffffd68],EAX
00611d22  MOV EDX,dword ptr [EBP + 0xfffffd68]
00611d28  MOV dword ptr [EBP + -0x5c],EDX
00611d2b  CMP dword ptr [EBP + 0x10],0x0
00611d2f  JNZ 0x00611d36
00611d31  JMP 0x00612661
00611d36  MOV dword ptr [EBP + -0x6c],0x38e38e3
00611d3d  CMP dword ptr [EBP + -0x6c],0x0
00611d41  JBE 0x00611d4e
00611d43  MOV EAX,dword ptr [EBP + -0x6c]
00611d46  MOV dword ptr [EBP + 0xfffffd64],EAX
00611d4c  JMP 0x00611d58
00611d4e  MOV dword ptr [EBP + 0xfffffd64],0x1
00611d58  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00611d5e  CMP dword ptr [ECX + 0x4],0x0
00611d62  JNZ 0x00611d70
00611d64  MOV dword ptr [EBP + 0xfffffd60],0x0
00611d6e  JMP 0x00611d92
00611d70  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00611d76  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00611d7c  MOV ECX,dword ptr [EDX + 0x8]
00611d7f  SUB ECX,dword ptr [EAX + 0x4]
00611d82  MOV EAX,ECX
00611d84  CDQ
00611d85  MOV ECX,0x48
00611d8a  IDIV ECX
00611d8c  MOV dword ptr [EBP + 0xfffffd60],EAX
00611d92  MOV EDX,dword ptr [EBP + 0xfffffd64]
00611d98  SUB EDX,dword ptr [EBP + 0xfffffd60]
00611d9e  CMP EDX,dword ptr [EBP + 0x10]
00611da1  JNC 0x00611dad
00611da3  CALL 0x006126e0
00611da8  JMP 0x00612661
00611dad  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00611db3  CMP dword ptr [EAX + 0x4],0x0
00611db7  JNZ 0x00611dc5
00611db9  MOV dword ptr [EBP + 0xfffffd5c],0x0
00611dc3  JMP 0x00611de5
00611dc5  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00611dcb  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00611dd1  MOV EAX,dword ptr [ECX + 0x8]
00611dd4  SUB EAX,dword ptr [EDX + 0x4]
00611dd7  CDQ
00611dd8  MOV ECX,0x48
00611ddd  IDIV ECX
00611ddf  MOV dword ptr [EBP + 0xfffffd5c],EAX
00611de5  MOV EDX,dword ptr [EBP + 0xfffffd5c]
00611deb  ADD EDX,dword ptr [EBP + 0x10]
00611dee  CMP dword ptr [EBP + -0x5c],EDX
00611df1  JNC 0x006122b1
00611df7  MOV dword ptr [EBP + 0xffffff4c],0x38e38e3
00611e01  CMP dword ptr [EBP + 0xffffff4c],0x0
00611e08  JBE 0x00611e18
00611e0a  MOV EAX,dword ptr [EBP + 0xffffff4c]
00611e10  MOV dword ptr [EBP + 0xfffffd58],EAX
00611e16  JMP 0x00611e22
00611e18  MOV dword ptr [EBP + 0xfffffd58],0x1
00611e22  MOV ECX,dword ptr [EBP + -0x5c]
00611e25  SHR ECX,0x1
00611e27  MOV EDX,dword ptr [EBP + 0xfffffd58]
00611e2d  SUB EDX,ECX
00611e2f  CMP EDX,dword ptr [EBP + -0x5c]
00611e32  JNC 0x00611e40
00611e34  MOV dword ptr [EBP + 0xfffffd54],0x0
00611e3e  JMP 0x00611e4e
00611e40  MOV EAX,dword ptr [EBP + -0x5c]
00611e43  SHR EAX,0x1
00611e45  ADD EAX,dword ptr [EBP + -0x5c]
00611e48  MOV dword ptr [EBP + 0xfffffd54],EAX
00611e4e  MOV ECX,dword ptr [EBP + 0xfffffd54]
00611e54  MOV dword ptr [EBP + -0x5c],ECX
00611e57  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00611e5d  CMP dword ptr [EDX + 0x4],0x0
00611e61  JNZ 0x00611e6f
00611e63  MOV dword ptr [EBP + 0xfffffd50],0x0
00611e6d  JMP 0x00611e8f
00611e6f  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00611e75  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00611e7b  MOV EAX,dword ptr [EAX + 0x8]
00611e7e  SUB EAX,dword ptr [ECX + 0x4]
00611e81  CDQ
00611e82  MOV ECX,0x48
00611e87  IDIV ECX
00611e89  MOV dword ptr [EBP + 0xfffffd50],EAX
00611e8f  MOV EDX,dword ptr [EBP + 0xfffffd50]
00611e95  ADD EDX,dword ptr [EBP + 0x10]
00611e98  CMP dword ptr [EBP + -0x5c],EDX
00611e9b  JNC 0x00611ee1
00611e9d  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00611ea3  CMP dword ptr [EAX + 0x4],0x0
00611ea7  JNZ 0x00611eb5
00611ea9  MOV dword ptr [EBP + 0xfffffd4c],0x0
00611eb3  JMP 0x00611ed5
00611eb5  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00611ebb  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00611ec1  MOV EAX,dword ptr [ECX + 0x8]
00611ec4  SUB EAX,dword ptr [EDX + 0x4]
00611ec7  CDQ
00611ec8  MOV ECX,0x48
00611ecd  IDIV ECX
00611ecf  MOV dword ptr [EBP + 0xfffffd4c],EAX
00611ed5  MOV EDX,dword ptr [EBP + 0xfffffd4c]
00611edb  ADD EDX,dword ptr [EBP + 0x10]
00611ede  MOV dword ptr [EBP + -0x5c],EDX
00611ee1  PUSH 0x0
00611ee3  MOV EAX,dword ptr [EBP + -0x5c]
00611ee6  PUSH EAX
00611ee7  CALL 0x0068fa30
00611eec  ADD ESP,0x8
00611eef  MOV dword ptr [EBP + -0x64],EAX
00611ef2  MOV ECX,dword ptr [EBP + -0x64]
00611ef5  MOV dword ptr [EBP + -0x60],ECX
00611ef8  MOV byte ptr [EBP + -0x4],0x1
00611efc  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00611f02  MOV EAX,dword ptr [EDX + 0x4]
00611f05  MOV dword ptr [EBP + 0xffffff24],EAX
00611f0b  MOV ECX,dword ptr [EBP + -0x64]
00611f0e  MOV dword ptr [EBP + 0xffffff28],ECX
00611f14  MOV EDX,dword ptr [EBP + 0xc]
00611f17  MOV dword ptr [EBP + 0xffffff2c],EDX
00611f1d  MOV EAX,dword ptr [EBP + 0xffffff24]
00611f23  MOV dword ptr [EBP + 0xffffff30],EAX
00611f29  XOR ECX,ECX
00611f2b  MOV byte ptr [EBP + 0xffffff4b],CL
00611f31  MOV DL,byte ptr [EBP + 0xffffff49]
00611f37  MOV byte ptr [EBP + 0xffffff4a],DL
00611f3d  MOV EAX,dword ptr [EBP + 0xffffff2c]
00611f43  MOV dword ptr [EBP + 0xffffff44],EAX
00611f49  MOV ECX,dword ptr [EBP + 0xffffff30]
00611f4f  MOV dword ptr [EBP + 0xffffff3c],ECX
00611f55  MOV DL,byte ptr [EBP + 0xffffff4b]
00611f5b  MOV byte ptr [EBP + 0xffffff37],DL
00611f61  MOV EAX,dword ptr [EBP + 0xffffff28]
00611f67  MOV dword ptr [EBP + 0xffffff38],EAX
00611f6d  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00611f73  PUSH ECX
00611f74  MOV EDX,dword ptr [EBP + 0xffffff38]
00611f7a  PUSH EDX
00611f7b  MOV EAX,dword ptr [EBP + 0xffffff44]
00611f81  PUSH EAX
00611f82  MOV ECX,dword ptr [EBP + 0xffffff3c]
00611f88  PUSH ECX
00611f89  CALL 0x00612c20
00611f8e  ADD ESP,0x10
00611f91  MOV dword ptr [EBP + 0xfffffd48],EAX
00611f97  MOV EDX,dword ptr [EBP + 0xfffffd48]
00611f9d  MOV dword ptr [EBP + -0x60],EDX
00611fa0  MOV EAX,dword ptr [EBP + -0x60]
00611fa3  MOV dword ptr [EBP + 0xffffff1c],EAX
00611fa9  XOR ECX,ECX
00611fab  MOV byte ptr [EBP + 0xffffff23],CL
00611fb1  MOV DL,byte ptr [EBP + 0xffffff21]
00611fb7  MOV byte ptr [EBP + 0xffffff22],DL
00611fbd  MOV AL,byte ptr [EBP + 0xffffff23]
00611fc3  PUSH EAX
00611fc4  MOV CL,byte ptr [EBP + 0xffffff22]
00611fca  PUSH ECX
00611fcb  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00611fd1  PUSH EDX
00611fd2  LEA EAX,[EBP + -0x58]
00611fd5  PUSH EAX
00611fd6  MOV ECX,dword ptr [EBP + 0x10]
00611fd9  PUSH ECX
00611fda  MOV EDX,dword ptr [EBP + 0xffffff1c]
00611fe0  PUSH EDX
00611fe1  CALL 0x00612970
00611fe6  ADD ESP,0x18
00611fe9  MOV EAX,dword ptr [EBP + 0x10]
00611fec  IMUL EAX,EAX,0x48
00611fef  ADD EAX,dword ptr [EBP + -0x60]
00611ff2  MOV dword ptr [EBP + -0x60],EAX
00611ff5  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00611ffb  MOV EDX,dword ptr [ECX + 0x8]
00611ffe  MOV dword ptr [EBP + 0xfffffef4],EDX
00612004  MOV EAX,dword ptr [EBP + -0x60]
00612007  MOV dword ptr [EBP + 0xfffffef8],EAX
0061200d  MOV ECX,dword ptr [EBP + 0xfffffef4]
00612013  MOV dword ptr [EBP + 0xfffffefc],ECX
00612019  MOV EDX,dword ptr [EBP + 0xc]
0061201c  MOV dword ptr [EBP + 0xffffff00],EDX
00612022  XOR EAX,EAX
00612024  MOV byte ptr [EBP + 0xffffff1b],AL
0061202a  MOV CL,byte ptr [EBP + 0xffffff19]
00612030  MOV byte ptr [EBP + 0xffffff1a],CL
00612036  MOV EDX,dword ptr [EBP + 0xfffffefc]
0061203c  MOV dword ptr [EBP + 0xffffff14],EDX
00612042  MOV EAX,dword ptr [EBP + 0xffffff00]
00612048  MOV dword ptr [EBP + 0xffffff0c],EAX
0061204e  MOV CL,byte ptr [EBP + 0xffffff1b]
00612054  MOV byte ptr [EBP + 0xffffff07],CL
0061205a  MOV EDX,dword ptr [EBP + 0xfffffef8]
00612060  MOV dword ptr [EBP + 0xffffff08],EDX
00612066  MOV EAX,dword ptr [EBP + 0xfffffd6c]
0061206c  PUSH EAX
0061206d  MOV ECX,dword ptr [EBP + 0xffffff08]
00612073  PUSH ECX
00612074  MOV EDX,dword ptr [EBP + 0xffffff14]
0061207a  PUSH EDX
0061207b  MOV EAX,dword ptr [EBP + 0xffffff0c]
00612081  PUSH EAX
00612082  CALL 0x00612c20
00612087  ADD ESP,0x10
0061208a  JMP 0x00612138
006122b1  MOV EDX,dword ptr [EBP + 0xfffffd6c]
006122b7  MOV EAX,dword ptr [EDX + 0x8]
006122ba  SUB EAX,dword ptr [EBP + 0xc]
006122bd  CDQ
006122be  MOV ECX,0x48
006122c3  IDIV ECX
006122c5  CMP EAX,dword ptr [EBP + 0x10]
006122c8  JNC 0x00612536
006122ce  MOV EDX,dword ptr [EBP + 0xfffffd6c]
006122d4  MOV EAX,dword ptr [EDX + 0x8]
006122d7  MOV dword ptr [EBP + 0xfffffe74],EAX
006122dd  MOV ECX,dword ptr [EBP + 0x10]
006122e0  IMUL ECX,ECX,0x48
006122e3  ADD ECX,dword ptr [EBP + 0xc]
006122e6  MOV dword ptr [EBP + 0xfffffe78],ECX
006122ec  MOV EDX,dword ptr [EBP + 0xfffffe74]
006122f2  MOV dword ptr [EBP + 0xfffffe7c],EDX
006122f8  MOV EAX,dword ptr [EBP + 0xc]
006122fb  MOV dword ptr [EBP + 0xfffffe80],EAX
00612301  XOR ECX,ECX
00612303  MOV byte ptr [EBP + 0xfffffe9b],CL
00612309  MOV DL,byte ptr [EBP + 0xfffffe99]
0061230f  MOV byte ptr [EBP + 0xfffffe9a],DL
00612315  MOV EAX,dword ptr [EBP + 0xfffffe7c]
0061231b  MOV dword ptr [EBP + 0xfffffe94],EAX
00612321  MOV ECX,dword ptr [EBP + 0xfffffe80]
00612327  MOV dword ptr [EBP + 0xfffffe8c],ECX
0061232d  MOV DL,byte ptr [EBP + 0xfffffe9b]
00612333  MOV byte ptr [EBP + 0xfffffe87],DL
00612339  MOV EAX,dword ptr [EBP + 0xfffffe78]
0061233f  MOV dword ptr [EBP + 0xfffffe88],EAX
00612345  MOV ECX,dword ptr [EBP + 0xfffffd6c]
0061234b  PUSH ECX
0061234c  MOV EDX,dword ptr [EBP + 0xfffffe88]
00612352  PUSH EDX
00612353  MOV EAX,dword ptr [EBP + 0xfffffe94]
00612359  PUSH EAX
0061235a  MOV ECX,dword ptr [EBP + 0xfffffe8c]
00612360  PUSH ECX
00612361  CALL 0x00612c20
00612366  ADD ESP,0x10
00612369  MOV byte ptr [EBP + -0x4],0x3
0061236d  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00612373  MOV EAX,dword ptr [EDX + 0x8]
00612376  SUB EAX,dword ptr [EBP + 0xc]
00612379  CDQ
0061237a  MOV ECX,0x48
0061237f  IDIV ECX
00612381  MOV EDX,dword ptr [EBP + 0x10]
00612384  SUB EDX,EAX
00612386  MOV dword ptr [EBP + 0xfffffe64],EDX
0061238c  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00612392  MOV ECX,dword ptr [EAX + 0x8]
00612395  MOV dword ptr [EBP + 0xfffffe68],ECX
0061239b  MOV EDX,dword ptr [EBP + 0xfffffe68]
006123a1  MOV dword ptr [EBP + 0xfffffe6c],EDX
006123a7  XOR EAX,EAX
006123a9  MOV byte ptr [EBP + 0xfffffe73],AL
006123af  MOV CL,byte ptr [EBP + 0xfffffe71]
006123b5  MOV byte ptr [EBP + 0xfffffe72],CL
006123bb  MOV DL,byte ptr [EBP + 0xfffffe73]
006123c1  PUSH EDX
006123c2  MOV AL,byte ptr [EBP + 0xfffffe72]
006123c8  PUSH EAX
006123c9  MOV ECX,dword ptr [EBP + 0xfffffd6c]
006123cf  PUSH ECX
006123d0  LEA EDX,[EBP + -0x58]
006123d3  PUSH EDX
006123d4  MOV EAX,dword ptr [EBP + 0xfffffe64]
006123da  PUSH EAX
006123db  MOV ECX,dword ptr [EBP + 0xfffffe6c]
006123e1  PUSH ECX
006123e2  CALL 0x00612970
006123e7  ADD ESP,0x18
006123ea  JMP 0x006124aa
00612536  MOV EDX,dword ptr [EBP + 0xfffffd6c]
0061253c  MOV EAX,dword ptr [EDX + 0x8]
0061253f  MOV dword ptr [EBP + -0x68],EAX
00612542  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00612548  MOV EDX,dword ptr [ECX + 0x8]
0061254b  MOV dword ptr [EBP + 0xfffffde0],EDX
00612551  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00612557  PUSH EAX
00612558  MOV ECX,dword ptr [EBP + 0xfffffde0]
0061255e  PUSH ECX
0061255f  MOV EDX,dword ptr [EBP + -0x68]
00612562  PUSH EDX
00612563  MOV EAX,dword ptr [EBP + 0x10]
00612566  IMUL EAX,EAX,0x48
00612569  MOV ECX,dword ptr [EBP + -0x68]
0061256c  SUB ECX,EAX
0061256e  PUSH ECX
0061256f  CALL 0x00612a70
00612574  ADD ESP,0x10
00612577  MOV EDX,dword ptr [EBP + 0xfffffd6c]
0061257d  MOV dword ptr [EDX + 0x8],EAX
00612580  MOV EAX,dword ptr [EBP + -0x68]
00612583  MOV dword ptr [EBP + 0xfffffda8],EAX
00612589  MOV ECX,dword ptr [EBP + 0x10]
0061258c  IMUL ECX,ECX,0x48
0061258f  MOV EDX,dword ptr [EBP + -0x68]
00612592  SUB EDX,ECX
00612594  MOV dword ptr [EBP + 0xfffffdac],EDX
0061259a  MOV EAX,dword ptr [EBP + 0xc]
0061259d  MOV dword ptr [EBP + 0xfffffdb0],EAX
006125a3  XOR ECX,ECX
006125a5  MOV byte ptr [EBP + 0xfffffddf],CL
006125ab  MOV DL,byte ptr [EBP + 0xfffffddc]
006125b1  MOV byte ptr [EBP + 0xfffffdde],DL
006125b7  MOV EAX,dword ptr [EBP + 0xfffffdac]
006125bd  MOV dword ptr [EBP + 0xfffffdd4],EAX
006125c3  MOV ECX,dword ptr [EBP + 0xfffffdb0]
006125c9  MOV dword ptr [EBP + 0xfffffdcc],ECX
006125cf  MOV DL,byte ptr [EBP + 0xfffffddf]
006125d5  PUSH EDX
006125d6  MOV AL,byte ptr [EBP + 0xfffffdde]
006125dc  PUSH EAX
006125dd  MOV CL,byte ptr [EBP + 0xfffffddd]
006125e3  PUSH ECX
006125e4  MOV EDX,dword ptr [EBP + 0xfffffda8]
006125ea  PUSH EDX
006125eb  MOV EAX,dword ptr [EBP + 0xfffffdd4]
006125f1  PUSH EAX
006125f2  MOV ECX,dword ptr [EBP + 0xfffffdcc]
006125f8  PUSH ECX
006125f9  CALL 0x00612af0
006125fe  ADD ESP,0x18
00612601  MOV EDX,dword ptr [EBP + 0x10]
00612604  IMUL EDX,EDX,0x48
00612607  ADD EDX,dword ptr [EBP + 0xc]
0061260a  MOV dword ptr [EBP + 0xfffffd90],EDX
00612610  MOV EAX,dword ptr [EBP + 0xc]
00612613  MOV dword ptr [EBP + 0xfffffd94],EAX
00612619  MOV ECX,dword ptr [EBP + 0xfffffd90]
0061261f  MOV dword ptr [EBP + 0xfffffda0],ECX
00612625  MOV EDX,dword ptr [EBP + 0xfffffd94]
0061262b  MOV dword ptr [EBP + 0xfffffd98],EDX
00612631  JMP 0x00612642
00612633  MOV EAX,dword ptr [EBP + 0xfffffd98]
00612639  ADD EAX,0x48
0061263c  MOV dword ptr [EBP + 0xfffffd98],EAX
00612642  MOV ECX,dword ptr [EBP + 0xfffffd98]
00612648  CMP ECX,dword ptr [EBP + 0xfffffda0]
0061264e  JZ 0x00612661
00612650  LEA EDX,[EBP + -0x58]
00612653  PUSH EDX
00612654  MOV ECX,dword ptr [EBP + 0xfffffd98]
0061265a  CALL 0x00610650
0061265f  JMP 0x00612633

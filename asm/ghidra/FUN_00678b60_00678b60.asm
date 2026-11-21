; FUN_00678b60  00678b60
00678b60  PUSH EBP
00678b61  MOV EBP,ESP
00678b63  PUSH -0x1
00678b65  PUSH 0x6ad7bb
00678b6a  MOV EAX,FS:[0x0]
00678b70  PUSH EAX
00678b71  SUB ESP,0x11c
00678b77  MOV EAX,[0x00781870]
00678b7c  XOR EAX,EBP
00678b7e  PUSH EAX
00678b7f  LEA EAX,[EBP + -0xc]
00678b82  MOV FS:[0x0],EAX
00678b88  MOV dword ptr [EBP + 0xffffff34],ECX
00678b8e  MOV EAX,dword ptr [EBP + 0xffffff34]
00678b94  MOV dword ptr [EAX],0x6e1fe4
00678b9a  MOV dword ptr [EBP + -0x4],0x0
00678ba1  MOV ECX,dword ptr [EBP + 0xffffff34]
00678ba7  CMP dword ptr [ECX + 0x194],0x0
00678bae  JZ 0x00678bfb
00678bb0  MOV EDX,dword ptr [EBP + 0xffffff34]
00678bb6  MOV EAX,dword ptr [EDX + 0x194]
00678bbc  MOV dword ptr [EBP + -0x18],EAX
00678bbf  MOV ECX,dword ptr [EBP + -0x18]
00678bc2  MOV dword ptr [EBP + -0x14],ECX
00678bc5  CMP dword ptr [EBP + -0x14],0x0
00678bc9  JZ 0x00678be1
00678bcb  PUSH 0x1
00678bcd  MOV EDX,dword ptr [EBP + -0x14]
00678bd0  MOV EAX,dword ptr [EDX]
00678bd2  MOV ECX,dword ptr [EBP + -0x14]
00678bd5  MOV EDX,dword ptr [EAX]
00678bd7  CALL EDX
00678bd9  MOV dword ptr [EBP + 0xffffff30],EAX
00678bdf  JMP 0x00678beb
00678be1  MOV dword ptr [EBP + 0xffffff30],0x0
00678beb  MOV EAX,dword ptr [EBP + 0xffffff34]
00678bf1  MOV dword ptr [EAX + 0x194],0x0
00678bfb  MOV dword ptr [EBP + -0x10],0x0
00678c02  JMP 0x00678c0d
00678c04  MOV ECX,dword ptr [EBP + -0x10]
00678c07  ADD ECX,0x1
00678c0a  MOV dword ptr [EBP + -0x10],ECX
00678c0d  CMP dword ptr [EBP + -0x10],0xc
00678c11  JGE 0x00678ce8
00678c17  MOV EDX,dword ptr [EBP + -0x10]
00678c1a  MOV EAX,dword ptr [EBP + 0xffffff34]
00678c20  CMP dword ptr [EAX + EDX*0x4 + 0x198],0x0
00678c28  JZ 0x00678c7d
00678c2a  MOV ECX,dword ptr [EBP + -0x10]
00678c2d  MOV EDX,dword ptr [EBP + 0xffffff34]
00678c33  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x198]
00678c3a  MOV dword ptr [EBP + -0x20],EAX
00678c3d  MOV ECX,dword ptr [EBP + -0x20]
00678c40  MOV dword ptr [EBP + -0x1c],ECX
00678c43  CMP dword ptr [EBP + -0x1c],0x0
00678c47  JZ 0x00678c5f
00678c49  PUSH 0x1
00678c4b  MOV EDX,dword ptr [EBP + -0x1c]
00678c4e  MOV EAX,dword ptr [EDX]
00678c50  MOV ECX,dword ptr [EBP + -0x1c]
00678c53  MOV EDX,dword ptr [EAX]
00678c55  CALL EDX
00678c57  MOV dword ptr [EBP + 0xffffff2c],EAX
00678c5d  JMP 0x00678c69
00678c5f  MOV dword ptr [EBP + 0xffffff2c],0x0
00678c69  MOV EAX,dword ptr [EBP + -0x10]
00678c6c  MOV ECX,dword ptr [EBP + 0xffffff34]
00678c72  MOV dword ptr [ECX + EAX*0x4 + 0x198],0x0
00678c7d  MOV EDX,dword ptr [EBP + -0x10]
00678c80  MOV EAX,dword ptr [EBP + 0xffffff34]
00678c86  CMP dword ptr [EAX + EDX*0x4 + 0x1c8],0x0
00678c8e  JZ 0x00678ce3
00678c90  MOV ECX,dword ptr [EBP + -0x10]
00678c93  MOV EDX,dword ptr [EBP + 0xffffff34]
00678c99  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1c8]
00678ca0  MOV dword ptr [EBP + -0x28],EAX
00678ca3  MOV ECX,dword ptr [EBP + -0x28]
00678ca6  MOV dword ptr [EBP + -0x24],ECX
00678ca9  CMP dword ptr [EBP + -0x24],0x0
00678cad  JZ 0x00678cc5
00678caf  PUSH 0x1
00678cb1  MOV EDX,dword ptr [EBP + -0x24]
00678cb4  MOV EAX,dword ptr [EDX]
00678cb6  MOV ECX,dword ptr [EBP + -0x24]
00678cb9  MOV EDX,dword ptr [EAX]
00678cbb  CALL EDX
00678cbd  MOV dword ptr [EBP + 0xffffff28],EAX
00678cc3  JMP 0x00678ccf
00678cc5  MOV dword ptr [EBP + 0xffffff28],0x0
00678ccf  MOV EAX,dword ptr [EBP + -0x10]
00678cd2  MOV ECX,dword ptr [EBP + 0xffffff34]
00678cd8  MOV dword ptr [ECX + EAX*0x4 + 0x1c8],0x0
00678ce3  JMP 0x00678c04
00678ce8  MOV dword ptr [EBP + -0x10],0x0
00678cef  JMP 0x00678cfa
00678cf1  MOV EDX,dword ptr [EBP + -0x10]
00678cf4  ADD EDX,0x1
00678cf7  MOV dword ptr [EBP + -0x10],EDX
00678cfa  CMP dword ptr [EBP + -0x10],0x3
00678cfe  JGE 0x00678d68
00678d00  MOV EAX,dword ptr [EBP + -0x10]
00678d03  MOV ECX,dword ptr [EBP + 0xffffff34]
00678d09  CMP dword ptr [ECX + EAX*0x4 + 0x1f8],0x0
00678d11  JZ 0x00678d66
00678d13  MOV EDX,dword ptr [EBP + -0x10]
00678d16  MOV EAX,dword ptr [EBP + 0xffffff34]
00678d1c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1f8]
00678d23  MOV dword ptr [EBP + -0x30],ECX
00678d26  MOV EDX,dword ptr [EBP + -0x30]
00678d29  MOV dword ptr [EBP + -0x2c],EDX
00678d2c  CMP dword ptr [EBP + -0x2c],0x0
00678d30  JZ 0x00678d48
00678d32  PUSH 0x1
00678d34  MOV EAX,dword ptr [EBP + -0x2c]
00678d37  MOV EDX,dword ptr [EAX]
00678d39  MOV ECX,dword ptr [EBP + -0x2c]
00678d3c  MOV EAX,dword ptr [EDX]
00678d3e  CALL EAX
00678d40  MOV dword ptr [EBP + 0xffffff24],EAX
00678d46  JMP 0x00678d52
00678d48  MOV dword ptr [EBP + 0xffffff24],0x0
00678d52  MOV ECX,dword ptr [EBP + -0x10]
00678d55  MOV EDX,dword ptr [EBP + 0xffffff34]
00678d5b  MOV dword ptr [EDX + ECX*0x4 + 0x1f8],0x0
00678d66  JMP 0x00678cf1
00678d68  MOV EAX,dword ptr [EBP + 0xffffff34]
00678d6e  CMP dword ptr [EAX + 0x298],0x0
00678d75  JZ 0x00678dc2
00678d77  MOV ECX,dword ptr [EBP + 0xffffff34]
00678d7d  MOV EDX,dword ptr [ECX + 0x298]
00678d83  MOV dword ptr [EBP + -0x38],EDX
00678d86  MOV EAX,dword ptr [EBP + -0x38]
00678d89  MOV dword ptr [EBP + -0x34],EAX
00678d8c  CMP dword ptr [EBP + -0x34],0x0
00678d90  JZ 0x00678da8
00678d92  PUSH 0x1
00678d94  MOV ECX,dword ptr [EBP + -0x34]
00678d97  MOV EDX,dword ptr [ECX]
00678d99  MOV ECX,dword ptr [EBP + -0x34]
00678d9c  MOV EAX,dword ptr [EDX]
00678d9e  CALL EAX
00678da0  MOV dword ptr [EBP + 0xffffff20],EAX
00678da6  JMP 0x00678db2
00678da8  MOV dword ptr [EBP + 0xffffff20],0x0
00678db2  MOV ECX,dword ptr [EBP + 0xffffff34]
00678db8  MOV dword ptr [ECX + 0x298],0x0
00678dc2  MOV EDX,dword ptr [EBP + 0xffffff34]
00678dc8  CMP dword ptr [EDX + 0x208],0x0
00678dcf  JZ 0x00678e1c
00678dd1  MOV EAX,dword ptr [EBP + 0xffffff34]
00678dd7  MOV ECX,dword ptr [EAX + 0x208]
00678ddd  MOV dword ptr [EBP + -0x40],ECX
00678de0  MOV EDX,dword ptr [EBP + -0x40]
00678de3  MOV dword ptr [EBP + -0x3c],EDX
00678de6  CMP dword ptr [EBP + -0x3c],0x0
00678dea  JZ 0x00678e02
00678dec  PUSH 0x1
00678dee  MOV EAX,dword ptr [EBP + -0x3c]
00678df1  MOV EDX,dword ptr [EAX]
00678df3  MOV ECX,dword ptr [EBP + -0x3c]
00678df6  MOV EAX,dword ptr [EDX]
00678df8  CALL EAX
00678dfa  MOV dword ptr [EBP + 0xffffff1c],EAX
00678e00  JMP 0x00678e0c
00678e02  MOV dword ptr [EBP + 0xffffff1c],0x0
00678e0c  MOV ECX,dword ptr [EBP + 0xffffff34]
00678e12  MOV dword ptr [ECX + 0x208],0x0
00678e1c  MOV EDX,dword ptr [EBP + 0xffffff34]
00678e22  CMP dword ptr [EDX + 0x204],0x0
00678e29  JZ 0x00678e76
00678e2b  MOV EAX,dword ptr [EBP + 0xffffff34]
00678e31  MOV ECX,dword ptr [EAX + 0x204]
00678e37  MOV dword ptr [EBP + -0x48],ECX
00678e3a  MOV EDX,dword ptr [EBP + -0x48]
00678e3d  MOV dword ptr [EBP + -0x44],EDX
00678e40  CMP dword ptr [EBP + -0x44],0x0
00678e44  JZ 0x00678e5c
00678e46  PUSH 0x1
00678e48  MOV EAX,dword ptr [EBP + -0x44]
00678e4b  MOV EDX,dword ptr [EAX]
00678e4d  MOV ECX,dword ptr [EBP + -0x44]
00678e50  MOV EAX,dword ptr [EDX]
00678e52  CALL EAX
00678e54  MOV dword ptr [EBP + 0xffffff18],EAX
00678e5a  JMP 0x00678e66
00678e5c  MOV dword ptr [EBP + 0xffffff18],0x0
00678e66  MOV ECX,dword ptr [EBP + 0xffffff34]
00678e6c  MOV dword ptr [ECX + 0x204],0x0
00678e76  MOV dword ptr [EBP + -0x10],0x0
00678e7d  JMP 0x00678e88
00678e7f  MOV EDX,dword ptr [EBP + -0x10]
00678e82  ADD EDX,0x1
00678e85  MOV dword ptr [EBP + -0x10],EDX
00678e88  CMP dword ptr [EBP + -0x10],0x4
00678e8c  JGE 0x00678fc9
00678e92  MOV EAX,dword ptr [EBP + -0x10]
00678e95  MOV ECX,dword ptr [EBP + 0xffffff34]
00678e9b  CMP dword ptr [ECX + EAX*0x4 + 0x20c],0x0
00678ea3  JZ 0x00678ef8
00678ea5  MOV EDX,dword ptr [EBP + -0x10]
00678ea8  MOV EAX,dword ptr [EBP + 0xffffff34]
00678eae  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x20c]
00678eb5  MOV dword ptr [EBP + -0x50],ECX
00678eb8  MOV EDX,dword ptr [EBP + -0x50]
00678ebb  MOV dword ptr [EBP + -0x4c],EDX
00678ebe  CMP dword ptr [EBP + -0x4c],0x0
00678ec2  JZ 0x00678eda
00678ec4  PUSH 0x1
00678ec6  MOV EAX,dword ptr [EBP + -0x4c]
00678ec9  MOV EDX,dword ptr [EAX]
00678ecb  MOV ECX,dword ptr [EBP + -0x4c]
00678ece  MOV EAX,dword ptr [EDX]
00678ed0  CALL EAX
00678ed2  MOV dword ptr [EBP + 0xffffff14],EAX
00678ed8  JMP 0x00678ee4
00678eda  MOV dword ptr [EBP + 0xffffff14],0x0
00678ee4  MOV ECX,dword ptr [EBP + -0x10]
00678ee7  MOV EDX,dword ptr [EBP + 0xffffff34]
00678eed  MOV dword ptr [EDX + ECX*0x4 + 0x20c],0x0
00678ef8  MOV EAX,dword ptr [EBP + -0x10]
00678efb  MOV ECX,dword ptr [EBP + 0xffffff34]
00678f01  CMP dword ptr [ECX + EAX*0x4 + 0x21c],0x0
00678f09  JZ 0x00678f5e
00678f0b  MOV EDX,dword ptr [EBP + -0x10]
00678f0e  MOV EAX,dword ptr [EBP + 0xffffff34]
00678f14  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x21c]
00678f1b  MOV dword ptr [EBP + -0x58],ECX
00678f1e  MOV EDX,dword ptr [EBP + -0x58]
00678f21  MOV dword ptr [EBP + -0x54],EDX
00678f24  CMP dword ptr [EBP + -0x54],0x0
00678f28  JZ 0x00678f40
00678f2a  PUSH 0x1
00678f2c  MOV EAX,dword ptr [EBP + -0x54]
00678f2f  MOV EDX,dword ptr [EAX]
00678f31  MOV ECX,dword ptr [EBP + -0x54]
00678f34  MOV EAX,dword ptr [EDX]
00678f36  CALL EAX
00678f38  MOV dword ptr [EBP + 0xffffff10],EAX
00678f3e  JMP 0x00678f4a
00678f40  MOV dword ptr [EBP + 0xffffff10],0x0
00678f4a  MOV ECX,dword ptr [EBP + -0x10]
00678f4d  MOV EDX,dword ptr [EBP + 0xffffff34]
00678f53  MOV dword ptr [EDX + ECX*0x4 + 0x21c],0x0
00678f5e  MOV EAX,dword ptr [EBP + -0x10]
00678f61  MOV ECX,dword ptr [EBP + 0xffffff34]
00678f67  CMP dword ptr [ECX + EAX*0x4 + 0x25c],0x0
00678f6f  JZ 0x00678fc4
00678f71  MOV EDX,dword ptr [EBP + -0x10]
00678f74  MOV EAX,dword ptr [EBP + 0xffffff34]
00678f7a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x25c]
00678f81  MOV dword ptr [EBP + -0x60],ECX
00678f84  MOV EDX,dword ptr [EBP + -0x60]
00678f87  MOV dword ptr [EBP + -0x5c],EDX
00678f8a  CMP dword ptr [EBP + -0x5c],0x0
00678f8e  JZ 0x00678fa6
00678f90  PUSH 0x1
00678f92  MOV EAX,dword ptr [EBP + -0x5c]
00678f95  MOV EDX,dword ptr [EAX]
00678f97  MOV ECX,dword ptr [EBP + -0x5c]
00678f9a  MOV EAX,dword ptr [EDX]
00678f9c  CALL EAX
00678f9e  MOV dword ptr [EBP + 0xffffff0c],EAX
00678fa4  JMP 0x00678fb0
00678fa6  MOV dword ptr [EBP + 0xffffff0c],0x0
00678fb0  MOV ECX,dword ptr [EBP + -0x10]
00678fb3  MOV EDX,dword ptr [EBP + 0xffffff34]
00678fb9  MOV dword ptr [EDX + ECX*0x4 + 0x25c],0x0
00678fc4  JMP 0x00678e7f
00678fc9  MOV dword ptr [EBP + -0x10],0x0
00678fd0  JMP 0x00678fdb
00678fd2  MOV EAX,dword ptr [EBP + -0x10]
00678fd5  ADD EAX,0x1
00678fd8  MOV dword ptr [EBP + -0x10],EAX
00678fdb  CMP dword ptr [EBP + -0x10],0x5
00678fdf  JGE 0x00679049
00678fe1  MOV ECX,dword ptr [EBP + -0x10]
00678fe4  MOV EDX,dword ptr [EBP + 0xffffff34]
00678fea  CMP dword ptr [EDX + ECX*0x4 + 0x248],0x0
00678ff2  JZ 0x00679047
00678ff4  MOV EAX,dword ptr [EBP + -0x10]
00678ff7  MOV ECX,dword ptr [EBP + 0xffffff34]
00678ffd  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x248]
00679004  MOV dword ptr [EBP + -0x68],EDX
00679007  MOV EAX,dword ptr [EBP + -0x68]
0067900a  MOV dword ptr [EBP + -0x64],EAX
0067900d  CMP dword ptr [EBP + -0x64],0x0
00679011  JZ 0x00679029
00679013  PUSH 0x1
00679015  MOV ECX,dword ptr [EBP + -0x64]
00679018  MOV EDX,dword ptr [ECX]
0067901a  MOV ECX,dword ptr [EBP + -0x64]
0067901d  MOV EAX,dword ptr [EDX]
0067901f  CALL EAX
00679021  MOV dword ptr [EBP + 0xffffff08],EAX
00679027  JMP 0x00679033
00679029  MOV dword ptr [EBP + 0xffffff08],0x0
00679033  MOV ECX,dword ptr [EBP + -0x10]
00679036  MOV EDX,dword ptr [EBP + 0xffffff34]
0067903c  MOV dword ptr [EDX + ECX*0x4 + 0x248],0x0
00679047  JMP 0x00678fd2
00679049  MOV EAX,dword ptr [EBP + 0xffffff34]
0067904f  CMP dword ptr [EAX + 0x22c],0x0
00679056  JZ 0x006790a3
00679058  MOV ECX,dword ptr [EBP + 0xffffff34]
0067905e  MOV EDX,dword ptr [ECX + 0x22c]
00679064  MOV dword ptr [EBP + -0x70],EDX
00679067  MOV EAX,dword ptr [EBP + -0x70]
0067906a  MOV dword ptr [EBP + -0x6c],EAX
0067906d  CMP dword ptr [EBP + -0x6c],0x0
00679071  JZ 0x00679089
00679073  PUSH 0x1
00679075  MOV ECX,dword ptr [EBP + -0x6c]
00679078  MOV EDX,dword ptr [ECX]
0067907a  MOV ECX,dword ptr [EBP + -0x6c]
0067907d  MOV EAX,dword ptr [EDX]
0067907f  CALL EAX
00679081  MOV dword ptr [EBP + 0xffffff04],EAX
00679087  JMP 0x00679093
00679089  MOV dword ptr [EBP + 0xffffff04],0x0
00679093  MOV ECX,dword ptr [EBP + 0xffffff34]
00679099  MOV dword ptr [ECX + 0x22c],0x0
006790a3  MOV EDX,dword ptr [EBP + 0xffffff34]
006790a9  CMP dword ptr [EDX + 0x230],0x0
006790b0  JZ 0x006790fd
006790b2  MOV EAX,dword ptr [EBP + 0xffffff34]
006790b8  MOV ECX,dword ptr [EAX + 0x230]
006790be  MOV dword ptr [EBP + -0x78],ECX
006790c1  MOV EDX,dword ptr [EBP + -0x78]
006790c4  MOV dword ptr [EBP + -0x74],EDX
006790c7  CMP dword ptr [EBP + -0x74],0x0
006790cb  JZ 0x006790e3
006790cd  PUSH 0x1
006790cf  MOV EAX,dword ptr [EBP + -0x74]
006790d2  MOV EDX,dword ptr [EAX]
006790d4  MOV ECX,dword ptr [EBP + -0x74]
006790d7  MOV EAX,dword ptr [EDX]
006790d9  CALL EAX
006790db  MOV dword ptr [EBP + 0xffffff00],EAX
006790e1  JMP 0x006790ed
006790e3  MOV dword ptr [EBP + 0xffffff00],0x0
006790ed  MOV ECX,dword ptr [EBP + 0xffffff34]
006790f3  MOV dword ptr [ECX + 0x230],0x0
006790fd  MOV EDX,dword ptr [EBP + 0xffffff34]
00679103  CMP dword ptr [EDX + 0x240],0x0
0067910a  JZ 0x00679157
0067910c  MOV EAX,dword ptr [EBP + 0xffffff34]
00679112  MOV ECX,dword ptr [EAX + 0x240]
00679118  MOV dword ptr [EBP + -0x80],ECX
0067911b  MOV EDX,dword ptr [EBP + -0x80]
0067911e  MOV dword ptr [EBP + -0x7c],EDX
00679121  CMP dword ptr [EBP + -0x7c],0x0
00679125  JZ 0x0067913d
00679127  PUSH 0x1
00679129  MOV EAX,dword ptr [EBP + -0x7c]
0067912c  MOV EDX,dword ptr [EAX]
0067912e  MOV ECX,dword ptr [EBP + -0x7c]
00679131  MOV EAX,dword ptr [EDX]
00679133  CALL EAX
00679135  MOV dword ptr [EBP + 0xfffffefc],EAX
0067913b  JMP 0x00679147
0067913d  MOV dword ptr [EBP + 0xfffffefc],0x0
00679147  MOV ECX,dword ptr [EBP + 0xffffff34]
0067914d  MOV dword ptr [ECX + 0x240],0x0
00679157  MOV dword ptr [EBP + -0x10],0x0
0067915e  JMP 0x00679169
00679160  MOV EDX,dword ptr [EBP + -0x10]
00679163  ADD EDX,0x1
00679166  MOV dword ptr [EBP + -0x10],EDX
00679169  CMP dword ptr [EBP + -0x10],0x3
0067916d  JGE 0x006791ec
0067916f  MOV EAX,dword ptr [EBP + -0x10]
00679172  MOV ECX,dword ptr [EBP + 0xffffff34]
00679178  CMP dword ptr [ECX + EAX*0x4 + 0x234],0x0
00679180  JZ 0x006791e7
00679182  MOV EDX,dword ptr [EBP + -0x10]
00679185  MOV EAX,dword ptr [EBP + 0xffffff34]
0067918b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x234]
00679192  MOV dword ptr [EBP + 0xffffff78],ECX
00679198  MOV EDX,dword ptr [EBP + 0xffffff78]
0067919e  MOV dword ptr [EBP + 0xffffff7c],EDX
006791a4  CMP dword ptr [EBP + 0xffffff7c],0x0
006791ab  JZ 0x006791c9
006791ad  PUSH 0x1
006791af  MOV EAX,dword ptr [EBP + 0xffffff7c]
006791b5  MOV EDX,dword ptr [EAX]
006791b7  MOV ECX,dword ptr [EBP + 0xffffff7c]
006791bd  MOV EAX,dword ptr [EDX]
006791bf  CALL EAX
006791c1  MOV dword ptr [EBP + 0xfffffef8],EAX
006791c7  JMP 0x006791d3
006791c9  MOV dword ptr [EBP + 0xfffffef8],0x0
006791d3  MOV ECX,dword ptr [EBP + -0x10]
006791d6  MOV EDX,dword ptr [EBP + 0xffffff34]
006791dc  MOV dword ptr [EDX + ECX*0x4 + 0x234],0x0
006791e7  JMP 0x00679160
006791ec  MOV EAX,dword ptr [EBP + 0xffffff34]
006791f2  CMP dword ptr [EAX + 0x244],0x0
006791f9  JZ 0x00679258
006791fb  MOV ECX,dword ptr [EBP + 0xffffff34]
00679201  MOV EDX,dword ptr [ECX + 0x244]
00679207  MOV dword ptr [EBP + 0xffffff70],EDX
0067920d  MOV EAX,dword ptr [EBP + 0xffffff70]
00679213  MOV dword ptr [EBP + 0xffffff74],EAX
00679219  CMP dword ptr [EBP + 0xffffff74],0x0
00679220  JZ 0x0067923e
00679222  PUSH 0x1
00679224  MOV ECX,dword ptr [EBP + 0xffffff74]
0067922a  MOV EDX,dword ptr [ECX]
0067922c  MOV ECX,dword ptr [EBP + 0xffffff74]
00679232  MOV EAX,dword ptr [EDX]
00679234  CALL EAX
00679236  MOV dword ptr [EBP + 0xfffffef4],EAX
0067923c  JMP 0x00679248
0067923e  MOV dword ptr [EBP + 0xfffffef4],0x0
00679248  MOV ECX,dword ptr [EBP + 0xffffff34]
0067924e  MOV dword ptr [ECX + 0x244],0x0
00679258  MOV EDX,dword ptr [EBP + 0xffffff34]
0067925e  CMP dword ptr [EDX + 0x26c],0x0
00679265  JZ 0x006792c4
00679267  MOV EAX,dword ptr [EBP + 0xffffff34]
0067926d  MOV ECX,dword ptr [EAX + 0x26c]
00679273  MOV dword ptr [EBP + 0xffffff68],ECX
00679279  MOV EDX,dword ptr [EBP + 0xffffff68]
0067927f  MOV dword ptr [EBP + 0xffffff6c],EDX
00679285  CMP dword ptr [EBP + 0xffffff6c],0x0
0067928c  JZ 0x006792aa
0067928e  PUSH 0x1
00679290  MOV EAX,dword ptr [EBP + 0xffffff6c]
00679296  MOV EDX,dword ptr [EAX]
00679298  MOV ECX,dword ptr [EBP + 0xffffff6c]
0067929e  MOV EAX,dword ptr [EDX]
006792a0  CALL EAX
006792a2  MOV dword ptr [EBP + 0xfffffef0],EAX
006792a8  JMP 0x006792b4
006792aa  MOV dword ptr [EBP + 0xfffffef0],0x0
006792b4  MOV ECX,dword ptr [EBP + 0xffffff34]
006792ba  MOV dword ptr [ECX + 0x26c],0x0
006792c4  MOV EDX,dword ptr [EBP + 0xffffff34]
006792ca  CMP dword ptr [EDX + 0x270],0x0
006792d1  JZ 0x00679330
006792d3  MOV EAX,dword ptr [EBP + 0xffffff34]
006792d9  MOV ECX,dword ptr [EAX + 0x270]
006792df  MOV dword ptr [EBP + 0xffffff60],ECX
006792e5  MOV EDX,dword ptr [EBP + 0xffffff60]
006792eb  MOV dword ptr [EBP + 0xffffff64],EDX
006792f1  CMP dword ptr [EBP + 0xffffff64],0x0
006792f8  JZ 0x00679316
006792fa  PUSH 0x1
006792fc  MOV EAX,dword ptr [EBP + 0xffffff64]
00679302  MOV EDX,dword ptr [EAX]
00679304  MOV ECX,dword ptr [EBP + 0xffffff64]
0067930a  MOV EAX,dword ptr [EDX]
0067930c  CALL EAX
0067930e  MOV dword ptr [EBP + 0xfffffeec],EAX
00679314  JMP 0x00679320
00679316  MOV dword ptr [EBP + 0xfffffeec],0x0
00679320  MOV ECX,dword ptr [EBP + 0xffffff34]
00679326  MOV dword ptr [ECX + 0x270],0x0
00679330  MOV dword ptr [EBP + -0x10],0x0
00679337  JMP 0x00679342
00679339  MOV EDX,dword ptr [EBP + -0x10]
0067933c  ADD EDX,0x1
0067933f  MOV dword ptr [EBP + -0x10],EDX
00679342  CMP dword ptr [EBP + -0x10],0x3
00679346  JGE 0x006793c5
00679348  MOV EAX,dword ptr [EBP + -0x10]
0067934b  MOV ECX,dword ptr [EBP + 0xffffff34]
00679351  CMP dword ptr [ECX + EAX*0x4 + 0x274],0x0
00679359  JZ 0x006793c0
0067935b  MOV EDX,dword ptr [EBP + -0x10]
0067935e  MOV EAX,dword ptr [EBP + 0xffffff34]
00679364  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x274]
0067936b  MOV dword ptr [EBP + 0xffffff58],ECX
00679371  MOV EDX,dword ptr [EBP + 0xffffff58]
00679377  MOV dword ptr [EBP + 0xffffff5c],EDX
0067937d  CMP dword ptr [EBP + 0xffffff5c],0x0
00679384  JZ 0x006793a2
00679386  PUSH 0x1
00679388  MOV EAX,dword ptr [EBP + 0xffffff5c]
0067938e  MOV EDX,dword ptr [EAX]
00679390  MOV ECX,dword ptr [EBP + 0xffffff5c]
00679396  MOV EAX,dword ptr [EDX]
00679398  CALL EAX
0067939a  MOV dword ptr [EBP + 0xfffffee8],EAX
006793a0  JMP 0x006793ac
006793a2  MOV dword ptr [EBP + 0xfffffee8],0x0
006793ac  MOV ECX,dword ptr [EBP + -0x10]
006793af  MOV EDX,dword ptr [EBP + 0xffffff34]
006793b5  MOV dword ptr [EDX + ECX*0x4 + 0x274],0x0
006793c0  JMP 0x00679339
006793c5  MOV dword ptr [EBP + -0x10],0x0
006793cc  JMP 0x006793d7
006793ce  MOV EAX,dword ptr [EBP + -0x10]
006793d1  ADD EAX,0x1
006793d4  MOV dword ptr [EBP + -0x10],EAX
006793d7  CMP dword ptr [EBP + -0x10],0x2
006793db  JGE 0x006794d6
006793e1  MOV ECX,dword ptr [EBP + -0x10]
006793e4  MOV EDX,dword ptr [EBP + 0xffffff34]
006793ea  CMP dword ptr [EDX + ECX*0x4 + 0x280],0x0
006793f2  JZ 0x00679459
006793f4  MOV EAX,dword ptr [EBP + -0x10]
006793f7  MOV ECX,dword ptr [EBP + 0xffffff34]
006793fd  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x280]
00679404  MOV dword ptr [EBP + 0xffffff50],EDX
0067940a  MOV EAX,dword ptr [EBP + 0xffffff50]
00679410  MOV dword ptr [EBP + 0xffffff54],EAX
00679416  CMP dword ptr [EBP + 0xffffff54],0x0
0067941d  JZ 0x0067943b
0067941f  PUSH 0x1
00679421  MOV ECX,dword ptr [EBP + 0xffffff54]
00679427  MOV EDX,dword ptr [ECX]
00679429  MOV ECX,dword ptr [EBP + 0xffffff54]
0067942f  MOV EAX,dword ptr [EDX]
00679431  CALL EAX
00679433  MOV dword ptr [EBP + 0xfffffee4],EAX
00679439  JMP 0x00679445
0067943b  MOV dword ptr [EBP + 0xfffffee4],0x0
00679445  MOV ECX,dword ptr [EBP + -0x10]
00679448  MOV EDX,dword ptr [EBP + 0xffffff34]
0067944e  MOV dword ptr [EDX + ECX*0x4 + 0x280],0x0
00679459  MOV EAX,dword ptr [EBP + -0x10]
0067945c  MOV ECX,dword ptr [EBP + 0xffffff34]
00679462  CMP dword ptr [ECX + EAX*0x4 + 0x288],0x0
0067946a  JZ 0x006794d1
0067946c  MOV EDX,dword ptr [EBP + -0x10]
0067946f  MOV EAX,dword ptr [EBP + 0xffffff34]
00679475  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x288]
0067947c  MOV dword ptr [EBP + 0xffffff48],ECX
00679482  MOV EDX,dword ptr [EBP + 0xffffff48]
00679488  MOV dword ptr [EBP + 0xffffff4c],EDX
0067948e  CMP dword ptr [EBP + 0xffffff4c],0x0
00679495  JZ 0x006794b3
00679497  PUSH 0x1
00679499  MOV EAX,dword ptr [EBP + 0xffffff4c]
0067949f  MOV EDX,dword ptr [EAX]
006794a1  MOV ECX,dword ptr [EBP + 0xffffff4c]
006794a7  MOV EAX,dword ptr [EDX]
006794a9  CALL EAX
006794ab  MOV dword ptr [EBP + 0xfffffee0],EAX
006794b1  JMP 0x006794bd
006794b3  MOV dword ptr [EBP + 0xfffffee0],0x0
006794bd  MOV ECX,dword ptr [EBP + -0x10]
006794c0  MOV EDX,dword ptr [EBP + 0xffffff34]
006794c6  MOV dword ptr [EDX + ECX*0x4 + 0x288],0x0
006794d1  JMP 0x006793ce
006794d6  MOV EAX,dword ptr [EBP + 0xffffff34]
006794dc  CMP dword ptr [EAX + 0x290],0x0
006794e3  JZ 0x00679542
006794e5  MOV ECX,dword ptr [EBP + 0xffffff34]
006794eb  MOV EDX,dword ptr [ECX + 0x290]
006794f1  MOV dword ptr [EBP + 0xffffff40],EDX
006794f7  MOV EAX,dword ptr [EBP + 0xffffff40]
006794fd  MOV dword ptr [EBP + 0xffffff44],EAX
00679503  CMP dword ptr [EBP + 0xffffff44],0x0
0067950a  JZ 0x00679528
0067950c  PUSH 0x1
0067950e  MOV ECX,dword ptr [EBP + 0xffffff44]
00679514  MOV EDX,dword ptr [ECX]
00679516  MOV ECX,dword ptr [EBP + 0xffffff44]
0067951c  MOV EAX,dword ptr [EDX]
0067951e  CALL EAX
00679520  MOV dword ptr [EBP + 0xfffffedc],EAX
00679526  JMP 0x00679532
00679528  MOV dword ptr [EBP + 0xfffffedc],0x0
00679532  MOV ECX,dword ptr [EBP + 0xffffff34]
00679538  MOV dword ptr [ECX + 0x290],0x0
00679542  MOV EDX,dword ptr [EBP + 0xffffff34]
00679548  CMP dword ptr [EDX + 0x294],0x0
0067954f  JZ 0x006795ae
00679551  MOV EAX,dword ptr [EBP + 0xffffff34]
00679557  MOV ECX,dword ptr [EAX + 0x294]
0067955d  MOV dword ptr [EBP + 0xffffff38],ECX
00679563  MOV EDX,dword ptr [EBP + 0xffffff38]
00679569  MOV dword ptr [EBP + 0xffffff3c],EDX
0067956f  CMP dword ptr [EBP + 0xffffff3c],0x0
00679576  JZ 0x00679594
00679578  PUSH 0x1
0067957a  MOV EAX,dword ptr [EBP + 0xffffff3c]
00679580  MOV EDX,dword ptr [EAX]
00679582  MOV ECX,dword ptr [EBP + 0xffffff3c]
00679588  MOV EAX,dword ptr [EDX]
0067958a  CALL EAX
0067958c  MOV dword ptr [EBP + 0xfffffed8],EAX
00679592  JMP 0x0067959e
00679594  MOV dword ptr [EBP + 0xfffffed8],0x0
0067959e  MOV ECX,dword ptr [EBP + 0xffffff34]
006795a4  MOV dword ptr [ECX + 0x294],0x0
006795ae  MOV EDX,dword ptr [EBP + 0xffffff34]
006795b4  MOV dword ptr [EDX + 0x190],0x0
006795be  PUSH 0x0
006795c0  MOV ECX,dword ptr [0x0162ee84]
006795c6  CALL 0x005f45d0
006795cb  MOV dword ptr [EBP + -0x4],0xffffffff
006795d2  MOV ECX,dword ptr [EBP + 0xffffff34]
006795d8  CALL 0x005f5fa0
006795dd  MOV ECX,dword ptr [EBP + -0xc]
006795e0  MOV dword ptr FS:[0x0],ECX
006795e7  POP ECX
006795e8  MOV ESP,EBP
006795ea  POP EBP
006795eb  RET

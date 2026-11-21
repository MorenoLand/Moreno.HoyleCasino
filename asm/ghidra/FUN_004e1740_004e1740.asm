; FUN_004e1740  004e1740
004e1740  PUSH EBP
004e1741  MOV EBP,ESP
004e1743  SUB ESP,0x924
004e1749  MOV dword ptr [EBP + -0x38],ECX
004e174c  MOVSX EAX,word ptr [EBP + 0x8]
004e1750  TEST EAX,EAX
004e1752  JNZ 0x004e1765
004e1754  PUSH 0xa
004e1756  CALL 0x0062fbf0
004e175b  ADD ESP,0x4
004e175e  ADD EAX,0x1
004e1761  MOV word ptr [EBP + 0x8],AX
004e1765  MOVSX ECX,word ptr [EBP + 0x8]
004e1769  TEST ECX,ECX
004e176b  JLE 0x004e1776
004e176d  MOVSX EDX,word ptr [EBP + 0x8]
004e1771  CMP EDX,0xa
004e1774  JLE 0x004e178d
004e1776  PUSH 0x2186
004e177b  PUSH 0x6bf384
004e1780  PUSH 0x6bf6d8
004e1785  CALL 0x005e9f20
004e178a  ADD ESP,0xc
004e178d  MOVSX ECX,word ptr [EBP + 0x8]
004e1791  MOV dword ptr [EBP + -0x3c],ECX
004e1794  MOV EDX,dword ptr [EBP + -0x3c]
004e1797  SUB EDX,0x1
004e179a  MOV dword ptr [EBP + -0x3c],EDX
004e179d  CMP dword ptr [EBP + -0x3c],0x9
004e17a1  JA 0x004e9360
004e17a7  MOV EAX,dword ptr [EBP + -0x3c]
004e17aa  JMP dword ptr [EAX*0x4 + 0x4e9368]
004e17b1  MOV dword ptr [EBP + -0x20],0x3e8
004e17b8  MOV dword ptr [EBP + -0x24],0x3ca
004e17bf  MOV dword ptr [EBP + -0x18],0x384
004e17c6  MOV dword ptr [EBP + -0x14],0x258
004e17cd  MOV dword ptr [EBP + -0x34],0x12c
004e17d4  MOV dword ptr [EBP + -0x28],0x64
004e17db  MOV dword ptr [EBP + -0x1c],0x14
004e17e2  FLD double ptr [0x006bfc38]
004e17e8  FSTP double ptr [EBP + -0x30]
004e17eb  FLD double ptr [0x006bfc30]
004e17f1  FSTP double ptr [EBP + -0x8]
004e17f4  FLD double ptr [0x006bfc28]
004e17fa  FSTP double ptr [EBP + -0x10]
004e17fd  MOV ECX,dword ptr [EBP + -0x38]
004e1800  MOV word ptr [ECX + 0x2ba],0xf
004e1809  MOV EDX,dword ptr [EBP + -0x38]
004e180c  MOV word ptr [EDX + 0x2bc],0x33
004e1815  MOV EAX,dword ptr [EBP + -0x38]
004e1818  MOV word ptr [EAX + 0x2be],0x50
004e1821  MOV ECX,dword ptr [EBP + -0x38]
004e1824  MOV word ptr [ECX + 0x2c0],0x61
004e182d  MOV EDX,dword ptr [EBP + -0x38]
004e1830  MOV word ptr [EDX + 0x2c2],0x72
004e1839  MOV EAX,dword ptr [EBP + -0x38]
004e183c  MOV word ptr [EAX + 0x2c4],0x84
004e1845  MOV ECX,dword ptr [EBP + -0x38]
004e1848  MOV word ptr [ECX + 0x2c6],0x98
004e1851  MOV EDX,dword ptr [EBP + -0x38]
004e1854  MOV word ptr [EDX + 0x2c8],0xac
004e185d  MOV EAX,dword ptr [EBP + -0x38]
004e1860  MOV word ptr [EAX + 0x2ca],0xc1
004e1869  MOV ECX,dword ptr [EBP + -0x38]
004e186c  MOV word ptr [ECX + 0x2cc],0xd8
004e1875  MOV EDX,dword ptr [EBP + -0x38]
004e1878  MOV word ptr [EDX + 0x2ce],0xf0
004e1881  MOV EAX,dword ptr [EBP + -0x38]
004e1884  MOV word ptr [EAX + 0x2d0],0x109
004e188d  MOV ECX,dword ptr [EBP + -0x38]
004e1890  MOV word ptr [ECX + 0x2d2],0x15c
004e1899  MOV EDX,dword ptr [EBP + -0x38]
004e189c  MOV word ptr [EDX + 0x2d4],0x1b7
004e18a5  MOV EAX,dword ptr [EBP + -0x38]
004e18a8  MOV word ptr [EAX + 0x2d6],0x1cf
004e18b1  MOV ECX,dword ptr [EBP + -0x38]
004e18b4  MOV word ptr [ECX + 0x2d8],0x215
004e18bd  MOV EDX,dword ptr [EBP + -0x38]
004e18c0  MOV word ptr [EDX + 0x2da],0x267
004e18c9  MOV EAX,dword ptr [EBP + -0x38]
004e18cc  MOV word ptr [EAX + 0x2dc],0x279
004e18d5  MOV ECX,dword ptr [EBP + -0x38]
004e18d8  MOV word ptr [ECX + 0x2de],0x2aa
004e18e1  MOV EDX,dword ptr [EBP + -0x38]
004e18e4  MOV word ptr [EDX + 0x2e0],0x2ea
004e18ed  MOV EAX,dword ptr [EBP + -0x38]
004e18f0  MOV word ptr [EAX + 0x2e2],0x301
004e18f9  MOV ECX,dword ptr [EBP + -0x38]
004e18fc  MOV word ptr [ECX + 0x2e4],0x31c
004e1905  MOV EDX,dword ptr [EBP + -0x38]
004e1908  MOV word ptr [EDX + 0x2e6],0x340
004e1911  MOV EAX,dword ptr [EBP + -0x38]
004e1914  MOV word ptr [EAX + 0x2e8],0x355
004e191d  MOV ECX,dword ptr [EBP + -0x38]
004e1920  MOV word ptr [ECX + 0x2ea],0x360
004e1929  MOV EDX,dword ptr [EBP + -0x38]
004e192c  MOV word ptr [EDX + 0x2ec],0x366
004e1935  MOV EAX,dword ptr [EBP + -0x38]
004e1938  MOV word ptr [EAX + 0x2ee],0x368
004e1941  MOV ECX,dword ptr [EBP + -0x38]
004e1944  MOV word ptr [ECX + 0x2f0],0x379
004e194d  MOV EDX,dword ptr [EBP + -0x38]
004e1950  MOV word ptr [EDX + 0x2f2],0x392
004e1959  MOV EAX,dword ptr [EBP + -0x38]
004e195c  MOV word ptr [EAX + 0x2f4],0x3a0
004e1965  MOV ECX,dword ptr [EBP + -0x38]
004e1968  MOV word ptr [ECX + 0x2f6],0x3a6
004e1971  MOV EDX,dword ptr [EBP + -0x38]
004e1974  MOV word ptr [EDX + 0x2f8],0x3a8
004e197d  MOV EAX,dword ptr [EBP + -0x38]
004e1980  MOV word ptr [EAX + 0x2fa],0x3b4
004e1989  MOV ECX,dword ptr [EBP + -0x38]
004e198c  MOV word ptr [ECX + 0x2fc],0x3c3
004e1995  MOV EDX,dword ptr [EBP + -0x38]
004e1998  MOV word ptr [EDX + 0x2fe],0x3cb
004e19a1  MOV EAX,dword ptr [EBP + -0x38]
004e19a4  MOV word ptr [EAX + 0x300],0x3ce
004e19ad  MOV ECX,dword ptr [EBP + -0x38]
004e19b0  MOV word ptr [ECX + 0x302],0x3d4
004e19b9  MOV EDX,dword ptr [EBP + -0x38]
004e19bc  MOV word ptr [EDX + 0x304],0x3dc
004e19c5  MOV EAX,dword ptr [EBP + -0x38]
004e19c8  MOV word ptr [EAX + 0x306],0x3df
004e19d1  MOV ECX,dword ptr [EBP + -0x38]
004e19d4  MOV word ptr [ECX + 0x308],0x3e2
004e19dd  MOV EDX,dword ptr [EBP + -0x38]
004e19e0  MOV word ptr [EDX + 0x30a],0x3e5
004e19e9  MOV EAX,dword ptr [EBP + -0x38]
004e19ec  MOV word ptr [EAX + 0x30c],0x3e8
004e19f5  MOV ECX,dword ptr [EBP + -0x24]
004e19f8  SHL ECX,0x2
004e19fb  MOV EDX,dword ptr [EBP + -0x20]
004e19fe  LEA EAX,[ECX + EDX*0x4]
004e1a01  MOV ECX,dword ptr [EBP + -0x18]
004e1a04  LEA EDX,[EAX + ECX*0x4]
004e1a07  MOV EAX,dword ptr [EBP + -0x14]
004e1a0a  LEA ECX,[EDX + EAX*0x4]
004e1a0d  MOV EDX,dword ptr [EBP + -0x34]
004e1a10  LEA EAX,[ECX + EDX*0x4]
004e1a13  MOV ECX,dword ptr [EBP + -0x28]
004e1a16  LEA EDX,[EAX + ECX*0x4]
004e1a19  MOV EAX,dword ptr [EBP + -0x1c]
004e1a1c  LEA ECX,[EDX + EAX*0x4]
004e1a1f  MOV dword ptr [EBP + -0x40],ECX
004e1a22  FILD dword ptr [EBP + -0x40]
004e1a25  FMUL double ptr [EBP + -0x30]
004e1a28  CALL 0x00686cc0
004e1a2d  MOV EDX,dword ptr [EBP + -0x38]
004e1a30  MOV word ptr [EDX + 0x30e],AX
004e1a37  MOV EAX,dword ptr [EBP + -0x24]
004e1a3a  SHL EAX,0x2
004e1a3d  MOV ECX,dword ptr [EBP + -0x20]
004e1a40  LEA EDX,[EAX + ECX*0x4]
004e1a43  MOV EAX,dword ptr [EBP + -0x18]
004e1a46  LEA ECX,[EDX + EAX*0x4]
004e1a49  MOV EDX,dword ptr [EBP + -0x14]
004e1a4c  LEA EAX,[ECX + EDX*0x4]
004e1a4f  MOV ECX,dword ptr [EBP + -0x34]
004e1a52  LEA EDX,[EAX + ECX*0x4]
004e1a55  MOV EAX,dword ptr [EBP + -0x28]
004e1a58  LEA ECX,[EDX + EAX*0x4]
004e1a5b  MOV EDX,dword ptr [EBP + -0x1c]
004e1a5e  LEA EAX,[ECX + EDX*0x4]
004e1a61  MOV dword ptr [EBP + -0x44],EAX
004e1a64  FILD dword ptr [EBP + -0x44]
004e1a67  FMUL double ptr [EBP + -0x30]
004e1a6a  CALL 0x00686cc0
004e1a6f  MOV ECX,dword ptr [EBP + -0x38]
004e1a72  MOV word ptr [ECX + 0x310],AX
004e1a79  MOV EDX,dword ptr [EBP + -0x18]
004e1a7c  SHL EDX,0x2
004e1a7f  MOV EAX,dword ptr [EBP + -0x24]
004e1a82  LEA ECX,[EDX + EAX*0x8]
004e1a85  MOV EDX,dword ptr [EBP + -0x14]
004e1a88  LEA EAX,[ECX + EDX*0x4]
004e1a8b  MOV ECX,dword ptr [EBP + -0x34]
004e1a8e  LEA EDX,[EAX + ECX*0x4]
004e1a91  MOV EAX,dword ptr [EBP + -0x28]
004e1a94  LEA ECX,[EDX + EAX*0x4]
004e1a97  MOV EDX,dword ptr [EBP + -0x1c]
004e1a9a  LEA EAX,[ECX + EDX*0x4]
004e1a9d  MOV dword ptr [EBP + -0x48],EAX
004e1aa0  FILD dword ptr [EBP + -0x48]
004e1aa3  FMUL double ptr [EBP + -0x30]
004e1aa6  CALL 0x00686cc0
004e1aab  MOV ECX,dword ptr [EBP + -0x38]
004e1aae  MOV word ptr [ECX + 0x312],AX
004e1ab5  MOV EDX,dword ptr [EBP + -0x18]
004e1ab8  IMUL EDX,EDX,0xc
004e1abb  MOV EAX,dword ptr [EBP + -0x14]
004e1abe  LEA ECX,[EDX + EAX*0x4]
004e1ac1  MOV EDX,dword ptr [EBP + -0x34]
004e1ac4  LEA EAX,[ECX + EDX*0x4]
004e1ac7  MOV ECX,dword ptr [EBP + -0x28]
004e1aca  LEA EDX,[EAX + ECX*0x4]
004e1acd  MOV EAX,dword ptr [EBP + -0x1c]
004e1ad0  LEA ECX,[EDX + EAX*0x4]
004e1ad3  MOV dword ptr [EBP + -0x4c],ECX
004e1ad6  FILD dword ptr [EBP + -0x4c]
004e1ad9  FMUL double ptr [EBP + -0x30]
004e1adc  CALL 0x00686cc0
004e1ae1  MOV EDX,dword ptr [EBP + -0x38]
004e1ae4  MOV word ptr [EDX + 0x314],AX
004e1aeb  MOV EAX,dword ptr [EBP + -0x14]
004e1aee  SHL EAX,0x4
004e1af1  MOV ECX,dword ptr [EBP + -0x34]
004e1af4  LEA EDX,[EAX + ECX*0x4]
004e1af7  MOV EAX,dword ptr [EBP + -0x28]
004e1afa  LEA ECX,[EDX + EAX*0x4]
004e1afd  MOV EDX,dword ptr [EBP + -0x1c]
004e1b00  LEA EAX,[ECX + EDX*0x4]
004e1b03  MOV dword ptr [EBP + -0x50],EAX
004e1b06  FILD dword ptr [EBP + -0x50]
004e1b09  FMUL double ptr [EBP + -0x30]
004e1b0c  CALL 0x00686cc0
004e1b11  MOV ECX,dword ptr [EBP + -0x38]
004e1b14  MOV word ptr [ECX + 0x316],AX
004e1b1b  MOV EDX,dword ptr [EBP + -0x34]
004e1b1e  IMUL EDX,EDX,0x14
004e1b21  MOV EAX,dword ptr [EBP + -0x28]
004e1b24  LEA ECX,[EDX + EAX*0x4]
004e1b27  MOV EDX,dword ptr [EBP + -0x1c]
004e1b2a  LEA EAX,[ECX + EDX*0x4]
004e1b2d  MOV dword ptr [EBP + -0x54],EAX
004e1b30  FILD dword ptr [EBP + -0x54]
004e1b33  FMUL double ptr [EBP + -0x30]
004e1b36  CALL 0x00686cc0
004e1b3b  MOV ECX,dword ptr [EBP + -0x38]
004e1b3e  MOV word ptr [ECX + 0x318],AX
004e1b45  MOV EDX,dword ptr [EBP + -0x28]
004e1b48  IMUL EDX,EDX,0x18
004e1b4b  MOV EAX,dword ptr [EBP + -0x1c]
004e1b4e  LEA ECX,[EDX + EAX*0x4]
004e1b51  MOV dword ptr [EBP + -0x58],ECX
004e1b54  FILD dword ptr [EBP + -0x58]
004e1b57  FMUL double ptr [EBP + -0x30]
004e1b5a  CALL 0x00686cc0
004e1b5f  MOV EDX,dword ptr [EBP + -0x38]
004e1b62  MOV word ptr [EDX + 0x31a],AX
004e1b69  MOV EAX,dword ptr [EBP + -0x1c]
004e1b6c  IMUL EAX,EAX,0x1c
004e1b6f  MOV dword ptr [EBP + -0x5c],EAX
004e1b72  FILD dword ptr [EBP + -0x5c]
004e1b75  FMUL double ptr [EBP + -0x30]
004e1b78  CALL 0x00686cc0
004e1b7d  MOV ECX,dword ptr [EBP + -0x38]
004e1b80  MOV word ptr [ECX + 0x31c],AX
004e1b87  MOV EDX,dword ptr [EBP + -0x20]
004e1b8a  SHL EDX,0x4
004e1b8d  MOV EAX,dword ptr [EBP + -0x24]
004e1b90  SHL EAX,0x5
004e1b93  ADD EDX,EAX
004e1b95  MOV ECX,dword ptr [EBP + -0x18]
004e1b98  IMUL ECX,ECX,0x30
004e1b9b  ADD EDX,ECX
004e1b9d  MOV EAX,dword ptr [EBP + -0x14]
004e1ba0  SHL EAX,0x6
004e1ba3  ADD EDX,EAX
004e1ba5  MOV ECX,dword ptr [EBP + -0x34]
004e1ba8  IMUL ECX,ECX,0x50
004e1bab  ADD EDX,ECX
004e1bad  MOV EAX,dword ptr [EBP + -0x28]
004e1bb0  IMUL EAX,EAX,0x60
004e1bb3  ADD EDX,EAX
004e1bb5  MOV ECX,dword ptr [EBP + -0x1c]
004e1bb8  IMUL ECX,ECX,0x70
004e1bbb  ADD EDX,ECX
004e1bbd  MOV dword ptr [EBP + -0x60],EDX
004e1bc0  FILD dword ptr [EBP + -0x60]
004e1bc3  FMUL double ptr [EBP + -0x8]
004e1bc6  CALL 0x00686cc0
004e1bcb  MOV EDX,dword ptr [EBP + -0x38]
004e1bce  MOV word ptr [EDX + 0x31e],AX
004e1bd5  MOV EAX,dword ptr [EBP + -0x20]
004e1bd8  SHL EAX,0x4
004e1bdb  MOV ECX,dword ptr [EBP + -0x24]
004e1bde  SHL ECX,0x5
004e1be1  ADD EAX,ECX
004e1be3  MOV EDX,dword ptr [EBP + -0x18]
004e1be6  IMUL EDX,EDX,0x30
004e1be9  ADD EAX,EDX
004e1beb  MOV ECX,dword ptr [EBP + -0x14]
004e1bee  SHL ECX,0x6
004e1bf1  ADD EAX,ECX
004e1bf3  MOV EDX,dword ptr [EBP + -0x34]
004e1bf6  IMUL EDX,EDX,0x50
004e1bf9  ADD EAX,EDX
004e1bfb  MOV ECX,dword ptr [EBP + -0x28]
004e1bfe  IMUL ECX,ECX,0x60
004e1c01  ADD EAX,ECX
004e1c03  MOV EDX,dword ptr [EBP + -0x1c]
004e1c06  IMUL EDX,EDX,0x70
004e1c09  ADD EAX,EDX
004e1c0b  MOV dword ptr [EBP + -0x64],EAX
004e1c0e  FILD dword ptr [EBP + -0x64]
004e1c11  FMUL double ptr [EBP + -0x8]
004e1c14  CALL 0x00686cc0
004e1c19  MOV ECX,dword ptr [EBP + -0x38]
004e1c1c  MOV word ptr [ECX + 0x320],AX
004e1c23  MOV EDX,dword ptr [EBP + -0x20]
004e1c26  SHL EDX,0x4
004e1c29  MOV EAX,dword ptr [EBP + -0x24]
004e1c2c  SHL EAX,0x5
004e1c2f  ADD EDX,EAX
004e1c31  MOV ECX,dword ptr [EBP + -0x18]
004e1c34  IMUL ECX,ECX,0x30
004e1c37  ADD EDX,ECX
004e1c39  MOV EAX,dword ptr [EBP + -0x14]
004e1c3c  SHL EAX,0x6
004e1c3f  ADD EDX,EAX
004e1c41  MOV ECX,dword ptr [EBP + -0x34]
004e1c44  IMUL ECX,ECX,0x50
004e1c47  ADD EDX,ECX
004e1c49  MOV EAX,dword ptr [EBP + -0x28]
004e1c4c  IMUL EAX,EAX,0x60
004e1c4f  ADD EDX,EAX
004e1c51  MOV ECX,dword ptr [EBP + -0x1c]
004e1c54  IMUL ECX,ECX,0x70
004e1c57  ADD EDX,ECX
004e1c59  MOV dword ptr [EBP + -0x68],EDX
004e1c5c  FILD dword ptr [EBP + -0x68]
004e1c5f  FMUL double ptr [EBP + -0x8]
004e1c62  CALL 0x00686cc0
004e1c67  MOV EDX,dword ptr [EBP + -0x38]
004e1c6a  MOV word ptr [EDX + 0x322],AX
004e1c71  MOV EAX,dword ptr [EBP + -0x24]
004e1c74  IMUL EAX,EAX,0x60
004e1c77  MOV dword ptr [EBP + -0x6c],EAX
004e1c7a  FILD dword ptr [EBP + -0x6c]
004e1c7d  FDIV double ptr [0x006b3740]
004e1c83  MOV ECX,dword ptr [EBP + -0x18]
004e1c86  IMUL ECX,ECX,0x30
004e1c89  MOV dword ptr [EBP + -0x70],ECX
004e1c8c  FILD dword ptr [EBP + -0x70]
004e1c8f  FADDP
004e1c91  MOV EDX,dword ptr [EBP + -0x14]
004e1c94  SHL EDX,0x6
004e1c97  MOV dword ptr [EBP + -0x74],EDX
004e1c9a  FILD dword ptr [EBP + -0x74]
004e1c9d  FADDP
004e1c9f  MOV EAX,dword ptr [EBP + -0x34]
004e1ca2  IMUL EAX,EAX,0x50
004e1ca5  MOV dword ptr [EBP + -0x78],EAX
004e1ca8  FILD dword ptr [EBP + -0x78]
004e1cab  FADDP
004e1cad  MOV ECX,dword ptr [EBP + -0x28]
004e1cb0  IMUL ECX,ECX,0x60
004e1cb3  MOV dword ptr [EBP + -0x7c],ECX
004e1cb6  FILD dword ptr [EBP + -0x7c]
004e1cb9  FADDP
004e1cbb  MOV EDX,dword ptr [EBP + -0x1c]
004e1cbe  IMUL EDX,EDX,0x70
004e1cc1  MOV dword ptr [EBP + -0x80],EDX
004e1cc4  FILD dword ptr [EBP + -0x80]
004e1cc7  FADDP
004e1cc9  FMUL double ptr [EBP + -0x8]
004e1ccc  CALL 0x00686cc0
004e1cd1  MOV ECX,dword ptr [EBP + -0x38]
004e1cd4  MOV word ptr [ECX + 0x324],AX
004e1cdb  MOV EDX,dword ptr [EBP + -0x18]
004e1cde  IMUL EDX,EDX,0xc0
004e1ce4  MOV dword ptr [EBP + 0xffffff7c],EDX
004e1cea  FILD dword ptr [EBP + 0xffffff7c]
004e1cf0  FDIV double ptr [0x006b3740]
004e1cf6  MOV EAX,dword ptr [EBP + -0x14]
004e1cf9  SHL EAX,0x6
004e1cfc  MOV dword ptr [EBP + 0xffffff78],EAX
004e1d02  FILD dword ptr [EBP + 0xffffff78]
004e1d08  FADDP
004e1d0a  MOV ECX,dword ptr [EBP + -0x34]
004e1d0d  IMUL ECX,ECX,0x50
004e1d10  MOV dword ptr [EBP + 0xffffff74],ECX
004e1d16  FILD dword ptr [EBP + 0xffffff74]
004e1d1c  FADDP
004e1d1e  MOV EDX,dword ptr [EBP + -0x28]
004e1d21  IMUL EDX,EDX,0x60
004e1d24  MOV dword ptr [EBP + 0xffffff70],EDX
004e1d2a  FILD dword ptr [EBP + 0xffffff70]
004e1d30  FADDP
004e1d32  MOV EAX,dword ptr [EBP + -0x1c]
004e1d35  IMUL EAX,EAX,0x70
004e1d38  MOV dword ptr [EBP + 0xffffff6c],EAX
004e1d3e  FILD dword ptr [EBP + 0xffffff6c]
004e1d44  FADDP
004e1d46  FMUL double ptr [EBP + -0x8]
004e1d49  CALL 0x00686cc0
004e1d4e  MOV ECX,dword ptr [EBP + -0x38]
004e1d51  MOV word ptr [ECX + 0x326],AX
004e1d58  MOV EDX,dword ptr [EBP + -0x14]
004e1d5b  IMUL EDX,EDX,0x140
004e1d61  MOV dword ptr [EBP + 0xffffff68],EDX
004e1d67  FILD dword ptr [EBP + 0xffffff68]
004e1d6d  FDIV double ptr [0x006b3740]
004e1d73  MOV EAX,dword ptr [EBP + -0x34]
004e1d76  IMUL EAX,EAX,0x50
004e1d79  MOV dword ptr [EBP + 0xffffff64],EAX
004e1d7f  FILD dword ptr [EBP + 0xffffff64]
004e1d85  FADDP
004e1d87  MOV ECX,dword ptr [EBP + -0x28]
004e1d8a  IMUL ECX,ECX,0x60
004e1d8d  MOV dword ptr [EBP + 0xffffff60],ECX
004e1d93  FILD dword ptr [EBP + 0xffffff60]
004e1d99  FADDP
004e1d9b  MOV EDX,dword ptr [EBP + -0x1c]
004e1d9e  IMUL EDX,EDX,0x70
004e1da1  MOV dword ptr [EBP + 0xffffff5c],EDX
004e1da7  FILD dword ptr [EBP + 0xffffff5c]
004e1dad  FADDP
004e1daf  FMUL double ptr [EBP + -0x8]
004e1db2  CALL 0x00686cc0
004e1db7  MOV ECX,dword ptr [EBP + -0x38]
004e1dba  MOV word ptr [ECX + 0x328],AX
004e1dc1  MOV EDX,dword ptr [EBP + -0x34]
004e1dc4  IMUL EDX,EDX,0x1e0
004e1dca  MOV dword ptr [EBP + 0xffffff58],EDX
004e1dd0  FILD dword ptr [EBP + 0xffffff58]
004e1dd6  FDIV double ptr [0x006b3740]
004e1ddc  MOV EAX,dword ptr [EBP + -0x28]
004e1ddf  IMUL EAX,EAX,0x60
004e1de2  MOV dword ptr [EBP + 0xffffff54],EAX
004e1de8  FILD dword ptr [EBP + 0xffffff54]
004e1dee  FADDP
004e1df0  MOV ECX,dword ptr [EBP + -0x1c]
004e1df3  IMUL ECX,ECX,0x70
004e1df6  MOV dword ptr [EBP + 0xffffff50],ECX
004e1dfc  FILD dword ptr [EBP + 0xffffff50]
004e1e02  FADDP
004e1e04  FMUL double ptr [EBP + -0x8]
004e1e07  CALL 0x00686cc0
004e1e0c  MOV EDX,dword ptr [EBP + -0x38]
004e1e0f  MOV word ptr [EDX + 0x32a],AX
004e1e16  MOV EAX,dword ptr [EBP + -0x28]
004e1e19  IMUL EAX,EAX,0x2a0
004e1e1f  MOV dword ptr [EBP + 0xffffff4c],EAX
004e1e25  FILD dword ptr [EBP + 0xffffff4c]
004e1e2b  FDIV double ptr [0x006b3740]
004e1e31  MOV ECX,dword ptr [EBP + -0x1c]
004e1e34  IMUL ECX,ECX,0x70
004e1e37  MOV dword ptr [EBP + 0xffffff48],ECX
004e1e3d  FILD dword ptr [EBP + 0xffffff48]
004e1e43  FADDP
004e1e45  FMUL double ptr [EBP + -0x8]
004e1e48  CALL 0x00686cc0
004e1e4d  MOV EDX,dword ptr [EBP + -0x38]
004e1e50  MOV word ptr [EDX + 0x32c],AX
004e1e57  MOV EAX,dword ptr [EBP + -0x1c]
004e1e5a  IMUL EAX,EAX,0x380
004e1e60  MOV dword ptr [EBP + 0xffffff44],EAX
004e1e66  FILD dword ptr [EBP + 0xffffff44]
004e1e6c  FDIV double ptr [0x006b3740]
004e1e72  FMUL double ptr [EBP + -0x8]
004e1e75  CALL 0x00686cc0
004e1e7a  MOV ECX,dword ptr [EBP + -0x38]
004e1e7d  MOV word ptr [ECX + 0x32e],AX
004e1e84  MOV EDX,dword ptr [EBP + -0x20]
004e1e87  SHL EDX,0x7
004e1e8a  MOV EAX,dword ptr [EBP + -0x24]
004e1e8d  IMUL EAX,EAX,0x180
004e1e93  ADD EDX,EAX
004e1e95  MOV ECX,dword ptr [EBP + -0x18]
004e1e98  IMUL ECX,ECX,0x300
004e1e9e  ADD EDX,ECX
004e1ea0  MOV EAX,dword ptr [EBP + -0x14]
004e1ea3  IMUL EAX,EAX,0x500
004e1ea9  ADD EDX,EAX
004e1eab  MOV ECX,dword ptr [EBP + -0x34]
004e1eae  IMUL ECX,ECX,0x780
004e1eb4  ADD EDX,ECX
004e1eb6  MOV EAX,dword ptr [EBP + -0x28]
004e1eb9  IMUL EAX,EAX,0xa80
004e1ebf  ADD EDX,EAX
004e1ec1  MOV ECX,dword ptr [EBP + -0x1c]
004e1ec4  IMUL ECX,ECX,0xe00
004e1eca  ADD EDX,ECX
004e1ecc  MOV dword ptr [EBP + 0xffffff40],EDX
004e1ed2  FILD dword ptr [EBP + 0xffffff40]
004e1ed8  FMUL double ptr [EBP + -0x10]
004e1edb  CALL 0x00686cc0
004e1ee0  MOV EDX,dword ptr [EBP + -0x38]
004e1ee3  MOV word ptr [EDX + 0x330],AX
004e1eea  MOV EAX,dword ptr [EBP + -0x20]
004e1eed  SHL EAX,0x7
004e1ef0  MOV ECX,dword ptr [EBP + -0x24]
004e1ef3  IMUL ECX,ECX,0x180
004e1ef9  ADD EAX,ECX
004e1efb  MOV EDX,dword ptr [EBP + -0x18]
004e1efe  IMUL EDX,EDX,0x300
004e1f04  ADD EAX,EDX
004e1f06  MOV ECX,dword ptr [EBP + -0x14]
004e1f09  IMUL ECX,ECX,0x500
004e1f0f  ADD EAX,ECX
004e1f11  MOV EDX,dword ptr [EBP + -0x34]
004e1f14  IMUL EDX,EDX,0x780
004e1f1a  ADD EAX,EDX
004e1f1c  MOV ECX,dword ptr [EBP + -0x28]
004e1f1f  IMUL ECX,ECX,0xa80
004e1f25  ADD EAX,ECX
004e1f27  MOV EDX,dword ptr [EBP + -0x1c]
004e1f2a  IMUL EDX,EDX,0xe00
004e1f30  ADD EAX,EDX
004e1f32  MOV dword ptr [EBP + 0xffffff3c],EAX
004e1f38  FILD dword ptr [EBP + 0xffffff3c]
004e1f3e  FMUL double ptr [EBP + -0x10]
004e1f41  CALL 0x00686cc0
004e1f46  MOV ECX,dword ptr [EBP + -0x38]
004e1f49  MOV word ptr [ECX + 0x332],AX
004e1f50  MOV EDX,dword ptr [EBP + -0x20]
004e1f53  SHL EDX,0x7
004e1f56  MOV EAX,dword ptr [EBP + -0x24]
004e1f59  IMUL EAX,EAX,0x180
004e1f5f  ADD EDX,EAX
004e1f61  MOV ECX,dword ptr [EBP + -0x18]
004e1f64  IMUL ECX,ECX,0x300
004e1f6a  ADD EDX,ECX
004e1f6c  MOV EAX,dword ptr [EBP + -0x14]
004e1f6f  IMUL EAX,EAX,0x500
004e1f75  ADD EDX,EAX
004e1f77  MOV ECX,dword ptr [EBP + -0x34]
004e1f7a  IMUL ECX,ECX,0x780
004e1f80  ADD EDX,ECX
004e1f82  MOV EAX,dword ptr [EBP + -0x28]
004e1f85  IMUL EAX,EAX,0xa80
004e1f8b  ADD EDX,EAX
004e1f8d  MOV ECX,dword ptr [EBP + -0x1c]
004e1f90  IMUL ECX,ECX,0xe00
004e1f96  ADD EDX,ECX
004e1f98  MOV dword ptr [EBP + 0xffffff38],EDX
004e1f9e  FILD dword ptr [EBP + 0xffffff38]
004e1fa4  FMUL double ptr [EBP + -0x10]
004e1fa7  CALL 0x00686cc0
004e1fac  MOV EDX,dword ptr [EBP + -0x38]
004e1faf  MOV word ptr [EDX + 0x334],AX
004e1fb6  MOV EAX,dword ptr [EBP + -0x20]
004e1fb9  SHL EAX,0x7
004e1fbc  MOV ECX,dword ptr [EBP + -0x24]
004e1fbf  IMUL ECX,ECX,0x180
004e1fc5  ADD EAX,ECX
004e1fc7  MOV EDX,dword ptr [EBP + -0x18]
004e1fca  IMUL EDX,EDX,0x300
004e1fd0  ADD EAX,EDX
004e1fd2  MOV ECX,dword ptr [EBP + -0x14]
004e1fd5  IMUL ECX,ECX,0x500
004e1fdb  ADD EAX,ECX
004e1fdd  MOV EDX,dword ptr [EBP + -0x34]
004e1fe0  IMUL EDX,EDX,0x780
004e1fe6  ADD EAX,EDX
004e1fe8  MOV ECX,dword ptr [EBP + -0x28]
004e1feb  IMUL ECX,ECX,0xa80
004e1ff1  ADD EAX,ECX
004e1ff3  MOV EDX,dword ptr [EBP + -0x1c]
004e1ff6  IMUL EDX,EDX,0xe00
004e1ffc  ADD EAX,EDX
004e1ffe  MOV dword ptr [EBP + 0xffffff34],EAX
004e2004  FILD dword ptr [EBP + 0xffffff34]
004e200a  FMUL double ptr [EBP + -0x10]
004e200d  CALL 0x00686cc0
004e2012  MOV ECX,dword ptr [EBP + -0x38]
004e2015  MOV word ptr [ECX + 0x336],AX
004e201c  MOV EDX,dword ptr [EBP + -0x24]
004e201f  IMUL EDX,EDX,0x600
004e2025  MOV dword ptr [EBP + 0xffffff30],EDX
004e202b  FILD dword ptr [EBP + 0xffffff30]
004e2031  FDIV double ptr [0x006b9490]
004e2037  MOV EAX,dword ptr [EBP + -0x18]
004e203a  IMUL EAX,EAX,0x300
004e2040  MOV dword ptr [EBP + 0xffffff2c],EAX
004e2046  FILD dword ptr [EBP + 0xffffff2c]
004e204c  FADDP
004e204e  MOV ECX,dword ptr [EBP + -0x14]
004e2051  IMUL ECX,ECX,0x500
004e2057  MOV dword ptr [EBP + 0xffffff28],ECX
004e205d  FILD dword ptr [EBP + 0xffffff28]
004e2063  FADDP
004e2065  MOV EDX,dword ptr [EBP + -0x34]
004e2068  IMUL EDX,EDX,0x780
004e206e  MOV dword ptr [EBP + 0xffffff24],EDX
004e2074  FILD dword ptr [EBP + 0xffffff24]
004e207a  FADDP
004e207c  MOV EAX,dword ptr [EBP + -0x28]
004e207f  IMUL EAX,EAX,0xa80
004e2085  MOV dword ptr [EBP + 0xffffff20],EAX
004e208b  FILD dword ptr [EBP + 0xffffff20]
004e2091  FADDP
004e2093  MOV ECX,dword ptr [EBP + -0x1c]
004e2096  IMUL ECX,ECX,0xe00
004e209c  MOV dword ptr [EBP + 0xffffff1c],ECX
004e20a2  FILD dword ptr [EBP + 0xffffff1c]
004e20a8  FADDP
004e20aa  FMUL double ptr [EBP + -0x10]
004e20ad  CALL 0x00686cc0
004e20b2  MOV EDX,dword ptr [EBP + -0x38]
004e20b5  MOV word ptr [EDX + 0x338],AX
004e20bc  MOV EAX,dword ptr [EBP + -0x18]
004e20bf  IMUL EAX,EAX,0xf00
004e20c5  MOV dword ptr [EBP + 0xffffff18],EAX
004e20cb  FILD dword ptr [EBP + 0xffffff18]
004e20d1  FDIV double ptr [0x006b9490]
004e20d7  MOV ECX,dword ptr [EBP + -0x14]
004e20da  IMUL ECX,ECX,0x500
004e20e0  MOV dword ptr [EBP + 0xffffff14],ECX
004e20e6  FILD dword ptr [EBP + 0xffffff14]
004e20ec  FADDP
004e20ee  MOV EDX,dword ptr [EBP + -0x34]
004e20f1  IMUL EDX,EDX,0x780
004e20f7  MOV dword ptr [EBP + 0xffffff10],EDX
004e20fd  FILD dword ptr [EBP + 0xffffff10]
004e2103  FADDP
004e2105  MOV EAX,dword ptr [EBP + -0x28]
004e2108  IMUL EAX,EAX,0xa80
004e210e  MOV dword ptr [EBP + 0xffffff0c],EAX
004e2114  FILD dword ptr [EBP + 0xffffff0c]
004e211a  FADDP
004e211c  MOV ECX,dword ptr [EBP + -0x1c]
004e211f  IMUL ECX,ECX,0xe00
004e2125  MOV dword ptr [EBP + 0xffffff08],ECX
004e212b  FILD dword ptr [EBP + 0xffffff08]
004e2131  FADDP
004e2133  FMUL double ptr [EBP + -0x10]
004e2136  CALL 0x00686cc0
004e213b  MOV EDX,dword ptr [EBP + -0x38]
004e213e  MOV word ptr [EDX + 0x33a],AX
004e2145  MOV EAX,dword ptr [EBP + -0x14]
004e2148  IMUL EAX,EAX,0x1e00
004e214e  MOV dword ptr [EBP + 0xffffff04],EAX
004e2154  FILD dword ptr [EBP + 0xffffff04]
004e215a  FDIV double ptr [0x006b9490]
004e2160  MOV ECX,dword ptr [EBP + -0x34]
004e2163  IMUL ECX,ECX,0x780
004e2169  MOV dword ptr [EBP + 0xffffff00],ECX
004e216f  FILD dword ptr [EBP + 0xffffff00]
004e2175  FADDP
004e2177  MOV EDX,dword ptr [EBP + -0x28]
004e217a  IMUL EDX,EDX,0xa80
004e2180  MOV dword ptr [EBP + 0xfffffefc],EDX
004e2186  FILD dword ptr [EBP + 0xfffffefc]
004e218c  FADDP
004e218e  MOV EAX,dword ptr [EBP + -0x1c]
004e2191  IMUL EAX,EAX,0xe00
004e2197  MOV dword ptr [EBP + 0xfffffef8],EAX
004e219d  FILD dword ptr [EBP + 0xfffffef8]
004e21a3  FADDP
004e21a5  FMUL double ptr [EBP + -0x10]
004e21a8  CALL 0x00686cc0
004e21ad  MOV ECX,dword ptr [EBP + -0x38]
004e21b0  MOV word ptr [ECX + 0x33c],AX
004e21b7  MOV EDX,dword ptr [EBP + -0x34]
004e21ba  IMUL EDX,EDX,0x3480
004e21c0  MOV dword ptr [EBP + 0xfffffef4],EDX
004e21c6  FILD dword ptr [EBP + 0xfffffef4]
004e21cc  FDIV double ptr [0x006b9490]
004e21d2  MOV EAX,dword ptr [EBP + -0x28]
004e21d5  IMUL EAX,EAX,0xa80
004e21db  MOV dword ptr [EBP + 0xfffffef0],EAX
004e21e1  FILD dword ptr [EBP + 0xfffffef0]
004e21e7  FADDP
004e21e9  MOV ECX,dword ptr [EBP + -0x1c]
004e21ec  IMUL ECX,ECX,0xe00
004e21f2  MOV dword ptr [EBP + 0xfffffeec],ECX
004e21f8  FILD dword ptr [EBP + 0xfffffeec]
004e21fe  FADDP
004e2200  FMUL double ptr [EBP + -0x10]
004e2203  CALL 0x00686cc0
004e2208  MOV EDX,dword ptr [EBP + -0x38]
004e220b  MOV word ptr [EDX + 0x33e],AX
004e2212  MOV EAX,dword ptr [EBP + -0x28]
004e2215  IMUL EAX,EAX,0x5400
004e221b  MOV dword ptr [EBP + 0xfffffee8],EAX
004e2221  FILD dword ptr [EBP + 0xfffffee8]
004e2227  FDIV double ptr [0x006b9490]
004e222d  MOV ECX,dword ptr [EBP + -0x1c]
004e2230  IMUL ECX,ECX,0xe00
004e2236  MOV dword ptr [EBP + 0xfffffee4],ECX
004e223c  FILD dword ptr [EBP + 0xfffffee4]
004e2242  FADDP
004e2244  FMUL double ptr [EBP + -0x10]
004e2247  CALL 0x00686cc0
004e224c  MOV EDX,dword ptr [EBP + -0x38]
004e224f  MOV word ptr [EDX + 0x340],AX
004e2256  MOV EAX,dword ptr [EBP + -0x1c]
004e2259  IMUL EAX,EAX,0x7e00
004e225f  MOV dword ptr [EBP + 0xfffffee0],EAX
004e2265  FILD dword ptr [EBP + 0xfffffee0]
004e226b  FDIV double ptr [0x006b9490]
004e2271  FMUL double ptr [EBP + -0x10]
004e2274  CALL 0x00686cc0
004e2279  MOV ECX,dword ptr [EBP + -0x38]
004e227c  MOV word ptr [ECX + 0x342],AX
004e2283  MOV EDX,dword ptr [EBP + -0x38]
004e2286  MOV word ptr [EDX + 0x288],0x5
004e228f  MOV EAX,dword ptr [EBP + -0x38]
004e2292  MOV word ptr [EAX + 0x28a],0x1e
004e229b  MOV ECX,dword ptr [EBP + -0x38]
004e229e  MOV word ptr [ECX + 0x28c],0x32
004e22a7  MOV EDX,dword ptr [EBP + -0x38]
004e22aa  MOV word ptr [EDX + 0x28e],0x19
004e22b3  MOV EAX,dword ptr [EBP + -0x38]
004e22b6  MOV word ptr [EAX + 0x290],0x3c
004e22bf  MOV ECX,dword ptr [EBP + -0x38]
004e22c2  MOV word ptr [ECX + 0x292],0x1e
004e22cb  MOV EDX,dword ptr [EBP + -0x38]
004e22ce  MOV word ptr [EDX + 0x294],0x4b
004e22d7  MOV EAX,dword ptr [EBP + -0x38]
004e22da  MOV word ptr [EAX + 0x296],0x28
004e22e3  MOV ECX,dword ptr [EBP + -0x38]
004e22e6  MOV word ptr [ECX + 0x298],0x32
004e22ef  MOV EDX,dword ptr [EBP + -0x38]
004e22f2  MOV word ptr [EDX + 0x29a],0x14
004e22fb  MOV EAX,dword ptr [EBP + -0x38]
004e22fe  MOV word ptr [EAX + 0x29c],0xa
004e2307  MOV ECX,dword ptr [EBP + -0x38]
004e230a  MOV word ptr [ECX + 0x29e],0x14
004e2313  MOV EDX,dword ptr [EBP + -0x38]
004e2316  MOV word ptr [EDX + 0x2a0],0x28
004e231f  MOV EAX,dword ptr [EBP + -0x38]
004e2322  MOV word ptr [EAX + 0x2a2],0x14
004e232b  MOV ECX,dword ptr [EBP + -0x38]
004e232e  MOV word ptr [ECX + 0x2a4],0x5
004e2337  MOV EDX,dword ptr [EBP + -0x38]
004e233a  MOV word ptr [EDX + 0x2a6],0x1e
004e2343  MOV EAX,dword ptr [EBP + -0x38]
004e2346  MOV word ptr [EAX + 0x2aa],0x4b
004e234f  MOV ECX,dword ptr [EBP + -0x38]
004e2352  MOV word ptr [ECX + 0x2ac],0x32
004e235b  MOV EDX,dword ptr [EBP + -0x38]
004e235e  MOV word ptr [EDX + 0x2ae],0x19
004e2367  MOV EAX,dword ptr [EBP + -0x38]
004e236a  MOV word ptr [EAX + 0x2b0],0x46
004e2373  MOV ECX,dword ptr [EBP + -0x38]
004e2376  MOV word ptr [ECX + 0x2b2],0x3c
004e237f  MOV EDX,dword ptr [EBP + -0x38]
004e2382  MOV word ptr [EDX + 0x2a8],0x5
004e238b  MOV EAX,dword ptr [EBP + -0x38]
004e238e  MOV word ptr [EAX + 0x2b4],0x6
004e2397  MOV ECX,dword ptr [EBP + -0x38]
004e239a  MOV word ptr [ECX + 0x2b6],0x1e
004e23a3  MOV EDX,dword ptr [EBP + -0x38]
004e23a6  MOV word ptr [EDX + 0x2b8],0x1e
004e23af  JMP 0x004e9360
004e23b4  MOV dword ptr [EBP + -0x20],0x3e8
004e23bb  MOV dword ptr [EBP + -0x24],0x3ca
004e23c2  MOV dword ptr [EBP + -0x18],0x384
004e23c9  MOV dword ptr [EBP + -0x14],0x1f4
004e23d0  MOV dword ptr [EBP + -0x34],0xc8
004e23d7  MOV dword ptr [EBP + -0x28],0x32
004e23de  MOV dword ptr [EBP + -0x1c],0xa
004e23e5  FLD double ptr [0x006bfc20]
004e23eb  FSTP double ptr [EBP + -0x30]
004e23ee  FLD double ptr [0x006bfc18]
004e23f4  FSTP double ptr [EBP + -0x8]
004e23f7  FLD double ptr [0x006bfc10]
004e23fd  FSTP double ptr [EBP + -0x10]
004e2400  MOV EAX,dword ptr [EBP + -0x38]
004e2403  MOV word ptr [EAX + 0x2ba],0xf
004e240c  MOV ECX,dword ptr [EBP + -0x38]
004e240f  MOV word ptr [ECX + 0x2bc],0x33
004e2418  MOV EDX,dword ptr [EBP + -0x38]
004e241b  MOV word ptr [EDX + 0x2be],0x50
004e2424  MOV EAX,dword ptr [EBP + -0x38]
004e2427  MOV word ptr [EAX + 0x2c0],0x61
004e2430  MOV ECX,dword ptr [EBP + -0x38]
004e2433  MOV word ptr [ECX + 0x2c2],0x72
004e243c  MOV EDX,dword ptr [EBP + -0x38]
004e243f  MOV word ptr [EDX + 0x2c4],0x84
004e2448  MOV EAX,dword ptr [EBP + -0x38]
004e244b  MOV word ptr [EAX + 0x2c6],0x98
004e2454  MOV ECX,dword ptr [EBP + -0x38]
004e2457  MOV word ptr [ECX + 0x2c8],0xac
004e2460  MOV EDX,dword ptr [EBP + -0x38]
004e2463  MOV word ptr [EDX + 0x2ca],0xc1
004e246c  MOV EAX,dword ptr [EBP + -0x38]
004e246f  MOV word ptr [EAX + 0x2cc],0xd8
004e2478  MOV ECX,dword ptr [EBP + -0x38]
004e247b  MOV word ptr [ECX + 0x2ce],0xf0
004e2484  MOV EDX,dword ptr [EBP + -0x38]
004e2487  MOV word ptr [EDX + 0x2d0],0x109
004e2490  MOV EAX,dword ptr [EBP + -0x38]
004e2493  MOV word ptr [EAX + 0x2d2],0xf8
004e249c  MOV ECX,dword ptr [EBP + -0x38]
004e249f  MOV word ptr [ECX + 0x2d4],0x153
004e24a8  MOV EDX,dword ptr [EBP + -0x38]
004e24ab  MOV word ptr [EDX + 0x2d6],0x16b
004e24b4  MOV EAX,dword ptr [EBP + -0x38]
004e24b7  MOV word ptr [EAX + 0x2d8],0x215
004e24c0  MOV ECX,dword ptr [EBP + -0x38]
004e24c3  MOV word ptr [ECX + 0x2da],0x203
004e24cc  MOV EDX,dword ptr [EBP + -0x38]
004e24cf  MOV word ptr [EDX + 0x2dc],0x215
004e24d8  MOV EAX,dword ptr [EBP + -0x38]
004e24db  MOV word ptr [EAX + 0x2de],0x246
004e24e4  MOV ECX,dword ptr [EBP + -0x38]
004e24e7  MOV word ptr [ECX + 0x2e0],0x286
004e24f0  MOV EDX,dword ptr [EBP + -0x38]
004e24f3  MOV word ptr [EDX + 0x2e2],0x29d
004e24fc  MOV EAX,dword ptr [EBP + -0x38]
004e24ff  MOV word ptr [EAX + 0x2e4],0x2ea
004e2508  MOV ECX,dword ptr [EBP + -0x38]
004e250b  MOV word ptr [ECX + 0x2e6],0x30e
004e2514  MOV EDX,dword ptr [EBP + -0x38]
004e2517  MOV word ptr [EDX + 0x2e8],0x323
004e2520  MOV EAX,dword ptr [EBP + -0x38]
004e2523  MOV word ptr [EAX + 0x2ea],0x32e
004e252c  MOV ECX,dword ptr [EBP + -0x38]
004e252f  MOV word ptr [ECX + 0x2ec],0x334
004e2538  MOV EDX,dword ptr [EBP + -0x38]
004e253b  MOV word ptr [EDX + 0x2ee],0x336
004e2544  MOV EAX,dword ptr [EBP + -0x38]
004e2547  MOV word ptr [EAX + 0x2f0],0x379
004e2550  MOV ECX,dword ptr [EBP + -0x38]
004e2553  MOV word ptr [ECX + 0x2f2],0x392
004e255c  MOV EDX,dword ptr [EBP + -0x38]
004e255f  MOV word ptr [EDX + 0x2f4],0x3a0
004e2568  MOV EAX,dword ptr [EBP + -0x38]
004e256b  MOV word ptr [EAX + 0x2f6],0x3a6
004e2574  MOV ECX,dword ptr [EBP + -0x38]
004e2577  MOV word ptr [ECX + 0x2f8],0x3a8
004e2580  MOV EDX,dword ptr [EBP + -0x38]
004e2583  MOV word ptr [EDX + 0x2fa],0x3b4
004e258c  MOV EAX,dword ptr [EBP + -0x38]
004e258f  MOV word ptr [EAX + 0x2fc],0x3c3
004e2598  MOV ECX,dword ptr [EBP + -0x38]
004e259b  MOV word ptr [ECX + 0x2fe],0x3cb
004e25a4  MOV EDX,dword ptr [EBP + -0x38]
004e25a7  MOV word ptr [EDX + 0x300],0x3ce
004e25b0  MOV EAX,dword ptr [EBP + -0x38]
004e25b3  MOV word ptr [EAX + 0x302],0x3d4
004e25bc  MOV ECX,dword ptr [EBP + -0x38]
004e25bf  MOV word ptr [ECX + 0x304],0x3dc
004e25c8  MOV EDX,dword ptr [EBP + -0x38]
004e25cb  MOV word ptr [EDX + 0x306],0x3df
004e25d4  MOV EAX,dword ptr [EBP + -0x38]
004e25d7  MOV word ptr [EAX + 0x308],0x3e2
004e25e0  MOV ECX,dword ptr [EBP + -0x38]
004e25e3  MOV word ptr [ECX + 0x30a],0x3e5
004e25ec  MOV EDX,dword ptr [EBP + -0x38]
004e25ef  MOV word ptr [EDX + 0x30c],0x3e8
004e25f8  MOV EAX,dword ptr [EBP + -0x24]
004e25fb  SHL EAX,0x2
004e25fe  MOV ECX,dword ptr [EBP + -0x20]
004e2601  LEA EDX,[EAX + ECX*0x4]
004e2604  MOV EAX,dword ptr [EBP + -0x18]
004e2607  LEA ECX,[EDX + EAX*0x4]
004e260a  MOV EDX,dword ptr [EBP + -0x14]
004e260d  LEA EAX,[ECX + EDX*0x4]
004e2610  MOV ECX,dword ptr [EBP + -0x34]
004e2613  LEA EDX,[EAX + ECX*0x4]
004e2616  MOV EAX,dword ptr [EBP + -0x28]
004e2619  LEA ECX,[EDX + EAX*0x4]
004e261c  MOV EDX,dword ptr [EBP + -0x1c]
004e261f  LEA EAX,[ECX + EDX*0x4]
004e2622  MOV dword ptr [EBP + 0xfffffedc],EAX
004e2628  FILD dword ptr [EBP + 0xfffffedc]
004e262e  FMUL double ptr [EBP + -0x30]
004e2631  CALL 0x00686cc0
004e2636  MOV ECX,dword ptr [EBP + -0x38]
004e2639  MOV word ptr [ECX + 0x30e],AX
004e2640  MOV EDX,dword ptr [EBP + -0x24]
004e2643  SHL EDX,0x2
004e2646  MOV EAX,dword ptr [EBP + -0x20]
004e2649  LEA ECX,[EDX + EAX*0x4]
004e264c  MOV EDX,dword ptr [EBP + -0x18]
004e264f  LEA EAX,[ECX + EDX*0x4]
004e2652  MOV ECX,dword ptr [EBP + -0x14]
004e2655  LEA EDX,[EAX + ECX*0x4]
004e2658  MOV EAX,dword ptr [EBP + -0x34]
004e265b  LEA ECX,[EDX + EAX*0x4]
004e265e  MOV EDX,dword ptr [EBP + -0x28]
004e2661  LEA EAX,[ECX + EDX*0x4]
004e2664  MOV ECX,dword ptr [EBP + -0x1c]
004e2667  LEA EDX,[EAX + ECX*0x4]
004e266a  MOV dword ptr [EBP + 0xfffffed8],EDX
004e2670  FILD dword ptr [EBP + 0xfffffed8]
004e2676  FMUL double ptr [EBP + -0x30]
004e2679  CALL 0x00686cc0
004e267e  MOV ECX,dword ptr [EBP + -0x38]
004e2681  MOV word ptr [ECX + 0x310],AX
004e2688  MOV EDX,dword ptr [EBP + -0x18]
004e268b  SHL EDX,0x2
004e268e  MOV EAX,dword ptr [EBP + -0x24]
004e2691  LEA ECX,[EDX + EAX*0x8]
004e2694  MOV EDX,dword ptr [EBP + -0x14]
004e2697  LEA EAX,[ECX + EDX*0x4]
004e269a  MOV ECX,dword ptr [EBP + -0x34]
004e269d  LEA EDX,[EAX + ECX*0x4]
004e26a0  MOV EAX,dword ptr [EBP + -0x28]
004e26a3  LEA ECX,[EDX + EAX*0x4]
004e26a6  MOV EDX,dword ptr [EBP + -0x1c]
004e26a9  LEA EAX,[ECX + EDX*0x4]
004e26ac  MOV dword ptr [EBP + 0xfffffed4],EAX
004e26b2  FILD dword ptr [EBP + 0xfffffed4]
004e26b8  FMUL double ptr [EBP + -0x30]
004e26bb  CALL 0x00686cc0
004e26c0  MOV ECX,dword ptr [EBP + -0x38]
004e26c3  MOV word ptr [ECX + 0x312],AX
004e26ca  MOV EDX,dword ptr [EBP + -0x18]
004e26cd  IMUL EDX,EDX,0xc
004e26d0  MOV EAX,dword ptr [EBP + -0x14]
004e26d3  LEA ECX,[EDX + EAX*0x4]
004e26d6  MOV EDX,dword ptr [EBP + -0x34]
004e26d9  LEA EAX,[ECX + EDX*0x4]
004e26dc  MOV ECX,dword ptr [EBP + -0x28]
004e26df  LEA EDX,[EAX + ECX*0x4]
004e26e2  MOV EAX,dword ptr [EBP + -0x1c]
004e26e5  LEA ECX,[EDX + EAX*0x4]
004e26e8  MOV dword ptr [EBP + 0xfffffed0],ECX
004e26ee  FILD dword ptr [EBP + 0xfffffed0]
004e26f4  FMUL double ptr [EBP + -0x30]
004e26f7  CALL 0x00686cc0
004e26fc  MOV EDX,dword ptr [EBP + -0x38]
004e26ff  MOV word ptr [EDX + 0x314],AX
004e2706  MOV EAX,dword ptr [EBP + -0x14]
004e2709  SHL EAX,0x4
004e270c  MOV ECX,dword ptr [EBP + -0x34]
004e270f  LEA EDX,[EAX + ECX*0x4]
004e2712  MOV EAX,dword ptr [EBP + -0x28]
004e2715  LEA ECX,[EDX + EAX*0x4]
004e2718  MOV EDX,dword ptr [EBP + -0x1c]
004e271b  LEA EAX,[ECX + EDX*0x4]
004e271e  MOV dword ptr [EBP + 0xfffffecc],EAX
004e2724  FILD dword ptr [EBP + 0xfffffecc]
004e272a  FMUL double ptr [EBP + -0x30]
004e272d  CALL 0x00686cc0
004e2732  MOV ECX,dword ptr [EBP + -0x38]
004e2735  MOV word ptr [ECX + 0x316],AX
004e273c  MOV EDX,dword ptr [EBP + -0x34]
004e273f  IMUL EDX,EDX,0x14
004e2742  MOV EAX,dword ptr [EBP + -0x28]
004e2745  LEA ECX,[EDX + EAX*0x4]
004e2748  MOV EDX,dword ptr [EBP + -0x1c]
004e274b  LEA EAX,[ECX + EDX*0x4]
004e274e  MOV dword ptr [EBP + 0xfffffec8],EAX
004e2754  FILD dword ptr [EBP + 0xfffffec8]
004e275a  FMUL double ptr [EBP + -0x30]
004e275d  CALL 0x00686cc0
004e2762  MOV ECX,dword ptr [EBP + -0x38]
004e2765  MOV word ptr [ECX + 0x318],AX
004e276c  MOV EDX,dword ptr [EBP + -0x28]
004e276f  IMUL EDX,EDX,0x18
004e2772  MOV EAX,dword ptr [EBP + -0x1c]
004e2775  LEA ECX,[EDX + EAX*0x4]
004e2778  MOV dword ptr [EBP + 0xfffffec4],ECX
004e277e  FILD dword ptr [EBP + 0xfffffec4]
004e2784  FMUL double ptr [EBP + -0x30]
004e2787  CALL 0x00686cc0
004e278c  MOV EDX,dword ptr [EBP + -0x38]
004e278f  MOV word ptr [EDX + 0x31a],AX
004e2796  MOV EAX,dword ptr [EBP + -0x1c]
004e2799  IMUL EAX,EAX,0x1c
004e279c  MOV dword ptr [EBP + 0xfffffec0],EAX
004e27a2  FILD dword ptr [EBP + 0xfffffec0]
004e27a8  FMUL double ptr [EBP + -0x30]
004e27ab  CALL 0x00686cc0
004e27b0  MOV ECX,dword ptr [EBP + -0x38]
004e27b3  MOV word ptr [ECX + 0x31c],AX
004e27ba  MOV EDX,dword ptr [EBP + -0x20]
004e27bd  SHL EDX,0x4
004e27c0  MOV EAX,dword ptr [EBP + -0x24]
004e27c3  SHL EAX,0x5
004e27c6  ADD EDX,EAX
004e27c8  MOV ECX,dword ptr [EBP + -0x18]
004e27cb  IMUL ECX,ECX,0x30
004e27ce  ADD EDX,ECX
004e27d0  MOV EAX,dword ptr [EBP + -0x14]
004e27d3  SHL EAX,0x6
004e27d6  ADD EDX,EAX
004e27d8  MOV ECX,dword ptr [EBP + -0x34]
004e27db  IMUL ECX,ECX,0x50
004e27de  ADD EDX,ECX
004e27e0  MOV EAX,dword ptr [EBP + -0x28]
004e27e3  IMUL EAX,EAX,0x60
004e27e6  ADD EDX,EAX
004e27e8  MOV ECX,dword ptr [EBP + -0x1c]
004e27eb  IMUL ECX,ECX,0x70
004e27ee  ADD EDX,ECX
004e27f0  MOV dword ptr [EBP + 0xfffffebc],EDX
004e27f6  FILD dword ptr [EBP + 0xfffffebc]
004e27fc  FMUL double ptr [EBP + -0x8]
004e27ff  CALL 0x00686cc0
004e2804  MOV EDX,dword ptr [EBP + -0x38]
004e2807  MOV word ptr [EDX + 0x31e],AX
004e280e  MOV EAX,dword ptr [EBP + -0x20]
004e2811  SHL EAX,0x4
004e2814  MOV ECX,dword ptr [EBP + -0x24]
004e2817  SHL ECX,0x5
004e281a  ADD EAX,ECX
004e281c  MOV EDX,dword ptr [EBP + -0x18]
004e281f  IMUL EDX,EDX,0x30
004e2822  ADD EAX,EDX
004e2824  MOV ECX,dword ptr [EBP + -0x14]
004e2827  SHL ECX,0x6
004e282a  ADD EAX,ECX
004e282c  MOV EDX,dword ptr [EBP + -0x34]
004e282f  IMUL EDX,EDX,0x50
004e2832  ADD EAX,EDX
004e2834  MOV ECX,dword ptr [EBP + -0x28]
004e2837  IMUL ECX,ECX,0x60
004e283a  ADD EAX,ECX
004e283c  MOV EDX,dword ptr [EBP + -0x1c]
004e283f  IMUL EDX,EDX,0x70
004e2842  ADD EAX,EDX
004e2844  MOV dword ptr [EBP + 0xfffffeb8],EAX
004e284a  FILD dword ptr [EBP + 0xfffffeb8]
004e2850  FMUL double ptr [EBP + -0x8]
004e2853  CALL 0x00686cc0
004e2858  MOV ECX,dword ptr [EBP + -0x38]
004e285b  MOV word ptr [ECX + 0x320],AX
004e2862  MOV EDX,dword ptr [EBP + -0x20]
004e2865  SHL EDX,0x4
004e2868  MOV EAX,dword ptr [EBP + -0x24]
004e286b  SHL EAX,0x5
004e286e  ADD EDX,EAX
004e2870  MOV ECX,dword ptr [EBP + -0x18]
004e2873  IMUL ECX,ECX,0x30
004e2876  ADD EDX,ECX
004e2878  MOV EAX,dword ptr [EBP + -0x14]
004e287b  SHL EAX,0x6
004e287e  ADD EDX,EAX
004e2880  MOV ECX,dword ptr [EBP + -0x34]
004e2883  IMUL ECX,ECX,0x50
004e2886  ADD EDX,ECX
004e2888  MOV EAX,dword ptr [EBP + -0x28]
004e288b  IMUL EAX,EAX,0x60
004e288e  ADD EDX,EAX
004e2890  MOV ECX,dword ptr [EBP + -0x1c]
004e2893  IMUL ECX,ECX,0x70
004e2896  ADD EDX,ECX
004e2898  MOV dword ptr [EBP + 0xfffffeb4],EDX
004e289e  FILD dword ptr [EBP + 0xfffffeb4]
004e28a4  FMUL double ptr [EBP + -0x8]
004e28a7  CALL 0x00686cc0
004e28ac  MOV EDX,dword ptr [EBP + -0x38]
004e28af  MOV word ptr [EDX + 0x322],AX
004e28b6  MOV EAX,dword ptr [EBP + -0x24]
004e28b9  IMUL EAX,EAX,0x60
004e28bc  MOV dword ptr [EBP + 0xfffffeb0],EAX
004e28c2  FILD dword ptr [EBP + 0xfffffeb0]
004e28c8  FDIV double ptr [0x006b3740]
004e28ce  MOV ECX,dword ptr [EBP + -0x18]
004e28d1  IMUL ECX,ECX,0x30
004e28d4  MOV dword ptr [EBP + 0xfffffeac],ECX
004e28da  FILD dword ptr [EBP + 0xfffffeac]
004e28e0  FADDP
004e28e2  MOV EDX,dword ptr [EBP + -0x14]
004e28e5  SHL EDX,0x6
004e28e8  MOV dword ptr [EBP + 0xfffffea8],EDX
004e28ee  FILD dword ptr [EBP + 0xfffffea8]
004e28f4  FADDP
004e28f6  MOV EAX,dword ptr [EBP + -0x34]
004e28f9  IMUL EAX,EAX,0x50
004e28fc  MOV dword ptr [EBP + 0xfffffea4],EAX
004e2902  FILD dword ptr [EBP + 0xfffffea4]
004e2908  FADDP
004e290a  MOV ECX,dword ptr [EBP + -0x28]
004e290d  IMUL ECX,ECX,0x60
004e2910  MOV dword ptr [EBP + 0xfffffea0],ECX
004e2916  FILD dword ptr [EBP + 0xfffffea0]
004e291c  FADDP
004e291e  MOV EDX,dword ptr [EBP + -0x1c]
004e2921  IMUL EDX,EDX,0x70
004e2924  MOV dword ptr [EBP + 0xfffffe9c],EDX
004e292a  FILD dword ptr [EBP + 0xfffffe9c]
004e2930  FADDP
004e2932  FMUL double ptr [EBP + -0x8]
004e2935  CALL 0x00686cc0
004e293a  MOV ECX,dword ptr [EBP + -0x38]
004e293d  MOV word ptr [ECX + 0x324],AX
004e2944  MOV EDX,dword ptr [EBP + -0x18]
004e2947  IMUL EDX,EDX,0xc0
004e294d  MOV dword ptr [EBP + 0xfffffe98],EDX
004e2953  FILD dword ptr [EBP + 0xfffffe98]
004e2959  FDIV double ptr [0x006b3740]
004e295f  MOV EAX,dword ptr [EBP + -0x14]
004e2962  SHL EAX,0x6
004e2965  MOV dword ptr [EBP + 0xfffffe94],EAX
004e296b  FILD dword ptr [EBP + 0xfffffe94]
004e2971  FADDP
004e2973  MOV ECX,dword ptr [EBP + -0x34]
004e2976  IMUL ECX,ECX,0x50
004e2979  MOV dword ptr [EBP + 0xfffffe90],ECX
004e297f  FILD dword ptr [EBP + 0xfffffe90]
004e2985  FADDP
004e2987  MOV EDX,dword ptr [EBP + -0x28]
004e298a  IMUL EDX,EDX,0x60
004e298d  MOV dword ptr [EBP + 0xfffffe8c],EDX
004e2993  FILD dword ptr [EBP + 0xfffffe8c]
004e2999  FADDP
004e299b  MOV EAX,dword ptr [EBP + -0x1c]
004e299e  IMUL EAX,EAX,0x70
004e29a1  MOV dword ptr [EBP + 0xfffffe88],EAX
004e29a7  FILD dword ptr [EBP + 0xfffffe88]
004e29ad  FADDP
004e29af  FMUL double ptr [EBP + -0x8]
004e29b2  CALL 0x00686cc0
004e29b7  MOV ECX,dword ptr [EBP + -0x38]
004e29ba  MOV word ptr [ECX + 0x326],AX
004e29c1  MOV EDX,dword ptr [EBP + -0x14]
004e29c4  IMUL EDX,EDX,0x140
004e29ca  MOV dword ptr [EBP + 0xfffffe84],EDX
004e29d0  FILD dword ptr [EBP + 0xfffffe84]
004e29d6  FDIV double ptr [0x006b3740]
004e29dc  MOV EAX,dword ptr [EBP + -0x34]
004e29df  IMUL EAX,EAX,0x50
004e29e2  MOV dword ptr [EBP + 0xfffffe80],EAX
004e29e8  FILD dword ptr [EBP + 0xfffffe80]
004e29ee  FADDP
004e29f0  MOV ECX,dword ptr [EBP + -0x28]
004e29f3  IMUL ECX,ECX,0x60
004e29f6  MOV dword ptr [EBP + 0xfffffe7c],ECX
004e29fc  FILD dword ptr [EBP + 0xfffffe7c]
004e2a02  FADDP
004e2a04  MOV EDX,dword ptr [EBP + -0x1c]
004e2a07  IMUL EDX,EDX,0x70
004e2a0a  MOV dword ptr [EBP + 0xfffffe78],EDX
004e2a10  FILD dword ptr [EBP + 0xfffffe78]
004e2a16  FADDP
004e2a18  FMUL double ptr [EBP + -0x8]
004e2a1b  CALL 0x00686cc0
004e2a20  MOV ECX,dword ptr [EBP + -0x38]
004e2a23  MOV word ptr [ECX + 0x328],AX
004e2a2a  MOV EDX,dword ptr [EBP + -0x34]
004e2a2d  IMUL EDX,EDX,0x1e0
004e2a33  MOV dword ptr [EBP + 0xfffffe74],EDX
004e2a39  FILD dword ptr [EBP + 0xfffffe74]
004e2a3f  FDIV double ptr [0x006b3740]
004e2a45  MOV EAX,dword ptr [EBP + -0x28]
004e2a48  IMUL EAX,EAX,0x60
004e2a4b  MOV dword ptr [EBP + 0xfffffe70],EAX
004e2a51  FILD dword ptr [EBP + 0xfffffe70]
004e2a57  FADDP
004e2a59  MOV ECX,dword ptr [EBP + -0x1c]
004e2a5c  IMUL ECX,ECX,0x70
004e2a5f  MOV dword ptr [EBP + 0xfffffe6c],ECX
004e2a65  FILD dword ptr [EBP + 0xfffffe6c]
004e2a6b  FADDP
004e2a6d  FMUL double ptr [EBP + -0x8]
004e2a70  CALL 0x00686cc0
004e2a75  MOV EDX,dword ptr [EBP + -0x38]
004e2a78  MOV word ptr [EDX + 0x32a],AX
004e2a7f  MOV EAX,dword ptr [EBP + -0x28]
004e2a82  IMUL EAX,EAX,0x2a0
004e2a88  MOV dword ptr [EBP + 0xfffffe68],EAX
004e2a8e  FILD dword ptr [EBP + 0xfffffe68]
004e2a94  FDIV double ptr [0x006b3740]
004e2a9a  MOV ECX,dword ptr [EBP + -0x1c]
004e2a9d  IMUL ECX,ECX,0x70
004e2aa0  MOV dword ptr [EBP + 0xfffffe64],ECX
004e2aa6  FILD dword ptr [EBP + 0xfffffe64]
004e2aac  FADDP
004e2aae  FMUL double ptr [EBP + -0x8]
004e2ab1  CALL 0x00686cc0
004e2ab6  MOV EDX,dword ptr [EBP + -0x38]
004e2ab9  MOV word ptr [EDX + 0x32c],AX
004e2ac0  MOV EAX,dword ptr [EBP + -0x1c]
004e2ac3  IMUL EAX,EAX,0x380
004e2ac9  MOV dword ptr [EBP + 0xfffffe60],EAX
004e2acf  FILD dword ptr [EBP + 0xfffffe60]
004e2ad5  FDIV double ptr [0x006b3740]
004e2adb  FMUL double ptr [EBP + -0x8]
004e2ade  CALL 0x00686cc0
004e2ae3  MOV ECX,dword ptr [EBP + -0x38]
004e2ae6  MOV word ptr [ECX + 0x32e],AX
004e2aed  MOV EDX,dword ptr [EBP + -0x20]
004e2af0  SHL EDX,0x7
004e2af3  MOV EAX,dword ptr [EBP + -0x24]
004e2af6  IMUL EAX,EAX,0x180
004e2afc  ADD EDX,EAX
004e2afe  MOV ECX,dword ptr [EBP + -0x18]
004e2b01  IMUL ECX,ECX,0x300
004e2b07  ADD EDX,ECX
004e2b09  MOV EAX,dword ptr [EBP + -0x14]
004e2b0c  IMUL EAX,EAX,0x500
004e2b12  ADD EDX,EAX
004e2b14  MOV ECX,dword ptr [EBP + -0x34]
004e2b17  IMUL ECX,ECX,0x780
004e2b1d  ADD EDX,ECX
004e2b1f  MOV EAX,dword ptr [EBP + -0x28]
004e2b22  IMUL EAX,EAX,0xa80
004e2b28  ADD EDX,EAX
004e2b2a  MOV ECX,dword ptr [EBP + -0x1c]
004e2b2d  IMUL ECX,ECX,0xe00
004e2b33  ADD EDX,ECX
004e2b35  MOV dword ptr [EBP + 0xfffffe5c],EDX
004e2b3b  FILD dword ptr [EBP + 0xfffffe5c]
004e2b41  FMUL double ptr [EBP + -0x10]
004e2b44  CALL 0x00686cc0
004e2b49  MOV EDX,dword ptr [EBP + -0x38]
004e2b4c  MOV word ptr [EDX + 0x330],AX
004e2b53  MOV EAX,dword ptr [EBP + -0x20]
004e2b56  SHL EAX,0x7
004e2b59  MOV ECX,dword ptr [EBP + -0x24]
004e2b5c  IMUL ECX,ECX,0x180
004e2b62  ADD EAX,ECX
004e2b64  MOV EDX,dword ptr [EBP + -0x18]
004e2b67  IMUL EDX,EDX,0x300
004e2b6d  ADD EAX,EDX
004e2b6f  MOV ECX,dword ptr [EBP + -0x14]
004e2b72  IMUL ECX,ECX,0x500
004e2b78  ADD EAX,ECX
004e2b7a  MOV EDX,dword ptr [EBP + -0x34]
004e2b7d  IMUL EDX,EDX,0x780
004e2b83  ADD EAX,EDX
004e2b85  MOV ECX,dword ptr [EBP + -0x28]
004e2b88  IMUL ECX,ECX,0xa80
004e2b8e  ADD EAX,ECX
004e2b90  MOV EDX,dword ptr [EBP + -0x1c]
004e2b93  IMUL EDX,EDX,0xe00
004e2b99  ADD EAX,EDX
004e2b9b  MOV dword ptr [EBP + 0xfffffe58],EAX
004e2ba1  FILD dword ptr [EBP + 0xfffffe58]
004e2ba7  FMUL double ptr [EBP + -0x10]
004e2baa  CALL 0x00686cc0
004e2baf  MOV ECX,dword ptr [EBP + -0x38]
004e2bb2  MOV word ptr [ECX + 0x332],AX
004e2bb9  MOV EDX,dword ptr [EBP + -0x20]
004e2bbc  SHL EDX,0x7
004e2bbf  MOV EAX,dword ptr [EBP + -0x24]
004e2bc2  IMUL EAX,EAX,0x180
004e2bc8  ADD EDX,EAX
004e2bca  MOV ECX,dword ptr [EBP + -0x18]
004e2bcd  IMUL ECX,ECX,0x300
004e2bd3  ADD EDX,ECX
004e2bd5  MOV EAX,dword ptr [EBP + -0x14]
004e2bd8  IMUL EAX,EAX,0x500
004e2bde  ADD EDX,EAX
004e2be0  MOV ECX,dword ptr [EBP + -0x34]
004e2be3  IMUL ECX,ECX,0x780
004e2be9  ADD EDX,ECX
004e2beb  MOV EAX,dword ptr [EBP + -0x28]
004e2bee  IMUL EAX,EAX,0xa80
004e2bf4  ADD EDX,EAX
004e2bf6  MOV ECX,dword ptr [EBP + -0x1c]
004e2bf9  IMUL ECX,ECX,0xe00
004e2bff  ADD EDX,ECX
004e2c01  MOV dword ptr [EBP + 0xfffffe54],EDX
004e2c07  FILD dword ptr [EBP + 0xfffffe54]
004e2c0d  FMUL double ptr [EBP + -0x10]
004e2c10  CALL 0x00686cc0
004e2c15  MOV EDX,dword ptr [EBP + -0x38]
004e2c18  MOV word ptr [EDX + 0x334],AX
004e2c1f  MOV EAX,dword ptr [EBP + -0x20]
004e2c22  SHL EAX,0x7
004e2c25  MOV ECX,dword ptr [EBP + -0x24]
004e2c28  IMUL ECX,ECX,0x180
004e2c2e  ADD EAX,ECX
004e2c30  MOV EDX,dword ptr [EBP + -0x18]
004e2c33  IMUL EDX,EDX,0x300
004e2c39  ADD EAX,EDX
004e2c3b  MOV ECX,dword ptr [EBP + -0x14]
004e2c3e  IMUL ECX,ECX,0x500
004e2c44  ADD EAX,ECX
004e2c46  MOV EDX,dword ptr [EBP + -0x34]
004e2c49  IMUL EDX,EDX,0x780
004e2c4f  ADD EAX,EDX
004e2c51  MOV ECX,dword ptr [EBP + -0x28]
004e2c54  IMUL ECX,ECX,0xa80
004e2c5a  ADD EAX,ECX
004e2c5c  MOV EDX,dword ptr [EBP + -0x1c]
004e2c5f  IMUL EDX,EDX,0xe00
004e2c65  ADD EAX,EDX
004e2c67  MOV dword ptr [EBP + 0xfffffe50],EAX
004e2c6d  FILD dword ptr [EBP + 0xfffffe50]
004e2c73  FMUL double ptr [EBP + -0x10]
004e2c76  CALL 0x00686cc0
004e2c7b  MOV ECX,dword ptr [EBP + -0x38]
004e2c7e  MOV word ptr [ECX + 0x336],AX
004e2c85  MOV EDX,dword ptr [EBP + -0x24]
004e2c88  IMUL EDX,EDX,0x600
004e2c8e  MOV dword ptr [EBP + 0xfffffe4c],EDX
004e2c94  FILD dword ptr [EBP + 0xfffffe4c]
004e2c9a  FDIV double ptr [0x006b9490]
004e2ca0  MOV EAX,dword ptr [EBP + -0x18]
004e2ca3  IMUL EAX,EAX,0x300
004e2ca9  MOV dword ptr [EBP + 0xfffffe48],EAX
004e2caf  FILD dword ptr [EBP + 0xfffffe48]
004e2cb5  FADDP
004e2cb7  MOV ECX,dword ptr [EBP + -0x14]
004e2cba  IMUL ECX,ECX,0x500
004e2cc0  MOV dword ptr [EBP + 0xfffffe44],ECX
004e2cc6  FILD dword ptr [EBP + 0xfffffe44]
004e2ccc  FADDP
004e2cce  MOV EDX,dword ptr [EBP + -0x34]
004e2cd1  IMUL EDX,EDX,0x780
004e2cd7  MOV dword ptr [EBP + 0xfffffe40],EDX
004e2cdd  FILD dword ptr [EBP + 0xfffffe40]
004e2ce3  FADDP
004e2ce5  MOV EAX,dword ptr [EBP + -0x28]
004e2ce8  IMUL EAX,EAX,0xa80
004e2cee  MOV dword ptr [EBP + 0xfffffe3c],EAX
004e2cf4  FILD dword ptr [EBP + 0xfffffe3c]
004e2cfa  FADDP
004e2cfc  MOV ECX,dword ptr [EBP + -0x1c]
004e2cff  IMUL ECX,ECX,0xe00
004e2d05  MOV dword ptr [EBP + 0xfffffe38],ECX
004e2d0b  FILD dword ptr [EBP + 0xfffffe38]
004e2d11  FADDP
004e2d13  FMUL double ptr [EBP + -0x10]
004e2d16  CALL 0x00686cc0
004e2d1b  MOV EDX,dword ptr [EBP + -0x38]
004e2d1e  MOV word ptr [EDX + 0x338],AX
004e2d25  MOV EAX,dword ptr [EBP + -0x18]
004e2d28  IMUL EAX,EAX,0xf00
004e2d2e  MOV dword ptr [EBP + 0xfffffe34],EAX
004e2d34  FILD dword ptr [EBP + 0xfffffe34]
004e2d3a  FDIV double ptr [0x006b9490]
004e2d40  MOV ECX,dword ptr [EBP + -0x14]
004e2d43  IMUL ECX,ECX,0x500
004e2d49  MOV dword ptr [EBP + 0xfffffe30],ECX
004e2d4f  FILD dword ptr [EBP + 0xfffffe30]
004e2d55  FADDP
004e2d57  MOV EDX,dword ptr [EBP + -0x34]
004e2d5a  IMUL EDX,EDX,0x780
004e2d60  MOV dword ptr [EBP + 0xfffffe2c],EDX
004e2d66  FILD dword ptr [EBP + 0xfffffe2c]
004e2d6c  FADDP
004e2d6e  MOV EAX,dword ptr [EBP + -0x28]
004e2d71  IMUL EAX,EAX,0xa80
004e2d77  MOV dword ptr [EBP + 0xfffffe28],EAX
004e2d7d  FILD dword ptr [EBP + 0xfffffe28]
004e2d83  FADDP
004e2d85  MOV ECX,dword ptr [EBP + -0x1c]
004e2d88  IMUL ECX,ECX,0xe00
004e2d8e  MOV dword ptr [EBP + 0xfffffe24],ECX
004e2d94  FILD dword ptr [EBP + 0xfffffe24]
004e2d9a  FADDP
004e2d9c  FMUL double ptr [EBP + -0x10]
004e2d9f  CALL 0x00686cc0
004e2da4  MOV EDX,dword ptr [EBP + -0x38]
004e2da7  MOV word ptr [EDX + 0x33a],AX
004e2dae  MOV EAX,dword ptr [EBP + -0x14]
004e2db1  IMUL EAX,EAX,0x1e00
004e2db7  MOV dword ptr [EBP + 0xfffffe20],EAX
004e2dbd  FILD dword ptr [EBP + 0xfffffe20]
004e2dc3  FDIV double ptr [0x006b9490]
004e2dc9  MOV ECX,dword ptr [EBP + -0x34]
004e2dcc  IMUL ECX,ECX,0x780
004e2dd2  MOV dword ptr [EBP + 0xfffffe1c],ECX
004e2dd8  FILD dword ptr [EBP + 0xfffffe1c]
004e2dde  FADDP
004e2de0  MOV EDX,dword ptr [EBP + -0x28]
004e2de3  IMUL EDX,EDX,0xa80
004e2de9  MOV dword ptr [EBP + 0xfffffe18],EDX
004e2def  FILD dword ptr [EBP + 0xfffffe18]
004e2df5  FADDP
004e2df7  MOV EAX,dword ptr [EBP + -0x1c]
004e2dfa  IMUL EAX,EAX,0xe00
004e2e00  MOV dword ptr [EBP + 0xfffffe14],EAX
004e2e06  FILD dword ptr [EBP + 0xfffffe14]
004e2e0c  FADDP
004e2e0e  FMUL double ptr [EBP + -0x10]
004e2e11  CALL 0x00686cc0
004e2e16  MOV ECX,dword ptr [EBP + -0x38]
004e2e19  MOV word ptr [ECX + 0x33c],AX
004e2e20  MOV EDX,dword ptr [EBP + -0x34]
004e2e23  IMUL EDX,EDX,0x3480
004e2e29  MOV dword ptr [EBP + 0xfffffe10],EDX
004e2e2f  FILD dword ptr [EBP + 0xfffffe10]
004e2e35  FDIV double ptr [0x006b9490]
004e2e3b  MOV EAX,dword ptr [EBP + -0x28]
004e2e3e  IMUL EAX,EAX,0xa80
004e2e44  MOV dword ptr [EBP + 0xfffffe0c],EAX
004e2e4a  FILD dword ptr [EBP + 0xfffffe0c]
004e2e50  FADDP
004e2e52  MOV ECX,dword ptr [EBP + -0x1c]
004e2e55  IMUL ECX,ECX,0xe00
004e2e5b  MOV dword ptr [EBP + 0xfffffe08],ECX
004e2e61  FILD dword ptr [EBP + 0xfffffe08]
004e2e67  FADDP
004e2e69  FMUL double ptr [EBP + -0x10]
004e2e6c  CALL 0x00686cc0
004e2e71  MOV EDX,dword ptr [EBP + -0x38]
004e2e74  MOV word ptr [EDX + 0x33e],AX
004e2e7b  MOV EAX,dword ptr [EBP + -0x28]
004e2e7e  IMUL EAX,EAX,0x5400
004e2e84  MOV dword ptr [EBP + 0xfffffe04],EAX
004e2e8a  FILD dword ptr [EBP + 0xfffffe04]
004e2e90  FDIV double ptr [0x006b9490]
004e2e96  MOV ECX,dword ptr [EBP + -0x1c]
004e2e99  IMUL ECX,ECX,0xe00
004e2e9f  MOV dword ptr [EBP + 0xfffffe00],ECX
004e2ea5  FILD dword ptr [EBP + 0xfffffe00]
004e2eab  FADDP
004e2ead  FMUL double ptr [EBP + -0x10]
004e2eb0  CALL 0x00686cc0
004e2eb5  MOV EDX,dword ptr [EBP + -0x38]
004e2eb8  MOV word ptr [EDX + 0x340],AX
004e2ebf  MOV EAX,dword ptr [EBP + -0x1c]
004e2ec2  IMUL EAX,EAX,0x7e00
004e2ec8  MOV dword ptr [EBP + 0xfffffdfc],EAX
004e2ece  FILD dword ptr [EBP + 0xfffffdfc]
004e2ed4  FDIV double ptr [0x006b9490]
004e2eda  FMUL double ptr [EBP + -0x10]
004e2edd  CALL 0x00686cc0
004e2ee2  MOV ECX,dword ptr [EBP + -0x38]
004e2ee5  MOV word ptr [ECX + 0x342],AX
004e2eec  MOV EDX,dword ptr [EBP + -0x38]
004e2eef  MOV word ptr [EDX + 0x288],0x2
004e2ef8  MOV EAX,dword ptr [EBP + -0x38]
004e2efb  MOV word ptr [EAX + 0x28a],0x32
004e2f04  MOV ECX,dword ptr [EBP + -0x38]
004e2f07  MOV word ptr [ECX + 0x28c],0x46
004e2f10  MOV EDX,dword ptr [EBP + -0x38]
004e2f13  MOV word ptr [EDX + 0x28e],0x32
004e2f1c  MOV EAX,dword ptr [EBP + -0x38]
004e2f1f  MOV word ptr [EAX + 0x290],0x69
004e2f28  MOV ECX,dword ptr [EBP + -0x38]
004e2f2b  MOV word ptr [ECX + 0x292],0x2c
004e2f34  MOV EDX,dword ptr [EBP + -0x38]
004e2f37  MOV word ptr [EDX + 0x294],0x96
004e2f40  MOV EAX,dword ptr [EBP + -0x38]
004e2f43  MOV word ptr [EAX + 0x296],0x3c
004e2f4c  MOV ECX,dword ptr [EBP + -0x38]
004e2f4f  MOV word ptr [ECX + 0x298],0x46
004e2f58  MOV EDX,dword ptr [EBP + -0x38]
004e2f5b  MOV word ptr [EDX + 0x29a],0x19
004e2f64  MOV EAX,dword ptr [EBP + -0x38]
004e2f67  MOV word ptr [EAX + 0x29c],0xa
004e2f70  MOV ECX,dword ptr [EBP + -0x38]
004e2f73  MOV word ptr [ECX + 0x29e],0x8
004e2f7c  MOV EDX,dword ptr [EBP + -0x38]
004e2f7f  MOV word ptr [EDX + 0x2b8],0x12
004e2f88  MOV EAX,dword ptr [EBP + -0x38]
004e2f8b  MOV word ptr [EAX + 0x2a0],0x2d
004e2f94  MOV ECX,dword ptr [EBP + -0x38]
004e2f97  MOV word ptr [ECX + 0x2a2],0x1e
004e2fa0  MOV EDX,dword ptr [EBP + -0x38]
004e2fa3  MOV word ptr [EDX + 0x2a4],0x11
004e2fac  MOV EAX,dword ptr [EBP + -0x38]
004e2faf  MOV word ptr [EAX + 0x2a6],0x19
004e2fb8  MOV ECX,dword ptr [EBP + -0x38]
004e2fbb  MOV word ptr [ECX + 0x2a8],0x8
004e2fc4  MOV EDX,dword ptr [EBP + -0x38]
004e2fc7  MOV word ptr [EDX + 0x2aa],0x5a
004e2fd0  MOV EAX,dword ptr [EBP + -0x38]
004e2fd3  MOV word ptr [EAX + 0x2ac],0x32
004e2fdc  MOV ECX,dword ptr [EBP + -0x38]
004e2fdf  MOV word ptr [ECX + 0x2ae],0x1e
004e2fe8  MOV EDX,dword ptr [EBP + -0x38]
004e2feb  MOV word ptr [EDX + 0x2b0],0x55
004e2ff4  MOV EAX,dword ptr [EBP + -0x38]
004e2ff7  MOV word ptr [EAX + 0x2b2],0x50
004e3000  MOV ECX,dword ptr [EBP + -0x38]
004e3003  MOV word ptr [ECX + 0x2b4],0x3
004e300c  MOV EDX,dword ptr [EBP + -0x38]
004e300f  MOV word ptr [EDX + 0x2b6],0x46
004e3018  JMP 0x004e9360
004e301d  MOV dword ptr [EBP + -0x20],0x3e8
004e3024  MOV dword ptr [EBP + -0x24],0x3ca
004e302b  MOV dword ptr [EBP + -0x18],0x3b6
004e3032  MOV dword ptr [EBP + -0x14],0x2bc
004e3039  MOV dword ptr [EBP + -0x34],0x190
004e3040  MOV dword ptr [EBP + -0x28],0x96
004e3047  MOV dword ptr [EBP + -0x1c],0x14
004e304e  FLD double ptr [0x006bfc08]
004e3054  FSTP double ptr [EBP + -0x30]
004e3057  FLD double ptr [0x006bfc00]
004e305d  FSTP double ptr [EBP + -0x8]
004e3060  FLD double ptr [0x006bfbf8]
004e3066  FSTP double ptr [EBP + -0x10]
004e3069  MOV EAX,dword ptr [EBP + -0x38]
004e306c  MOV word ptr [EAX + 0x2ba],0xf
004e3075  MOV ECX,dword ptr [EBP + -0x38]
004e3078  MOV word ptr [ECX + 0x2bc],0x33
004e3081  MOV EDX,dword ptr [EBP + -0x38]
004e3084  MOV word ptr [EDX + 0x2be],0x50
004e308d  MOV EAX,dword ptr [EBP + -0x38]
004e3090  MOV word ptr [EAX + 0x2c0],0x61
004e3099  MOV ECX,dword ptr [EBP + -0x38]
004e309c  MOV word ptr [ECX + 0x2c2],0x72
004e30a5  MOV EDX,dword ptr [EBP + -0x38]
004e30a8  MOV word ptr [EDX + 0x2c4],0x84
004e30b1  MOV EAX,dword ptr [EBP + -0x38]
004e30b4  MOV word ptr [EAX + 0x2c6],0x98
004e30bd  MOV ECX,dword ptr [EBP + -0x38]
004e30c0  MOV word ptr [ECX + 0x2c8],0xac
004e30c9  MOV EDX,dword ptr [EBP + -0x38]
004e30cc  MOV word ptr [EDX + 0x2ca],0xc1
004e30d5  MOV EAX,dword ptr [EBP + -0x38]
004e30d8  MOV word ptr [EAX + 0x2cc],0xd8
004e30e1  MOV ECX,dword ptr [EBP + -0x38]
004e30e4  MOV word ptr [ECX + 0x2ce],0xf0
004e30ed  MOV EDX,dword ptr [EBP + -0x38]
004e30f0  MOV word ptr [EDX + 0x2d0],0x109
004e30f9  MOV EAX,dword ptr [EBP + -0x38]
004e30fc  MOV word ptr [EAX + 0x2d2],0x15c
004e3105  MOV ECX,dword ptr [EBP + -0x38]
004e3108  MOV word ptr [ECX + 0x2d4],0x1b7
004e3111  MOV EDX,dword ptr [EBP + -0x38]
004e3114  MOV word ptr [EDX + 0x2d6],0x1cf
004e311d  MOV EAX,dword ptr [EBP + -0x38]
004e3120  MOV word ptr [EAX + 0x2d8],0x215
004e3129  MOV ECX,dword ptr [EBP + -0x38]
004e312c  MOV word ptr [ECX + 0x2da],0x267
004e3135  MOV EDX,dword ptr [EBP + -0x38]
004e3138  MOV word ptr [EDX + 0x2dc],0x279
004e3141  MOV EAX,dword ptr [EBP + -0x38]
004e3144  MOV word ptr [EAX + 0x2de],0x2aa
004e314d  MOV ECX,dword ptr [EBP + -0x38]
004e3150  MOV word ptr [ECX + 0x2e0],0x2ea
004e3159  MOV EDX,dword ptr [EBP + -0x38]
004e315c  MOV word ptr [EDX + 0x2e2],0x301
004e3165  MOV EAX,dword ptr [EBP + -0x38]
004e3168  MOV word ptr [EAX + 0x2e4],0x31c
004e3171  MOV ECX,dword ptr [EBP + -0x38]
004e3174  MOV word ptr [ECX + 0x2e6],0x340
004e317d  MOV EDX,dword ptr [EBP + -0x38]
004e3180  MOV word ptr [EDX + 0x2e8],0x355
004e3189  MOV EAX,dword ptr [EBP + -0x38]
004e318c  MOV word ptr [EAX + 0x2ea],0x360
004e3195  MOV ECX,dword ptr [EBP + -0x38]
004e3198  MOV word ptr [ECX + 0x2ec],0x366
004e31a1  MOV EDX,dword ptr [EBP + -0x38]
004e31a4  MOV word ptr [EDX + 0x2ee],0x368
004e31ad  MOV EAX,dword ptr [EBP + -0x38]
004e31b0  MOV word ptr [EAX + 0x2f0],0x379
004e31b9  MOV ECX,dword ptr [EBP + -0x38]
004e31bc  MOV word ptr [ECX + 0x2f2],0x392
004e31c5  MOV EDX,dword ptr [EBP + -0x38]
004e31c8  MOV word ptr [EDX + 0x2f4],0x3a0
004e31d1  MOV EAX,dword ptr [EBP + -0x38]
004e31d4  MOV word ptr [EAX + 0x2f6],0x3a6
004e31dd  MOV ECX,dword ptr [EBP + -0x38]
004e31e0  MOV word ptr [ECX + 0x2f8],0x3a8
004e31e9  MOV EDX,dword ptr [EBP + -0x38]
004e31ec  MOV word ptr [EDX + 0x2fa],0x3b4
004e31f5  MOV EAX,dword ptr [EBP + -0x38]
004e31f8  MOV word ptr [EAX + 0x2fc],0x3c3
004e3201  MOV ECX,dword ptr [EBP + -0x38]
004e3204  MOV word ptr [ECX + 0x2fe],0x3cb
004e320d  MOV EDX,dword ptr [EBP + -0x38]
004e3210  MOV word ptr [EDX + 0x300],0x3ce
004e3219  MOV EAX,dword ptr [EBP + -0x38]
004e321c  MOV word ptr [EAX + 0x302],0x3d4
004e3225  MOV ECX,dword ptr [EBP + -0x38]
004e3228  MOV word ptr [ECX + 0x304],0x3dc
004e3231  MOV EDX,dword ptr [EBP + -0x38]
004e3234  MOV word ptr [EDX + 0x306],0x3df
004e323d  MOV EAX,dword ptr [EBP + -0x38]
004e3240  MOV word ptr [EAX + 0x308],0x3e2
004e3249  MOV ECX,dword ptr [EBP + -0x38]
004e324c  MOV word ptr [ECX + 0x30a],0x3e5
004e3255  MOV EDX,dword ptr [EBP + -0x38]
004e3258  MOV word ptr [EDX + 0x30c],0x3e8
004e3261  MOV EAX,dword ptr [EBP + -0x24]
004e3264  SHL EAX,0x2
004e3267  MOV ECX,dword ptr [EBP + -0x20]
004e326a  LEA EDX,[EAX + ECX*0x4]
004e326d  MOV EAX,dword ptr [EBP + -0x18]
004e3270  LEA ECX,[EDX + EAX*0x4]
004e3273  MOV EDX,dword ptr [EBP + -0x14]
004e3276  LEA EAX,[ECX + EDX*0x4]
004e3279  MOV ECX,dword ptr [EBP + -0x34]
004e327c  LEA EDX,[EAX + ECX*0x4]
004e327f  MOV EAX,dword ptr [EBP + -0x28]
004e3282  LEA ECX,[EDX + EAX*0x4]
004e3285  MOV EDX,dword ptr [EBP + -0x1c]
004e3288  LEA EAX,[ECX + EDX*0x4]
004e328b  MOV dword ptr [EBP + 0xfffffdf8],EAX
004e3291  FILD dword ptr [EBP + 0xfffffdf8]
004e3297  FMUL double ptr [EBP + -0x30]
004e329a  CALL 0x00686cc0
004e329f  MOV ECX,dword ptr [EBP + -0x38]
004e32a2  MOV word ptr [ECX + 0x30e],AX
004e32a9  MOV EDX,dword ptr [EBP + -0x24]
004e32ac  SHL EDX,0x2
004e32af  MOV EAX,dword ptr [EBP + -0x20]
004e32b2  LEA ECX,[EDX + EAX*0x4]
004e32b5  MOV EDX,dword ptr [EBP + -0x18]
004e32b8  LEA EAX,[ECX + EDX*0x4]
004e32bb  MOV ECX,dword ptr [EBP + -0x14]
004e32be  LEA EDX,[EAX + ECX*0x4]
004e32c1  MOV EAX,dword ptr [EBP + -0x34]
004e32c4  LEA ECX,[EDX + EAX*0x4]
004e32c7  MOV EDX,dword ptr [EBP + -0x28]
004e32ca  LEA EAX,[ECX + EDX*0x4]
004e32cd  MOV ECX,dword ptr [EBP + -0x1c]
004e32d0  LEA EDX,[EAX + ECX*0x4]
004e32d3  MOV dword ptr [EBP + 0xfffffdf4],EDX
004e32d9  FILD dword ptr [EBP + 0xfffffdf4]
004e32df  FMUL double ptr [EBP + -0x30]
004e32e2  CALL 0x00686cc0
004e32e7  MOV ECX,dword ptr [EBP + -0x38]
004e32ea  MOV word ptr [ECX + 0x310],AX
004e32f1  MOV EDX,dword ptr [EBP + -0x18]
004e32f4  SHL EDX,0x2
004e32f7  MOV EAX,dword ptr [EBP + -0x24]
004e32fa  LEA ECX,[EDX + EAX*0x8]
004e32fd  MOV EDX,dword ptr [EBP + -0x14]
004e3300  LEA EAX,[ECX + EDX*0x4]
004e3303  MOV ECX,dword ptr [EBP + -0x34]
004e3306  LEA EDX,[EAX + ECX*0x4]
004e3309  MOV EAX,dword ptr [EBP + -0x28]
004e330c  LEA ECX,[EDX + EAX*0x4]
004e330f  MOV EDX,dword ptr [EBP + -0x1c]
004e3312  LEA EAX,[ECX + EDX*0x4]
004e3315  MOV dword ptr [EBP + 0xfffffdf0],EAX
004e331b  FILD dword ptr [EBP + 0xfffffdf0]
004e3321  FMUL double ptr [EBP + -0x30]
004e3324  CALL 0x00686cc0
004e3329  MOV ECX,dword ptr [EBP + -0x38]
004e332c  MOV word ptr [ECX + 0x312],AX
004e3333  MOV EDX,dword ptr [EBP + -0x18]
004e3336  IMUL EDX,EDX,0xc
004e3339  MOV EAX,dword ptr [EBP + -0x14]
004e333c  LEA ECX,[EDX + EAX*0x4]
004e333f  MOV EDX,dword ptr [EBP + -0x34]
004e3342  LEA EAX,[ECX + EDX*0x4]
004e3345  MOV ECX,dword ptr [EBP + -0x28]
004e3348  LEA EDX,[EAX + ECX*0x4]
004e334b  MOV EAX,dword ptr [EBP + -0x1c]
004e334e  LEA ECX,[EDX + EAX*0x4]
004e3351  MOV dword ptr [EBP + 0xfffffdec],ECX
004e3357  FILD dword ptr [EBP + 0xfffffdec]
004e335d  FMUL double ptr [EBP + -0x30]
004e3360  CALL 0x00686cc0
004e3365  MOV EDX,dword ptr [EBP + -0x38]
004e3368  MOV word ptr [EDX + 0x314],AX
004e336f  MOV EAX,dword ptr [EBP + -0x14]
004e3372  SHL EAX,0x4
004e3375  MOV ECX,dword ptr [EBP + -0x34]
004e3378  LEA EDX,[EAX + ECX*0x4]
004e337b  MOV EAX,dword ptr [EBP + -0x28]
004e337e  LEA ECX,[EDX + EAX*0x4]
004e3381  MOV EDX,dword ptr [EBP + -0x1c]
004e3384  LEA EAX,[ECX + EDX*0x4]
004e3387  MOV dword ptr [EBP + 0xfffffde8],EAX
004e338d  FILD dword ptr [EBP + 0xfffffde8]
004e3393  FMUL double ptr [EBP + -0x30]
004e3396  CALL 0x00686cc0
004e339b  MOV ECX,dword ptr [EBP + -0x38]
004e339e  MOV word ptr [ECX + 0x316],AX
004e33a5  MOV EDX,dword ptr [EBP + -0x34]
004e33a8  IMUL EDX,EDX,0x14
004e33ab  MOV EAX,dword ptr [EBP + -0x28]
004e33ae  LEA ECX,[EDX + EAX*0x4]
004e33b1  MOV EDX,dword ptr [EBP + -0x1c]
004e33b4  LEA EAX,[ECX + EDX*0x4]
004e33b7  MOV dword ptr [EBP + 0xfffffde4],EAX
004e33bd  FILD dword ptr [EBP + 0xfffffde4]
004e33c3  FMUL double ptr [EBP + -0x30]
004e33c6  CALL 0x00686cc0
004e33cb  MOV ECX,dword ptr [EBP + -0x38]
004e33ce  MOV word ptr [ECX + 0x318],AX
004e33d5  MOV EDX,dword ptr [EBP + -0x28]
004e33d8  IMUL EDX,EDX,0x18
004e33db  MOV EAX,dword ptr [EBP + -0x1c]
004e33de  LEA ECX,[EDX + EAX*0x4]
004e33e1  MOV dword ptr [EBP + 0xfffffde0],ECX
004e33e7  FILD dword ptr [EBP + 0xfffffde0]
004e33ed  FMUL double ptr [EBP + -0x30]
004e33f0  CALL 0x00686cc0
004e33f5  MOV EDX,dword ptr [EBP + -0x38]
004e33f8  MOV word ptr [EDX + 0x31a],AX
004e33ff  MOV EAX,dword ptr [EBP + -0x1c]
004e3402  IMUL EAX,EAX,0x1c
004e3405  MOV dword ptr [EBP + 0xfffffddc],EAX
004e340b  FILD dword ptr [EBP + 0xfffffddc]
004e3411  FMUL double ptr [EBP + -0x30]
004e3414  CALL 0x00686cc0
004e3419  MOV ECX,dword ptr [EBP + -0x38]
004e341c  MOV word ptr [ECX + 0x31c],AX
004e3423  MOV EDX,dword ptr [EBP + -0x20]
004e3426  SHL EDX,0x4
004e3429  MOV EAX,dword ptr [EBP + -0x24]
004e342c  SHL EAX,0x5
004e342f  ADD EDX,EAX
004e3431  MOV ECX,dword ptr [EBP + -0x18]
004e3434  IMUL ECX,ECX,0x30
004e3437  ADD EDX,ECX
004e3439  MOV EAX,dword ptr [EBP + -0x14]
004e343c  SHL EAX,0x6
004e343f  ADD EDX,EAX
004e3441  MOV ECX,dword ptr [EBP + -0x34]
004e3444  IMUL ECX,ECX,0x50
004e3447  ADD EDX,ECX
004e3449  MOV EAX,dword ptr [EBP + -0x28]
004e344c  IMUL EAX,EAX,0x60
004e344f  ADD EDX,EAX
004e3451  MOV ECX,dword ptr [EBP + -0x1c]
004e3454  IMUL ECX,ECX,0x70
004e3457  ADD EDX,ECX
004e3459  MOV dword ptr [EBP + 0xfffffdd8],EDX
004e345f  FILD dword ptr [EBP + 0xfffffdd8]
004e3465  FMUL double ptr [EBP + -0x8]
004e3468  CALL 0x00686cc0
004e346d  MOV EDX,dword ptr [EBP + -0x38]
004e3470  MOV word ptr [EDX + 0x31e],AX
004e3477  MOV EAX,dword ptr [EBP + -0x20]
004e347a  SHL EAX,0x4
004e347d  MOV ECX,dword ptr [EBP + -0x24]
004e3480  SHL ECX,0x5
004e3483  ADD EAX,ECX
004e3485  MOV EDX,dword ptr [EBP + -0x18]
004e3488  IMUL EDX,EDX,0x30
004e348b  ADD EAX,EDX
004e348d  MOV ECX,dword ptr [EBP + -0x14]
004e3490  SHL ECX,0x6
004e3493  ADD EAX,ECX
004e3495  MOV EDX,dword ptr [EBP + -0x34]
004e3498  IMUL EDX,EDX,0x50
004e349b  ADD EAX,EDX
004e349d  MOV ECX,dword ptr [EBP + -0x28]
004e34a0  IMUL ECX,ECX,0x60
004e34a3  ADD EAX,ECX
004e34a5  MOV EDX,dword ptr [EBP + -0x1c]
004e34a8  IMUL EDX,EDX,0x70
004e34ab  ADD EAX,EDX
004e34ad  MOV dword ptr [EBP + 0xfffffdd4],EAX
004e34b3  FILD dword ptr [EBP + 0xfffffdd4]
004e34b9  FMUL double ptr [EBP + -0x8]
004e34bc  CALL 0x00686cc0
004e34c1  MOV ECX,dword ptr [EBP + -0x38]
004e34c4  MOV word ptr [ECX + 0x320],AX
004e34cb  MOV EDX,dword ptr [EBP + -0x20]
004e34ce  SHL EDX,0x4
004e34d1  MOV EAX,dword ptr [EBP + -0x24]
004e34d4  SHL EAX,0x5
004e34d7  ADD EDX,EAX
004e34d9  MOV ECX,dword ptr [EBP + -0x18]
004e34dc  IMUL ECX,ECX,0x30
004e34df  ADD EDX,ECX
004e34e1  MOV EAX,dword ptr [EBP + -0x14]
004e34e4  SHL EAX,0x6
004e34e7  ADD EDX,EAX
004e34e9  MOV ECX,dword ptr [EBP + -0x34]
004e34ec  IMUL ECX,ECX,0x50
004e34ef  ADD EDX,ECX
004e34f1  MOV EAX,dword ptr [EBP + -0x28]
004e34f4  IMUL EAX,EAX,0x60
004e34f7  ADD EDX,EAX
004e34f9  MOV ECX,dword ptr [EBP + -0x1c]
004e34fc  IMUL ECX,ECX,0x70
004e34ff  ADD EDX,ECX
004e3501  MOV dword ptr [EBP + 0xfffffdd0],EDX
004e3507  FILD dword ptr [EBP + 0xfffffdd0]
004e350d  FMUL double ptr [EBP + -0x8]
004e3510  CALL 0x00686cc0
004e3515  MOV EDX,dword ptr [EBP + -0x38]
004e3518  MOV word ptr [EDX + 0x322],AX
004e351f  MOV EAX,dword ptr [EBP + -0x24]
004e3522  IMUL EAX,EAX,0x60
004e3525  MOV dword ptr [EBP + 0xfffffdcc],EAX
004e352b  FILD dword ptr [EBP + 0xfffffdcc]
004e3531  FDIV double ptr [0x006b3740]
004e3537  MOV ECX,dword ptr [EBP + -0x18]
004e353a  IMUL ECX,ECX,0x30
004e353d  MOV dword ptr [EBP + 0xfffffdc8],ECX
004e3543  FILD dword ptr [EBP + 0xfffffdc8]
004e3549  FADDP
004e354b  MOV EDX,dword ptr [EBP + -0x14]
004e354e  SHL EDX,0x6
004e3551  MOV dword ptr [EBP + 0xfffffdc4],EDX
004e3557  FILD dword ptr [EBP + 0xfffffdc4]
004e355d  FADDP
004e355f  MOV EAX,dword ptr [EBP + -0x34]
004e3562  IMUL EAX,EAX,0x50
004e3565  MOV dword ptr [EBP + 0xfffffdc0],EAX
004e356b  FILD dword ptr [EBP + 0xfffffdc0]
004e3571  FADDP
004e3573  MOV ECX,dword ptr [EBP + -0x28]
004e3576  IMUL ECX,ECX,0x60
004e3579  MOV dword ptr [EBP + 0xfffffdbc],ECX
004e357f  FILD dword ptr [EBP + 0xfffffdbc]
004e3585  FADDP
004e3587  MOV EDX,dword ptr [EBP + -0x1c]
004e358a  IMUL EDX,EDX,0x70
004e358d  MOV dword ptr [EBP + 0xfffffdb8],EDX
004e3593  FILD dword ptr [EBP + 0xfffffdb8]
004e3599  FADDP
004e359b  FMUL double ptr [EBP + -0x8]
004e359e  CALL 0x00686cc0
004e35a3  MOV ECX,dword ptr [EBP + -0x38]
004e35a6  MOV word ptr [ECX + 0x324],AX
004e35ad  MOV EDX,dword ptr [EBP + -0x18]
004e35b0  IMUL EDX,EDX,0xc0
004e35b6  MOV dword ptr [EBP + 0xfffffdb4],EDX
004e35bc  FILD dword ptr [EBP + 0xfffffdb4]
004e35c2  FDIV double ptr [0x006b3740]
004e35c8  MOV EAX,dword ptr [EBP + -0x14]
004e35cb  SHL EAX,0x6
004e35ce  MOV dword ptr [EBP + 0xfffffdb0],EAX
004e35d4  FILD dword ptr [EBP + 0xfffffdb0]
004e35da  FADDP
004e35dc  MOV ECX,dword ptr [EBP + -0x34]
004e35df  IMUL ECX,ECX,0x50
004e35e2  MOV dword ptr [EBP + 0xfffffdac],ECX
004e35e8  FILD dword ptr [EBP + 0xfffffdac]
004e35ee  FADDP
004e35f0  MOV EDX,dword ptr [EBP + -0x28]
004e35f3  IMUL EDX,EDX,0x60
004e35f6  MOV dword ptr [EBP + 0xfffffda8],EDX
004e35fc  FILD dword ptr [EBP + 0xfffffda8]
004e3602  FADDP
004e3604  MOV EAX,dword ptr [EBP + -0x1c]
004e3607  IMUL EAX,EAX,0x70
004e360a  MOV dword ptr [EBP + 0xfffffda4],EAX
004e3610  FILD dword ptr [EBP + 0xfffffda4]
004e3616  FADDP
004e3618  FMUL double ptr [EBP + -0x8]
004e361b  CALL 0x00686cc0
004e3620  MOV ECX,dword ptr [EBP + -0x38]
004e3623  MOV word ptr [ECX + 0x326],AX
004e362a  MOV EDX,dword ptr [EBP + -0x14]
004e362d  IMUL EDX,EDX,0x140
004e3633  MOV dword ptr [EBP + 0xfffffda0],EDX
004e3639  FILD dword ptr [EBP + 0xfffffda0]
004e363f  FDIV double ptr [0x006b3740]
004e3645  MOV EAX,dword ptr [EBP + -0x34]
004e3648  IMUL EAX,EAX,0x50
004e364b  MOV dword ptr [EBP + 0xfffffd9c],EAX
004e3651  FILD dword ptr [EBP + 0xfffffd9c]
004e3657  FADDP
004e3659  MOV ECX,dword ptr [EBP + -0x28]
004e365c  IMUL ECX,ECX,0x60
004e365f  MOV dword ptr [EBP + 0xfffffd98],ECX
004e3665  FILD dword ptr [EBP + 0xfffffd98]
004e366b  FADDP
004e366d  MOV EDX,dword ptr [EBP + -0x1c]
004e3670  IMUL EDX,EDX,0x70
004e3673  MOV dword ptr [EBP + 0xfffffd94],EDX
004e3679  FILD dword ptr [EBP + 0xfffffd94]
004e367f  FADDP
004e3681  FMUL double ptr [EBP + -0x8]
004e3684  CALL 0x00686cc0
004e3689  MOV ECX,dword ptr [EBP + -0x38]
004e368c  MOV word ptr [ECX + 0x328],AX
004e3693  MOV EDX,dword ptr [EBP + -0x34]
004e3696  IMUL EDX,EDX,0x1e0
004e369c  MOV dword ptr [EBP + 0xfffffd90],EDX
004e36a2  FILD dword ptr [EBP + 0xfffffd90]
004e36a8  FDIV double ptr [0x006b3740]
004e36ae  MOV EAX,dword ptr [EBP + -0x28]
004e36b1  IMUL EAX,EAX,0x60
004e36b4  MOV dword ptr [EBP + 0xfffffd8c],EAX
004e36ba  FILD dword ptr [EBP + 0xfffffd8c]
004e36c0  FADDP
004e36c2  MOV ECX,dword ptr [EBP + -0x1c]
004e36c5  IMUL ECX,ECX,0x70
004e36c8  MOV dword ptr [EBP + 0xfffffd88],ECX
004e36ce  FILD dword ptr [EBP + 0xfffffd88]
004e36d4  FADDP
004e36d6  FMUL double ptr [EBP + -0x8]
004e36d9  CALL 0x00686cc0
004e36de  MOV EDX,dword ptr [EBP + -0x38]
004e36e1  MOV word ptr [EDX + 0x32a],AX
004e36e8  MOV EAX,dword ptr [EBP + -0x28]
004e36eb  IMUL EAX,EAX,0x2a0
004e36f1  MOV dword ptr [EBP + 0xfffffd84],EAX
004e36f7  FILD dword ptr [EBP + 0xfffffd84]
004e36fd  FDIV double ptr [0x006b3740]
004e3703  MOV ECX,dword ptr [EBP + -0x1c]
004e3706  IMUL ECX,ECX,0x70
004e3709  MOV dword ptr [EBP + 0xfffffd80],ECX
004e370f  FILD dword ptr [EBP + 0xfffffd80]
004e3715  FADDP
004e3717  FMUL double ptr [EBP + -0x8]
004e371a  CALL 0x00686cc0
004e371f  MOV EDX,dword ptr [EBP + -0x38]
004e3722  MOV word ptr [EDX + 0x32c],AX
004e3729  MOV EAX,dword ptr [EBP + -0x1c]
004e372c  IMUL EAX,EAX,0x380
004e3732  MOV dword ptr [EBP + 0xfffffd7c],EAX
004e3738  FILD dword ptr [EBP + 0xfffffd7c]
004e373e  FDIV double ptr [0x006b3740]
004e3744  FMUL double ptr [EBP + -0x8]
004e3747  CALL 0x00686cc0
004e374c  MOV ECX,dword ptr [EBP + -0x38]
004e374f  MOV word ptr [ECX + 0x32e],AX
004e3756  MOV EDX,dword ptr [EBP + -0x20]
004e3759  SHL EDX,0x7
004e375c  MOV EAX,dword ptr [EBP + -0x24]
004e375f  IMUL EAX,EAX,0x180
004e3765  ADD EDX,EAX
004e3767  MOV ECX,dword ptr [EBP + -0x18]
004e376a  IMUL ECX,ECX,0x300
004e3770  ADD EDX,ECX
004e3772  MOV EAX,dword ptr [EBP + -0x14]
004e3775  IMUL EAX,EAX,0x500
004e377b  ADD EDX,EAX
004e377d  MOV ECX,dword ptr [EBP + -0x34]
004e3780  IMUL ECX,ECX,0x780
004e3786  ADD EDX,ECX
004e3788  MOV EAX,dword ptr [EBP + -0x28]
004e378b  IMUL EAX,EAX,0xa80
004e3791  ADD EDX,EAX
004e3793  MOV ECX,dword ptr [EBP + -0x1c]
004e3796  IMUL ECX,ECX,0xe00
004e379c  ADD EDX,ECX
004e379e  MOV dword ptr [EBP + 0xfffffd78],EDX
004e37a4  FILD dword ptr [EBP + 0xfffffd78]
004e37aa  FMUL double ptr [EBP + -0x10]
004e37ad  CALL 0x00686cc0
004e37b2  MOV EDX,dword ptr [EBP + -0x38]
004e37b5  MOV word ptr [EDX + 0x330],AX
004e37bc  MOV EAX,dword ptr [EBP + -0x20]
004e37bf  SHL EAX,0x7
004e37c2  MOV ECX,dword ptr [EBP + -0x24]
004e37c5  IMUL ECX,ECX,0x180
004e37cb  ADD EAX,ECX
004e37cd  MOV EDX,dword ptr [EBP + -0x18]
004e37d0  IMUL EDX,EDX,0x300
004e37d6  ADD EAX,EDX
004e37d8  MOV ECX,dword ptr [EBP + -0x14]
004e37db  IMUL ECX,ECX,0x500
004e37e1  ADD EAX,ECX
004e37e3  MOV EDX,dword ptr [EBP + -0x34]
004e37e6  IMUL EDX,EDX,0x780
004e37ec  ADD EAX,EDX
004e37ee  MOV ECX,dword ptr [EBP + -0x28]
004e37f1  IMUL ECX,ECX,0xa80
004e37f7  ADD EAX,ECX
004e37f9  MOV EDX,dword ptr [EBP + -0x1c]
004e37fc  IMUL EDX,EDX,0xe00
004e3802  ADD EAX,EDX
004e3804  MOV dword ptr [EBP + 0xfffffd74],EAX
004e380a  FILD dword ptr [EBP + 0xfffffd74]
004e3810  FMUL double ptr [EBP + -0x10]
004e3813  CALL 0x00686cc0
004e3818  MOV ECX,dword ptr [EBP + -0x38]
004e381b  MOV word ptr [ECX + 0x332],AX
004e3822  MOV EDX,dword ptr [EBP + -0x20]
004e3825  SHL EDX,0x7
004e3828  MOV EAX,dword ptr [EBP + -0x24]
004e382b  IMUL EAX,EAX,0x180
004e3831  ADD EDX,EAX
004e3833  MOV ECX,dword ptr [EBP + -0x18]
004e3836  IMUL ECX,ECX,0x300
004e383c  ADD EDX,ECX
004e383e  MOV EAX,dword ptr [EBP + -0x14]
004e3841  IMUL EAX,EAX,0x500
004e3847  ADD EDX,EAX
004e3849  MOV ECX,dword ptr [EBP + -0x34]
004e384c  IMUL ECX,ECX,0x780
004e3852  ADD EDX,ECX
004e3854  MOV EAX,dword ptr [EBP + -0x28]
004e3857  IMUL EAX,EAX,0xa80
004e385d  ADD EDX,EAX
004e385f  MOV ECX,dword ptr [EBP + -0x1c]
004e3862  IMUL ECX,ECX,0xe00
004e3868  ADD EDX,ECX
004e386a  MOV dword ptr [EBP + 0xfffffd70],EDX
004e3870  FILD dword ptr [EBP + 0xfffffd70]
004e3876  FMUL double ptr [EBP + -0x10]
004e3879  CALL 0x00686cc0
004e387e  MOV EDX,dword ptr [EBP + -0x38]
004e3881  MOV word ptr [EDX + 0x334],AX
004e3888  MOV EAX,dword ptr [EBP + -0x20]
004e388b  SHL EAX,0x7
004e388e  MOV ECX,dword ptr [EBP + -0x24]
004e3891  IMUL ECX,ECX,0x180
004e3897  ADD EAX,ECX
004e3899  MOV EDX,dword ptr [EBP + -0x18]
004e389c  IMUL EDX,EDX,0x300
004e38a2  ADD EAX,EDX
004e38a4  MOV ECX,dword ptr [EBP + -0x14]
004e38a7  IMUL ECX,ECX,0x500
004e38ad  ADD EAX,ECX
004e38af  MOV EDX,dword ptr [EBP + -0x34]
004e38b2  IMUL EDX,EDX,0x780
004e38b8  ADD EAX,EDX
004e38ba  MOV ECX,dword ptr [EBP + -0x28]
004e38bd  IMUL ECX,ECX,0xa80
004e38c3  ADD EAX,ECX
004e38c5  MOV EDX,dword ptr [EBP + -0x1c]
004e38c8  IMUL EDX,EDX,0xe00
004e38ce  ADD EAX,EDX
004e38d0  MOV dword ptr [EBP + 0xfffffd6c],EAX
004e38d6  FILD dword ptr [EBP + 0xfffffd6c]
004e38dc  FMUL double ptr [EBP + -0x10]
004e38df  CALL 0x00686cc0
004e38e4  MOV ECX,dword ptr [EBP + -0x38]
004e38e7  MOV word ptr [ECX + 0x336],AX
004e38ee  MOV EDX,dword ptr [EBP + -0x24]
004e38f1  IMUL EDX,EDX,0x600
004e38f7  MOV dword ptr [EBP + 0xfffffd68],EDX
004e38fd  FILD dword ptr [EBP + 0xfffffd68]
004e3903  FDIV double ptr [0x006b9490]
004e3909  MOV EAX,dword ptr [EBP + -0x18]
004e390c  IMUL EAX,EAX,0x300
004e3912  MOV dword ptr [EBP + 0xfffffd64],EAX
004e3918  FILD dword ptr [EBP + 0xfffffd64]
004e391e  FADDP
004e3920  MOV ECX,dword ptr [EBP + -0x14]
004e3923  IMUL ECX,ECX,0x500
004e3929  MOV dword ptr [EBP + 0xfffffd60],ECX
004e392f  FILD dword ptr [EBP + 0xfffffd60]
004e3935  FADDP
004e3937  MOV EDX,dword ptr [EBP + -0x34]
004e393a  IMUL EDX,EDX,0x780
004e3940  MOV dword ptr [EBP + 0xfffffd5c],EDX
004e3946  FILD dword ptr [EBP + 0xfffffd5c]
004e394c  FADDP
004e394e  MOV EAX,dword ptr [EBP + -0x28]
004e3951  IMUL EAX,EAX,0xa80
004e3957  MOV dword ptr [EBP + 0xfffffd58],EAX
004e395d  FILD dword ptr [EBP + 0xfffffd58]
004e3963  FADDP
004e3965  MOV ECX,dword ptr [EBP + -0x1c]
004e3968  IMUL ECX,ECX,0xe00
004e396e  MOV dword ptr [EBP + 0xfffffd54],ECX
004e3974  FILD dword ptr [EBP + 0xfffffd54]
004e397a  FADDP
004e397c  FMUL double ptr [EBP + -0x10]
004e397f  CALL 0x00686cc0
004e3984  MOV EDX,dword ptr [EBP + -0x38]
004e3987  MOV word ptr [EDX + 0x338],AX
004e398e  MOV EAX,dword ptr [EBP + -0x18]
004e3991  IMUL EAX,EAX,0xf00
004e3997  MOV dword ptr [EBP + 0xfffffd50],EAX
004e399d  FILD dword ptr [EBP + 0xfffffd50]
004e39a3  FDIV double ptr [0x006b9490]
004e39a9  MOV ECX,dword ptr [EBP + -0x14]
004e39ac  IMUL ECX,ECX,0x500
004e39b2  MOV dword ptr [EBP + 0xfffffd4c],ECX
004e39b8  FILD dword ptr [EBP + 0xfffffd4c]
004e39be  FADDP
004e39c0  MOV EDX,dword ptr [EBP + -0x34]
004e39c3  IMUL EDX,EDX,0x780
004e39c9  MOV dword ptr [EBP + 0xfffffd48],EDX
004e39cf  FILD dword ptr [EBP + 0xfffffd48]
004e39d5  FADDP
004e39d7  MOV EAX,dword ptr [EBP + -0x28]
004e39da  IMUL EAX,EAX,0xa80
004e39e0  MOV dword ptr [EBP + 0xfffffd44],EAX
004e39e6  FILD dword ptr [EBP + 0xfffffd44]
004e39ec  FADDP
004e39ee  MOV ECX,dword ptr [EBP + -0x1c]
004e39f1  IMUL ECX,ECX,0xe00
004e39f7  MOV dword ptr [EBP + 0xfffffd40],ECX
004e39fd  FILD dword ptr [EBP + 0xfffffd40]
004e3a03  FADDP
004e3a05  FMUL double ptr [EBP + -0x10]
004e3a08  CALL 0x00686cc0
004e3a0d  MOV EDX,dword ptr [EBP + -0x38]
004e3a10  MOV word ptr [EDX + 0x33a],AX
004e3a17  MOV EAX,dword ptr [EBP + -0x14]
004e3a1a  IMUL EAX,EAX,0x1e00
004e3a20  MOV dword ptr [EBP + 0xfffffd3c],EAX
004e3a26  FILD dword ptr [EBP + 0xfffffd3c]
004e3a2c  FDIV double ptr [0x006b9490]
004e3a32  MOV ECX,dword ptr [EBP + -0x34]
004e3a35  IMUL ECX,ECX,0x780
004e3a3b  MOV dword ptr [EBP + 0xfffffd38],ECX
004e3a41  FILD dword ptr [EBP + 0xfffffd38]
004e3a47  FADDP
004e3a49  MOV EDX,dword ptr [EBP + -0x28]
004e3a4c  IMUL EDX,EDX,0xa80
004e3a52  MOV dword ptr [EBP + 0xfffffd34],EDX
004e3a58  FILD dword ptr [EBP + 0xfffffd34]
004e3a5e  FADDP
004e3a60  MOV EAX,dword ptr [EBP + -0x1c]
004e3a63  IMUL EAX,EAX,0xe00
004e3a69  MOV dword ptr [EBP + 0xfffffd30],EAX
004e3a6f  FILD dword ptr [EBP + 0xfffffd30]
004e3a75  FADDP
004e3a77  FMUL double ptr [EBP + -0x10]
004e3a7a  CALL 0x00686cc0
004e3a7f  MOV ECX,dword ptr [EBP + -0x38]
004e3a82  MOV word ptr [ECX + 0x33c],AX
004e3a89  MOV EDX,dword ptr [EBP + -0x34]
004e3a8c  IMUL EDX,EDX,0x3480
004e3a92  MOV dword ptr [EBP + 0xfffffd2c],EDX
004e3a98  FILD dword ptr [EBP + 0xfffffd2c]
004e3a9e  FDIV double ptr [0x006b9490]
004e3aa4  MOV EAX,dword ptr [EBP + -0x28]
004e3aa7  IMUL EAX,EAX,0xa80
004e3aad  MOV dword ptr [EBP + 0xfffffd28],EAX
004e3ab3  FILD dword ptr [EBP + 0xfffffd28]
004e3ab9  FADDP
004e3abb  MOV ECX,dword ptr [EBP + -0x1c]
004e3abe  IMUL ECX,ECX,0xe00
004e3ac4  MOV dword ptr [EBP + 0xfffffd24],ECX
004e3aca  FILD dword ptr [EBP + 0xfffffd24]
004e3ad0  FADDP
004e3ad2  FMUL double ptr [EBP + -0x10]
004e3ad5  CALL 0x00686cc0
004e3ada  MOV EDX,dword ptr [EBP + -0x38]
004e3add  MOV word ptr [EDX + 0x33e],AX
004e3ae4  MOV EAX,dword ptr [EBP + -0x28]
004e3ae7  IMUL EAX,EAX,0x5400
004e3aed  MOV dword ptr [EBP + 0xfffffd20],EAX
004e3af3  FILD dword ptr [EBP + 0xfffffd20]
004e3af9  FDIV double ptr [0x006b9490]
004e3aff  MOV ECX,dword ptr [EBP + -0x1c]
004e3b02  IMUL ECX,ECX,0xe00
004e3b08  MOV dword ptr [EBP + 0xfffffd1c],ECX
004e3b0e  FILD dword ptr [EBP + 0xfffffd1c]
004e3b14  FADDP
004e3b16  FMUL double ptr [EBP + -0x10]
004e3b19  CALL 0x00686cc0
004e3b1e  MOV EDX,dword ptr [EBP + -0x38]
004e3b21  MOV word ptr [EDX + 0x340],AX
004e3b28  MOV EAX,dword ptr [EBP + -0x1c]
004e3b2b  IMUL EAX,EAX,0x7e00
004e3b31  MOV dword ptr [EBP + 0xfffffd18],EAX
004e3b37  FILD dword ptr [EBP + 0xfffffd18]
004e3b3d  FDIV double ptr [0x006b9490]
004e3b43  FMUL double ptr [EBP + -0x10]
004e3b46  CALL 0x00686cc0
004e3b4b  MOV ECX,dword ptr [EBP + -0x38]
004e3b4e  MOV word ptr [ECX + 0x342],AX
004e3b55  MOV EDX,dword ptr [EBP + -0x38]
004e3b58  MOV word ptr [EDX + 0x288],0x8
004e3b61  MOV EAX,dword ptr [EBP + -0x38]
004e3b64  MOV word ptr [EAX + 0x28a],0x19
004e3b6d  MOV ECX,dword ptr [EBP + -0x38]
004e3b70  MOV word ptr [ECX + 0x28c],0x28
004e3b79  MOV EDX,dword ptr [EBP + -0x38]
004e3b7c  MOV word ptr [EDX + 0x28e],0xf
004e3b85  MOV EAX,dword ptr [EBP + -0x38]
004e3b88  MOV word ptr [EAX + 0x290],0x2d
004e3b91  MOV ECX,dword ptr [EBP + -0x38]
004e3b94  MOV word ptr [ECX + 0x292],0x12
004e3b9d  MOV EDX,dword ptr [EBP + -0x38]
004e3ba0  MOV word ptr [EDX + 0x294],0x3c
004e3ba9  MOV EAX,dword ptr [EBP + -0x38]
004e3bac  MOV word ptr [EAX + 0x296],0x1c
004e3bb5  MOV ECX,dword ptr [EBP + -0x38]
004e3bb8  MOV word ptr [ECX + 0x298],0x23
004e3bc1  MOV EDX,dword ptr [EBP + -0x38]
004e3bc4  MOV word ptr [EDX + 0x29a],0x10
004e3bcd  MOV EAX,dword ptr [EBP + -0x38]
004e3bd0  MOV word ptr [EAX + 0x29c],0x7
004e3bd9  MOV ECX,dword ptr [EBP + -0x38]
004e3bdc  MOV word ptr [ECX + 0x29e],0xf
004e3be5  MOV EDX,dword ptr [EBP + -0x38]
004e3be8  MOV word ptr [EDX + 0x2a0],0x1e
004e3bf1  MOV EAX,dword ptr [EBP + -0x38]
004e3bf4  MOV word ptr [EAX + 0x2a2],0x12
004e3bfd  MOV ECX,dword ptr [EBP + -0x38]
004e3c00  MOV word ptr [ECX + 0x2a4],0x4
004e3c09  MOV EDX,dword ptr [EBP + -0x38]
004e3c0c  MOV word ptr [EDX + 0x2a6],0x28
004e3c15  MOV EAX,dword ptr [EBP + -0x38]
004e3c18  MOV word ptr [EAX + 0x2a8],0x2
004e3c21  MOV ECX,dword ptr [EBP + -0x38]
004e3c24  MOV word ptr [ECX + 0x2aa],0x5a
004e3c2d  MOV EDX,dword ptr [EBP + -0x38]
004e3c30  MOV word ptr [EDX + 0x2ac],0x3c
004e3c39  MOV EAX,dword ptr [EBP + -0x38]
004e3c3c  MOV word ptr [EAX + 0x2ae],0x1e
004e3c45  MOV ECX,dword ptr [EBP + -0x38]
004e3c48  MOV word ptr [ECX + 0x2b0],0x32
004e3c51  MOV EDX,dword ptr [EBP + -0x38]
004e3c54  MOV word ptr [EDX + 0x2b2],0x32
004e3c5d  MOV EAX,dword ptr [EBP + -0x38]
004e3c60  MOV word ptr [EAX + 0x2b4],0xb
004e3c69  MOV ECX,dword ptr [EBP + -0x38]
004e3c6c  MOV word ptr [ECX + 0x2b6],0x14
004e3c75  MOV EDX,dword ptr [EBP + -0x38]
004e3c78  MOV word ptr [EDX + 0x2b8],0x2b
004e3c81  JMP 0x004e9360
004e3c86  MOV dword ptr [EBP + -0x20],0x3e8
004e3c8d  MOV dword ptr [EBP + -0x24],0x3ca
004e3c94  MOV dword ptr [EBP + -0x18],0x320
004e3c9b  MOV dword ptr [EBP + -0x14],0x1c2
004e3ca2  MOV dword ptr [EBP + -0x34],0x96
004e3ca9  MOV dword ptr [EBP + -0x28],0x32
004e3cb0  MOV dword ptr [EBP + -0x1c],0xa
004e3cb7  FLD double ptr [0x006bfbf0]
004e3cbd  FSTP double ptr [EBP + -0x30]
004e3cc0  FLD double ptr [0x006bfbe8]
004e3cc6  FSTP double ptr [EBP + -0x8]
004e3cc9  FLD double ptr [0x006bfbe0]
004e3ccf  FSTP double ptr [EBP + -0x10]
004e3cd2  MOV EAX,dword ptr [EBP + -0x38]
004e3cd5  MOV word ptr [EAX + 0x2ba],0xf
004e3cde  MOV ECX,dword ptr [EBP + -0x38]
004e3ce1  MOV word ptr [ECX + 0x2bc],0x33
004e3cea  MOV EDX,dword ptr [EBP + -0x38]
004e3ced  MOV word ptr [EDX + 0x2be],0x50
004e3cf6  MOV EAX,dword ptr [EBP + -0x38]
004e3cf9  MOV word ptr [EAX + 0x2c0],0x61
004e3d02  MOV ECX,dword ptr [EBP + -0x38]
004e3d05  MOV word ptr [ECX + 0x2c2],0x72
004e3d0e  MOV EDX,dword ptr [EBP + -0x38]
004e3d11  MOV word ptr [EDX + 0x2c4],0x84
004e3d1a  MOV EAX,dword ptr [EBP + -0x38]
004e3d1d  MOV word ptr [EAX + 0x2c6],0x98
004e3d26  MOV ECX,dword ptr [EBP + -0x38]
004e3d29  MOV word ptr [ECX + 0x2c8],0xac
004e3d32  MOV EDX,dword ptr [EBP + -0x38]
004e3d35  MOV word ptr [EDX + 0x2ca],0xc1
004e3d3e  MOV EAX,dword ptr [EBP + -0x38]
004e3d41  MOV word ptr [EAX + 0x2cc],0xd8
004e3d4a  MOV ECX,dword ptr [EBP + -0x38]
004e3d4d  MOV word ptr [ECX + 0x2ce],0xf0
004e3d56  MOV EDX,dword ptr [EBP + -0x38]
004e3d59  MOV word ptr [EDX + 0x2d0],0x109
004e3d62  MOV EAX,dword ptr [EBP + -0x38]
004e3d65  MOV word ptr [EAX + 0x2d2],0xf8
004e3d6e  MOV ECX,dword ptr [EBP + -0x38]
004e3d71  MOV word ptr [ECX + 0x2d4],0x153
004e3d7a  MOV EDX,dword ptr [EBP + -0x38]
004e3d7d  MOV word ptr [EDX + 0x2d6],0x16b
004e3d86  MOV EAX,dword ptr [EBP + -0x38]
004e3d89  MOV word ptr [EAX + 0x2d8],0x215
004e3d92  MOV ECX,dword ptr [EBP + -0x38]
004e3d95  MOV word ptr [ECX + 0x2da],0x203
004e3d9e  MOV EDX,dword ptr [EBP + -0x38]
004e3da1  MOV word ptr [EDX + 0x2dc],0x215
004e3daa  MOV EAX,dword ptr [EBP + -0x38]
004e3dad  MOV word ptr [EAX + 0x2de],0x246
004e3db6  MOV ECX,dword ptr [EBP + -0x38]
004e3db9  MOV word ptr [ECX + 0x2e0],0x286
004e3dc2  MOV EDX,dword ptr [EBP + -0x38]
004e3dc5  MOV word ptr [EDX + 0x2e2],0x29d
004e3dce  MOV EAX,dword ptr [EBP + -0x38]
004e3dd1  MOV word ptr [EAX + 0x2e4],0x2ea
004e3dda  MOV ECX,dword ptr [EBP + -0x38]
004e3ddd  MOV word ptr [ECX + 0x2e6],0x30e
004e3de6  MOV EDX,dword ptr [EBP + -0x38]
004e3de9  MOV word ptr [EDX + 0x2e8],0x323
004e3df2  MOV EAX,dword ptr [EBP + -0x38]
004e3df5  MOV word ptr [EAX + 0x2ea],0x32e
004e3dfe  MOV ECX,dword ptr [EBP + -0x38]
004e3e01  MOV word ptr [ECX + 0x2ec],0x334
004e3e0a  MOV EDX,dword ptr [EBP + -0x38]
004e3e0d  MOV word ptr [EDX + 0x2ee],0x336
004e3e16  MOV EAX,dword ptr [EBP + -0x38]
004e3e19  MOV word ptr [EAX + 0x2f0],0x379
004e3e22  MOV ECX,dword ptr [EBP + -0x38]
004e3e25  MOV word ptr [ECX + 0x2f2],0x392
004e3e2e  MOV EDX,dword ptr [EBP + -0x38]
004e3e31  MOV word ptr [EDX + 0x2f4],0x3a0
004e3e3a  MOV EAX,dword ptr [EBP + -0x38]
004e3e3d  MOV word ptr [EAX + 0x2f6],0x3a6
004e3e46  MOV ECX,dword ptr [EBP + -0x38]
004e3e49  MOV word ptr [ECX + 0x2f8],0x3a8
004e3e52  MOV EDX,dword ptr [EBP + -0x38]
004e3e55  MOV word ptr [EDX + 0x2fa],0x3b4
004e3e5e  MOV EAX,dword ptr [EBP + -0x38]
004e3e61  MOV word ptr [EAX + 0x2fc],0x3c3
004e3e6a  MOV ECX,dword ptr [EBP + -0x38]
004e3e6d  MOV word ptr [ECX + 0x2fe],0x3cb
004e3e76  MOV EDX,dword ptr [EBP + -0x38]
004e3e79  MOV word ptr [EDX + 0x300],0x3ce
004e3e82  MOV EAX,dword ptr [EBP + -0x38]
004e3e85  MOV word ptr [EAX + 0x302],0x3d4
004e3e8e  MOV ECX,dword ptr [EBP + -0x38]
004e3e91  MOV word ptr [ECX + 0x304],0x3dc
004e3e9a  MOV EDX,dword ptr [EBP + -0x38]
004e3e9d  MOV word ptr [EDX + 0x306],0x3df
004e3ea6  MOV EAX,dword ptr [EBP + -0x38]
004e3ea9  MOV word ptr [EAX + 0x308],0x3e2
004e3eb2  MOV ECX,dword ptr [EBP + -0x38]
004e3eb5  MOV word ptr [ECX + 0x30a],0x3e5
004e3ebe  MOV EDX,dword ptr [EBP + -0x38]
004e3ec1  MOV word ptr [EDX + 0x30c],0x3e8
004e3eca  MOV EAX,dword ptr [EBP + -0x24]
004e3ecd  SHL EAX,0x2
004e3ed0  MOV ECX,dword ptr [EBP + -0x20]
004e3ed3  LEA EDX,[EAX + ECX*0x4]
004e3ed6  MOV EAX,dword ptr [EBP + -0x18]
004e3ed9  LEA ECX,[EDX + EAX*0x4]
004e3edc  MOV EDX,dword ptr [EBP + -0x14]
004e3edf  LEA EAX,[ECX + EDX*0x4]
004e3ee2  MOV ECX,dword ptr [EBP + -0x34]
004e3ee5  LEA EDX,[EAX + ECX*0x4]
004e3ee8  MOV EAX,dword ptr [EBP + -0x28]
004e3eeb  LEA ECX,[EDX + EAX*0x4]
004e3eee  MOV EDX,dword ptr [EBP + -0x1c]
004e3ef1  LEA EAX,[ECX + EDX*0x4]
004e3ef4  MOV dword ptr [EBP + 0xfffffd14],EAX
004e3efa  FILD dword ptr [EBP + 0xfffffd14]
004e3f00  FMUL double ptr [EBP + -0x30]
004e3f03  CALL 0x00686cc0
004e3f08  MOV ECX,dword ptr [EBP + -0x38]
004e3f0b  MOV word ptr [ECX + 0x30e],AX
004e3f12  MOV EDX,dword ptr [EBP + -0x24]
004e3f15  SHL EDX,0x2
004e3f18  MOV EAX,dword ptr [EBP + -0x20]
004e3f1b  LEA ECX,[EDX + EAX*0x4]
004e3f1e  MOV EDX,dword ptr [EBP + -0x18]
004e3f21  LEA EAX,[ECX + EDX*0x4]
004e3f24  MOV ECX,dword ptr [EBP + -0x14]
004e3f27  LEA EDX,[EAX + ECX*0x4]
004e3f2a  MOV EAX,dword ptr [EBP + -0x34]
004e3f2d  LEA ECX,[EDX + EAX*0x4]
004e3f30  MOV EDX,dword ptr [EBP + -0x28]
004e3f33  LEA EAX,[ECX + EDX*0x4]
004e3f36  MOV ECX,dword ptr [EBP + -0x1c]
004e3f39  LEA EDX,[EAX + ECX*0x4]
004e3f3c  MOV dword ptr [EBP + 0xfffffd10],EDX
004e3f42  FILD dword ptr [EBP + 0xfffffd10]
004e3f48  FMUL double ptr [EBP + -0x30]
004e3f4b  CALL 0x00686cc0
004e3f50  MOV ECX,dword ptr [EBP + -0x38]
004e3f53  MOV word ptr [ECX + 0x310],AX
004e3f5a  MOV EDX,dword ptr [EBP + -0x18]
004e3f5d  SHL EDX,0x2
004e3f60  MOV EAX,dword ptr [EBP + -0x24]
004e3f63  LEA ECX,[EDX + EAX*0x8]
004e3f66  MOV EDX,dword ptr [EBP + -0x14]
004e3f69  LEA EAX,[ECX + EDX*0x4]
004e3f6c  MOV ECX,dword ptr [EBP + -0x34]
004e3f6f  LEA EDX,[EAX + ECX*0x4]
004e3f72  MOV EAX,dword ptr [EBP + -0x28]
004e3f75  LEA ECX,[EDX + EAX*0x4]
004e3f78  MOV EDX,dword ptr [EBP + -0x1c]
004e3f7b  LEA EAX,[ECX + EDX*0x4]
004e3f7e  MOV dword ptr [EBP + 0xfffffd0c],EAX
004e3f84  FILD dword ptr [EBP + 0xfffffd0c]
004e3f8a  FMUL double ptr [EBP + -0x30]
004e3f8d  CALL 0x00686cc0
004e3f92  MOV ECX,dword ptr [EBP + -0x38]
004e3f95  MOV word ptr [ECX + 0x312],AX
004e3f9c  MOV EDX,dword ptr [EBP + -0x18]
004e3f9f  IMUL EDX,EDX,0xc
004e3fa2  MOV EAX,dword ptr [EBP + -0x14]
004e3fa5  LEA ECX,[EDX + EAX*0x4]
004e3fa8  MOV EDX,dword ptr [EBP + -0x34]
004e3fab  LEA EAX,[ECX + EDX*0x4]
004e3fae  MOV ECX,dword ptr [EBP + -0x28]
004e3fb1  LEA EDX,[EAX + ECX*0x4]
004e3fb4  MOV EAX,dword ptr [EBP + -0x1c]
004e3fb7  LEA ECX,[EDX + EAX*0x4]
004e3fba  MOV dword ptr [EBP + 0xfffffd08],ECX
004e3fc0  FILD dword ptr [EBP + 0xfffffd08]
004e3fc6  FMUL double ptr [EBP + -0x30]
004e3fc9  CALL 0x00686cc0
004e3fce  MOV EDX,dword ptr [EBP + -0x38]
004e3fd1  MOV word ptr [EDX + 0x314],AX
004e3fd8  MOV EAX,dword ptr [EBP + -0x14]
004e3fdb  SHL EAX,0x4
004e3fde  MOV ECX,dword ptr [EBP + -0x34]
004e3fe1  LEA EDX,[EAX + ECX*0x4]
004e3fe4  MOV EAX,dword ptr [EBP + -0x28]
004e3fe7  LEA ECX,[EDX + EAX*0x4]
004e3fea  MOV EDX,dword ptr [EBP + -0x1c]
004e3fed  LEA EAX,[ECX + EDX*0x4]
004e3ff0  MOV dword ptr [EBP + 0xfffffd04],EAX
004e3ff6  FILD dword ptr [EBP + 0xfffffd04]
004e3ffc  FMUL double ptr [EBP + -0x30]
004e3fff  CALL 0x00686cc0
004e4004  MOV ECX,dword ptr [EBP + -0x38]
004e4007  MOV word ptr [ECX + 0x316],AX
004e400e  MOV EDX,dword ptr [EBP + -0x34]
004e4011  IMUL EDX,EDX,0x14
004e4014  MOV EAX,dword ptr [EBP + -0x28]
004e4017  LEA ECX,[EDX + EAX*0x4]
004e401a  MOV EDX,dword ptr [EBP + -0x1c]
004e401d  LEA EAX,[ECX + EDX*0x4]
004e4020  MOV dword ptr [EBP + 0xfffffd00],EAX
004e4026  FILD dword ptr [EBP + 0xfffffd00]
004e402c  FMUL double ptr [EBP + -0x30]
004e402f  CALL 0x00686cc0
004e4034  MOV ECX,dword ptr [EBP + -0x38]
004e4037  MOV word ptr [ECX + 0x318],AX
004e403e  MOV EDX,dword ptr [EBP + -0x28]
004e4041  IMUL EDX,EDX,0x18
004e4044  MOV EAX,dword ptr [EBP + -0x1c]
004e4047  LEA ECX,[EDX + EAX*0x4]
004e404a  MOV dword ptr [EBP + 0xfffffcfc],ECX
004e4050  FILD dword ptr [EBP + 0xfffffcfc]
004e4056  FMUL double ptr [EBP + -0x30]
004e4059  CALL 0x00686cc0
004e405e  MOV EDX,dword ptr [EBP + -0x38]
004e4061  MOV word ptr [EDX + 0x31a],AX
004e4068  MOV EAX,dword ptr [EBP + -0x1c]
004e406b  IMUL EAX,EAX,0x1c
004e406e  MOV dword ptr [EBP + 0xfffffcf8],EAX
004e4074  FILD dword ptr [EBP + 0xfffffcf8]
004e407a  FMUL double ptr [EBP + -0x30]
004e407d  CALL 0x00686cc0
004e4082  MOV ECX,dword ptr [EBP + -0x38]
004e4085  MOV word ptr [ECX + 0x31c],AX
004e408c  MOV EDX,dword ptr [EBP + -0x20]
004e408f  SHL EDX,0x4
004e4092  MOV EAX,dword ptr [EBP + -0x24]
004e4095  SHL EAX,0x5
004e4098  ADD EDX,EAX
004e409a  MOV ECX,dword ptr [EBP + -0x18]
004e409d  IMUL ECX,ECX,0x30
004e40a0  ADD EDX,ECX
004e40a2  MOV EAX,dword ptr [EBP + -0x14]
004e40a5  SHL EAX,0x6
004e40a8  ADD EDX,EAX
004e40aa  MOV ECX,dword ptr [EBP + -0x34]
004e40ad  IMUL ECX,ECX,0x50
004e40b0  ADD EDX,ECX
004e40b2  MOV EAX,dword ptr [EBP + -0x28]
004e40b5  IMUL EAX,EAX,0x60
004e40b8  ADD EDX,EAX
004e40ba  MOV ECX,dword ptr [EBP + -0x1c]
004e40bd  IMUL ECX,ECX,0x70
004e40c0  ADD EDX,ECX
004e40c2  MOV dword ptr [EBP + 0xfffffcf4],EDX
004e40c8  FILD dword ptr [EBP + 0xfffffcf4]
004e40ce  FMUL double ptr [EBP + -0x8]
004e40d1  CALL 0x00686cc0
004e40d6  MOV EDX,dword ptr [EBP + -0x38]
004e40d9  MOV word ptr [EDX + 0x31e],AX
004e40e0  MOV EAX,dword ptr [EBP + -0x20]
004e40e3  SHL EAX,0x4
004e40e6  MOV ECX,dword ptr [EBP + -0x24]
004e40e9  SHL ECX,0x5
004e40ec  ADD EAX,ECX
004e40ee  MOV EDX,dword ptr [EBP + -0x18]
004e40f1  IMUL EDX,EDX,0x30
004e40f4  ADD EAX,EDX
004e40f6  MOV ECX,dword ptr [EBP + -0x14]
004e40f9  SHL ECX,0x6
004e40fc  ADD EAX,ECX
004e40fe  MOV EDX,dword ptr [EBP + -0x34]
004e4101  IMUL EDX,EDX,0x50
004e4104  ADD EAX,EDX
004e4106  MOV ECX,dword ptr [EBP + -0x28]
004e4109  IMUL ECX,ECX,0x60
004e410c  ADD EAX,ECX
004e410e  MOV EDX,dword ptr [EBP + -0x1c]
004e4111  IMUL EDX,EDX,0x70
004e4114  ADD EAX,EDX
004e4116  MOV dword ptr [EBP + 0xfffffcf0],EAX
004e411c  FILD dword ptr [EBP + 0xfffffcf0]
004e4122  FMUL double ptr [EBP + -0x8]
004e4125  CALL 0x00686cc0
004e412a  MOV ECX,dword ptr [EBP + -0x38]
004e412d  MOV word ptr [ECX + 0x320],AX
004e4134  MOV EDX,dword ptr [EBP + -0x20]
004e4137  SHL EDX,0x4
004e413a  MOV EAX,dword ptr [EBP + -0x24]
004e413d  SHL EAX,0x5
004e4140  ADD EDX,EAX
004e4142  MOV ECX,dword ptr [EBP + -0x18]
004e4145  IMUL ECX,ECX,0x30
004e4148  ADD EDX,ECX
004e414a  MOV EAX,dword ptr [EBP + -0x14]
004e414d  SHL EAX,0x6
004e4150  ADD EDX,EAX
004e4152  MOV ECX,dword ptr [EBP + -0x34]
004e4155  IMUL ECX,ECX,0x50
004e4158  ADD EDX,ECX
004e415a  MOV EAX,dword ptr [EBP + -0x28]
004e415d  IMUL EAX,EAX,0x60
004e4160  ADD EDX,EAX
004e4162  MOV ECX,dword ptr [EBP + -0x1c]
004e4165  IMUL ECX,ECX,0x70
004e4168  ADD EDX,ECX
004e416a  MOV dword ptr [EBP + 0xfffffcec],EDX
004e4170  FILD dword ptr [EBP + 0xfffffcec]
004e4176  FMUL double ptr [EBP + -0x8]
004e4179  CALL 0x00686cc0
004e417e  MOV EDX,dword ptr [EBP + -0x38]
004e4181  MOV word ptr [EDX + 0x322],AX
004e4188  MOV EAX,dword ptr [EBP + -0x24]
004e418b  IMUL EAX,EAX,0x60
004e418e  MOV dword ptr [EBP + 0xfffffce8],EAX
004e4194  FILD dword ptr [EBP + 0xfffffce8]
004e419a  FDIV double ptr [0x006b3740]
004e41a0  MOV ECX,dword ptr [EBP + -0x18]
004e41a3  IMUL ECX,ECX,0x30
004e41a6  MOV dword ptr [EBP + 0xfffffce4],ECX
004e41ac  FILD dword ptr [EBP + 0xfffffce4]
004e41b2  FADDP
004e41b4  MOV EDX,dword ptr [EBP + -0x14]
004e41b7  SHL EDX,0x6
004e41ba  MOV dword ptr [EBP + 0xfffffce0],EDX
004e41c0  FILD dword ptr [EBP + 0xfffffce0]
004e41c6  FADDP
004e41c8  MOV EAX,dword ptr [EBP + -0x34]
004e41cb  IMUL EAX,EAX,0x50
004e41ce  MOV dword ptr [EBP + 0xfffffcdc],EAX
004e41d4  FILD dword ptr [EBP + 0xfffffcdc]
004e41da  FADDP
004e41dc  MOV ECX,dword ptr [EBP + -0x28]
004e41df  IMUL ECX,ECX,0x60
004e41e2  MOV dword ptr [EBP + 0xfffffcd8],ECX
004e41e8  FILD dword ptr [EBP + 0xfffffcd8]
004e41ee  FADDP
004e41f0  MOV EDX,dword ptr [EBP + -0x1c]
004e41f3  IMUL EDX,EDX,0x70
004e41f6  MOV dword ptr [EBP + 0xfffffcd4],EDX
004e41fc  FILD dword ptr [EBP + 0xfffffcd4]
004e4202  FADDP
004e4204  FMUL double ptr [EBP + -0x8]
004e4207  CALL 0x00686cc0
004e420c  MOV ECX,dword ptr [EBP + -0x38]
004e420f  MOV word ptr [ECX + 0x324],AX
004e4216  MOV EDX,dword ptr [EBP + -0x18]
004e4219  IMUL EDX,EDX,0xc0
004e421f  MOV dword ptr [EBP + 0xfffffcd0],EDX
004e4225  FILD dword ptr [EBP + 0xfffffcd0]
004e422b  FDIV double ptr [0x006b3740]
004e4231  MOV EAX,dword ptr [EBP + -0x14]
004e4234  SHL EAX,0x6
004e4237  MOV dword ptr [EBP + 0xfffffccc],EAX
004e423d  FILD dword ptr [EBP + 0xfffffccc]
004e4243  FADDP
004e4245  MOV ECX,dword ptr [EBP + -0x34]
004e4248  IMUL ECX,ECX,0x50
004e424b  MOV dword ptr [EBP + 0xfffffcc8],ECX
004e4251  FILD dword ptr [EBP + 0xfffffcc8]
004e4257  FADDP
004e4259  MOV EDX,dword ptr [EBP + -0x28]
004e425c  IMUL EDX,EDX,0x60
004e425f  MOV dword ptr [EBP + 0xfffffcc4],EDX
004e4265  FILD dword ptr [EBP + 0xfffffcc4]
004e426b  FADDP
004e426d  MOV EAX,dword ptr [EBP + -0x1c]
004e4270  IMUL EAX,EAX,0x70
004e4273  MOV dword ptr [EBP + 0xfffffcc0],EAX
004e4279  FILD dword ptr [EBP + 0xfffffcc0]
004e427f  FADDP
004e4281  FMUL double ptr [EBP + -0x8]
004e4284  CALL 0x00686cc0
004e4289  MOV ECX,dword ptr [EBP + -0x38]
004e428c  MOV word ptr [ECX + 0x326],AX
004e4293  MOV EDX,dword ptr [EBP + -0x14]
004e4296  IMUL EDX,EDX,0x140
004e429c  MOV dword ptr [EBP + 0xfffffcbc],EDX
004e42a2  FILD dword ptr [EBP + 0xfffffcbc]
004e42a8  FDIV double ptr [0x006b3740]
004e42ae  MOV EAX,dword ptr [EBP + -0x34]
004e42b1  IMUL EAX,EAX,0x50
004e42b4  MOV dword ptr [EBP + 0xfffffcb8],EAX
004e42ba  FILD dword ptr [EBP + 0xfffffcb8]
004e42c0  FADDP
004e42c2  MOV ECX,dword ptr [EBP + -0x28]
004e42c5  IMUL ECX,ECX,0x60
004e42c8  MOV dword ptr [EBP + 0xfffffcb4],ECX
004e42ce  FILD dword ptr [EBP + 0xfffffcb4]
004e42d4  FADDP
004e42d6  MOV EDX,dword ptr [EBP + -0x1c]
004e42d9  IMUL EDX,EDX,0x70
004e42dc  MOV dword ptr [EBP + 0xfffffcb0],EDX
004e42e2  FILD dword ptr [EBP + 0xfffffcb0]
004e42e8  FADDP
004e42ea  FMUL double ptr [EBP + -0x8]
004e42ed  CALL 0x00686cc0
004e42f2  MOV ECX,dword ptr [EBP + -0x38]
004e42f5  MOV word ptr [ECX + 0x328],AX
004e42fc  MOV EDX,dword ptr [EBP + -0x34]
004e42ff  IMUL EDX,EDX,0x1e0
004e4305  MOV dword ptr [EBP + 0xfffffcac],EDX
004e430b  FILD dword ptr [EBP + 0xfffffcac]
004e4311  FDIV double ptr [0x006b3740]
004e4317  MOV EAX,dword ptr [EBP + -0x28]
004e431a  IMUL EAX,EAX,0x60
004e431d  MOV dword ptr [EBP + 0xfffffca8],EAX
004e4323  FILD dword ptr [EBP + 0xfffffca8]
004e4329  FADDP
004e432b  MOV ECX,dword ptr [EBP + -0x1c]
004e432e  IMUL ECX,ECX,0x70
004e4331  MOV dword ptr [EBP + 0xfffffca4],ECX
004e4337  FILD dword ptr [EBP + 0xfffffca4]
004e433d  FADDP
004e433f  FMUL double ptr [EBP + -0x8]
004e4342  CALL 0x00686cc0
004e4347  MOV EDX,dword ptr [EBP + -0x38]
004e434a  MOV word ptr [EDX + 0x32a],AX
004e4351  MOV EAX,dword ptr [EBP + -0x28]
004e4354  IMUL EAX,EAX,0x2a0
004e435a  MOV dword ptr [EBP + 0xfffffca0],EAX
004e4360  FILD dword ptr [EBP + 0xfffffca0]
004e4366  FDIV double ptr [0x006b3740]
004e436c  MOV ECX,dword ptr [EBP + -0x1c]
004e436f  IMUL ECX,ECX,0x70
004e4372  MOV dword ptr [EBP + 0xfffffc9c],ECX
004e4378  FILD dword ptr [EBP + 0xfffffc9c]
004e437e  FADDP
004e4380  FMUL double ptr [EBP + -0x8]
004e4383  CALL 0x00686cc0
004e4388  MOV EDX,dword ptr [EBP + -0x38]
004e438b  MOV word ptr [EDX + 0x32c],AX
004e4392  MOV EAX,dword ptr [EBP + -0x1c]
004e4395  IMUL EAX,EAX,0x380
004e439b  MOV dword ptr [EBP + 0xfffffc98],EAX
004e43a1  FILD dword ptr [EBP + 0xfffffc98]
004e43a7  FDIV double ptr [0x006b3740]
004e43ad  FMUL double ptr [EBP + -0x8]
004e43b0  CALL 0x00686cc0
004e43b5  MOV ECX,dword ptr [EBP + -0x38]
004e43b8  MOV word ptr [ECX + 0x32e],AX
004e43bf  MOV EDX,dword ptr [EBP + -0x20]
004e43c2  SHL EDX,0x7
004e43c5  MOV EAX,dword ptr [EBP + -0x24]
004e43c8  IMUL EAX,EAX,0x180
004e43ce  ADD EDX,EAX
004e43d0  MOV ECX,dword ptr [EBP + -0x18]
004e43d3  IMUL ECX,ECX,0x300
004e43d9  ADD EDX,ECX
004e43db  MOV EAX,dword ptr [EBP + -0x14]
004e43de  IMUL EAX,EAX,0x500
004e43e4  ADD EDX,EAX
004e43e6  MOV ECX,dword ptr [EBP + -0x34]
004e43e9  IMUL ECX,ECX,0x780
004e43ef  ADD EDX,ECX
004e43f1  MOV EAX,dword ptr [EBP + -0x28]
004e43f4  IMUL EAX,EAX,0xa80
004e43fa  ADD EDX,EAX
004e43fc  MOV ECX,dword ptr [EBP + -0x1c]
004e43ff  IMUL ECX,ECX,0xe00
004e4405  ADD EDX,ECX
004e4407  MOV dword ptr [EBP + 0xfffffc94],EDX
004e440d  FILD dword ptr [EBP + 0xfffffc94]
004e4413  FMUL double ptr [EBP + -0x10]
004e4416  CALL 0x00686cc0
004e441b  MOV EDX,dword ptr [EBP + -0x38]
004e441e  MOV word ptr [EDX + 0x330],AX
004e4425  MOV EAX,dword ptr [EBP + -0x20]
004e4428  SHL EAX,0x7
004e442b  MOV ECX,dword ptr [EBP + -0x24]
004e442e  IMUL ECX,ECX,0x180
004e4434  ADD EAX,ECX
004e4436  MOV EDX,dword ptr [EBP + -0x18]
004e4439  IMUL EDX,EDX,0x300
004e443f  ADD EAX,EDX
004e4441  MOV ECX,dword ptr [EBP + -0x14]
004e4444  IMUL ECX,ECX,0x500
004e444a  ADD EAX,ECX
004e444c  MOV EDX,dword ptr [EBP + -0x34]
004e444f  IMUL EDX,EDX,0x780
004e4455  ADD EAX,EDX
004e4457  MOV ECX,dword ptr [EBP + -0x28]
004e445a  IMUL ECX,ECX,0xa80
004e4460  ADD EAX,ECX
004e4462  MOV EDX,dword ptr [EBP + -0x1c]
004e4465  IMUL EDX,EDX,0xe00
004e446b  ADD EAX,EDX
004e446d  MOV dword ptr [EBP + 0xfffffc90],EAX
004e4473  FILD dword ptr [EBP + 0xfffffc90]
004e4479  FMUL double ptr [EBP + -0x10]
004e447c  CALL 0x00686cc0
004e4481  MOV ECX,dword ptr [EBP + -0x38]
004e4484  MOV word ptr [ECX + 0x332],AX
004e448b  MOV EDX,dword ptr [EBP + -0x20]
004e448e  SHL EDX,0x7
004e4491  MOV EAX,dword ptr [EBP + -0x24]
004e4494  IMUL EAX,EAX,0x180
004e449a  ADD EDX,EAX
004e449c  MOV ECX,dword ptr [EBP + -0x18]
004e449f  IMUL ECX,ECX,0x300
004e44a5  ADD EDX,ECX
004e44a7  MOV EAX,dword ptr [EBP + -0x14]
004e44aa  IMUL EAX,EAX,0x500
004e44b0  ADD EDX,EAX
004e44b2  MOV ECX,dword ptr [EBP + -0x34]
004e44b5  IMUL ECX,ECX,0x780
004e44bb  ADD EDX,ECX
004e44bd  MOV EAX,dword ptr [EBP + -0x28]
004e44c0  IMUL EAX,EAX,0xa80
004e44c6  ADD EDX,EAX
004e44c8  MOV ECX,dword ptr [EBP + -0x1c]
004e44cb  IMUL ECX,ECX,0xe00
004e44d1  ADD EDX,ECX
004e44d3  MOV dword ptr [EBP + 0xfffffc8c],EDX
004e44d9  FILD dword ptr [EBP + 0xfffffc8c]
004e44df  FMUL double ptr [EBP + -0x10]
004e44e2  CALL 0x00686cc0
004e44e7  MOV EDX,dword ptr [EBP + -0x38]
004e44ea  MOV word ptr [EDX + 0x334],AX
004e44f1  MOV EAX,dword ptr [EBP + -0x20]
004e44f4  SHL EAX,0x7
004e44f7  MOV ECX,dword ptr [EBP + -0x24]
004e44fa  IMUL ECX,ECX,0x180
004e4500  ADD EAX,ECX
004e4502  MOV EDX,dword ptr [EBP + -0x18]
004e4505  IMUL EDX,EDX,0x300
004e450b  ADD EAX,EDX
004e450d  MOV ECX,dword ptr [EBP + -0x14]
004e4510  IMUL ECX,ECX,0x500
004e4516  ADD EAX,ECX
004e4518  MOV EDX,dword ptr [EBP + -0x34]
004e451b  IMUL EDX,EDX,0x780
004e4521  ADD EAX,EDX
004e4523  MOV ECX,dword ptr [EBP + -0x28]
004e4526  IMUL ECX,ECX,0xa80
004e452c  ADD EAX,ECX
004e452e  MOV EDX,dword ptr [EBP + -0x1c]
004e4531  IMUL EDX,EDX,0xe00
004e4537  ADD EAX,EDX
004e4539  MOV dword ptr [EBP + 0xfffffc88],EAX
004e453f  FILD dword ptr [EBP + 0xfffffc88]
004e4545  FMUL double ptr [EBP + -0x10]
004e4548  CALL 0x00686cc0
004e454d  MOV ECX,dword ptr [EBP + -0x38]
004e4550  MOV word ptr [ECX + 0x336],AX
004e4557  MOV EDX,dword ptr [EBP + -0x24]
004e455a  IMUL EDX,EDX,0x600
004e4560  MOV dword ptr [EBP + 0xfffffc84],EDX
004e4566  FILD dword ptr [EBP + 0xfffffc84]
004e456c  FDIV double ptr [0x006b9490]
004e4572  MOV EAX,dword ptr [EBP + -0x18]
004e4575  IMUL EAX,EAX,0x300
004e457b  MOV dword ptr [EBP + 0xfffffc80],EAX
004e4581  FILD dword ptr [EBP + 0xfffffc80]
004e4587  FADDP
004e4589  MOV ECX,dword ptr [EBP + -0x14]
004e458c  IMUL ECX,ECX,0x500
004e4592  MOV dword ptr [EBP + 0xfffffc7c],ECX
004e4598  FILD dword ptr [EBP + 0xfffffc7c]
004e459e  FADDP
004e45a0  MOV EDX,dword ptr [EBP + -0x34]
004e45a3  IMUL EDX,EDX,0x780
004e45a9  MOV dword ptr [EBP + 0xfffffc78],EDX
004e45af  FILD dword ptr [EBP + 0xfffffc78]
004e45b5  FADDP
004e45b7  MOV EAX,dword ptr [EBP + -0x28]
004e45ba  IMUL EAX,EAX,0xa80
004e45c0  MOV dword ptr [EBP + 0xfffffc74],EAX
004e45c6  FILD dword ptr [EBP + 0xfffffc74]
004e45cc  FADDP
004e45ce  MOV ECX,dword ptr [EBP + -0x1c]
004e45d1  IMUL ECX,ECX,0xe00
004e45d7  MOV dword ptr [EBP + 0xfffffc70],ECX
004e45dd  FILD dword ptr [EBP + 0xfffffc70]
004e45e3  FADDP
004e45e5  FMUL double ptr [EBP + -0x10]
004e45e8  CALL 0x00686cc0
004e45ed  MOV EDX,dword ptr [EBP + -0x38]
004e45f0  MOV word ptr [EDX + 0x338],AX
004e45f7  MOV EAX,dword ptr [EBP + -0x18]
004e45fa  IMUL EAX,EAX,0xf00
004e4600  MOV dword ptr [EBP + 0xfffffc6c],EAX
004e4606  FILD dword ptr [EBP + 0xfffffc6c]
004e460c  FDIV double ptr [0x006b9490]
004e4612  MOV ECX,dword ptr [EBP + -0x14]
004e4615  IMUL ECX,ECX,0x500
004e461b  MOV dword ptr [EBP + 0xfffffc68],ECX
004e4621  FILD dword ptr [EBP + 0xfffffc68]
004e4627  FADDP
004e4629  MOV EDX,dword ptr [EBP + -0x34]
004e462c  IMUL EDX,EDX,0x780
004e4632  MOV dword ptr [EBP + 0xfffffc64],EDX
004e4638  FILD dword ptr [EBP + 0xfffffc64]
004e463e  FADDP
004e4640  MOV EAX,dword ptr [EBP + -0x28]
004e4643  IMUL EAX,EAX,0xa80
004e4649  MOV dword ptr [EBP + 0xfffffc60],EAX
004e464f  FILD dword ptr [EBP + 0xfffffc60]
004e4655  FADDP
004e4657  MOV ECX,dword ptr [EBP + -0x1c]
004e465a  IMUL ECX,ECX,0xe00
004e4660  MOV dword ptr [EBP + 0xfffffc5c],ECX
004e4666  FILD dword ptr [EBP + 0xfffffc5c]
004e466c  FADDP
004e466e  FMUL double ptr [EBP + -0x10]
004e4671  CALL 0x00686cc0
004e4676  MOV EDX,dword ptr [EBP + -0x38]
004e4679  MOV word ptr [EDX + 0x33a],AX
004e4680  MOV EAX,dword ptr [EBP + -0x14]
004e4683  IMUL EAX,EAX,0x1e00
004e4689  MOV dword ptr [EBP + 0xfffffc58],EAX
004e468f  FILD dword ptr [EBP + 0xfffffc58]
004e4695  FDIV double ptr [0x006b9490]
004e469b  MOV ECX,dword ptr [EBP + -0x34]
004e469e  IMUL ECX,ECX,0x780
004e46a4  MOV dword ptr [EBP + 0xfffffc54],ECX
004e46aa  FILD dword ptr [EBP + 0xfffffc54]
004e46b0  FADDP
004e46b2  MOV EDX,dword ptr [EBP + -0x28]
004e46b5  IMUL EDX,EDX,0xa80
004e46bb  MOV dword ptr [EBP + 0xfffffc50],EDX
004e46c1  FILD dword ptr [EBP + 0xfffffc50]
004e46c7  FADDP
004e46c9  MOV EAX,dword ptr [EBP + -0x1c]
004e46cc  IMUL EAX,EAX,0xe00
004e46d2  MOV dword ptr [EBP + 0xfffffc4c],EAX
004e46d8  FILD dword ptr [EBP + 0xfffffc4c]
004e46de  FADDP
004e46e0  FMUL double ptr [EBP + -0x10]
004e46e3  CALL 0x00686cc0
004e46e8  MOV ECX,dword ptr [EBP + -0x38]
004e46eb  MOV word ptr [ECX + 0x33c],AX
004e46f2  MOV EDX,dword ptr [EBP + -0x34]
004e46f5  IMUL EDX,EDX,0x3480
004e46fb  MOV dword ptr [EBP + 0xfffffc48],EDX
004e4701  FILD dword ptr [EBP + 0xfffffc48]
004e4707  FDIV double ptr [0x006b9490]
004e470d  MOV EAX,dword ptr [EBP + -0x28]
004e4710  IMUL EAX,EAX,0xa80
004e4716  MOV dword ptr [EBP + 0xfffffc44],EAX
004e471c  FILD dword ptr [EBP + 0xfffffc44]
004e4722  FADDP
004e4724  MOV ECX,dword ptr [EBP + -0x1c]
004e4727  IMUL ECX,ECX,0xe00
004e472d  MOV dword ptr [EBP + 0xfffffc40],ECX
004e4733  FILD dword ptr [EBP + 0xfffffc40]
004e4739  FADDP
004e473b  FMUL double ptr [EBP + -0x10]
004e473e  CALL 0x00686cc0
004e4743  MOV EDX,dword ptr [EBP + -0x38]
004e4746  MOV word ptr [EDX + 0x33e],AX
004e474d  MOV EAX,dword ptr [EBP + -0x28]
004e4750  IMUL EAX,EAX,0x5400
004e4756  MOV dword ptr [EBP + 0xfffffc3c],EAX
004e475c  FILD dword ptr [EBP + 0xfffffc3c]
004e4762  FDIV double ptr [0x006b9490]
004e4768  MOV ECX,dword ptr [EBP + -0x1c]
004e476b  IMUL ECX,ECX,0xe00
004e4771  MOV dword ptr [EBP + 0xfffffc38],ECX
004e4777  FILD dword ptr [EBP + 0xfffffc38]
004e477d  FADDP
004e477f  FMUL double ptr [EBP + -0x10]
004e4782  CALL 0x00686cc0
004e4787  MOV EDX,dword ptr [EBP + -0x38]
004e478a  MOV word ptr [EDX + 0x340],AX
004e4791  MOV EAX,dword ptr [EBP + -0x1c]
004e4794  IMUL EAX,EAX,0x7e00
004e479a  MOV dword ptr [EBP + 0xfffffc34],EAX
004e47a0  FILD dword ptr [EBP + 0xfffffc34]
004e47a6  FDIV double ptr [0x006b9490]
004e47ac  FMUL double ptr [EBP + -0x10]
004e47af  CALL 0x00686cc0
004e47b4  MOV ECX,dword ptr [EBP + -0x38]
004e47b7  MOV word ptr [ECX + 0x342],AX
004e47be  MOV EDX,dword ptr [EBP + -0x38]
004e47c1  MOV word ptr [EDX + 0x288],0xa
004e47ca  MOV EAX,dword ptr [EBP + -0x38]
004e47cd  MOV word ptr [EAX + 0x28a],0x1c
004e47d6  MOV ECX,dword ptr [EBP + -0x38]
004e47d9  MOV word ptr [ECX + 0x28c],0x23
004e47e2  MOV EDX,dword ptr [EBP + -0x38]
004e47e5  MOV word ptr [EDX + 0x28e],0x14
004e47ee  MOV EAX,dword ptr [EBP + -0x38]
004e47f1  MOV word ptr [EAX + 0x290],0x37
004e47fa  MOV ECX,dword ptr [EBP + -0x38]
004e47fd  MOV word ptr [ECX + 0x292],0x18
004e4806  MOV EDX,dword ptr [EBP + -0x38]
004e4809  MOV word ptr [EDX + 0x294],0x50
004e4812  MOV EAX,dword ptr [EBP + -0x38]
004e4815  MOV word ptr [EAX + 0x296],0x22
004e481e  MOV ECX,dword ptr [EBP + -0x38]
004e4821  MOV word ptr [ECX + 0x298],0x2d
004e482a  MOV EDX,dword ptr [EBP + -0x38]
004e482d  MOV word ptr [EDX + 0x29a],0x14
004e4836  MOV EAX,dword ptr [EBP + -0x38]
004e4839  MOV word ptr [EAX + 0x29c],0xa
004e4842  MOV ECX,dword ptr [EBP + -0x38]
004e4845  MOV word ptr [ECX + 0x29e],0xe
004e484e  MOV EDX,dword ptr [EBP + -0x38]
004e4851  MOV word ptr [EDX + 0x2a0],0x26
004e485a  MOV EAX,dword ptr [EBP + -0x38]
004e485d  MOV word ptr [EAX + 0x2a2],0x15
004e4866  MOV ECX,dword ptr [EBP + -0x38]
004e4869  MOV word ptr [ECX + 0x2a4],0x5
004e4872  MOV EDX,dword ptr [EBP + -0x38]
004e4875  MOV word ptr [EDX + 0x2a6],0x23
004e487e  MOV EAX,dword ptr [EBP + -0x38]
004e4881  MOV word ptr [EAX + 0x2a8],0x4
004e488a  MOV ECX,dword ptr [EBP + -0x38]
004e488d  MOV word ptr [ECX + 0x2aa],0x50
004e4896  MOV EDX,dword ptr [EBP + -0x38]
004e4899  MOV word ptr [EDX + 0x2ac],0x3c
004e48a2  MOV EAX,dword ptr [EBP + -0x38]
004e48a5  MOV word ptr [EAX + 0x2ae],0x28
004e48ae  MOV ECX,dword ptr [EBP + -0x38]
004e48b1  MOV word ptr [ECX + 0x2b0],0x3c
004e48ba  MOV EDX,dword ptr [EBP + -0x38]
004e48bd  MOV word ptr [EDX + 0x2b2],0x3c
004e48c6  MOV EAX,dword ptr [EBP + -0x38]
004e48c9  MOV word ptr [EAX + 0x2b4],0xa
004e48d2  MOV ECX,dword ptr [EBP + -0x38]
004e48d5  MOV word ptr [ECX + 0x2b6],0x1e
004e48de  MOV EDX,dword ptr [EBP + -0x38]
004e48e1  MOV word ptr [EDX + 0x2b8],0x23
004e48ea  JMP 0x004e9360
004e48ef  MOV dword ptr [EBP + -0x20],0x3e8
004e48f6  MOV dword ptr [EBP + -0x24],0x3ca
004e48fd  MOV dword ptr [EBP + -0x18],0x320
004e4904  MOV dword ptr [EBP + -0x14],0x226
004e490b  MOV dword ptr [EBP + -0x34],0x96
004e4912  MOV dword ptr [EBP + -0x28],0x64
004e4919  MOV dword ptr [EBP + -0x1c],0x14
004e4920  FLD double ptr [0x006bfc38]
004e4926  FSTP double ptr [EBP + -0x30]
004e4929  FLD double ptr [0x006bfbd8]
004e492f  FSTP double ptr [EBP + -0x8]
004e4932  FLD double ptr [0x006bfbd0]
004e4938  FSTP double ptr [EBP + -0x10]
004e493b  MOV EAX,dword ptr [EBP + -0x38]
004e493e  MOV word ptr [EAX + 0x2ba],0xf
004e4947  MOV ECX,dword ptr [EBP + -0x38]
004e494a  MOV word ptr [ECX + 0x2bc],0x33
004e4953  MOV EDX,dword ptr [EBP + -0x38]
004e4956  MOV word ptr [EDX + 0x2be],0x50
004e495f  MOV EAX,dword ptr [EBP + -0x38]
004e4962  MOV word ptr [EAX + 0x2c0],0x61
004e496b  MOV ECX,dword ptr [EBP + -0x38]
004e496e  MOV word ptr [ECX + 0x2c2],0x72
004e4977  MOV EDX,dword ptr [EBP + -0x38]
004e497a  MOV word ptr [EDX + 0x2c4],0x84
004e4983  MOV EAX,dword ptr [EBP + -0x38]
004e4986  MOV word ptr [EAX + 0x2c6],0x98
004e498f  MOV ECX,dword ptr [EBP + -0x38]
004e4992  MOV word ptr [ECX + 0x2c8],0xac
004e499b  MOV EDX,dword ptr [EBP + -0x38]
004e499e  MOV word ptr [EDX + 0x2ca],0xc1
004e49a7  MOV EAX,dword ptr [EBP + -0x38]
004e49aa  MOV word ptr [EAX + 0x2cc],0xd8
004e49b3  MOV ECX,dword ptr [EBP + -0x38]
004e49b6  MOV word ptr [ECX + 0x2ce],0xf0
004e49bf  MOV EDX,dword ptr [EBP + -0x38]
004e49c2  MOV word ptr [EDX + 0x2d0],0x109
004e49cb  MOV EAX,dword ptr [EBP + -0x38]
004e49ce  MOV word ptr [EAX + 0x2d2],0x12a
004e49d7  MOV ECX,dword ptr [EBP + -0x38]
004e49da  MOV word ptr [ECX + 0x2d4],0x185
004e49e3  MOV EDX,dword ptr [EBP + -0x38]
004e49e6  MOV word ptr [EDX + 0x2d6],0x19d
004e49ef  MOV EAX,dword ptr [EBP + -0x38]
004e49f2  MOV word ptr [EAX + 0x2d8],0x215
004e49fb  MOV ECX,dword ptr [EBP + -0x38]
004e49fe  MOV word ptr [ECX + 0x2da],0x235
004e4a07  MOV EDX,dword ptr [EBP + -0x38]
004e4a0a  MOV word ptr [EDX + 0x2dc],0x247
004e4a13  MOV EAX,dword ptr [EBP + -0x38]
004e4a16  MOV word ptr [EAX + 0x2de],0x278
004e4a1f  MOV ECX,dword ptr [EBP + -0x38]
004e4a22  MOV word ptr [ECX + 0x2e0],0x2b8
004e4a2b  MOV EDX,dword ptr [EBP + -0x38]
004e4a2e  MOV word ptr [EDX + 0x2e2],0x2cf
004e4a37  MOV EAX,dword ptr [EBP + -0x38]
004e4a3a  MOV word ptr [EAX + 0x2e4],0x303
004e4a43  MOV ECX,dword ptr [EBP + -0x38]
004e4a46  MOV word ptr [ECX + 0x2e6],0x327
004e4a4f  MOV EDX,dword ptr [EBP + -0x38]
004e4a52  MOV word ptr [EDX + 0x2e8],0x33c
004e4a5b  MOV EAX,dword ptr [EBP + -0x38]
004e4a5e  MOV word ptr [EAX + 0x2ea],0x347
004e4a67  MOV ECX,dword ptr [EBP + -0x38]
004e4a6a  MOV word ptr [ECX + 0x2ec],0x34d
004e4a73  MOV EDX,dword ptr [EBP + -0x38]
004e4a76  MOV word ptr [EDX + 0x2ee],0x34f
004e4a7f  MOV EAX,dword ptr [EBP + -0x38]
004e4a82  MOV word ptr [EAX + 0x2f0],0x379
004e4a8b  MOV ECX,dword ptr [EBP + -0x38]
004e4a8e  MOV word ptr [ECX + 0x2f2],0x392
004e4a97  MOV EDX,dword ptr [EBP + -0x38]
004e4a9a  MOV word ptr [EDX + 0x2f4],0x3a0
004e4aa3  MOV EAX,dword ptr [EBP + -0x38]
004e4aa6  MOV word ptr [EAX + 0x2f6],0x3a6
004e4aaf  MOV ECX,dword ptr [EBP + -0x38]
004e4ab2  MOV word ptr [ECX + 0x2f8],0x3a8
004e4abb  MOV EDX,dword ptr [EBP + -0x38]
004e4abe  MOV word ptr [EDX + 0x2fa],0x3b4
004e4ac7  MOV EAX,dword ptr [EBP + -0x38]
004e4aca  MOV word ptr [EAX + 0x2fc],0x3c3
004e4ad3  MOV ECX,dword ptr [EBP + -0x38]
004e4ad6  MOV word ptr [ECX + 0x2fe],0x3cb
004e4adf  MOV EDX,dword ptr [EBP + -0x38]
004e4ae2  MOV word ptr [EDX + 0x300],0x3ce
004e4aeb  MOV EAX,dword ptr [EBP + -0x38]
004e4aee  MOV word ptr [EAX + 0x302],0x3d4
004e4af7  MOV ECX,dword ptr [EBP + -0x38]
004e4afa  MOV word ptr [ECX + 0x304],0x3dc
004e4b03  MOV EDX,dword ptr [EBP + -0x38]
004e4b06  MOV word ptr [EDX + 0x306],0x3df
004e4b0f  MOV EAX,dword ptr [EBP + -0x38]
004e4b12  MOV word ptr [EAX + 0x308],0x3e2
004e4b1b  MOV ECX,dword ptr [EBP + -0x38]
004e4b1e  MOV word ptr [ECX + 0x30a],0x3e5
004e4b27  MOV EDX,dword ptr [EBP + -0x38]
004e4b2a  MOV word ptr [EDX + 0x30c],0x3e8
004e4b33  MOV EAX,dword ptr [EBP + -0x24]
004e4b36  SHL EAX,0x2
004e4b39  MOV ECX,dword ptr [EBP + -0x20]
004e4b3c  LEA EDX,[EAX + ECX*0x4]
004e4b3f  MOV EAX,dword ptr [EBP + -0x18]
004e4b42  LEA ECX,[EDX + EAX*0x4]
004e4b45  MOV EDX,dword ptr [EBP + -0x14]
004e4b48  LEA EAX,[ECX + EDX*0x4]
004e4b4b  MOV ECX,dword ptr [EBP + -0x34]
004e4b4e  LEA EDX,[EAX + ECX*0x4]
004e4b51  MOV EAX,dword ptr [EBP + -0x28]
004e4b54  LEA ECX,[EDX + EAX*0x4]
004e4b57  MOV EDX,dword ptr [EBP + -0x1c]
004e4b5a  LEA EAX,[ECX + EDX*0x4]
004e4b5d  MOV dword ptr [EBP + 0xfffffc30],EAX
004e4b63  FILD dword ptr [EBP + 0xfffffc30]
004e4b69  FMUL double ptr [EBP + -0x30]
004e4b6c  CALL 0x00686cc0
004e4b71  MOV ECX,dword ptr [EBP + -0x38]
004e4b74  MOV word ptr [ECX + 0x30e],AX
004e4b7b  MOV EDX,dword ptr [EBP + -0x24]
004e4b7e  SHL EDX,0x2
004e4b81  MOV EAX,dword ptr [EBP + -0x20]
004e4b84  LEA ECX,[EDX + EAX*0x4]
004e4b87  MOV EDX,dword ptr [EBP + -0x18]
004e4b8a  LEA EAX,[ECX + EDX*0x4]
004e4b8d  MOV ECX,dword ptr [EBP + -0x14]
004e4b90  LEA EDX,[EAX + ECX*0x4]
004e4b93  MOV EAX,dword ptr [EBP + -0x34]
004e4b96  LEA ECX,[EDX + EAX*0x4]
004e4b99  MOV EDX,dword ptr [EBP + -0x28]
004e4b9c  LEA EAX,[ECX + EDX*0x4]
004e4b9f  MOV ECX,dword ptr [EBP + -0x1c]
004e4ba2  LEA EDX,[EAX + ECX*0x4]
004e4ba5  MOV dword ptr [EBP + 0xfffffc2c],EDX
004e4bab  FILD dword ptr [EBP + 0xfffffc2c]
004e4bb1  FMUL double ptr [EBP + -0x30]
004e4bb4  CALL 0x00686cc0
004e4bb9  MOV ECX,dword ptr [EBP + -0x38]
004e4bbc  MOV word ptr [ECX + 0x310],AX
004e4bc3  MOV EDX,dword ptr [EBP + -0x18]
004e4bc6  SHL EDX,0x2
004e4bc9  MOV EAX,dword ptr [EBP + -0x24]
004e4bcc  LEA ECX,[EDX + EAX*0x8]
004e4bcf  MOV EDX,dword ptr [EBP + -0x14]
004e4bd2  LEA EAX,[ECX + EDX*0x4]
004e4bd5  MOV ECX,dword ptr [EBP + -0x34]
004e4bd8  LEA EDX,[EAX + ECX*0x4]
004e4bdb  MOV EAX,dword ptr [EBP + -0x28]
004e4bde  LEA ECX,[EDX + EAX*0x4]
004e4be1  MOV EDX,dword ptr [EBP + -0x1c]
004e4be4  LEA EAX,[ECX + EDX*0x4]
004e4be7  MOV dword ptr [EBP + 0xfffffc28],EAX
004e4bed  FILD dword ptr [EBP + 0xfffffc28]
004e4bf3  FMUL double ptr [EBP + -0x30]
004e4bf6  CALL 0x00686cc0
004e4bfb  MOV ECX,dword ptr [EBP + -0x38]
004e4bfe  MOV word ptr [ECX + 0x312],AX
004e4c05  MOV EDX,dword ptr [EBP + -0x18]
004e4c08  IMUL EDX,EDX,0xc
004e4c0b  MOV EAX,dword ptr [EBP + -0x14]
004e4c0e  LEA ECX,[EDX + EAX*0x4]
004e4c11  MOV EDX,dword ptr [EBP + -0x34]
004e4c14  LEA EAX,[ECX + EDX*0x4]
004e4c17  MOV ECX,dword ptr [EBP + -0x28]
004e4c1a  LEA EDX,[EAX + ECX*0x4]
004e4c1d  MOV EAX,dword ptr [EBP + -0x1c]
004e4c20  LEA ECX,[EDX + EAX*0x4]
004e4c23  MOV dword ptr [EBP + 0xfffffc24],ECX
004e4c29  FILD dword ptr [EBP + 0xfffffc24]
004e4c2f  FMUL double ptr [EBP + -0x30]
004e4c32  CALL 0x00686cc0
004e4c37  MOV EDX,dword ptr [EBP + -0x38]
004e4c3a  MOV word ptr [EDX + 0x314],AX
004e4c41  MOV EAX,dword ptr [EBP + -0x14]
004e4c44  SHL EAX,0x4
004e4c47  MOV ECX,dword ptr [EBP + -0x34]
004e4c4a  LEA EDX,[EAX + ECX*0x4]
004e4c4d  MOV EAX,dword ptr [EBP + -0x28]
004e4c50  LEA ECX,[EDX + EAX*0x4]
004e4c53  MOV EDX,dword ptr [EBP + -0x1c]
004e4c56  LEA EAX,[ECX + EDX*0x4]
004e4c59  MOV dword ptr [EBP + 0xfffffc20],EAX
004e4c5f  FILD dword ptr [EBP + 0xfffffc20]
004e4c65  FMUL double ptr [EBP + -0x30]
004e4c68  CALL 0x00686cc0
004e4c6d  MOV ECX,dword ptr [EBP + -0x38]
004e4c70  MOV word ptr [ECX + 0x316],AX
004e4c77  MOV EDX,dword ptr [EBP + -0x34]
004e4c7a  IMUL EDX,EDX,0x14
004e4c7d  MOV EAX,dword ptr [EBP + -0x28]
004e4c80  LEA ECX,[EDX + EAX*0x4]
004e4c83  MOV EDX,dword ptr [EBP + -0x1c]
004e4c86  LEA EAX,[ECX + EDX*0x4]
004e4c89  MOV dword ptr [EBP + 0xfffffc1c],EAX
004e4c8f  FILD dword ptr [EBP + 0xfffffc1c]
004e4c95  FMUL double ptr [EBP + -0x30]
004e4c98  CALL 0x00686cc0
004e4c9d  MOV ECX,dword ptr [EBP + -0x38]
004e4ca0  MOV word ptr [ECX + 0x318],AX
004e4ca7  MOV EDX,dword ptr [EBP + -0x28]
004e4caa  IMUL EDX,EDX,0x18
004e4cad  MOV EAX,dword ptr [EBP + -0x1c]
004e4cb0  LEA ECX,[EDX + EAX*0x4]
004e4cb3  MOV dword ptr [EBP + 0xfffffc18],ECX
004e4cb9  FILD dword ptr [EBP + 0xfffffc18]
004e4cbf  FMUL double ptr [EBP + -0x30]
004e4cc2  CALL 0x00686cc0
004e4cc7  MOV EDX,dword ptr [EBP + -0x38]
004e4cca  MOV word ptr [EDX + 0x31a],AX
004e4cd1  MOV EAX,dword ptr [EBP + -0x1c]
004e4cd4  IMUL EAX,EAX,0x1c
004e4cd7  MOV dword ptr [EBP + 0xfffffc14],EAX
004e4cdd  FILD dword ptr [EBP + 0xfffffc14]
004e4ce3  FMUL double ptr [EBP + -0x30]
004e4ce6  CALL 0x00686cc0
004e4ceb  MOV ECX,dword ptr [EBP + -0x38]
004e4cee  MOV word ptr [ECX + 0x31c],AX
004e4cf5  MOV EDX,dword ptr [EBP + -0x20]
004e4cf8  SHL EDX,0x4
004e4cfb  MOV EAX,dword ptr [EBP + -0x24]
004e4cfe  SHL EAX,0x5
004e4d01  ADD EDX,EAX
004e4d03  MOV ECX,dword ptr [EBP + -0x18]
004e4d06  IMUL ECX,ECX,0x30
004e4d09  ADD EDX,ECX
004e4d0b  MOV EAX,dword ptr [EBP + -0x14]
004e4d0e  SHL EAX,0x6
004e4d11  ADD EDX,EAX
004e4d13  MOV ECX,dword ptr [EBP + -0x34]
004e4d16  IMUL ECX,ECX,0x50
004e4d19  ADD EDX,ECX
004e4d1b  MOV EAX,dword ptr [EBP + -0x28]
004e4d1e  IMUL EAX,EAX,0x60
004e4d21  ADD EDX,EAX
004e4d23  MOV ECX,dword ptr [EBP + -0x1c]
004e4d26  IMUL ECX,ECX,0x70
004e4d29  ADD EDX,ECX
004e4d2b  MOV dword ptr [EBP + 0xfffffc10],EDX
004e4d31  FILD dword ptr [EBP + 0xfffffc10]
004e4d37  FMUL double ptr [EBP + -0x8]
004e4d3a  CALL 0x00686cc0
004e4d3f  MOV EDX,dword ptr [EBP + -0x38]
004e4d42  MOV word ptr [EDX + 0x31e],AX
004e4d49  MOV EAX,dword ptr [EBP + -0x20]
004e4d4c  SHL EAX,0x4
004e4d4f  MOV ECX,dword ptr [EBP + -0x24]
004e4d52  SHL ECX,0x5
004e4d55  ADD EAX,ECX
004e4d57  MOV EDX,dword ptr [EBP + -0x18]
004e4d5a  IMUL EDX,EDX,0x30
004e4d5d  ADD EAX,EDX
004e4d5f  MOV ECX,dword ptr [EBP + -0x14]
004e4d62  SHL ECX,0x6
004e4d65  ADD EAX,ECX
004e4d67  MOV EDX,dword ptr [EBP + -0x34]
004e4d6a  IMUL EDX,EDX,0x50
004e4d6d  ADD EAX,EDX
004e4d6f  MOV ECX,dword ptr [EBP + -0x28]
004e4d72  IMUL ECX,ECX,0x60
004e4d75  ADD EAX,ECX
004e4d77  MOV EDX,dword ptr [EBP + -0x1c]
004e4d7a  IMUL EDX,EDX,0x70
004e4d7d  ADD EAX,EDX
004e4d7f  MOV dword ptr [EBP + 0xfffffc0c],EAX
004e4d85  FILD dword ptr [EBP + 0xfffffc0c]
004e4d8b  FMUL double ptr [EBP + -0x8]
004e4d8e  CALL 0x00686cc0
004e4d93  MOV ECX,dword ptr [EBP + -0x38]
004e4d96  MOV word ptr [ECX + 0x320],AX
004e4d9d  MOV EDX,dword ptr [EBP + -0x20]
004e4da0  SHL EDX,0x4
004e4da3  MOV EAX,dword ptr [EBP + -0x24]
004e4da6  SHL EAX,0x5
004e4da9  ADD EDX,EAX
004e4dab  MOV ECX,dword ptr [EBP + -0x18]
004e4dae  IMUL ECX,ECX,0x30
004e4db1  ADD EDX,ECX
004e4db3  MOV EAX,dword ptr [EBP + -0x14]
004e4db6  SHL EAX,0x6
004e4db9  ADD EDX,EAX
004e4dbb  MOV ECX,dword ptr [EBP + -0x34]
004e4dbe  IMUL ECX,ECX,0x50
004e4dc1  ADD EDX,ECX
004e4dc3  MOV EAX,dword ptr [EBP + -0x28]
004e4dc6  IMUL EAX,EAX,0x60
004e4dc9  ADD EDX,EAX
004e4dcb  MOV ECX,dword ptr [EBP + -0x1c]
004e4dce  IMUL ECX,ECX,0x70
004e4dd1  ADD EDX,ECX
004e4dd3  MOV dword ptr [EBP + 0xfffffc08],EDX
004e4dd9  FILD dword ptr [EBP + 0xfffffc08]
004e4ddf  FMUL double ptr [EBP + -0x8]
004e4de2  CALL 0x00686cc0
004e4de7  MOV EDX,dword ptr [EBP + -0x38]
004e4dea  MOV word ptr [EDX + 0x322],AX
004e4df1  MOV EAX,dword ptr [EBP + -0x24]
004e4df4  IMUL EAX,EAX,0x60
004e4df7  MOV dword ptr [EBP + 0xfffffc04],EAX
004e4dfd  FILD dword ptr [EBP + 0xfffffc04]
004e4e03  FDIV double ptr [0x006b3740]
004e4e09  MOV ECX,dword ptr [EBP + -0x18]
004e4e0c  IMUL ECX,ECX,0x30
004e4e0f  MOV dword ptr [EBP + 0xfffffc00],ECX
004e4e15  FILD dword ptr [EBP + 0xfffffc00]
004e4e1b  FADDP
004e4e1d  MOV EDX,dword ptr [EBP + -0x14]
004e4e20  SHL EDX,0x6
004e4e23  MOV dword ptr [EBP + 0xfffffbfc],EDX
004e4e29  FILD dword ptr [EBP + 0xfffffbfc]
004e4e2f  FADDP
004e4e31  MOV EAX,dword ptr [EBP + -0x34]
004e4e34  IMUL EAX,EAX,0x50
004e4e37  MOV dword ptr [EBP + 0xfffffbf8],EAX
004e4e3d  FILD dword ptr [EBP + 0xfffffbf8]
004e4e43  FADDP
004e4e45  MOV ECX,dword ptr [EBP + -0x28]
004e4e48  IMUL ECX,ECX,0x60
004e4e4b  MOV dword ptr [EBP + 0xfffffbf4],ECX
004e4e51  FILD dword ptr [EBP + 0xfffffbf4]
004e4e57  FADDP
004e4e59  MOV EDX,dword ptr [EBP + -0x1c]
004e4e5c  IMUL EDX,EDX,0x70
004e4e5f  MOV dword ptr [EBP + 0xfffffbf0],EDX
004e4e65  FILD dword ptr [EBP + 0xfffffbf0]
004e4e6b  FADDP
004e4e6d  FMUL double ptr [EBP + -0x8]
004e4e70  CALL 0x00686cc0
004e4e75  MOV ECX,dword ptr [EBP + -0x38]
004e4e78  MOV word ptr [ECX + 0x324],AX
004e4e7f  MOV EDX,dword ptr [EBP + -0x18]
004e4e82  IMUL EDX,EDX,0xc0
004e4e88  MOV dword ptr [EBP + 0xfffffbec],EDX
004e4e8e  FILD dword ptr [EBP + 0xfffffbec]
004e4e94  FDIV double ptr [0x006b3740]
004e4e9a  MOV EAX,dword ptr [EBP + -0x14]
004e4e9d  SHL EAX,0x6
004e4ea0  MOV dword ptr [EBP + 0xfffffbe8],EAX
004e4ea6  FILD dword ptr [EBP + 0xfffffbe8]
004e4eac  FADDP
004e4eae  MOV ECX,dword ptr [EBP + -0x34]
004e4eb1  IMUL ECX,ECX,0x50
004e4eb4  MOV dword ptr [EBP + 0xfffffbe4],ECX
004e4eba  FILD dword ptr [EBP + 0xfffffbe4]
004e4ec0  FADDP
004e4ec2  MOV EDX,dword ptr [EBP + -0x28]
004e4ec5  IMUL EDX,EDX,0x60
004e4ec8  MOV dword ptr [EBP + 0xfffffbe0],EDX
004e4ece  FILD dword ptr [EBP + 0xfffffbe0]
004e4ed4  FADDP
004e4ed6  MOV EAX,dword ptr [EBP + -0x1c]
004e4ed9  IMUL EAX,EAX,0x70
004e4edc  MOV dword ptr [EBP + 0xfffffbdc],EAX
004e4ee2  FILD dword ptr [EBP + 0xfffffbdc]
004e4ee8  FADDP
004e4eea  FMUL double ptr [EBP + -0x8]
004e4eed  CALL 0x00686cc0
004e4ef2  MOV ECX,dword ptr [EBP + -0x38]
004e4ef5  MOV word ptr [ECX + 0x326],AX
004e4efc  MOV EDX,dword ptr [EBP + -0x14]
004e4eff  IMUL EDX,EDX,0x140
004e4f05  MOV dword ptr [EBP + 0xfffffbd8],EDX
004e4f0b  FILD dword ptr [EBP + 0xfffffbd8]
004e4f11  FDIV double ptr [0x006b3740]
004e4f17  MOV EAX,dword ptr [EBP + -0x34]
004e4f1a  IMUL EAX,EAX,0x50
004e4f1d  MOV dword ptr [EBP + 0xfffffbd4],EAX
004e4f23  FILD dword ptr [EBP + 0xfffffbd4]
004e4f29  FADDP
004e4f2b  MOV ECX,dword ptr [EBP + -0x28]
004e4f2e  IMUL ECX,ECX,0x60
004e4f31  MOV dword ptr [EBP + 0xfffffbd0],ECX
004e4f37  FILD dword ptr [EBP + 0xfffffbd0]
004e4f3d  FADDP
004e4f3f  MOV EDX,dword ptr [EBP + -0x1c]
004e4f42  IMUL EDX,EDX,0x70
004e4f45  MOV dword ptr [EBP + 0xfffffbcc],EDX
004e4f4b  FILD dword ptr [EBP + 0xfffffbcc]
004e4f51  FADDP
004e4f53  FMUL double ptr [EBP + -0x8]
004e4f56  CALL 0x00686cc0
004e4f5b  MOV ECX,dword ptr [EBP + -0x38]
004e4f5e  MOV word ptr [ECX + 0x328],AX
004e4f65  MOV EDX,dword ptr [EBP + -0x34]
004e4f68  IMUL EDX,EDX,0x1e0
004e4f6e  MOV dword ptr [EBP + 0xfffffbc8],EDX
004e4f74  FILD dword ptr [EBP + 0xfffffbc8]
004e4f7a  FDIV double ptr [0x006b3740]
004e4f80  MOV EAX,dword ptr [EBP + -0x28]
004e4f83  IMUL EAX,EAX,0x60
004e4f86  MOV dword ptr [EBP + 0xfffffbc4],EAX
004e4f8c  FILD dword ptr [EBP + 0xfffffbc4]
004e4f92  FADDP
004e4f94  MOV ECX,dword ptr [EBP + -0x1c]
004e4f97  IMUL ECX,ECX,0x70
004e4f9a  MOV dword ptr [EBP + 0xfffffbc0],ECX
004e4fa0  FILD dword ptr [EBP + 0xfffffbc0]
004e4fa6  FADDP
004e4fa8  FMUL double ptr [EBP + -0x8]
004e4fab  CALL 0x00686cc0
004e4fb0  MOV EDX,dword ptr [EBP + -0x38]
004e4fb3  MOV word ptr [EDX + 0x32a],AX
004e4fba  MOV EAX,dword ptr [EBP + -0x28]
004e4fbd  IMUL EAX,EAX,0x2a0
004e4fc3  MOV dword ptr [EBP + 0xfffffbbc],EAX
004e4fc9  FILD dword ptr [EBP + 0xfffffbbc]
004e4fcf  FDIV double ptr [0x006b3740]
004e4fd5  MOV ECX,dword ptr [EBP + -0x1c]
004e4fd8  IMUL ECX,ECX,0x70
004e4fdb  MOV dword ptr [EBP + 0xfffffbb8],ECX
004e4fe1  FILD dword ptr [EBP + 0xfffffbb8]
004e4fe7  FADDP
004e4fe9  FMUL double ptr [EBP + -0x8]
004e4fec  CALL 0x00686cc0
004e4ff1  MOV EDX,dword ptr [EBP + -0x38]
004e4ff4  MOV word ptr [EDX + 0x32c],AX
004e4ffb  MOV EAX,dword ptr [EBP + -0x1c]
004e4ffe  IMUL EAX,EAX,0x380
004e5004  MOV dword ptr [EBP + 0xfffffbb4],EAX
004e500a  FILD dword ptr [EBP + 0xfffffbb4]
004e5010  FDIV double ptr [0x006b3740]
004e5016  FMUL double ptr [EBP + -0x8]
004e5019  CALL 0x00686cc0
004e501e  MOV ECX,dword ptr [EBP + -0x38]
004e5021  MOV word ptr [ECX + 0x32e],AX
004e5028  MOV EDX,dword ptr [EBP + -0x20]
004e502b  SHL EDX,0x7
004e502e  MOV EAX,dword ptr [EBP + -0x24]
004e5031  IMUL EAX,EAX,0x180
004e5037  ADD EDX,EAX
004e5039  MOV ECX,dword ptr [EBP + -0x18]
004e503c  IMUL ECX,ECX,0x300
004e5042  ADD EDX,ECX
004e5044  MOV EAX,dword ptr [EBP + -0x14]
004e5047  IMUL EAX,EAX,0x500
004e504d  ADD EDX,EAX
004e504f  MOV ECX,dword ptr [EBP + -0x34]
004e5052  IMUL ECX,ECX,0x780
004e5058  ADD EDX,ECX
004e505a  MOV EAX,dword ptr [EBP + -0x28]
004e505d  IMUL EAX,EAX,0xa80
004e5063  ADD EDX,EAX
004e5065  MOV ECX,dword ptr [EBP + -0x1c]
004e5068  IMUL ECX,ECX,0xe00
004e506e  ADD EDX,ECX
004e5070  MOV dword ptr [EBP + 0xfffffbb0],EDX
004e5076  FILD dword ptr [EBP + 0xfffffbb0]
004e507c  FMUL double ptr [EBP + -0x10]
004e507f  CALL 0x00686cc0
004e5084  MOV EDX,dword ptr [EBP + -0x38]
004e5087  MOV word ptr [EDX + 0x330],AX
004e508e  MOV EAX,dword ptr [EBP + -0x20]
004e5091  SHL EAX,0x7
004e5094  MOV ECX,dword ptr [EBP + -0x24]
004e5097  IMUL ECX,ECX,0x180
004e509d  ADD EAX,ECX
004e509f  MOV EDX,dword ptr [EBP + -0x18]
004e50a2  IMUL EDX,EDX,0x300
004e50a8  ADD EAX,EDX
004e50aa  MOV ECX,dword ptr [EBP + -0x14]
004e50ad  IMUL ECX,ECX,0x500
004e50b3  ADD EAX,ECX
004e50b5  MOV EDX,dword ptr [EBP + -0x34]
004e50b8  IMUL EDX,EDX,0x780
004e50be  ADD EAX,EDX
004e50c0  MOV ECX,dword ptr [EBP + -0x28]
004e50c3  IMUL ECX,ECX,0xa80
004e50c9  ADD EAX,ECX
004e50cb  MOV EDX,dword ptr [EBP + -0x1c]
004e50ce  IMUL EDX,EDX,0xe00
004e50d4  ADD EAX,EDX
004e50d6  MOV dword ptr [EBP + 0xfffffbac],EAX
004e50dc  FILD dword ptr [EBP + 0xfffffbac]
004e50e2  FMUL double ptr [EBP + -0x10]
004e50e5  CALL 0x00686cc0
004e50ea  MOV ECX,dword ptr [EBP + -0x38]
004e50ed  MOV word ptr [ECX + 0x332],AX
004e50f4  MOV EDX,dword ptr [EBP + -0x20]
004e50f7  SHL EDX,0x7
004e50fa  MOV EAX,dword ptr [EBP + -0x24]
004e50fd  IMUL EAX,EAX,0x180
004e5103  ADD EDX,EAX
004e5105  MOV ECX,dword ptr [EBP + -0x18]
004e5108  IMUL ECX,ECX,0x300
004e510e  ADD EDX,ECX
004e5110  MOV EAX,dword ptr [EBP + -0x14]
004e5113  IMUL EAX,EAX,0x500
004e5119  ADD EDX,EAX
004e511b  MOV ECX,dword ptr [EBP + -0x34]
004e511e  IMUL ECX,ECX,0x780
004e5124  ADD EDX,ECX
004e5126  MOV EAX,dword ptr [EBP + -0x28]
004e5129  IMUL EAX,EAX,0xa80
004e512f  ADD EDX,EAX
004e5131  MOV ECX,dword ptr [EBP + -0x1c]
004e5134  IMUL ECX,ECX,0xe00
004e513a  ADD EDX,ECX
004e513c  MOV dword ptr [EBP + 0xfffffba8],EDX
004e5142  FILD dword ptr [EBP + 0xfffffba8]
004e5148  FMUL double ptr [EBP + -0x10]
004e514b  CALL 0x00686cc0
004e5150  MOV EDX,dword ptr [EBP + -0x38]
004e5153  MOV word ptr [EDX + 0x334],AX
004e515a  MOV EAX,dword ptr [EBP + -0x20]
004e515d  SHL EAX,0x7
004e5160  MOV ECX,dword ptr [EBP + -0x24]
004e5163  IMUL ECX,ECX,0x180
004e5169  ADD EAX,ECX
004e516b  MOV EDX,dword ptr [EBP + -0x18]
004e516e  IMUL EDX,EDX,0x300
004e5174  ADD EAX,EDX
004e5176  MOV ECX,dword ptr [EBP + -0x14]
004e5179  IMUL ECX,ECX,0x500
004e517f  ADD EAX,ECX
004e5181  MOV EDX,dword ptr [EBP + -0x34]
004e5184  IMUL EDX,EDX,0x780
004e518a  ADD EAX,EDX
004e518c  MOV ECX,dword ptr [EBP + -0x28]
004e518f  IMUL ECX,ECX,0xa80
004e5195  ADD EAX,ECX
004e5197  MOV EDX,dword ptr [EBP + -0x1c]
004e519a  IMUL EDX,EDX,0xe00
004e51a0  ADD EAX,EDX
004e51a2  MOV dword ptr [EBP + 0xfffffba4],EAX
004e51a8  FILD dword ptr [EBP + 0xfffffba4]
004e51ae  FMUL double ptr [EBP + -0x10]
004e51b1  CALL 0x00686cc0
004e51b6  MOV ECX,dword ptr [EBP + -0x38]
004e51b9  MOV word ptr [ECX + 0x336],AX
004e51c0  MOV EDX,dword ptr [EBP + -0x24]
004e51c3  IMUL EDX,EDX,0x600
004e51c9  MOV dword ptr [EBP + 0xfffffba0],EDX
004e51cf  FILD dword ptr [EBP + 0xfffffba0]
004e51d5  FDIV double ptr [0x006b9490]
004e51db  MOV EAX,dword ptr [EBP + -0x18]
004e51de  IMUL EAX,EAX,0x300
004e51e4  MOV dword ptr [EBP + 0xfffffb9c],EAX
004e51ea  FILD dword ptr [EBP + 0xfffffb9c]
004e51f0  FADDP
004e51f2  MOV ECX,dword ptr [EBP + -0x14]
004e51f5  IMUL ECX,ECX,0x500
004e51fb  MOV dword ptr [EBP + 0xfffffb98],ECX
004e5201  FILD dword ptr [EBP + 0xfffffb98]
004e5207  FADDP
004e5209  MOV EDX,dword ptr [EBP + -0x34]
004e520c  IMUL EDX,EDX,0x780
004e5212  MOV dword ptr [EBP + 0xfffffb94],EDX
004e5218  FILD dword ptr [EBP + 0xfffffb94]
004e521e  FADDP
004e5220  MOV EAX,dword ptr [EBP + -0x28]
004e5223  IMUL EAX,EAX,0xa80
004e5229  MOV dword ptr [EBP + 0xfffffb90],EAX
004e522f  FILD dword ptr [EBP + 0xfffffb90]
004e5235  FADDP
004e5237  MOV ECX,dword ptr [EBP + -0x1c]
004e523a  IMUL ECX,ECX,0xe00
004e5240  MOV dword ptr [EBP + 0xfffffb8c],ECX
004e5246  FILD dword ptr [EBP + 0xfffffb8c]
004e524c  FADDP
004e524e  FMUL double ptr [EBP + -0x10]
004e5251  CALL 0x00686cc0
004e5256  MOV EDX,dword ptr [EBP + -0x38]
004e5259  MOV word ptr [EDX + 0x338],AX
004e5260  MOV EAX,dword ptr [EBP + -0x18]
004e5263  IMUL EAX,EAX,0xf00
004e5269  MOV dword ptr [EBP + 0xfffffb88],EAX
004e526f  FILD dword ptr [EBP + 0xfffffb88]
004e5275  FDIV double ptr [0x006b9490]
004e527b  MOV ECX,dword ptr [EBP + -0x14]
004e527e  IMUL ECX,ECX,0x500
004e5284  MOV dword ptr [EBP + 0xfffffb84],ECX
004e528a  FILD dword ptr [EBP + 0xfffffb84]
004e5290  FADDP
004e5292  MOV EDX,dword ptr [EBP + -0x34]
004e5295  IMUL EDX,EDX,0x780
004e529b  MOV dword ptr [EBP + 0xfffffb80],EDX
004e52a1  FILD dword ptr [EBP + 0xfffffb80]
004e52a7  FADDP
004e52a9  MOV EAX,dword ptr [EBP + -0x28]
004e52ac  IMUL EAX,EAX,0xa80
004e52b2  MOV dword ptr [EBP + 0xfffffb7c],EAX
004e52b8  FILD dword ptr [EBP + 0xfffffb7c]
004e52be  FADDP
004e52c0  MOV ECX,dword ptr [EBP + -0x1c]
004e52c3  IMUL ECX,ECX,0xe00
004e52c9  MOV dword ptr [EBP + 0xfffffb78],ECX
004e52cf  FILD dword ptr [EBP + 0xfffffb78]
004e52d5  FADDP
004e52d7  FMUL double ptr [EBP + -0x10]
004e52da  CALL 0x00686cc0
004e52df  MOV EDX,dword ptr [EBP + -0x38]
004e52e2  MOV word ptr [EDX + 0x33a],AX
004e52e9  MOV EAX,dword ptr [EBP + -0x14]
004e52ec  IMUL EAX,EAX,0x1e00
004e52f2  MOV dword ptr [EBP + 0xfffffb74],EAX
004e52f8  FILD dword ptr [EBP + 0xfffffb74]
004e52fe  FDIV double ptr [0x006b9490]
004e5304  MOV ECX,dword ptr [EBP + -0x34]
004e5307  IMUL ECX,ECX,0x780
004e530d  MOV dword ptr [EBP + 0xfffffb70],ECX
004e5313  FILD dword ptr [EBP + 0xfffffb70]
004e5319  FADDP
004e531b  MOV EDX,dword ptr [EBP + -0x28]
004e531e  IMUL EDX,EDX,0xa80
004e5324  MOV dword ptr [EBP + 0xfffffb6c],EDX
004e532a  FILD dword ptr [EBP + 0xfffffb6c]
004e5330  FADDP
004e5332  MOV EAX,dword ptr [EBP + -0x1c]
004e5335  IMUL EAX,EAX,0xe00
004e533b  MOV dword ptr [EBP + 0xfffffb68],EAX
004e5341  FILD dword ptr [EBP + 0xfffffb68]
004e5347  FADDP
004e5349  FMUL double ptr [EBP + -0x10]
004e534c  CALL 0x00686cc0
004e5351  MOV ECX,dword ptr [EBP + -0x38]
004e5354  MOV word ptr [ECX + 0x33c],AX
004e535b  MOV EDX,dword ptr [EBP + -0x34]
004e535e  IMUL EDX,EDX,0x3480
004e5364  MOV dword ptr [EBP + 0xfffffb64],EDX
004e536a  FILD dword ptr [EBP + 0xfffffb64]
004e5370  FDIV double ptr [0x006b9490]
004e5376  MOV EAX,dword ptr [EBP + -0x28]
004e5379  IMUL EAX,EAX,0xa80
004e537f  MOV dword ptr [EBP + 0xfffffb60],EAX
004e5385  FILD dword ptr [EBP + 0xfffffb60]
004e538b  FADDP
004e538d  MOV ECX,dword ptr [EBP + -0x1c]
004e5390  IMUL ECX,ECX,0xe00
004e5396  MOV dword ptr [EBP + 0xfffffb5c],ECX
004e539c  FILD dword ptr [EBP + 0xfffffb5c]
004e53a2  FADDP
004e53a4  FMUL double ptr [EBP + -0x10]
004e53a7  CALL 0x00686cc0
004e53ac  MOV EDX,dword ptr [EBP + -0x38]
004e53af  MOV word ptr [EDX + 0x33e],AX
004e53b6  MOV EAX,dword ptr [EBP + -0x28]
004e53b9  IMUL EAX,EAX,0x5400
004e53bf  MOV dword ptr [EBP + 0xfffffb58],EAX
004e53c5  FILD dword ptr [EBP + 0xfffffb58]
004e53cb  FDIV double ptr [0x006b9490]
004e53d1  MOV ECX,dword ptr [EBP + -0x1c]
004e53d4  IMUL ECX,ECX,0xe00
004e53da  MOV dword ptr [EBP + 0xfffffb54],ECX
004e53e0  FILD dword ptr [EBP + 0xfffffb54]
004e53e6  FADDP
004e53e8  FMUL double ptr [EBP + -0x10]
004e53eb  CALL 0x00686cc0
004e53f0  MOV EDX,dword ptr [EBP + -0x38]
004e53f3  MOV word ptr [EDX + 0x340],AX
004e53fa  MOV EAX,dword ptr [EBP + -0x1c]
004e53fd  IMUL EAX,EAX,0x7e00
004e5403  MOV dword ptr [EBP + 0xfffffb50],EAX
004e5409  FILD dword ptr [EBP + 0xfffffb50]
004e540f  FDIV double ptr [0x006b9490]
004e5415  FMUL double ptr [EBP + -0x10]
004e5418  CALL 0x00686cc0
004e541d  MOV ECX,dword ptr [EBP + -0x38]
004e5420  MOV word ptr [ECX + 0x342],AX
004e5427  MOV EDX,dword ptr [EBP + -0x38]
004e542a  MOV word ptr [EDX + 0x288],0x7
004e5433  MOV EAX,dword ptr [EBP + -0x38]
004e5436  MOV word ptr [EAX + 0x28a],0x23
004e543f  MOV ECX,dword ptr [EBP + -0x38]
004e5442  MOV word ptr [ECX + 0x28c],0x2d
004e544b  MOV EDX,dword ptr [EBP + -0x38]
004e544e  MOV word ptr [EDX + 0x28e],0x23
004e5457  MOV EAX,dword ptr [EBP + -0x38]
004e545a  MOV word ptr [EAX + 0x290],0x46
004e5463  MOV ECX,dword ptr [EBP + -0x38]
004e5466  MOV word ptr [ECX + 0x292],0x22
004e546f  MOV EDX,dword ptr [EBP + -0x38]
004e5472  MOV word ptr [EDX + 0x294],0x69
004e547b  MOV EAX,dword ptr [EBP + -0x38]
004e547e  MOV word ptr [EAX + 0x296],0x30
004e5487  MOV ECX,dword ptr [EBP + -0x38]
004e548a  MOV word ptr [ECX + 0x298],0x3c
004e5493  MOV EDX,dword ptr [EBP + -0x38]
004e5496  MOV word ptr [EDX + 0x29a],0x19
004e549f  MOV EAX,dword ptr [EBP + -0x38]
004e54a2  MOV word ptr [EAX + 0x29c],0xc
004e54ab  MOV ECX,dword ptr [EBP + -0x38]
004e54ae  MOV word ptr [ECX + 0x29e],0x23
004e54b7  MOV EDX,dword ptr [EBP + -0x38]
004e54ba  MOV word ptr [EDX + 0x2a0],0x23
004e54c3  MOV EAX,dword ptr [EBP + -0x38]
004e54c6  MOV word ptr [EAX + 0x2a2],0x1b
004e54cf  MOV ECX,dword ptr [EBP + -0x38]
004e54d2  MOV word ptr [ECX + 0x2a4],0x7
004e54db  MOV EDX,dword ptr [EBP + -0x38]
004e54de  MOV word ptr [EDX + 0x2a6],0x19
004e54e7  MOV EAX,dword ptr [EBP + -0x38]
004e54ea  MOV word ptr [EAX + 0x2a8],0x6
004e54f3  MOV ECX,dword ptr [EBP + -0x38]
004e54f6  MOV word ptr [ECX + 0x2aa],0x5a
004e54ff  MOV EDX,dword ptr [EBP + -0x38]
004e5502  MOV word ptr [EDX + 0x2ac],0x28
004e550b  MOV EAX,dword ptr [EBP + -0x38]
004e550e  MOV word ptr [EAX + 0x2ae],0x14
004e5517  MOV ECX,dword ptr [EBP + -0x38]
004e551a  MOV word ptr [ECX + 0x2b0],0x37
004e5523  MOV EDX,dword ptr [EBP + -0x38]
004e5526  MOV word ptr [EDX + 0x2b2],0x46
004e552f  MOV EAX,dword ptr [EBP + -0x38]
004e5532  MOV word ptr [EAX + 0x2b4],0x4
004e553b  MOV ECX,dword ptr [EBP + -0x38]
004e553e  MOV word ptr [ECX + 0x2b6],0x28
004e5547  MOV EDX,dword ptr [EBP + -0x38]
004e554a  MOV word ptr [EDX + 0x2b8],0x19
004e5553  JMP 0x004e9360
004e5558  MOV dword ptr [EBP + -0x20],0x3e8
004e555f  MOV dword ptr [EBP + -0x24],0x3ca
004e5566  MOV dword ptr [EBP + -0x18],0x2bc
004e556d  MOV dword ptr [EBP + -0x14],0x190
004e5574  MOV dword ptr [EBP + -0x34],0x96
004e557b  MOV dword ptr [EBP + -0x28],0x21
004e5582  MOV dword ptr [EBP + -0x1c],0x6
004e5589  FLD double ptr [0x006bfc38]
004e558f  FSTP double ptr [EBP + -0x30]
004e5592  FLD double ptr [0x006bfbc8]
004e5598  FSTP double ptr [EBP + -0x8]
004e559b  FLD double ptr [0x006bfbc0]
004e55a1  FSTP double ptr [EBP + -0x10]
004e55a4  MOV EAX,dword ptr [EBP + -0x38]
004e55a7  MOV word ptr [EAX + 0x2ba],0xf
004e55b0  MOV ECX,dword ptr [EBP + -0x38]
004e55b3  MOV word ptr [ECX + 0x2bc],0x33
004e55bc  MOV EDX,dword ptr [EBP + -0x38]
004e55bf  MOV word ptr [EDX + 0x2be],0x50
004e55c8  MOV EAX,dword ptr [EBP + -0x38]
004e55cb  MOV word ptr [EAX + 0x2c0],0x61
004e55d4  MOV ECX,dword ptr [EBP + -0x38]
004e55d7  MOV word ptr [ECX + 0x2c2],0x72
004e55e0  MOV EDX,dword ptr [EBP + -0x38]
004e55e3  MOV word ptr [EDX + 0x2c4],0x84
004e55ec  MOV EAX,dword ptr [EBP + -0x38]
004e55ef  MOV word ptr [EAX + 0x2c6],0x98
004e55f8  MOV ECX,dword ptr [EBP + -0x38]
004e55fb  MOV word ptr [ECX + 0x2c8],0xac
004e5604  MOV EDX,dword ptr [EBP + -0x38]
004e5607  MOV word ptr [EDX + 0x2ca],0xc1
004e5610  MOV EAX,dword ptr [EBP + -0x38]
004e5613  MOV word ptr [EAX + 0x2cc],0xd8
004e561c  MOV ECX,dword ptr [EBP + -0x38]
004e561f  MOV word ptr [ECX + 0x2ce],0xf0
004e5628  MOV EDX,dword ptr [EBP + -0x38]
004e562b  MOV word ptr [EDX + 0x2d0],0x109
004e5634  MOV EAX,dword ptr [EBP + -0x38]
004e5637  MOV word ptr [EAX + 0x2d2],0xf8
004e5640  MOV ECX,dword ptr [EBP + -0x38]
004e5643  MOV word ptr [ECX + 0x2d4],0x153
004e564c  MOV EDX,dword ptr [EBP + -0x38]
004e564f  MOV word ptr [EDX + 0x2d6],0x16b
004e5658  MOV EAX,dword ptr [EBP + -0x38]
004e565b  MOV word ptr [EAX + 0x2d8],0x215
004e5664  MOV ECX,dword ptr [EBP + -0x38]
004e5667  MOV word ptr [ECX + 0x2da],0x203
004e5670  MOV EDX,dword ptr [EBP + -0x38]
004e5673  MOV word ptr [EDX + 0x2dc],0x215
004e567c  MOV EAX,dword ptr [EBP + -0x38]
004e567f  MOV word ptr [EAX + 0x2de],0x246
004e5688  MOV ECX,dword ptr [EBP + -0x38]
004e568b  MOV word ptr [ECX + 0x2e0],0x286
004e5694  MOV EDX,dword ptr [EBP + -0x38]
004e5697  MOV word ptr [EDX + 0x2e2],0x29d
004e56a0  MOV EAX,dword ptr [EBP + -0x38]
004e56a3  MOV word ptr [EAX + 0x2e4],0x2ea
004e56ac  MOV ECX,dword ptr [EBP + -0x38]
004e56af  MOV word ptr [ECX + 0x2e6],0x30e
004e56b8  MOV EDX,dword ptr [EBP + -0x38]
004e56bb  MOV word ptr [EDX + 0x2e8],0x323
004e56c4  MOV EAX,dword ptr [EBP + -0x38]
004e56c7  MOV word ptr [EAX + 0x2ea],0x32e
004e56d0  MOV ECX,dword ptr [EBP + -0x38]
004e56d3  MOV word ptr [ECX + 0x2ec],0x334
004e56dc  MOV EDX,dword ptr [EBP + -0x38]
004e56df  MOV word ptr [EDX + 0x2ee],0x336
004e56e8  MOV EAX,dword ptr [EBP + -0x38]
004e56eb  MOV word ptr [EAX + 0x2f0],0x379
004e56f4  MOV ECX,dword ptr [EBP + -0x38]
004e56f7  MOV word ptr [ECX + 0x2f2],0x392
004e5700  MOV EDX,dword ptr [EBP + -0x38]
004e5703  MOV word ptr [EDX + 0x2f4],0x3a0
004e570c  MOV EAX,dword ptr [EBP + -0x38]
004e570f  MOV word ptr [EAX + 0x2f6],0x3a6
004e5718  MOV ECX,dword ptr [EBP + -0x38]
004e571b  MOV word ptr [ECX + 0x2f8],0x3a8
004e5724  MOV EDX,dword ptr [EBP + -0x38]
004e5727  MOV word ptr [EDX + 0x2fa],0x3b4
004e5730  MOV EAX,dword ptr [EBP + -0x38]
004e5733  MOV word ptr [EAX + 0x2fc],0x3c3
004e573c  MOV ECX,dword ptr [EBP + -0x38]
004e573f  MOV word ptr [ECX + 0x2fe],0x3cb
004e5748  MOV EDX,dword ptr [EBP + -0x38]
004e574b  MOV word ptr [EDX + 0x300],0x3ce
004e5754  MOV EAX,dword ptr [EBP + -0x38]
004e5757  MOV word ptr [EAX + 0x302],0x3d4
004e5760  MOV ECX,dword ptr [EBP + -0x38]
004e5763  MOV word ptr [ECX + 0x304],0x3dc
004e576c  MOV EDX,dword ptr [EBP + -0x38]
004e576f  MOV word ptr [EDX + 0x306],0x3df
004e5778  MOV EAX,dword ptr [EBP + -0x38]
004e577b  MOV word ptr [EAX + 0x308],0x3e2
004e5784  MOV ECX,dword ptr [EBP + -0x38]
004e5787  MOV word ptr [ECX + 0x30a],0x3e5
004e5790  MOV EDX,dword ptr [EBP + -0x38]
004e5793  MOV word ptr [EDX + 0x30c],0x3e8
004e579c  MOV EAX,dword ptr [EBP + -0x24]
004e579f  SHL EAX,0x2
004e57a2  MOV ECX,dword ptr [EBP + -0x20]
004e57a5  LEA EDX,[EAX + ECX*0x4]
004e57a8  MOV EAX,dword ptr [EBP + -0x18]
004e57ab  LEA ECX,[EDX + EAX*0x4]
004e57ae  MOV EDX,dword ptr [EBP + -0x14]
004e57b1  LEA EAX,[ECX + EDX*0x4]
004e57b4  MOV ECX,dword ptr [EBP + -0x34]
004e57b7  LEA EDX,[EAX + ECX*0x4]
004e57ba  MOV EAX,dword ptr [EBP + -0x28]
004e57bd  LEA ECX,[EDX + EAX*0x4]
004e57c0  MOV EDX,dword ptr [EBP + -0x1c]
004e57c3  LEA EAX,[ECX + EDX*0x4]
004e57c6  MOV dword ptr [EBP + 0xfffffb4c],EAX
004e57cc  FILD dword ptr [EBP + 0xfffffb4c]
004e57d2  FMUL double ptr [EBP + -0x30]
004e57d5  CALL 0x00686cc0
004e57da  MOV ECX,dword ptr [EBP + -0x38]
004e57dd  MOV word ptr [ECX + 0x30e],AX
004e57e4  MOV EDX,dword ptr [EBP + -0x24]
004e57e7  SHL EDX,0x2
004e57ea  MOV EAX,dword ptr [EBP + -0x20]
004e57ed  LEA ECX,[EDX + EAX*0x4]
004e57f0  MOV EDX,dword ptr [EBP + -0x18]
004e57f3  LEA EAX,[ECX + EDX*0x4]
004e57f6  MOV ECX,dword ptr [EBP + -0x14]
004e57f9  LEA EDX,[EAX + ECX*0x4]
004e57fc  MOV EAX,dword ptr [EBP + -0x34]
004e57ff  LEA ECX,[EDX + EAX*0x4]
004e5802  MOV EDX,dword ptr [EBP + -0x28]
004e5805  LEA EAX,[ECX + EDX*0x4]
004e5808  MOV ECX,dword ptr [EBP + -0x1c]
004e580b  LEA EDX,[EAX + ECX*0x4]
004e580e  MOV dword ptr [EBP + 0xfffffb48],EDX
004e5814  FILD dword ptr [EBP + 0xfffffb48]
004e581a  FMUL double ptr [EBP + -0x30]
004e581d  CALL 0x00686cc0
004e5822  MOV ECX,dword ptr [EBP + -0x38]
004e5825  MOV word ptr [ECX + 0x310],AX
004e582c  MOV EDX,dword ptr [EBP + -0x18]
004e582f  SHL EDX,0x2
004e5832  MOV EAX,dword ptr [EBP + -0x24]
004e5835  LEA ECX,[EDX + EAX*0x8]
004e5838  MOV EDX,dword ptr [EBP + -0x14]
004e583b  LEA EAX,[ECX + EDX*0x4]
004e583e  MOV ECX,dword ptr [EBP + -0x34]
004e5841  LEA EDX,[EAX + ECX*0x4]
004e5844  MOV EAX,dword ptr [EBP + -0x28]
004e5847  LEA ECX,[EDX + EAX*0x4]
004e584a  MOV EDX,dword ptr [EBP + -0x1c]
004e584d  LEA EAX,[ECX + EDX*0x4]
004e5850  MOV dword ptr [EBP + 0xfffffb44],EAX
004e5856  FILD dword ptr [EBP + 0xfffffb44]
004e585c  FMUL double ptr [EBP + -0x30]
004e585f  CALL 0x00686cc0
004e5864  MOV ECX,dword ptr [EBP + -0x38]
004e5867  MOV word ptr [ECX + 0x312],AX
004e586e  MOV EDX,dword ptr [EBP + -0x18]
004e5871  IMUL EDX,EDX,0xc
004e5874  MOV EAX,dword ptr [EBP + -0x14]
004e5877  LEA ECX,[EDX + EAX*0x4]
004e587a  MOV EDX,dword ptr [EBP + -0x34]
004e587d  LEA EAX,[ECX + EDX*0x4]
004e5880  MOV ECX,dword ptr [EBP + -0x28]
004e5883  LEA EDX,[EAX + ECX*0x4]
004e5886  MOV EAX,dword ptr [EBP + -0x1c]
004e5889  LEA ECX,[EDX + EAX*0x4]
004e588c  MOV dword ptr [EBP + 0xfffffb40],ECX
004e5892  FILD dword ptr [EBP + 0xfffffb40]
004e5898  FMUL double ptr [EBP + -0x30]
004e589b  CALL 0x00686cc0
004e58a0  MOV EDX,dword ptr [EBP + -0x38]
004e58a3  MOV word ptr [EDX + 0x314],AX
004e58aa  MOV EAX,dword ptr [EBP + -0x14]
004e58ad  SHL EAX,0x4
004e58b0  MOV ECX,dword ptr [EBP + -0x34]
004e58b3  LEA EDX,[EAX + ECX*0x4]
004e58b6  MOV EAX,dword ptr [EBP + -0x28]
004e58b9  LEA ECX,[EDX + EAX*0x4]
004e58bc  MOV EDX,dword ptr [EBP + -0x1c]
004e58bf  LEA EAX,[ECX + EDX*0x4]
004e58c2  MOV dword ptr [EBP + 0xfffffb3c],EAX
004e58c8  FILD dword ptr [EBP + 0xfffffb3c]
004e58ce  FMUL double ptr [EBP + -0x30]
004e58d1  CALL 0x00686cc0
004e58d6  MOV ECX,dword ptr [EBP + -0x38]
004e58d9  MOV word ptr [ECX + 0x316],AX
004e58e0  MOV EDX,dword ptr [EBP + -0x34]
004e58e3  IMUL EDX,EDX,0x14
004e58e6  MOV EAX,dword ptr [EBP + -0x28]
004e58e9  LEA ECX,[EDX + EAX*0x4]
004e58ec  MOV EDX,dword ptr [EBP + -0x1c]
004e58ef  LEA EAX,[ECX + EDX*0x4]
004e58f2  MOV dword ptr [EBP + 0xfffffb38],EAX
004e58f8  FILD dword ptr [EBP + 0xfffffb38]
004e58fe  FMUL double ptr [EBP + -0x30]
004e5901  CALL 0x00686cc0
004e5906  MOV ECX,dword ptr [EBP + -0x38]
004e5909  MOV word ptr [ECX + 0x318],AX
004e5910  MOV EDX,dword ptr [EBP + -0x28]
004e5913  IMUL EDX,EDX,0x18
004e5916  MOV EAX,dword ptr [EBP + -0x1c]
004e5919  LEA ECX,[EDX + EAX*0x4]
004e591c  MOV dword ptr [EBP + 0xfffffb34],ECX
004e5922  FILD dword ptr [EBP + 0xfffffb34]
004e5928  FMUL double ptr [EBP + -0x30]
004e592b  CALL 0x00686cc0
004e5930  MOV EDX,dword ptr [EBP + -0x38]
004e5933  MOV word ptr [EDX + 0x31a],AX
004e593a  MOV EAX,dword ptr [EBP + -0x1c]
004e593d  IMUL EAX,EAX,0x1c
004e5940  MOV dword ptr [EBP + 0xfffffb30],EAX
004e5946  FILD dword ptr [EBP + 0xfffffb30]
004e594c  FMUL double ptr [EBP + -0x30]
004e594f  CALL 0x00686cc0
004e5954  MOV ECX,dword ptr [EBP + -0x38]
004e5957  MOV word ptr [ECX + 0x31c],AX
004e595e  MOV EDX,dword ptr [EBP + -0x20]
004e5961  SHL EDX,0x4
004e5964  MOV EAX,dword ptr [EBP + -0x24]
004e5967  SHL EAX,0x5
004e596a  ADD EDX,EAX
004e596c  MOV ECX,dword ptr [EBP + -0x18]
004e596f  IMUL ECX,ECX,0x30
004e5972  ADD EDX,ECX
004e5974  MOV EAX,dword ptr [EBP + -0x14]
004e5977  SHL EAX,0x6
004e597a  ADD EDX,EAX
004e597c  MOV ECX,dword ptr [EBP + -0x34]
004e597f  IMUL ECX,ECX,0x50
004e5982  ADD EDX,ECX
004e5984  MOV EAX,dword ptr [EBP + -0x28]
004e5987  IMUL EAX,EAX,0x60
004e598a  ADD EDX,EAX
004e598c  MOV ECX,dword ptr [EBP + -0x1c]
004e598f  IMUL ECX,ECX,0x70
004e5992  ADD EDX,ECX
004e5994  MOV dword ptr [EBP + 0xfffffb2c],EDX
004e599a  FILD dword ptr [EBP + 0xfffffb2c]
004e59a0  FMUL double ptr [EBP + -0x8]
004e59a3  CALL 0x00686cc0
004e59a8  MOV EDX,dword ptr [EBP + -0x38]
004e59ab  MOV word ptr [EDX + 0x31e],AX
004e59b2  MOV EAX,dword ptr [EBP + -0x20]
004e59b5  SHL EAX,0x4
004e59b8  MOV ECX,dword ptr [EBP + -0x24]
004e59bb  SHL ECX,0x5
004e59be  ADD EAX,ECX
004e59c0  MOV EDX,dword ptr [EBP + -0x18]
004e59c3  IMUL EDX,EDX,0x30
004e59c6  ADD EAX,EDX
004e59c8  MOV ECX,dword ptr [EBP + -0x14]
004e59cb  SHL ECX,0x6
004e59ce  ADD EAX,ECX
004e59d0  MOV EDX,dword ptr [EBP + -0x34]
004e59d3  IMUL EDX,EDX,0x50
004e59d6  ADD EAX,EDX
004e59d8  MOV ECX,dword ptr [EBP + -0x28]
004e59db  IMUL ECX,ECX,0x60
004e59de  ADD EAX,ECX
004e59e0  MOV EDX,dword ptr [EBP + -0x1c]
004e59e3  IMUL EDX,EDX,0x70
004e59e6  ADD EAX,EDX
004e59e8  MOV dword ptr [EBP + 0xfffffb28],EAX
004e59ee  FILD dword ptr [EBP + 0xfffffb28]
004e59f4  FMUL double ptr [EBP + -0x8]
004e59f7  CALL 0x00686cc0
004e59fc  MOV ECX,dword ptr [EBP + -0x38]
004e59ff  MOV word ptr [ECX + 0x320],AX
004e5a06  MOV EDX,dword ptr [EBP + -0x20]
004e5a09  SHL EDX,0x4
004e5a0c  MOV EAX,dword ptr [EBP + -0x24]
004e5a0f  SHL EAX,0x5
004e5a12  ADD EDX,EAX
004e5a14  MOV ECX,dword ptr [EBP + -0x18]
004e5a17  IMUL ECX,ECX,0x30
004e5a1a  ADD EDX,ECX
004e5a1c  MOV EAX,dword ptr [EBP + -0x14]
004e5a1f  SHL EAX,0x6
004e5a22  ADD EDX,EAX
004e5a24  MOV ECX,dword ptr [EBP + -0x34]
004e5a27  IMUL ECX,ECX,0x50
004e5a2a  ADD EDX,ECX
004e5a2c  MOV EAX,dword ptr [EBP + -0x28]
004e5a2f  IMUL EAX,EAX,0x60
004e5a32  ADD EDX,EAX
004e5a34  MOV ECX,dword ptr [EBP + -0x1c]
004e5a37  IMUL ECX,ECX,0x70
004e5a3a  ADD EDX,ECX
004e5a3c  MOV dword ptr [EBP + 0xfffffb24],EDX
004e5a42  FILD dword ptr [EBP + 0xfffffb24]
004e5a48  FMUL double ptr [EBP + -0x8]
004e5a4b  CALL 0x00686cc0
004e5a50  MOV EDX,dword ptr [EBP + -0x38]
004e5a53  MOV word ptr [EDX + 0x322],AX
004e5a5a  MOV EAX,dword ptr [EBP + -0x24]
004e5a5d  IMUL EAX,EAX,0x60
004e5a60  MOV dword ptr [EBP + 0xfffffb20],EAX
004e5a66  FILD dword ptr [EBP + 0xfffffb20]
004e5a6c  FDIV double ptr [0x006b3740]
004e5a72  MOV ECX,dword ptr [EBP + -0x18]
004e5a75  IMUL ECX,ECX,0x30
004e5a78  MOV dword ptr [EBP + 0xfffffb1c],ECX
004e5a7e  FILD dword ptr [EBP + 0xfffffb1c]
004e5a84  FADDP
004e5a86  MOV EDX,dword ptr [EBP + -0x14]
004e5a89  SHL EDX,0x6
004e5a8c  MOV dword ptr [EBP + 0xfffffb18],EDX
004e5a92  FILD dword ptr [EBP + 0xfffffb18]
004e5a98  FADDP
004e5a9a  MOV EAX,dword ptr [EBP + -0x34]
004e5a9d  IMUL EAX,EAX,0x50
004e5aa0  MOV dword ptr [EBP + 0xfffffb14],EAX
004e5aa6  FILD dword ptr [EBP + 0xfffffb14]
004e5aac  FADDP
004e5aae  MOV ECX,dword ptr [EBP + -0x28]
004e5ab1  IMUL ECX,ECX,0x60
004e5ab4  MOV dword ptr [EBP + 0xfffffb10],ECX
004e5aba  FILD dword ptr [EBP + 0xfffffb10]
004e5ac0  FADDP
004e5ac2  MOV EDX,dword ptr [EBP + -0x1c]
004e5ac5  IMUL EDX,EDX,0x70
004e5ac8  MOV dword ptr [EBP + 0xfffffb0c],EDX
004e5ace  FILD dword ptr [EBP + 0xfffffb0c]
004e5ad4  FADDP
004e5ad6  FMUL double ptr [EBP + -0x8]
004e5ad9  CALL 0x00686cc0
004e5ade  MOV ECX,dword ptr [EBP + -0x38]
004e5ae1  MOV word ptr [ECX + 0x324],AX
004e5ae8  MOV EDX,dword ptr [EBP + -0x18]
004e5aeb  IMUL EDX,EDX,0xc0
004e5af1  MOV dword ptr [EBP + 0xfffffb08],EDX
004e5af7  FILD dword ptr [EBP + 0xfffffb08]
004e5afd  FDIV double ptr [0x006b3740]
004e5b03  MOV EAX,dword ptr [EBP + -0x14]
004e5b06  SHL EAX,0x6
004e5b09  MOV dword ptr [EBP + 0xfffffb04],EAX
004e5b0f  FILD dword ptr [EBP + 0xfffffb04]
004e5b15  FADDP
004e5b17  MOV ECX,dword ptr [EBP + -0x34]
004e5b1a  IMUL ECX,ECX,0x50
004e5b1d  MOV dword ptr [EBP + 0xfffffb00],ECX
004e5b23  FILD dword ptr [EBP + 0xfffffb00]
004e5b29  FADDP
004e5b2b  MOV EDX,dword ptr [EBP + -0x28]
004e5b2e  IMUL EDX,EDX,0x60
004e5b31  MOV dword ptr [EBP + 0xfffffafc],EDX
004e5b37  FILD dword ptr [EBP + 0xfffffafc]
004e5b3d  FADDP
004e5b3f  MOV EAX,dword ptr [EBP + -0x1c]
004e5b42  IMUL EAX,EAX,0x70
004e5b45  MOV dword ptr [EBP + 0xfffffaf8],EAX
004e5b4b  FILD dword ptr [EBP + 0xfffffaf8]
004e5b51  FADDP
004e5b53  FMUL double ptr [EBP + -0x8]
004e5b56  CALL 0x00686cc0
004e5b5b  MOV ECX,dword ptr [EBP + -0x38]
004e5b5e  MOV word ptr [ECX + 0x326],AX
004e5b65  MOV EDX,dword ptr [EBP + -0x14]
004e5b68  IMUL EDX,EDX,0x140
004e5b6e  MOV dword ptr [EBP + 0xfffffaf4],EDX
004e5b74  FILD dword ptr [EBP + 0xfffffaf4]
004e5b7a  FDIV double ptr [0x006b3740]
004e5b80  MOV EAX,dword ptr [EBP + -0x34]
004e5b83  IMUL EAX,EAX,0x50
004e5b86  MOV dword ptr [EBP + 0xfffffaf0],EAX
004e5b8c  FILD dword ptr [EBP + 0xfffffaf0]
004e5b92  FADDP
004e5b94  MOV ECX,dword ptr [EBP + -0x28]
004e5b97  IMUL ECX,ECX,0x60
004e5b9a  MOV dword ptr [EBP + 0xfffffaec],ECX
004e5ba0  FILD dword ptr [EBP + 0xfffffaec]
004e5ba6  FADDP
004e5ba8  MOV EDX,dword ptr [EBP + -0x1c]
004e5bab  IMUL EDX,EDX,0x70
004e5bae  MOV dword ptr [EBP + 0xfffffae8],EDX
004e5bb4  FILD dword ptr [EBP + 0xfffffae8]
004e5bba  FADDP
004e5bbc  FMUL double ptr [EBP + -0x8]
004e5bbf  CALL 0x00686cc0
004e5bc4  MOV ECX,dword ptr [EBP + -0x38]
004e5bc7  MOV word ptr [ECX + 0x328],AX
004e5bce  MOV EDX,dword ptr [EBP + -0x34]
004e5bd1  IMUL EDX,EDX,0x1e0
004e5bd7  MOV dword ptr [EBP + 0xfffffae4],EDX
004e5bdd  FILD dword ptr [EBP + 0xfffffae4]
004e5be3  FDIV double ptr [0x006b3740]
004e5be9  MOV EAX,dword ptr [EBP + -0x28]
004e5bec  IMUL EAX,EAX,0x60
004e5bef  MOV dword ptr [EBP + 0xfffffae0],EAX
004e5bf5  FILD dword ptr [EBP + 0xfffffae0]
004e5bfb  FADDP
004e5bfd  MOV ECX,dword ptr [EBP + -0x1c]
004e5c00  IMUL ECX,ECX,0x70
004e5c03  MOV dword ptr [EBP + 0xfffffadc],ECX
004e5c09  FILD dword ptr [EBP + 0xfffffadc]
004e5c0f  FADDP
004e5c11  FMUL double ptr [EBP + -0x8]
004e5c14  CALL 0x00686cc0
004e5c19  MOV EDX,dword ptr [EBP + -0x38]
004e5c1c  MOV word ptr [EDX + 0x32a],AX
004e5c23  MOV EAX,dword ptr [EBP + -0x28]
004e5c26  IMUL EAX,EAX,0x2a0
004e5c2c  MOV dword ptr [EBP + 0xfffffad8],EAX
004e5c32  FILD dword ptr [EBP + 0xfffffad8]
004e5c38  FDIV double ptr [0x006b3740]
004e5c3e  MOV ECX,dword ptr [EBP + -0x1c]
004e5c41  IMUL ECX,ECX,0x70
004e5c44  MOV dword ptr [EBP + 0xfffffad4],ECX
004e5c4a  FILD dword ptr [EBP + 0xfffffad4]
004e5c50  FADDP
004e5c52  FMUL double ptr [EBP + -0x8]
004e5c55  CALL 0x00686cc0
004e5c5a  MOV EDX,dword ptr [EBP + -0x38]
004e5c5d  MOV word ptr [EDX + 0x32c],AX
004e5c64  MOV EAX,dword ptr [EBP + -0x1c]
004e5c67  IMUL EAX,EAX,0x380
004e5c6d  MOV dword ptr [EBP + 0xfffffad0],EAX
004e5c73  FILD dword ptr [EBP + 0xfffffad0]
004e5c79  FDIV double ptr [0x006b3740]
004e5c7f  FMUL double ptr [EBP + -0x8]
004e5c82  CALL 0x00686cc0
004e5c87  MOV ECX,dword ptr [EBP + -0x38]
004e5c8a  MOV word ptr [ECX + 0x32e],AX
004e5c91  MOV EDX,dword ptr [EBP + -0x20]
004e5c94  SHL EDX,0x7
004e5c97  MOV EAX,dword ptr [EBP + -0x24]
004e5c9a  IMUL EAX,EAX,0x180
004e5ca0  ADD EDX,EAX
004e5ca2  MOV ECX,dword ptr [EBP + -0x18]
004e5ca5  IMUL ECX,ECX,0x300
004e5cab  ADD EDX,ECX
004e5cad  MOV EAX,dword ptr [EBP + -0x14]
004e5cb0  IMUL EAX,EAX,0x500
004e5cb6  ADD EDX,EAX
004e5cb8  MOV ECX,dword ptr [EBP + -0x34]
004e5cbb  IMUL ECX,ECX,0x780
004e5cc1  ADD EDX,ECX
004e5cc3  MOV EAX,dword ptr [EBP + -0x28]
004e5cc6  IMUL EAX,EAX,0xa80
004e5ccc  ADD EDX,EAX
004e5cce  MOV ECX,dword ptr [EBP + -0x1c]
004e5cd1  IMUL ECX,ECX,0xe00
004e5cd7  ADD EDX,ECX
004e5cd9  MOV dword ptr [EBP + 0xfffffacc],EDX
004e5cdf  FILD dword ptr [EBP + 0xfffffacc]
004e5ce5  FMUL double ptr [EBP + -0x10]
004e5ce8  CALL 0x00686cc0
004e5ced  MOV EDX,dword ptr [EBP + -0x38]
004e5cf0  MOV word ptr [EDX + 0x330],AX
004e5cf7  MOV EAX,dword ptr [EBP + -0x20]
004e5cfa  SHL EAX,0x7
004e5cfd  MOV ECX,dword ptr [EBP + -0x24]
004e5d00  IMUL ECX,ECX,0x180
004e5d06  ADD EAX,ECX
004e5d08  MOV EDX,dword ptr [EBP + -0x18]
004e5d0b  IMUL EDX,EDX,0x300
004e5d11  ADD EAX,EDX
004e5d13  MOV ECX,dword ptr [EBP + -0x14]
004e5d16  IMUL ECX,ECX,0x500
004e5d1c  ADD EAX,ECX
004e5d1e  MOV EDX,dword ptr [EBP + -0x34]
004e5d21  IMUL EDX,EDX,0x780
004e5d27  ADD EAX,EDX
004e5d29  MOV ECX,dword ptr [EBP + -0x28]
004e5d2c  IMUL ECX,ECX,0xa80
004e5d32  ADD EAX,ECX
004e5d34  MOV EDX,dword ptr [EBP + -0x1c]
004e5d37  IMUL EDX,EDX,0xe00
004e5d3d  ADD EAX,EDX
004e5d3f  MOV dword ptr [EBP + 0xfffffac8],EAX
004e5d45  FILD dword ptr [EBP + 0xfffffac8]
004e5d4b  FMUL double ptr [EBP + -0x10]
004e5d4e  CALL 0x00686cc0
004e5d53  MOV ECX,dword ptr [EBP + -0x38]
004e5d56  MOV word ptr [ECX + 0x332],AX
004e5d5d  MOV EDX,dword ptr [EBP + -0x20]
004e5d60  SHL EDX,0x7
004e5d63  MOV EAX,dword ptr [EBP + -0x24]
004e5d66  IMUL EAX,EAX,0x180
004e5d6c  ADD EDX,EAX
004e5d6e  MOV ECX,dword ptr [EBP + -0x18]
004e5d71  IMUL ECX,ECX,0x300
004e5d77  ADD EDX,ECX
004e5d79  MOV EAX,dword ptr [EBP + -0x14]
004e5d7c  IMUL EAX,EAX,0x500
004e5d82  ADD EDX,EAX
004e5d84  MOV ECX,dword ptr [EBP + -0x34]
004e5d87  IMUL ECX,ECX,0x780
004e5d8d  ADD EDX,ECX
004e5d8f  MOV EAX,dword ptr [EBP + -0x28]
004e5d92  IMUL EAX,EAX,0xa80
004e5d98  ADD EDX,EAX
004e5d9a  MOV ECX,dword ptr [EBP + -0x1c]
004e5d9d  IMUL ECX,ECX,0xe00
004e5da3  ADD EDX,ECX
004e5da5  MOV dword ptr [EBP + 0xfffffac4],EDX
004e5dab  FILD dword ptr [EBP + 0xfffffac4]
004e5db1  FMUL double ptr [EBP + -0x10]
004e5db4  CALL 0x00686cc0
004e5db9  MOV EDX,dword ptr [EBP + -0x38]
004e5dbc  MOV word ptr [EDX + 0x334],AX
004e5dc3  MOV EAX,dword ptr [EBP + -0x20]
004e5dc6  SHL EAX,0x7
004e5dc9  MOV ECX,dword ptr [EBP + -0x24]
004e5dcc  IMUL ECX,ECX,0x180
004e5dd2  ADD EAX,ECX
004e5dd4  MOV EDX,dword ptr [EBP + -0x18]
004e5dd7  IMUL EDX,EDX,0x300
004e5ddd  ADD EAX,EDX
004e5ddf  MOV ECX,dword ptr [EBP + -0x14]
004e5de2  IMUL ECX,ECX,0x500
004e5de8  ADD EAX,ECX
004e5dea  MOV EDX,dword ptr [EBP + -0x34]
004e5ded  IMUL EDX,EDX,0x780
004e5df3  ADD EAX,EDX
004e5df5  MOV ECX,dword ptr [EBP + -0x28]
004e5df8  IMUL ECX,ECX,0xa80
004e5dfe  ADD EAX,ECX
004e5e00  MOV EDX,dword ptr [EBP + -0x1c]
004e5e03  IMUL EDX,EDX,0xe00
004e5e09  ADD EAX,EDX
004e5e0b  MOV dword ptr [EBP + 0xfffffac0],EAX
004e5e11  FILD dword ptr [EBP + 0xfffffac0]
004e5e17  FMUL double ptr [EBP + -0x10]
004e5e1a  CALL 0x00686cc0
004e5e1f  MOV ECX,dword ptr [EBP + -0x38]
004e5e22  MOV word ptr [ECX + 0x336],AX
004e5e29  MOV EDX,dword ptr [EBP + -0x24]
004e5e2c  IMUL EDX,EDX,0x600
004e5e32  MOV dword ptr [EBP + 0xfffffabc],EDX
004e5e38  FILD dword ptr [EBP + 0xfffffabc]
004e5e3e  FDIV double ptr [0x006b9490]
004e5e44  MOV EAX,dword ptr [EBP + -0x18]
004e5e47  IMUL EAX,EAX,0x300
004e5e4d  MOV dword ptr [EBP + 0xfffffab8],EAX
004e5e53  FILD dword ptr [EBP + 0xfffffab8]
004e5e59  FADDP
004e5e5b  MOV ECX,dword ptr [EBP + -0x14]
004e5e5e  IMUL ECX,ECX,0x500
004e5e64  MOV dword ptr [EBP + 0xfffffab4],ECX
004e5e6a  FILD dword ptr [EBP + 0xfffffab4]
004e5e70  FADDP
004e5e72  MOV EDX,dword ptr [EBP + -0x34]
004e5e75  IMUL EDX,EDX,0x780
004e5e7b  MOV dword ptr [EBP + 0xfffffab0],EDX
004e5e81  FILD dword ptr [EBP + 0xfffffab0]
004e5e87  FADDP
004e5e89  MOV EAX,dword ptr [EBP + -0x28]
004e5e8c  IMUL EAX,EAX,0xa80
004e5e92  MOV dword ptr [EBP + 0xfffffaac],EAX
004e5e98  FILD dword ptr [EBP + 0xfffffaac]
004e5e9e  FADDP
004e5ea0  MOV ECX,dword ptr [EBP + -0x1c]
004e5ea3  IMUL ECX,ECX,0xe00
004e5ea9  MOV dword ptr [EBP + 0xfffffaa8],ECX
004e5eaf  FILD dword ptr [EBP + 0xfffffaa8]
004e5eb5  FADDP
004e5eb7  FMUL double ptr [EBP + -0x10]
004e5eba  CALL 0x00686cc0
004e5ebf  MOV EDX,dword ptr [EBP + -0x38]
004e5ec2  MOV word ptr [EDX + 0x338],AX
004e5ec9  MOV EAX,dword ptr [EBP + -0x18]
004e5ecc  IMUL EAX,EAX,0xf00
004e5ed2  MOV dword ptr [EBP + 0xfffffaa4],EAX
004e5ed8  FILD dword ptr [EBP + 0xfffffaa4]
004e5ede  FDIV double ptr [0x006b9490]
004e5ee4  MOV ECX,dword ptr [EBP + -0x14]
004e5ee7  IMUL ECX,ECX,0x500
004e5eed  MOV dword ptr [EBP + 0xfffffaa0],ECX
004e5ef3  FILD dword ptr [EBP + 0xfffffaa0]
004e5ef9  FADDP
004e5efb  MOV EDX,dword ptr [EBP + -0x34]
004e5efe  IMUL EDX,EDX,0x780
004e5f04  MOV dword ptr [EBP + 0xfffffa9c],EDX
004e5f0a  FILD dword ptr [EBP + 0xfffffa9c]
004e5f10  FADDP
004e5f12  MOV EAX,dword ptr [EBP + -0x28]
004e5f15  IMUL EAX,EAX,0xa80
004e5f1b  MOV dword ptr [EBP + 0xfffffa98],EAX
004e5f21  FILD dword ptr [EBP + 0xfffffa98]
004e5f27  FADDP
004e5f29  MOV ECX,dword ptr [EBP + -0x1c]
004e5f2c  IMUL ECX,ECX,0xe00
004e5f32  MOV dword ptr [EBP + 0xfffffa94],ECX
004e5f38  FILD dword ptr [EBP + 0xfffffa94]
004e5f3e  FADDP
004e5f40  FMUL double ptr [EBP + -0x10]
004e5f43  CALL 0x00686cc0
004e5f48  MOV EDX,dword ptr [EBP + -0x38]
004e5f4b  MOV word ptr [EDX + 0x33a],AX
004e5f52  MOV EAX,dword ptr [EBP + -0x14]
004e5f55  IMUL EAX,EAX,0x1e00
004e5f5b  MOV dword ptr [EBP + 0xfffffa90],EAX
004e5f61  FILD dword ptr [EBP + 0xfffffa90]
004e5f67  FDIV double ptr [0x006b9490]
004e5f6d  MOV ECX,dword ptr [EBP + -0x34]
004e5f70  IMUL ECX,ECX,0x780
004e5f76  MOV dword ptr [EBP + 0xfffffa8c],ECX
004e5f7c  FILD dword ptr [EBP + 0xfffffa8c]
004e5f82  FADDP
004e5f84  MOV EDX,dword ptr [EBP + -0x28]
004e5f87  IMUL EDX,EDX,0xa80
004e5f8d  MOV dword ptr [EBP + 0xfffffa88],EDX
004e5f93  FILD dword ptr [EBP + 0xfffffa88]
004e5f99  FADDP
004e5f9b  MOV EAX,dword ptr [EBP + -0x1c]
004e5f9e  IMUL EAX,EAX,0xe00
004e5fa4  MOV dword ptr [EBP + 0xfffffa84],EAX
004e5faa  FILD dword ptr [EBP + 0xfffffa84]
004e5fb0  FADDP
004e5fb2  FMUL double ptr [EBP + -0x10]
004e5fb5  CALL 0x00686cc0
004e5fba  MOV ECX,dword ptr [EBP + -0x38]
004e5fbd  MOV word ptr [ECX + 0x33c],AX
004e5fc4  MOV EDX,dword ptr [EBP + -0x34]
004e5fc7  IMUL EDX,EDX,0x3480
004e5fcd  MOV dword ptr [EBP + 0xfffffa80],EDX
004e5fd3  FILD dword ptr [EBP + 0xfffffa80]
004e5fd9  FDIV double ptr [0x006b9490]
004e5fdf  MOV EAX,dword ptr [EBP + -0x28]
004e5fe2  IMUL EAX,EAX,0xa80
004e5fe8  MOV dword ptr [EBP + 0xfffffa7c],EAX
004e5fee  FILD dword ptr [EBP + 0xfffffa7c]
004e5ff4  FADDP
004e5ff6  MOV ECX,dword ptr [EBP + -0x1c]
004e5ff9  IMUL ECX,ECX,0xe00
004e5fff  MOV dword ptr [EBP + 0xfffffa78],ECX
004e6005  FILD dword ptr [EBP + 0xfffffa78]
004e600b  FADDP
004e600d  FMUL double ptr [EBP + -0x10]
004e6010  CALL 0x00686cc0
004e6015  MOV EDX,dword ptr [EBP + -0x38]
004e6018  MOV word ptr [EDX + 0x33e],AX
004e601f  MOV EAX,dword ptr [EBP + -0x28]
004e6022  IMUL EAX,EAX,0x5400
004e6028  MOV dword ptr [EBP + 0xfffffa74],EAX
004e602e  FILD dword ptr [EBP + 0xfffffa74]
004e6034  FDIV double ptr [0x006b9490]
004e603a  MOV ECX,dword ptr [EBP + -0x1c]
004e603d  IMUL ECX,ECX,0xe00
004e6043  MOV dword ptr [EBP + 0xfffffa70],ECX
004e6049  FILD dword ptr [EBP + 0xfffffa70]
004e604f  FADDP
004e6051  FMUL double ptr [EBP + -0x10]
004e6054  CALL 0x00686cc0
004e6059  MOV EDX,dword ptr [EBP + -0x38]
004e605c  MOV word ptr [EDX + 0x340],AX
004e6063  MOV EAX,dword ptr [EBP + -0x1c]
004e6066  IMUL EAX,EAX,0x7e00
004e606c  MOV dword ptr [EBP + 0xfffffa6c],EAX
004e6072  FILD dword ptr [EBP + 0xfffffa6c]
004e6078  FDIV double ptr [0x006b9490]
004e607e  FMUL double ptr [EBP + -0x10]
004e6081  CALL 0x00686cc0
004e6086  MOV ECX,dword ptr [EBP + -0x38]
004e6089  MOV word ptr [ECX + 0x342],AX
004e6090  MOV EDX,dword ptr [EBP + -0x38]
004e6093  MOV word ptr [EDX + 0x288],0x0
004e609c  MOV EAX,dword ptr [EBP + -0x38]
004e609f  MOV word ptr [EAX + 0x28a],0x28
004e60a8  MOV ECX,dword ptr [EBP + -0x38]
004e60ab  MOV word ptr [ECX + 0x28c],0x41
004e60b4  MOV EDX,dword ptr [EBP + -0x38]
004e60b7  MOV word ptr [EDX + 0x28e],0x64
004e60c0  MOV EAX,dword ptr [EBP + -0x38]
004e60c3  MOV word ptr [EAX + 0x290],0x69
004e60cc  MOV ECX,dword ptr [EBP + -0x38]
004e60cf  MOV word ptr [ECX + 0x292],0x36
004e60d8  MOV EDX,dword ptr [EBP + -0x38]
004e60db  MOV word ptr [EDX + 0x294],0x96
004e60e4  MOV EAX,dword ptr [EBP + -0x38]
004e60e7  MOV word ptr [EAX + 0x296],0x46
004e60f0  MOV ECX,dword ptr [EBP + -0x38]
004e60f3  MOV word ptr [ECX + 0x298],0x50
004e60fc  MOV EDX,dword ptr [EBP + -0x38]
004e60ff  MOV word ptr [EDX + 0x29a],0x1e
004e6108  MOV EAX,dword ptr [EBP + -0x38]
004e610b  MOV word ptr [EAX + 0x29c],0xf
004e6114  MOV ECX,dword ptr [EBP + -0x38]
004e6117  MOV word ptr [ECX + 0x29e],0x1e
004e6120  MOV EDX,dword ptr [EBP + -0x38]
004e6123  MOV word ptr [EDX + 0x2a0],0x2e
004e612c  MOV EAX,dword ptr [EBP + -0x38]
004e612f  MOV word ptr [EAX + 0x2a2],0x1e
004e6138  MOV ECX,dword ptr [EBP + -0x38]
004e613b  MOV word ptr [ECX + 0x2a4],0xf
004e6144  MOV EDX,dword ptr [EBP + -0x38]
004e6147  MOV word ptr [EDX + 0x2a6],0x5
004e6150  MOV EAX,dword ptr [EBP + -0x38]
004e6153  MOV word ptr [EAX + 0x2a8],0x8
004e615c  MOV ECX,dword ptr [EBP + -0x38]
004e615f  MOV word ptr [ECX + 0x2aa],0x41
004e6168  MOV EDX,dword ptr [EBP + -0x38]
004e616b  MOV word ptr [EDX + 0x2ac],0x23
004e6174  MOV EAX,dword ptr [EBP + -0x38]
004e6177  MOV word ptr [EAX + 0x2ae],0xf
004e6180  MOV ECX,dword ptr [EBP + -0x38]
004e6183  MOV word ptr [ECX + 0x2b0],0x4b
004e618c  MOV EDX,dword ptr [EBP + -0x38]
004e618f  MOV word ptr [EDX + 0x2b2],0x4b
004e6198  MOV EAX,dword ptr [EBP + -0x38]
004e619b  MOV word ptr [EAX + 0x2b4],0x2
004e61a4  MOV ECX,dword ptr [EBP + -0x38]
004e61a7  MOV word ptr [ECX + 0x2b6],0x50
004e61b0  MOV EDX,dword ptr [EBP + -0x38]
004e61b3  MOV word ptr [EDX + 0x2b8],0xc
004e61bc  JMP 0x004e9360
004e61c1  MOV dword ptr [EBP + -0x20],0x3e8
004e61c8  MOV dword ptr [EBP + -0x24],0x3ca
004e61cf  MOV dword ptr [EBP + -0x18],0x384
004e61d6  MOV dword ptr [EBP + -0x14],0x2ee
004e61dd  MOV dword ptr [EBP + -0x34],0x190
004e61e4  MOV dword ptr [EBP + -0x28],0x64
004e61eb  MOV dword ptr [EBP + -0x1c],0x14
004e61f2  FLD double ptr [0x006bfc38]
004e61f8  FSTP double ptr [EBP + -0x30]
004e61fb  FLD double ptr [0x006bfbb8]
004e6201  FSTP double ptr [EBP + -0x8]
004e6204  FLD double ptr [0x006bfbb0]
004e620a  FSTP double ptr [EBP + -0x10]
004e620d  MOV EAX,dword ptr [EBP + -0x38]
004e6210  MOV word ptr [EAX + 0x2ba],0xf
004e6219  MOV ECX,dword ptr [EBP + -0x38]
004e621c  MOV word ptr [ECX + 0x2bc],0x33
004e6225  MOV EDX,dword ptr [EBP + -0x38]
004e6228  MOV word ptr [EDX + 0x2be],0x50
004e6231  MOV EAX,dword ptr [EBP + -0x38]
004e6234  MOV word ptr [EAX + 0x2c0],0x61
004e623d  MOV ECX,dword ptr [EBP + -0x38]
004e6240  MOV word ptr [ECX + 0x2c2],0x72
004e6249  MOV EDX,dword ptr [EBP + -0x38]
004e624c  MOV word ptr [EDX + 0x2c4],0x84
004e6255  MOV EAX,dword ptr [EBP + -0x38]
004e6258  MOV word ptr [EAX + 0x2c6],0x98
004e6261  MOV ECX,dword ptr [EBP + -0x38]
004e6264  MOV word ptr [ECX + 0x2c8],0xac
004e626d  MOV EDX,dword ptr [EBP + -0x38]
004e6270  MOV word ptr [EDX + 0x2ca],0xc1
004e6279  MOV EAX,dword ptr [EBP + -0x38]
004e627c  MOV word ptr [EAX + 0x2cc],0xd8
004e6285  MOV ECX,dword ptr [EBP + -0x38]
004e6288  MOV word ptr [ECX + 0x2ce],0xf0
004e6291  MOV EDX,dword ptr [EBP + -0x38]
004e6294  MOV word ptr [EDX + 0x2d0],0x109
004e629d  MOV EAX,dword ptr [EBP + -0x38]
004e62a0  MOV word ptr [EAX + 0x2d2],0x15c
004e62a9  MOV ECX,dword ptr [EBP + -0x38]
004e62ac  MOV word ptr [ECX + 0x2d4],0x1b7
004e62b5  MOV EDX,dword ptr [EBP + -0x38]
004e62b8  MOV word ptr [EDX + 0x2d6],0x1cf
004e62c1  MOV EAX,dword ptr [EBP + -0x38]
004e62c4  MOV word ptr [EAX + 0x2d8],0x215
004e62cd  MOV ECX,dword ptr [EBP + -0x38]
004e62d0  MOV word ptr [ECX + 0x2da],0x267
004e62d9  MOV EDX,dword ptr [EBP + -0x38]
004e62dc  MOV word ptr [EDX + 0x2dc],0x279
004e62e5  MOV EAX,dword ptr [EBP + -0x38]
004e62e8  MOV word ptr [EAX + 0x2de],0x2aa
004e62f1  MOV ECX,dword ptr [EBP + -0x38]
004e62f4  MOV word ptr [ECX + 0x2e0],0x2ea
004e62fd  MOV EDX,dword ptr [EBP + -0x38]
004e6300  MOV word ptr [EDX + 0x2e2],0x301
004e6309  MOV EAX,dword ptr [EBP + -0x38]
004e630c  MOV word ptr [EAX + 0x2e4],0x31c
004e6315  MOV ECX,dword ptr [EBP + -0x38]
004e6318  MOV word ptr [ECX + 0x2e6],0x340
004e6321  MOV EDX,dword ptr [EBP + -0x38]
004e6324  MOV word ptr [EDX + 0x2e8],0x355
004e632d  MOV EAX,dword ptr [EBP + -0x38]
004e6330  MOV word ptr [EAX + 0x2ea],0x360
004e6339  MOV ECX,dword ptr [EBP + -0x38]
004e633c  MOV word ptr [ECX + 0x2ec],0x366
004e6345  MOV EDX,dword ptr [EBP + -0x38]
004e6348  MOV word ptr [EDX + 0x2ee],0x368
004e6351  MOV EAX,dword ptr [EBP + -0x38]
004e6354  MOV word ptr [EAX + 0x2f0],0x379
004e635d  MOV ECX,dword ptr [EBP + -0x38]
004e6360  MOV word ptr [ECX + 0x2f2],0x392
004e6369  MOV EDX,dword ptr [EBP + -0x38]
004e636c  MOV word ptr [EDX + 0x2f4],0x3a0
004e6375  MOV EAX,dword ptr [EBP + -0x38]
004e6378  MOV word ptr [EAX + 0x2f6],0x3a6
004e6381  MOV ECX,dword ptr [EBP + -0x38]
004e6384  MOV word ptr [ECX + 0x2f8],0x3a8
004e638d  MOV EDX,dword ptr [EBP + -0x38]
004e6390  MOV word ptr [EDX + 0x2fa],0x3b4
004e6399  MOV EAX,dword ptr [EBP + -0x38]
004e639c  MOV word ptr [EAX + 0x2fc],0x3c3
004e63a5  MOV ECX,dword ptr [EBP + -0x38]
004e63a8  MOV word ptr [ECX + 0x2fe],0x3cb
004e63b1  MOV EDX,dword ptr [EBP + -0x38]
004e63b4  MOV word ptr [EDX + 0x300],0x3ce
004e63bd  MOV EAX,dword ptr [EBP + -0x38]
004e63c0  MOV word ptr [EAX + 0x302],0x3d4
004e63c9  MOV ECX,dword ptr [EBP + -0x38]
004e63cc  MOV word ptr [ECX + 0x304],0x3dc
004e63d5  MOV EDX,dword ptr [EBP + -0x38]
004e63d8  MOV word ptr [EDX + 0x306],0x3df
004e63e1  MOV EAX,dword ptr [EBP + -0x38]
004e63e4  MOV word ptr [EAX + 0x308],0x3e2
004e63ed  MOV ECX,dword ptr [EBP + -0x38]
004e63f0  MOV word ptr [ECX + 0x30a],0x3e5
004e63f9  MOV EDX,dword ptr [EBP + -0x38]
004e63fc  MOV word ptr [EDX + 0x30c],0x3e8
004e6405  MOV EAX,dword ptr [EBP + -0x24]
004e6408  SHL EAX,0x2
004e640b  MOV ECX,dword ptr [EBP + -0x20]
004e640e  LEA EDX,[EAX + ECX*0x4]
004e6411  MOV EAX,dword ptr [EBP + -0x18]
004e6414  LEA ECX,[EDX + EAX*0x4]
004e6417  MOV EDX,dword ptr [EBP + -0x14]
004e641a  LEA EAX,[ECX + EDX*0x4]
004e641d  MOV ECX,dword ptr [EBP + -0x34]
004e6420  LEA EDX,[EAX + ECX*0x4]
004e6423  MOV EAX,dword ptr [EBP + -0x28]
004e6426  LEA ECX,[EDX + EAX*0x4]
004e6429  MOV EDX,dword ptr [EBP + -0x1c]
004e642c  LEA EAX,[ECX + EDX*0x4]
004e642f  MOV dword ptr [EBP + 0xfffffa68],EAX
004e6435  FILD dword ptr [EBP + 0xfffffa68]
004e643b  FMUL double ptr [EBP + -0x30]
004e643e  CALL 0x00686cc0
004e6443  MOV ECX,dword ptr [EBP + -0x38]
004e6446  MOV word ptr [ECX + 0x30e],AX
004e644d  MOV EDX,dword ptr [EBP + -0x24]
004e6450  SHL EDX,0x2
004e6453  MOV EAX,dword ptr [EBP + -0x20]
004e6456  LEA ECX,[EDX + EAX*0x4]
004e6459  MOV EDX,dword ptr [EBP + -0x18]
004e645c  LEA EAX,[ECX + EDX*0x4]
004e645f  MOV ECX,dword ptr [EBP + -0x14]
004e6462  LEA EDX,[EAX + ECX*0x4]
004e6465  MOV EAX,dword ptr [EBP + -0x34]
004e6468  LEA ECX,[EDX + EAX*0x4]
004e646b  MOV EDX,dword ptr [EBP + -0x28]
004e646e  LEA EAX,[ECX + EDX*0x4]
004e6471  MOV ECX,dword ptr [EBP + -0x1c]
004e6474  LEA EDX,[EAX + ECX*0x4]
004e6477  MOV dword ptr [EBP + 0xfffffa64],EDX
004e647d  FILD dword ptr [EBP + 0xfffffa64]
004e6483  FMUL double ptr [EBP + -0x30]
004e6486  CALL 0x00686cc0
004e648b  MOV ECX,dword ptr [EBP + -0x38]
004e648e  MOV word ptr [ECX + 0x310],AX
004e6495  MOV EDX,dword ptr [EBP + -0x18]
004e6498  SHL EDX,0x2
004e649b  MOV EAX,dword ptr [EBP + -0x24]
004e649e  LEA ECX,[EDX + EAX*0x8]
004e64a1  MOV EDX,dword ptr [EBP + -0x14]
004e64a4  LEA EAX,[ECX + EDX*0x4]
004e64a7  MOV ECX,dword ptr [EBP + -0x34]
004e64aa  LEA EDX,[EAX + ECX*0x4]
004e64ad  MOV EAX,dword ptr [EBP + -0x28]
004e64b0  LEA ECX,[EDX + EAX*0x4]
004e64b3  MOV EDX,dword ptr [EBP + -0x1c]
004e64b6  LEA EAX,[ECX + EDX*0x4]
004e64b9  MOV dword ptr [EBP + 0xfffffa60],EAX
004e64bf  FILD dword ptr [EBP + 0xfffffa60]
004e64c5  FMUL double ptr [EBP + -0x30]
004e64c8  CALL 0x00686cc0
004e64cd  MOV ECX,dword ptr [EBP + -0x38]
004e64d0  MOV word ptr [ECX + 0x312],AX
004e64d7  MOV EDX,dword ptr [EBP + -0x18]
004e64da  IMUL EDX,EDX,0xc
004e64dd  MOV EAX,dword ptr [EBP + -0x14]
004e64e0  LEA ECX,[EDX + EAX*0x4]
004e64e3  MOV EDX,dword ptr [EBP + -0x34]
004e64e6  LEA EAX,[ECX + EDX*0x4]
004e64e9  MOV ECX,dword ptr [EBP + -0x28]
004e64ec  LEA EDX,[EAX + ECX*0x4]
004e64ef  MOV EAX,dword ptr [EBP + -0x1c]
004e64f2  LEA ECX,[EDX + EAX*0x4]
004e64f5  MOV dword ptr [EBP + 0xfffffa5c],ECX
004e64fb  FILD dword ptr [EBP + 0xfffffa5c]
004e6501  FMUL double ptr [EBP + -0x30]
004e6504  CALL 0x00686cc0
004e6509  MOV EDX,dword ptr [EBP + -0x38]
004e650c  MOV word ptr [EDX + 0x314],AX
004e6513  MOV EAX,dword ptr [EBP + -0x14]
004e6516  SHL EAX,0x4
004e6519  MOV ECX,dword ptr [EBP + -0x34]
004e651c  LEA EDX,[EAX + ECX*0x4]
004e651f  MOV EAX,dword ptr [EBP + -0x28]
004e6522  LEA ECX,[EDX + EAX*0x4]
004e6525  MOV EDX,dword ptr [EBP + -0x1c]
004e6528  LEA EAX,[ECX + EDX*0x4]
004e652b  MOV dword ptr [EBP + 0xfffffa58],EAX
004e6531  FILD dword ptr [EBP + 0xfffffa58]
004e6537  FMUL double ptr [EBP + -0x30]
004e653a  CALL 0x00686cc0
004e653f  MOV ECX,dword ptr [EBP + -0x38]
004e6542  MOV word ptr [ECX + 0x316],AX
004e6549  MOV EDX,dword ptr [EBP + -0x34]
004e654c  IMUL EDX,EDX,0x14
004e654f  MOV EAX,dword ptr [EBP + -0x28]
004e6552  LEA ECX,[EDX + EAX*0x4]
004e6555  MOV EDX,dword ptr [EBP + -0x1c]
004e6558  LEA EAX,[ECX + EDX*0x4]
004e655b  MOV dword ptr [EBP + 0xfffffa54],EAX
004e6561  FILD dword ptr [EBP + 0xfffffa54]
004e6567  FMUL double ptr [EBP + -0x30]
004e656a  CALL 0x00686cc0
004e656f  MOV ECX,dword ptr [EBP + -0x38]
004e6572  MOV word ptr [ECX + 0x318],AX
004e6579  MOV EDX,dword ptr [EBP + -0x28]
004e657c  IMUL EDX,EDX,0x18
004e657f  MOV EAX,dword ptr [EBP + -0x1c]
004e6582  LEA ECX,[EDX + EAX*0x4]
004e6585  MOV dword ptr [EBP + 0xfffffa50],ECX
004e658b  FILD dword ptr [EBP + 0xfffffa50]
004e6591  FMUL double ptr [EBP + -0x30]
004e6594  CALL 0x00686cc0
004e6599  MOV EDX,dword ptr [EBP + -0x38]
004e659c  MOV word ptr [EDX + 0x31a],AX
004e65a3  MOV EAX,dword ptr [EBP + -0x1c]
004e65a6  IMUL EAX,EAX,0x1c
004e65a9  MOV dword ptr [EBP + 0xfffffa4c],EAX
004e65af  FILD dword ptr [EBP + 0xfffffa4c]
004e65b5  FMUL double ptr [EBP + -0x30]
004e65b8  CALL 0x00686cc0
004e65bd  MOV ECX,dword ptr [EBP + -0x38]
004e65c0  MOV word ptr [ECX + 0x31c],AX
004e65c7  MOV EDX,dword ptr [EBP + -0x20]
004e65ca  SHL EDX,0x4
004e65cd  MOV EAX,dword ptr [EBP + -0x24]
004e65d0  SHL EAX,0x5
004e65d3  ADD EDX,EAX
004e65d5  MOV ECX,dword ptr [EBP + -0x18]
004e65d8  IMUL ECX,ECX,0x30
004e65db  ADD EDX,ECX
004e65dd  MOV EAX,dword ptr [EBP + -0x14]
004e65e0  SHL EAX,0x6
004e65e3  ADD EDX,EAX
004e65e5  MOV ECX,dword ptr [EBP + -0x34]
004e65e8  IMUL ECX,ECX,0x50
004e65eb  ADD EDX,ECX
004e65ed  MOV EAX,dword ptr [EBP + -0x28]
004e65f0  IMUL EAX,EAX,0x60
004e65f3  ADD EDX,EAX
004e65f5  MOV ECX,dword ptr [EBP + -0x1c]
004e65f8  IMUL ECX,ECX,0x70
004e65fb  ADD EDX,ECX
004e65fd  MOV dword ptr [EBP + 0xfffffa48],EDX
004e6603  FILD dword ptr [EBP + 0xfffffa48]
004e6609  FMUL double ptr [EBP + -0x8]
004e660c  CALL 0x00686cc0
004e6611  MOV EDX,dword ptr [EBP + -0x38]
004e6614  MOV word ptr [EDX + 0x31e],AX
004e661b  MOV EAX,dword ptr [EBP + -0x20]
004e661e  SHL EAX,0x4
004e6621  MOV ECX,dword ptr [EBP + -0x24]
004e6624  SHL ECX,0x5
004e6627  ADD EAX,ECX
004e6629  MOV EDX,dword ptr [EBP + -0x18]
004e662c  IMUL EDX,EDX,0x30
004e662f  ADD EAX,EDX
004e6631  MOV ECX,dword ptr [EBP + -0x14]
004e6634  SHL ECX,0x6
004e6637  ADD EAX,ECX
004e6639  MOV EDX,dword ptr [EBP + -0x34]
004e663c  IMUL EDX,EDX,0x50
004e663f  ADD EAX,EDX
004e6641  MOV ECX,dword ptr [EBP + -0x28]
004e6644  IMUL ECX,ECX,0x60
004e6647  ADD EAX,ECX
004e6649  MOV EDX,dword ptr [EBP + -0x1c]
004e664c  IMUL EDX,EDX,0x70
004e664f  ADD EAX,EDX
004e6651  MOV dword ptr [EBP + 0xfffffa44],EAX
004e6657  FILD dword ptr [EBP + 0xfffffa44]
004e665d  FMUL double ptr [EBP + -0x8]
004e6660  CALL 0x00686cc0
004e6665  MOV ECX,dword ptr [EBP + -0x38]
004e6668  MOV word ptr [ECX + 0x320],AX
004e666f  MOV EDX,dword ptr [EBP + -0x20]
004e6672  SHL EDX,0x4
004e6675  MOV EAX,dword ptr [EBP + -0x24]
004e6678  SHL EAX,0x5
004e667b  ADD EDX,EAX
004e667d  MOV ECX,dword ptr [EBP + -0x18]
004e6680  IMUL ECX,ECX,0x30
004e6683  ADD EDX,ECX
004e6685  MOV EAX,dword ptr [EBP + -0x14]
004e6688  SHL EAX,0x6
004e668b  ADD EDX,EAX
004e668d  MOV ECX,dword ptr [EBP + -0x34]
004e6690  IMUL ECX,ECX,0x50
004e6693  ADD EDX,ECX
004e6695  MOV EAX,dword ptr [EBP + -0x28]
004e6698  IMUL EAX,EAX,0x60
004e669b  ADD EDX,EAX
004e669d  MOV ECX,dword ptr [EBP + -0x1c]
004e66a0  IMUL ECX,ECX,0x70
004e66a3  ADD EDX,ECX
004e66a5  MOV dword ptr [EBP + 0xfffffa40],EDX
004e66ab  FILD dword ptr [EBP + 0xfffffa40]
004e66b1  FMUL double ptr [EBP + -0x8]
004e66b4  CALL 0x00686cc0
004e66b9  MOV EDX,dword ptr [EBP + -0x38]
004e66bc  MOV word ptr [EDX + 0x322],AX
004e66c3  MOV EAX,dword ptr [EBP + -0x24]
004e66c6  IMUL EAX,EAX,0x60
004e66c9  MOV dword ptr [EBP + 0xfffffa3c],EAX
004e66cf  FILD dword ptr [EBP + 0xfffffa3c]
004e66d5  FDIV double ptr [0x006b3740]
004e66db  MOV ECX,dword ptr [EBP + -0x18]
004e66de  IMUL ECX,ECX,0x30
004e66e1  MOV dword ptr [EBP + 0xfffffa38],ECX
004e66e7  FILD dword ptr [EBP + 0xfffffa38]
004e66ed  FADDP
004e66ef  MOV EDX,dword ptr [EBP + -0x14]
004e66f2  SHL EDX,0x6
004e66f5  MOV dword ptr [EBP + 0xfffffa34],EDX
004e66fb  FILD dword ptr [EBP + 0xfffffa34]
004e6701  FADDP
004e6703  MOV EAX,dword ptr [EBP + -0x34]
004e6706  IMUL EAX,EAX,0x50
004e6709  MOV dword ptr [EBP + 0xfffffa30],EAX
004e670f  FILD dword ptr [EBP + 0xfffffa30]
004e6715  FADDP
004e6717  MOV ECX,dword ptr [EBP + -0x28]
004e671a  IMUL ECX,ECX,0x60
004e671d  MOV dword ptr [EBP + 0xfffffa2c],ECX
004e6723  FILD dword ptr [EBP + 0xfffffa2c]
004e6729  FADDP
004e672b  MOV EDX,dword ptr [EBP + -0x1c]
004e672e  IMUL EDX,EDX,0x70
004e6731  MOV dword ptr [EBP + 0xfffffa28],EDX
004e6737  FILD dword ptr [EBP + 0xfffffa28]
004e673d  FADDP
004e673f  FMUL double ptr [EBP + -0x8]
004e6742  CALL 0x00686cc0
004e6747  MOV ECX,dword ptr [EBP + -0x38]
004e674a  MOV word ptr [ECX + 0x324],AX
004e6751  MOV EDX,dword ptr [EBP + -0x18]
004e6754  IMUL EDX,EDX,0xc0
004e675a  MOV dword ptr [EBP + 0xfffffa24],EDX
004e6760  FILD dword ptr [EBP + 0xfffffa24]
004e6766  FDIV double ptr [0x006b3740]
004e676c  MOV EAX,dword ptr [EBP + -0x14]
004e676f  SHL EAX,0x6
004e6772  MOV dword ptr [EBP + 0xfffffa20],EAX
004e6778  FILD dword ptr [EBP + 0xfffffa20]
004e677e  FADDP
004e6780  MOV ECX,dword ptr [EBP + -0x34]
004e6783  IMUL ECX,ECX,0x50
004e6786  MOV dword ptr [EBP + 0xfffffa1c],ECX
004e678c  FILD dword ptr [EBP + 0xfffffa1c]
004e6792  FADDP
004e6794  MOV EDX,dword ptr [EBP + -0x28]
004e6797  IMUL EDX,EDX,0x60
004e679a  MOV dword ptr [EBP + 0xfffffa18],EDX
004e67a0  FILD dword ptr [EBP + 0xfffffa18]
004e67a6  FADDP
004e67a8  MOV EAX,dword ptr [EBP + -0x1c]
004e67ab  IMUL EAX,EAX,0x70
004e67ae  MOV dword ptr [EBP + 0xfffffa14],EAX
004e67b4  FILD dword ptr [EBP + 0xfffffa14]
004e67ba  FADDP
004e67bc  FMUL double ptr [EBP + -0x8]
004e67bf  CALL 0x00686cc0
004e67c4  MOV ECX,dword ptr [EBP + -0x38]
004e67c7  MOV word ptr [ECX + 0x326],AX
004e67ce  MOV EDX,dword ptr [EBP + -0x14]
004e67d1  IMUL EDX,EDX,0x140
004e67d7  MOV dword ptr [EBP + 0xfffffa10],EDX
004e67dd  FILD dword ptr [EBP + 0xfffffa10]
004e67e3  FDIV double ptr [0x006b3740]
004e67e9  MOV EAX,dword ptr [EBP + -0x34]
004e67ec  IMUL EAX,EAX,0x50
004e67ef  MOV dword ptr [EBP + 0xfffffa0c],EAX
004e67f5  FILD dword ptr [EBP + 0xfffffa0c]
004e67fb  FADDP
004e67fd  MOV ECX,dword ptr [EBP + -0x28]
004e6800  IMUL ECX,ECX,0x60
004e6803  MOV dword ptr [EBP + 0xfffffa08],ECX
004e6809  FILD dword ptr [EBP + 0xfffffa08]
004e680f  FADDP
004e6811  MOV EDX,dword ptr [EBP + -0x1c]
004e6814  IMUL EDX,EDX,0x70
004e6817  MOV dword ptr [EBP + 0xfffffa04],EDX
004e681d  FILD dword ptr [EBP + 0xfffffa04]
004e6823  FADDP
004e6825  FMUL double ptr [EBP + -0x8]
004e6828  CALL 0x00686cc0
004e682d  MOV ECX,dword ptr [EBP + -0x38]
004e6830  MOV word ptr [ECX + 0x328],AX
004e6837  MOV EDX,dword ptr [EBP + -0x34]
004e683a  IMUL EDX,EDX,0x1e0
004e6840  MOV dword ptr [EBP + 0xfffffa00],EDX
004e6846  FILD dword ptr [EBP + 0xfffffa00]
004e684c  FDIV double ptr [0x006b3740]
004e6852  MOV EAX,dword ptr [EBP + -0x28]
004e6855  IMUL EAX,EAX,0x60
004e6858  MOV dword ptr [EBP + 0xfffff9fc],EAX
004e685e  FILD dword ptr [EBP + 0xfffff9fc]
004e6864  FADDP
004e6866  MOV ECX,dword ptr [EBP + -0x1c]
004e6869  IMUL ECX,ECX,0x70
004e686c  MOV dword ptr [EBP + 0xfffff9f8],ECX
004e6872  FILD dword ptr [EBP + 0xfffff9f8]
004e6878  FADDP
004e687a  FMUL double ptr [EBP + -0x8]
004e687d  CALL 0x00686cc0
004e6882  MOV EDX,dword ptr [EBP + -0x38]
004e6885  MOV word ptr [EDX + 0x32a],AX
004e688c  MOV EAX,dword ptr [EBP + -0x28]
004e688f  IMUL EAX,EAX,0x2a0
004e6895  MOV dword ptr [EBP + 0xfffff9f4],EAX
004e689b  FILD dword ptr [EBP + 0xfffff9f4]
004e68a1  FDIV double ptr [0x006b3740]
004e68a7  MOV ECX,dword ptr [EBP + -0x1c]
004e68aa  IMUL ECX,ECX,0x70
004e68ad  MOV dword ptr [EBP + 0xfffff9f0],ECX
004e68b3  FILD dword ptr [EBP + 0xfffff9f0]
004e68b9  FADDP
004e68bb  FMUL double ptr [EBP + -0x8]
004e68be  CALL 0x00686cc0
004e68c3  MOV EDX,dword ptr [EBP + -0x38]
004e68c6  MOV word ptr [EDX + 0x32c],AX
004e68cd  MOV EAX,dword ptr [EBP + -0x1c]
004e68d0  IMUL EAX,EAX,0x380
004e68d6  MOV dword ptr [EBP + 0xfffff9ec],EAX
004e68dc  FILD dword ptr [EBP + 0xfffff9ec]
004e68e2  FDIV double ptr [0x006b3740]
004e68e8  FMUL double ptr [EBP + -0x8]
004e68eb  CALL 0x00686cc0
004e68f0  MOV ECX,dword ptr [EBP + -0x38]
004e68f3  MOV word ptr [ECX + 0x32e],AX
004e68fa  MOV EDX,dword ptr [EBP + -0x20]
004e68fd  SHL EDX,0x7
004e6900  MOV EAX,dword ptr [EBP + -0x24]
004e6903  IMUL EAX,EAX,0x180
004e6909  ADD EDX,EAX
004e690b  MOV ECX,dword ptr [EBP + -0x18]
004e690e  IMUL ECX,ECX,0x300
004e6914  ADD EDX,ECX
004e6916  MOV EAX,dword ptr [EBP + -0x14]
004e6919  IMUL EAX,EAX,0x500
004e691f  ADD EDX,EAX
004e6921  MOV ECX,dword ptr [EBP + -0x34]
004e6924  IMUL ECX,ECX,0x780
004e692a  ADD EDX,ECX
004e692c  MOV EAX,dword ptr [EBP + -0x28]
004e692f  IMUL EAX,EAX,0xa80
004e6935  ADD EDX,EAX
004e6937  MOV ECX,dword ptr [EBP + -0x1c]
004e693a  IMUL ECX,ECX,0xe00
004e6940  ADD EDX,ECX
004e6942  MOV dword ptr [EBP + 0xfffff9e8],EDX
004e6948  FILD dword ptr [EBP + 0xfffff9e8]
004e694e  FMUL double ptr [EBP + -0x10]
004e6951  CALL 0x00686cc0
004e6956  MOV EDX,dword ptr [EBP + -0x38]
004e6959  MOV word ptr [EDX + 0x330],AX
004e6960  MOV EAX,dword ptr [EBP + -0x20]
004e6963  SHL EAX,0x7
004e6966  MOV ECX,dword ptr [EBP + -0x24]
004e6969  IMUL ECX,ECX,0x180
004e696f  ADD EAX,ECX
004e6971  MOV EDX,dword ptr [EBP + -0x18]
004e6974  IMUL EDX,EDX,0x300
004e697a  ADD EAX,EDX
004e697c  MOV ECX,dword ptr [EBP + -0x14]
004e697f  IMUL ECX,ECX,0x500
004e6985  ADD EAX,ECX
004e6987  MOV EDX,dword ptr [EBP + -0x34]
004e698a  IMUL EDX,EDX,0x780
004e6990  ADD EAX,EDX
004e6992  MOV ECX,dword ptr [EBP + -0x28]
004e6995  IMUL ECX,ECX,0xa80
004e699b  ADD EAX,ECX
004e699d  MOV EDX,dword ptr [EBP + -0x1c]
004e69a0  IMUL EDX,EDX,0xe00
004e69a6  ADD EAX,EDX
004e69a8  MOV dword ptr [EBP + 0xfffff9e4],EAX
004e69ae  FILD dword ptr [EBP + 0xfffff9e4]
004e69b4  FMUL double ptr [EBP + -0x10]
004e69b7  CALL 0x00686cc0
004e69bc  MOV ECX,dword ptr [EBP + -0x38]
004e69bf  MOV word ptr [ECX + 0x332],AX
004e69c6  MOV EDX,dword ptr [EBP + -0x20]
004e69c9  SHL EDX,0x7
004e69cc  MOV EAX,dword ptr [EBP + -0x24]
004e69cf  IMUL EAX,EAX,0x180
004e69d5  ADD EDX,EAX
004e69d7  MOV ECX,dword ptr [EBP + -0x18]
004e69da  IMUL ECX,ECX,0x300
004e69e0  ADD EDX,ECX
004e69e2  MOV EAX,dword ptr [EBP + -0x14]
004e69e5  IMUL EAX,EAX,0x500
004e69eb  ADD EDX,EAX
004e69ed  MOV ECX,dword ptr [EBP + -0x34]
004e69f0  IMUL ECX,ECX,0x780
004e69f6  ADD EDX,ECX
004e69f8  MOV EAX,dword ptr [EBP + -0x28]
004e69fb  IMUL EAX,EAX,0xa80
004e6a01  ADD EDX,EAX
004e6a03  MOV ECX,dword ptr [EBP + -0x1c]
004e6a06  IMUL ECX,ECX,0xe00
004e6a0c  ADD EDX,ECX
004e6a0e  MOV dword ptr [EBP + 0xfffff9e0],EDX
004e6a14  FILD dword ptr [EBP + 0xfffff9e0]
004e6a1a  FMUL double ptr [EBP + -0x10]
004e6a1d  CALL 0x00686cc0
004e6a22  MOV EDX,dword ptr [EBP + -0x38]
004e6a25  MOV word ptr [EDX + 0x334],AX
004e6a2c  MOV EAX,dword ptr [EBP + -0x20]
004e6a2f  SHL EAX,0x7
004e6a32  MOV ECX,dword ptr [EBP + -0x24]
004e6a35  IMUL ECX,ECX,0x180
004e6a3b  ADD EAX,ECX
004e6a3d  MOV EDX,dword ptr [EBP + -0x18]
004e6a40  IMUL EDX,EDX,0x300
004e6a46  ADD EAX,EDX
004e6a48  MOV ECX,dword ptr [EBP + -0x14]
004e6a4b  IMUL ECX,ECX,0x500
004e6a51  ADD EAX,ECX
004e6a53  MOV EDX,dword ptr [EBP + -0x34]
004e6a56  IMUL EDX,EDX,0x780
004e6a5c  ADD EAX,EDX
004e6a5e  MOV ECX,dword ptr [EBP + -0x28]
004e6a61  IMUL ECX,ECX,0xa80
004e6a67  ADD EAX,ECX
004e6a69  MOV EDX,dword ptr [EBP + -0x1c]
004e6a6c  IMUL EDX,EDX,0xe00
004e6a72  ADD EAX,EDX
004e6a74  MOV dword ptr [EBP + 0xfffff9dc],EAX
004e6a7a  FILD dword ptr [EBP + 0xfffff9dc]
004e6a80  FMUL double ptr [EBP + -0x10]
004e6a83  CALL 0x00686cc0
004e6a88  MOV ECX,dword ptr [EBP + -0x38]
004e6a8b  MOV word ptr [ECX + 0x336],AX
004e6a92  MOV EDX,dword ptr [EBP + -0x24]
004e6a95  IMUL EDX,EDX,0x600
004e6a9b  MOV dword ptr [EBP + 0xfffff9d8],EDX
004e6aa1  FILD dword ptr [EBP + 0xfffff9d8]
004e6aa7  FDIV double ptr [0x006b9490]
004e6aad  MOV EAX,dword ptr [EBP + -0x18]
004e6ab0  IMUL EAX,EAX,0x300
004e6ab6  MOV dword ptr [EBP + 0xfffff9d4],EAX
004e6abc  FILD dword ptr [EBP + 0xfffff9d4]
004e6ac2  FADDP
004e6ac4  MOV ECX,dword ptr [EBP + -0x14]
004e6ac7  IMUL ECX,ECX,0x500
004e6acd  MOV dword ptr [EBP + 0xfffff9d0],ECX
004e6ad3  FILD dword ptr [EBP + 0xfffff9d0]
004e6ad9  FADDP
004e6adb  MOV EDX,dword ptr [EBP + -0x34]
004e6ade  IMUL EDX,EDX,0x780
004e6ae4  MOV dword ptr [EBP + 0xfffff9cc],EDX
004e6aea  FILD dword ptr [EBP + 0xfffff9cc]
004e6af0  FADDP
004e6af2  MOV EAX,dword ptr [EBP + -0x28]
004e6af5  IMUL EAX,EAX,0xa80
004e6afb  MOV dword ptr [EBP + 0xfffff9c8],EAX
004e6b01  FILD dword ptr [EBP + 0xfffff9c8]
004e6b07  FADDP
004e6b09  MOV ECX,dword ptr [EBP + -0x1c]
004e6b0c  IMUL ECX,ECX,0xe00
004e6b12  MOV dword ptr [EBP + 0xfffff9c4],ECX
004e6b18  FILD dword ptr [EBP + 0xfffff9c4]
004e6b1e  FADDP
004e6b20  FMUL double ptr [EBP + -0x10]
004e6b23  CALL 0x00686cc0
004e6b28  MOV EDX,dword ptr [EBP + -0x38]
004e6b2b  MOV word ptr [EDX + 0x338],AX
004e6b32  MOV EAX,dword ptr [EBP + -0x18]
004e6b35  IMUL EAX,EAX,0xf00
004e6b3b  MOV dword ptr [EBP + 0xfffff9c0],EAX
004e6b41  FILD dword ptr [EBP + 0xfffff9c0]
004e6b47  FDIV double ptr [0x006b9490]
004e6b4d  MOV ECX,dword ptr [EBP + -0x14]
004e6b50  IMUL ECX,ECX,0x500
004e6b56  MOV dword ptr [EBP + 0xfffff9bc],ECX
004e6b5c  FILD dword ptr [EBP + 0xfffff9bc]
004e6b62  FADDP
004e6b64  MOV EDX,dword ptr [EBP + -0x34]
004e6b67  IMUL EDX,EDX,0x780
004e6b6d  MOV dword ptr [EBP + 0xfffff9b8],EDX
004e6b73  FILD dword ptr [EBP + 0xfffff9b8]
004e6b79  FADDP
004e6b7b  MOV EAX,dword ptr [EBP + -0x28]
004e6b7e  IMUL EAX,EAX,0xa80
004e6b84  MOV dword ptr [EBP + 0xfffff9b4],EAX
004e6b8a  FILD dword ptr [EBP + 0xfffff9b4]
004e6b90  FADDP
004e6b92  MOV ECX,dword ptr [EBP + -0x1c]
004e6b95  IMUL ECX,ECX,0xe00
004e6b9b  MOV dword ptr [EBP + 0xfffff9b0],ECX
004e6ba1  FILD dword ptr [EBP + 0xfffff9b0]
004e6ba7  FADDP
004e6ba9  FMUL double ptr [EBP + -0x10]
004e6bac  CALL 0x00686cc0
004e6bb1  MOV EDX,dword ptr [EBP + -0x38]
004e6bb4  MOV word ptr [EDX + 0x33a],AX
004e6bbb  MOV EAX,dword ptr [EBP + -0x14]
004e6bbe  IMUL EAX,EAX,0x1e00
004e6bc4  MOV dword ptr [EBP + 0xfffff9ac],EAX
004e6bca  FILD dword ptr [EBP + 0xfffff9ac]
004e6bd0  FDIV double ptr [0x006b9490]
004e6bd6  MOV ECX,dword ptr [EBP + -0x34]
004e6bd9  IMUL ECX,ECX,0x780
004e6bdf  MOV dword ptr [EBP + 0xfffff9a8],ECX
004e6be5  FILD dword ptr [EBP + 0xfffff9a8]
004e6beb  FADDP
004e6bed  MOV EDX,dword ptr [EBP + -0x28]
004e6bf0  IMUL EDX,EDX,0xa80
004e6bf6  MOV dword ptr [EBP + 0xfffff9a4],EDX
004e6bfc  FILD dword ptr [EBP + 0xfffff9a4]
004e6c02  FADDP
004e6c04  MOV EAX,dword ptr [EBP + -0x1c]
004e6c07  IMUL EAX,EAX,0xe00
004e6c0d  MOV dword ptr [EBP + 0xfffff9a0],EAX
004e6c13  FILD dword ptr [EBP + 0xfffff9a0]
004e6c19  FADDP
004e6c1b  FMUL double ptr [EBP + -0x10]
004e6c1e  CALL 0x00686cc0
004e6c23  MOV ECX,dword ptr [EBP + -0x38]
004e6c26  MOV word ptr [ECX + 0x33c],AX
004e6c2d  MOV EDX,dword ptr [EBP + -0x34]
004e6c30  IMUL EDX,EDX,0x3480
004e6c36  MOV dword ptr [EBP + 0xfffff99c],EDX
004e6c3c  FILD dword ptr [EBP + 0xfffff99c]
004e6c42  FDIV double ptr [0x006b9490]
004e6c48  MOV EAX,dword ptr [EBP + -0x28]
004e6c4b  IMUL EAX,EAX,0xa80
004e6c51  MOV dword ptr [EBP + 0xfffff998],EAX
004e6c57  FILD dword ptr [EBP + 0xfffff998]
004e6c5d  FADDP
004e6c5f  MOV ECX,dword ptr [EBP + -0x1c]
004e6c62  IMUL ECX,ECX,0xe00
004e6c68  MOV dword ptr [EBP + 0xfffff994],ECX
004e6c6e  FILD dword ptr [EBP + 0xfffff994]
004e6c74  FADDP
004e6c76  FMUL double ptr [EBP + -0x10]
004e6c79  CALL 0x00686cc0
004e6c7e  MOV EDX,dword ptr [EBP + -0x38]
004e6c81  MOV word ptr [EDX + 0x33e],AX
004e6c88  MOV EAX,dword ptr [EBP + -0x28]
004e6c8b  IMUL EAX,EAX,0x5400
004e6c91  MOV dword ptr [EBP + 0xfffff990],EAX
004e6c97  FILD dword ptr [EBP + 0xfffff990]
004e6c9d  FDIV double ptr [0x006b9490]
004e6ca3  MOV ECX,dword ptr [EBP + -0x1c]
004e6ca6  IMUL ECX,ECX,0xe00
004e6cac  MOV dword ptr [EBP + 0xfffff98c],ECX
004e6cb2  FILD dword ptr [EBP + 0xfffff98c]
004e6cb8  FADDP
004e6cba  FMUL double ptr [EBP + -0x10]
004e6cbd  CALL 0x00686cc0
004e6cc2  MOV EDX,dword ptr [EBP + -0x38]
004e6cc5  MOV word ptr [EDX + 0x340],AX
004e6ccc  MOV EAX,dword ptr [EBP + -0x1c]
004e6ccf  IMUL EAX,EAX,0x7e00
004e6cd5  MOV dword ptr [EBP + 0xfffff988],EAX
004e6cdb  FILD dword ptr [EBP + 0xfffff988]
004e6ce1  FDIV double ptr [0x006b9490]
004e6ce7  FMUL double ptr [EBP + -0x10]
004e6cea  CALL 0x00686cc0
004e6cef  MOV ECX,dword ptr [EBP + -0x38]
004e6cf2  MOV word ptr [ECX + 0x342],AX
004e6cf9  MOV EDX,dword ptr [EBP + -0x38]
004e6cfc  MOV word ptr [EDX + 0x288],0x3
004e6d05  MOV EAX,dword ptr [EBP + -0x38]
004e6d08  MOV word ptr [EAX + 0x28a],0x1e
004e6d11  MOV ECX,dword ptr [EBP + -0x38]
004e6d14  MOV word ptr [ECX + 0x28c],0x23
004e6d1d  MOV EDX,dword ptr [EBP + -0x38]
004e6d20  MOV word ptr [EDX + 0x28e],0x19
004e6d29  MOV EAX,dword ptr [EBP + -0x38]
004e6d2c  MOV word ptr [EAX + 0x290],0x37
004e6d35  MOV ECX,dword ptr [EBP + -0x38]
004e6d38  MOV word ptr [ECX + 0x292],0x10
004e6d41  MOV EDX,dword ptr [EBP + -0x38]
004e6d44  MOV word ptr [EDX + 0x294],0x4b
004e6d4d  MOV EAX,dword ptr [EBP + -0x38]
004e6d50  MOV word ptr [EAX + 0x296],0x16
004e6d59  MOV ECX,dword ptr [EBP + -0x38]
004e6d5c  MOV word ptr [ECX + 0x298],0x2d
004e6d65  MOV EDX,dword ptr [EBP + -0x38]
004e6d68  MOV word ptr [EDX + 0x29a],0x16
004e6d71  MOV EAX,dword ptr [EBP + -0x38]
004e6d74  MOV word ptr [EAX + 0x29c],0xb
004e6d7d  MOV ECX,dword ptr [EBP + -0x38]
004e6d80  MOV word ptr [ECX + 0x29e],0x32
004e6d89  MOV EDX,dword ptr [EBP + -0x38]
004e6d8c  MOV word ptr [EDX + 0x2a0],0x2b
004e6d95  MOV EAX,dword ptr [EBP + -0x38]
004e6d98  MOV word ptr [EAX + 0x2a2],0x17
004e6da1  MOV ECX,dword ptr [EBP + -0x38]
004e6da4  MOV word ptr [ECX + 0x2a4],0xc
004e6dad  MOV EDX,dword ptr [EBP + -0x38]
004e6db0  MOV word ptr [EDX + 0x2a6],0x28
004e6db9  MOV EAX,dword ptr [EBP + -0x38]
004e6dbc  MOV word ptr [EAX + 0x2a8],0x2
004e6dc5  MOV ECX,dword ptr [EBP + -0x38]
004e6dc8  MOV word ptr [ECX + 0x2aa],0x3c
004e6dd1  MOV EDX,dword ptr [EBP + -0x38]
004e6dd4  MOV word ptr [EDX + 0x2ac],0x28
004e6ddd  MOV EAX,dword ptr [EBP + -0x38]
004e6de0  MOV word ptr [EAX + 0x2ae],0x14
004e6de9  MOV ECX,dword ptr [EBP + -0x38]
004e6dec  MOV word ptr [ECX + 0x2b0],0x3c
004e6df5  MOV EDX,dword ptr [EBP + -0x38]
004e6df8  MOV word ptr [EDX + 0x2b2],0x28
004e6e01  MOV EAX,dword ptr [EBP + -0x38]
004e6e04  MOV word ptr [EAX + 0x2b4],0x4
004e6e0d  MOV ECX,dword ptr [EBP + -0x38]
004e6e10  MOV word ptr [ECX + 0x2b6],0x41
004e6e19  MOV EDX,dword ptr [EBP + -0x38]
004e6e1c  MOV word ptr [EDX + 0x2b8],0x14
004e6e25  JMP 0x004e9360
004e6e2a  MOV dword ptr [EBP + -0x20],0x3e8
004e6e31  MOV dword ptr [EBP + -0x24],0x3ca
004e6e38  MOV dword ptr [EBP + -0x18],0x384
004e6e3f  MOV dword ptr [EBP + -0x14],0x2bc
004e6e46  MOV dword ptr [EBP + -0x34],0xfa
004e6e4d  MOV dword ptr [EBP + -0x28],0x64
004e6e54  MOV dword ptr [EBP + -0x1c],0x14
004e6e5b  FLD double ptr [0x006bfba8]
004e6e61  FSTP double ptr [EBP + -0x30]
004e6e64  FLD double ptr [0x006bfc30]
004e6e6a  FSTP double ptr [EBP + -0x8]
004e6e6d  FLD double ptr [0x006bfc28]
004e6e73  FSTP double ptr [EBP + -0x10]
004e6e76  MOV EAX,dword ptr [EBP + -0x38]
004e6e79  MOV word ptr [EAX + 0x2ba],0xf
004e6e82  MOV ECX,dword ptr [EBP + -0x38]
004e6e85  MOV word ptr [ECX + 0x2bc],0x33
004e6e8e  MOV EDX,dword ptr [EBP + -0x38]
004e6e91  MOV word ptr [EDX + 0x2be],0x50
004e6e9a  MOV EAX,dword ptr [EBP + -0x38]
004e6e9d  MOV word ptr [EAX + 0x2c0],0x61
004e6ea6  MOV ECX,dword ptr [EBP + -0x38]
004e6ea9  MOV word ptr [ECX + 0x2c2],0x72
004e6eb2  MOV EDX,dword ptr [EBP + -0x38]
004e6eb5  MOV word ptr [EDX + 0x2c4],0x84
004e6ebe  MOV EAX,dword ptr [EBP + -0x38]
004e6ec1  MOV word ptr [EAX + 0x2c6],0x98
004e6eca  MOV ECX,dword ptr [EBP + -0x38]
004e6ecd  MOV word ptr [ECX + 0x2c8],0xac
004e6ed6  MOV EDX,dword ptr [EBP + -0x38]
004e6ed9  MOV word ptr [EDX + 0x2ca],0xc1
004e6ee2  MOV EAX,dword ptr [EBP + -0x38]
004e6ee5  MOV word ptr [EAX + 0x2cc],0xd8
004e6eee  MOV ECX,dword ptr [EBP + -0x38]
004e6ef1  MOV word ptr [ECX + 0x2ce],0xf0
004e6efa  MOV EDX,dword ptr [EBP + -0x38]
004e6efd  MOV word ptr [EDX + 0x2d0],0x109
004e6f06  MOV EAX,dword ptr [EBP + -0x38]
004e6f09  MOV word ptr [EAX + 0x2d2],0x15c
004e6f12  MOV ECX,dword ptr [EBP + -0x38]
004e6f15  MOV word ptr [ECX + 0x2d4],0x1b7
004e6f1e  MOV EDX,dword ptr [EBP + -0x38]
004e6f21  MOV word ptr [EDX + 0x2d6],0x1cf
004e6f2a  MOV EAX,dword ptr [EBP + -0x38]
004e6f2d  MOV word ptr [EAX + 0x2d8],0x215
004e6f36  MOV ECX,dword ptr [EBP + -0x38]
004e6f39  MOV word ptr [ECX + 0x2da],0x267
004e6f42  MOV EDX,dword ptr [EBP + -0x38]
004e6f45  MOV word ptr [EDX + 0x2dc],0x279
004e6f4e  MOV EAX,dword ptr [EBP + -0x38]
004e6f51  MOV word ptr [EAX + 0x2de],0x2aa
004e6f5a  MOV ECX,dword ptr [EBP + -0x38]
004e6f5d  MOV word ptr [ECX + 0x2e0],0x2ea
004e6f66  MOV EDX,dword ptr [EBP + -0x38]
004e6f69  MOV word ptr [EDX + 0x2e2],0x301
004e6f72  MOV EAX,dword ptr [EBP + -0x38]
004e6f75  MOV word ptr [EAX + 0x2e4],0x31c
004e6f7e  MOV ECX,dword ptr [EBP + -0x38]
004e6f81  MOV word ptr [ECX + 0x2e6],0x340
004e6f8a  MOV EDX,dword ptr [EBP + -0x38]
004e6f8d  MOV word ptr [EDX + 0x2e8],0x355
004e6f96  MOV EAX,dword ptr [EBP + -0x38]
004e6f99  MOV word ptr [EAX + 0x2ea],0x360
004e6fa2  MOV ECX,dword ptr [EBP + -0x38]
004e6fa5  MOV word ptr [ECX + 0x2ec],0x366
004e6fae  MOV EDX,dword ptr [EBP + -0x38]
004e6fb1  MOV word ptr [EDX + 0x2ee],0x368
004e6fba  MOV EAX,dword ptr [EBP + -0x38]
004e6fbd  MOV word ptr [EAX + 0x2f0],0x379
004e6fc6  MOV ECX,dword ptr [EBP + -0x38]
004e6fc9  MOV word ptr [ECX + 0x2f2],0x392
004e6fd2  MOV EDX,dword ptr [EBP + -0x38]
004e6fd5  MOV word ptr [EDX + 0x2f4],0x3a0
004e6fde  MOV EAX,dword ptr [EBP + -0x38]
004e6fe1  MOV word ptr [EAX + 0x2f6],0x3a6
004e6fea  MOV ECX,dword ptr [EBP + -0x38]
004e6fed  MOV word ptr [ECX + 0x2f8],0x3a8
004e6ff6  MOV EDX,dword ptr [EBP + -0x38]
004e6ff9  MOV word ptr [EDX + 0x2fa],0x3b4
004e7002  MOV EAX,dword ptr [EBP + -0x38]
004e7005  MOV word ptr [EAX + 0x2fc],0x3c3
004e700e  MOV ECX,dword ptr [EBP + -0x38]
004e7011  MOV word ptr [ECX + 0x2fe],0x3cb
004e701a  MOV EDX,dword ptr [EBP + -0x38]
004e701d  MOV word ptr [EDX + 0x300],0x3ce
004e7026  MOV EAX,dword ptr [EBP + -0x38]
004e7029  MOV word ptr [EAX + 0x302],0x3d4
004e7032  MOV ECX,dword ptr [EBP + -0x38]
004e7035  MOV word ptr [ECX + 0x304],0x3dc
004e703e  MOV EDX,dword ptr [EBP + -0x38]
004e7041  MOV word ptr [EDX + 0x306],0x3df
004e704a  MOV EAX,dword ptr [EBP + -0x38]
004e704d  MOV word ptr [EAX + 0x308],0x3e2
004e7056  MOV ECX,dword ptr [EBP + -0x38]
004e7059  MOV word ptr [ECX + 0x30a],0x3e5
004e7062  MOV EDX,dword ptr [EBP + -0x38]
004e7065  MOV word ptr [EDX + 0x30c],0x3e8
004e706e  MOV EAX,dword ptr [EBP + -0x24]
004e7071  SHL EAX,0x2
004e7074  MOV ECX,dword ptr [EBP + -0x20]
004e7077  LEA EDX,[EAX + ECX*0x4]
004e707a  MOV EAX,dword ptr [EBP + -0x18]
004e707d  LEA ECX,[EDX + EAX*0x4]
004e7080  MOV EDX,dword ptr [EBP + -0x14]
004e7083  LEA EAX,[ECX + EDX*0x4]
004e7086  MOV ECX,dword ptr [EBP + -0x34]
004e7089  LEA EDX,[EAX + ECX*0x4]
004e708c  MOV EAX,dword ptr [EBP + -0x28]
004e708f  LEA ECX,[EDX + EAX*0x4]
004e7092  MOV EDX,dword ptr [EBP + -0x1c]
004e7095  LEA EAX,[ECX + EDX*0x4]
004e7098  MOV dword ptr [EBP + 0xfffff984],EAX
004e709e  FILD dword ptr [EBP + 0xfffff984]
004e70a4  FMUL double ptr [EBP + -0x30]
004e70a7  CALL 0x00686cc0
004e70ac  MOV ECX,dword ptr [EBP + -0x38]
004e70af  MOV word ptr [ECX + 0x30e],AX
004e70b6  MOV EDX,dword ptr [EBP + -0x24]
004e70b9  SHL EDX,0x2
004e70bc  MOV EAX,dword ptr [EBP + -0x20]
004e70bf  LEA ECX,[EDX + EAX*0x4]
004e70c2  MOV EDX,dword ptr [EBP + -0x18]
004e70c5  LEA EAX,[ECX + EDX*0x4]
004e70c8  MOV ECX,dword ptr [EBP + -0x14]
004e70cb  LEA EDX,[EAX + ECX*0x4]
004e70ce  MOV EAX,dword ptr [EBP + -0x34]
004e70d1  LEA ECX,[EDX + EAX*0x4]
004e70d4  MOV EDX,dword ptr [EBP + -0x28]
004e70d7  LEA EAX,[ECX + EDX*0x4]
004e70da  MOV ECX,dword ptr [EBP + -0x1c]
004e70dd  LEA EDX,[EAX + ECX*0x4]
004e70e0  MOV dword ptr [EBP + 0xfffff980],EDX
004e70e6  FILD dword ptr [EBP + 0xfffff980]
004e70ec  FMUL double ptr [EBP + -0x30]
004e70ef  CALL 0x00686cc0
004e70f4  MOV ECX,dword ptr [EBP + -0x38]
004e70f7  MOV word ptr [ECX + 0x310],AX
004e70fe  MOV EDX,dword ptr [EBP + -0x18]
004e7101  SHL EDX,0x2
004e7104  MOV EAX,dword ptr [EBP + -0x24]
004e7107  LEA ECX,[EDX + EAX*0x8]
004e710a  MOV EDX,dword ptr [EBP + -0x14]
004e710d  LEA EAX,[ECX + EDX*0x4]
004e7110  MOV ECX,dword ptr [EBP + -0x34]
004e7113  LEA EDX,[EAX + ECX*0x4]
004e7116  MOV EAX,dword ptr [EBP + -0x28]
004e7119  LEA ECX,[EDX + EAX*0x4]
004e711c  MOV EDX,dword ptr [EBP + -0x1c]
004e711f  LEA EAX,[ECX + EDX*0x4]
004e7122  MOV dword ptr [EBP + 0xfffff97c],EAX
004e7128  FILD dword ptr [EBP + 0xfffff97c]
004e712e  FMUL double ptr [EBP + -0x30]
004e7131  CALL 0x00686cc0
004e7136  MOV ECX,dword ptr [EBP + -0x38]
004e7139  MOV word ptr [ECX + 0x312],AX
004e7140  MOV EDX,dword ptr [EBP + -0x18]
004e7143  IMUL EDX,EDX,0xc
004e7146  MOV EAX,dword ptr [EBP + -0x14]
004e7149  LEA ECX,[EDX + EAX*0x4]
004e714c  MOV EDX,dword ptr [EBP + -0x34]
004e714f  LEA EAX,[ECX + EDX*0x4]
004e7152  MOV ECX,dword ptr [EBP + -0x28]
004e7155  LEA EDX,[EAX + ECX*0x4]
004e7158  MOV EAX,dword ptr [EBP + -0x1c]
004e715b  LEA ECX,[EDX + EAX*0x4]
004e715e  MOV dword ptr [EBP + 0xfffff978],ECX
004e7164  FILD dword ptr [EBP + 0xfffff978]
004e716a  FMUL double ptr [EBP + -0x30]
004e716d  CALL 0x00686cc0
004e7172  MOV EDX,dword ptr [EBP + -0x38]
004e7175  MOV word ptr [EDX + 0x314],AX
004e717c  MOV EAX,dword ptr [EBP + -0x14]
004e717f  SHL EAX,0x4
004e7182  MOV ECX,dword ptr [EBP + -0x34]
004e7185  LEA EDX,[EAX + ECX*0x4]
004e7188  MOV EAX,dword ptr [EBP + -0x28]
004e718b  LEA ECX,[EDX + EAX*0x4]
004e718e  MOV EDX,dword ptr [EBP + -0x1c]
004e7191  LEA EAX,[ECX + EDX*0x4]
004e7194  MOV dword ptr [EBP + 0xfffff974],EAX
004e719a  FILD dword ptr [EBP + 0xfffff974]
004e71a0  FMUL double ptr [EBP + -0x30]
004e71a3  CALL 0x00686cc0
004e71a8  MOV ECX,dword ptr [EBP + -0x38]
004e71ab  MOV word ptr [ECX + 0x316],AX
004e71b2  MOV EDX,dword ptr [EBP + -0x34]
004e71b5  IMUL EDX,EDX,0x14
004e71b8  MOV EAX,dword ptr [EBP + -0x28]
004e71bb  LEA ECX,[EDX + EAX*0x4]
004e71be  MOV EDX,dword ptr [EBP + -0x1c]
004e71c1  LEA EAX,[ECX + EDX*0x4]
004e71c4  MOV dword ptr [EBP + 0xfffff970],EAX
004e71ca  FILD dword ptr [EBP + 0xfffff970]
004e71d0  FMUL double ptr [EBP + -0x30]
004e71d3  CALL 0x00686cc0
004e71d8  MOV ECX,dword ptr [EBP + -0x38]
004e71db  MOV word ptr [ECX + 0x318],AX
004e71e2  MOV EDX,dword ptr [EBP + -0x28]
004e71e5  IMUL EDX,EDX,0x18
004e71e8  MOV EAX,dword ptr [EBP + -0x1c]
004e71eb  LEA ECX,[EDX + EAX*0x4]
004e71ee  MOV dword ptr [EBP + 0xfffff96c],ECX
004e71f4  FILD dword ptr [EBP + 0xfffff96c]
004e71fa  FMUL double ptr [EBP + -0x30]
004e71fd  CALL 0x00686cc0
004e7202  MOV EDX,dword ptr [EBP + -0x38]
004e7205  MOV word ptr [EDX + 0x31a],AX
004e720c  MOV EAX,dword ptr [EBP + -0x1c]
004e720f  IMUL EAX,EAX,0x1c
004e7212  MOV dword ptr [EBP + 0xfffff968],EAX
004e7218  FILD dword ptr [EBP + 0xfffff968]
004e721e  FMUL double ptr [EBP + -0x30]
004e7221  CALL 0x00686cc0
004e7226  MOV ECX,dword ptr [EBP + -0x38]
004e7229  MOV word ptr [ECX + 0x31c],AX
004e7230  MOV EDX,dword ptr [EBP + -0x20]
004e7233  SHL EDX,0x4
004e7236  MOV EAX,dword ptr [EBP + -0x24]
004e7239  SHL EAX,0x5
004e723c  ADD EDX,EAX
004e723e  MOV ECX,dword ptr [EBP + -0x18]
004e7241  IMUL ECX,ECX,0x30
004e7244  ADD EDX,ECX
004e7246  MOV EAX,dword ptr [EBP + -0x14]
004e7249  SHL EAX,0x6
004e724c  ADD EDX,EAX
004e724e  MOV ECX,dword ptr [EBP + -0x34]
004e7251  IMUL ECX,ECX,0x50
004e7254  ADD EDX,ECX
004e7256  MOV EAX,dword ptr [EBP + -0x28]
004e7259  IMUL EAX,EAX,0x60
004e725c  ADD EDX,EAX
004e725e  MOV ECX,dword ptr [EBP + -0x1c]
004e7261  IMUL ECX,ECX,0x70
004e7264  ADD EDX,ECX
004e7266  MOV dword ptr [EBP + 0xfffff964],EDX
004e726c  FILD dword ptr [EBP + 0xfffff964]
004e7272  FMUL double ptr [EBP + -0x8]
004e7275  CALL 0x00686cc0
004e727a  MOV EDX,dword ptr [EBP + -0x38]
004e727d  MOV word ptr [EDX + 0x31e],AX
004e7284  MOV EAX,dword ptr [EBP + -0x20]
004e7287  SHL EAX,0x4
004e728a  MOV ECX,dword ptr [EBP + -0x24]
004e728d  SHL ECX,0x5
004e7290  ADD EAX,ECX
004e7292  MOV EDX,dword ptr [EBP + -0x18]
004e7295  IMUL EDX,EDX,0x30
004e7298  ADD EAX,EDX
004e729a  MOV ECX,dword ptr [EBP + -0x14]
004e729d  SHL ECX,0x6
004e72a0  ADD EAX,ECX
004e72a2  MOV EDX,dword ptr [EBP + -0x34]
004e72a5  IMUL EDX,EDX,0x50
004e72a8  ADD EAX,EDX
004e72aa  MOV ECX,dword ptr [EBP + -0x28]
004e72ad  IMUL ECX,ECX,0x60
004e72b0  ADD EAX,ECX
004e72b2  MOV EDX,dword ptr [EBP + -0x1c]
004e72b5  IMUL EDX,EDX,0x70
004e72b8  ADD EAX,EDX
004e72ba  MOV dword ptr [EBP + 0xfffff960],EAX
004e72c0  FILD dword ptr [EBP + 0xfffff960]
004e72c6  FMUL double ptr [EBP + -0x8]
004e72c9  CALL 0x00686cc0
004e72ce  MOV ECX,dword ptr [EBP + -0x38]
004e72d1  MOV word ptr [ECX + 0x320],AX
004e72d8  MOV EDX,dword ptr [EBP + -0x20]
004e72db  SHL EDX,0x4
004e72de  MOV EAX,dword ptr [EBP + -0x24]
004e72e1  SHL EAX,0x5
004e72e4  ADD EDX,EAX
004e72e6  MOV ECX,dword ptr [EBP + -0x18]
004e72e9  IMUL ECX,ECX,0x30
004e72ec  ADD EDX,ECX
004e72ee  MOV EAX,dword ptr [EBP + -0x14]
004e72f1  SHL EAX,0x6
004e72f4  ADD EDX,EAX
004e72f6  MOV ECX,dword ptr [EBP + -0x34]
004e72f9  IMUL ECX,ECX,0x50
004e72fc  ADD EDX,ECX
004e72fe  MOV EAX,dword ptr [EBP + -0x28]
004e7301  IMUL EAX,EAX,0x60
004e7304  ADD EDX,EAX
004e7306  MOV ECX,dword ptr [EBP + -0x1c]
004e7309  IMUL ECX,ECX,0x70
004e730c  ADD EDX,ECX
004e730e  MOV dword ptr [EBP + 0xfffff95c],EDX
004e7314  FILD dword ptr [EBP + 0xfffff95c]
004e731a  FMUL double ptr [EBP + -0x8]
004e731d  CALL 0x00686cc0
004e7322  MOV EDX,dword ptr [EBP + -0x38]
004e7325  MOV word ptr [EDX + 0x322],AX
004e732c  MOV EAX,dword ptr [EBP + -0x24]
004e732f  IMUL EAX,EAX,0x60
004e7332  MOV dword ptr [EBP + 0xfffff958],EAX
004e7338  FILD dword ptr [EBP + 0xfffff958]
004e733e  FDIV double ptr [0x006b3740]
004e7344  MOV ECX,dword ptr [EBP + -0x18]
004e7347  IMUL ECX,ECX,0x30
004e734a  MOV dword ptr [EBP + 0xfffff954],ECX
004e7350  FILD dword ptr [EBP + 0xfffff954]
004e7356  FADDP
004e7358  MOV EDX,dword ptr [EBP + -0x14]
004e735b  SHL EDX,0x6
004e735e  MOV dword ptr [EBP + 0xfffff950],EDX
004e7364  FILD dword ptr [EBP + 0xfffff950]
004e736a  FADDP
004e736c  MOV EAX,dword ptr [EBP + -0x34]
004e736f  IMUL EAX,EAX,0x50
004e7372  MOV dword ptr [EBP + 0xfffff94c],EAX
004e7378  FILD dword ptr [EBP + 0xfffff94c]
004e737e  FADDP
004e7380  MOV ECX,dword ptr [EBP + -0x28]
004e7383  IMUL ECX,ECX,0x60
004e7386  MOV dword ptr [EBP + 0xfffff948],ECX
004e738c  FILD dword ptr [EBP + 0xfffff948]
004e7392  FADDP
004e7394  MOV EDX,dword ptr [EBP + -0x1c]
004e7397  IMUL EDX,EDX,0x70
004e739a  MOV dword ptr [EBP + 0xfffff944],EDX
004e73a0  FILD dword ptr [EBP + 0xfffff944]
004e73a6  FADDP
004e73a8  FMUL double ptr [EBP + -0x8]
004e73ab  CALL 0x00686cc0
004e73b0  MOV ECX,dword ptr [EBP + -0x38]
004e73b3  MOV word ptr [ECX + 0x324],AX
004e73ba  MOV EDX,dword ptr [EBP + -0x18]
004e73bd  IMUL EDX,EDX,0xc0
004e73c3  MOV dword ptr [EBP + 0xfffff940],EDX
004e73c9  FILD dword ptr [EBP + 0xfffff940]
004e73cf  FDIV double ptr [0x006b3740]
004e73d5  MOV EAX,dword ptr [EBP + -0x14]
004e73d8  SHL EAX,0x6
004e73db  MOV dword ptr [EBP + 0xfffff93c],EAX
004e73e1  FILD dword ptr [EBP + 0xfffff93c]
004e73e7  FADDP
004e73e9  MOV ECX,dword ptr [EBP + -0x34]
004e73ec  IMUL ECX,ECX,0x50
004e73ef  MOV dword ptr [EBP + 0xfffff938],ECX
004e73f5  FILD dword ptr [EBP + 0xfffff938]
004e73fb  FADDP
004e73fd  MOV EDX,dword ptr [EBP + -0x28]
004e7400  IMUL EDX,EDX,0x60
004e7403  MOV dword ptr [EBP + 0xfffff934],EDX
004e7409  FILD dword ptr [EBP + 0xfffff934]
004e740f  FADDP
004e7411  MOV EAX,dword ptr [EBP + -0x1c]
004e7414  IMUL EAX,EAX,0x70
004e7417  MOV dword ptr [EBP + 0xfffff930],EAX
004e741d  FILD dword ptr [EBP + 0xfffff930]
004e7423  FADDP
004e7425  FMUL double ptr [EBP + -0x8]
004e7428  CALL 0x00686cc0
004e742d  MOV ECX,dword ptr [EBP + -0x38]
004e7430  MOV word ptr [ECX + 0x326],AX
004e7437  MOV EDX,dword ptr [EBP + -0x14]
004e743a  IMUL EDX,EDX,0x140
004e7440  MOV dword ptr [EBP + 0xfffff92c],EDX
004e7446  FILD dword ptr [EBP + 0xfffff92c]
004e744c  FDIV double ptr [0x006b3740]
004e7452  MOV EAX,dword ptr [EBP + -0x34]
004e7455  IMUL EAX,EAX,0x50
004e7458  MOV dword ptr [EBP + 0xfffff928],EAX
004e745e  FILD dword ptr [EBP + 0xfffff928]
004e7464  FADDP
004e7466  MOV ECX,dword ptr [EBP + -0x28]
004e7469  IMUL ECX,ECX,0x60
004e746c  MOV dword ptr [EBP + 0xfffff924],ECX
004e7472  FILD dword ptr [EBP + 0xfffff924]
004e7478  FADDP
004e747a  MOV EDX,dword ptr [EBP + -0x1c]
004e747d  IMUL EDX,EDX,0x70
004e7480  MOV dword ptr [EBP + 0xfffff920],EDX
004e7486  FILD dword ptr [EBP + 0xfffff920]
004e748c  FADDP
004e748e  FMUL double ptr [EBP + -0x8]
004e7491  CALL 0x00686cc0
004e7496  MOV ECX,dword ptr [EBP + -0x38]
004e7499  MOV word ptr [ECX + 0x328],AX
004e74a0  MOV EDX,dword ptr [EBP + -0x34]
004e74a3  IMUL EDX,EDX,0x1e0
004e74a9  MOV dword ptr [EBP + 0xfffff91c],EDX
004e74af  FILD dword ptr [EBP + 0xfffff91c]
004e74b5  FDIV double ptr [0x006b3740]
004e74bb  MOV EAX,dword ptr [EBP + -0x28]
004e74be  IMUL EAX,EAX,0x60
004e74c1  MOV dword ptr [EBP + 0xfffff918],EAX
004e74c7  FILD dword ptr [EBP + 0xfffff918]
004e74cd  FADDP
004e74cf  MOV ECX,dword ptr [EBP + -0x1c]
004e74d2  IMUL ECX,ECX,0x70
004e74d5  MOV dword ptr [EBP + 0xfffff914],ECX
004e74db  FILD dword ptr [EBP + 0xfffff914]
004e74e1  FADDP
004e74e3  FMUL double ptr [EBP + -0x8]
004e74e6  CALL 0x00686cc0
004e74eb  MOV EDX,dword ptr [EBP + -0x38]
004e74ee  MOV word ptr [EDX + 0x32a],AX
004e74f5  MOV EAX,dword ptr [EBP + -0x28]
004e74f8  IMUL EAX,EAX,0x2a0
004e74fe  MOV dword ptr [EBP + 0xfffff910],EAX
004e7504  FILD dword ptr [EBP + 0xfffff910]
004e750a  FDIV double ptr [0x006b3740]
004e7510  MOV ECX,dword ptr [EBP + -0x1c]
004e7513  IMUL ECX,ECX,0x70
004e7516  MOV dword ptr [EBP + 0xfffff90c],ECX
004e751c  FILD dword ptr [EBP + 0xfffff90c]
004e7522  FADDP
004e7524  FMUL double ptr [EBP + -0x8]
004e7527  CALL 0x00686cc0
004e752c  MOV EDX,dword ptr [EBP + -0x38]
004e752f  MOV word ptr [EDX + 0x32c],AX
004e7536  MOV EAX,dword ptr [EBP + -0x1c]
004e7539  IMUL EAX,EAX,0x380
004e753f  MOV dword ptr [EBP + 0xfffff908],EAX
004e7545  FILD dword ptr [EBP + 0xfffff908]
004e754b  FDIV double ptr [0x006b3740]
004e7551  FMUL double ptr [EBP + -0x8]
004e7554  CALL 0x00686cc0
004e7559  MOV ECX,dword ptr [EBP + -0x38]
004e755c  MOV word ptr [ECX + 0x32e],AX
004e7563  MOV EDX,dword ptr [EBP + -0x20]
004e7566  SHL EDX,0x7
004e7569  MOV EAX,dword ptr [EBP + -0x24]
004e756c  IMUL EAX,EAX,0x180
004e7572  ADD EDX,EAX
004e7574  MOV ECX,dword ptr [EBP + -0x18]
004e7577  IMUL ECX,ECX,0x300
004e757d  ADD EDX,ECX
004e757f  MOV EAX,dword ptr [EBP + -0x14]
004e7582  IMUL EAX,EAX,0x500
004e7588  ADD EDX,EAX
004e758a  MOV ECX,dword ptr [EBP + -0x34]
004e758d  IMUL ECX,ECX,0x780
004e7593  ADD EDX,ECX
004e7595  MOV EAX,dword ptr [EBP + -0x28]
004e7598  IMUL EAX,EAX,0xa80
004e759e  ADD EDX,EAX
004e75a0  MOV ECX,dword ptr [EBP + -0x1c]
004e75a3  IMUL ECX,ECX,0xe00
004e75a9  ADD EDX,ECX
004e75ab  MOV dword ptr [EBP + 0xfffff904],EDX
004e75b1  FILD dword ptr [EBP + 0xfffff904]
004e75b7  FMUL double ptr [EBP + -0x10]
004e75ba  CALL 0x00686cc0
004e75bf  MOV EDX,dword ptr [EBP + -0x38]
004e75c2  MOV word ptr [EDX + 0x330],AX
004e75c9  MOV EAX,dword ptr [EBP + -0x20]
004e75cc  SHL EAX,0x7
004e75cf  MOV ECX,dword ptr [EBP + -0x24]
004e75d2  IMUL ECX,ECX,0x180
004e75d8  ADD EAX,ECX
004e75da  MOV EDX,dword ptr [EBP + -0x18]
004e75dd  IMUL EDX,EDX,0x300
004e75e3  ADD EAX,EDX
004e75e5  MOV ECX,dword ptr [EBP + -0x14]
004e75e8  IMUL ECX,ECX,0x500
004e75ee  ADD EAX,ECX
004e75f0  MOV EDX,dword ptr [EBP + -0x34]
004e75f3  IMUL EDX,EDX,0x780
004e75f9  ADD EAX,EDX
004e75fb  MOV ECX,dword ptr [EBP + -0x28]
004e75fe  IMUL ECX,ECX,0xa80
004e7604  ADD EAX,ECX
004e7606  MOV EDX,dword ptr [EBP + -0x1c]
004e7609  IMUL EDX,EDX,0xe00
004e760f  ADD EAX,EDX
004e7611  MOV dword ptr [EBP + 0xfffff900],EAX
004e7617  FILD dword ptr [EBP + 0xfffff900]
004e761d  FMUL double ptr [EBP + -0x10]
004e7620  CALL 0x00686cc0
004e7625  MOV ECX,dword ptr [EBP + -0x38]
004e7628  MOV word ptr [ECX + 0x332],AX
004e762f  MOV EDX,dword ptr [EBP + -0x20]
004e7632  SHL EDX,0x7
004e7635  MOV EAX,dword ptr [EBP + -0x24]
004e7638  IMUL EAX,EAX,0x180
004e763e  ADD EDX,EAX
004e7640  MOV ECX,dword ptr [EBP + -0x18]
004e7643  IMUL ECX,ECX,0x300
004e7649  ADD EDX,ECX
004e764b  MOV EAX,dword ptr [EBP + -0x14]
004e764e  IMUL EAX,EAX,0x500
004e7654  ADD EDX,EAX
004e7656  MOV ECX,dword ptr [EBP + -0x34]
004e7659  IMUL ECX,ECX,0x780
004e765f  ADD EDX,ECX
004e7661  MOV EAX,dword ptr [EBP + -0x28]
004e7664  IMUL EAX,EAX,0xa80
004e766a  ADD EDX,EAX
004e766c  MOV ECX,dword ptr [EBP + -0x1c]
004e766f  IMUL ECX,ECX,0xe00
004e7675  ADD EDX,ECX
004e7677  MOV dword ptr [EBP + 0xfffff8fc],EDX
004e767d  FILD dword ptr [EBP + 0xfffff8fc]
004e7683  FMUL double ptr [EBP + -0x10]
004e7686  CALL 0x00686cc0
004e768b  MOV EDX,dword ptr [EBP + -0x38]
004e768e  MOV word ptr [EDX + 0x334],AX
004e7695  MOV EAX,dword ptr [EBP + -0x20]
004e7698  SHL EAX,0x7
004e769b  MOV ECX,dword ptr [EBP + -0x24]
004e769e  IMUL ECX,ECX,0x180
004e76a4  ADD EAX,ECX
004e76a6  MOV EDX,dword ptr [EBP + -0x18]
004e76a9  IMUL EDX,EDX,0x300
004e76af  ADD EAX,EDX
004e76b1  MOV ECX,dword ptr [EBP + -0x14]
004e76b4  IMUL ECX,ECX,0x500
004e76ba  ADD EAX,ECX
004e76bc  MOV EDX,dword ptr [EBP + -0x34]
004e76bf  IMUL EDX,EDX,0x780
004e76c5  ADD EAX,EDX
004e76c7  MOV ECX,dword ptr [EBP + -0x28]
004e76ca  IMUL ECX,ECX,0xa80
004e76d0  ADD EAX,ECX
004e76d2  MOV EDX,dword ptr [EBP + -0x1c]
004e76d5  IMUL EDX,EDX,0xe00
004e76db  ADD EAX,EDX
004e76dd  MOV dword ptr [EBP + 0xfffff8f8],EAX
004e76e3  FILD dword ptr [EBP + 0xfffff8f8]
004e76e9  FMUL double ptr [EBP + -0x10]
004e76ec  CALL 0x00686cc0
004e76f1  MOV ECX,dword ptr [EBP + -0x38]
004e76f4  MOV word ptr [ECX + 0x336],AX
004e76fb  MOV EDX,dword ptr [EBP + -0x24]
004e76fe  IMUL EDX,EDX,0x600
004e7704  MOV dword ptr [EBP + 0xfffff8f4],EDX
004e770a  FILD dword ptr [EBP + 0xfffff8f4]
004e7710  FDIV double ptr [0x006b9490]
004e7716  MOV EAX,dword ptr [EBP + -0x18]
004e7719  IMUL EAX,EAX,0x300
004e771f  MOV dword ptr [EBP + 0xfffff8f0],EAX
004e7725  FILD dword ptr [EBP + 0xfffff8f0]
004e772b  FADDP
004e772d  MOV ECX,dword ptr [EBP + -0x14]
004e7730  IMUL ECX,ECX,0x500
004e7736  MOV dword ptr [EBP + 0xfffff8ec],ECX
004e773c  FILD dword ptr [EBP + 0xfffff8ec]
004e7742  FADDP
004e7744  MOV EDX,dword ptr [EBP + -0x34]
004e7747  IMUL EDX,EDX,0x780
004e774d  MOV dword ptr [EBP + 0xfffff8e8],EDX
004e7753  FILD dword ptr [EBP + 0xfffff8e8]
004e7759  FADDP
004e775b  MOV EAX,dword ptr [EBP + -0x28]
004e775e  IMUL EAX,EAX,0xa80
004e7764  MOV dword ptr [EBP + 0xfffff8e4],EAX
004e776a  FILD dword ptr [EBP + 0xfffff8e4]
004e7770  FADDP
004e7772  MOV ECX,dword ptr [EBP + -0x1c]
004e7775  IMUL ECX,ECX,0xe00
004e777b  MOV dword ptr [EBP + 0xfffff8e0],ECX
004e7781  FILD dword ptr [EBP + 0xfffff8e0]
004e7787  FADDP
004e7789  FMUL double ptr [EBP + -0x10]
004e778c  CALL 0x00686cc0
004e7791  MOV EDX,dword ptr [EBP + -0x38]
004e7794  MOV word ptr [EDX + 0x338],AX
004e779b  MOV EAX,dword ptr [EBP + -0x18]
004e779e  IMUL EAX,EAX,0xf00
004e77a4  MOV dword ptr [EBP + 0xfffff8dc],EAX
004e77aa  FILD dword ptr [EBP + 0xfffff8dc]
004e77b0  FDIV double ptr [0x006b9490]
004e77b6  MOV ECX,dword ptr [EBP + -0x14]
004e77b9  IMUL ECX,ECX,0x500
004e77bf  MOV dword ptr [EBP + 0xfffff8d8],ECX
004e77c5  FILD dword ptr [EBP + 0xfffff8d8]
004e77cb  FADDP
004e77cd  MOV EDX,dword ptr [EBP + -0x34]
004e77d0  IMUL EDX,EDX,0x780
004e77d6  MOV dword ptr [EBP + 0xfffff8d4],EDX
004e77dc  FILD dword ptr [EBP + 0xfffff8d4]
004e77e2  FADDP
004e77e4  MOV EAX,dword ptr [EBP + -0x28]
004e77e7  IMUL EAX,EAX,0xa80
004e77ed  MOV dword ptr [EBP + 0xfffff8d0],EAX
004e77f3  FILD dword ptr [EBP + 0xfffff8d0]
004e77f9  FADDP
004e77fb  MOV ECX,dword ptr [EBP + -0x1c]
004e77fe  IMUL ECX,ECX,0xe00
004e7804  MOV dword ptr [EBP + 0xfffff8cc],ECX
004e780a  FILD dword ptr [EBP + 0xfffff8cc]
004e7810  FADDP
004e7812  FMUL double ptr [EBP + -0x10]
004e7815  CALL 0x00686cc0
004e781a  MOV EDX,dword ptr [EBP + -0x38]
004e781d  MOV word ptr [EDX + 0x33a],AX
004e7824  MOV EAX,dword ptr [EBP + -0x14]
004e7827  IMUL EAX,EAX,0x1e00
004e782d  MOV dword ptr [EBP + 0xfffff8c8],EAX
004e7833  FILD dword ptr [EBP + 0xfffff8c8]
004e7839  FDIV double ptr [0x006b9490]
004e783f  MOV ECX,dword ptr [EBP + -0x34]
004e7842  IMUL ECX,ECX,0x780
004e7848  MOV dword ptr [EBP + 0xfffff8c4],ECX
004e784e  FILD dword ptr [EBP + 0xfffff8c4]
004e7854  FADDP
004e7856  MOV EDX,dword ptr [EBP + -0x28]
004e7859  IMUL EDX,EDX,0xa80
004e785f  MOV dword ptr [EBP + 0xfffff8c0],EDX
004e7865  FILD dword ptr [EBP + 0xfffff8c0]
004e786b  FADDP
004e786d  MOV EAX,dword ptr [EBP + -0x1c]
004e7870  IMUL EAX,EAX,0xe00
004e7876  MOV dword ptr [EBP + 0xfffff8bc],EAX
004e787c  FILD dword ptr [EBP + 0xfffff8bc]
004e7882  FADDP
004e7884  FMUL double ptr [EBP + -0x10]
004e7887  CALL 0x00686cc0
004e788c  MOV ECX,dword ptr [EBP + -0x38]
004e788f  MOV word ptr [ECX + 0x33c],AX
004e7896  MOV EDX,dword ptr [EBP + -0x34]
004e7899  IMUL EDX,EDX,0x3480
004e789f  MOV dword ptr [EBP + 0xfffff8b8],EDX
004e78a5  FILD dword ptr [EBP + 0xfffff8b8]
004e78ab  FDIV double ptr [0x006b9490]
004e78b1  MOV EAX,dword ptr [EBP + -0x28]
004e78b4  IMUL EAX,EAX,0xa80
004e78ba  MOV dword ptr [EBP + 0xfffff8b4],EAX
004e78c0  FILD dword ptr [EBP + 0xfffff8b4]
004e78c6  FADDP
004e78c8  MOV ECX,dword ptr [EBP + -0x1c]
004e78cb  IMUL ECX,ECX,0xe00
004e78d1  MOV dword ptr [EBP + 0xfffff8b0],ECX
004e78d7  FILD dword ptr [EBP + 0xfffff8b0]
004e78dd  FADDP
004e78df  FMUL double ptr [EBP + -0x10]
004e78e2  CALL 0x00686cc0
004e78e7  MOV EDX,dword ptr [EBP + -0x38]
004e78ea  MOV word ptr [EDX + 0x33e],AX
004e78f1  MOV EAX,dword ptr [EBP + -0x28]
004e78f4  IMUL EAX,EAX,0x5400
004e78fa  MOV dword ptr [EBP + 0xfffff8ac],EAX
004e7900  FILD dword ptr [EBP + 0xfffff8ac]
004e7906  FDIV double ptr [0x006b9490]
004e790c  MOV ECX,dword ptr [EBP + -0x1c]
004e790f  IMUL ECX,ECX,0xe00
004e7915  MOV dword ptr [EBP + 0xfffff8a8],ECX
004e791b  FILD dword ptr [EBP + 0xfffff8a8]
004e7921  FADDP
004e7923  FMUL double ptr [EBP + -0x10]
004e7926  CALL 0x00686cc0
004e792b  MOV EDX,dword ptr [EBP + -0x38]
004e792e  MOV word ptr [EDX + 0x340],AX
004e7935  MOV EAX,dword ptr [EBP + -0x1c]
004e7938  IMUL EAX,EAX,0x7e00
004e793e  MOV dword ptr [EBP + 0xfffff8a4],EAX
004e7944  FILD dword ptr [EBP + 0xfffff8a4]
004e794a  FDIV double ptr [0x006b9490]
004e7950  FMUL double ptr [EBP + -0x10]
004e7953  CALL 0x00686cc0
004e7958  MOV ECX,dword ptr [EBP + -0x38]
004e795b  MOV word ptr [ECX + 0x342],AX
004e7962  MOV EDX,dword ptr [EBP + -0x38]
004e7965  MOV word ptr [EDX + 0x288],0x5
004e796e  MOV EAX,dword ptr [EBP + -0x38]
004e7971  MOV word ptr [EAX + 0x28a],0x1c
004e797a  MOV ECX,dword ptr [EBP + -0x38]
004e797d  MOV word ptr [ECX + 0x28c],0x2e
004e7986  MOV EDX,dword ptr [EBP + -0x38]
004e7989  MOV word ptr [EDX + 0x28e],0x16
004e7992  MOV EAX,dword ptr [EBP + -0x38]
004e7995  MOV word ptr [EAX + 0x290],0x4b
004e799e  MOV ECX,dword ptr [EBP + -0x38]
004e79a1  MOV word ptr [ECX + 0x292],0x22
004e79aa  MOV EDX,dword ptr [EBP + -0x38]
004e79ad  MOV word ptr [EDX + 0x294],0x69
004e79b6  MOV EAX,dword ptr [EBP + -0x38]
004e79b9  MOV word ptr [EAX + 0x296],0x2c
004e79c2  MOV ECX,dword ptr [EBP + -0x38]
004e79c5  MOV word ptr [ECX + 0x298],0x30
004e79ce  MOV EDX,dword ptr [EBP + -0x38]
004e79d1  MOV word ptr [EDX + 0x29a],0x14
004e79da  MOV EAX,dword ptr [EBP + -0x38]
004e79dd  MOV word ptr [EAX + 0x29c],0xa
004e79e6  MOV ECX,dword ptr [EBP + -0x38]
004e79e9  MOV word ptr [ECX + 0x29e],0x14
004e79f2  MOV EDX,dword ptr [EBP + -0x38]
004e79f5  MOV word ptr [EDX + 0x2a0],0x29
004e79fe  MOV EAX,dword ptr [EBP + -0x38]
004e7a01  MOV word ptr [EAX + 0x2a2],0x17
004e7a0a  MOV ECX,dword ptr [EBP + -0x38]
004e7a0d  MOV word ptr [ECX + 0x2a4],0x6
004e7a16  MOV EDX,dword ptr [EBP + -0x38]
004e7a19  MOV word ptr [EDX + 0x2a6],0x1e
004e7a22  MOV EAX,dword ptr [EBP + -0x38]
004e7a25  MOV word ptr [EAX + 0x2aa],0x4b
004e7a2e  MOV ECX,dword ptr [EBP + -0x38]
004e7a31  MOV word ptr [ECX + 0x2ac],0x32
004e7a3a  MOV EDX,dword ptr [EBP + -0x38]
004e7a3d  MOV word ptr [EDX + 0x2ae],0x1e
004e7a46  MOV EAX,dword ptr [EBP + -0x38]
004e7a49  MOV word ptr [EAX + 0x2b0],0x41
004e7a52  MOV ECX,dword ptr [EBP + -0x38]
004e7a55  MOV word ptr [ECX + 0x2b2],0x32
004e7a5e  MOV EDX,dword ptr [EBP + -0x38]
004e7a61  MOV word ptr [EDX + 0x2a8],0x5
004e7a6a  MOV EAX,dword ptr [EBP + -0x38]
004e7a6d  MOV word ptr [EAX + 0x2b4],0xc
004e7a76  MOV ECX,dword ptr [EBP + -0x38]
004e7a79  MOV word ptr [ECX + 0x2b6],0xf
004e7a82  MOV EDX,dword ptr [EBP + -0x38]
004e7a85  MOV word ptr [EDX + 0x2b8],0x28
004e7a8e  JMP 0x004e9360
004e7a93  MOV dword ptr [EBP + -0x20],0x3e8
004e7a9a  MOV dword ptr [EBP + -0x24],0x3ca
004e7aa1  MOV dword ptr [EBP + -0x18],0x384
004e7aa8  MOV dword ptr [EBP + -0x14],0x2ee
004e7aaf  MOV dword ptr [EBP + -0x34],0x15e
004e7ab6  MOV dword ptr [EBP + -0x28],0x64
004e7abd  MOV dword ptr [EBP + -0x1c],0x14
004e7ac4  FLD double ptr [0x006bfba0]
004e7aca  FSTP double ptr [EBP + -0x30]
004e7acd  FLD double ptr [0x006bfb98]
004e7ad3  FSTP double ptr [EBP + -0x8]
004e7ad6  FLD double ptr [0x006bfc28]
004e7adc  FSTP double ptr [EBP + -0x10]
004e7adf  MOV EAX,dword ptr [EBP + -0x38]
004e7ae2  MOV word ptr [EAX + 0x2ba],0xf
004e7aeb  MOV ECX,dword ptr [EBP + -0x38]
004e7aee  MOV word ptr [ECX + 0x2bc],0x33
004e7af7  MOV EDX,dword ptr [EBP + -0x38]
004e7afa  MOV word ptr [EDX + 0x2be],0x50
004e7b03  MOV EAX,dword ptr [EBP + -0x38]
004e7b06  MOV word ptr [EAX + 0x2c0],0x61
004e7b0f  MOV ECX,dword ptr [EBP + -0x38]
004e7b12  MOV word ptr [ECX + 0x2c2],0x72
004e7b1b  MOV EDX,dword ptr [EBP + -0x38]
004e7b1e  MOV word ptr [EDX + 0x2c4],0x84
004e7b27  MOV EAX,dword ptr [EBP + -0x38]
004e7b2a  MOV word ptr [EAX + 0x2c6],0x98
004e7b33  MOV ECX,dword ptr [EBP + -0x38]
004e7b36  MOV word ptr [ECX + 0x2c8],0xac
004e7b3f  MOV EDX,dword ptr [EBP + -0x38]
004e7b42  MOV word ptr [EDX + 0x2ca],0xc1
004e7b4b  MOV EAX,dword ptr [EBP + -0x38]
004e7b4e  MOV word ptr [EAX + 0x2cc],0xd8
004e7b57  MOV ECX,dword ptr [EBP + -0x38]
004e7b5a  MOV word ptr [ECX + 0x2ce],0xf0
004e7b63  MOV EDX,dword ptr [EBP + -0x38]
004e7b66  MOV word ptr [EDX + 0x2d0],0x109
004e7b6f  MOV EAX,dword ptr [EBP + -0x38]
004e7b72  MOV word ptr [EAX + 0x2d2],0x15c
004e7b7b  MOV ECX,dword ptr [EBP + -0x38]
004e7b7e  MOV word ptr [ECX + 0x2d4],0x1b7
004e7b87  MOV EDX,dword ptr [EBP + -0x38]
004e7b8a  MOV word ptr [EDX + 0x2d6],0x1cf
004e7b93  MOV EAX,dword ptr [EBP + -0x38]
004e7b96  MOV word ptr [EAX + 0x2d8],0x215
004e7b9f  MOV ECX,dword ptr [EBP + -0x38]
004e7ba2  MOV word ptr [ECX + 0x2da],0x267
004e7bab  MOV EDX,dword ptr [EBP + -0x38]
004e7bae  MOV word ptr [EDX + 0x2dc],0x279
004e7bb7  MOV EAX,dword ptr [EBP + -0x38]
004e7bba  MOV word ptr [EAX + 0x2de],0x2aa
004e7bc3  MOV ECX,dword ptr [EBP + -0x38]
004e7bc6  MOV word ptr [ECX + 0x2e0],0x2ea
004e7bcf  MOV EDX,dword ptr [EBP + -0x38]
004e7bd2  MOV word ptr [EDX + 0x2e2],0x301
004e7bdb  MOV EAX,dword ptr [EBP + -0x38]
004e7bde  MOV word ptr [EAX + 0x2e4],0x31c
004e7be7  MOV ECX,dword ptr [EBP + -0x38]
004e7bea  MOV word ptr [ECX + 0x2e6],0x340
004e7bf3  MOV EDX,dword ptr [EBP + -0x38]
004e7bf6  MOV word ptr [EDX + 0x2e8],0x355
004e7bff  MOV EAX,dword ptr [EBP + -0x38]
004e7c02  MOV word ptr [EAX + 0x2ea],0x360
004e7c0b  MOV ECX,dword ptr [EBP + -0x38]
004e7c0e  MOV word ptr [ECX + 0x2ec],0x366
004e7c17  MOV EDX,dword ptr [EBP + -0x38]
004e7c1a  MOV word ptr [EDX + 0x2ee],0x368
004e7c23  MOV EAX,dword ptr [EBP + -0x38]
004e7c26  MOV word ptr [EAX + 0x2f0],0x379
004e7c2f  MOV ECX,dword ptr [EBP + -0x38]
004e7c32  MOV word ptr [ECX + 0x2f2],0x392
004e7c3b  MOV EDX,dword ptr [EBP + -0x38]
004e7c3e  MOV word ptr [EDX + 0x2f4],0x3a0
004e7c47  MOV EAX,dword ptr [EBP + -0x38]
004e7c4a  MOV word ptr [EAX + 0x2f6],0x3a6
004e7c53  MOV ECX,dword ptr [EBP + -0x38]
004e7c56  MOV word ptr [ECX + 0x2f8],0x3a8
004e7c5f  MOV EDX,dword ptr [EBP + -0x38]
004e7c62  MOV word ptr [EDX + 0x2fa],0x3b4
004e7c6b  MOV EAX,dword ptr [EBP + -0x38]
004e7c6e  MOV word ptr [EAX + 0x2fc],0x3c3
004e7c77  MOV ECX,dword ptr [EBP + -0x38]
004e7c7a  MOV word ptr [ECX + 0x2fe],0x3cb
004e7c83  MOV EDX,dword ptr [EBP + -0x38]
004e7c86  MOV word ptr [EDX + 0x300],0x3ce
004e7c8f  MOV EAX,dword ptr [EBP + -0x38]
004e7c92  MOV word ptr [EAX + 0x302],0x3d4
004e7c9b  MOV ECX,dword ptr [EBP + -0x38]
004e7c9e  MOV word ptr [ECX + 0x304],0x3dc
004e7ca7  MOV EDX,dword ptr [EBP + -0x38]
004e7caa  MOV word ptr [EDX + 0x306],0x3df
004e7cb3  MOV EAX,dword ptr [EBP + -0x38]
004e7cb6  MOV word ptr [EAX + 0x308],0x3e2
004e7cbf  MOV ECX,dword ptr [EBP + -0x38]
004e7cc2  MOV word ptr [ECX + 0x30a],0x3e5
004e7ccb  MOV EDX,dword ptr [EBP + -0x38]
004e7cce  MOV word ptr [EDX + 0x30c],0x3e8
004e7cd7  MOV EAX,dword ptr [EBP + -0x24]
004e7cda  SHL EAX,0x2
004e7cdd  MOV ECX,dword ptr [EBP + -0x20]
004e7ce0  LEA EDX,[EAX + ECX*0x4]
004e7ce3  MOV EAX,dword ptr [EBP + -0x18]
004e7ce6  LEA ECX,[EDX + EAX*0x4]
004e7ce9  MOV EDX,dword ptr [EBP + -0x14]
004e7cec  LEA EAX,[ECX + EDX*0x4]
004e7cef  MOV ECX,dword ptr [EBP + -0x34]
004e7cf2  LEA EDX,[EAX + ECX*0x4]
004e7cf5  MOV EAX,dword ptr [EBP + -0x28]
004e7cf8  LEA ECX,[EDX + EAX*0x4]
004e7cfb  MOV EDX,dword ptr [EBP + -0x1c]
004e7cfe  LEA EAX,[ECX + EDX*0x4]
004e7d01  MOV dword ptr [EBP + 0xfffff8a0],EAX
004e7d07  FILD dword ptr [EBP + 0xfffff8a0]
004e7d0d  FMUL double ptr [EBP + -0x30]
004e7d10  CALL 0x00686cc0
004e7d15  MOV ECX,dword ptr [EBP + -0x38]
004e7d18  MOV word ptr [ECX + 0x30e],AX
004e7d1f  MOV EDX,dword ptr [EBP + -0x24]
004e7d22  SHL EDX,0x2
004e7d25  MOV EAX,dword ptr [EBP + -0x20]
004e7d28  LEA ECX,[EDX + EAX*0x4]
004e7d2b  MOV EDX,dword ptr [EBP + -0x18]
004e7d2e  LEA EAX,[ECX + EDX*0x4]
004e7d31  MOV ECX,dword ptr [EBP + -0x14]
004e7d34  LEA EDX,[EAX + ECX*0x4]
004e7d37  MOV EAX,dword ptr [EBP + -0x34]
004e7d3a  LEA ECX,[EDX + EAX*0x4]
004e7d3d  MOV EDX,dword ptr [EBP + -0x28]
004e7d40  LEA EAX,[ECX + EDX*0x4]
004e7d43  MOV ECX,dword ptr [EBP + -0x1c]
004e7d46  LEA EDX,[EAX + ECX*0x4]
004e7d49  MOV dword ptr [EBP + 0xfffff89c],EDX
004e7d4f  FILD dword ptr [EBP + 0xfffff89c]
004e7d55  FMUL double ptr [EBP + -0x30]
004e7d58  CALL 0x00686cc0
004e7d5d  MOV ECX,dword ptr [EBP + -0x38]
004e7d60  MOV word ptr [ECX + 0x310],AX
004e7d67  MOV EDX,dword ptr [EBP + -0x18]
004e7d6a  SHL EDX,0x2
004e7d6d  MOV EAX,dword ptr [EBP + -0x24]
004e7d70  LEA ECX,[EDX + EAX*0x8]
004e7d73  MOV EDX,dword ptr [EBP + -0x14]
004e7d76  LEA EAX,[ECX + EDX*0x4]
004e7d79  MOV ECX,dword ptr [EBP + -0x34]
004e7d7c  LEA EDX,[EAX + ECX*0x4]
004e7d7f  MOV EAX,dword ptr [EBP + -0x28]
004e7d82  LEA ECX,[EDX + EAX*0x4]
004e7d85  MOV EDX,dword ptr [EBP + -0x1c]
004e7d88  LEA EAX,[ECX + EDX*0x4]
004e7d8b  MOV dword ptr [EBP + 0xfffff898],EAX
004e7d91  FILD dword ptr [EBP + 0xfffff898]
004e7d97  FMUL double ptr [EBP + -0x30]
004e7d9a  CALL 0x00686cc0
004e7d9f  MOV ECX,dword ptr [EBP + -0x38]
004e7da2  MOV word ptr [ECX + 0x312],AX
004e7da9  MOV EDX,dword ptr [EBP + -0x18]
004e7dac  IMUL EDX,EDX,0xc
004e7daf  MOV EAX,dword ptr [EBP + -0x14]
004e7db2  LEA ECX,[EDX + EAX*0x4]
004e7db5  MOV EDX,dword ptr [EBP + -0x34]
004e7db8  LEA EAX,[ECX + EDX*0x4]
004e7dbb  MOV ECX,dword ptr [EBP + -0x28]
004e7dbe  LEA EDX,[EAX + ECX*0x4]
004e7dc1  MOV EAX,dword ptr [EBP + -0x1c]
004e7dc4  LEA ECX,[EDX + EAX*0x4]
004e7dc7  MOV dword ptr [EBP + 0xfffff894],ECX
004e7dcd  FILD dword ptr [EBP + 0xfffff894]
004e7dd3  FMUL double ptr [EBP + -0x30]
004e7dd6  CALL 0x00686cc0
004e7ddb  MOV EDX,dword ptr [EBP + -0x38]
004e7dde  MOV word ptr [EDX + 0x314],AX
004e7de5  MOV EAX,dword ptr [EBP + -0x14]
004e7de8  SHL EAX,0x4
004e7deb  MOV ECX,dword ptr [EBP + -0x34]
004e7dee  LEA EDX,[EAX + ECX*0x4]
004e7df1  MOV EAX,dword ptr [EBP + -0x28]
004e7df4  LEA ECX,[EDX + EAX*0x4]
004e7df7  MOV EDX,dword ptr [EBP + -0x1c]
004e7dfa  LEA EAX,[ECX + EDX*0x4]
004e7dfd  MOV dword ptr [EBP + 0xfffff890],EAX
004e7e03  FILD dword ptr [EBP + 0xfffff890]
004e7e09  FMUL double ptr [EBP + -0x30]
004e7e0c  CALL 0x00686cc0
004e7e11  MOV ECX,dword ptr [EBP + -0x38]
004e7e14  MOV word ptr [ECX + 0x316],AX
004e7e1b  MOV EDX,dword ptr [EBP + -0x34]
004e7e1e  IMUL EDX,EDX,0x14
004e7e21  MOV EAX,dword ptr [EBP + -0x28]
004e7e24  LEA ECX,[EDX + EAX*0x4]
004e7e27  MOV EDX,dword ptr [EBP + -0x1c]
004e7e2a  LEA EAX,[ECX + EDX*0x4]
004e7e2d  MOV dword ptr [EBP + 0xfffff88c],EAX
004e7e33  FILD dword ptr [EBP + 0xfffff88c]
004e7e39  FMUL double ptr [EBP + -0x30]
004e7e3c  CALL 0x00686cc0
004e7e41  MOV ECX,dword ptr [EBP + -0x38]
004e7e44  MOV word ptr [ECX + 0x318],AX
004e7e4b  MOV EDX,dword ptr [EBP + -0x28]
004e7e4e  IMUL EDX,EDX,0x18
004e7e51  MOV EAX,dword ptr [EBP + -0x1c]
004e7e54  LEA ECX,[EDX + EAX*0x4]
004e7e57  MOV dword ptr [EBP + 0xfffff888],ECX
004e7e5d  FILD dword ptr [EBP + 0xfffff888]
004e7e63  FMUL double ptr [EBP + -0x30]
004e7e66  CALL 0x00686cc0
004e7e6b  MOV EDX,dword ptr [EBP + -0x38]
004e7e6e  MOV word ptr [EDX + 0x31a],AX
004e7e75  MOV EAX,dword ptr [EBP + -0x1c]
004e7e78  IMUL EAX,EAX,0x1c
004e7e7b  MOV dword ptr [EBP + 0xfffff884],EAX
004e7e81  FILD dword ptr [EBP + 0xfffff884]
004e7e87  FMUL double ptr [EBP + -0x30]
004e7e8a  CALL 0x00686cc0
004e7e8f  MOV ECX,dword ptr [EBP + -0x38]
004e7e92  MOV word ptr [ECX + 0x31c],AX
004e7e99  MOV EDX,dword ptr [EBP + -0x20]
004e7e9c  SHL EDX,0x4
004e7e9f  MOV EAX,dword ptr [EBP + -0x24]
004e7ea2  SHL EAX,0x5
004e7ea5  ADD EDX,EAX
004e7ea7  MOV ECX,dword ptr [EBP + -0x18]
004e7eaa  IMUL ECX,ECX,0x30
004e7ead  ADD EDX,ECX
004e7eaf  MOV EAX,dword ptr [EBP + -0x14]
004e7eb2  SHL EAX,0x6
004e7eb5  ADD EDX,EAX
004e7eb7  MOV ECX,dword ptr [EBP + -0x34]
004e7eba  IMUL ECX,ECX,0x50
004e7ebd  ADD EDX,ECX
004e7ebf  MOV EAX,dword ptr [EBP + -0x28]
004e7ec2  IMUL EAX,EAX,0x60
004e7ec5  ADD EDX,EAX
004e7ec7  MOV ECX,dword ptr [EBP + -0x1c]
004e7eca  IMUL ECX,ECX,0x70
004e7ecd  ADD EDX,ECX
004e7ecf  MOV dword ptr [EBP + 0xfffff880],EDX
004e7ed5  FILD dword ptr [EBP + 0xfffff880]
004e7edb  FMUL double ptr [EBP + -0x8]
004e7ede  CALL 0x00686cc0
004e7ee3  MOV EDX,dword ptr [EBP + -0x38]
004e7ee6  MOV word ptr [EDX + 0x31e],AX
004e7eed  MOV EAX,dword ptr [EBP + -0x20]
004e7ef0  SHL EAX,0x4
004e7ef3  MOV ECX,dword ptr [EBP + -0x24]
004e7ef6  SHL ECX,0x5
004e7ef9  ADD EAX,ECX
004e7efb  MOV EDX,dword ptr [EBP + -0x18]
004e7efe  IMUL EDX,EDX,0x30
004e7f01  ADD EAX,EDX
004e7f03  MOV ECX,dword ptr [EBP + -0x14]
004e7f06  SHL ECX,0x6
004e7f09  ADD EAX,ECX
004e7f0b  MOV EDX,dword ptr [EBP + -0x34]
004e7f0e  IMUL EDX,EDX,0x50
004e7f11  ADD EAX,EDX
004e7f13  MOV ECX,dword ptr [EBP + -0x28]
004e7f16  IMUL ECX,ECX,0x60
004e7f19  ADD EAX,ECX
004e7f1b  MOV EDX,dword ptr [EBP + -0x1c]
004e7f1e  IMUL EDX,EDX,0x70
004e7f21  ADD EAX,EDX
004e7f23  MOV dword ptr [EBP + 0xfffff87c],EAX
004e7f29  FILD dword ptr [EBP + 0xfffff87c]
004e7f2f  FMUL double ptr [EBP + -0x8]
004e7f32  CALL 0x00686cc0
004e7f37  MOV ECX,dword ptr [EBP + -0x38]
004e7f3a  MOV word ptr [ECX + 0x320],AX
004e7f41  MOV EDX,dword ptr [EBP + -0x20]
004e7f44  SHL EDX,0x4
004e7f47  MOV EAX,dword ptr [EBP + -0x24]
004e7f4a  SHL EAX,0x5
004e7f4d  ADD EDX,EAX
004e7f4f  MOV ECX,dword ptr [EBP + -0x18]
004e7f52  IMUL ECX,ECX,0x30
004e7f55  ADD EDX,ECX
004e7f57  MOV EAX,dword ptr [EBP + -0x14]
004e7f5a  SHL EAX,0x6
004e7f5d  ADD EDX,EAX
004e7f5f  MOV ECX,dword ptr [EBP + -0x34]
004e7f62  IMUL ECX,ECX,0x50
004e7f65  ADD EDX,ECX
004e7f67  MOV EAX,dword ptr [EBP + -0x28]
004e7f6a  IMUL EAX,EAX,0x60
004e7f6d  ADD EDX,EAX
004e7f6f  MOV ECX,dword ptr [EBP + -0x1c]
004e7f72  IMUL ECX,ECX,0x70
004e7f75  ADD EDX,ECX
004e7f77  MOV dword ptr [EBP + 0xfffff878],EDX
004e7f7d  FILD dword ptr [EBP + 0xfffff878]
004e7f83  FMUL double ptr [EBP + -0x8]
004e7f86  CALL 0x00686cc0
004e7f8b  MOV EDX,dword ptr [EBP + -0x38]
004e7f8e  MOV word ptr [EDX + 0x322],AX
004e7f95  MOV EAX,dword ptr [EBP + -0x24]
004e7f98  IMUL EAX,EAX,0x60
004e7f9b  MOV dword ptr [EBP + 0xfffff874],EAX
004e7fa1  FILD dword ptr [EBP + 0xfffff874]
004e7fa7  FDIV double ptr [0x006b3740]
004e7fad  MOV ECX,dword ptr [EBP + -0x18]
004e7fb0  IMUL ECX,ECX,0x30
004e7fb3  MOV dword ptr [EBP + 0xfffff870],ECX
004e7fb9  FILD dword ptr [EBP + 0xfffff870]
004e7fbf  FADDP
004e7fc1  MOV EDX,dword ptr [EBP + -0x14]
004e7fc4  SHL EDX,0x6
004e7fc7  MOV dword ptr [EBP + 0xfffff86c],EDX
004e7fcd  FILD dword ptr [EBP + 0xfffff86c]
004e7fd3  FADDP
004e7fd5  MOV EAX,dword ptr [EBP + -0x34]
004e7fd8  IMUL EAX,EAX,0x50
004e7fdb  MOV dword ptr [EBP + 0xfffff868],EAX
004e7fe1  FILD dword ptr [EBP + 0xfffff868]
004e7fe7  FADDP
004e7fe9  MOV ECX,dword ptr [EBP + -0x28]
004e7fec  IMUL ECX,ECX,0x60
004e7fef  MOV dword ptr [EBP + 0xfffff864],ECX
004e7ff5  FILD dword ptr [EBP + 0xfffff864]
004e7ffb  FADDP
004e7ffd  MOV EDX,dword ptr [EBP + -0x1c]
004e8000  IMUL EDX,EDX,0x70
004e8003  MOV dword ptr [EBP + 0xfffff860],EDX
004e8009  FILD dword ptr [EBP + 0xfffff860]
004e800f  FADDP
004e8011  FMUL double ptr [EBP + -0x8]
004e8014  CALL 0x00686cc0
004e8019  MOV ECX,dword ptr [EBP + -0x38]
004e801c  MOV word ptr [ECX + 0x324],AX
004e8023  MOV EDX,dword ptr [EBP + -0x18]
004e8026  IMUL EDX,EDX,0xc0
004e802c  MOV dword ptr [EBP + 0xfffff85c],EDX
004e8032  FILD dword ptr [EBP + 0xfffff85c]
004e8038  FDIV double ptr [0x006b3740]
004e803e  MOV EAX,dword ptr [EBP + -0x14]
004e8041  SHL EAX,0x6
004e8044  MOV dword ptr [EBP + 0xfffff858],EAX
004e804a  FILD dword ptr [EBP + 0xfffff858]
004e8050  FADDP
004e8052  MOV ECX,dword ptr [EBP + -0x34]
004e8055  IMUL ECX,ECX,0x50
004e8058  MOV dword ptr [EBP + 0xfffff854],ECX
004e805e  FILD dword ptr [EBP + 0xfffff854]
004e8064  FADDP
004e8066  MOV EDX,dword ptr [EBP + -0x28]
004e8069  IMUL EDX,EDX,0x60
004e806c  MOV dword ptr [EBP + 0xfffff850],EDX
004e8072  FILD dword ptr [EBP + 0xfffff850]
004e8078  FADDP
004e807a  MOV EAX,dword ptr [EBP + -0x1c]
004e807d  IMUL EAX,EAX,0x70
004e8080  MOV dword ptr [EBP + 0xfffff84c],EAX
004e8086  FILD dword ptr [EBP + 0xfffff84c]
004e808c  FADDP
004e808e  FMUL double ptr [EBP + -0x8]
004e8091  CALL 0x00686cc0
004e8096  MOV ECX,dword ptr [EBP + -0x38]
004e8099  MOV word ptr [ECX + 0x326],AX
004e80a0  MOV EDX,dword ptr [EBP + -0x14]
004e80a3  IMUL EDX,EDX,0x140
004e80a9  MOV dword ptr [EBP + 0xfffff848],EDX
004e80af  FILD dword ptr [EBP + 0xfffff848]
004e80b5  FDIV double ptr [0x006b3740]
004e80bb  MOV EAX,dword ptr [EBP + -0x34]
004e80be  IMUL EAX,EAX,0x50
004e80c1  MOV dword ptr [EBP + 0xfffff844],EAX
004e80c7  FILD dword ptr [EBP + 0xfffff844]
004e80cd  FADDP
004e80cf  MOV ECX,dword ptr [EBP + -0x28]
004e80d2  IMUL ECX,ECX,0x60
004e80d5  MOV dword ptr [EBP + 0xfffff840],ECX
004e80db  FILD dword ptr [EBP + 0xfffff840]
004e80e1  FADDP
004e80e3  MOV EDX,dword ptr [EBP + -0x1c]
004e80e6  IMUL EDX,EDX,0x70
004e80e9  MOV dword ptr [EBP + 0xfffff83c],EDX
004e80ef  FILD dword ptr [EBP + 0xfffff83c]
004e80f5  FADDP
004e80f7  FMUL double ptr [EBP + -0x8]
004e80fa  CALL 0x00686cc0
004e80ff  MOV ECX,dword ptr [EBP + -0x38]
004e8102  MOV word ptr [ECX + 0x328],AX
004e8109  MOV EDX,dword ptr [EBP + -0x34]
004e810c  IMUL EDX,EDX,0x1e0
004e8112  MOV dword ptr [EBP + 0xfffff838],EDX
004e8118  FILD dword ptr [EBP + 0xfffff838]
004e811e  FDIV double ptr [0x006b3740]
004e8124  MOV EAX,dword ptr [EBP + -0x28]
004e8127  IMUL EAX,EAX,0x60
004e812a  MOV dword ptr [EBP + 0xfffff834],EAX
004e8130  FILD dword ptr [EBP + 0xfffff834]
004e8136  FADDP
004e8138  MOV ECX,dword ptr [EBP + -0x1c]
004e813b  IMUL ECX,ECX,0x70
004e813e  MOV dword ptr [EBP + 0xfffff830],ECX
004e8144  FILD dword ptr [EBP + 0xfffff830]
004e814a  FADDP
004e814c  FMUL double ptr [EBP + -0x8]
004e814f  CALL 0x00686cc0
004e8154  MOV EDX,dword ptr [EBP + -0x38]
004e8157  MOV word ptr [EDX + 0x32a],AX
004e815e  MOV EAX,dword ptr [EBP + -0x28]
004e8161  IMUL EAX,EAX,0x2a0
004e8167  MOV dword ptr [EBP + 0xfffff82c],EAX
004e816d  FILD dword ptr [EBP + 0xfffff82c]
004e8173  FDIV double ptr [0x006b3740]
004e8179  MOV ECX,dword ptr [EBP + -0x1c]
004e817c  IMUL ECX,ECX,0x70
004e817f  MOV dword ptr [EBP + 0xfffff828],ECX
004e8185  FILD dword ptr [EBP + 0xfffff828]
004e818b  FADDP
004e818d  FMUL double ptr [EBP + -0x8]
004e8190  CALL 0x00686cc0
004e8195  MOV EDX,dword ptr [EBP + -0x38]
004e8198  MOV word ptr [EDX + 0x32c],AX
004e819f  MOV EAX,dword ptr [EBP + -0x1c]
004e81a2  IMUL EAX,EAX,0x380
004e81a8  MOV dword ptr [EBP + 0xfffff824],EAX
004e81ae  FILD dword ptr [EBP + 0xfffff824]
004e81b4  FDIV double ptr [0x006b3740]
004e81ba  FMUL double ptr [EBP + -0x8]
004e81bd  CALL 0x00686cc0
004e81c2  MOV ECX,dword ptr [EBP + -0x38]
004e81c5  MOV word ptr [ECX + 0x32e],AX
004e81cc  MOV EDX,dword ptr [EBP + -0x20]
004e81cf  SHL EDX,0x7
004e81d2  MOV EAX,dword ptr [EBP + -0x24]
004e81d5  IMUL EAX,EAX,0x180
004e81db  ADD EDX,EAX
004e81dd  MOV ECX,dword ptr [EBP + -0x18]
004e81e0  IMUL ECX,ECX,0x300
004e81e6  ADD EDX,ECX
004e81e8  MOV EAX,dword ptr [EBP + -0x14]
004e81eb  IMUL EAX,EAX,0x500
004e81f1  ADD EDX,EAX
004e81f3  MOV ECX,dword ptr [EBP + -0x34]
004e81f6  IMUL ECX,ECX,0x780
004e81fc  ADD EDX,ECX
004e81fe  MOV EAX,dword ptr [EBP + -0x28]
004e8201  IMUL EAX,EAX,0xa80
004e8207  ADD EDX,EAX
004e8209  MOV ECX,dword ptr [EBP + -0x1c]
004e820c  IMUL ECX,ECX,0xe00
004e8212  ADD EDX,ECX
004e8214  MOV dword ptr [EBP + 0xfffff820],EDX
004e821a  FILD dword ptr [EBP + 0xfffff820]
004e8220  FMUL double ptr [EBP + -0x10]
004e8223  CALL 0x00686cc0
004e8228  MOV EDX,dword ptr [EBP + -0x38]
004e822b  MOV word ptr [EDX + 0x330],AX
004e8232  MOV EAX,dword ptr [EBP + -0x20]
004e8235  SHL EAX,0x7
004e8238  MOV ECX,dword ptr [EBP + -0x24]
004e823b  IMUL ECX,ECX,0x180
004e8241  ADD EAX,ECX
004e8243  MOV EDX,dword ptr [EBP + -0x18]
004e8246  IMUL EDX,EDX,0x300
004e824c  ADD EAX,EDX
004e824e  MOV ECX,dword ptr [EBP + -0x14]
004e8251  IMUL ECX,ECX,0x500
004e8257  ADD EAX,ECX
004e8259  MOV EDX,dword ptr [EBP + -0x34]
004e825c  IMUL EDX,EDX,0x780
004e8262  ADD EAX,EDX
004e8264  MOV ECX,dword ptr [EBP + -0x28]
004e8267  IMUL ECX,ECX,0xa80
004e826d  ADD EAX,ECX
004e826f  MOV EDX,dword ptr [EBP + -0x1c]
004e8272  IMUL EDX,EDX,0xe00
004e8278  ADD EAX,EDX
004e827a  MOV dword ptr [EBP + 0xfffff81c],EAX
004e8280  FILD dword ptr [EBP + 0xfffff81c]
004e8286  FMUL double ptr [EBP + -0x10]
004e8289  CALL 0x00686cc0
004e828e  MOV ECX,dword ptr [EBP + -0x38]
004e8291  MOV word ptr [ECX + 0x332],AX
004e8298  MOV EDX,dword ptr [EBP + -0x20]
004e829b  SHL EDX,0x7
004e829e  MOV EAX,dword ptr [EBP + -0x24]
004e82a1  IMUL EAX,EAX,0x180
004e82a7  ADD EDX,EAX
004e82a9  MOV ECX,dword ptr [EBP + -0x18]
004e82ac  IMUL ECX,ECX,0x300
004e82b2  ADD EDX,ECX
004e82b4  MOV EAX,dword ptr [EBP + -0x14]
004e82b7  IMUL EAX,EAX,0x500
004e82bd  ADD EDX,EAX
004e82bf  MOV ECX,dword ptr [EBP + -0x34]
004e82c2  IMUL ECX,ECX,0x780
004e82c8  ADD EDX,ECX
004e82ca  MOV EAX,dword ptr [EBP + -0x28]
004e82cd  IMUL EAX,EAX,0xa80
004e82d3  ADD EDX,EAX
004e82d5  MOV ECX,dword ptr [EBP + -0x1c]
004e82d8  IMUL ECX,ECX,0xe00
004e82de  ADD EDX,ECX
004e82e0  MOV dword ptr [EBP + 0xfffff818],EDX
004e82e6  FILD dword ptr [EBP + 0xfffff818]
004e82ec  FMUL double ptr [EBP + -0x10]
004e82ef  CALL 0x00686cc0
004e82f4  MOV EDX,dword ptr [EBP + -0x38]
004e82f7  MOV word ptr [EDX + 0x334],AX
004e82fe  MOV EAX,dword ptr [EBP + -0x20]
004e8301  SHL EAX,0x7
004e8304  MOV ECX,dword ptr [EBP + -0x24]
004e8307  IMUL ECX,ECX,0x180
004e830d  ADD EAX,ECX
004e830f  MOV EDX,dword ptr [EBP + -0x18]
004e8312  IMUL EDX,EDX,0x300
004e8318  ADD EAX,EDX
004e831a  MOV ECX,dword ptr [EBP + -0x14]
004e831d  IMUL ECX,ECX,0x500
004e8323  ADD EAX,ECX
004e8325  MOV EDX,dword ptr [EBP + -0x34]
004e8328  IMUL EDX,EDX,0x780
004e832e  ADD EAX,EDX
004e8330  MOV ECX,dword ptr [EBP + -0x28]
004e8333  IMUL ECX,ECX,0xa80
004e8339  ADD EAX,ECX
004e833b  MOV EDX,dword ptr [EBP + -0x1c]
004e833e  IMUL EDX,EDX,0xe00
004e8344  ADD EAX,EDX
004e8346  MOV dword ptr [EBP + 0xfffff814],EAX
004e834c  FILD dword ptr [EBP + 0xfffff814]
004e8352  FMUL double ptr [EBP + -0x10]
004e8355  CALL 0x00686cc0
004e835a  MOV ECX,dword ptr [EBP + -0x38]
004e835d  MOV word ptr [ECX + 0x336],AX
004e8364  MOV EDX,dword ptr [EBP + -0x24]
004e8367  IMUL EDX,EDX,0x600
004e836d  MOV dword ptr [EBP + 0xfffff810],EDX
004e8373  FILD dword ptr [EBP + 0xfffff810]
004e8379  FDIV double ptr [0x006b9490]
004e837f  MOV EAX,dword ptr [EBP + -0x18]
004e8382  IMUL EAX,EAX,0x300
004e8388  MOV dword ptr [EBP + 0xfffff80c],EAX
004e838e  FILD dword ptr [EBP + 0xfffff80c]
004e8394  FADDP
004e8396  MOV ECX,dword ptr [EBP + -0x14]
004e8399  IMUL ECX,ECX,0x500
004e839f  MOV dword ptr [EBP + 0xfffff808],ECX
004e83a5  FILD dword ptr [EBP + 0xfffff808]
004e83ab  FADDP
004e83ad  MOV EDX,dword ptr [EBP + -0x34]
004e83b0  IMUL EDX,EDX,0x780
004e83b6  MOV dword ptr [EBP + 0xfffff804],EDX
004e83bc  FILD dword ptr [EBP + 0xfffff804]
004e83c2  FADDP
004e83c4  MOV EAX,dword ptr [EBP + -0x28]
004e83c7  IMUL EAX,EAX,0xa80
004e83cd  MOV dword ptr [EBP + 0xfffff800],EAX
004e83d3  FILD dword ptr [EBP + 0xfffff800]
004e83d9  FADDP
004e83db  MOV ECX,dword ptr [EBP + -0x1c]
004e83de  IMUL ECX,ECX,0xe00
004e83e4  MOV dword ptr [EBP + 0xfffff7fc],ECX
004e83ea  FILD dword ptr [EBP + 0xfffff7fc]
004e83f0  FADDP
004e83f2  FMUL double ptr [EBP + -0x10]
004e83f5  CALL 0x00686cc0
004e83fa  MOV EDX,dword ptr [EBP + -0x38]
004e83fd  MOV word ptr [EDX + 0x338],AX
004e8404  MOV EAX,dword ptr [EBP + -0x18]
004e8407  IMUL EAX,EAX,0xf00
004e840d  MOV dword ptr [EBP + 0xfffff7f8],EAX
004e8413  FILD dword ptr [EBP + 0xfffff7f8]
004e8419  FDIV double ptr [0x006b9490]
004e841f  MOV ECX,dword ptr [EBP + -0x14]
004e8422  IMUL ECX,ECX,0x500
004e8428  MOV dword ptr [EBP + 0xfffff7f4],ECX
004e842e  FILD dword ptr [EBP + 0xfffff7f4]
004e8434  FADDP
004e8436  MOV EDX,dword ptr [EBP + -0x34]
004e8439  IMUL EDX,EDX,0x780
004e843f  MOV dword ptr [EBP + 0xfffff7f0],EDX
004e8445  FILD dword ptr [EBP + 0xfffff7f0]
004e844b  FADDP
004e844d  MOV EAX,dword ptr [EBP + -0x28]
004e8450  IMUL EAX,EAX,0xa80
004e8456  MOV dword ptr [EBP + 0xfffff7ec],EAX
004e845c  FILD dword ptr [EBP + 0xfffff7ec]
004e8462  FADDP
004e8464  MOV ECX,dword ptr [EBP + -0x1c]
004e8467  IMUL ECX,ECX,0xe00
004e846d  MOV dword ptr [EBP + 0xfffff7e8],ECX
004e8473  FILD dword ptr [EBP + 0xfffff7e8]
004e8479  FADDP
004e847b  FMUL double ptr [EBP + -0x10]
004e847e  CALL 0x00686cc0
004e8483  MOV EDX,dword ptr [EBP + -0x38]
004e8486  MOV word ptr [EDX + 0x33a],AX
004e848d  MOV EAX,dword ptr [EBP + -0x14]
004e8490  IMUL EAX,EAX,0x1e00
004e8496  MOV dword ptr [EBP + 0xfffff7e4],EAX
004e849c  FILD dword ptr [EBP + 0xfffff7e4]
004e84a2  FDIV double ptr [0x006b9490]
004e84a8  MOV ECX,dword ptr [EBP + -0x34]
004e84ab  IMUL ECX,ECX,0x780
004e84b1  MOV dword ptr [EBP + 0xfffff7e0],ECX
004e84b7  FILD dword ptr [EBP + 0xfffff7e0]
004e84bd  FADDP
004e84bf  MOV EDX,dword ptr [EBP + -0x28]
004e84c2  IMUL EDX,EDX,0xa80
004e84c8  MOV dword ptr [EBP + 0xfffff7dc],EDX
004e84ce  FILD dword ptr [EBP + 0xfffff7dc]
004e84d4  FADDP
004e84d6  MOV EAX,dword ptr [EBP + -0x1c]
004e84d9  IMUL EAX,EAX,0xe00
004e84df  MOV dword ptr [EBP + 0xfffff7d8],EAX
004e84e5  FILD dword ptr [EBP + 0xfffff7d8]
004e84eb  FADDP
004e84ed  FMUL double ptr [EBP + -0x10]
004e84f0  CALL 0x00686cc0
004e84f5  MOV ECX,dword ptr [EBP + -0x38]
004e84f8  MOV word ptr [ECX + 0x33c],AX
004e84ff  MOV EDX,dword ptr [EBP + -0x34]
004e8502  IMUL EDX,EDX,0x3480
004e8508  MOV dword ptr [EBP + 0xfffff7d4],EDX
004e850e  FILD dword ptr [EBP + 0xfffff7d4]
004e8514  FDIV double ptr [0x006b9490]
004e851a  MOV EAX,dword ptr [EBP + -0x28]
004e851d  IMUL EAX,EAX,0xa80
004e8523  MOV dword ptr [EBP + 0xfffff7d0],EAX
004e8529  FILD dword ptr [EBP + 0xfffff7d0]
004e852f  FADDP
004e8531  MOV ECX,dword ptr [EBP + -0x1c]
004e8534  IMUL ECX,ECX,0xe00
004e853a  MOV dword ptr [EBP + 0xfffff7cc],ECX
004e8540  FILD dword ptr [EBP + 0xfffff7cc]
004e8546  FADDP
004e8548  FMUL double ptr [EBP + -0x10]
004e854b  CALL 0x00686cc0
004e8550  MOV EDX,dword ptr [EBP + -0x38]
004e8553  MOV word ptr [EDX + 0x33e],AX
004e855a  MOV EAX,dword ptr [EBP + -0x28]
004e855d  IMUL EAX,EAX,0x5400
004e8563  MOV dword ptr [EBP + 0xfffff7c8],EAX
004e8569  FILD dword ptr [EBP + 0xfffff7c8]
004e856f  FDIV double ptr [0x006b9490]
004e8575  MOV ECX,dword ptr [EBP + -0x1c]
004e8578  IMUL ECX,ECX,0xe00
004e857e  MOV dword ptr [EBP + 0xfffff7c4],ECX
004e8584  FILD dword ptr [EBP + 0xfffff7c4]
004e858a  FADDP
004e858c  FMUL double ptr [EBP + -0x10]
004e858f  CALL 0x00686cc0
004e8594  MOV EDX,dword ptr [EBP + -0x38]
004e8597  MOV word ptr [EDX + 0x340],AX
004e859e  MOV EAX,dword ptr [EBP + -0x1c]
004e85a1  IMUL EAX,EAX,0x7e00
004e85a7  MOV dword ptr [EBP + 0xfffff7c0],EAX
004e85ad  FILD dword ptr [EBP + 0xfffff7c0]
004e85b3  FDIV double ptr [0x006b9490]
004e85b9  FMUL double ptr [EBP + -0x10]
004e85bc  CALL 0x00686cc0
004e85c1  MOV ECX,dword ptr [EBP + -0x38]
004e85c4  MOV word ptr [ECX + 0x342],AX
004e85cb  MOV EDX,dword ptr [EBP + -0x38]
004e85ce  MOV word ptr [EDX + 0x288],0x8
004e85d7  MOV EAX,dword ptr [EBP + -0x38]
004e85da  MOV word ptr [EAX + 0x28a],0x1e
004e85e3  MOV ECX,dword ptr [EBP + -0x38]
004e85e6  MOV word ptr [ECX + 0x28c],0x32
004e85ef  MOV EDX,dword ptr [EBP + -0x38]
004e85f2  MOV word ptr [EDX + 0x28e],0x19
004e85fb  MOV EAX,dword ptr [EBP + -0x38]
004e85fe  MOV word ptr [EAX + 0x290],0x2d
004e8607  MOV ECX,dword ptr [EBP + -0x38]
004e860a  MOV word ptr [ECX + 0x292],0x14
004e8613  MOV EDX,dword ptr [EBP + -0x38]
004e8616  MOV word ptr [EDX + 0x294],0x3c
004e861f  MOV EAX,dword ptr [EBP + -0x38]
004e8622  MOV word ptr [EAX + 0x296],0x20
004e862b  MOV ECX,dword ptr [EBP + -0x38]
004e862e  MOV word ptr [ECX + 0x298],0x32
004e8637  MOV EDX,dword ptr [EBP + -0x38]
004e863a  MOV word ptr [EDX + 0x29a],0x14
004e8643  MOV EAX,dword ptr [EBP + -0x38]
004e8646  MOV word ptr [EAX + 0x29c],0xa
004e864f  MOV ECX,dword ptr [EBP + -0x38]
004e8652  MOV word ptr [ECX + 0x29e],0x14
004e865b  MOV EDX,dword ptr [EBP + -0x38]
004e865e  MOV word ptr [EDX + 0x2a0],0x29
004e8667  MOV EAX,dword ptr [EBP + -0x38]
004e866a  MOV word ptr [EAX + 0x2a2],0x1a
004e8673  MOV ECX,dword ptr [EBP + -0x38]
004e8676  MOV word ptr [ECX + 0x2a4],0x8
004e867f  MOV EDX,dword ptr [EBP + -0x38]
004e8682  MOV word ptr [EDX + 0x2a6],0x1e
004e868b  MOV EAX,dword ptr [EBP + -0x38]
004e868e  MOV word ptr [EAX + 0x2aa],0x4b
004e8697  MOV ECX,dword ptr [EBP + -0x38]
004e869a  MOV word ptr [ECX + 0x2ac],0x32
004e86a3  MOV EDX,dword ptr [EBP + -0x38]
004e86a6  MOV word ptr [EDX + 0x2ae],0x23
004e86af  MOV EAX,dword ptr [EBP + -0x38]
004e86b2  MOV word ptr [EAX + 0x2b0],0x3c
004e86bb  MOV ECX,dword ptr [EBP + -0x38]
004e86be  MOV word ptr [ECX + 0x2b2],0x28
004e86c7  MOV EDX,dword ptr [EBP + -0x38]
004e86ca  MOV word ptr [EDX + 0x2a8],0x5
004e86d3  MOV EAX,dword ptr [EBP + -0x38]
004e86d6  MOV word ptr [EAX + 0x2b4],0x6
004e86df  MOV ECX,dword ptr [EBP + -0x38]
004e86e2  MOV word ptr [ECX + 0x2b6],0x1e
004e86eb  MOV EDX,dword ptr [EBP + -0x38]
004e86ee  MOV word ptr [EDX + 0x2b8],0x19
004e86f7  JMP 0x004e9360
004e86fc  MOV dword ptr [EBP + -0x20],0x3e8
004e8703  MOV dword ptr [EBP + -0x24],0x3ca
004e870a  MOV dword ptr [EBP + -0x18],0x384
004e8711  MOV dword ptr [EBP + -0x14],0x2ee
004e8718  MOV dword ptr [EBP + -0x34],0x190
004e871f  MOV dword ptr [EBP + -0x28],0x64
004e8726  MOV dword ptr [EBP + -0x1c],0x14
004e872d  FLD double ptr [0x006bfb90]
004e8733  FSTP double ptr [EBP + -0x30]
004e8736  FLD double ptr [0x006bfb88]
004e873c  FSTP double ptr [EBP + -0x8]
004e873f  FLD double ptr [0x006bfbb0]
004e8745  FSTP double ptr [EBP + -0x10]
004e8748  MOV EAX,dword ptr [EBP + -0x38]
004e874b  MOV word ptr [EAX + 0x2ba],0xf
004e8754  MOV ECX,dword ptr [EBP + -0x38]
004e8757  MOV word ptr [ECX + 0x2bc],0x33
004e8760  MOV EDX,dword ptr [EBP + -0x38]
004e8763  MOV word ptr [EDX + 0x2be],0x50
004e876c  MOV EAX,dword ptr [EBP + -0x38]
004e876f  MOV word ptr [EAX + 0x2c0],0x61
004e8778  MOV ECX,dword ptr [EBP + -0x38]
004e877b  MOV word ptr [ECX + 0x2c2],0x72
004e8784  MOV EDX,dword ptr [EBP + -0x38]
004e8787  MOV word ptr [EDX + 0x2c4],0x84
004e8790  MOV EAX,dword ptr [EBP + -0x38]
004e8793  MOV word ptr [EAX + 0x2c6],0x98
004e879c  MOV ECX,dword ptr [EBP + -0x38]
004e879f  MOV word ptr [ECX + 0x2c8],0xac
004e87a8  MOV EDX,dword ptr [EBP + -0x38]
004e87ab  MOV word ptr [EDX + 0x2ca],0xc1
004e87b4  MOV EAX,dword ptr [EBP + -0x38]
004e87b7  MOV word ptr [EAX + 0x2cc],0xd8
004e87c0  MOV ECX,dword ptr [EBP + -0x38]
004e87c3  MOV word ptr [ECX + 0x2ce],0xf0
004e87cc  MOV EDX,dword ptr [EBP + -0x38]
004e87cf  MOV word ptr [EDX + 0x2d0],0x109
004e87d8  MOV EAX,dword ptr [EBP + -0x38]
004e87db  MOV word ptr [EAX + 0x2d2],0x15c
004e87e4  MOV ECX,dword ptr [EBP + -0x38]
004e87e7  MOV word ptr [ECX + 0x2d4],0x1b7
004e87f0  MOV EDX,dword ptr [EBP + -0x38]
004e87f3  MOV word ptr [EDX + 0x2d6],0x1cf
004e87fc  MOV EAX,dword ptr [EBP + -0x38]
004e87ff  MOV word ptr [EAX + 0x2d8],0x215
004e8808  MOV ECX,dword ptr [EBP + -0x38]
004e880b  MOV word ptr [ECX + 0x2da],0x267
004e8814  MOV EDX,dword ptr [EBP + -0x38]
004e8817  MOV word ptr [EDX + 0x2dc],0x279
004e8820  MOV EAX,dword ptr [EBP + -0x38]
004e8823  MOV word ptr [EAX + 0x2de],0x2aa
004e882c  MOV ECX,dword ptr [EBP + -0x38]
004e882f  MOV word ptr [ECX + 0x2e0],0x2ea
004e8838  MOV EDX,dword ptr [EBP + -0x38]
004e883b  MOV word ptr [EDX + 0x2e2],0x301
004e8844  MOV EAX,dword ptr [EBP + -0x38]
004e8847  MOV word ptr [EAX + 0x2e4],0x31c
004e8850  MOV ECX,dword ptr [EBP + -0x38]
004e8853  MOV word ptr [ECX + 0x2e6],0x340
004e885c  MOV EDX,dword ptr [EBP + -0x38]
004e885f  MOV word ptr [EDX + 0x2e8],0x355
004e8868  MOV EAX,dword ptr [EBP + -0x38]
004e886b  MOV word ptr [EAX + 0x2ea],0x360
004e8874  MOV ECX,dword ptr [EBP + -0x38]
004e8877  MOV word ptr [ECX + 0x2ec],0x366
004e8880  MOV EDX,dword ptr [EBP + -0x38]
004e8883  MOV word ptr [EDX + 0x2ee],0x368
004e888c  MOV EAX,dword ptr [EBP + -0x38]
004e888f  MOV word ptr [EAX + 0x2f0],0x379
004e8898  MOV ECX,dword ptr [EBP + -0x38]
004e889b  MOV word ptr [ECX + 0x2f2],0x392
004e88a4  MOV EDX,dword ptr [EBP + -0x38]
004e88a7  MOV word ptr [EDX + 0x2f4],0x3a0
004e88b0  MOV EAX,dword ptr [EBP + -0x38]
004e88b3  MOV word ptr [EAX + 0x2f6],0x3a6
004e88bc  MOV ECX,dword ptr [EBP + -0x38]
004e88bf  MOV word ptr [ECX + 0x2f8],0x3a8
004e88c8  MOV EDX,dword ptr [EBP + -0x38]
004e88cb  MOV word ptr [EDX + 0x2fa],0x3b4
004e88d4  MOV EAX,dword ptr [EBP + -0x38]
004e88d7  MOV word ptr [EAX + 0x2fc],0x3c3
004e88e0  MOV ECX,dword ptr [EBP + -0x38]
004e88e3  MOV word ptr [ECX + 0x2fe],0x3cb
004e88ec  MOV EDX,dword ptr [EBP + -0x38]
004e88ef  MOV word ptr [EDX + 0x300],0x3ce
004e88f8  MOV EAX,dword ptr [EBP + -0x38]
004e88fb  MOV word ptr [EAX + 0x302],0x3d4
004e8904  MOV ECX,dword ptr [EBP + -0x38]
004e8907  MOV word ptr [ECX + 0x304],0x3dc
004e8910  MOV EDX,dword ptr [EBP + -0x38]
004e8913  MOV word ptr [EDX + 0x306],0x3df
004e891c  MOV EAX,dword ptr [EBP + -0x38]
004e891f  MOV word ptr [EAX + 0x308],0x3e2
004e8928  MOV ECX,dword ptr [EBP + -0x38]
004e892b  MOV word ptr [ECX + 0x30a],0x3e5
004e8934  MOV EDX,dword ptr [EBP + -0x38]
004e8937  MOV word ptr [EDX + 0x30c],0x3e8
004e8940  MOV EAX,dword ptr [EBP + -0x24]
004e8943  SHL EAX,0x2
004e8946  MOV ECX,dword ptr [EBP + -0x20]
004e8949  LEA EDX,[EAX + ECX*0x4]
004e894c  MOV EAX,dword ptr [EBP + -0x18]
004e894f  LEA ECX,[EDX + EAX*0x4]
004e8952  MOV EDX,dword ptr [EBP + -0x14]
004e8955  LEA EAX,[ECX + EDX*0x4]
004e8958  MOV ECX,dword ptr [EBP + -0x34]
004e895b  LEA EDX,[EAX + ECX*0x4]
004e895e  MOV EAX,dword ptr [EBP + -0x28]
004e8961  LEA ECX,[EDX + EAX*0x4]
004e8964  MOV EDX,dword ptr [EBP + -0x1c]
004e8967  LEA EAX,[ECX + EDX*0x4]
004e896a  MOV dword ptr [EBP + 0xfffff7bc],EAX
004e8970  FILD dword ptr [EBP + 0xfffff7bc]
004e8976  FMUL double ptr [EBP + -0x30]
004e8979  CALL 0x00686cc0
004e897e  MOV ECX,dword ptr [EBP + -0x38]
004e8981  MOV word ptr [ECX + 0x30e],AX
004e8988  MOV EDX,dword ptr [EBP + -0x24]
004e898b  SHL EDX,0x2
004e898e  MOV EAX,dword ptr [EBP + -0x20]
004e8991  LEA ECX,[EDX + EAX*0x4]
004e8994  MOV EDX,dword ptr [EBP + -0x18]
004e8997  LEA EAX,[ECX + EDX*0x4]
004e899a  MOV ECX,dword ptr [EBP + -0x14]
004e899d  LEA EDX,[EAX + ECX*0x4]
004e89a0  MOV EAX,dword ptr [EBP + -0x34]
004e89a3  LEA ECX,[EDX + EAX*0x4]
004e89a6  MOV EDX,dword ptr [EBP + -0x28]
004e89a9  LEA EAX,[ECX + EDX*0x4]
004e89ac  MOV ECX,dword ptr [EBP + -0x1c]
004e89af  LEA EDX,[EAX + ECX*0x4]
004e89b2  MOV dword ptr [EBP + 0xfffff7b8],EDX
004e89b8  FILD dword ptr [EBP + 0xfffff7b8]
004e89be  FMUL double ptr [EBP + -0x30]
004e89c1  CALL 0x00686cc0
004e89c6  MOV ECX,dword ptr [EBP + -0x38]
004e89c9  MOV word ptr [ECX + 0x310],AX
004e89d0  MOV EDX,dword ptr [EBP + -0x18]
004e89d3  SHL EDX,0x2
004e89d6  MOV EAX,dword ptr [EBP + -0x24]
004e89d9  LEA ECX,[EDX + EAX*0x8]
004e89dc  MOV EDX,dword ptr [EBP + -0x14]
004e89df  LEA EAX,[ECX + EDX*0x4]
004e89e2  MOV ECX,dword ptr [EBP + -0x34]
004e89e5  LEA EDX,[EAX + ECX*0x4]
004e89e8  MOV EAX,dword ptr [EBP + -0x28]
004e89eb  LEA ECX,[EDX + EAX*0x4]
004e89ee  MOV EDX,dword ptr [EBP + -0x1c]
004e89f1  LEA EAX,[ECX + EDX*0x4]
004e89f4  MOV dword ptr [EBP + 0xfffff7b4],EAX
004e89fa  FILD dword ptr [EBP + 0xfffff7b4]
004e8a00  FMUL double ptr [EBP + -0x30]
004e8a03  CALL 0x00686cc0
004e8a08  MOV ECX,dword ptr [EBP + -0x38]
004e8a0b  MOV word ptr [ECX + 0x312],AX
004e8a12  MOV EDX,dword ptr [EBP + -0x18]
004e8a15  IMUL EDX,EDX,0xc
004e8a18  MOV EAX,dword ptr [EBP + -0x14]
004e8a1b  LEA ECX,[EDX + EAX*0x4]
004e8a1e  MOV EDX,dword ptr [EBP + -0x34]
004e8a21  LEA EAX,[ECX + EDX*0x4]
004e8a24  MOV ECX,dword ptr [EBP + -0x28]
004e8a27  LEA EDX,[EAX + ECX*0x4]
004e8a2a  MOV EAX,dword ptr [EBP + -0x1c]
004e8a2d  LEA ECX,[EDX + EAX*0x4]
004e8a30  MOV dword ptr [EBP + 0xfffff7b0],ECX
004e8a36  FILD dword ptr [EBP + 0xfffff7b0]
004e8a3c  FMUL double ptr [EBP + -0x30]
004e8a3f  CALL 0x00686cc0
004e8a44  MOV EDX,dword ptr [EBP + -0x38]
004e8a47  MOV word ptr [EDX + 0x314],AX
004e8a4e  MOV EAX,dword ptr [EBP + -0x14]
004e8a51  SHL EAX,0x4
004e8a54  MOV ECX,dword ptr [EBP + -0x34]
004e8a57  LEA EDX,[EAX + ECX*0x4]
004e8a5a  MOV EAX,dword ptr [EBP + -0x28]
004e8a5d  LEA ECX,[EDX + EAX*0x4]
004e8a60  MOV EDX,dword ptr [EBP + -0x1c]
004e8a63  LEA EAX,[ECX + EDX*0x4]
004e8a66  MOV dword ptr [EBP + 0xfffff7ac],EAX
004e8a6c  FILD dword ptr [EBP + 0xfffff7ac]
004e8a72  FMUL double ptr [EBP + -0x30]
004e8a75  CALL 0x00686cc0
004e8a7a  MOV ECX,dword ptr [EBP + -0x38]
004e8a7d  MOV word ptr [ECX + 0x316],AX
004e8a84  MOV EDX,dword ptr [EBP + -0x34]
004e8a87  IMUL EDX,EDX,0x14
004e8a8a  MOV EAX,dword ptr [EBP + -0x28]
004e8a8d  LEA ECX,[EDX + EAX*0x4]
004e8a90  MOV EDX,dword ptr [EBP + -0x1c]
004e8a93  LEA EAX,[ECX + EDX*0x4]
004e8a96  MOV dword ptr [EBP + 0xfffff7a8],EAX
004e8a9c  FILD dword ptr [EBP + 0xfffff7a8]
004e8aa2  FMUL double ptr [EBP + -0x30]
004e8aa5  CALL 0x00686cc0
004e8aaa  MOV ECX,dword ptr [EBP + -0x38]
004e8aad  MOV word ptr [ECX + 0x318],AX
004e8ab4  MOV EDX,dword ptr [EBP + -0x28]
004e8ab7  IMUL EDX,EDX,0x18
004e8aba  MOV EAX,dword ptr [EBP + -0x1c]
004e8abd  LEA ECX,[EDX + EAX*0x4]
004e8ac0  MOV dword ptr [EBP + 0xfffff7a4],ECX
004e8ac6  FILD dword ptr [EBP + 0xfffff7a4]
004e8acc  FMUL double ptr [EBP + -0x30]
004e8acf  CALL 0x00686cc0
004e8ad4  MOV EDX,dword ptr [EBP + -0x38]
004e8ad7  MOV word ptr [EDX + 0x31a],AX
004e8ade  MOV EAX,dword ptr [EBP + -0x1c]
004e8ae1  IMUL EAX,EAX,0x1c
004e8ae4  MOV dword ptr [EBP + 0xfffff7a0],EAX
004e8aea  FILD dword ptr [EBP + 0xfffff7a0]
004e8af0  FMUL double ptr [EBP + -0x30]
004e8af3  CALL 0x00686cc0
004e8af8  MOV ECX,dword ptr [EBP + -0x38]
004e8afb  MOV word ptr [ECX + 0x31c],AX
004e8b02  MOV EDX,dword ptr [EBP + -0x20]
004e8b05  SHL EDX,0x4
004e8b08  MOV EAX,dword ptr [EBP + -0x24]
004e8b0b  SHL EAX,0x5
004e8b0e  ADD EDX,EAX
004e8b10  MOV ECX,dword ptr [EBP + -0x18]
004e8b13  IMUL ECX,ECX,0x30
004e8b16  ADD EDX,ECX
004e8b18  MOV EAX,dword ptr [EBP + -0x14]
004e8b1b  SHL EAX,0x6
004e8b1e  ADD EDX,EAX
004e8b20  MOV ECX,dword ptr [EBP + -0x34]
004e8b23  IMUL ECX,ECX,0x50
004e8b26  ADD EDX,ECX
004e8b28  MOV EAX,dword ptr [EBP + -0x28]
004e8b2b  IMUL EAX,EAX,0x60
004e8b2e  ADD EDX,EAX
004e8b30  MOV ECX,dword ptr [EBP + -0x1c]
004e8b33  IMUL ECX,ECX,0x70
004e8b36  ADD EDX,ECX
004e8b38  MOV dword ptr [EBP + 0xfffff79c],EDX
004e8b3e  FILD dword ptr [EBP + 0xfffff79c]
004e8b44  FMUL double ptr [EBP + -0x8]
004e8b47  CALL 0x00686cc0
004e8b4c  MOV EDX,dword ptr [EBP + -0x38]
004e8b4f  MOV word ptr [EDX + 0x31e],AX
004e8b56  MOV EAX,dword ptr [EBP + -0x20]
004e8b59  SHL EAX,0x4
004e8b5c  MOV ECX,dword ptr [EBP + -0x24]
004e8b5f  SHL ECX,0x5
004e8b62  ADD EAX,ECX
004e8b64  MOV EDX,dword ptr [EBP + -0x18]
004e8b67  IMUL EDX,EDX,0x30
004e8b6a  ADD EAX,EDX
004e8b6c  MOV ECX,dword ptr [EBP + -0x14]
004e8b6f  SHL ECX,0x6
004e8b72  ADD EAX,ECX
004e8b74  MOV EDX,dword ptr [EBP + -0x34]
004e8b77  IMUL EDX,EDX,0x50
004e8b7a  ADD EAX,EDX
004e8b7c  MOV ECX,dword ptr [EBP + -0x28]
004e8b7f  IMUL ECX,ECX,0x60
004e8b82  ADD EAX,ECX
004e8b84  MOV EDX,dword ptr [EBP + -0x1c]
004e8b87  IMUL EDX,EDX,0x70
004e8b8a  ADD EAX,EDX
004e8b8c  MOV dword ptr [EBP + 0xfffff798],EAX
004e8b92  FILD dword ptr [EBP + 0xfffff798]
004e8b98  FMUL double ptr [EBP + -0x8]
004e8b9b  CALL 0x00686cc0
004e8ba0  MOV ECX,dword ptr [EBP + -0x38]
004e8ba3  MOV word ptr [ECX + 0x320],AX
004e8baa  MOV EDX,dword ptr [EBP + -0x20]
004e8bad  SHL EDX,0x4
004e8bb0  MOV EAX,dword ptr [EBP + -0x24]
004e8bb3  SHL EAX,0x5
004e8bb6  ADD EDX,EAX
004e8bb8  MOV ECX,dword ptr [EBP + -0x18]
004e8bbb  IMUL ECX,ECX,0x30
004e8bbe  ADD EDX,ECX
004e8bc0  MOV EAX,dword ptr [EBP + -0x14]
004e8bc3  SHL EAX,0x6
004e8bc6  ADD EDX,EAX
004e8bc8  MOV ECX,dword ptr [EBP + -0x34]
004e8bcb  IMUL ECX,ECX,0x50
004e8bce  ADD EDX,ECX
004e8bd0  MOV EAX,dword ptr [EBP + -0x28]
004e8bd3  IMUL EAX,EAX,0x60
004e8bd6  ADD EDX,EAX
004e8bd8  MOV ECX,dword ptr [EBP + -0x1c]
004e8bdb  IMUL ECX,ECX,0x70
004e8bde  ADD EDX,ECX
004e8be0  MOV dword ptr [EBP + 0xfffff794],EDX
004e8be6  FILD dword ptr [EBP + 0xfffff794]
004e8bec  FMUL double ptr [EBP + -0x8]
004e8bef  CALL 0x00686cc0
004e8bf4  MOV EDX,dword ptr [EBP + -0x38]
004e8bf7  MOV word ptr [EDX + 0x322],AX
004e8bfe  MOV EAX,dword ptr [EBP + -0x24]
004e8c01  IMUL EAX,EAX,0x60
004e8c04  MOV dword ptr [EBP + 0xfffff790],EAX
004e8c0a  FILD dword ptr [EBP + 0xfffff790]
004e8c10  FDIV double ptr [0x006b3740]
004e8c16  MOV ECX,dword ptr [EBP + -0x18]
004e8c19  IMUL ECX,ECX,0x30
004e8c1c  MOV dword ptr [EBP + 0xfffff78c],ECX
004e8c22  FILD dword ptr [EBP + 0xfffff78c]
004e8c28  FADDP
004e8c2a  MOV EDX,dword ptr [EBP + -0x14]
004e8c2d  SHL EDX,0x6
004e8c30  MOV dword ptr [EBP + 0xfffff788],EDX
004e8c36  FILD dword ptr [EBP + 0xfffff788]
004e8c3c  FADDP
004e8c3e  MOV EAX,dword ptr [EBP + -0x34]
004e8c41  IMUL EAX,EAX,0x50
004e8c44  MOV dword ptr [EBP + 0xfffff784],EAX
004e8c4a  FILD dword ptr [EBP + 0xfffff784]
004e8c50  FADDP
004e8c52  MOV ECX,dword ptr [EBP + -0x28]
004e8c55  IMUL ECX,ECX,0x60
004e8c58  MOV dword ptr [EBP + 0xfffff780],ECX
004e8c5e  FILD dword ptr [EBP + 0xfffff780]
004e8c64  FADDP
004e8c66  MOV EDX,dword ptr [EBP + -0x1c]
004e8c69  IMUL EDX,EDX,0x70
004e8c6c  MOV dword ptr [EBP + 0xfffff77c],EDX
004e8c72  FILD dword ptr [EBP + 0xfffff77c]
004e8c78  FADDP
004e8c7a  FMUL double ptr [EBP + -0x8]
004e8c7d  CALL 0x00686cc0
004e8c82  MOV ECX,dword ptr [EBP + -0x38]
004e8c85  MOV word ptr [ECX + 0x324],AX
004e8c8c  MOV EDX,dword ptr [EBP + -0x18]
004e8c8f  IMUL EDX,EDX,0xc0
004e8c95  MOV dword ptr [EBP + 0xfffff778],EDX
004e8c9b  FILD dword ptr [EBP + 0xfffff778]
004e8ca1  FDIV double ptr [0x006b3740]
004e8ca7  MOV EAX,dword ptr [EBP + -0x14]
004e8caa  SHL EAX,0x6
004e8cad  MOV dword ptr [EBP + 0xfffff774],EAX
004e8cb3  FILD dword ptr [EBP + 0xfffff774]
004e8cb9  FADDP
004e8cbb  MOV ECX,dword ptr [EBP + -0x34]
004e8cbe  IMUL ECX,ECX,0x50
004e8cc1  MOV dword ptr [EBP + 0xfffff770],ECX
004e8cc7  FILD dword ptr [EBP + 0xfffff770]
004e8ccd  FADDP
004e8ccf  MOV EDX,dword ptr [EBP + -0x28]
004e8cd2  IMUL EDX,EDX,0x60
004e8cd5  MOV dword ptr [EBP + 0xfffff76c],EDX
004e8cdb  FILD dword ptr [EBP + 0xfffff76c]
004e8ce1  FADDP
004e8ce3  MOV EAX,dword ptr [EBP + -0x1c]
004e8ce6  IMUL EAX,EAX,0x70
004e8ce9  MOV dword ptr [EBP + 0xfffff768],EAX
004e8cef  FILD dword ptr [EBP + 0xfffff768]
004e8cf5  FADDP
004e8cf7  FMUL double ptr [EBP + -0x8]
004e8cfa  CALL 0x00686cc0
004e8cff  MOV ECX,dword ptr [EBP + -0x38]
004e8d02  MOV word ptr [ECX + 0x326],AX
004e8d09  MOV EDX,dword ptr [EBP + -0x14]
004e8d0c  IMUL EDX,EDX,0x140
004e8d12  MOV dword ptr [EBP + 0xfffff764],EDX
004e8d18  FILD dword ptr [EBP + 0xfffff764]
004e8d1e  FDIV double ptr [0x006b3740]
004e8d24  MOV EAX,dword ptr [EBP + -0x34]
004e8d27  IMUL EAX,EAX,0x50
004e8d2a  MOV dword ptr [EBP + 0xfffff760],EAX
004e8d30  FILD dword ptr [EBP + 0xfffff760]
004e8d36  FADDP
004e8d38  MOV ECX,dword ptr [EBP + -0x28]
004e8d3b  IMUL ECX,ECX,0x60
004e8d3e  MOV dword ptr [EBP + 0xfffff75c],ECX
004e8d44  FILD dword ptr [EBP + 0xfffff75c]
004e8d4a  FADDP
004e8d4c  MOV EDX,dword ptr [EBP + -0x1c]
004e8d4f  IMUL EDX,EDX,0x70
004e8d52  MOV dword ptr [EBP + 0xfffff758],EDX
004e8d58  FILD dword ptr [EBP + 0xfffff758]
004e8d5e  FADDP
004e8d60  FMUL double ptr [EBP + -0x8]
004e8d63  CALL 0x00686cc0
004e8d68  MOV ECX,dword ptr [EBP + -0x38]
004e8d6b  MOV word ptr [ECX + 0x328],AX
004e8d72  MOV EDX,dword ptr [EBP + -0x34]
004e8d75  IMUL EDX,EDX,0x1e0
004e8d7b  MOV dword ptr [EBP + 0xfffff754],EDX
004e8d81  FILD dword ptr [EBP + 0xfffff754]
004e8d87  FDIV double ptr [0x006b3740]
004e8d8d  MOV EAX,dword ptr [EBP + -0x28]
004e8d90  IMUL EAX,EAX,0x60
004e8d93  MOV dword ptr [EBP + 0xfffff750],EAX
004e8d99  FILD dword ptr [EBP + 0xfffff750]
004e8d9f  FADDP
004e8da1  MOV ECX,dword ptr [EBP + -0x1c]
004e8da4  IMUL ECX,ECX,0x70
004e8da7  MOV dword ptr [EBP + 0xfffff74c],ECX
004e8dad  FILD dword ptr [EBP + 0xfffff74c]
004e8db3  FADDP
004e8db5  FMUL double ptr [EBP + -0x8]
004e8db8  CALL 0x00686cc0
004e8dbd  MOV EDX,dword ptr [EBP + -0x38]
004e8dc0  MOV word ptr [EDX + 0x32a],AX
004e8dc7  MOV EAX,dword ptr [EBP + -0x28]
004e8dca  IMUL EAX,EAX,0x2a0
004e8dd0  MOV dword ptr [EBP + 0xfffff748],EAX
004e8dd6  FILD dword ptr [EBP + 0xfffff748]
004e8ddc  FDIV double ptr [0x006b3740]
004e8de2  MOV ECX,dword ptr [EBP + -0x1c]
004e8de5  IMUL ECX,ECX,0x70
004e8de8  MOV dword ptr [EBP + 0xfffff744],ECX
004e8dee  FILD dword ptr [EBP + 0xfffff744]
004e8df4  FADDP
004e8df6  FMUL double ptr [EBP + -0x8]
004e8df9  CALL 0x00686cc0
004e8dfe  MOV EDX,dword ptr [EBP + -0x38]
004e8e01  MOV word ptr [EDX + 0x32c],AX
004e8e08  MOV EAX,dword ptr [EBP + -0x1c]
004e8e0b  IMUL EAX,EAX,0x380
004e8e11  MOV dword ptr [EBP + 0xfffff740],EAX
004e8e17  FILD dword ptr [EBP + 0xfffff740]
004e8e1d  FDIV double ptr [0x006b3740]
004e8e23  FMUL double ptr [EBP + -0x8]
004e8e26  CALL 0x00686cc0
004e8e2b  MOV ECX,dword ptr [EBP + -0x38]
004e8e2e  MOV word ptr [ECX + 0x32e],AX
004e8e35  MOV EDX,dword ptr [EBP + -0x20]
004e8e38  SHL EDX,0x7
004e8e3b  MOV EAX,dword ptr [EBP + -0x24]
004e8e3e  IMUL EAX,EAX,0x180
004e8e44  ADD EDX,EAX
004e8e46  MOV ECX,dword ptr [EBP + -0x18]
004e8e49  IMUL ECX,ECX,0x300
004e8e4f  ADD EDX,ECX
004e8e51  MOV EAX,dword ptr [EBP + -0x14]
004e8e54  IMUL EAX,EAX,0x500
004e8e5a  ADD EDX,EAX
004e8e5c  MOV ECX,dword ptr [EBP + -0x34]
004e8e5f  IMUL ECX,ECX,0x780
004e8e65  ADD EDX,ECX
004e8e67  MOV EAX,dword ptr [EBP + -0x28]
004e8e6a  IMUL EAX,EAX,0xa80
004e8e70  ADD EDX,EAX
004e8e72  MOV ECX,dword ptr [EBP + -0x1c]
004e8e75  IMUL ECX,ECX,0xe00
004e8e7b  ADD EDX,ECX
004e8e7d  MOV dword ptr [EBP + 0xfffff73c],EDX
004e8e83  FILD dword ptr [EBP + 0xfffff73c]
004e8e89  FMUL double ptr [EBP + -0x10]
004e8e8c  CALL 0x00686cc0
004e8e91  MOV EDX,dword ptr [EBP + -0x38]
004e8e94  MOV word ptr [EDX + 0x330],AX
004e8e9b  MOV EAX,dword ptr [EBP + -0x20]
004e8e9e  SHL EAX,0x7
004e8ea1  MOV ECX,dword ptr [EBP + -0x24]
004e8ea4  IMUL ECX,ECX,0x180
004e8eaa  ADD EAX,ECX
004e8eac  MOV EDX,dword ptr [EBP + -0x18]
004e8eaf  IMUL EDX,EDX,0x300
004e8eb5  ADD EAX,EDX
004e8eb7  MOV ECX,dword ptr [EBP + -0x14]
004e8eba  IMUL ECX,ECX,0x500
004e8ec0  ADD EAX,ECX
004e8ec2  MOV EDX,dword ptr [EBP + -0x34]
004e8ec5  IMUL EDX,EDX,0x780
004e8ecb  ADD EAX,EDX
004e8ecd  MOV ECX,dword ptr [EBP + -0x28]
004e8ed0  IMUL ECX,ECX,0xa80
004e8ed6  ADD EAX,ECX
004e8ed8  MOV EDX,dword ptr [EBP + -0x1c]
004e8edb  IMUL EDX,EDX,0xe00
004e8ee1  ADD EAX,EDX
004e8ee3  MOV dword ptr [EBP + 0xfffff738],EAX
004e8ee9  FILD dword ptr [EBP + 0xfffff738]
004e8eef  FMUL double ptr [EBP + -0x10]
004e8ef2  CALL 0x00686cc0
004e8ef7  MOV ECX,dword ptr [EBP + -0x38]
004e8efa  MOV word ptr [ECX + 0x332],AX
004e8f01  MOV EDX,dword ptr [EBP + -0x20]
004e8f04  SHL EDX,0x7
004e8f07  MOV EAX,dword ptr [EBP + -0x24]
004e8f0a  IMUL EAX,EAX,0x180
004e8f10  ADD EDX,EAX
004e8f12  MOV ECX,dword ptr [EBP + -0x18]
004e8f15  IMUL ECX,ECX,0x300
004e8f1b  ADD EDX,ECX
004e8f1d  MOV EAX,dword ptr [EBP + -0x14]
004e8f20  IMUL EAX,EAX,0x500
004e8f26  ADD EDX,EAX
004e8f28  MOV ECX,dword ptr [EBP + -0x34]
004e8f2b  IMUL ECX,ECX,0x780
004e8f31  ADD EDX,ECX
004e8f33  MOV EAX,dword ptr [EBP + -0x28]
004e8f36  IMUL EAX,EAX,0xa80
004e8f3c  ADD EDX,EAX
004e8f3e  MOV ECX,dword ptr [EBP + -0x1c]
004e8f41  IMUL ECX,ECX,0xe00
004e8f47  ADD EDX,ECX
004e8f49  MOV dword ptr [EBP + 0xfffff734],EDX
004e8f4f  FILD dword ptr [EBP + 0xfffff734]
004e8f55  FMUL double ptr [EBP + -0x10]
004e8f58  CALL 0x00686cc0
004e8f5d  MOV EDX,dword ptr [EBP + -0x38]
004e8f60  MOV word ptr [EDX + 0x334],AX
004e8f67  MOV EAX,dword ptr [EBP + -0x20]
004e8f6a  SHL EAX,0x7
004e8f6d  MOV ECX,dword ptr [EBP + -0x24]
004e8f70  IMUL ECX,ECX,0x180
004e8f76  ADD EAX,ECX
004e8f78  MOV EDX,dword ptr [EBP + -0x18]
004e8f7b  IMUL EDX,EDX,0x300
004e8f81  ADD EAX,EDX
004e8f83  MOV ECX,dword ptr [EBP + -0x14]
004e8f86  IMUL ECX,ECX,0x500
004e8f8c  ADD EAX,ECX
004e8f8e  MOV EDX,dword ptr [EBP + -0x34]
004e8f91  IMUL EDX,EDX,0x780
004e8f97  ADD EAX,EDX
004e8f99  MOV ECX,dword ptr [EBP + -0x28]
004e8f9c  IMUL ECX,ECX,0xa80
004e8fa2  ADD EAX,ECX
004e8fa4  MOV EDX,dword ptr [EBP + -0x1c]
004e8fa7  IMUL EDX,EDX,0xe00
004e8fad  ADD EAX,EDX
004e8faf  MOV dword ptr [EBP + 0xfffff730],EAX
004e8fb5  FILD dword ptr [EBP + 0xfffff730]
004e8fbb  FMUL double ptr [EBP + -0x10]
004e8fbe  CALL 0x00686cc0
004e8fc3  MOV ECX,dword ptr [EBP + -0x38]
004e8fc6  MOV word ptr [ECX + 0x336],AX
004e8fcd  MOV EDX,dword ptr [EBP + -0x24]
004e8fd0  IMUL EDX,EDX,0x600
004e8fd6  MOV dword ptr [EBP + 0xfffff72c],EDX
004e8fdc  FILD dword ptr [EBP + 0xfffff72c]
004e8fe2  FDIV double ptr [0x006b9490]
004e8fe8  MOV EAX,dword ptr [EBP + -0x18]
004e8feb  IMUL EAX,EAX,0x300
004e8ff1  MOV dword ptr [EBP + 0xfffff728],EAX
004e8ff7  FILD dword ptr [EBP + 0xfffff728]
004e8ffd  FADDP
004e8fff  MOV ECX,dword ptr [EBP + -0x14]
004e9002  IMUL ECX,ECX,0x500
004e9008  MOV dword ptr [EBP + 0xfffff724],ECX
004e900e  FILD dword ptr [EBP + 0xfffff724]
004e9014  FADDP
004e9016  MOV EDX,dword ptr [EBP + -0x34]
004e9019  IMUL EDX,EDX,0x780
004e901f  MOV dword ptr [EBP + 0xfffff720],EDX
004e9025  FILD dword ptr [EBP + 0xfffff720]
004e902b  FADDP
004e902d  MOV EAX,dword ptr [EBP + -0x28]
004e9030  IMUL EAX,EAX,0xa80
004e9036  MOV dword ptr [EBP + 0xfffff71c],EAX
004e903c  FILD dword ptr [EBP + 0xfffff71c]
004e9042  FADDP
004e9044  MOV ECX,dword ptr [EBP + -0x1c]
004e9047  IMUL ECX,ECX,0xe00
004e904d  MOV dword ptr [EBP + 0xfffff718],ECX
004e9053  FILD dword ptr [EBP + 0xfffff718]
004e9059  FADDP
004e905b  FMUL double ptr [EBP + -0x10]
004e905e  CALL 0x00686cc0
004e9063  MOV EDX,dword ptr [EBP + -0x38]
004e9066  MOV word ptr [EDX + 0x338],AX
004e906d  MOV EAX,dword ptr [EBP + -0x18]
004e9070  IMUL EAX,EAX,0xf00
004e9076  MOV dword ptr [EBP + 0xfffff714],EAX
004e907c  FILD dword ptr [EBP + 0xfffff714]
004e9082  FDIV double ptr [0x006b9490]
004e9088  MOV ECX,dword ptr [EBP + -0x14]
004e908b  IMUL ECX,ECX,0x500
004e9091  MOV dword ptr [EBP + 0xfffff710],ECX
004e9097  FILD dword ptr [EBP + 0xfffff710]
004e909d  FADDP
004e909f  MOV EDX,dword ptr [EBP + -0x34]
004e90a2  IMUL EDX,EDX,0x780
004e90a8  MOV dword ptr [EBP + 0xfffff70c],EDX
004e90ae  FILD dword ptr [EBP + 0xfffff70c]
004e90b4  FADDP
004e90b6  MOV EAX,dword ptr [EBP + -0x28]
004e90b9  IMUL EAX,EAX,0xa80
004e90bf  MOV dword ptr [EBP + 0xfffff708],EAX
004e90c5  FILD dword ptr [EBP + 0xfffff708]
004e90cb  FADDP
004e90cd  MOV ECX,dword ptr [EBP + -0x1c]
004e90d0  IMUL ECX,ECX,0xe00
004e90d6  MOV dword ptr [EBP + 0xfffff704],ECX
004e90dc  FILD dword ptr [EBP + 0xfffff704]
004e90e2  FADDP
004e90e4  FMUL double ptr [EBP + -0x10]
004e90e7  CALL 0x00686cc0
004e90ec  MOV EDX,dword ptr [EBP + -0x38]
004e90ef  MOV word ptr [EDX + 0x33a],AX
004e90f6  MOV EAX,dword ptr [EBP + -0x14]
004e90f9  IMUL EAX,EAX,0x1e00
004e90ff  MOV dword ptr [EBP + 0xfffff700],EAX
004e9105  FILD dword ptr [EBP + 0xfffff700]
004e910b  FDIV double ptr [0x006b9490]
004e9111  MOV ECX,dword ptr [EBP + -0x34]
004e9114  IMUL ECX,ECX,0x780
004e911a  MOV dword ptr [EBP + 0xfffff6fc],ECX
004e9120  FILD dword ptr [EBP + 0xfffff6fc]
004e9126  FADDP
004e9128  MOV EDX,dword ptr [EBP + -0x28]
004e912b  IMUL EDX,EDX,0xa80
004e9131  MOV dword ptr [EBP + 0xfffff6f8],EDX
004e9137  FILD dword ptr [EBP + 0xfffff6f8]
004e913d  FADDP
004e913f  MOV EAX,dword ptr [EBP + -0x1c]
004e9142  IMUL EAX,EAX,0xe00
004e9148  MOV dword ptr [EBP + 0xfffff6f4],EAX
004e914e  FILD dword ptr [EBP + 0xfffff6f4]
004e9154  FADDP
004e9156  FMUL double ptr [EBP + -0x10]
004e9159  CALL 0x00686cc0
004e915e  MOV ECX,dword ptr [EBP + -0x38]
004e9161  MOV word ptr [ECX + 0x33c],AX
004e9168  MOV EDX,dword ptr [EBP + -0x34]
004e916b  IMUL EDX,EDX,0x3480
004e9171  MOV dword ptr [EBP + 0xfffff6f0],EDX
004e9177  FILD dword ptr [EBP + 0xfffff6f0]
004e917d  FDIV double ptr [0x006b9490]
004e9183  MOV EAX,dword ptr [EBP + -0x28]
004e9186  IMUL EAX,EAX,0xa80
004e918c  MOV dword ptr [EBP + 0xfffff6ec],EAX
004e9192  FILD dword ptr [EBP + 0xfffff6ec]
004e9198  FADDP
004e919a  MOV ECX,dword ptr [EBP + -0x1c]
004e919d  IMUL ECX,ECX,0xe00
004e91a3  MOV dword ptr [EBP + 0xfffff6e8],ECX
004e91a9  FILD dword ptr [EBP + 0xfffff6e8]
004e91af  FADDP
004e91b1  FMUL double ptr [EBP + -0x10]
004e91b4  CALL 0x00686cc0
004e91b9  MOV EDX,dword ptr [EBP + -0x38]
004e91bc  MOV word ptr [EDX + 0x33e],AX
004e91c3  MOV EAX,dword ptr [EBP + -0x28]
004e91c6  IMUL EAX,EAX,0x5400
004e91cc  MOV dword ptr [EBP + 0xfffff6e4],EAX
004e91d2  FILD dword ptr [EBP + 0xfffff6e4]
004e91d8  FDIV double ptr [0x006b9490]
004e91de  MOV ECX,dword ptr [EBP + -0x1c]
004e91e1  IMUL ECX,ECX,0xe00
004e91e7  MOV dword ptr [EBP + 0xfffff6e0],ECX
004e91ed  FILD dword ptr [EBP + 0xfffff6e0]
004e91f3  FADDP
004e91f5  FMUL double ptr [EBP + -0x10]
004e91f8  CALL 0x00686cc0
004e91fd  MOV EDX,dword ptr [EBP + -0x38]
004e9200  MOV word ptr [EDX + 0x340],AX
004e9207  MOV EAX,dword ptr [EBP + -0x1c]
004e920a  IMUL EAX,EAX,0x7e00
004e9210  MOV dword ptr [EBP + 0xfffff6dc],EAX
004e9216  FILD dword ptr [EBP + 0xfffff6dc]
004e921c  FDIV double ptr [0x006b9490]
004e9222  FMUL double ptr [EBP + -0x10]
004e9225  CALL 0x00686cc0
004e922a  MOV ECX,dword ptr [EBP + -0x38]
004e922d  MOV word ptr [ECX + 0x342],AX
004e9234  MOV EDX,dword ptr [EBP + -0x38]
004e9237  MOV word ptr [EDX + 0x288],0x7
004e9240  MOV EAX,dword ptr [EBP + -0x38]
004e9243  MOV word ptr [EAX + 0x28a],0x19
004e924c  MOV ECX,dword ptr [EBP + -0x38]
004e924f  MOV word ptr [ECX + 0x28c],0x28
004e9258  MOV EDX,dword ptr [EBP + -0x38]
004e925b  MOV word ptr [EDX + 0x28e],0x12
004e9264  MOV EAX,dword ptr [EBP + -0x38]
004e9267  MOV word ptr [EAX + 0x290],0x32
004e9270  MOV ECX,dword ptr [EBP + -0x38]
004e9273  MOV word ptr [ECX + 0x292],0x16
004e927c  MOV EDX,dword ptr [EBP + -0x38]
004e927f  MOV word ptr [EDX + 0x294],0x4b
004e9288  MOV EAX,dword ptr [EBP + -0x38]
004e928b  MOV word ptr [EAX + 0x296],0x1e
004e9294  MOV ECX,dword ptr [EBP + -0x38]
004e9297  MOV word ptr [ECX + 0x298],0x28
004e92a0  MOV EDX,dword ptr [EBP + -0x38]
004e92a3  MOV word ptr [EDX + 0x29a],0x14
004e92ac  MOV EAX,dword ptr [EBP + -0x38]
004e92af  MOV word ptr [EAX + 0x29c],0xa
004e92b8  MOV ECX,dword ptr [EBP + -0x38]
004e92bb  MOV word ptr [ECX + 0x29e],0x11
004e92c4  MOV EDX,dword ptr [EBP + -0x38]
004e92c7  MOV word ptr [EDX + 0x2a0],0x20
004e92d0  MOV EAX,dword ptr [EBP + -0x38]
004e92d3  MOV word ptr [EAX + 0x2a2],0x15
004e92dc  MOV ECX,dword ptr [EBP + -0x38]
004e92df  MOV word ptr [ECX + 0x2a4],0x5
004e92e8  MOV EDX,dword ptr [EBP + -0x38]
004e92eb  MOV word ptr [EDX + 0x2a6],0x28
004e92f4  MOV EAX,dword ptr [EBP + -0x38]
004e92f7  MOV word ptr [EAX + 0x2a8],0x3
004e9300  MOV ECX,dword ptr [EBP + -0x38]
004e9303  MOV word ptr [ECX + 0x2aa],0x5a
004e930c  MOV EDX,dword ptr [EBP + -0x38]
004e930f  MOV word ptr [EDX + 0x2ac],0x3c
004e9318  MOV EAX,dword ptr [EBP + -0x38]
004e931b  MOV word ptr [EAX + 0x2ae],0x1e
004e9324  MOV ECX,dword ptr [EBP + -0x38]
004e9327  MOV word ptr [ECX + 0x2b0],0x32
004e9330  MOV EDX,dword ptr [EBP + -0x38]
004e9333  MOV word ptr [EDX + 0x2b2],0x3c
004e933c  MOV EAX,dword ptr [EBP + -0x38]
004e933f  MOV word ptr [EAX + 0x2b4],0xa
004e9348  MOV ECX,dword ptr [EBP + -0x38]
004e934b  MOV word ptr [ECX + 0x2b6],0x14
004e9354  MOV EDX,dword ptr [EBP + -0x38]
004e9357  MOV word ptr [EDX + 0x2b8],0x28
004e9360  MOV ESP,EBP
004e9362  POP EBP
004e9363  RET 0x4

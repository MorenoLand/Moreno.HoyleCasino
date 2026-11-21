; FUN_005948c0  005948c0
005948c0  PUSH EBP
005948c1  MOV EBP,ESP
005948c3  SUB ESP,0x138
005948c9  MOV dword ptr [EBP + 0xffffff0c],ECX
005948cf  PUSH 0x0
005948d1  PUSH 0x0
005948d3  CALL 0x0064c8a0
005948d8  ADD ESP,0x8
005948db  MOV dword ptr [EBP + -0x60],EAX
005948de  MOV dword ptr [EBP + -0x5c],EDX
005948e1  MOV EAX,dword ptr [EBP + -0x60]
005948e4  MOV dword ptr [EBP + -0x58],EAX
005948e7  MOV ECX,dword ptr [EBP + -0x5c]
005948ea  MOV dword ptr [EBP + -0x54],ECX
005948ed  MOV dword ptr [EBP + -0x48],0xffffffff
005948f4  MOV dword ptr [EBP + -0x20],0xffffffff
005948fb  MOV dword ptr [EBP + -0x4c],0xffffffff
00594902  FLDZ
00594904  FSTP double ptr [EBP + -0x18]
00594907  FLD1
00594909  FSTP double ptr [EBP + -0x10]
0059490c  MOV ECX,dword ptr [0x007935a8]
00594912  CALL 0x00597d30
00594917  MOV dword ptr [EBP + -0x4],EAX
0059491a  MOV dword ptr [EBP + -0x1c],0xffffffff
00594921  MOV dword ptr [EBP + -0x8],0xffffffff
00594928  MOV dword ptr [EBP + -0x50],0xffffffff
0059492f  MOV dword ptr [EBP + -0x44],0x0
00594936  MOV ECX,dword ptr [0x007935a8]
0059493c  CALL 0x00598450
00594941  MOV dword ptr [EBP + -0x48],EAX
00594944  MOV ECX,dword ptr [0x007935a8]
0059494a  CALL 0x00597fb0
0059494f  MOV dword ptr [EBP + 0xffffff08],EAX
00594955  CMP dword ptr [EBP + 0xffffff08],0x5
0059495c  JA 0x00595039
00594962  MOV EDX,dword ptr [EBP + 0xffffff08]
00594968  JMP dword ptr [EDX*0x4 + 0x5951d8]
0059496f  MOV dword ptr [EBP + -0x20],0x803
00594976  FLD double ptr [0x006b2c40]
0059497c  FSTP double ptr [EBP + -0x10]
0059497f  JMP 0x00595039
00594984  MOV dword ptr [EBP + -0x20],0x82e
0059498b  FLD double ptr [0x006b2c40]
00594991  FSTP double ptr [EBP + -0x10]
00594994  JMP 0x00595039
00594999  LEA EAX,[EBP + -0x58]
0059499c  PUSH EAX
0059499d  MOV ECX,dword ptr [EBP + -0x4]
005949a0  PUSH ECX
005949a1  CALL 0x005dcb00
005949a6  ADD ESP,0x4
005949a9  MOV ECX,EAX
005949ab  CALL 0x005d6020
005949b0  MOV EDX,dword ptr [EBP + -0x4]
005949b3  PUSH EDX
005949b4  CALL 0x005dcb00
005949b9  ADD ESP,0x4
005949bc  CMP dword ptr [EAX + 0x4a8],0x3
005949c3  JLE 0x00594a42
005949c5  PUSH 0x2
005949c7  CALL 0x0062fbf0
005949cc  ADD ESP,0x4
005949cf  TEST EAX,EAX
005949d1  JNZ 0x00594a42
005949d3  MOV EAX,dword ptr [EBP + -0x4]
005949d6  PUSH EAX
005949d7  CALL 0x005dcb00
005949dc  ADD ESP,0x4
005949df  MOV dword ptr [EBP + -0x6c],EAX
005949e2  MOV ECX,dword ptr [EBP + -0x6c]
005949e5  CALL 0x0063aac0
005949ea  MOV ECX,dword ptr [EAX]
005949ec  MOV dword ptr [EBP + -0x64],ECX
005949ef  CMP dword ptr [EBP + -0x64],0x2
005949f3  JZ 0x00594a14
005949f5  MOV ECX,dword ptr [EBP + -0x6c]
005949f8  CALL 0x0063aac0
005949fd  MOV EDX,dword ptr [EAX]
005949ff  MOV dword ptr [EBP + -0x68],EDX
00594a02  CMP dword ptr [EBP + -0x68],0x3
00594a06  JZ 0x00594a14
00594a08  MOV dword ptr [EBP + 0xffffff04],0x0
00594a12  JMP 0x00594a1e
00594a14  MOV dword ptr [EBP + 0xffffff04],0x1
00594a1e  MOVZX EAX,byte ptr [EBP + 0xffffff04]
00594a25  NEG EAX
00594a27  SBB EAX,EAX
00594a29  AND EAX,0x14
00594a2c  ADD EAX,0x400
00594a31  MOV dword ptr [EBP + -0x20],EAX
00594a34  FLD double ptr [0x006b2c40]
00594a3a  FSTP double ptr [EBP + -0x10]
00594a3d  JMP 0x00595039
00594a42  MOV ECX,dword ptr [EBP + -0x4]
00594a45  PUSH ECX
00594a46  CALL 0x005dcb00
00594a4b  ADD ESP,0x4
00594a4e  CMP dword ptr [EAX + 0x4a8],-0x3
00594a55  JGE 0x00594ad5
00594a57  PUSH 0x2
00594a59  CALL 0x0062fbf0
00594a5e  ADD ESP,0x4
00594a61  TEST EAX,EAX
00594a63  JNZ 0x00594ad5
00594a65  MOV EDX,dword ptr [EBP + -0x4]
00594a68  PUSH EDX
00594a69  CALL 0x005dcb00
00594a6e  ADD ESP,0x4
00594a71  MOV dword ptr [EBP + -0x78],EAX
00594a74  MOV ECX,dword ptr [EBP + -0x78]
00594a77  CALL 0x0063aac0
00594a7c  MOV EAX,dword ptr [EAX]
00594a7e  MOV dword ptr [EBP + -0x70],EAX
00594a81  CMP dword ptr [EBP + -0x70],0x2
00594a85  JZ 0x00594aa6
00594a87  MOV ECX,dword ptr [EBP + -0x78]
00594a8a  CALL 0x0063aac0
00594a8f  MOV ECX,dword ptr [EAX]
00594a91  MOV dword ptr [EBP + -0x74],ECX
00594a94  CMP dword ptr [EBP + -0x74],0x3
00594a98  JZ 0x00594aa6
00594a9a  MOV dword ptr [EBP + 0xffffff00],0x0
00594aa4  JMP 0x00594ab0
00594aa6  MOV dword ptr [EBP + 0xffffff00],0x1
00594ab0  MOVZX EDX,byte ptr [EBP + 0xffffff00]
00594ab7  NEG EDX
00594ab9  SBB EDX,EDX
00594abb  AND EDX,0xa
00594abe  ADD EDX,0x3ff
00594ac4  MOV dword ptr [EBP + -0x20],EDX
00594ac7  FLD double ptr [0x006b2c40]
00594acd  FSTP double ptr [EBP + -0x10]
00594ad0  JMP 0x00595039
00594ad5  MOV EAX,[0x007935a8]
00594ada  ADD EAX,dword ptr [EBP + -0x4]
00594add  MOVZX ECX,byte ptr [EAX + 0x117]
00594ae4  TEST ECX,ECX
00594ae6  JZ 0x00594b5d
00594ae8  MOV EDX,dword ptr [EBP + -0x4]
00594aeb  PUSH EDX
00594aec  CALL 0x005dcb00
00594af1  ADD ESP,0x4
00594af4  MOV dword ptr [EBP + 0xffffff7c],EAX
00594afa  MOV ECX,dword ptr [EBP + 0xffffff7c]
00594b00  CALL 0x0063aac0
00594b05  MOV EAX,dword ptr [EAX]
00594b07  MOV dword ptr [EBP + -0x7c],EAX
00594b0a  CMP dword ptr [EBP + -0x7c],0x2
00594b0e  JZ 0x00594b32
00594b10  MOV ECX,dword ptr [EBP + 0xffffff7c]
00594b16  CALL 0x0063aac0
00594b1b  MOV ECX,dword ptr [EAX]
00594b1d  MOV dword ptr [EBP + -0x80],ECX
00594b20  CMP dword ptr [EBP + -0x80],0x3
00594b24  JZ 0x00594b32
00594b26  MOV dword ptr [EBP + 0xfffffefc],0x0
00594b30  JMP 0x00594b3c
00594b32  MOV dword ptr [EBP + 0xfffffefc],0x1
00594b3c  MOVZX EDX,byte ptr [EBP + 0xfffffefc]
00594b43  NEG EDX
00594b45  SBB EDX,EDX
00594b47  AND EDX,0x15
00594b4a  ADD EDX,0x3fe
00594b50  MOV dword ptr [EBP + -0x20],EDX
00594b53  FLD1
00594b55  FSTP double ptr [EBP + -0x10]
00594b58  JMP 0x00595039
00594b5d  CMP dword ptr [EBP + -0x58],0x0
00594b61  JGE 0x00594beb
00594b67  MOV EAX,dword ptr [EBP + -0x4]
00594b6a  PUSH EAX
00594b6b  CALL 0x005dcb00
00594b70  ADD ESP,0x4
00594b73  MOV dword ptr [EBP + 0xffffff70],EAX
00594b79  MOV ECX,dword ptr [EBP + 0xffffff70]
00594b7f  CALL 0x0063aac0
00594b84  MOV ECX,dword ptr [EAX]
00594b86  MOV dword ptr [EBP + 0xffffff78],ECX
00594b8c  CMP dword ptr [EBP + 0xffffff78],0x2
00594b93  JZ 0x00594bbd
00594b95  MOV ECX,dword ptr [EBP + 0xffffff70]
00594b9b  CALL 0x0063aac0
00594ba0  MOV EDX,dword ptr [EAX]
00594ba2  MOV dword ptr [EBP + 0xffffff74],EDX
00594ba8  CMP dword ptr [EBP + 0xffffff74],0x3
00594baf  JZ 0x00594bbd
00594bb1  MOV dword ptr [EBP + 0xfffffef8],0x0
00594bbb  JMP 0x00594bc7
00594bbd  MOV dword ptr [EBP + 0xfffffef8],0x1
00594bc7  MOVZX EAX,byte ptr [EBP + 0xfffffef8]
00594bce  NEG EAX
00594bd0  SBB EAX,EAX
00594bd2  AND EAX,0xffffffe6
00594bd5  ADD EAX,0x402
00594bda  MOV dword ptr [EBP + -0x20],EAX
00594bdd  FLD double ptr [0x006b2c38]
00594be3  FSTP double ptr [EBP + -0x10]
00594be6  JMP 0x00595039
00594beb  CMP dword ptr [EBP + -0x58],0x0
00594bef  JLE 0x00594c7a
00594bf5  MOV ECX,dword ptr [EBP + -0x4]
00594bf8  PUSH ECX
00594bf9  CALL 0x005dcb00
00594bfe  ADD ESP,0x4
00594c01  MOV dword ptr [EBP + 0xffffff64],EAX
00594c07  MOV ECX,dword ptr [EBP + 0xffffff64]
00594c0d  CALL 0x0063aac0
00594c12  MOV EDX,dword ptr [EAX]
00594c14  MOV dword ptr [EBP + 0xffffff6c],EDX
00594c1a  CMP dword ptr [EBP + 0xffffff6c],0x2
00594c21  JZ 0x00594c4b
00594c23  MOV ECX,dword ptr [EBP + 0xffffff64]
00594c29  CALL 0x0063aac0
00594c2e  MOV EAX,dword ptr [EAX]
00594c30  MOV dword ptr [EBP + 0xffffff68],EAX
00594c36  CMP dword ptr [EBP + 0xffffff68],0x3
00594c3d  JZ 0x00594c4b
00594c3f  MOV dword ptr [EBP + 0xfffffef4],0x0
00594c49  JMP 0x00594c55
00594c4b  MOV dword ptr [EBP + 0xfffffef4],0x1
00594c55  MOVZX ECX,byte ptr [EBP + 0xfffffef4]
00594c5c  NEG ECX
00594c5e  SBB ECX,ECX
00594c60  AND ECX,0xffffffec
00594c63  ADD ECX,0x404
00594c69  MOV dword ptr [EBP + -0x20],ECX
00594c6c  FLD double ptr [0x006b2c38]
00594c72  FSTP double ptr [EBP + -0x10]
00594c75  JMP 0x00595039
00594c7a  JMP 0x00595039
00594c7f  MOV ECX,dword ptr [0x007935a4]
00594c85  CALL 0x005dac90
00594c8a  MOV dword ptr [EBP + -0x8],EAX
00594c8d  MOV ECX,dword ptr [0x007935a4]
00594c93  CALL 0x005dada0
00594c98  MOV dword ptr [EBP + -0x50],EAX
00594c9b  MOV ECX,dword ptr [0x007935a4]
00594ca1  CALL 0x005db190
00594ca6  MOVZX EDX,AL
00594ca9  TEST EDX,EDX
00594cab  JZ 0x00594dc4
00594cb1  CMP dword ptr [EBP + -0x8],-0x1
00594cb5  JZ 0x00594dc4
00594cbb  MOV EAX,dword ptr [EBP + -0x8]
00594cbe  PUSH EAX
00594cbf  CALL 0x005dcb00
00594cc4  ADD ESP,0x4
00594cc7  MOV dword ptr [EBP + 0xffffff58],EAX
00594ccd  MOV ECX,dword ptr [EBP + 0xffffff58]
00594cd3  CALL 0x0063aac0
00594cd8  MOV ECX,dword ptr [EAX]
00594cda  MOV dword ptr [EBP + 0xffffff60],ECX
00594ce0  CMP dword ptr [EBP + 0xffffff60],0x2
00594ce7  JZ 0x00594d11
00594ce9  MOV ECX,dword ptr [EBP + 0xffffff58]
00594cef  CALL 0x0063aac0
00594cf4  MOV EDX,dword ptr [EAX]
00594cf6  MOV dword ptr [EBP + 0xffffff5c],EDX
00594cfc  CMP dword ptr [EBP + 0xffffff5c],0x3
00594d03  JZ 0x00594d11
00594d05  MOV dword ptr [EBP + 0xfffffef0],0x0
00594d0f  JMP 0x00594d1b
00594d11  MOV dword ptr [EBP + 0xfffffef0],0x1
00594d1b  MOVZX EAX,byte ptr [EBP + 0xfffffef0]
00594d22  TEST EAX,EAX
00594d24  JZ 0x00594d32
00594d26  MOV dword ptr [EBP + 0xfffffeec],0xffffffff
00594d30  JMP 0x00594d3b
00594d32  MOV ECX,dword ptr [EBP + -0x8]
00594d35  MOV dword ptr [EBP + 0xfffffeec],ECX
00594d3b  MOV EDX,dword ptr [EBP + 0xfffffeec]
00594d41  MOV dword ptr [EBP + -0x48],EDX
00594d44  MOV EAX,dword ptr [EBP + -0x8]
00594d47  PUSH EAX
00594d48  CALL 0x005dcb00
00594d4d  ADD ESP,0x4
00594d50  MOV dword ptr [EBP + 0xffffff4c],EAX
00594d56  MOV ECX,dword ptr [EBP + 0xffffff4c]
00594d5c  CALL 0x0063aac0
00594d61  MOV ECX,dword ptr [EAX]
00594d63  MOV dword ptr [EBP + 0xffffff54],ECX
00594d69  CMP dword ptr [EBP + 0xffffff54],0x2
00594d70  JZ 0x00594d9a
00594d72  MOV ECX,dword ptr [EBP + 0xffffff4c]
00594d78  CALL 0x0063aac0
00594d7d  MOV EDX,dword ptr [EAX]
00594d7f  MOV dword ptr [EBP + 0xffffff50],EDX
00594d85  CMP dword ptr [EBP + 0xffffff50],0x3
00594d8c  JZ 0x00594d9a
00594d8e  MOV dword ptr [EBP + 0xfffffee8],0x0
00594d98  JMP 0x00594da4
00594d9a  MOV dword ptr [EBP + 0xfffffee8],0x1
00594da4  MOVZX EAX,byte ptr [EBP + 0xfffffee8]
00594dab  NEG EAX
00594dad  SBB EAX,EAX
00594daf  AND EAX,0x15
00594db2  ADD EAX,0x3fd
00594db7  MOV dword ptr [EBP + -0x20],EAX
00594dba  FLD1
00594dbc  FSTP double ptr [EBP + -0x10]
00594dbf  JMP 0x00595027
00594dc4  CMP dword ptr [EBP + -0x8],-0x1
00594dc8  JZ 0x00594de1
00594dca  LEA ECX,[EBP + -0x58]
00594dcd  PUSH ECX
00594dce  MOV EDX,dword ptr [EBP + -0x8]
00594dd1  PUSH EDX
00594dd2  CALL 0x005dcb00
00594dd7  ADD ESP,0x4
00594dda  MOV ECX,EAX
00594ddc  CALL 0x005d6020
00594de1  CMP dword ptr [EBP + -0x8],-0x1
00594de5  JZ 0x00594f14
00594deb  CMP dword ptr [EBP + -0x58],0x0
00594def  JLE 0x00594f14
00594df5  PUSH 0x2
00594df7  CALL 0x0062fbf0
00594dfc  ADD ESP,0x4
00594dff  TEST EAX,EAX
00594e01  JNZ 0x00594f14
00594e07  MOV EAX,dword ptr [EBP + -0x8]
00594e0a  PUSH EAX
00594e0b  CALL 0x005dcb00
00594e10  ADD ESP,0x4
00594e13  MOV dword ptr [EBP + 0xffffff40],EAX
00594e19  MOV ECX,dword ptr [EBP + 0xffffff40]
00594e1f  CALL 0x0063aac0
00594e24  MOV ECX,dword ptr [EAX]
00594e26  MOV dword ptr [EBP + 0xffffff48],ECX
00594e2c  CMP dword ptr [EBP + 0xffffff48],0x2
00594e33  JZ 0x00594e5d
00594e35  MOV ECX,dword ptr [EBP + 0xffffff40]
00594e3b  CALL 0x0063aac0
00594e40  MOV EDX,dword ptr [EAX]
00594e42  MOV dword ptr [EBP + 0xffffff44],EDX
00594e48  CMP dword ptr [EBP + 0xffffff44],0x3
00594e4f  JZ 0x00594e5d
00594e51  MOV dword ptr [EBP + 0xfffffee4],0x0
00594e5b  JMP 0x00594e67
00594e5d  MOV dword ptr [EBP + 0xfffffee4],0x1
00594e67  MOVZX EAX,byte ptr [EBP + 0xfffffee4]
00594e6e  TEST EAX,EAX
00594e70  JZ 0x00594e7e
00594e72  MOV dword ptr [EBP + 0xfffffee0],0xffffffff
00594e7c  JMP 0x00594e87
00594e7e  MOV ECX,dword ptr [EBP + -0x8]
00594e81  MOV dword ptr [EBP + 0xfffffee0],ECX
00594e87  MOV EDX,dword ptr [EBP + 0xfffffee0]
00594e8d  MOV dword ptr [EBP + -0x48],EDX
00594e90  MOV EAX,dword ptr [EBP + -0x8]
00594e93  PUSH EAX
00594e94  CALL 0x005dcb00
00594e99  ADD ESP,0x4
00594e9c  MOV dword ptr [EBP + 0xffffff34],EAX
00594ea2  MOV ECX,dword ptr [EBP + 0xffffff34]
00594ea8  CALL 0x0063aac0
00594ead  MOV ECX,dword ptr [EAX]
00594eaf  MOV dword ptr [EBP + 0xffffff3c],ECX
00594eb5  CMP dword ptr [EBP + 0xffffff3c],0x2
00594ebc  JZ 0x00594ee6
00594ebe  MOV ECX,dword ptr [EBP + 0xffffff34]
00594ec4  CALL 0x0063aac0
00594ec9  MOV EDX,dword ptr [EAX]
00594ecb  MOV dword ptr [EBP + 0xffffff38],EDX
00594ed1  CMP dword ptr [EBP + 0xffffff38],0x3
00594ed8  JZ 0x00594ee6
00594eda  MOV dword ptr [EBP + 0xfffffedc],0x0
00594ee4  JMP 0x00594ef0
00594ee6  MOV dword ptr [EBP + 0xfffffedc],0x1
00594ef0  MOVZX EAX,byte ptr [EBP + 0xfffffedc]
00594ef7  NEG EAX
00594ef9  SBB EAX,EAX
00594efb  AND EAX,0x19
00594efe  ADD EAX,0x3f2
00594f03  MOV dword ptr [EBP + -0x20],EAX
00594f06  FLD double ptr [0x006b2c38]
00594f0c  FSTP double ptr [EBP + -0x10]
00594f0f  JMP 0x00595027
00594f14  CMP dword ptr [EBP + -0x50],-0x1
00594f18  JZ 0x00595027
00594f1e  MOV ECX,dword ptr [EBP + -0x50]
00594f21  PUSH ECX
00594f22  CALL 0x005dcb00
00594f27  ADD ESP,0x4
00594f2a  MOV dword ptr [EBP + 0xffffff28],EAX
00594f30  MOV ECX,dword ptr [EBP + 0xffffff28]
00594f36  CALL 0x0063aac0
00594f3b  MOV EDX,dword ptr [EAX]
00594f3d  MOV dword ptr [EBP + 0xffffff30],EDX
00594f43  CMP dword ptr [EBP + 0xffffff30],0x2
00594f4a  JZ 0x00594f74
00594f4c  MOV ECX,dword ptr [EBP + 0xffffff28]
00594f52  CALL 0x0063aac0
00594f57  MOV EAX,dword ptr [EAX]
00594f59  MOV dword ptr [EBP + 0xffffff2c],EAX
00594f5f  CMP dword ptr [EBP + 0xffffff2c],0x3
00594f66  JZ 0x00594f74
00594f68  MOV dword ptr [EBP + 0xfffffed8],0x0
00594f72  JMP 0x00594f7e
00594f74  MOV dword ptr [EBP + 0xfffffed8],0x1
00594f7e  MOVZX ECX,byte ptr [EBP + 0xfffffed8]
00594f85  TEST ECX,ECX
00594f87  JZ 0x00594f95
00594f89  MOV dword ptr [EBP + 0xfffffed4],0xffffffff
00594f93  JMP 0x00594f9e
00594f95  MOV EDX,dword ptr [EBP + -0x50]
00594f98  MOV dword ptr [EBP + 0xfffffed4],EDX
00594f9e  MOV EAX,dword ptr [EBP + 0xfffffed4]
00594fa4  MOV dword ptr [EBP + -0x48],EAX
00594fa7  MOV ECX,dword ptr [EBP + -0x50]
00594faa  PUSH ECX
00594fab  CALL 0x005dcb00
00594fb0  ADD ESP,0x4
00594fb3  MOV dword ptr [EBP + 0xffffff1c],EAX
00594fb9  MOV ECX,dword ptr [EBP + 0xffffff1c]
00594fbf  CALL 0x0063aac0
00594fc4  MOV EDX,dword ptr [EAX]
00594fc6  MOV dword ptr [EBP + 0xffffff24],EDX
00594fcc  CMP dword ptr [EBP + 0xffffff24],0x2
00594fd3  JZ 0x00594ffd
00594fd5  MOV ECX,dword ptr [EBP + 0xffffff1c]
00594fdb  CALL 0x0063aac0
00594fe0  MOV EAX,dword ptr [EAX]
00594fe2  MOV dword ptr [EBP + 0xffffff20],EAX
00594fe8  CMP dword ptr [EBP + 0xffffff20],0x3
00594fef  JZ 0x00594ffd
00594ff1  MOV dword ptr [EBP + 0xfffffed0],0x0
00594ffb  JMP 0x00595007
00594ffd  MOV dword ptr [EBP + 0xfffffed0],0x1
00595007  MOVZX ECX,byte ptr [EBP + 0xfffffed0]
0059500e  NEG ECX
00595010  SBB ECX,ECX
00595012  AND ECX,0x19
00595015  ADD ECX,0x3f3
0059501b  MOV dword ptr [EBP + -0x20],ECX
0059501e  FLD double ptr [0x006b2c38]
00595024  FSTP double ptr [EBP + -0x10]
00595027  JMP 0x00595039
00595029  MOV dword ptr [EBP + -0x1c],0x29810
00595030  JMP 0x00595039
00595032  MOV dword ptr [EBP + -0x1c],0x29816
00595039  PUSH -0x1
0059503b  PUSH -0x1
0059503d  MOV ECX,dword ptr [0x007935a8]
00595043  CALL 0x005994c0
00595048  CMP dword ptr [EBP + -0x48],0x4
0059504c  JNZ 0x00595099
0059504e  CMP dword ptr [EBP + -0x1c],-0x1
00595052  JNZ 0x00595076
00595054  PUSH 0x0
00595056  PUSH 0x1
00595058  MOV EDX,dword ptr [0x0162ee80]
0059505e  MOV EAX,dword ptr [EDX + 0x4]
00595061  MOV ECX,dword ptr [0x0162ee80]
00595067  MOV ECX,dword ptr [ECX + 0x4]
0059506a  MOV EDX,dword ptr [EAX]
0059506c  MOV EAX,dword ptr [EDX + 0x8]
0059506f  CALL EAX
00595071  JMP 0x005951d1
00595076  PUSH 0x0
00595078  MOV ECX,dword ptr [0x0162ee80]
0059507e  MOV EDX,dword ptr [ECX + 0x4]
00595081  PUSH EDX
00595082  MOV EAX,dword ptr [EBP + -0x1c]
00595085  PUSH EAX
00595086  MOV ECX,dword ptr [0x0079359c]
0059508c  MOV ECX,dword ptr [ECX + 0x48]
0059508f  CALL 0x005cd7c0
00595094  JMP 0x005951d1
00595099  CMP dword ptr [EBP + -0x20],-0x1
0059509d  JZ 0x00595127
005950a3  MOV ECX,dword ptr [0x0162ee84]
005950a9  CALL 0x00636730
005950ae  TEST EAX,EAX
005950b0  JZ 0x00595127
005950b2  CMP dword ptr [EBP + -0x48],-0x1
005950b6  JLE 0x0059514a
005950bc  MOV EDX,dword ptr [EBP + -0x48]
005950bf  PUSH EDX
005950c0  CALL 0x005dcb00
005950c5  ADD ESP,0x4
005950c8  MOV dword ptr [EBP + 0xffffff10],EAX
005950ce  MOV ECX,dword ptr [EBP + 0xffffff10]
005950d4  CALL 0x0063aac0
005950d9  MOV EAX,dword ptr [EAX]
005950db  MOV dword ptr [EBP + 0xffffff18],EAX
005950e1  CMP dword ptr [EBP + 0xffffff18],0x2
005950e8  JZ 0x00595112
005950ea  MOV ECX,dword ptr [EBP + 0xffffff10]
005950f0  CALL 0x0063aac0
005950f5  MOV ECX,dword ptr [EAX]
005950f7  MOV dword ptr [EBP + 0xffffff14],ECX
005950fd  CMP dword ptr [EBP + 0xffffff14],0x3
00595104  JZ 0x00595112
00595106  MOV dword ptr [EBP + 0xfffffecc],0x0
00595110  JMP 0x0059511c
00595112  MOV dword ptr [EBP + 0xfffffecc],0x1
0059511c  MOVZX EDX,byte ptr [EBP + 0xfffffecc]
00595123  TEST EDX,EDX
00595125  JZ 0x0059514a
00595127  PUSH 0x0
00595129  PUSH 0x1
0059512b  MOV EAX,[0x0162ee80]
00595130  MOV ECX,dword ptr [EAX + 0x4]
00595133  MOV EDX,dword ptr [0x0162ee80]
00595139  MOV EAX,dword ptr [EDX + 0x4]
0059513c  MOV EDX,dword ptr [ECX]
0059513e  MOV ECX,EAX
00595140  MOV EAX,dword ptr [EDX + 0x8]
00595143  CALL EAX
00595145  JMP 0x005951d1
0059514a  CMP dword ptr [EBP + -0x48],-0x1
0059514e  JZ 0x0059515b
00595150  MOV ECX,dword ptr [EBP + -0x48]
00595153  MOV dword ptr [EBP + 0xfffffec8],ECX
00595159  JMP 0x0059516c
0059515b  MOV ECX,dword ptr [0x0162ee84]
00595161  CALL 0x00636c50
00595166  MOV dword ptr [EBP + 0xfffffec8],EAX
0059516c  MOV EDX,dword ptr [EBP + 0xfffffec8]
00595172  MOV dword ptr [EBP + -0x40],EDX
00595175  MOV EAX,dword ptr [EBP + -0x20]
00595178  MOV dword ptr [EBP + -0x3c],EAX
0059517b  MOV ECX,dword ptr [EBP + -0x4c]
0059517e  MOV dword ptr [EBP + -0x38],ECX
00595181  FLD double ptr [EBP + -0x18]
00595184  FSTP double ptr [EBP + -0x30]
00595187  FLD double ptr [EBP + -0x10]
0059518a  FSTP double ptr [EBP + -0x28]
0059518d  PUSH 0x1
0059518f  MOV EDX,dword ptr [0x0162ee80]
00595195  MOV EAX,dword ptr [EDX + 0x4]
00595198  MOV ECX,dword ptr [0x0162ee80]
0059519e  MOV ECX,dword ptr [ECX + 0x4]
005951a1  MOV EDX,dword ptr [EAX]
005951a3  MOV EAX,dword ptr [EDX + 0x4]
005951a6  CALL EAX
005951a8  PUSH 0x1
005951aa  PUSH 0x2
005951ac  MOV ECX,dword ptr [0x0162ee84]
005951b2  CALL 0x00637810
005951b7  PUSH EAX
005951b8  MOV ECX,dword ptr [0x0162ee80]
005951be  MOV EDX,dword ptr [ECX + 0x4]
005951c1  PUSH EDX
005951c2  LEA EAX,[EBP + -0x40]
005951c5  PUSH EAX
005951c6  MOV ECX,dword ptr [0x0162ee84]
005951cc  CALL 0x00639390
005951d1  MOV ESP,EBP
005951d3  POP EBP
005951d4  RET

; FUN_00581b70  00581b70
00581b70  PUSH EBP
00581b71  MOV EBP,ESP
00581b73  SUB ESP,0x8c
00581b79  MOV EAX,[0x00781870]
00581b7e  XOR EAX,EBP
00581b80  MOV dword ptr [EBP + -0x4],EAX
00581b83  PUSH ESI
00581b84  PUSH EDI
00581b85  MOV dword ptr [EBP + 0xffffff78],ECX
00581b8b  MOV EAX,dword ptr [EBP + 0xffffff78]
00581b91  MOV ECX,dword ptr [EAX + 0x407c]
00581b97  SHL ECX,0x4
00581b9a  MOV EDX,dword ptr [EBP + 0xffffff78]
00581ba0  LEA EAX,[EDX + ECX*0x1 + 0x39b8]
00581ba7  PUSH EAX
00581ba8  MOV ECX,dword ptr [EBP + 0xffffff78]
00581bae  MOV EDX,dword ptr [ECX + 0x4080]
00581bb4  MOV EAX,dword ptr [EBP + 0xffffff78]
00581bba  MOV ECX,dword ptr [EAX + 0x4080]
00581bc0  MOV EDX,dword ptr [EDX]
00581bc2  MOV EAX,dword ptr [EDX + 0xb4]
00581bc8  CALL EAX
00581bca  MOV ECX,dword ptr [EBP + 0xffffff78]
00581bd0  MOV EDX,dword ptr [ECX + 0x4080]
00581bd6  MOV EAX,dword ptr [EBP + 0xffffff78]
00581bdc  MOV ECX,dword ptr [EAX + 0x4080]
00581be2  MOV EDX,dword ptr [EDX]
00581be4  MOV EAX,dword ptr [EDX + 0x74]
00581be7  CALL EAX
00581be9  MOV ECX,dword ptr [EBP + 0xffffff78]
00581bef  CALL 0x00582410
00581bf4  MOV ECX,dword ptr [EBP + 0xffffff78]
00581bfa  MOV EDX,dword ptr [ECX + 0x407c]
00581c00  MOV EAX,dword ptr [EBP + 0xffffff78]
00581c06  CMP dword ptr [EAX + EDX*0x4 + 0x3a18],0x0
00581c0e  JNZ 0x00581c15
00581c10  JMP 0x0058214a
00581c15  MOV ECX,dword ptr [EBP + 0xffffff78]
00581c1b  MOV EDX,dword ptr [ECX + 0x407c]
00581c21  MOV EAX,dword ptr [EBP + 0xffffff78]
00581c27  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x39f8]
00581c2e  MOV dword ptr [EBP + -0x2c],ECX
00581c31  MOV EDX,dword ptr [EBP + 0xffffff78]
00581c37  MOV EAX,dword ptr [EDX + 0x407c]
00581c3d  IMUL EAX,EAX,0xe10
00581c43  MOV ECX,dword ptr [EBP + 0xffffff78]
00581c49  LEA ESI,[ECX + EAX*0x1 + 0x178]
00581c50  MOV EDX,dword ptr [EBP + 0xffffff78]
00581c56  MOV EAX,dword ptr [EDX + 0x407c]
00581c5c  IMUL EAX,EAX,0x190
00581c62  MOV ECX,dword ptr [EBP + 0xffffff78]
00581c68  LEA EDX,[ECX + EAX*0x1 + 0x3a28]
00581c6f  MOV EAX,dword ptr [EBP + -0x2c]
00581c72  MOV ECX,dword ptr [EDX + EAX*0x4]
00581c75  IMUL ECX,ECX,0x24
00581c78  ADD ESI,ECX
00581c7a  MOV ECX,0x9
00581c7f  LEA EDI,[EBP + -0x28]
00581c82  MOVSD.REP ES:EDI,ESI
00581c84  MOV EDX,dword ptr [EBP + -0xc]
00581c87  MOV dword ptr [EBP + -0x38],EDX
00581c8a  MOVSX EAX,byte ptr [EBP + -0x26]
00581c8e  MOV dword ptr [EBP + -0x3c],EAX
00581c91  MOV ECX,dword ptr [EBP + -0x3c]
00581c94  MOV EDX,dword ptr [EBP + -0x38]
00581c97  LEA EAX,[EDX + ECX*0x1 + -0x1]
00581c9b  MOV dword ptr [EBP + -0x30],EAX
00581c9e  CMP dword ptr [EBP + -0x30],0x3e8
00581ca5  JLE 0x00581cb3
00581ca7  MOV ECX,dword ptr [EBP + -0x30]
00581caa  SUB ECX,0x3e8
00581cb0  MOV dword ptr [EBP + -0x30],ECX
00581cb3  CMP dword ptr [EBP + -0x3c],0x1
00581cb7  JLE 0x00581cd5
00581cb9  MOV EDX,dword ptr [EBP + -0x30]
00581cbc  PUSH EDX
00581cbd  MOV EAX,dword ptr [EBP + -0x38]
00581cc0  PUSH EAX
00581cc1  PUSH 0x6cc144
00581cc6  LEA ECX,[EBP + -0x80]
00581cc9  PUSH ECX
00581cca  CALL dword ptr [0x006b2220]
00581cd0  ADD ESP,0x10
00581cd3  JMP 0x00581ceb
00581cd5  MOV EDX,dword ptr [EBP + -0x38]
00581cd8  PUSH EDX
00581cd9  PUSH 0x6cc13c
00581cde  LEA EAX,[EBP + -0x80]
00581ce1  PUSH EAX
00581ce2  CALL dword ptr [0x006b2220]
00581ce8  ADD ESP,0xc
00581ceb  LEA ECX,[EBP + -0x80]
00581cee  PUSH ECX
00581cef  MOV EDX,dword ptr [EBP + 0xffffff78]
00581cf5  MOV EAX,dword ptr [EDX + 0x4084]
00581cfb  MOV ECX,dword ptr [EBP + 0xffffff78]
00581d01  MOV ECX,dword ptr [ECX + 0x4084]
00581d07  MOV EDX,dword ptr [EAX]
00581d09  MOV EAX,dword ptr [EDX + 0xb4]
00581d0f  CALL EAX
00581d11  MOV ECX,dword ptr [EBP + 0xffffff78]
00581d17  MOV EDX,dword ptr [ECX + 0x4084]
00581d1d  MOV EAX,dword ptr [EBP + 0xffffff78]
00581d23  MOV ECX,dword ptr [EAX + 0x4084]
00581d29  MOV EDX,dword ptr [EDX]
00581d2b  MOV EAX,dword ptr [EDX + 0x74]
00581d2e  CALL EAX
00581d30  MOVSX ECX,byte ptr [EBP + -0x25]
00581d34  TEST ECX,ECX
00581d36  JZ 0x00581d57
00581d38  MOV EDX,dword ptr [EBP + 0xffffff78]
00581d3e  MOV EAX,dword ptr [EDX + 0x4318]
00581d44  MOV ECX,dword ptr [EBP + 0xffffff78]
00581d4a  MOV ECX,dword ptr [ECX + 0x4318]
00581d50  MOV EDX,dword ptr [EAX]
00581d52  MOV EAX,dword ptr [EDX + 0x74]
00581d55  CALL EAX
00581d57  MOVSX ECX,byte ptr [EBP + -0x28]
00581d5b  CMP ECX,0x3
00581d5e  JG 0x00581e03
00581d64  MOV dword ptr [EBP + 0xffffff7c],0x0
00581d6e  MOV dword ptr [EBP + -0x34],0x0
00581d75  JMP 0x00581d80
00581d77  MOV EDX,dword ptr [EBP + -0x34]
00581d7a  ADD EDX,0x1
00581d7d  MOV dword ptr [EBP + -0x34],EDX
00581d80  CMP dword ptr [EBP + -0x34],0x14
00581d84  JGE 0x00581da3
00581d86  MOV EAX,dword ptr [EBP + -0x34]
00581d89  MOVSX ECX,byte ptr [EBP + EAX*0x1 + -0x23]
00581d8e  TEST ECX,ECX
00581d90  JZ 0x00581da1
00581d92  MOV EDX,dword ptr [EBP + 0xffffff7c]
00581d98  ADD EDX,0x1
00581d9b  MOV dword ptr [EBP + 0xffffff7c],EDX
00581da1  JMP 0x00581d77
00581da3  MOV EAX,dword ptr [EBP + 0xffffff7c]
00581da9  PUSH EAX
00581daa  PUSH 0x6b2828
00581daf  LEA ECX,[EBP + -0x80]
00581db2  PUSH ECX
00581db3  CALL dword ptr [0x006b2220]
00581db9  ADD ESP,0xc
00581dbc  LEA EDX,[EBP + -0x80]
00581dbf  PUSH EDX
00581dc0  MOV EAX,dword ptr [EBP + 0xffffff78]
00581dc6  MOV ECX,dword ptr [EAX + 0x4088]
00581dcc  MOV EDX,dword ptr [EBP + 0xffffff78]
00581dd2  MOV EAX,dword ptr [EDX + 0x4088]
00581dd8  MOV EDX,dword ptr [ECX]
00581dda  MOV ECX,EAX
00581ddc  MOV EAX,dword ptr [EDX + 0xb4]
00581de2  CALL EAX
00581de4  MOV ECX,dword ptr [EBP + 0xffffff78]
00581dea  MOV EDX,dword ptr [ECX + 0x4088]
00581df0  MOV EAX,dword ptr [EBP + 0xffffff78]
00581df6  MOV ECX,dword ptr [EAX + 0x4088]
00581dfc  MOV EDX,dword ptr [EDX]
00581dfe  MOV EAX,dword ptr [EDX + 0x74]
00581e01  CALL EAX
00581e03  MOV ECX,dword ptr [EBP + -0x3c]
00581e06  PUSH ECX
00581e07  PUSH 0x6b2828
00581e0c  LEA EDX,[EBP + -0x80]
00581e0f  PUSH EDX
00581e10  CALL dword ptr [0x006b2220]
00581e16  ADD ESP,0xc
00581e19  LEA EAX,[EBP + -0x80]
00581e1c  PUSH EAX
00581e1d  MOV ECX,dword ptr [EBP + 0xffffff78]
00581e23  MOV EDX,dword ptr [ECX + 0x408c]
00581e29  MOV EAX,dword ptr [EBP + 0xffffff78]
00581e2f  MOV ECX,dword ptr [EAX + 0x408c]
00581e35  MOV EDX,dword ptr [EDX]
00581e37  MOV EAX,dword ptr [EDX + 0xb4]
00581e3d  CALL EAX
00581e3f  MOV ECX,dword ptr [EBP + 0xffffff78]
00581e45  MOV EDX,dword ptr [ECX + 0x408c]
00581e4b  MOV EAX,dword ptr [EBP + 0xffffff78]
00581e51  MOV ECX,dword ptr [EAX + 0x408c]
00581e57  MOV EDX,dword ptr [EDX]
00581e59  MOV EAX,dword ptr [EDX + 0x74]
00581e5c  CALL EAX
00581e5e  MOVSX ECX,byte ptr [EBP + -0x27]
00581e62  PUSH ECX
00581e63  PUSH 0x6bb590
00581e68  LEA EDX,[EBP + -0x80]
00581e6b  PUSH EDX
00581e6c  CALL dword ptr [0x006b2220]
00581e72  ADD ESP,0xc
00581e75  LEA EAX,[EBP + -0x80]
00581e78  PUSH EAX
00581e79  MOV ECX,dword ptr [EBP + 0xffffff78]
00581e7f  MOV EDX,dword ptr [ECX + 0x4090]
00581e85  MOV EAX,dword ptr [EBP + 0xffffff78]
00581e8b  MOV ECX,dword ptr [EAX + 0x4090]
00581e91  MOV EDX,dword ptr [EDX]
00581e93  MOV EAX,dword ptr [EDX + 0xb4]
00581e99  CALL EAX
00581e9b  MOV ECX,dword ptr [EBP + 0xffffff78]
00581ea1  MOV EDX,dword ptr [ECX + 0x4090]
00581ea7  MOV EAX,dword ptr [EBP + 0xffffff78]
00581ead  MOV ECX,dword ptr [EAX + 0x4090]
00581eb3  MOV EDX,dword ptr [EDX]
00581eb5  MOV EAX,dword ptr [EDX + 0x74]
00581eb8  CALL EAX
00581eba  MOVSX ECX,byte ptr [EBP + -0x27]
00581ebe  IMUL ECX,dword ptr [EBP + -0x3c]
00581ec2  PUSH ECX
00581ec3  PUSH 0x6bb590
00581ec8  LEA EDX,[EBP + -0x80]
00581ecb  PUSH EDX
00581ecc  CALL dword ptr [0x006b2220]
00581ed2  ADD ESP,0xc
00581ed5  LEA EAX,[EBP + -0x80]
00581ed8  PUSH EAX
00581ed9  MOV ECX,dword ptr [EBP + 0xffffff78]
00581edf  MOV EDX,dword ptr [ECX + 0x4094]
00581ee5  MOV EAX,dword ptr [EBP + 0xffffff78]
00581eeb  MOV ECX,dword ptr [EAX + 0x4094]
00581ef1  MOV EDX,dword ptr [EDX]
00581ef3  MOV EAX,dword ptr [EDX + 0xb4]
00581ef9  CALL EAX
00581efb  MOV ECX,dword ptr [EBP + 0xffffff78]
00581f01  MOV EDX,dword ptr [ECX + 0x4094]
00581f07  MOV EAX,dword ptr [EBP + 0xffffff78]
00581f0d  MOV ECX,dword ptr [EAX + 0x4094]
00581f13  MOV EDX,dword ptr [EDX]
00581f15  MOV EAX,dword ptr [EDX + 0x74]
00581f18  CALL EAX
00581f1a  MOVSX ECX,byte ptr [EBP + -0x28]
00581f1e  MOV dword ptr [EBP + 0xffffff74],ECX
00581f24  CMP dword ptr [EBP + 0xffffff74],0x6
00581f2b  JA 0x0058214a
00581f31  MOV EDX,dword ptr [EBP + 0xffffff74]
00581f37  JMP dword ptr [EDX*0x4 + 0x58215c]
00581f3e  MOV dword ptr [EBP + -0x34],0x0
00581f45  JMP 0x00581f50
00581f47  MOV EAX,dword ptr [EBP + -0x34]
00581f4a  ADD EAX,0x1
00581f4d  MOV dword ptr [EBP + -0x34],EAX
00581f50  CMP dword ptr [EBP + -0x34],0x14
00581f54  JGE 0x00581f95
00581f56  MOV ECX,dword ptr [EBP + -0x34]
00581f59  MOVSX EDX,byte ptr [EBP + ECX*0x1 + -0x23]
00581f5e  TEST EDX,EDX
00581f60  JZ 0x00581f93
00581f62  MOV EAX,dword ptr [EBP + -0x34]
00581f65  MOVSX ECX,byte ptr [EBP + EAX*0x1 + -0x23]
00581f6a  MOV EDX,dword ptr [EBP + 0xffffff78]
00581f70  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4094]
00581f77  MOV ECX,dword ptr [EBP + -0x34]
00581f7a  MOVSX EDX,byte ptr [EBP + ECX*0x1 + -0x23]
00581f7f  MOV ECX,dword ptr [EBP + 0xffffff78]
00581f85  MOV ECX,dword ptr [ECX + EDX*0x4 + 0x4094]
00581f8c  MOV EDX,dword ptr [EAX]
00581f8e  MOV EAX,dword ptr [EDX + 0x74]
00581f91  CALL EAX
00581f93  JMP 0x00581f47
00581f95  JMP 0x0058214a
00581f9a  PUSH 0x2
00581f9c  MOV ECX,dword ptr [EBP + 0xffffff78]
00581fa2  MOV EDX,dword ptr [ECX + 0x431c]
00581fa8  MOV EAX,dword ptr [EBP + 0xffffff78]
00581fae  MOV ECX,dword ptr [EAX + 0x431c]
00581fb4  MOV EDX,dword ptr [EDX]
00581fb6  MOV EAX,dword ptr [EDX + 0xb0]
00581fbc  CALL EAX
00581fbe  MOV ECX,dword ptr [EBP + 0xffffff78]
00581fc4  MOV EDX,dword ptr [ECX + 0x431c]
00581fca  MOV EAX,dword ptr [EBP + 0xffffff78]
00581fd0  MOV ECX,dword ptr [EAX + 0x431c]
00581fd6  MOV EDX,dword ptr [EDX]
00581fd8  MOV EAX,dword ptr [EDX + 0x74]
00581fdb  CALL EAX
00581fdd  MOV dword ptr [EBP + -0x34],0x0
00581fe4  JMP 0x00581fef
00581fe6  MOV ECX,dword ptr [EBP + -0x34]
00581fe9  ADD ECX,0x1
00581fec  MOV dword ptr [EBP + -0x34],ECX
00581fef  CMP dword ptr [EBP + -0x34],0xa
00581ff3  JGE 0x00582047
00581ff5  MOV EDX,dword ptr [EBP + -0x34]
00581ff8  MOV EAX,dword ptr [EBP + 0xffffff78]
00581ffe  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4098]
00582005  MOV EDX,dword ptr [EBP + -0x34]
00582008  MOV EAX,dword ptr [EBP + 0xffffff78]
0058200e  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4098]
00582015  MOV EAX,dword ptr [ECX]
00582017  MOV ECX,EDX
00582019  MOV EDX,dword ptr [EAX + 0x74]
0058201c  CALL EDX
0058201e  MOV EAX,dword ptr [EBP + -0x34]
00582021  MOV ECX,dword ptr [EBP + 0xffffff78]
00582027  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x41b0]
0058202e  MOV EAX,dword ptr [EBP + -0x34]
00582031  MOV ECX,dword ptr [EBP + 0xffffff78]
00582037  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x41b0]
0058203e  MOV EDX,dword ptr [EDX]
00582040  MOV EAX,dword ptr [EDX + 0x74]
00582043  CALL EAX
00582045  JMP 0x00581fe6
00582047  MOV dword ptr [EBP + -0x34],0x0
0058204e  JMP 0x00582059
00582050  MOV ECX,dword ptr [EBP + -0x34]
00582053  ADD ECX,0x1
00582056  MOV dword ptr [EBP + -0x34],ECX
00582059  CMP dword ptr [EBP + -0x34],0x8
0058205d  JGE 0x005820bd
0058205f  MOV EDX,dword ptr [EBP + -0x34]
00582062  IMUL EDX,EDX,0xa
00582065  MOV EAX,dword ptr [EBP + 0xffffff78]
0058206b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4098]
00582072  MOV EDX,dword ptr [EBP + -0x34]
00582075  IMUL EDX,EDX,0xa
00582078  MOV EAX,dword ptr [EBP + 0xffffff78]
0058207e  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4098]
00582085  MOV EAX,dword ptr [ECX]
00582087  MOV ECX,EDX
00582089  MOV EDX,dword ptr [EAX + 0x74]
0058208c  CALL EDX
0058208e  MOV EAX,dword ptr [EBP + -0x34]
00582091  IMUL EAX,EAX,0xa
00582094  MOV ECX,dword ptr [EBP + 0xffffff78]
0058209a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x40bc]
005820a1  MOV EAX,dword ptr [EBP + -0x34]
005820a4  IMUL EAX,EAX,0xa
005820a7  MOV ECX,dword ptr [EBP + 0xffffff78]
005820ad  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x40bc]
005820b4  MOV EDX,dword ptr [EDX]
005820b6  MOV EAX,dword ptr [EDX + 0x74]
005820b9  CALL EAX
005820bb  JMP 0x00582050
005820bd  JMP 0x0058214a
005820c2  PUSH 0x0
005820c4  MOV ECX,dword ptr [EBP + 0xffffff78]
005820ca  MOV EDX,dword ptr [ECX + 0x431c]
005820d0  MOV EAX,dword ptr [EBP + 0xffffff78]
005820d6  MOV ECX,dword ptr [EAX + 0x431c]
005820dc  MOV EDX,dword ptr [EDX]
005820de  MOV EAX,dword ptr [EDX + 0xb0]
005820e4  CALL EAX
005820e6  MOV ECX,dword ptr [EBP + 0xffffff78]
005820ec  MOV EDX,dword ptr [ECX + 0x431c]
005820f2  MOV EAX,dword ptr [EBP + 0xffffff78]
005820f8  MOV ECX,dword ptr [EAX + 0x431c]
005820fe  MOV EDX,dword ptr [EDX]
00582100  MOV EAX,dword ptr [EDX + 0x74]
00582103  CALL EAX
00582105  JMP 0x0058214a
00582107  PUSH 0x1
00582109  MOV ECX,dword ptr [EBP + 0xffffff78]
0058210f  MOV EDX,dword ptr [ECX + 0x431c]
00582115  MOV EAX,dword ptr [EBP + 0xffffff78]
0058211b  MOV ECX,dword ptr [EAX + 0x431c]
00582121  MOV EDX,dword ptr [EDX]
00582123  MOV EAX,dword ptr [EDX + 0xb0]
00582129  CALL EAX
0058212b  MOV ECX,dword ptr [EBP + 0xffffff78]
00582131  MOV EDX,dword ptr [ECX + 0x431c]
00582137  MOV EAX,dword ptr [EBP + 0xffffff78]
0058213d  MOV ECX,dword ptr [EAX + 0x431c]
00582143  MOV EDX,dword ptr [EDX]
00582145  MOV EAX,dword ptr [EDX + 0x74]
00582148  CALL EAX
0058214a  POP EDI
0058214b  POP ESI
0058214c  MOV ECX,dword ptr [EBP + -0x4]
0058214f  XOR ECX,EBP
00582151  CALL 0x00686d72
00582156  MOV ESP,EBP
00582158  POP EBP
00582159  RET

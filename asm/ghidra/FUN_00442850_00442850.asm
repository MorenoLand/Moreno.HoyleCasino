; FUN_00442850  00442850
00442850  PUSH EBP
00442851  MOV EBP,ESP
00442853  PUSH -0x1
00442855  PUSH 0x69eab4
0044285a  MOV EAX,FS:[0x0]
00442860  PUSH EAX
00442861  SUB ESP,0x108
00442867  MOV EAX,[0x00781870]
0044286c  XOR EAX,EBP
0044286e  MOV dword ptr [EBP + -0x18],EAX
00442871  PUSH EAX
00442872  LEA EAX,[EBP + -0xc]
00442875  MOV FS:[0x0],EAX
0044287b  MOV dword ptr [EBP + 0xffffff10],ECX
00442881  MOV dword ptr [EBP + -0x14],0x0
00442888  MOV dword ptr [EBP + -0x5c],0x130
0044288f  MOV dword ptr [EBP + -0x58],0x141
00442896  MOV dword ptr [EBP + -0x54],0x152
0044289d  MOV dword ptr [EBP + -0x50],0x163
004428a4  MOV dword ptr [EBP + -0x4c],0x174
004428ab  MOV dword ptr [EBP + -0x48],0x0
004428b2  MOV dword ptr [EBP + -0x44],0x0
004428b9  PUSH 0x1d4d6
004428be  MOV ECX,dword ptr [0x007906ec]
004428c4  CALL 0x005f1ad0
004428c9  MOV ECX,dword ptr [EBP + 0xffffff10]
004428cf  CALL 0x00443300
004428d4  MOV dword ptr [EBP + -0x10],0x0
004428db  JMP 0x004428e6
004428dd  MOV EAX,dword ptr [EBP + -0x10]
004428e0  ADD EAX,0x1
004428e3  MOV dword ptr [EBP + -0x10],EAX
004428e6  CMP dword ptr [EBP + -0x10],0x3
004428ea  JGE 0x00442a64
004428f0  MOV ECX,dword ptr [EBP + -0x10]
004428f3  MOV EDX,dword ptr [EBP + 0xffffff10]
004428f9  CMP dword ptr [EDX + ECX*0x4 + 0x104],0x0
00442901  JNZ 0x00442997
00442907  PUSH 0x178
0044290c  CALL 0x00686d82
00442911  ADD ESP,0x4
00442914  MOV dword ptr [EBP + 0xffffff6c],EAX
0044291a  MOV dword ptr [EBP + -0x4],0x0
00442921  CMP dword ptr [EBP + 0xffffff6c],0x0
00442928  JZ 0x0044293d
0044292a  MOV ECX,dword ptr [EBP + 0xffffff6c]
00442930  CALL 0x005eaaf0
00442935  MOV dword ptr [EBP + 0xffffff0c],EAX
0044293b  JMP 0x00442947
0044293d  MOV dword ptr [EBP + 0xffffff0c],0x0
00442947  MOV EAX,dword ptr [EBP + 0xffffff0c]
0044294d  MOV dword ptr [EBP + 0xffffff70],EAX
00442953  MOV dword ptr [EBP + -0x4],0xffffffff
0044295a  MOV ECX,dword ptr [EBP + -0x10]
0044295d  MOV EDX,dword ptr [EBP + 0xffffff10]
00442963  MOV EAX,dword ptr [EBP + 0xffffff70]
00442969  MOV dword ptr [EDX + ECX*0x4 + 0x104],EAX
00442970  PUSH -0x1
00442972  PUSH 0x2
00442974  PUSH 0x0
00442976  PUSH 0x0
00442978  MOV ECX,dword ptr [EBP + -0x10]
0044297b  ADD ECX,0x1d4f5
00442981  PUSH ECX
00442982  MOV EDX,dword ptr [EBP + -0x10]
00442985  MOV EAX,dword ptr [EBP + 0xffffff10]
0044298b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x104]
00442992  CALL 0x005eae80
00442997  MOV ECX,dword ptr [EBP + -0x10]
0044299a  MOV dword ptr [EBP + ECX*0x4 + -0x40],0xffffffff
004429a2  MOV dword ptr [EBP + 0xffffff74],0x0
004429ac  JMP 0x004429bd
004429ae  MOV EDX,dword ptr [EBP + 0xffffff74]
004429b4  ADD EDX,0x1
004429b7  MOV dword ptr [EBP + 0xffffff74],EDX
004429bd  CMP dword ptr [EBP + 0xffffff74],0x5
004429c4  JGE 0x00442a36
004429c6  MOV EAX,dword ptr [EBP + 0xffffff74]
004429cc  IMUL EAX,EAX,0x78
004429cf  MOV ECX,dword ptr [0x007906f0]
004429d5  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x6c]
004429d9  MOV dword ptr [EBP + 0xffffff30],EDX
004429df  MOV EAX,dword ptr [EBP + 0xffffff30]
004429e5  CMP EAX,dword ptr [EBP + -0x10]
004429e8  JNZ 0x00442a31
004429ea  MOV ECX,0x4
004429ef  SUB ECX,dword ptr [EBP + 0xffffff74]
004429f5  PUSH ECX
004429f6  MOV EDX,dword ptr [EBP + -0x10]
004429f9  MOV EAX,dword ptr [EBP + 0xffffff10]
004429ff  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x104]
00442a06  MOV EDX,dword ptr [EBP + -0x10]
00442a09  MOV EAX,dword ptr [EBP + 0xffffff10]
00442a0f  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x104]
00442a16  MOV EAX,dword ptr [ECX]
00442a18  MOV ECX,EDX
00442a1a  MOV EDX,dword ptr [EAX + 0xb0]
00442a20  CALL EDX
00442a22  MOV EAX,dword ptr [EBP + -0x10]
00442a25  MOV ECX,dword ptr [EBP + 0xffffff74]
00442a2b  MOV dword ptr [EBP + EAX*0x4 + -0x40],ECX
00442a2f  JMP 0x00442a36
00442a31  JMP 0x004429ae
00442a36  MOV EDX,dword ptr [EBP + -0x10]
00442a39  MOV EAX,dword ptr [EBP + 0xffffff10]
00442a3f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x104]
00442a46  MOV EDX,dword ptr [EBP + -0x10]
00442a49  MOV EAX,dword ptr [EBP + 0xffffff10]
00442a4f  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x104]
00442a56  MOV EAX,dword ptr [ECX]
00442a58  MOV ECX,EDX
00442a5a  MOV EDX,dword ptr [EAX + 0x74]
00442a5d  CALL EDX
00442a5f  JMP 0x004428dd
00442a64  MOV dword ptr [EBP + -0x10],0x0
00442a6b  JMP 0x00442a76
00442a6d  MOV EAX,dword ptr [EBP + -0x10]
00442a70  ADD EAX,0x1
00442a73  MOV dword ptr [EBP + -0x10],EAX
00442a76  CMP dword ptr [EBP + -0x10],0x2
00442a7a  JGE 0x00442b60
00442a80  MOV ECX,dword ptr [EBP + -0x10]
00442a83  MOV EDX,dword ptr [EBP + 0xffffff10]
00442a89  CMP dword ptr [EDX + ECX*0x4 + 0x114],0x0
00442a91  JNZ 0x00442b32
00442a97  PUSH 0x178
00442a9c  CALL 0x00686d82
00442aa1  ADD ESP,0x4
00442aa4  MOV dword ptr [EBP + 0xffffff64],EAX
00442aaa  MOV dword ptr [EBP + -0x4],0x1
00442ab1  CMP dword ptr [EBP + 0xffffff64],0x0
00442ab8  JZ 0x00442acd
00442aba  MOV ECX,dword ptr [EBP + 0xffffff64]
00442ac0  CALL 0x005eaaf0
00442ac5  MOV dword ptr [EBP + 0xffffff08],EAX
00442acb  JMP 0x00442ad7
00442acd  MOV dword ptr [EBP + 0xffffff08],0x0
00442ad7  MOV EAX,dword ptr [EBP + 0xffffff08]
00442add  MOV dword ptr [EBP + 0xffffff68],EAX
00442ae3  MOV dword ptr [EBP + -0x4],0xffffffff
00442aea  MOV ECX,dword ptr [EBP + -0x10]
00442aed  MOV EDX,dword ptr [EBP + 0xffffff10]
00442af3  MOV EAX,dword ptr [EBP + 0xffffff68]
00442af9  MOV dword ptr [EDX + ECX*0x4 + 0x114],EAX
00442b00  PUSH -0x1
00442b02  PUSH 0x2
00442b04  PUSH 0x43
00442b06  MOV ECX,dword ptr [EBP + -0x10]
00442b09  IMUL ECX,ECX,0x1cf
00442b0f  ADD ECX,0x25
00442b12  PUSH ECX
00442b13  MOV EDX,dword ptr [EBP + -0x10]
00442b16  ADD EDX,0x1d4fd
00442b1c  PUSH EDX
00442b1d  MOV EAX,dword ptr [EBP + -0x10]
00442b20  MOV ECX,dword ptr [EBP + 0xffffff10]
00442b26  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x114]
00442b2d  CALL 0x005eae80
00442b32  MOV EDX,dword ptr [EBP + -0x10]
00442b35  MOV EAX,dword ptr [EBP + 0xffffff10]
00442b3b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x114]
00442b42  MOV EDX,dword ptr [EBP + -0x10]
00442b45  MOV EAX,dword ptr [EBP + 0xffffff10]
00442b4b  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x114]
00442b52  MOV EAX,dword ptr [ECX]
00442b54  MOV ECX,EDX
00442b56  MOV EDX,dword ptr [EAX + 0x74]
00442b59  CALL EDX
00442b5b  JMP 0x00442a6d
00442b60  PUSH 0x3
00442b62  MOV EAX,[0x0162ee84]
00442b67  MOV ECX,dword ptr [EAX + 0x14]
00442b6a  CALL 0x005fb300
00442b6f  TEST EAX,EAX
00442b71  JNZ 0x00442ba5
00442b73  PUSH 0x0
00442b75  PUSH -0x1
00442b77  PUSH -0x1
00442b79  PUSH -0x1
00442b7b  PUSH -0x1
00442b7d  PUSH 0x6b27f8
00442b82  PUSH 0x2
00442b84  PUSH 0x1b2
00442b89  PUSH 0x1e8
00442b8e  PUSH 0x1d4f3
00442b93  PUSH 0x3
00442b95  PUSH 0x0
00442b97  MOV ECX,dword ptr [0x0162ee84]
00442b9d  MOV ECX,dword ptr [ECX + 0x14]
00442ba0  CALL 0x005f9de0
00442ba5  PUSH 0x3
00442ba7  MOV EDX,dword ptr [0x0162ee84]
00442bad  MOV ECX,dword ptr [EDX + 0x14]
00442bb0  CALL 0x005fb300
00442bb5  MOV dword ptr [EBP + 0xffffff04],EAX
00442bbb  MOV EAX,dword ptr [EBP + 0xffffff04]
00442bc1  MOV EDX,dword ptr [EAX]
00442bc3  MOV ECX,dword ptr [EBP + 0xffffff04]
00442bc9  MOV EAX,dword ptr [EDX + 0x74]
00442bcc  CALL EAX
00442bce  PUSH 0x4
00442bd0  MOV ECX,dword ptr [0x0162ee84]
00442bd6  MOV ECX,dword ptr [ECX + 0x14]
00442bd9  CALL 0x005fb300
00442bde  TEST EAX,EAX
00442be0  JNZ 0x00442c14
00442be2  PUSH 0x0
00442be4  PUSH -0x1
00442be6  PUSH -0x1
00442be8  PUSH -0x1
00442bea  PUSH -0x1
00442bec  PUSH 0x6b27f8
00442bf1  PUSH 0x2
00442bf3  PUSH 0x18c
00442bf8  PUSH 0x1ac
00442bfd  PUSH 0x1d4f2
00442c02  PUSH 0x4
00442c04  PUSH 0x0
00442c06  MOV EDX,dword ptr [0x0162ee84]
00442c0c  MOV ECX,dword ptr [EDX + 0x14]
00442c0f  CALL 0x005f9de0
00442c14  PUSH 0x4
00442c16  MOV EAX,[0x0162ee84]
00442c1b  MOV ECX,dword ptr [EAX + 0x14]
00442c1e  CALL 0x005fb300
00442c23  MOV dword ptr [EBP + 0xffffff00],EAX
00442c29  MOV ECX,dword ptr [EBP + 0xffffff00]
00442c2f  MOV EDX,dword ptr [ECX]
00442c31  MOV ECX,dword ptr [EBP + 0xffffff00]
00442c37  MOV EAX,dword ptr [EDX + 0x74]
00442c3a  CALL EAX
00442c3c  MOVZX ECX,byte ptr [0x00795f94]
00442c43  TEST ECX,ECX
00442c45  JNZ 0x00442d6d
00442c4b  MOV EDX,dword ptr [EBP + 0xffffff10]
00442c51  CMP dword ptr [EDX + 0x110],0x0
00442c58  JNZ 0x00442ce4
00442c5e  PUSH 0x184
00442c63  CALL 0x00686d82
00442c68  ADD ESP,0x4
00442c6b  MOV dword ptr [EBP + 0xffffff5c],EAX
00442c71  MOV dword ptr [EBP + -0x4],0x2
00442c78  CMP dword ptr [EBP + 0xffffff5c],0x0
00442c7f  JZ 0x00442c94
00442c81  MOV ECX,dword ptr [EBP + 0xffffff5c]
00442c87  CALL 0x005f5bf0
00442c8c  MOV dword ptr [EBP + 0xfffffefc],EAX
00442c92  JMP 0x00442c9e
00442c94  MOV dword ptr [EBP + 0xfffffefc],0x0
00442c9e  MOV EAX,dword ptr [EBP + 0xfffffefc]
00442ca4  MOV dword ptr [EBP + 0xffffff60],EAX
00442caa  MOV dword ptr [EBP + -0x4],0xffffffff
00442cb1  MOV ECX,dword ptr [EBP + 0xffffff10]
00442cb7  MOV EDX,dword ptr [EBP + 0xffffff60]
00442cbd  MOV dword ptr [ECX + 0x110],EDX
00442cc3  PUSH -0x1
00442cc5  PUSH 0x3
00442cc7  PUSH 0xffffff74
00442ccc  PUSH 0x0
00442cce  PUSH 0x1d4f8
00442cd3  MOV EAX,dword ptr [EBP + 0xffffff10]
00442cd9  MOV ECX,dword ptr [EAX + 0x110]
00442cdf  CALL 0x005eae80
00442ce4  MOV ECX,dword ptr [EBP + 0xffffff10]
00442cea  MOV EDX,dword ptr [ECX + 0x110]
00442cf0  MOV EAX,dword ptr [EBP + 0xffffff10]
00442cf6  MOV ECX,dword ptr [EAX + 0x110]
00442cfc  MOV EDX,dword ptr [EDX]
00442cfe  MOV EAX,dword ptr [EDX + 0x74]
00442d01  CALL EAX
00442d03  PUSH 0x1c
00442d05  CALL 0x00686d82
00442d0a  ADD ESP,0x4
00442d0d  MOV dword ptr [EBP + 0xffffff54],EAX
00442d13  MOV dword ptr [EBP + -0x4],0x3
00442d1a  CMP dword ptr [EBP + 0xffffff54],0x0
00442d21  JZ 0x00442d38
00442d23  PUSH 0x0
00442d25  MOV ECX,dword ptr [EBP + 0xffffff54]
00442d2b  CALL 0x00600a70
00442d30  MOV dword ptr [EBP + 0xfffffef8],EAX
00442d36  JMP 0x00442d42
00442d38  MOV dword ptr [EBP + 0xfffffef8],0x0
00442d42  MOV ECX,dword ptr [EBP + 0xfffffef8]
00442d48  MOV dword ptr [EBP + 0xffffff58],ECX
00442d4e  MOV dword ptr [EBP + -0x4],0xffffffff
00442d55  MOV EDX,dword ptr [EBP + 0xffffff58]
00442d5b  PUSH EDX
00442d5c  MOV EAX,dword ptr [EBP + 0xffffff10]
00442d62  MOV ECX,dword ptr [EAX + 0x110]
00442d68  CALL 0x005f5d50
00442d6d  MOV dword ptr [EBP + -0x10],0x0
00442d74  JMP 0x00442d7f
00442d76  MOV ECX,dword ptr [EBP + -0x10]
00442d79  ADD ECX,0x1
00442d7c  MOV dword ptr [EBP + -0x10],ECX
00442d7f  CMP dword ptr [EBP + -0x10],0x5
00442d83  JGE 0x0044326e
00442d89  MOV EDX,dword ptr [EBP + -0x10]
00442d8c  MOV EAX,dword ptr [EBP + 0xffffff10]
00442d92  CMP dword ptr [EAX + EDX*0x4 + 0xc8],0x0
00442d9a  JNZ 0x00442e4c
00442da0  PUSH 0x178
00442da5  CALL 0x00686d82
00442daa  ADD ESP,0x4
00442dad  MOV dword ptr [EBP + 0xffffff4c],EAX
00442db3  MOV dword ptr [EBP + -0x4],0x4
00442dba  CMP dword ptr [EBP + 0xffffff4c],0x0
00442dc1  JZ 0x00442dd6
00442dc3  MOV ECX,dword ptr [EBP + 0xffffff4c]
00442dc9  CALL 0x005eaaf0
00442dce  MOV dword ptr [EBP + 0xfffffef4],EAX
00442dd4  JMP 0x00442de0
00442dd6  MOV dword ptr [EBP + 0xfffffef4],0x0
00442de0  MOV ECX,dword ptr [EBP + 0xfffffef4]
00442de6  MOV dword ptr [EBP + 0xffffff50],ECX
00442dec  MOV dword ptr [EBP + -0x4],0xffffffff
00442df3  MOV EDX,dword ptr [EBP + -0x10]
00442df6  MOV EAX,dword ptr [EBP + 0xffffff10]
00442dfc  MOV ECX,dword ptr [EBP + 0xffffff50]
00442e02  MOV dword ptr [EAX + EDX*0x4 + 0xc8],ECX
00442e09  MOV EDX,dword ptr [EBP + -0x10]
00442e0c  IMUL EDX,EDX,0x78
00442e0f  MOV EAX,[0x007906f0]
00442e14  MOV ECX,dword ptr [EAX + EDX*0x1 + 0x6c]
00442e18  MOV dword ptr [EBP + 0xffffff2c],ECX
00442e1e  PUSH -0x1
00442e20  PUSH 0x1
00442e22  MOV EDX,dword ptr [EBP + 0xffffff2c]
00442e28  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x5c]
00442e2c  PUSH EAX
00442e2d  PUSH 0x8b
00442e32  PUSH 0x1d4d7
00442e37  MOV ECX,dword ptr [EBP + -0x10]
00442e3a  MOV EDX,dword ptr [EBP + 0xffffff10]
00442e40  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xc8]
00442e47  CALL 0x005eae80
00442e4c  MOV EAX,dword ptr [EBP + -0x10]
00442e4f  IMUL EAX,EAX,0x78
00442e52  MOV ECX,dword ptr [0x007906f0]
00442e58  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x6c]
00442e5c  MOV dword ptr [EBP + 0xffffff28],EDX
00442e62  MOV EAX,dword ptr [EBP + 0xffffff28]
00442e68  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x5c]
00442e6c  PUSH ECX
00442e6d  PUSH 0x8b
00442e72  MOV EDX,dword ptr [EBP + -0x10]
00442e75  MOV EAX,dword ptr [EBP + 0xffffff10]
00442e7b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xc8]
00442e82  MOV EDX,dword ptr [EBP + -0x10]
00442e85  MOV EAX,dword ptr [EBP + 0xffffff10]
00442e8b  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xc8]
00442e92  MOV EAX,dword ptr [ECX]
00442e94  MOV ECX,EDX
00442e96  MOV EDX,dword ptr [EAX + 0x44]
00442e99  CALL EDX
00442e9b  MOV EAX,0x4
00442ea0  SUB EAX,dword ptr [EBP + -0x10]
00442ea3  PUSH EAX
00442ea4  MOV ECX,dword ptr [EBP + -0x10]
00442ea7  MOV EDX,dword ptr [EBP + 0xffffff10]
00442ead  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xc8]
00442eb4  MOV ECX,dword ptr [EBP + -0x10]
00442eb7  MOV EDX,dword ptr [EBP + 0xffffff10]
00442ebd  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xc8]
00442ec4  MOV EAX,dword ptr [EAX]
00442ec6  MOV EDX,dword ptr [EAX + 0xb0]
00442ecc  CALL EDX
00442ece  MOV EAX,dword ptr [EBP + -0x10]
00442ed1  MOV ECX,dword ptr [EBP + 0xffffff10]
00442ed7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xc8]
00442ede  MOV EAX,dword ptr [EBP + -0x10]
00442ee1  MOV ECX,dword ptr [EBP + 0xffffff10]
00442ee7  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xc8]
00442eee  MOV EDX,dword ptr [EDX]
00442ef0  MOV EAX,dword ptr [EDX + 0x74]
00442ef3  CALL EAX
00442ef5  MOV ECX,dword ptr [EBP + -0x10]
00442ef8  MOV EDX,dword ptr [EBP + 0xffffff10]
00442efe  CMP dword ptr [EDX + ECX*0x4 + 0xdc],0x0
00442f06  JNZ 0x00442fc1
00442f0c  PUSH 0x1d0
00442f11  CALL 0x00686d82
00442f16  ADD ESP,0x4
00442f19  MOV dword ptr [EBP + 0xffffff44],EAX
00442f1f  MOV dword ptr [EBP + -0x4],0x5
00442f26  CMP dword ptr [EBP + 0xffffff44],0x0
00442f2d  JZ 0x00442f42
00442f2f  MOV ECX,dword ptr [EBP + 0xffffff44]
00442f35  CALL 0x005ec5a0
00442f3a  MOV dword ptr [EBP + 0xfffffef0],EAX
00442f40  JMP 0x00442f4c
00442f42  MOV dword ptr [EBP + 0xfffffef0],0x0
00442f4c  MOV EAX,dword ptr [EBP + 0xfffffef0]
00442f52  MOV dword ptr [EBP + 0xffffff48],EAX
00442f58  MOV dword ptr [EBP + -0x4],0xffffffff
00442f5f  MOV ECX,dword ptr [EBP + -0x10]
00442f62  MOV EDX,dword ptr [EBP + 0xffffff10]
00442f68  MOV EAX,dword ptr [EBP + 0xffffff48]
00442f6e  MOV dword ptr [EDX + ECX*0x4 + 0xdc],EAX
00442f75  MOV ECX,dword ptr [EBP + -0x10]
00442f78  IMUL ECX,ECX,0x78
00442f7b  MOV EDX,dword ptr [0x007906f0]
00442f81  MOV EAX,dword ptr [EDX + ECX*0x1 + 0x6c]
00442f85  MOV dword ptr [EBP + 0xffffff24],EAX
00442f8b  PUSH -0x1
00442f8d  PUSH 0x30
00442f8f  PUSH 0x1
00442f91  MOV ECX,dword ptr [EBP + 0xffffff24]
00442f97  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x5c]
00442f9b  PUSH EDX
00442f9c  PUSH 0x154
00442fa1  PUSH 0xf
00442fa3  PUSH 0x64
00442fa5  PUSH 0x6a
00442fa7  PUSH 0x6b27f8
00442fac  MOV EAX,dword ptr [EBP + -0x10]
00442faf  MOV ECX,dword ptr [EBP + 0xffffff10]
00442fb5  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xdc]
00442fbc  CALL 0x005ec8f0
00442fc1  PUSH 0x6b27f8
00442fc6  LEA EDX,[EBP + -0x34]
00442fc9  PUSH EDX
00442fca  CALL 0x00686d8e
00442fcf  ADD ESP,0x8
00442fd2  MOV EAX,dword ptr [EBP + -0x10]
00442fd5  IMUL EAX,EAX,0x78
00442fd8  MOV ECX,dword ptr [0x007906f0]
00442fde  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x70]
00442fe2  MOV dword ptr [EBP + 0xffffff20],EDX
00442fe8  MOV EAX,dword ptr [EBP + 0xffffff20]
00442fee  PUSH EAX
00442fef  PUSH 0x6b2828
00442ff4  LEA ECX,[EBP + -0x34]
00442ff7  PUSH ECX
00442ff8  CALL dword ptr [0x006b2220]
00442ffe  ADD ESP,0xc
00443001  LEA EDX,[EBP + -0x34]
00443004  PUSH EDX
00443005  MOV EAX,dword ptr [EBP + -0x10]
00443008  MOV ECX,dword ptr [EBP + 0xffffff10]
0044300e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xdc]
00443015  MOV EAX,dword ptr [EBP + -0x10]
00443018  MOV ECX,dword ptr [EBP + 0xffffff10]
0044301e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xdc]
00443025  MOV EDX,dword ptr [EDX]
00443027  MOV EAX,dword ptr [EDX + 0xb4]
0044302d  CALL EAX
0044302f  MOV ECX,dword ptr [EBP + -0x10]
00443032  IMUL ECX,ECX,0x78
00443035  MOV EDX,dword ptr [0x007906f0]
0044303b  MOV EAX,dword ptr [EDX + ECX*0x1 + 0x6c]
0044303f  MOV dword ptr [EBP + 0xffffff1c],EAX
00443045  MOV ECX,dword ptr [EBP + 0xffffff1c]
0044304b  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x5c]
0044304f  PUSH EDX
00443050  PUSH 0x154
00443055  MOV EAX,dword ptr [EBP + -0x10]
00443058  MOV ECX,dword ptr [EBP + 0xffffff10]
0044305e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xdc]
00443065  MOV EAX,dword ptr [EBP + -0x10]
00443068  MOV ECX,dword ptr [EBP + 0xffffff10]
0044306e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xdc]
00443075  MOV EDX,dword ptr [EDX]
00443077  MOV EAX,dword ptr [EDX + 0x44]
0044307a  CALL EAX
0044307c  MOV ECX,dword ptr [EBP + -0x10]
0044307f  MOV EDX,dword ptr [EBP + 0xffffff10]
00443085  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xdc]
0044308c  MOV ECX,dword ptr [EBP + -0x10]
0044308f  MOV EDX,dword ptr [EBP + 0xffffff10]
00443095  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xdc]
0044309c  MOV EAX,dword ptr [EAX]
0044309e  MOV EDX,dword ptr [EAX + 0x74]
004430a1  CALL EDX
004430a3  MOV EAX,dword ptr [EBP + -0x10]
004430a6  MOV ECX,dword ptr [EBP + 0xffffff10]
004430ac  CMP dword ptr [ECX + EAX*0x4 + 0xf0],0x0
004430b4  JNZ 0x00443172
004430ba  PUSH 0x1d0
004430bf  CALL 0x00686d82
004430c4  ADD ESP,0x4
004430c7  MOV dword ptr [EBP + 0xffffff3c],EAX
004430cd  MOV dword ptr [EBP + -0x4],0x6
004430d4  CMP dword ptr [EBP + 0xffffff3c],0x0
004430db  JZ 0x004430f0
004430dd  MOV ECX,dword ptr [EBP + 0xffffff3c]
004430e3  CALL 0x005ec5a0
004430e8  MOV dword ptr [EBP + 0xfffffeec],EAX
004430ee  JMP 0x004430fa
004430f0  MOV dword ptr [EBP + 0xfffffeec],0x0
004430fa  MOV EDX,dword ptr [EBP + 0xfffffeec]
00443100  MOV dword ptr [EBP + 0xffffff40],EDX
00443106  MOV dword ptr [EBP + -0x4],0xffffffff
0044310d  MOV EAX,dword ptr [EBP + -0x10]
00443110  MOV ECX,dword ptr [EBP + 0xffffff10]
00443116  MOV EDX,dword ptr [EBP + 0xffffff40]
0044311c  MOV dword ptr [ECX + EAX*0x4 + 0xf0],EDX
00443123  MOV EAX,dword ptr [EBP + -0x10]
00443126  IMUL EAX,EAX,0x78
00443129  MOV ECX,dword ptr [0x007906f0]
0044312f  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x6c]
00443133  MOV dword ptr [EBP + 0xffffff18],EDX
00443139  PUSH -0x1
0044313b  PUSH 0x30
0044313d  PUSH 0x2
0044313f  MOV EAX,dword ptr [EBP + 0xffffff18]
00443145  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x5c]
00443149  PUSH ECX
0044314a  PUSH 0x1bd
0044314f  PUSH 0xf
00443151  PUSH 0xb9
00443156  PUSH 0x6a
00443158  PUSH 0x6b35b0
0044315d  MOV EDX,dword ptr [EBP + -0x10]
00443160  MOV EAX,dword ptr [EBP + 0xffffff10]
00443166  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xf0]
0044316d  CALL 0x005ec8f0
00443172  MOV ECX,dword ptr [EBP + -0x10]
00443175  PUSH ECX
00443176  LEA EDX,[EBP + 0xffffff78]
0044317c  PUSH EDX
0044317d  MOV ECX,dword ptr [0x007906f0]
00443183  CALL 0x00445ff0
00443188  MOV dword ptr [EBP + -0x48],EAX
0044318b  MOV EAX,dword ptr [EBP + -0x14]
0044318e  ADD EAX,dword ptr [EBP + -0x48]
00443191  MOV dword ptr [EBP + -0x14],EAX
00443194  PUSH 0x6b8328
00443199  LEA ECX,[EBP + 0xffffff78]
0044319f  PUSH ECX
004431a0  CALL 0x00686d8e
004431a5  ADD ESP,0x8
004431a8  PUSH 0x1
004431aa  PUSH 0x1
004431ac  PUSH 0x1
004431ae  LEA EDX,[EBP + 0xffffff78]
004431b4  PUSH EDX
004431b5  MOV EAX,dword ptr [EBP + -0x44]
004431b8  PUSH EAX
004431b9  MOV ECX,dword ptr [EBP + -0x48]
004431bc  PUSH ECX
004431bd  CALL 0x0064c8d0
004431c2  ADD ESP,0x18
004431c5  MOV EDX,dword ptr [EBP + -0x10]
004431c8  IMUL EDX,EDX,0x78
004431cb  MOV EAX,[0x007906f0]
004431d0  MOV ECX,dword ptr [EAX + EDX*0x1 + 0x6c]
004431d4  MOV dword ptr [EBP + 0xffffff14],ECX
004431da  MOV EDX,dword ptr [EBP + 0xffffff14]
004431e0  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x5c]
004431e4  PUSH EAX
004431e5  PUSH 0x1bd
004431ea  MOV ECX,dword ptr [EBP + -0x10]
004431ed  MOV EDX,dword ptr [EBP + 0xffffff10]
004431f3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xf0]
004431fa  MOV ECX,dword ptr [EBP + -0x10]
004431fd  MOV EDX,dword ptr [EBP + 0xffffff10]
00443203  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xf0]
0044320a  MOV EAX,dword ptr [EAX]
0044320c  MOV EDX,dword ptr [EAX + 0x44]
0044320f  CALL EDX
00443211  LEA EAX,[EBP + 0xffffff78]
00443217  PUSH EAX
00443218  MOV ECX,dword ptr [EBP + -0x10]
0044321b  MOV EDX,dword ptr [EBP + 0xffffff10]
00443221  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xf0]
00443228  MOV ECX,dword ptr [EBP + -0x10]
0044322b  MOV EDX,dword ptr [EBP + 0xffffff10]
00443231  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xf0]
00443238  MOV EAX,dword ptr [EAX]
0044323a  MOV EDX,dword ptr [EAX + 0xb4]
00443240  CALL EDX
00443242  MOV EAX,dword ptr [EBP + -0x10]
00443245  MOV ECX,dword ptr [EBP + 0xffffff10]
0044324b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xf0]
00443252  MOV EAX,dword ptr [EBP + -0x10]
00443255  MOV ECX,dword ptr [EBP + 0xffffff10]
0044325b  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xf0]
00443262  MOV EDX,dword ptr [EDX]
00443264  MOV EAX,dword ptr [EDX + 0x74]
00443267  CALL EAX
00443269  JMP 0x00442d76
0044326e  PUSH 0x0
00443270  MOV ECX,dword ptr [EBP + -0x14]
00443273  PUSH ECX
00443274  CALL 0x0064c8a0
00443279  ADD ESP,0x8
0044327c  MOV dword ptr [EBP + 0xffffff34],EAX
00443282  MOV dword ptr [EBP + 0xffffff38],EDX
00443288  MOV EDX,dword ptr [EBP + 0xffffff34]
0044328e  MOV dword ptr [EBP + -0x64],EDX
00443291  MOV EAX,dword ptr [EBP + 0xffffff38]
00443297  MOV dword ptr [EBP + -0x60],EAX
0044329a  MOV ECX,dword ptr [EBP + -0x60]
0044329d  PUSH ECX
0044329e  MOV EDX,dword ptr [EBP + -0x64]
004432a1  PUSH EDX
004432a2  PUSH 0x0
004432a4  CALL 0x005dcb00
004432a9  ADD ESP,0x4
004432ac  MOV ECX,EAX
004432ae  CALL 0x005d5fb0
004432b3  MOV EAX,dword ptr [EBP + -0x60]
004432b6  PUSH EAX
004432b7  MOV ECX,dword ptr [EBP + -0x64]
004432ba  PUSH ECX
004432bb  PUSH 0x0
004432bd  CALL 0x005dcb00
004432c2  ADD ESP,0x4
004432c5  MOV ECX,EAX
004432c7  CALL 0x005d5cf0
004432cc  MOV EDX,dword ptr [EBP + -0x38]
004432cf  PUSH EDX
004432d0  MOV EAX,dword ptr [EBP + -0x3c]
004432d3  PUSH EAX
004432d4  MOV ECX,dword ptr [EBP + -0x40]
004432d7  PUSH ECX
004432d8  MOV EDX,dword ptr [EBP + 0xffffff10]
004432de  MOV ECX,dword ptr [EDX + 0x18]
004432e1  CALL 0x0043d7a0
004432e6  MOV ECX,dword ptr [EBP + -0xc]
004432e9  MOV dword ptr FS:[0x0],ECX
004432f0  POP ECX
004432f1  MOV ECX,dword ptr [EBP + -0x18]
004432f4  XOR ECX,EBP
004432f6  CALL 0x00686d72
004432fb  MOV ESP,EBP
004432fd  POP EBP
004432fe  RET

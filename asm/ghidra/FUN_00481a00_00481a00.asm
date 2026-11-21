; FUN_00481a00  00481a00
00481a00  PUSH EBP
00481a01  MOV EBP,ESP
00481a03  SUB ESP,0xf8
00481a09  MOV EAX,[0x00781870]
00481a0e  XOR EAX,EBP
00481a10  MOV dword ptr [EBP + -0x38],EAX
00481a13  MOV dword ptr [EBP + 0xffffff10],ECX
00481a19  MOV dword ptr [EBP + 0xffffff28],0x0
00481a23  MOV dword ptr [EBP + 0xffffff54],0x0
00481a2d  MOV EAX,dword ptr [EBP + 0x8]
00481a30  MOV ECX,dword ptr [EBP + 0xffffff10]
00481a36  CMP dword ptr [ECX + EAX*0x4 + 0x110],0x0
00481a3e  JZ 0x00481a47
00481a40  MOV AL,0x1
00481a42  JMP 0x0048205a
00481a47  MOV EDX,dword ptr [EBP + 0x8]
00481a4a  PUSH EDX
00481a4b  MOV ECX,dword ptr [EBP + 0xffffff10]
00481a51  CALL 0x004810c0
00481a56  MOVZX EAX,AL
00481a59  TEST EAX,EAX
00481a5b  JNZ 0x00481a71
00481a5d  MOV ECX,dword ptr [0x007947e0]
00481a63  MOV byte ptr [ECX + 0x4f04],0x0
00481a6a  XOR AL,AL
00481a6c  JMP 0x0048205a
00481a71  MOV ECX,dword ptr [0x0162ee84]
00481a77  CALL 0x00636ee0
00481a7c  MOV ECX,dword ptr [0x0162ee84]
00481a82  CALL 0x00636f70
00481a87  MOV EDX,dword ptr [EBP + 0x8]
00481a8a  MOV EAX,dword ptr [EBP + 0xffffff10]
00481a90  MOV dword ptr [EAX + EDX*0x4 + 0x110],0x1
00481a9b  MOV ECX,dword ptr [EBP + 0xffffff10]
00481aa1  CALL 0x00480920
00481aa6  MOV dword ptr [EBP + -0x28],EAX
00481aa9  PUSH 0x0
00481aab  CALL 0x005dcb00
00481ab0  ADD ESP,0x4
00481ab3  MOV ECX,EAX
00481ab5  CALL 0x005d5a50
00481aba  MOV dword ptr [EBP + 0xffffff50],EAX
00481ac0  MOV ECX,dword ptr [EBP + 0xffffff10]
00481ac6  CALL 0x00481920
00481acb  MOV dword ptr [EBP + 0xffffff58],EAX
00481ad1  MOV dword ptr [EBP + -0x2c],0x0
00481ad8  JMP 0x00481ae3
00481ada  MOV ECX,dword ptr [EBP + -0x2c]
00481add  ADD ECX,0x1
00481ae0  MOV dword ptr [EBP + -0x2c],ECX
00481ae3  CMP dword ptr [EBP + -0x2c],0x8
00481ae7  JGE 0x00481af6
00481ae9  MOV EDX,dword ptr [EBP + -0x2c]
00481aec  MOV dword ptr [EBP + EDX*0x4 + -0x24],0xffffffff
00481af4  JMP 0x00481ada
00481af6  MOV EAX,dword ptr [EBP + 0x8]
00481af9  PUSH EAX
00481afa  MOV ECX,dword ptr [EBP + 0xffffff10]
00481b00  CALL 0x004807e0
00481b05  MOV ECX,dword ptr [EBP + 0x8]
00481b08  PUSH ECX
00481b09  PUSH 0x6bcf58
00481b0e  LEA EDX,[EBP + 0xffffff60]
00481b14  PUSH EDX
00481b15  CALL dword ptr [0x006b2220]
00481b1b  ADD ESP,0xc
00481b1e  LEA EAX,[EBP + 0xffffff60]
00481b24  PUSH EAX
00481b25  CALL 0x0062fde0
00481b2a  ADD ESP,0x4
00481b2d  MOV ECX,dword ptr [EBP + 0xffffff10]
00481b33  ADD ECX,0x120
00481b39  PUSH ECX
00481b3a  MOV EDX,dword ptr [EBP + 0xffffff58]
00481b40  PUSH EDX
00481b41  MOV EAX,[0x007947e0]
00481b46  MOV ECX,dword ptr [EAX + 0x4efc]
00481b4c  PUSH ECX
00481b4d  MOV EDX,dword ptr [EBP + -0x28]
00481b50  PUSH EDX
00481b51  MOV EAX,dword ptr [EBP + 0xffffff50]
00481b57  PUSH EAX
00481b58  MOV ECX,dword ptr [EBP + 0x8]
00481b5b  PUSH ECX
00481b5c  MOV ECX,dword ptr [EBP + 0xffffff10]
00481b62  CALL 0x00482070
00481b67  MOV dword ptr [EBP + 0xffffff24],0x0
00481b71  MOV dword ptr [EBP + -0x2c],0x0
00481b78  JMP 0x00481b83
00481b7a  MOV EDX,dword ptr [EBP + -0x2c]
00481b7d  ADD EDX,0x1
00481b80  MOV dword ptr [EBP + -0x2c],EDX
00481b83  CMP dword ptr [EBP + -0x2c],0x21
00481b87  JGE 0x00481bbf
00481b89  MOV EAX,dword ptr [EBP + -0x2c]
00481b8c  IMUL EAX,EAX,0x14
00481b8f  MOV ECX,dword ptr [EBP + 0xffffff10]
00481b95  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x124]
00481b9c  CMP EDX,dword ptr [EBP + 0x8]
00481b9f  JNZ 0x00481bbd
00481ba1  MOV EAX,dword ptr [EBP + 0xffffff24]
00481ba7  MOV ECX,dword ptr [EBP + -0x2c]
00481baa  MOV dword ptr [EBP + EAX*0x4 + -0x24],ECX
00481bae  MOV EDX,dword ptr [EBP + 0xffffff24]
00481bb4  ADD EDX,0x1
00481bb7  MOV dword ptr [EBP + 0xffffff24],EDX
00481bbd  JMP 0x00481b7a
00481bbf  CMP dword ptr [EBP + 0xffffff24],0x6
00481bc6  JZ 0x00481bdf
00481bc8  PUSH 0xd19
00481bcd  PUSH 0x6bc694
00481bd2  PUSH 0x6bcf50
00481bd7  CALL 0x005e9f20
00481bdc  ADD ESP,0xc
00481bdf  MOV dword ptr [EBP + -0x2c],0x0
00481be6  JMP 0x00481bf1
00481be8  MOV ECX,dword ptr [EBP + -0x2c]
00481beb  ADD ECX,0x1
00481bee  MOV dword ptr [EBP + -0x2c],ECX
00481bf1  CMP dword ptr [EBP + -0x2c],0x6
00481bf5  JGE 0x00481c04
00481bf7  MOV EDX,dword ptr [EBP + -0x2c]
00481bfa  MOV byte ptr [EBP + EDX*0x1 + 0xffffff2c],0x0
00481c02  JMP 0x00481be8
00481c04  MOV dword ptr [EBP + -0x2c],0x0
00481c0b  JMP 0x00481c16
00481c0d  MOV EAX,dword ptr [EBP + -0x2c]
00481c10  ADD EAX,0x1
00481c13  MOV dword ptr [EBP + -0x2c],EAX
00481c16  CMP dword ptr [EBP + -0x2c],0x6
00481c1a  JGE 0x00481c8c
00481c1c  PUSH 0x6
00481c1e  CALL 0x0062fbf0
00481c23  ADD ESP,0x4
00481c26  MOV dword ptr [EBP + -0x4],EAX
00481c29  CMP dword ptr [EBP + -0x4],0x0
00481c2d  JGE 0x00481c46
00481c2f  PUSH 0xd24
00481c34  PUSH 0x6bc694
00481c39  PUSH 0x6bcf48
00481c3e  CALL 0x005e9f20
00481c43  ADD ESP,0xc
00481c46  CMP dword ptr [EBP + -0x4],0x5
00481c4a  JLE 0x00481c63
00481c4c  PUSH 0xd25
00481c51  PUSH 0x6bc694
00481c56  PUSH 0x6bcf40
00481c5b  CALL 0x005e9f20
00481c60  ADD ESP,0xc
00481c63  MOV EAX,dword ptr [EBP + -0x4]
00481c66  MOVZX ECX,byte ptr [EBP + EAX*0x1 + 0xffffff2c]
00481c6e  TEST ECX,ECX
00481c70  JNZ 0x00481c1c
00481c72  MOV EDX,dword ptr [EBP + -0x2c]
00481c75  MOV EAX,dword ptr [EBP + -0x4]
00481c78  MOV dword ptr [EBP + EDX*0x4 + 0xffffff38],EAX
00481c7f  MOV ECX,dword ptr [EBP + -0x4]
00481c82  MOV byte ptr [EBP + ECX*0x1 + 0xffffff2c],0x1
00481c8a  JMP 0x00481c0d
00481c8c  MOV dword ptr [EBP + 0xffffff24],0x0
00481c96  MOV dword ptr [EBP + -0x2c],0x0
00481c9d  JMP 0x00481ca8
00481c9f  MOV EDX,dword ptr [EBP + -0x2c]
00481ca2  ADD EDX,0x1
00481ca5  MOV dword ptr [EBP + -0x2c],EDX
00481ca8  MOV ECX,dword ptr [0x00791364]
00481cae  CALL 0x0047f950
00481cb3  CMP dword ptr [EBP + -0x2c],EAX
00481cb6  JGE 0x00481f05
00481cbc  MOV EAX,dword ptr [EBP + -0x2c]
00481cbf  PUSH EAX
00481cc0  MOV ECX,dword ptr [EBP + 0xffffff10]
00481cc6  CALL 0x0047e390
00481ccb  MOV dword ptr [EBP + 0xffffff28],EAX
00481cd1  MOV ECX,dword ptr [EBP + 0xffffff28]
00481cd7  CALL 0x004c61b0
00481cdc  MOVZX ECX,AL
00481cdf  TEST ECX,ECX
00481ce1  JZ 0x00481ce5
00481ce3  JMP 0x00481c9f
00481ce5  MOV EDX,dword ptr [EBP + 0xffffff24]
00481ceb  MOV EAX,dword ptr [EBP + EDX*0x4 + 0xffffff38]
00481cf2  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x24]
00481cf6  MOV dword ptr [EBP + 0xffffff5c],ECX
00481cfc  MOV EDX,dword ptr [EBP + 0xffffff28]
00481d02  MOV EAX,dword ptr [EBP + 0xffffff5c]
00481d08  MOV dword ptr [EDX + 0x74],EAX
00481d0b  MOV ECX,dword ptr [EBP + 0xffffff5c]
00481d11  IMUL ECX,ECX,0xc
00481d14  MOV EDX,dword ptr [ECX + 0x720648]
00481d1a  MOV dword ptr [EBP + 0xffffff34],EDX
00481d20  MOV EAX,dword ptr [EBP + -0x2c]
00481d23  MOV ECX,dword ptr [EBP + 0xffffff10]
00481d29  MOV EDX,dword ptr [EBP + 0xffffff5c]
00481d2f  MOV dword ptr [ECX + EAX*0x4 + 0x3b4],EDX
00481d36  MOV EAX,dword ptr [EBP + 0xffffff28]
00481d3c  MOV ECX,dword ptr [EAX + 0x4]
00481d3f  PUSH ECX
00481d40  CALL 0x005dcb00
00481d45  ADD ESP,0x4
00481d48  MOV dword ptr [EBP + 0xffffff54],EAX
00481d4e  MOV ECX,dword ptr [EBP + 0xffffff54]
00481d54  CALL 0x0063aac0
00481d59  MOV EDX,dword ptr [EAX]
00481d5b  MOV dword ptr [EBP + 0xffffff20],EDX
00481d61  CMP dword ptr [EBP + 0xffffff20],0x2
00481d68  JZ 0x00481d92
00481d6a  MOV ECX,dword ptr [EBP + 0xffffff54]
00481d70  CALL 0x0063aac0
00481d75  MOV EAX,dword ptr [EAX]
00481d77  MOV dword ptr [EBP + 0xffffff1c],EAX
00481d7d  CMP dword ptr [EBP + 0xffffff1c],0x3
00481d84  JZ 0x00481d92
00481d86  MOV dword ptr [EBP + 0xffffff0c],0x0
00481d90  JMP 0x00481d9c
00481d92  MOV dword ptr [EBP + 0xffffff0c],0x1
00481d9c  MOVZX ECX,byte ptr [EBP + 0xffffff0c]
00481da3  TEST ECX,ECX
00481da5  JZ 0x00481dbe
00481da7  PUSH 0xd3d
00481dac  PUSH 0x6bc694
00481db1  PUSH 0x6bcf24
00481db6  CALL 0x005e9f20
00481dbb  ADD ESP,0xc
00481dbe  MOV EAX,dword ptr [EBP + 0xffffff5c]
00481dc4  IMUL EAX,EAX,0xc
00481dc7  MOV ECX,dword ptr [EAX + 0x720650]
00481dcd  PUSH ECX
00481dce  CALL 0x00630f40
00481dd3  ADD ESP,0x4
00481dd6  MOV dword ptr [EBP + 0xffffff18],EAX
00481ddc  MOV EDX,dword ptr [EBP + 0xffffff18]
00481de2  PUSH EDX
00481de3  MOV ECX,dword ptr [EBP + 0xffffff54]
00481de9  CALL 0x0063aac0
00481dee  ADD EAX,0x4
00481df1  PUSH EAX
00481df2  CALL 0x00686d8e
00481df7  ADD ESP,0x8
00481dfa  CMP dword ptr [EBP + 0xffffff5c],0x21
00481e01  JGE 0x00481e2d
00481e03  CMP dword ptr [EBP + 0xffffff5c],0x17
00481e0a  JL 0x00481e2d
00481e0c  MOV EAX,dword ptr [EBP + 0xffffff34]
00481e12  PUSH EAX
00481e13  MOV ECX,dword ptr [EBP + 0xffffff54]
00481e19  CALL 0x0063b490
00481e1e  MOV ECX,dword ptr [EBP + 0xffffff54]
00481e24  MOV dword ptr [ECX + 0xc],0xffffffff
00481e2b  JMP 0x00481e3c
00481e2d  MOV EDX,dword ptr [EBP + 0xffffff54]
00481e33  MOV EAX,dword ptr [EBP + 0xffffff34]
00481e39  MOV dword ptr [EDX + 0xc],EAX
00481e3c  MOV ECX,dword ptr [EBP + 0xffffff24]
00481e42  ADD ECX,0x1
00481e45  MOV dword ptr [EBP + 0xffffff24],ECX
00481e4b  MOV EDX,dword ptr [EBP + 0xffffff5c]
00481e51  IMUL EDX,EDX,0x14
00481e54  MOV EAX,dword ptr [EBP + 0xffffff10]
00481e5a  MOV ECX,dword ptr [EAX + EDX*0x1 + 0x12c]
00481e61  PUSH ECX
00481e62  MOV ECX,dword ptr [EBP + 0xffffff10]
00481e68  CALL 0x00481870
00481e6d  MOV dword ptr [EBP + -0x4],EAX
00481e70  MOV EDX,dword ptr [EBP + -0x4]
00481e73  PUSH EDX
00481e74  MOV ECX,dword ptr [EBP + 0xffffff28]
00481e7a  CALL 0x004c67d0
00481e7f  MOV EAX,dword ptr [EBP + 0xffffff24]
00481e85  PUSH EAX
00481e86  MOV ECX,dword ptr [EBP + 0x8]
00481e89  PUSH ECX
00481e8a  MOV EDX,dword ptr [EBP + 0xffffff5c]
00481e90  IMUL EDX,EDX,0x14
00481e93  MOV EAX,dword ptr [EBP + 0xffffff10]
00481e99  MOV ECX,dword ptr [EAX + EDX*0x1 + 0x130]
00481ea0  PUSH ECX
00481ea1  MOV ECX,dword ptr [EBP + 0xffffff10]
00481ea7  CALL 0x004818e0
00481eac  MOV dword ptr [EBP + -0x4],EAX
00481eaf  MOV EDX,dword ptr [EBP + -0x4]
00481eb2  PUSH EDX
00481eb3  MOV ECX,dword ptr [EBP + 0xffffff28]
00481eb9  CALL 0x004c68c0
00481ebe  MOV EAX,dword ptr [EBP + 0xffffff5c]
00481ec4  IMUL EAX,EAX,0x14
00481ec7  MOV ECX,dword ptr [EBP + 0xffffff10]
00481ecd  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x120]
00481ed4  MOV dword ptr [EBP + -0x34],EDX
00481ed7  MOV dword ptr [EBP + -0x30],0x0
00481ede  MOV EAX,dword ptr [EBP + -0x34]
00481ee1  PUSH EAX
00481ee2  MOV ECX,dword ptr [EBP + 0xffffff28]
00481ee8  CALL 0x004c6aa0
00481eed  MOV ECX,dword ptr [EBP + -0x30]
00481ef0  PUSH ECX
00481ef1  MOV EDX,dword ptr [EBP + -0x34]
00481ef4  PUSH EDX
00481ef5  MOV ECX,dword ptr [EBP + 0xffffff54]
00481efb  CALL 0x005d5af0
00481f00  JMP 0x00481c9f
00481f05  PUSH 0x1
00481f07  MOV ECX,dword ptr [EBP + 0xffffff10]
00481f0d  CALL 0x0047e540
00481f12  MOV dword ptr [EBP + -0x2c],0x0
00481f19  JMP 0x00481f24
00481f1b  MOV EAX,dword ptr [EBP + -0x2c]
00481f1e  ADD EAX,0x1
00481f21  MOV dword ptr [EBP + -0x2c],EAX
00481f24  MOV ECX,dword ptr [0x00791364]
00481f2a  CALL 0x0047f950
00481f2f  CMP dword ptr [EBP + -0x2c],EAX
00481f32  JGE 0x00481f5d
00481f34  PUSH 0x0
00481f36  PUSH 0x0
00481f38  MOV ECX,dword ptr [EBP + -0x2c]
00481f3b  PUSH ECX
00481f3c  CALL 0x005dcb00
00481f41  ADD ESP,0x4
00481f44  MOV ECX,dword ptr [EAX + 0x20]
00481f47  CALL 0x006464d0
00481f4c  MOV EDX,dword ptr [EBP + -0x2c]
00481f4f  PUSH EDX
00481f50  MOV ECX,dword ptr [EBP + 0xffffff10]
00481f56  CALL 0x00483630
00481f5b  JMP 0x00481f1b
00481f5d  MOV EAX,[0x00791364]
00481f62  MOV ECX,dword ptr [EAX + 0xf4]
00481f68  MOV dword ptr [EBP + 0xffffff14],ECX
00481f6e  CMP dword ptr [EBP + 0xffffff14],0x4
00481f75  JNZ 0x0048202d
00481f7b  MOV EDX,dword ptr [EBP + 0x8]
00481f7e  MOV dword ptr [EBP + 0xffffff08],EDX
00481f84  CMP dword ptr [EBP + 0xffffff08],0x1
00481f8b  JZ 0x00481fa4
00481f8d  CMP dword ptr [EBP + 0xffffff08],0x2
00481f94  JZ 0x00481fdd
00481f96  CMP dword ptr [EBP + 0xffffff08],0x3
00481f9d  JZ 0x00482006
00481f9f  JMP 0x0048202d
00481fa4  MOV ECX,dword ptr [EBP + 0xffffff10]
00481faa  CALL 0x0047e170
00481faf  CMP EAX,0x2
00481fb2  JZ 0x00481fdb
00481fb4  MOV EAX,[0x007947e0]
00481fb9  MOV dword ptr [EAX + 0x4f18],0x2
00481fc3  MOV ECX,dword ptr [0x007947e0]
00481fc9  MOV EDX,dword ptr [ECX + 0x4f18]
00481fcf  PUSH EDX
00481fd0  MOV ECX,dword ptr [EBP + 0xffffff10]
00481fd6  CALL 0x0047d810
00481fdb  JMP 0x0048202d
00481fdd  MOV EAX,[0x007947e0]
00481fe2  MOV dword ptr [EAX + 0x4f18],0x3
00481fec  MOV ECX,dword ptr [0x007947e0]
00481ff2  MOV EDX,dword ptr [ECX + 0x4f18]
00481ff8  PUSH EDX
00481ff9  MOV ECX,dword ptr [EBP + 0xffffff10]
00481fff  CALL 0x0047d810
00482004  JMP 0x0048202d
00482006  MOV EAX,[0x007947e0]
0048200b  MOV dword ptr [EAX + 0x4f18],0x0
00482015  MOV ECX,dword ptr [0x007947e0]
0048201b  MOV EDX,dword ptr [ECX + 0x4f18]
00482021  PUSH EDX
00482022  MOV ECX,dword ptr [EBP + 0xffffff10]
00482028  CALL 0x0047d810
0048202d  MOV dword ptr [EBP + -0x2c],0x0
00482034  JMP 0x0048203f
00482036  MOV EAX,dword ptr [EBP + -0x2c]
00482039  ADD EAX,0x1
0048203c  MOV dword ptr [EBP + -0x2c],EAX
0048203f  CMP dword ptr [EBP + -0x2c],0x7
00482043  JGE 0x00482058
00482045  PUSH 0x1
00482047  MOV ECX,dword ptr [EBP + -0x2c]
0048204a  PUSH ECX
0048204b  MOV ECX,dword ptr [0x007947e4]
00482051  CALL 0x005d9180
00482056  JMP 0x00482036
00482058  MOV AL,0x1
0048205a  MOV ECX,dword ptr [EBP + -0x38]
0048205d  XOR ECX,EBP
0048205f  CALL 0x00686d72
00482064  MOV ESP,EBP
00482066  POP EBP
00482067  RET 0x4

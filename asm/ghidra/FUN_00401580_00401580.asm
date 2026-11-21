; FUN_00401580  00401580
00401580  PUSH EBP
00401581  MOV EBP,ESP
00401583  PUSH -0x1
00401585  PUSH 0x69d600
0040158a  MOV EAX,FS:[0x0]
00401590  PUSH EAX
00401591  SUB ESP,0x94
00401597  MOV EAX,[0x00781870]
0040159c  XOR EAX,EBP
0040159e  PUSH EAX
0040159f  LEA EAX,[EBP + -0xc]
004015a2  MOV FS:[0x0],EAX
004015a8  MOV dword ptr [EBP + 0xffffff7c],ECX
004015ae  MOV dword ptr [EBP + -0x44],0x6
004015b5  MOV dword ptr [EBP + -0x40],0x7
004015bc  MOV dword ptr [EBP + -0x3c],0x8
004015c3  MOV dword ptr [EBP + -0x38],0x3
004015ca  MOV dword ptr [EBP + -0x34],0x4
004015d1  MOV dword ptr [EBP + -0x30],0x5
004015d8  MOV dword ptr [EBP + -0x2c],0x9
004015df  MOV dword ptr [EBP + -0x28],0xa
004015e6  MOV dword ptr [EBP + -0x24],0xb
004015ed  MOV dword ptr [EBP + -0x20],0x0
004015f4  MOV dword ptr [EBP + -0x1c],0x1
004015fb  MOV dword ptr [EBP + -0x18],0x2
00401602  MOV dword ptr [EBP + -0x48],0x0
00401609  MOV dword ptr [EBP + -0x10],0x28
00401610  PUSH 0x6b27fc
00401615  CALL 0x00630f40
0040161a  ADD ESP,0x4
0040161d  PUSH EAX
0040161e  MOV ECX,dword ptr [0x0162ee84]
00401624  CALL 0x005f38b0
00401629  PUSH 0x311280
0040162e  MOV ECX,dword ptr [0x0162ee80]
00401634  CALL 0x005f1ad0
00401639  MOV dword ptr [EBP + -0x14],0x0
00401640  JMP 0x0040164b
00401642  MOV EAX,dword ptr [EBP + -0x14]
00401645  ADD EAX,0x1
00401648  MOV dword ptr [EBP + -0x14],EAX
0040164b  CMP dword ptr [EBP + -0x14],0x5
0040164f  JGE 0x004016bd
00401651  PUSH 0x18
00401653  CALL 0x00686d82
00401658  ADD ESP,0x4
0040165b  MOV dword ptr [EBP + -0x50],EAX
0040165e  MOV dword ptr [EBP + -0x4],0x0
00401665  CMP dword ptr [EBP + -0x50],0x0
00401669  JZ 0x0040167b
0040166b  MOV ECX,dword ptr [EBP + -0x50]
0040166e  CALL 0x00402660
00401673  MOV dword ptr [EBP + 0xffffff78],EAX
00401679  JMP 0x00401685
0040167b  MOV dword ptr [EBP + 0xffffff78],0x0
00401685  MOV ECX,dword ptr [EBP + 0xffffff78]
0040168b  MOV dword ptr [EBP + -0x4c],ECX
0040168e  MOV dword ptr [EBP + -0x4],0xffffffff
00401695  MOV EDX,dword ptr [EBP + -0x14]
00401698  MOV EAX,dword ptr [EBP + 0xffffff7c]
0040169e  MOV ECX,dword ptr [EBP + -0x4c]
004016a1  MOV dword ptr [EAX + EDX*0x4 + 0x4],ECX
004016a5  MOV EDX,dword ptr [EBP + -0x14]
004016a8  PUSH EDX
004016a9  MOV EAX,dword ptr [EBP + -0x14]
004016ac  MOV ECX,dword ptr [EBP + 0xffffff7c]
004016b2  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
004016b6  CALL 0x004027b0
004016bb  JMP 0x00401642
004016bd  PUSH 0x1d0
004016c2  CALL 0x00686d82
004016c7  ADD ESP,0x4
004016ca  MOV dword ptr [EBP + -0x58],EAX
004016cd  MOV dword ptr [EBP + -0x4],0x1
004016d4  CMP dword ptr [EBP + -0x58],0x0
004016d8  JZ 0x004016ea
004016da  MOV ECX,dword ptr [EBP + -0x58]
004016dd  CALL 0x005ec5a0
004016e2  MOV dword ptr [EBP + 0xffffff74],EAX
004016e8  JMP 0x004016f4
004016ea  MOV dword ptr [EBP + 0xffffff74],0x0
004016f4  MOV EDX,dword ptr [EBP + 0xffffff74]
004016fa  MOV dword ptr [EBP + -0x54],EDX
004016fd  MOV dword ptr [EBP + -0x4],0xffffffff
00401704  MOV EAX,dword ptr [EBP + 0xffffff7c]
0040170a  MOV ECX,dword ptr [EBP + -0x54]
0040170d  MOV dword ptr [EAX + 0x18],ECX
00401710  PUSH -0x1
00401712  PUSH 0x11
00401714  PUSH 0x51
00401716  PUSH 0x6c
00401718  PUSH 0x1a7
0040171d  PUSH 0x14
0040171f  PUSH 0x3c
00401721  PUSH 0x38
00401723  PUSH 0x6b27f8
00401728  MOV EDX,dword ptr [EBP + 0xffffff7c]
0040172e  MOV ECX,dword ptr [EDX + 0x18]
00401731  CALL 0x005ec8f0
00401736  PUSH 0x1d0
0040173b  CALL 0x00686d82
00401740  ADD ESP,0x4
00401743  MOV dword ptr [EBP + -0x60],EAX
00401746  MOV dword ptr [EBP + -0x4],0x2
0040174d  CMP dword ptr [EBP + -0x60],0x0
00401751  JZ 0x00401763
00401753  MOV ECX,dword ptr [EBP + -0x60]
00401756  CALL 0x005ec5a0
0040175b  MOV dword ptr [EBP + 0xffffff70],EAX
00401761  JMP 0x0040176d
00401763  MOV dword ptr [EBP + 0xffffff70],0x0
0040176d  MOV EAX,dword ptr [EBP + 0xffffff70]
00401773  MOV dword ptr [EBP + -0x5c],EAX
00401776  MOV dword ptr [EBP + -0x4],0xffffffff
0040177d  MOV ECX,dword ptr [EBP + 0xffffff7c]
00401783  MOV EDX,dword ptr [EBP + -0x5c]
00401786  MOV dword ptr [ECX + 0x1c],EDX
00401789  PUSH -0x1
0040178b  PUSH 0x12
0040178d  PUSH 0x51
0040178f  PUSH 0x6c
00401791  PUSH 0xa1
00401796  PUSH 0x14
00401798  PUSH 0x3c
0040179a  PUSH 0x38
0040179c  PUSH 0x6b27f8
004017a1  MOV EAX,dword ptr [EBP + 0xffffff7c]
004017a7  MOV ECX,dword ptr [EAX + 0x1c]
004017aa  CALL 0x005ec8f0
004017af  MOV dword ptr [EBP + -0x14],0x0
004017b6  JMP 0x004017c1
004017b8  MOV ECX,dword ptr [EBP + -0x14]
004017bb  ADD ECX,0x1
004017be  MOV dword ptr [EBP + -0x14],ECX
004017c1  CMP dword ptr [EBP + -0x14],0xc
004017c5  JGE 0x0040195f
004017cb  PUSH 0xae8
004017d0  CALL 0x00686d82
004017d5  ADD ESP,0x4
004017d8  MOV dword ptr [EBP + -0x68],EAX
004017db  MOV dword ptr [EBP + -0x4],0x3
004017e2  CMP dword ptr [EBP + -0x68],0x0
004017e6  JZ 0x004017f8
004017e8  MOV ECX,dword ptr [EBP + -0x68]
004017eb  CALL 0x00402a90
004017f0  MOV dword ptr [EBP + 0xffffff6c],EAX
004017f6  JMP 0x00401802
004017f8  MOV dword ptr [EBP + 0xffffff6c],0x0
00401802  MOV EDX,dword ptr [EBP + 0xffffff6c]
00401808  MOV dword ptr [EBP + -0x64],EDX
0040180b  MOV dword ptr [EBP + -0x4],0xffffffff
00401812  MOV EAX,dword ptr [EBP + -0x14]
00401815  MOV ECX,dword ptr [EBP + 0xffffff7c]
0040181b  MOV EDX,dword ptr [EBP + -0x64]
0040181e  MOV dword ptr [ECX + EAX*0x4 + 0x20],EDX
00401822  MOV EAX,dword ptr [EBP + -0x14]
00401825  MOV ECX,dword ptr [EBP + 0xffffff7c]
0040182b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x20]
0040182f  MOV EAX,dword ptr [EBP + -0x14]
00401832  MOV dword ptr [EDX + 0xae0],EAX
00401838  MOV ECX,dword ptr [EBP + -0x14]
0040183b  PUSH ECX
0040183c  PUSH 0x2
0040183e  PUSH 0x0
00401840  PUSH 0x0
00401842  PUSH 0x311285
00401847  MOV EDX,dword ptr [EBP + -0x14]
0040184a  MOV EAX,dword ptr [EBP + 0xffffff7c]
00401850  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x20]
00401854  CALL 0x005eae80
00401859  MOV ECX,dword ptr [EBP + -0x14]
0040185c  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x44]
00401860  PUSH EDX
00401861  MOV EAX,dword ptr [EBP + -0x14]
00401864  MOV ECX,dword ptr [EBP + 0xffffff7c]
0040186a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x20]
0040186e  MOV EAX,dword ptr [EBP + -0x14]
00401871  MOV ECX,dword ptr [EBP + 0xffffff7c]
00401877  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x20]
0040187b  MOV EDX,dword ptr [EDX]
0040187d  MOV EAX,dword ptr [EDX + 0xb0]
00401883  CALL EAX
00401885  PUSH 0x0
00401887  MOV ECX,dword ptr [EBP + -0x14]
0040188a  MOV EDX,dword ptr [EBP + 0xffffff7c]
00401890  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x20]
00401894  CALL 0x005eb5d0
00401899  MOV EAX,dword ptr [EBP + -0x14]
0040189c  MOV ECX,dword ptr [0x007902f0]
004018a2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
004018a6  PUSH EDX
004018a7  MOV EAX,dword ptr [EBP + -0x14]
004018aa  MOV ECX,dword ptr [EBP + 0xffffff7c]
004018b0  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x20]
004018b4  CALL 0x005cc2c0
004018b9  MOV EDX,dword ptr [EBP + -0x14]
004018bc  MOV EAX,dword ptr [EBP + 0xffffff7c]
004018c2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x20]
004018c6  MOV EDX,dword ptr [EBP + -0x14]
004018c9  MOV EAX,dword ptr [EBP + 0xffffff7c]
004018cf  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x20]
004018d3  MOV EAX,dword ptr [ECX]
004018d5  MOV ECX,EDX
004018d7  MOV EDX,dword ptr [EAX + 0x54]
004018da  CALL EDX
004018dc  ADD EAX,0x28
004018df  PUSH EAX
004018e0  MOV EAX,dword ptr [EBP + -0x14]
004018e3  MOV ECX,dword ptr [EBP + 0xffffff7c]
004018e9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x20]
004018ed  MOV EAX,dword ptr [EBP + -0x14]
004018f0  MOV ECX,dword ptr [EBP + 0xffffff7c]
004018f6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x20]
004018fa  MOV EDX,dword ptr [EDX]
004018fc  MOV EAX,dword ptr [EDX + 0x4c]
004018ff  CALL EAX
00401901  PUSH EAX
00401902  MOV ECX,dword ptr [EBP + -0x14]
00401905  MOV EDX,dword ptr [EBP + 0xffffff7c]
0040190b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x20]
0040190f  MOV ECX,dword ptr [EBP + -0x14]
00401912  MOV EDX,dword ptr [EBP + 0xffffff7c]
00401918  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x20]
0040191c  MOV EAX,dword ptr [EAX]
0040191e  MOV EDX,dword ptr [EAX + 0x44]
00401921  CALL EDX
00401923  PUSH 0x1
00401925  MOV EAX,dword ptr [EBP + -0x14]
00401928  MOV ECX,dword ptr [EBP + 0xffffff7c]
0040192e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x20]
00401932  CALL 0x005eb700
00401937  MOV EDX,dword ptr [EBP + -0x14]
0040193a  MOV EAX,dword ptr [EBP + 0xffffff7c]
00401940  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x20]
00401944  MOV EDX,dword ptr [EBP + -0x14]
00401947  MOV EAX,dword ptr [EBP + 0xffffff7c]
0040194d  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x20]
00401951  MOV EAX,dword ptr [ECX]
00401953  MOV ECX,EDX
00401955  MOV EDX,dword ptr [EAX + 0x74]
00401958  CALL EDX
0040195a  JMP 0x004017b8
0040195f  PUSH 0x198
00401964  CALL 0x00686d82
00401969  ADD ESP,0x4
0040196c  MOV dword ptr [EBP + -0x70],EAX
0040196f  MOV dword ptr [EBP + -0x4],0x4
00401976  CMP dword ptr [EBP + -0x70],0x0
0040197a  JZ 0x00401998
0040197c  MOV ECX,dword ptr [EBP + -0x70]
0040197f  CALL 0x005cd6a0
00401984  MOV EAX,dword ptr [EBP + -0x70]
00401987  MOV dword ptr [EAX],0x6b2734
0040198d  MOV ECX,dword ptr [EBP + -0x70]
00401990  MOV dword ptr [EBP + 0xffffff68],ECX
00401996  JMP 0x004019a2
00401998  MOV dword ptr [EBP + 0xffffff68],0x0
004019a2  MOV EDX,dword ptr [EBP + 0xffffff68]
004019a8  MOV dword ptr [EBP + -0x6c],EDX
004019ab  MOV dword ptr [EBP + -0x4],0xffffffff
004019b2  MOV EAX,dword ptr [EBP + 0xffffff7c]
004019b8  MOV ECX,dword ptr [EBP + -0x6c]
004019bb  MOV dword ptr [EAX + 0x50],ECX
004019be  PUSH -0x1
004019c0  PUSH 0x0
004019c2  PUSH 0x0
004019c4  PUSH 0x0
004019c6  PUSH 0x0
004019c8  MOV EDX,dword ptr [EBP + 0xffffff7c]
004019ce  MOV ECX,dword ptr [EDX + 0x50]
004019d1  CALL 0x005eae80
004019d6  MOV dword ptr [EBP + -0x14],0x0
004019dd  JMP 0x004019e8
004019df  MOV EAX,dword ptr [EBP + -0x14]
004019e2  ADD EAX,0x1
004019e5  MOV dword ptr [EBP + -0x14],EAX
004019e8  CMP dword ptr [EBP + -0x14],0x3
004019ec  JGE 0x00401aa2
004019f2  PUSH 0x178
004019f7  CALL 0x00686d82
004019fc  ADD ESP,0x4
004019ff  MOV dword ptr [EBP + -0x78],EAX
00401a02  MOV dword ptr [EBP + -0x4],0x5
00401a09  CMP dword ptr [EBP + -0x78],0x0
00401a0d  JZ 0x00401a1f
00401a0f  MOV ECX,dword ptr [EBP + -0x78]
00401a12  CALL 0x005eaaf0
00401a17  MOV dword ptr [EBP + 0xffffff64],EAX
00401a1d  JMP 0x00401a29
00401a1f  MOV dword ptr [EBP + 0xffffff64],0x0
00401a29  MOV ECX,dword ptr [EBP + 0xffffff64]
00401a2f  MOV dword ptr [EBP + -0x74],ECX
00401a32  MOV dword ptr [EBP + -0x4],0xffffffff
00401a39  MOV EDX,dword ptr [EBP + -0x14]
00401a3c  MOV EAX,dword ptr [EBP + 0xffffff7c]
00401a42  MOV ECX,dword ptr [EBP + -0x74]
00401a45  MOV dword ptr [EAX + EDX*0x4 + 0x5c],ECX
00401a49  PUSH -0x1
00401a4b  PUSH 0x50
00401a4d  MOV EDX,dword ptr [EBP + -0x14]
00401a50  MOV EAX,dword ptr [EDX*0x8 + 0x705058]
00401a57  PUSH EAX
00401a58  MOV ECX,dword ptr [EBP + -0x14]
00401a5b  MOV EDX,dword ptr [ECX*0x8 + 0x705054]
00401a62  PUSH EDX
00401a63  PUSH 0x311292
00401a68  MOV EAX,dword ptr [EBP + -0x14]
00401a6b  MOV ECX,dword ptr [EBP + 0xffffff7c]
00401a71  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
00401a75  CALL 0x005eae80
00401a7a  MOV EDX,dword ptr [EBP + -0x14]
00401a7d  MOV EAX,dword ptr [EBP + 0xffffff7c]
00401a83  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00401a87  MOV EDX,dword ptr [EBP + -0x14]
00401a8a  MOV EAX,dword ptr [EBP + 0xffffff7c]
00401a90  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x5c]
00401a94  MOV EAX,dword ptr [ECX]
00401a96  MOV ECX,EDX
00401a98  MOV EDX,dword ptr [EAX + 0x70]
00401a9b  CALL EDX
00401a9d  JMP 0x004019df
00401aa2  PUSH 0x178
00401aa7  CALL 0x00686d82
00401aac  ADD ESP,0x4
00401aaf  MOV dword ptr [EBP + -0x80],EAX
00401ab2  MOV dword ptr [EBP + -0x4],0x6
00401ab9  CMP dword ptr [EBP + -0x80],0x0
00401abd  JZ 0x00401acf
00401abf  MOV ECX,dword ptr [EBP + -0x80]
00401ac2  CALL 0x005eaaf0
00401ac7  MOV dword ptr [EBP + 0xffffff60],EAX
00401acd  JMP 0x00401ad9
00401acf  MOV dword ptr [EBP + 0xffffff60],0x0
00401ad9  MOV EAX,dword ptr [EBP + 0xffffff60]
00401adf  MOV dword ptr [EBP + -0x7c],EAX
00401ae2  MOV dword ptr [EBP + -0x4],0xffffffff
00401ae9  MOV ECX,dword ptr [EBP + 0xffffff7c]
00401aef  MOV EDX,dword ptr [EBP + -0x7c]
00401af2  MOV dword ptr [ECX + 0x68],EDX
00401af5  PUSH -0x1
00401af7  PUSH 0xa
00401af9  PUSH 0x0
00401afb  PUSH 0x0
00401afd  PUSH 0x13b1
00401b02  MOV EAX,dword ptr [EBP + 0xffffff7c]
00401b08  MOV ECX,dword ptr [EAX + 0x68]
00401b0b  CALL 0x005eae80
00401b10  MOV ECX,dword ptr [EBP + 0xffffff7c]
00401b16  MOV EDX,dword ptr [ECX + 0x68]
00401b19  MOV EAX,dword ptr [EBP + 0xffffff7c]
00401b1f  MOV ECX,dword ptr [EAX + 0x68]
00401b22  MOV EDX,dword ptr [EDX]
00401b24  MOV EAX,dword ptr [EDX + 0x70]
00401b27  CALL EAX
00401b29  MOV ECX,dword ptr [EBP + -0xc]
00401b2c  MOV dword ptr FS:[0x0],ECX
00401b33  POP ECX
00401b34  MOV ESP,EBP
00401b36  POP EBP
00401b37  RET

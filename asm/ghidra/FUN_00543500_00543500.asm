; FUN_00543500  00543500
00543500  PUSH EBP
00543501  MOV EBP,ESP
00543503  PUSH -0x1
00543505  PUSH 0x6a4f33
0054350a  MOV EAX,FS:[0x0]
00543510  PUSH EAX
00543511  SUB ESP,0xb4
00543517  MOV EAX,[0x00781870]
0054351c  XOR EAX,EBP
0054351e  PUSH EAX
0054351f  LEA EAX,[EBP + -0xc]
00543522  MOV FS:[0x0],EAX
00543528  MOV dword ptr [EBP + 0xffffff78],ECX
0054352e  PUSH 0x6c65d0
00543533  CALL 0x00630f40
00543538  ADD ESP,0x4
0054353b  PUSH EAX
0054353c  MOV ECX,dword ptr [0x0162ee84]
00543542  CALL 0x005f38b0
00543547  PUSH 0x311668
0054354c  MOV ECX,dword ptr [0x0162ee80]
00543552  CALL 0x005f1ad0
00543557  PUSH 0x184
0054355c  CALL 0x00686d82
00543561  ADD ESP,0x4
00543564  MOV dword ptr [EBP + -0x14],EAX
00543567  MOV dword ptr [EBP + -0x4],0x0
0054356e  CMP dword ptr [EBP + -0x14],0x0
00543572  JZ 0x00543584
00543574  MOV ECX,dword ptr [EBP + -0x14]
00543577  CALL 0x005f5bf0
0054357c  MOV dword ptr [EBP + 0xffffff74],EAX
00543582  JMP 0x0054358e
00543584  MOV dword ptr [EBP + 0xffffff74],0x0
0054358e  MOV EAX,dword ptr [EBP + 0xffffff74]
00543594  MOV dword ptr [EBP + -0x10],EAX
00543597  MOV dword ptr [EBP + -0x4],0xffffffff
0054359e  MOV ECX,dword ptr [EBP + 0xffffff78]
005435a4  MOV EDX,dword ptr [EBP + -0x10]
005435a7  MOV dword ptr [ECX + 0xb8],EDX
005435ad  PUSH -0x1
005435af  PUSH 0x3
005435b1  PUSH 0x0
005435b3  PUSH 0x0
005435b5  PUSH 0x3116e0
005435ba  MOV EAX,dword ptr [EBP + 0xffffff78]
005435c0  MOV ECX,dword ptr [EAX + 0xb8]
005435c6  CALL 0x005eae80
005435cb  PUSH 0x184
005435d0  CALL 0x00686d82
005435d5  ADD ESP,0x4
005435d8  MOV dword ptr [EBP + -0x1c],EAX
005435db  MOV dword ptr [EBP + -0x4],0x1
005435e2  CMP dword ptr [EBP + -0x1c],0x0
005435e6  JZ 0x005435f8
005435e8  MOV ECX,dword ptr [EBP + -0x1c]
005435eb  CALL 0x005f5bf0
005435f0  MOV dword ptr [EBP + 0xffffff70],EAX
005435f6  JMP 0x00543602
005435f8  MOV dword ptr [EBP + 0xffffff70],0x0
00543602  MOV ECX,dword ptr [EBP + 0xffffff70]
00543608  MOV dword ptr [EBP + -0x18],ECX
0054360b  MOV dword ptr [EBP + -0x4],0xffffffff
00543612  MOV EDX,dword ptr [EBP + 0xffffff78]
00543618  MOV EAX,dword ptr [EBP + -0x18]
0054361b  MOV dword ptr [EDX + 0xbc],EAX
00543621  PUSH -0x1
00543623  PUSH 0x64
00543625  PUSH 0x0
00543627  PUSH 0x0
00543629  PUSH 0x3116e1
0054362e  MOV ECX,dword ptr [EBP + 0xffffff78]
00543634  MOV ECX,dword ptr [ECX + 0xbc]
0054363a  CALL 0x005eae80
0054363f  MOV EDX,dword ptr [EBP + 0xffffff78]
00543645  MOV EAX,dword ptr [EDX + 0xbc]
0054364b  MOV dword ptr [EAX + 0x178],0x0
00543655  PUSH 0xc
00543657  CALL 0x00686d82
0054365c  ADD ESP,0x4
0054365f  MOV dword ptr [EBP + -0x24],EAX
00543662  MOV dword ptr [EBP + -0x4],0x2
00543669  CMP dword ptr [EBP + -0x24],0x0
0054366d  JZ 0x0054367f
0054366f  MOV ECX,dword ptr [EBP + -0x24]
00543672  CALL 0x005465a0
00543677  MOV dword ptr [EBP + 0xffffff6c],EAX
0054367d  JMP 0x00543689
0054367f  MOV dword ptr [EBP + 0xffffff6c],0x0
00543689  MOV ECX,dword ptr [EBP + 0xffffff6c]
0054368f  MOV dword ptr [EBP + -0x20],ECX
00543692  MOV dword ptr [EBP + -0x4],0xffffffff
00543699  MOV EDX,dword ptr [EBP + 0xffffff78]
0054369f  MOV EAX,dword ptr [EBP + -0x20]
005436a2  MOV dword ptr [EDX + 0x38],EAX
005436a5  PUSH 0x22
005436a7  PUSH 0x18e
005436ac  PUSH 0x22
005436ae  PUSH 0x183
005436b3  MOV ECX,dword ptr [EBP + 0xffffff78]
005436b9  MOV ECX,dword ptr [ECX + 0x38]
005436bc  CALL 0x00546660
005436c1  PUSH 0xc
005436c3  CALL 0x00686d82
005436c8  ADD ESP,0x4
005436cb  MOV dword ptr [EBP + -0x2c],EAX
005436ce  MOV dword ptr [EBP + -0x4],0x3
005436d5  CMP dword ptr [EBP + -0x2c],0x0
005436d9  JZ 0x005436eb
005436db  MOV ECX,dword ptr [EBP + -0x2c]
005436de  CALL 0x005465a0
005436e3  MOV dword ptr [EBP + 0xffffff68],EAX
005436e9  JMP 0x005436f5
005436eb  MOV dword ptr [EBP + 0xffffff68],0x0
005436f5  MOV EDX,dword ptr [EBP + 0xffffff68]
005436fb  MOV dword ptr [EBP + -0x28],EDX
005436fe  MOV dword ptr [EBP + -0x4],0xffffffff
00543705  MOV EAX,dword ptr [EBP + 0xffffff78]
0054370b  MOV ECX,dword ptr [EBP + -0x28]
0054370e  MOV dword ptr [EAX + 0x3c],ECX
00543711  PUSH 0x22
00543713  PUSH 0xc0
00543718  PUSH 0x22
0054371a  PUSH 0xb5
0054371f  MOV EDX,dword ptr [EBP + 0xffffff78]
00543725  MOV ECX,dword ptr [EDX + 0x3c]
00543728  CALL 0x00546660
0054372d  PUSH 0xc
0054372f  CALL 0x00686d82
00543734  ADD ESP,0x4
00543737  MOV dword ptr [EBP + -0x34],EAX
0054373a  MOV dword ptr [EBP + -0x4],0x4
00543741  CMP dword ptr [EBP + -0x34],0x0
00543745  JZ 0x00543757
00543747  MOV ECX,dword ptr [EBP + -0x34]
0054374a  CALL 0x005465a0
0054374f  MOV dword ptr [EBP + 0xffffff64],EAX
00543755  JMP 0x00543761
00543757  MOV dword ptr [EBP + 0xffffff64],0x0
00543761  MOV EAX,dword ptr [EBP + 0xffffff64]
00543767  MOV dword ptr [EBP + -0x30],EAX
0054376a  MOV dword ptr [EBP + -0x4],0xffffffff
00543771  MOV ECX,dword ptr [EBP + 0xffffff78]
00543777  MOV EDX,dword ptr [EBP + -0x30]
0054377a  MOV dword ptr [ECX + 0x40],EDX
0054377d  PUSH 0xcb
00543782  PUSH 0x4f
00543784  PUSH 0xcb
00543789  PUSH 0x44
0054378b  MOV EAX,dword ptr [EBP + 0xffffff78]
00543791  MOV ECX,dword ptr [EAX + 0x40]
00543794  CALL 0x00546660
00543799  PUSH 0x40
0054379b  CALL 0x00686d82
005437a0  ADD ESP,0x4
005437a3  MOV dword ptr [EBP + -0x3c],EAX
005437a6  MOV dword ptr [EBP + -0x4],0x5
005437ad  CMP dword ptr [EBP + -0x3c],0x0
005437b1  JZ 0x005437c3
005437b3  MOV ECX,dword ptr [EBP + -0x3c]
005437b6  CALL 0x00546110
005437bb  MOV dword ptr [EBP + 0xffffff60],EAX
005437c1  JMP 0x005437cd
005437c3  MOV dword ptr [EBP + 0xffffff60],0x0
005437cd  MOV ECX,dword ptr [EBP + 0xffffff60]
005437d3  MOV dword ptr [EBP + -0x38],ECX
005437d6  MOV dword ptr [EBP + -0x4],0xffffffff
005437dd  MOV EDX,dword ptr [EBP + 0xffffff78]
005437e3  MOV EAX,dword ptr [EBP + -0x38]
005437e6  MOV dword ptr [EDX + 0xb0],EAX
005437ec  PUSH 0x1
005437ee  PUSH 0x0
005437f0  PUSH 0x149
005437f5  PUSH 0x51
005437f7  PUSH 0x31167c
005437fc  MOV ECX,dword ptr [EBP + 0xffffff78]
00543802  MOV ECX,dword ptr [ECX + 0xb0]
00543808  CALL 0x005461f0
0054380d  MOV EDX,dword ptr [EBP + 0xffffff78]
00543813  MOV ECX,dword ptr [EDX + 0xb0]
00543819  CALL 0x00546360
0054381e  PUSH 0x40
00543820  CALL 0x00686d82
00543825  ADD ESP,0x4
00543828  MOV dword ptr [EBP + -0x44],EAX
0054382b  MOV dword ptr [EBP + -0x4],0x6
00543832  CMP dword ptr [EBP + -0x44],0x0
00543836  JZ 0x00543848
00543838  MOV ECX,dword ptr [EBP + -0x44]
0054383b  CALL 0x00546110
00543840  MOV dword ptr [EBP + 0xffffff5c],EAX
00543846  JMP 0x00543852
00543848  MOV dword ptr [EBP + 0xffffff5c],0x0
00543852  MOV EAX,dword ptr [EBP + 0xffffff5c]
00543858  MOV dword ptr [EBP + -0x40],EAX
0054385b  MOV dword ptr [EBP + -0x4],0xffffffff
00543862  MOV ECX,dword ptr [EBP + 0xffffff78]
00543868  MOV EDX,dword ptr [EBP + -0x40]
0054386b  MOV dword ptr [ECX + 0xb4],EDX
00543871  PUSH 0x1
00543873  PUSH 0x0
00543875  PUSH 0x149
0054387a  PUSH 0x195
0054387f  PUSH 0x31167d
00543884  MOV EAX,dword ptr [EBP + 0xffffff78]
0054388a  MOV ECX,dword ptr [EAX + 0xb4]
00543890  CALL 0x005461f0
00543895  MOV ECX,dword ptr [EBP + 0xffffff78]
0054389b  MOV ECX,dword ptr [ECX + 0xb4]
005438a1  CALL 0x00546360
005438a6  PUSH 0x178
005438ab  CALL 0x00686d82
005438b0  ADD ESP,0x4
005438b3  MOV dword ptr [EBP + -0x4c],EAX
005438b6  MOV dword ptr [EBP + -0x4],0x7
005438bd  CMP dword ptr [EBP + -0x4c],0x0
005438c1  JZ 0x005438d3
005438c3  MOV ECX,dword ptr [EBP + -0x4c]
005438c6  CALL 0x005eaaf0
005438cb  MOV dword ptr [EBP + 0xffffff58],EAX
005438d1  JMP 0x005438dd
005438d3  MOV dword ptr [EBP + 0xffffff58],0x0
005438dd  MOV EDX,dword ptr [EBP + 0xffffff58]
005438e3  MOV dword ptr [EBP + -0x48],EDX
005438e6  MOV dword ptr [EBP + -0x4],0xffffffff
005438ed  MOV EAX,dword ptr [EBP + 0xffffff78]
005438f3  MOV ECX,dword ptr [EBP + -0x48]
005438f6  MOV dword ptr [EAX + 0x1c],ECX
005438f9  PUSH -0x1
005438fb  PUSH 0x258
00543900  PUSH 0x0
00543902  PUSH 0x0
00543904  PUSH 0x3116cd
00543909  MOV EDX,dword ptr [EBP + 0xffffff78]
0054390f  MOV ECX,dword ptr [EDX + 0x1c]
00543912  CALL 0x005eae80
00543917  MOV ECX,dword ptr [EBP + 0xffffff78]
0054391d  CALL 0x00543d50
00543922  PUSH EAX
00543923  MOV EAX,dword ptr [EBP + 0xffffff78]
00543929  MOV ECX,dword ptr [EAX + 0x1c]
0054392c  MOV EDX,dword ptr [EBP + 0xffffff78]
00543932  MOV EAX,dword ptr [EDX + 0x1c]
00543935  MOV EDX,dword ptr [ECX]
00543937  MOV ECX,EAX
00543939  MOV EAX,dword ptr [EDX + 0xb0]
0054393f  CALL EAX
00543941  MOV ECX,dword ptr [EBP + 0xffffff78]
00543947  MOV EDX,dword ptr [ECX + 0x1c]
0054394a  MOV EAX,dword ptr [EBP + 0xffffff78]
00543950  MOV ECX,dword ptr [EAX + 0x1c]
00543953  MOV EDX,dword ptr [EDX]
00543955  MOV EAX,dword ptr [EDX + 0x74]
00543958  CALL EAX
0054395a  PUSH 0x178
0054395f  CALL 0x00686d82
00543964  ADD ESP,0x4
00543967  MOV dword ptr [EBP + -0x54],EAX
0054396a  MOV dword ptr [EBP + -0x4],0x8
00543971  CMP dword ptr [EBP + -0x54],0x0
00543975  JZ 0x00543987
00543977  MOV ECX,dword ptr [EBP + -0x54]
0054397a  CALL 0x005eaaf0
0054397f  MOV dword ptr [EBP + 0xffffff54],EAX
00543985  JMP 0x00543991
00543987  MOV dword ptr [EBP + 0xffffff54],0x0
00543991  MOV ECX,dword ptr [EBP + 0xffffff54]
00543997  MOV dword ptr [EBP + -0x50],ECX
0054399a  MOV dword ptr [EBP + -0x4],0xffffffff
005439a1  MOV EDX,dword ptr [EBP + 0xffffff78]
005439a7  MOV EAX,dword ptr [EBP + -0x50]
005439aa  MOV dword ptr [EDX + 0x20],EAX
005439ad  PUSH -0x1
005439af  PUSH 0x1
005439b1  PUSH 0x0
005439b3  PUSH 0x0
005439b5  PUSH 0x3116ce
005439ba  MOV ECX,dword ptr [EBP + 0xffffff78]
005439c0  MOV ECX,dword ptr [ECX + 0x20]
005439c3  CALL 0x005eae80
005439c8  MOV EDX,dword ptr [EBP + 0xffffff78]
005439ce  MOV EAX,dword ptr [EDX + 0x20]
005439d1  MOV ECX,dword ptr [EBP + 0xffffff78]
005439d7  MOV ECX,dword ptr [ECX + 0x20]
005439da  MOV EDX,dword ptr [EAX]
005439dc  MOV EAX,dword ptr [EDX + 0x70]
005439df  CALL EAX
005439e1  PUSH 0x184
005439e6  CALL 0x00686d82
005439eb  ADD ESP,0x4
005439ee  MOV dword ptr [EBP + -0x5c],EAX
005439f1  MOV dword ptr [EBP + -0x4],0x9
005439f8  CMP dword ptr [EBP + -0x5c],0x0
005439fc  JZ 0x00543a0e
005439fe  MOV ECX,dword ptr [EBP + -0x5c]
00543a01  CALL 0x005f5bf0
00543a06  MOV dword ptr [EBP + 0xffffff50],EAX
00543a0c  JMP 0x00543a18
00543a0e  MOV dword ptr [EBP + 0xffffff50],0x0
00543a18  MOV ECX,dword ptr [EBP + 0xffffff50]
00543a1e  MOV dword ptr [EBP + -0x58],ECX
00543a21  MOV dword ptr [EBP + -0x4],0xffffffff
00543a28  MOV EDX,dword ptr [EBP + 0xffffff78]
00543a2e  MOV EAX,dword ptr [EBP + -0x58]
00543a31  MOV dword ptr [EDX + 0x24],EAX
00543a34  MOV ECX,dword ptr [0x007947e0]
00543a3a  MOV EDX,dword ptr [ECX + 0x4f14]
00543a40  MOV dword ptr [EBP + -0x80],EDX
00543a43  PUSH -0x1
00543a45  PUSH 0x1f4
00543a4a  PUSH 0x0
00543a4c  PUSH 0x0
00543a4e  MOV EAX,dword ptr [EBP + -0x80]
00543a51  MOV ECX,dword ptr [EAX*0x8 + 0x73b5c0]
00543a58  PUSH ECX
00543a59  MOV EDX,dword ptr [EBP + 0xffffff78]
00543a5f  MOV ECX,dword ptr [EDX + 0x24]
00543a62  CALL 0x005eae80
00543a67  MOV EAX,dword ptr [EBP + 0xffffff78]
00543a6d  MOV ECX,dword ptr [EAX + 0x24]
00543a70  MOV EDX,dword ptr [EBP + 0xffffff78]
00543a76  MOV EAX,dword ptr [EDX + 0x24]
00543a79  MOV EDX,dword ptr [ECX]
00543a7b  MOV ECX,EAX
00543a7d  MOV EAX,dword ptr [EDX + 0x74]
00543a80  CALL EAX
00543a82  PUSH 0x178
00543a87  CALL 0x00686d82
00543a8c  ADD ESP,0x4
00543a8f  MOV dword ptr [EBP + -0x64],EAX
00543a92  MOV dword ptr [EBP + -0x4],0xa
00543a99  CMP dword ptr [EBP + -0x64],0x0
00543a9d  JZ 0x00543aaf
00543a9f  MOV ECX,dword ptr [EBP + -0x64]
00543aa2  CALL 0x005eaaf0
00543aa7  MOV dword ptr [EBP + 0xffffff4c],EAX
00543aad  JMP 0x00543ab9
00543aaf  MOV dword ptr [EBP + 0xffffff4c],0x0
00543ab9  MOV ECX,dword ptr [EBP + 0xffffff4c]
00543abf  MOV dword ptr [EBP + -0x60],ECX
00543ac2  MOV dword ptr [EBP + -0x4],0xffffffff
00543ac9  MOV EDX,dword ptr [EBP + 0xffffff78]
00543acf  MOV EAX,dword ptr [EBP + -0x60]
00543ad2  MOV dword ptr [EDX + 0x28],EAX
00543ad5  MOV ECX,dword ptr [0x007947e0]
00543adb  MOV EDX,dword ptr [ECX + 0x4f14]
00543ae1  MOV dword ptr [EBP + 0xffffff7c],EDX
00543ae7  PUSH -0x1
00543ae9  PUSH 0x1f4
00543aee  PUSH 0x0
00543af0  PUSH 0x0
00543af2  MOV EAX,dword ptr [EBP + 0xffffff7c]
00543af8  MOV ECX,dword ptr [EAX*0x8 + 0x73b5c4]
00543aff  PUSH ECX
00543b00  MOV EDX,dword ptr [EBP + 0xffffff78]
00543b06  MOV ECX,dword ptr [EDX + 0x28]
00543b09  CALL 0x005eae80
00543b0e  MOV EAX,dword ptr [EBP + 0xffffff78]
00543b14  MOV ECX,dword ptr [EAX + 0x28]
00543b17  MOV EDX,dword ptr [EBP + 0xffffff78]
00543b1d  MOV EAX,dword ptr [EDX + 0x28]
00543b20  MOV EDX,dword ptr [ECX]
00543b22  MOV ECX,EAX
00543b24  MOV EAX,dword ptr [EDX + 0x70]
00543b27  CALL EAX
00543b29  PUSH 0x184
00543b2e  CALL 0x00686d82
00543b33  ADD ESP,0x4
00543b36  MOV dword ptr [EBP + -0x6c],EAX
00543b39  MOV dword ptr [EBP + -0x4],0xb
00543b40  CMP dword ptr [EBP + -0x6c],0x0
00543b44  JZ 0x00543b56
00543b46  MOV ECX,dword ptr [EBP + -0x6c]
00543b49  CALL 0x005f5bf0
00543b4e  MOV dword ptr [EBP + 0xffffff48],EAX
00543b54  JMP 0x00543b60
00543b56  MOV dword ptr [EBP + 0xffffff48],0x0
00543b60  MOV ECX,dword ptr [EBP + 0xffffff48]
00543b66  MOV dword ptr [EBP + -0x68],ECX
00543b69  MOV dword ptr [EBP + -0x4],0xffffffff
00543b70  MOV EDX,dword ptr [EBP + 0xffffff78]
00543b76  MOV EAX,dword ptr [EBP + -0x68]
00543b79  MOV dword ptr [EDX + 0x2c],EAX
00543b7c  PUSH -0x1
00543b7e  PUSH 0x5
00543b80  PUSH 0x0
00543b82  PUSH 0x0
00543b84  PUSH 0x311682
00543b89  MOV ECX,dword ptr [EBP + 0xffffff78]
00543b8f  MOV ECX,dword ptr [ECX + 0x2c]
00543b92  CALL 0x005eae80
00543b97  MOV EDX,dword ptr [EBP + 0xffffff78]
00543b9d  MOV EAX,dword ptr [EDX + 0x2c]
00543ba0  MOV ECX,dword ptr [EBP + 0xffffff78]
00543ba6  MOV ECX,dword ptr [ECX + 0x2c]
00543ba9  MOV EDX,dword ptr [EAX]
00543bab  MOV EAX,dword ptr [EDX + 0x70]
00543bae  CALL EAX
00543bb0  PUSH 0x184
00543bb5  CALL 0x00686d82
00543bba  ADD ESP,0x4
00543bbd  MOV dword ptr [EBP + -0x74],EAX
00543bc0  MOV dword ptr [EBP + -0x4],0xc
00543bc7  CMP dword ptr [EBP + -0x74],0x0
00543bcb  JZ 0x00543bdd
00543bcd  MOV ECX,dword ptr [EBP + -0x74]
00543bd0  CALL 0x005f5bf0
00543bd5  MOV dword ptr [EBP + 0xffffff44],EAX
00543bdb  JMP 0x00543be7
00543bdd  MOV dword ptr [EBP + 0xffffff44],0x0
00543be7  MOV ECX,dword ptr [EBP + 0xffffff44]
00543bed  MOV dword ptr [EBP + -0x70],ECX
00543bf0  MOV dword ptr [EBP + -0x4],0xffffffff
00543bf7  MOV EDX,dword ptr [EBP + 0xffffff78]
00543bfd  MOV EAX,dword ptr [EBP + -0x70]
00543c00  MOV dword ptr [EDX + 0x30],EAX
00543c03  PUSH -0x1
00543c05  PUSH 0x1f4
00543c0a  PUSH 0x0
00543c0c  PUSH 0x0
00543c0e  PUSH 0x3116ea
00543c13  MOV ECX,dword ptr [EBP + 0xffffff78]
00543c19  MOV ECX,dword ptr [ECX + 0x30]
00543c1c  CALL 0x005eae80
00543c21  MOV EDX,dword ptr [EBP + 0xffffff78]
00543c27  MOV EAX,dword ptr [EDX + 0x30]
00543c2a  MOV ECX,dword ptr [EBP + 0xffffff78]
00543c30  MOV ECX,dword ptr [ECX + 0x30]
00543c33  MOV EDX,dword ptr [EAX]
00543c35  MOV EAX,dword ptr [EDX + 0x70]
00543c38  CALL EAX
00543c3a  PUSH 0x178
00543c3f  CALL 0x00686d82
00543c44  ADD ESP,0x4
00543c47  MOV dword ptr [EBP + -0x7c],EAX
00543c4a  MOV dword ptr [EBP + -0x4],0xd
00543c51  CMP dword ptr [EBP + -0x7c],0x0
00543c55  JZ 0x00543c67
00543c57  MOV ECX,dword ptr [EBP + -0x7c]
00543c5a  CALL 0x005eaaf0
00543c5f  MOV dword ptr [EBP + 0xffffff40],EAX
00543c65  JMP 0x00543c71
00543c67  MOV dword ptr [EBP + 0xffffff40],0x0
00543c71  MOV ECX,dword ptr [EBP + 0xffffff40]
00543c77  MOV dword ptr [EBP + -0x78],ECX
00543c7a  MOV dword ptr [EBP + -0x4],0xffffffff
00543c81  MOV EDX,dword ptr [EBP + 0xffffff78]
00543c87  MOV EAX,dword ptr [EBP + -0x78]
00543c8a  MOV dword ptr [EDX + 0x34],EAX
00543c8d  PUSH -0x1
00543c8f  PUSH 0x5
00543c91  PUSH 0x0
00543c93  PUSH 0x0
00543c95  PUSH 0x3116f4
00543c9a  MOV ECX,dword ptr [EBP + 0xffffff78]
00543ca0  MOV ECX,dword ptr [ECX + 0x34]
00543ca3  CALL 0x005eae80
00543ca8  MOV EDX,dword ptr [EBP + 0xffffff78]
00543cae  MOV EAX,dword ptr [EDX + 0x34]
00543cb1  MOV ECX,dword ptr [EBP + 0xffffff78]
00543cb7  MOV ECX,dword ptr [ECX + 0x34]
00543cba  MOV EDX,dword ptr [EAX]
00543cbc  MOV EAX,dword ptr [EDX + 0x70]
00543cbf  CALL EAX
00543cc1  MOV ECX,dword ptr [EBP + 0xffffff78]
00543cc7  CALL 0x00543dd0
00543ccc  MOV ECX,dword ptr [EBP + 0xffffff78]
00543cd2  CALL 0x00543f00
00543cd7  MOV ECX,dword ptr [EBP + 0xffffff78]
00543cdd  CALL 0x005443d0
00543ce2  MOV ECX,dword ptr [EBP + 0xffffff78]
00543ce8  CALL 0x00544490
00543ced  MOV ECX,dword ptr [EBP + 0xffffff78]
00543cf3  CALL 0x00544620
00543cf8  MOV ECX,dword ptr [EBP + 0xffffff78]
00543cfe  CALL 0x00544d20
00543d03  MOV ECX,dword ptr [EBP + -0xc]
00543d06  MOV dword ptr FS:[0x0],ECX
00543d0d  POP ECX
00543d0e  MOV ESP,EBP
00543d10  POP EBP
00543d11  RET

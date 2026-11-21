; FUN_00542f20  00542f20
00542f20  PUSH EBP
00542f21  MOV EBP,ESP
00542f23  PUSH -0x1
00542f25  PUSH 0x6a4e7b
00542f2a  MOV EAX,FS:[0x0]
00542f30  PUSH EAX
00542f31  SUB ESP,0xcc
00542f37  MOV EAX,[0x00781870]
00542f3c  XOR EAX,EBP
00542f3e  PUSH EAX
00542f3f  LEA EAX,[EBP + -0xc]
00542f42  MOV FS:[0x0],EAX
00542f48  MOV dword ptr [EBP + 0xffffff68],ECX
00542f4e  MOV EAX,dword ptr [EBP + 0xffffff68]
00542f54  MOV dword ptr [EAX],0x6c65cc
00542f5a  MOV dword ptr [EBP + -0x4],0x0
00542f61  MOV dword ptr [EBP + -0x10],0x0
00542f68  JMP 0x00542f73
00542f6a  MOV ECX,dword ptr [EBP + -0x10]
00542f6d  ADD ECX,0x1
00542f70  MOV dword ptr [EBP + -0x10],ECX
00542f73  CMP dword ptr [EBP + -0x10],0x3
00542f77  JGE 0x00543017
00542f7d  MOV dword ptr [EBP + -0x14],0x0
00542f84  JMP 0x00542f8f
00542f86  MOV EDX,dword ptr [EBP + -0x14]
00542f89  ADD EDX,0x1
00542f8c  MOV dword ptr [EBP + -0x14],EDX
00542f8f  CMP dword ptr [EBP + -0x14],0x6
00542f93  JGE 0x00543012
00542f95  MOV EAX,dword ptr [EBP + -0x10]
00542f98  IMUL EAX,EAX,0x18
00542f9b  MOV ECX,dword ptr [EBP + 0xffffff68]
00542fa1  LEA EDX,[ECX + EAX*0x1 + 0x44]
00542fa5  MOV EAX,dword ptr [EBP + -0x14]
00542fa8  CMP dword ptr [EDX + EAX*0x4],0x0
00542fac  JZ 0x0054300d
00542fae  MOV ECX,dword ptr [EBP + -0x10]
00542fb1  IMUL ECX,ECX,0x18
00542fb4  MOV EDX,dword ptr [EBP + 0xffffff68]
00542fba  LEA EAX,[EDX + ECX*0x1 + 0x44]
00542fbe  MOV ECX,dword ptr [EBP + -0x14]
00542fc1  MOV EDX,dword ptr [EAX + ECX*0x4]
00542fc4  MOV dword ptr [EBP + -0x1c],EDX
00542fc7  MOV EAX,dword ptr [EBP + -0x1c]
00542fca  MOV dword ptr [EBP + -0x18],EAX
00542fcd  CMP dword ptr [EBP + -0x18],0x0
00542fd1  JZ 0x00542fe9
00542fd3  PUSH 0x1
00542fd5  MOV ECX,dword ptr [EBP + -0x18]
00542fd8  MOV EDX,dword ptr [ECX]
00542fda  MOV ECX,dword ptr [EBP + -0x18]
00542fdd  MOV EAX,dword ptr [EDX]
00542fdf  CALL EAX
00542fe1  MOV dword ptr [EBP + 0xffffff64],EAX
00542fe7  JMP 0x00542ff3
00542fe9  MOV dword ptr [EBP + 0xffffff64],0x0
00542ff3  MOV ECX,dword ptr [EBP + -0x10]
00542ff6  IMUL ECX,ECX,0x18
00542ff9  MOV EDX,dword ptr [EBP + 0xffffff68]
00542fff  LEA EAX,[EDX + ECX*0x1 + 0x44]
00543003  MOV ECX,dword ptr [EBP + -0x14]
00543006  MOV dword ptr [EAX + ECX*0x4],0x0
0054300d  JMP 0x00542f86
00543012  JMP 0x00542f6a
00543017  MOV dword ptr [EBP + -0x10],0x0
0054301e  JMP 0x00543029
00543020  MOV EDX,dword ptr [EBP + -0x10]
00543023  ADD EDX,0x1
00543026  MOV dword ptr [EBP + -0x10],EDX
00543029  CMP dword ptr [EBP + -0x10],0x3
0054302d  JGE 0x0054308e
0054302f  MOV EAX,dword ptr [EBP + -0x10]
00543032  MOV ECX,dword ptr [EBP + 0xffffff68]
00543038  CMP dword ptr [ECX + EAX*0x4 + 0x10],0x0
0054303d  JZ 0x0054308c
0054303f  MOV EDX,dword ptr [EBP + -0x10]
00543042  MOV EAX,dword ptr [EBP + 0xffffff68]
00543048  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x10]
0054304c  MOV dword ptr [EBP + -0x24],ECX
0054304f  MOV EDX,dword ptr [EBP + -0x24]
00543052  MOV dword ptr [EBP + -0x20],EDX
00543055  CMP dword ptr [EBP + -0x20],0x0
00543059  JZ 0x00543071
0054305b  PUSH 0x1
0054305d  MOV EAX,dword ptr [EBP + -0x20]
00543060  MOV EDX,dword ptr [EAX]
00543062  MOV ECX,dword ptr [EBP + -0x20]
00543065  MOV EAX,dword ptr [EDX]
00543067  CALL EAX
00543069  MOV dword ptr [EBP + 0xffffff60],EAX
0054306f  JMP 0x0054307b
00543071  MOV dword ptr [EBP + 0xffffff60],0x0
0054307b  MOV ECX,dword ptr [EBP + -0x10]
0054307e  MOV EDX,dword ptr [EBP + 0xffffff68]
00543084  MOV dword ptr [EDX + ECX*0x4 + 0x10],0x0
0054308c  JMP 0x00543020
0054308e  MOV dword ptr [EBP + -0x10],0x0
00543095  JMP 0x005430a0
00543097  MOV EAX,dword ptr [EBP + -0x10]
0054309a  ADD EAX,0x1
0054309d  MOV dword ptr [EBP + -0x10],EAX
005430a0  CMP dword ptr [EBP + -0x10],0x9
005430a4  JGE 0x0054310e
005430a6  MOV ECX,dword ptr [EBP + -0x10]
005430a9  MOV EDX,dword ptr [EBP + 0xffffff68]
005430af  CMP dword ptr [EDX + ECX*0x4 + 0x8c],0x0
005430b7  JZ 0x0054310c
005430b9  MOV EAX,dword ptr [EBP + -0x10]
005430bc  MOV ECX,dword ptr [EBP + 0xffffff68]
005430c2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8c]
005430c9  MOV dword ptr [EBP + -0x2c],EDX
005430cc  MOV EAX,dword ptr [EBP + -0x2c]
005430cf  MOV dword ptr [EBP + -0x28],EAX
005430d2  CMP dword ptr [EBP + -0x28],0x0
005430d6  JZ 0x005430ee
005430d8  PUSH 0x1
005430da  MOV ECX,dword ptr [EBP + -0x28]
005430dd  MOV EDX,dword ptr [ECX]
005430df  MOV ECX,dword ptr [EBP + -0x28]
005430e2  MOV EAX,dword ptr [EDX]
005430e4  CALL EAX
005430e6  MOV dword ptr [EBP + 0xffffff5c],EAX
005430ec  JMP 0x005430f8
005430ee  MOV dword ptr [EBP + 0xffffff5c],0x0
005430f8  MOV ECX,dword ptr [EBP + -0x10]
005430fb  MOV EDX,dword ptr [EBP + 0xffffff68]
00543101  MOV dword ptr [EDX + ECX*0x4 + 0x8c],0x0
0054310c  JMP 0x00543097
0054310e  MOV dword ptr [EBP + -0x10],0x0
00543115  JMP 0x00543120
00543117  MOV EAX,dword ptr [EBP + -0x10]
0054311a  ADD EAX,0x1
0054311d  MOV dword ptr [EBP + -0x10],EAX
00543120  CMP dword ptr [EBP + -0x10],0x3
00543124  JGE 0x00543185
00543126  MOV ECX,dword ptr [EBP + -0x10]
00543129  MOV EDX,dword ptr [EBP + 0xffffff68]
0054312f  CMP dword ptr [EDX + ECX*0x4 + 0x4],0x0
00543134  JZ 0x00543183
00543136  MOV EAX,dword ptr [EBP + -0x10]
00543139  MOV ECX,dword ptr [EBP + 0xffffff68]
0054313f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
00543143  MOV dword ptr [EBP + -0x34],EDX
00543146  MOV EAX,dword ptr [EBP + -0x34]
00543149  MOV dword ptr [EBP + -0x30],EAX
0054314c  CMP dword ptr [EBP + -0x30],0x0
00543150  JZ 0x00543168
00543152  PUSH 0x1
00543154  MOV ECX,dword ptr [EBP + -0x30]
00543157  MOV EDX,dword ptr [ECX]
00543159  MOV ECX,dword ptr [EBP + -0x30]
0054315c  MOV EAX,dword ptr [EDX]
0054315e  CALL EAX
00543160  MOV dword ptr [EBP + 0xffffff58],EAX
00543166  JMP 0x00543172
00543168  MOV dword ptr [EBP + 0xffffff58],0x0
00543172  MOV ECX,dword ptr [EBP + -0x10]
00543175  MOV EDX,dword ptr [EBP + 0xffffff68]
0054317b  MOV dword ptr [EDX + ECX*0x4 + 0x4],0x0
00543183  JMP 0x00543117
00543185  MOV dword ptr [EBP + -0x10],0x0
0054318c  JMP 0x00543197
0054318e  MOV EAX,dword ptr [EBP + -0x10]
00543191  ADD EAX,0x1
00543194  MOV dword ptr [EBP + -0x10],EAX
00543197  CMP dword ptr [EBP + -0x10],0x3
0054319b  JGE 0x00543212
0054319d  MOV ECX,dword ptr [EBP + -0x10]
005431a0  MOV EDX,dword ptr [EBP + 0xffffff68]
005431a6  CMP dword ptr [EDX + ECX*0x4 + 0x38],0x0
005431ab  JZ 0x0054320d
005431ad  MOV EAX,dword ptr [EBP + -0x10]
005431b0  MOV ECX,dword ptr [EBP + 0xffffff68]
005431b6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x38]
005431ba  MOV dword ptr [EBP + -0x3c],EDX
005431bd  MOV EAX,dword ptr [EBP + -0x3c]
005431c0  MOV dword ptr [EBP + -0x38],EAX
005431c3  CMP dword ptr [EBP + -0x38],0x0
005431c7  JZ 0x005431f2
005431c9  MOV ECX,dword ptr [EBP + -0x38]
005431cc  CALL 0x005465f0
005431d1  MOV ECX,0x1
005431d6  AND ECX,0x1
005431d9  JZ 0x005431e7
005431db  MOV EDX,dword ptr [EBP + -0x38]
005431de  PUSH EDX
005431df  CALL 0x00686cae
005431e4  ADD ESP,0x4
005431e7  MOV EAX,dword ptr [EBP + -0x38]
005431ea  MOV dword ptr [EBP + 0xffffff54],EAX
005431f0  JMP 0x005431fc
005431f2  MOV dword ptr [EBP + 0xffffff54],0x0
005431fc  MOV ECX,dword ptr [EBP + -0x10]
005431ff  MOV EDX,dword ptr [EBP + 0xffffff68]
00543205  MOV dword ptr [EDX + ECX*0x4 + 0x38],0x0
0054320d  JMP 0x0054318e
00543212  MOV EAX,dword ptr [EBP + 0xffffff68]
00543218  MOV ECX,dword ptr [EAX + 0x1c]
0054321b  MOV dword ptr [EBP + -0x44],ECX
0054321e  MOV EDX,dword ptr [EBP + -0x44]
00543221  MOV dword ptr [EBP + -0x40],EDX
00543224  CMP dword ptr [EBP + -0x40],0x0
00543228  JZ 0x00543240
0054322a  PUSH 0x1
0054322c  MOV EAX,dword ptr [EBP + -0x40]
0054322f  MOV EDX,dword ptr [EAX]
00543231  MOV ECX,dword ptr [EBP + -0x40]
00543234  MOV EAX,dword ptr [EDX]
00543236  CALL EAX
00543238  MOV dword ptr [EBP + 0xffffff50],EAX
0054323e  JMP 0x0054324a
00543240  MOV dword ptr [EBP + 0xffffff50],0x0
0054324a  MOV ECX,dword ptr [EBP + 0xffffff68]
00543250  MOV EDX,dword ptr [ECX + 0x20]
00543253  MOV dword ptr [EBP + -0x4c],EDX
00543256  MOV EAX,dword ptr [EBP + -0x4c]
00543259  MOV dword ptr [EBP + -0x48],EAX
0054325c  CMP dword ptr [EBP + -0x48],0x0
00543260  JZ 0x00543278
00543262  PUSH 0x1
00543264  MOV ECX,dword ptr [EBP + -0x48]
00543267  MOV EDX,dword ptr [ECX]
00543269  MOV ECX,dword ptr [EBP + -0x48]
0054326c  MOV EAX,dword ptr [EDX]
0054326e  CALL EAX
00543270  MOV dword ptr [EBP + 0xffffff4c],EAX
00543276  JMP 0x00543282
00543278  MOV dword ptr [EBP + 0xffffff4c],0x0
00543282  MOV ECX,dword ptr [EBP + 0xffffff68]
00543288  MOV EDX,dword ptr [ECX + 0x24]
0054328b  MOV dword ptr [EBP + -0x54],EDX
0054328e  MOV EAX,dword ptr [EBP + -0x54]
00543291  MOV dword ptr [EBP + -0x50],EAX
00543294  CMP dword ptr [EBP + -0x50],0x0
00543298  JZ 0x005432b0
0054329a  PUSH 0x1
0054329c  MOV ECX,dword ptr [EBP + -0x50]
0054329f  MOV EDX,dword ptr [ECX]
005432a1  MOV ECX,dword ptr [EBP + -0x50]
005432a4  MOV EAX,dword ptr [EDX]
005432a6  CALL EAX
005432a8  MOV dword ptr [EBP + 0xffffff48],EAX
005432ae  JMP 0x005432ba
005432b0  MOV dword ptr [EBP + 0xffffff48],0x0
005432ba  MOV ECX,dword ptr [EBP + 0xffffff68]
005432c0  MOV EDX,dword ptr [ECX + 0x28]
005432c3  MOV dword ptr [EBP + -0x5c],EDX
005432c6  MOV EAX,dword ptr [EBP + -0x5c]
005432c9  MOV dword ptr [EBP + -0x58],EAX
005432cc  CMP dword ptr [EBP + -0x58],0x0
005432d0  JZ 0x005432e8
005432d2  PUSH 0x1
005432d4  MOV ECX,dword ptr [EBP + -0x58]
005432d7  MOV EDX,dword ptr [ECX]
005432d9  MOV ECX,dword ptr [EBP + -0x58]
005432dc  MOV EAX,dword ptr [EDX]
005432de  CALL EAX
005432e0  MOV dword ptr [EBP + 0xffffff44],EAX
005432e6  JMP 0x005432f2
005432e8  MOV dword ptr [EBP + 0xffffff44],0x0
005432f2  MOV ECX,dword ptr [EBP + 0xffffff68]
005432f8  MOV EDX,dword ptr [ECX + 0x2c]
005432fb  MOV dword ptr [EBP + -0x64],EDX
005432fe  MOV EAX,dword ptr [EBP + -0x64]
00543301  MOV dword ptr [EBP + -0x60],EAX
00543304  CMP dword ptr [EBP + -0x60],0x0
00543308  JZ 0x00543320
0054330a  PUSH 0x1
0054330c  MOV ECX,dword ptr [EBP + -0x60]
0054330f  MOV EDX,dword ptr [ECX]
00543311  MOV ECX,dword ptr [EBP + -0x60]
00543314  MOV EAX,dword ptr [EDX]
00543316  CALL EAX
00543318  MOV dword ptr [EBP + 0xffffff40],EAX
0054331e  JMP 0x0054332a
00543320  MOV dword ptr [EBP + 0xffffff40],0x0
0054332a  MOV ECX,dword ptr [EBP + 0xffffff68]
00543330  MOV EDX,dword ptr [ECX + 0x30]
00543333  MOV dword ptr [EBP + -0x6c],EDX
00543336  MOV EAX,dword ptr [EBP + -0x6c]
00543339  MOV dword ptr [EBP + -0x68],EAX
0054333c  CMP dword ptr [EBP + -0x68],0x0
00543340  JZ 0x00543358
00543342  PUSH 0x1
00543344  MOV ECX,dword ptr [EBP + -0x68]
00543347  MOV EDX,dword ptr [ECX]
00543349  MOV ECX,dword ptr [EBP + -0x68]
0054334c  MOV EAX,dword ptr [EDX]
0054334e  CALL EAX
00543350  MOV dword ptr [EBP + 0xffffff3c],EAX
00543356  JMP 0x00543362
00543358  MOV dword ptr [EBP + 0xffffff3c],0x0
00543362  MOV ECX,dword ptr [EBP + 0xffffff68]
00543368  MOV EDX,dword ptr [ECX + 0x34]
0054336b  MOV dword ptr [EBP + -0x74],EDX
0054336e  MOV EAX,dword ptr [EBP + -0x74]
00543371  MOV dword ptr [EBP + -0x70],EAX
00543374  CMP dword ptr [EBP + -0x70],0x0
00543378  JZ 0x00543390
0054337a  PUSH 0x1
0054337c  MOV ECX,dword ptr [EBP + -0x70]
0054337f  MOV EDX,dword ptr [ECX]
00543381  MOV ECX,dword ptr [EBP + -0x70]
00543384  MOV EAX,dword ptr [EDX]
00543386  CALL EAX
00543388  MOV dword ptr [EBP + 0xffffff38],EAX
0054338e  JMP 0x0054339a
00543390  MOV dword ptr [EBP + 0xffffff38],0x0
0054339a  MOV ECX,dword ptr [EBP + 0xffffff68]
005433a0  MOV EDX,dword ptr [ECX + 0xb0]
005433a6  MOV dword ptr [EBP + -0x7c],EDX
005433a9  MOV EAX,dword ptr [EBP + -0x7c]
005433ac  MOV dword ptr [EBP + -0x78],EAX
005433af  CMP dword ptr [EBP + -0x78],0x0
005433b3  JZ 0x005433de
005433b5  MOV ECX,dword ptr [EBP + -0x78]
005433b8  CALL 0x00546160
005433bd  MOV ECX,0x1
005433c2  AND ECX,0x1
005433c5  JZ 0x005433d3
005433c7  MOV EDX,dword ptr [EBP + -0x78]
005433ca  PUSH EDX
005433cb  CALL 0x00686cae
005433d0  ADD ESP,0x4
005433d3  MOV EAX,dword ptr [EBP + -0x78]
005433d6  MOV dword ptr [EBP + 0xffffff34],EAX
005433dc  JMP 0x005433e8
005433de  MOV dword ptr [EBP + 0xffffff34],0x0
005433e8  MOV ECX,dword ptr [EBP + 0xffffff68]
005433ee  MOV EDX,dword ptr [ECX + 0xb4]
005433f4  MOV dword ptr [EBP + 0xffffff7c],EDX
005433fa  MOV EAX,dword ptr [EBP + 0xffffff7c]
00543400  MOV dword ptr [EBP + -0x80],EAX
00543403  CMP dword ptr [EBP + -0x80],0x0
00543407  JZ 0x00543432
00543409  MOV ECX,dword ptr [EBP + -0x80]
0054340c  CALL 0x00546160
00543411  MOV ECX,0x1
00543416  AND ECX,0x1
00543419  JZ 0x00543427
0054341b  MOV EDX,dword ptr [EBP + -0x80]
0054341e  PUSH EDX
0054341f  CALL 0x00686cae
00543424  ADD ESP,0x4
00543427  MOV EAX,dword ptr [EBP + -0x80]
0054342a  MOV dword ptr [EBP + 0xffffff30],EAX
00543430  JMP 0x0054343c
00543432  MOV dword ptr [EBP + 0xffffff30],0x0
0054343c  MOV ECX,dword ptr [EBP + 0xffffff68]
00543442  MOV EDX,dword ptr [ECX + 0xb8]
00543448  MOV dword ptr [EBP + 0xffffff74],EDX
0054344e  MOV EAX,dword ptr [EBP + 0xffffff74]
00543454  MOV dword ptr [EBP + 0xffffff78],EAX
0054345a  CMP dword ptr [EBP + 0xffffff78],0x0
00543461  JZ 0x0054347f
00543463  PUSH 0x1
00543465  MOV ECX,dword ptr [EBP + 0xffffff78]
0054346b  MOV EDX,dword ptr [ECX]
0054346d  MOV ECX,dword ptr [EBP + 0xffffff78]
00543473  MOV EAX,dword ptr [EDX]
00543475  CALL EAX
00543477  MOV dword ptr [EBP + 0xffffff2c],EAX
0054347d  JMP 0x00543489
0054347f  MOV dword ptr [EBP + 0xffffff2c],0x0
00543489  MOV ECX,dword ptr [EBP + 0xffffff68]
0054348f  MOV EDX,dword ptr [ECX + 0xbc]
00543495  MOV dword ptr [EBP + 0xffffff6c],EDX
0054349b  MOV EAX,dword ptr [EBP + 0xffffff6c]
005434a1  MOV dword ptr [EBP + 0xffffff70],EAX
005434a7  CMP dword ptr [EBP + 0xffffff70],0x0
005434ae  JZ 0x005434cc
005434b0  PUSH 0x1
005434b2  MOV ECX,dword ptr [EBP + 0xffffff70]
005434b8  MOV EDX,dword ptr [ECX]
005434ba  MOV ECX,dword ptr [EBP + 0xffffff70]
005434c0  MOV EAX,dword ptr [EDX]
005434c2  CALL EAX
005434c4  MOV dword ptr [EBP + 0xffffff28],EAX
005434ca  JMP 0x005434d6
005434cc  MOV dword ptr [EBP + 0xffffff28],0x0
005434d6  MOV dword ptr [EBP + -0x4],0xffffffff
005434dd  MOV ECX,dword ptr [EBP + 0xffffff68]
005434e3  CALL 0x005e9e40
005434e8  MOV ECX,dword ptr [EBP + -0xc]
005434eb  MOV dword ptr FS:[0x0],ECX
005434f2  POP ECX
005434f3  MOV ESP,EBP
005434f5  POP EBP
005434f6  RET

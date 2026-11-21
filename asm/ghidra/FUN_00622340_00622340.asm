; FUN_00622340  00622340
00622340  PUSH EBP
00622341  MOV EBP,ESP
00622343  SUB ESP,0x100
00622349  MOV dword ptr [EBP + -0x5c],0x0
00622350  MOV dword ptr [EBP + -0x8],0x1
00622357  MOV dword ptr [EBP + 0xffffff74],0x2
00622361  MOV dword ptr [EBP + -0x4],0x3
00622368  MOV dword ptr [EBP + 0xffffff70],0x1
00622372  MOV dword ptr [EBP + -0x74],0x4
00622379  MOV dword ptr [EBP + 0xffffff7c],0x1
00622383  MOV dword ptr [EBP + -0x28],0x1
0062238a  CALL 0x00622d10
0062238f  MOV dword ptr [EBP + -0x58],EAX
00622392  MOV dword ptr [EBP + -0x14],0x75f748
00622399  MOV EAX,dword ptr [EBP + 0x20]
0062239c  IMUL EAX,dword ptr [EBP + -0x74]
006223a0  PUSH EAX
006223a1  CALL 0x00686d82
006223a6  ADD ESP,0x4
006223a9  MOV dword ptr [EBP + 0xffffff40],EAX
006223af  MOV ECX,dword ptr [EBP + 0xffffff40]
006223b5  MOV dword ptr [EBP + -0x10],ECX
006223b8  MOV EDX,dword ptr [EBP + 0x20]
006223bb  IMUL EDX,dword ptr [EBP + 0xffffff7c]
006223c2  PUSH EDX
006223c3  CALL 0x00686d82
006223c8  ADD ESP,0x4
006223cb  MOV dword ptr [EBP + 0xffffff3c],EAX
006223d1  MOV EAX,dword ptr [EBP + 0xffffff3c]
006223d7  MOV dword ptr [EBP + -0x70],EAX
006223da  MOV ECX,dword ptr [EBP + 0x20]
006223dd  LEA EDX,[ECX*0x4 + 0x8]
006223e4  PUSH EDX
006223e5  CALL 0x00686d82
006223ea  ADD ESP,0x4
006223ed  MOV dword ptr [EBP + 0xffffff38],EAX
006223f3  MOV EAX,dword ptr [EBP + 0xffffff38]
006223f9  MOV dword ptr [EBP + 0xffffff54],EAX
006223ff  MOV ECX,dword ptr [EBP + 0x20]
00622402  LEA EDX,[ECX*0x4 + 0x8]
00622409  PUSH EDX
0062240a  CALL 0x00686d82
0062240f  ADD ESP,0x4
00622412  MOV dword ptr [EBP + 0xffffff34],EAX
00622418  MOV EAX,dword ptr [EBP + 0xffffff34]
0062241e  MOV dword ptr [EBP + 0xffffff78],EAX
00622424  MOV ECX,dword ptr [EBP + 0x20]
00622427  LEA EDX,[ECX*0x4 + 0x8]
0062242e  PUSH EDX
0062242f  CALL 0x00686d82
00622434  ADD ESP,0x4
00622437  MOV dword ptr [EBP + 0xffffff30],EAX
0062243d  MOV EAX,dword ptr [EBP + 0xffffff30]
00622443  MOV dword ptr [EBP + -0x40],EAX
00622446  MOV ECX,dword ptr [EBP + 0x20]
00622449  LEA EDX,[ECX*0x4 + 0x8]
00622450  PUSH EDX
00622451  CALL 0x00686d82
00622456  ADD ESP,0x4
00622459  MOV dword ptr [EBP + 0xffffff2c],EAX
0062245f  MOV EAX,dword ptr [EBP + 0xffffff2c]
00622465  MOV dword ptr [EBP + 0xffffff44],EAX
0062246b  MOV ECX,dword ptr [EBP + 0x20]
0062246e  LEA EDX,[ECX*0x4 + 0x8]
00622475  PUSH EDX
00622476  CALL 0x00686d82
0062247b  ADD ESP,0x4
0062247e  MOV dword ptr [EBP + 0xffffff28],EAX
00622484  MOV EAX,dword ptr [EBP + 0xffffff28]
0062248a  MOV dword ptr [EBP + -0x50],EAX
0062248d  MOV ECX,dword ptr [EBP + 0x20]
00622490  LEA EDX,[ECX*0x4 + 0x8]
00622497  PUSH EDX
00622498  CALL 0x00686d82
0062249d  ADD ESP,0x4
006224a0  MOV dword ptr [EBP + 0xffffff24],EAX
006224a6  MOV EAX,dword ptr [EBP + 0xffffff24]
006224ac  MOV dword ptr [EBP + -0x6c],EAX
006224af  MOV ECX,dword ptr [EBP + 0x20]
006224b2  LEA EDX,[ECX*0x4 + 0x8]
006224b9  PUSH EDX
006224ba  PUSH 0x0
006224bc  MOV EAX,dword ptr [EBP + 0xffffff78]
006224c2  PUSH EAX
006224c3  CALL 0x00686fa2
006224c8  ADD ESP,0xc
006224cb  MOV ECX,dword ptr [EBP + 0x20]
006224ce  LEA EDX,[ECX*0x4 + 0x8]
006224d5  PUSH EDX
006224d6  PUSH 0x0
006224d8  MOV EAX,dword ptr [EBP + 0xffffff44]
006224de  PUSH EAX
006224df  CALL 0x00686fa2
006224e4  ADD ESP,0xc
006224e7  MOV ECX,dword ptr [EBP + 0x20]
006224ea  LEA EDX,[ECX*0x4 + 0x8]
006224f1  PUSH EDX
006224f2  PUSH 0x0
006224f4  MOV EAX,dword ptr [EBP + -0x6c]
006224f7  PUSH EAX
006224f8  CALL 0x00686fa2
006224fd  ADD ESP,0xc
00622500  MOV dword ptr [EBP + -0x2c],0x76014e
00622507  MOV dword ptr [EBP + 0xffffff64],0x760956
00622511  MOV dword ptr [EBP + 0xffffff68],0x76115e
0062251b  MOV dword ptr [EBP + -0x18],0x761966
00622522  MOV dword ptr [EBP + -0x44],0x0
00622529  MOV dword ptr [EBP + -0x60],0x0
00622530  JMP 0x0062253b
00622532  MOV ECX,dword ptr [EBP + -0x60]
00622535  ADD ECX,0x1
00622538  MOV dword ptr [EBP + -0x60],ECX
0062253b  MOV EDX,dword ptr [EBP + -0x60]
0062253e  CMP EDX,dword ptr [EBP + 0x24]
00622541  JGE 0x00622c11
00622547  MOV EAX,dword ptr [EBP + 0x20]
0062254a  IMUL EAX,dword ptr [EBP + -0x74]
0062254e  PUSH EAX
0062254f  MOV ECX,dword ptr [EBP + -0x60]
00622552  IMUL ECX,dword ptr [EBP + 0x20]
00622556  IMUL ECX,dword ptr [EBP + -0x74]
0062255a  ADD ECX,dword ptr [EBP + 0x14]
0062255d  PUSH ECX
0062255e  MOV EDX,dword ptr [EBP + -0x10]
00622561  PUSH EDX
00622562  CALL 0x00686fde
00622567  ADD ESP,0xc
0062256a  MOV EAX,dword ptr [EBP + -0x10]
0062256d  MOV dword ptr [EBP + 0xffffff50],EAX
00622573  MOV ECX,dword ptr [EBP + -0x70]
00622576  MOV dword ptr [EBP + -0x54],ECX
00622579  MOV EDX,dword ptr [EBP + -0x60]
0062257c  IMUL EDX,dword ptr [EBP + 0x20]
00622580  ADD EDX,dword ptr [EBP + 0x1c]
00622583  MOV dword ptr [EBP + -0x1c],EDX
00622586  MOV EAX,dword ptr [EBP + 0xffffff54]
0062258c  MOV dword ptr [EBP + -0x24],EAX
0062258f  MOV ECX,dword ptr [EBP + -0x40]
00622592  MOV dword ptr [EBP + 0xffffff58],ECX
00622598  MOV EDX,dword ptr [EBP + -0x50]
0062259b  MOV dword ptr [EBP + -0x38],EDX
0062259e  MOV EAX,dword ptr [EBP + 0xffffff78]
006225a4  ADD EAX,0x4
006225a7  MOV dword ptr [EBP + 0xffffff48],EAX
006225ad  MOV ECX,dword ptr [EBP + 0xffffff44]
006225b3  ADD ECX,0x4
006225b6  MOV dword ptr [EBP + -0x68],ECX
006225b9  MOV EDX,dword ptr [EBP + -0x6c]
006225bc  ADD EDX,0x4
006225bf  MOV dword ptr [EBP + 0xffffff4c],EDX
006225c5  CMP dword ptr [EBP + -0x44],0x0
006225c9  JZ 0x006226a6
006225cf  MOV EAX,dword ptr [EBP + 0xffffff7c]
006225d5  NEG EAX
006225d7  MOV dword ptr [EBP + -0x34],EAX
006225da  MOV ECX,dword ptr [EBP + -0x28]
006225dd  NEG ECX
006225df  MOV dword ptr [EBP + -0x20],ECX
006225e2  MOV EDX,dword ptr [EBP + -0x74]
006225e5  NEG EDX
006225e7  MOV dword ptr [EBP + -0x3c],EDX
006225ea  MOV EAX,dword ptr [EBP + 0x20]
006225ed  IMUL EAX,dword ptr [EBP + -0x74]
006225f1  SUB EAX,dword ptr [EBP + -0x74]
006225f4  ADD EAX,dword ptr [EBP + 0xffffff50]
006225fa  MOV dword ptr [EBP + 0xffffff50],EAX
00622600  MOV ECX,dword ptr [EBP + 0x20]
00622603  IMUL ECX,dword ptr [EBP + 0xffffff7c]
0062260a  SUB ECX,dword ptr [EBP + 0xffffff7c]
00622610  ADD ECX,dword ptr [EBP + -0x54]
00622613  MOV dword ptr [EBP + -0x54],ECX
00622616  MOV EDX,dword ptr [EBP + 0x20]
00622619  IMUL EDX,dword ptr [EBP + -0x28]
0062261d  SUB EDX,dword ptr [EBP + -0x28]
00622620  ADD EDX,dword ptr [EBP + -0x1c]
00622623  MOV dword ptr [EBP + -0x1c],EDX
00622626  MOV EAX,dword ptr [EBP + 0x20]
00622629  MOV ECX,dword ptr [EBP + -0x24]
0062262c  LEA EDX,[ECX + EAX*0x4 + 0x4]
00622630  MOV dword ptr [EBP + -0x24],EDX
00622633  MOV EAX,dword ptr [EBP + 0x20]
00622636  MOV ECX,dword ptr [EBP + 0xffffff58]
0062263c  LEA EDX,[ECX + EAX*0x4 + 0x4]
00622640  MOV dword ptr [EBP + 0xffffff58],EDX
00622646  MOV EAX,dword ptr [EBP + 0x20]
00622649  MOV ECX,dword ptr [EBP + -0x38]
0062264c  LEA EDX,[ECX + EAX*0x4 + 0x4]
00622650  MOV dword ptr [EBP + -0x38],EDX
00622653  MOV EAX,dword ptr [EBP + 0x20]
00622656  MOV ECX,dword ptr [EBP + 0xffffff48]
0062265c  LEA EDX,[ECX + EAX*0x4]
0062265f  MOV dword ptr [EBP + 0xffffff48],EDX
00622665  MOV EAX,dword ptr [EBP + 0x20]
00622668  MOV ECX,dword ptr [EBP + -0x68]
0062266b  LEA EDX,[ECX + EAX*0x4]
0062266e  MOV dword ptr [EBP + -0x68],EDX
00622671  MOV EAX,dword ptr [EBP + 0x20]
00622674  MOV ECX,dword ptr [EBP + 0xffffff4c]
0062267a  LEA EDX,[ECX + EAX*0x4]
0062267d  MOV dword ptr [EBP + 0xffffff4c],EDX
00622683  MOV EAX,dword ptr [EBP + -0x38]
00622686  MOV dword ptr [EAX + -0x4],0x0
0062268d  MOV ECX,dword ptr [EBP + 0xffffff58]
00622693  MOV dword ptr [ECX + -0x4],0x0
0062269a  MOV EDX,dword ptr [EBP + -0x24]
0062269d  MOV dword ptr [EDX + -0x4],0x0
006226a4  JMP 0x006226dc
006226a6  MOV EAX,dword ptr [EBP + 0xffffff7c]
006226ac  MOV dword ptr [EBP + -0x34],EAX
006226af  MOV ECX,dword ptr [EBP + -0x28]
006226b2  MOV dword ptr [EBP + -0x20],ECX
006226b5  MOV EDX,dword ptr [EBP + -0x74]
006226b8  MOV dword ptr [EBP + -0x3c],EDX
006226bb  MOV EAX,dword ptr [EBP + -0x38]
006226be  MOV dword ptr [EAX + 0x4],0x0
006226c5  MOV ECX,dword ptr [EBP + 0xffffff58]
006226cb  MOV dword ptr [ECX + 0x4],0x0
006226d2  MOV EDX,dword ptr [EBP + -0x24]
006226d5  MOV dword ptr [EDX + 0x4],0x0
006226dc  MOV EAX,dword ptr [EBP + -0x38]
006226df  MOV dword ptr [EAX],0x0
006226e5  MOV ECX,dword ptr [EBP + 0xffffff58]
006226eb  MOV dword ptr [ECX],0x0
006226f1  MOV EDX,dword ptr [EBP + -0x24]
006226f4  MOV dword ptr [EDX],0x0
006226fa  MOV dword ptr [EBP + -0xc],0x0
00622701  JMP 0x0062270c
00622703  MOV EAX,dword ptr [EBP + -0xc]
00622706  ADD EAX,0x1
00622709  MOV dword ptr [EBP + -0xc],EAX
0062270c  MOV ECX,dword ptr [EBP + -0xc]
0062270f  CMP ECX,dword ptr [EBP + 0x20]
00622712  JGE 0x00622b96
00622718  MOV EDX,dword ptr [EBP + 0xffffff50]
0062271e  ADD EDX,dword ptr [EBP + -0x5c]
00622721  MOVZX EAX,byte ptr [EDX]
00622724  MOV ECX,dword ptr [EBP + 0xffffff48]
0062272a  MOV EDX,dword ptr [ECX]
0062272c  MOV ECX,dword ptr [EBP + -0x58]
0062272f  ADD EAX,dword ptr [ECX + EDX*0x4]
00622732  MOV EDX,dword ptr [EBP + -0x14]
00622735  MOVSX EAX,word ptr [EDX + EAX*0x2]
00622739  MOV dword ptr [EBP + 0xffffff5c],EAX
0062273f  MOV ECX,dword ptr [EBP + 0xffffff50]
00622745  ADD ECX,dword ptr [EBP + -0x8]
00622748  MOVZX EDX,byte ptr [ECX]
0062274b  MOV EAX,dword ptr [EBP + -0x68]
0062274e  MOV ECX,dword ptr [EAX]
00622750  MOV EAX,dword ptr [EBP + -0x58]
00622753  ADD EDX,dword ptr [EAX + ECX*0x4]
00622756  MOV ECX,dword ptr [EBP + -0x14]
00622759  MOVSX EDX,word ptr [ECX + EDX*0x2]
0062275d  MOV dword ptr [EBP + -0x80],EDX
00622760  MOV EAX,dword ptr [EBP + 0xffffff50]
00622766  ADD EAX,dword ptr [EBP + 0xffffff74]
0062276c  MOVZX ECX,byte ptr [EAX]
0062276f  MOV EDX,dword ptr [EBP + 0xffffff4c]
00622775  MOV EAX,dword ptr [EDX]
00622777  MOV EDX,dword ptr [EBP + -0x58]
0062277a  ADD ECX,dword ptr [EDX + EAX*0x4]
0062277d  MOV EAX,dword ptr [EBP + -0x14]
00622780  MOVSX ECX,word ptr [EAX + ECX*0x2]
00622784  MOV dword ptr [EBP + -0x7c],ECX
00622787  MOV EDX,dword ptr [EBP + 0xffffff5c]
0062278d  SAR EDX,0x2
00622790  MOV dword ptr [EBP + 0xffffff60],EDX
00622796  MOV EAX,dword ptr [EBP + -0x80]
00622799  SAR EAX,0x2
0062279c  MOV dword ptr [EBP + 0xffffff6c],EAX
006227a2  MOV ECX,dword ptr [EBP + -0x7c]
006227a5  SAR ECX,0x3
006227a8  MOV dword ptr [EBP + -0x4c],ECX
006227ab  MOV EDX,dword ptr [EBP + 0xffffff60]
006227b1  SHL EDX,0x6
006227b4  SHL EDX,0x5
006227b7  MOV EAX,dword ptr [EBP + 0xffffff6c]
006227bd  SHL EAX,0x5
006227c0  ADD EDX,dword ptr [EBP + -0x4c]
006227c3  ADD EAX,EDX
006227c5  MOV ECX,dword ptr [EBP + 0x10]
006227c8  LEA EDX,[ECX + EAX*0x4]
006227cb  MOV dword ptr [EBP + -0x78],EDX
006227ce  MOV EAX,dword ptr [EBP + -0x78]
006227d1  CMP dword ptr [EAX],0x0
006227d4  JNZ 0x006227fc
006227d6  MOV ECX,dword ptr [EBP + 0xc]
006227d9  PUSH ECX
006227da  MOV EDX,dword ptr [EBP + 0x8]
006227dd  PUSH EDX
006227de  MOV EAX,dword ptr [EBP + -0x4c]
006227e1  PUSH EAX
006227e2  MOV ECX,dword ptr [EBP + 0xffffff6c]
006227e8  PUSH ECX
006227e9  MOV EDX,dword ptr [EBP + 0xffffff60]
006227ef  PUSH EDX
006227f0  MOV EAX,dword ptr [EBP + 0x10]
006227f3  PUSH EAX
006227f4  CALL 0x00622e00
006227f9  ADD ESP,0x18
006227fc  MOV ECX,dword ptr [EBP + -0x78]
006227ff  MOV EDX,dword ptr [ECX]
00622801  SUB EDX,0x1
00622804  MOV dword ptr [EBP + -0x48],EDX
00622807  MOV EAX,dword ptr [EBP + -0x54]
0062280a  MOV CL,byte ptr [EBP + -0x48]
0062280d  MOV byte ptr [EAX],CL
0062280f  CMP dword ptr [EBP + 0xffffff70],0x0
00622816  JZ 0x0062283e
00622818  MOV EDX,dword ptr [EBP + 0xffffff50]
0062281e  ADD EDX,dword ptr [EBP + -0x4]
00622821  MOVZX EAX,byte ptr [EDX]
00622824  TEST EAX,EAX
00622826  JNZ 0x0062282e
00622828  MOV ECX,dword ptr [EBP + -0x54]
0062282b  MOV byte ptr [ECX],0x0
0062282e  MOV EDX,dword ptr [EBP + 0xffffff50]
00622834  ADD EDX,dword ptr [EBP + -0x4]
00622837  MOV EAX,dword ptr [EBP + -0x1c]
0062283a  MOV CL,byte ptr [EDX]
0062283c  MOV byte ptr [EAX],CL
0062283e  MOV EDX,dword ptr [EBP + -0x48]
00622841  IMUL EDX,EDX,0x3
00622844  ADD EDX,dword ptr [EBP + 0x8]
00622847  MOV dword ptr [EBP + -0x30],EDX
0062284a  MOV EAX,dword ptr [EBP + -0x30]
0062284d  MOVZX ECX,byte ptr [EAX]
00622850  MOV EDX,dword ptr [EBP + 0xffffff5c]
00622856  SUB EDX,ECX
00622858  MOV dword ptr [EBP + 0xffffff60],EDX
0062285e  MOV EAX,dword ptr [EBP + -0x30]
00622861  MOVZX ECX,byte ptr [EAX + 0x1]
00622865  MOV EDX,dword ptr [EBP + -0x80]
00622868  SUB EDX,ECX
0062286a  MOV dword ptr [EBP + 0xffffff6c],EDX
00622870  MOV EAX,dword ptr [EBP + -0x30]
00622873  MOVZX ECX,byte ptr [EAX + 0x2]
00622877  MOV EDX,dword ptr [EBP + -0x7c]
0062287a  SUB EDX,ECX
0062287c  MOV dword ptr [EBP + -0x4c],EDX
0062287f  CMP dword ptr [EBP + -0x44],0x0
00622883  JZ 0x006229ff
00622889  MOV EAX,dword ptr [EBP + 0xffffff48]
0062288f  SUB EAX,0x4
00622892  MOV dword ptr [EBP + 0xffffff48],EAX
00622898  MOV ECX,dword ptr [EBP + 0xffffff60]
0062289e  MOV EDX,dword ptr [EBP + -0x2c]
006228a1  MOVSX EAX,word ptr [EDX + ECX*0x2]
006228a5  MOV ECX,dword ptr [EBP + 0xffffff48]
006228ab  ADD EAX,dword ptr [ECX]
006228ad  MOV EDX,dword ptr [EBP + 0xffffff48]
006228b3  MOV dword ptr [EDX],EAX
006228b5  MOV EAX,dword ptr [EBP + -0x68]
006228b8  SUB EAX,0x4
006228bb  MOV dword ptr [EBP + -0x68],EAX
006228be  MOV ECX,dword ptr [EBP + 0xffffff6c]
006228c4  MOV EDX,dword ptr [EBP + -0x2c]
006228c7  MOVSX EAX,word ptr [EDX + ECX*0x2]
006228cb  MOV ECX,dword ptr [EBP + -0x68]
006228ce  ADD EAX,dword ptr [ECX]
006228d0  MOV EDX,dword ptr [EBP + -0x68]
006228d3  MOV dword ptr [EDX],EAX
006228d5  MOV EAX,dword ptr [EBP + 0xffffff4c]
006228db  SUB EAX,0x4
006228de  MOV dword ptr [EBP + 0xffffff4c],EAX
006228e4  MOV ECX,dword ptr [EBP + -0x4c]
006228e7  MOV EDX,dword ptr [EBP + -0x2c]
006228ea  MOVSX EAX,word ptr [EDX + ECX*0x2]
006228ee  MOV ECX,dword ptr [EBP + 0xffffff4c]
006228f4  ADD EAX,dword ptr [ECX]
006228f6  MOV EDX,dword ptr [EBP + 0xffffff4c]
006228fc  MOV dword ptr [EDX],EAX
006228fe  MOV EAX,dword ptr [EBP + 0xffffff60]
00622904  MOV ECX,dword ptr [EBP + 0xffffff64]
0062290a  MOVSX EDX,word ptr [ECX + EAX*0x2]
0062290e  MOV EAX,dword ptr [EBP + -0x24]
00622911  ADD EDX,dword ptr [EAX]
00622913  MOV ECX,dword ptr [EBP + -0x24]
00622916  MOV dword ptr [ECX],EDX
00622918  MOV EDX,dword ptr [EBP + -0x24]
0062291b  SUB EDX,0x4
0062291e  MOV dword ptr [EBP + -0x24],EDX
00622921  MOV EAX,dword ptr [EBP + 0xffffff6c]
00622927  MOV ECX,dword ptr [EBP + 0xffffff64]
0062292d  MOVSX EDX,word ptr [ECX + EAX*0x2]
00622931  MOV EAX,dword ptr [EBP + 0xffffff58]
00622937  ADD EDX,dword ptr [EAX]
00622939  MOV ECX,dword ptr [EBP + 0xffffff58]
0062293f  MOV dword ptr [ECX],EDX
00622941  MOV EDX,dword ptr [EBP + 0xffffff58]
00622947  SUB EDX,0x4
0062294a  MOV dword ptr [EBP + 0xffffff58],EDX
00622950  MOV EAX,dword ptr [EBP + -0x4c]
00622953  MOV ECX,dword ptr [EBP + 0xffffff64]
00622959  MOVSX EDX,word ptr [ECX + EAX*0x2]
0062295d  MOV EAX,dword ptr [EBP + -0x38]
00622960  ADD EDX,dword ptr [EAX]
00622962  MOV ECX,dword ptr [EBP + -0x38]
00622965  MOV dword ptr [ECX],EDX
00622967  MOV EDX,dword ptr [EBP + -0x38]
0062296a  SUB EDX,0x4
0062296d  MOV dword ptr [EBP + -0x38],EDX
00622970  MOV EAX,dword ptr [EBP + 0xffffff60]
00622976  MOV ECX,dword ptr [EBP + 0xffffff68]
0062297c  MOVSX EDX,word ptr [ECX + EAX*0x2]
00622980  MOV EAX,dword ptr [EBP + -0x24]
00622983  ADD EDX,dword ptr [EAX]
00622985  MOV ECX,dword ptr [EBP + -0x24]
00622988  MOV dword ptr [ECX],EDX
0062298a  MOV EDX,dword ptr [EBP + 0xffffff6c]
00622990  MOV EAX,dword ptr [EBP + 0xffffff68]
00622996  MOVSX ECX,word ptr [EAX + EDX*0x2]
0062299a  MOV EDX,dword ptr [EBP + 0xffffff58]
006229a0  ADD ECX,dword ptr [EDX]
006229a2  MOV EAX,dword ptr [EBP + 0xffffff58]
006229a8  MOV dword ptr [EAX],ECX
006229aa  MOV ECX,dword ptr [EBP + -0x4c]
006229ad  MOV EDX,dword ptr [EBP + 0xffffff68]
006229b3  MOVSX EAX,word ptr [EDX + ECX*0x2]
006229b7  MOV ECX,dword ptr [EBP + -0x38]
006229ba  ADD EAX,dword ptr [ECX]
006229bc  MOV EDX,dword ptr [EBP + -0x38]
006229bf  MOV dword ptr [EDX],EAX
006229c1  MOV EAX,dword ptr [EBP + 0xffffff60]
006229c7  MOV ECX,dword ptr [EBP + -0x18]
006229ca  MOVSX EDX,word ptr [ECX + EAX*0x2]
006229ce  MOV EAX,dword ptr [EBP + -0x24]
006229d1  MOV dword ptr [EAX + -0x4],EDX
006229d4  MOV ECX,dword ptr [EBP + 0xffffff6c]
006229da  MOV EDX,dword ptr [EBP + -0x18]
006229dd  MOVSX EAX,word ptr [EDX + ECX*0x2]
006229e1  MOV ECX,dword ptr [EBP + 0xffffff58]
006229e7  MOV dword ptr [ECX + -0x4],EAX
006229ea  MOV EDX,dword ptr [EBP + -0x4c]
006229ed  MOV EAX,dword ptr [EBP + -0x18]
006229f0  MOVSX ECX,word ptr [EAX + EDX*0x2]
006229f4  MOV EDX,dword ptr [EBP + -0x38]
006229f7  MOV dword ptr [EDX + -0x4],ECX
006229fa  JMP 0x00622b70
006229ff  MOV EAX,dword ptr [EBP + 0xffffff48]
00622a05  ADD EAX,0x4
00622a08  MOV dword ptr [EBP + 0xffffff48],EAX
00622a0e  MOV ECX,dword ptr [EBP + 0xffffff60]
00622a14  MOV EDX,dword ptr [EBP + -0x2c]
00622a17  MOVSX EAX,word ptr [EDX + ECX*0x2]
00622a1b  MOV ECX,dword ptr [EBP + 0xffffff48]
00622a21  ADD EAX,dword ptr [ECX]
00622a23  MOV EDX,dword ptr [EBP + 0xffffff48]
00622a29  MOV dword ptr [EDX],EAX
00622a2b  MOV EAX,dword ptr [EBP + -0x68]
00622a2e  ADD EAX,0x4
00622a31  MOV dword ptr [EBP + -0x68],EAX
00622a34  MOV ECX,dword ptr [EBP + 0xffffff6c]
00622a3a  MOV EDX,dword ptr [EBP + -0x2c]
00622a3d  MOVSX EAX,word ptr [EDX + ECX*0x2]
00622a41  MOV ECX,dword ptr [EBP + -0x68]
00622a44  ADD EAX,dword ptr [ECX]
00622a46  MOV EDX,dword ptr [EBP + -0x68]
00622a49  MOV dword ptr [EDX],EAX
00622a4b  MOV EAX,dword ptr [EBP + 0xffffff4c]
00622a51  ADD EAX,0x4
00622a54  MOV dword ptr [EBP + 0xffffff4c],EAX
00622a5a  MOV ECX,dword ptr [EBP + -0x4c]
00622a5d  MOV EDX,dword ptr [EBP + -0x2c]
00622a60  MOVSX EAX,word ptr [EDX + ECX*0x2]
00622a64  MOV ECX,dword ptr [EBP + 0xffffff4c]
00622a6a  ADD EAX,dword ptr [ECX]
00622a6c  MOV EDX,dword ptr [EBP + 0xffffff4c]
00622a72  MOV dword ptr [EDX],EAX
00622a74  MOV EAX,dword ptr [EBP + 0xffffff60]
00622a7a  MOV ECX,dword ptr [EBP + 0xffffff64]
00622a80  MOVSX EDX,word ptr [ECX + EAX*0x2]
00622a84  MOV EAX,dword ptr [EBP + -0x24]
00622a87  ADD EDX,dword ptr [EAX]
00622a89  MOV ECX,dword ptr [EBP + -0x24]
00622a8c  MOV dword ptr [ECX],EDX
00622a8e  MOV EDX,dword ptr [EBP + -0x24]
00622a91  ADD EDX,0x4
00622a94  MOV dword ptr [EBP + -0x24],EDX
00622a97  MOV EAX,dword ptr [EBP + 0xffffff6c]
00622a9d  MOV ECX,dword ptr [EBP + 0xffffff64]
00622aa3  MOVSX EDX,word ptr [ECX + EAX*0x2]
00622aa7  MOV EAX,dword ptr [EBP + 0xffffff58]
00622aad  ADD EDX,dword ptr [EAX]
00622aaf  MOV ECX,dword ptr [EBP + 0xffffff58]
00622ab5  MOV dword ptr [ECX],EDX
00622ab7  MOV EDX,dword ptr [EBP + 0xffffff58]
00622abd  ADD EDX,0x4
00622ac0  MOV dword ptr [EBP + 0xffffff58],EDX
00622ac6  MOV EAX,dword ptr [EBP + -0x4c]
00622ac9  MOV ECX,dword ptr [EBP + 0xffffff64]
00622acf  MOVSX EDX,word ptr [ECX + EAX*0x2]
00622ad3  MOV EAX,dword ptr [EBP + -0x38]
00622ad6  ADD EDX,dword ptr [EAX]
00622ad8  MOV ECX,dword ptr [EBP + -0x38]
00622adb  MOV dword ptr [ECX],EDX
00622add  MOV EDX,dword ptr [EBP + -0x38]
00622ae0  ADD EDX,0x4
00622ae3  MOV dword ptr [EBP + -0x38],EDX
00622ae6  MOV EAX,dword ptr [EBP + 0xffffff60]
00622aec  MOV ECX,dword ptr [EBP + 0xffffff68]
00622af2  MOVSX EDX,word ptr [ECX + EAX*0x2]
00622af6  MOV EAX,dword ptr [EBP + -0x24]
00622af9  ADD EDX,dword ptr [EAX]
00622afb  MOV ECX,dword ptr [EBP + -0x24]
00622afe  MOV dword ptr [ECX],EDX
00622b00  MOV EDX,dword ptr [EBP + 0xffffff6c]
00622b06  MOV EAX,dword ptr [EBP + 0xffffff68]
00622b0c  MOVSX ECX,word ptr [EAX + EDX*0x2]
00622b10  MOV EDX,dword ptr [EBP + 0xffffff58]
00622b16  ADD ECX,dword ptr [EDX]
00622b18  MOV EAX,dword ptr [EBP + 0xffffff58]
00622b1e  MOV dword ptr [EAX],ECX
00622b20  MOV ECX,dword ptr [EBP + -0x4c]
00622b23  MOV EDX,dword ptr [EBP + 0xffffff68]
00622b29  MOVSX EAX,word ptr [EDX + ECX*0x2]
00622b2d  MOV ECX,dword ptr [EBP + -0x38]
00622b30  ADD EAX,dword ptr [ECX]
00622b32  MOV EDX,dword ptr [EBP + -0x38]
00622b35  MOV dword ptr [EDX],EAX
00622b37  MOV EAX,dword ptr [EBP + 0xffffff60]
00622b3d  MOV ECX,dword ptr [EBP + -0x18]
00622b40  MOVSX EDX,word ptr [ECX + EAX*0x2]
00622b44  MOV EAX,dword ptr [EBP + -0x24]
00622b47  MOV dword ptr [EAX + 0x4],EDX
00622b4a  MOV ECX,dword ptr [EBP + 0xffffff6c]
00622b50  MOV EDX,dword ptr [EBP + -0x18]
00622b53  MOVSX EAX,word ptr [EDX + ECX*0x2]
00622b57  MOV ECX,dword ptr [EBP + 0xffffff58]
00622b5d  MOV dword ptr [ECX + 0x4],EAX
00622b60  MOV EDX,dword ptr [EBP + -0x4c]
00622b63  MOV EAX,dword ptr [EBP + -0x18]
00622b66  MOVSX ECX,word ptr [EAX + EDX*0x2]
00622b6a  MOV EDX,dword ptr [EBP + -0x38]
00622b6d  MOV dword ptr [EDX + 0x4],ECX
00622b70  MOV EAX,dword ptr [EBP + -0x54]
00622b73  ADD EAX,dword ptr [EBP + -0x34]
00622b76  MOV dword ptr [EBP + -0x54],EAX
00622b79  MOV ECX,dword ptr [EBP + -0x1c]
00622b7c  ADD ECX,dword ptr [EBP + -0x20]
00622b7f  MOV dword ptr [EBP + -0x1c],ECX
00622b82  MOV EDX,dword ptr [EBP + 0xffffff50]
00622b88  ADD EDX,dword ptr [EBP + -0x3c]
00622b8b  MOV dword ptr [EBP + 0xffffff50],EDX
00622b91  JMP 0x00622703
00622b96  MOV EAX,dword ptr [EBP + 0xffffff54]
00622b9c  MOV dword ptr [EBP + -0x64],EAX
00622b9f  MOV ECX,dword ptr [EBP + 0xffffff78]
00622ba5  MOV dword ptr [EBP + 0xffffff54],ECX
00622bab  MOV EDX,dword ptr [EBP + -0x64]
00622bae  MOV dword ptr [EBP + 0xffffff78],EDX
00622bb4  MOV EAX,dword ptr [EBP + -0x40]
00622bb7  MOV dword ptr [EBP + -0x64],EAX
00622bba  MOV ECX,dword ptr [EBP + 0xffffff44]
00622bc0  MOV dword ptr [EBP + -0x40],ECX
00622bc3  MOV EDX,dword ptr [EBP + -0x64]
00622bc6  MOV dword ptr [EBP + 0xffffff44],EDX
00622bcc  MOV EAX,dword ptr [EBP + -0x50]
00622bcf  MOV dword ptr [EBP + -0x64],EAX
00622bd2  MOV ECX,dword ptr [EBP + -0x6c]
00622bd5  MOV dword ptr [EBP + -0x50],ECX
00622bd8  MOV EDX,dword ptr [EBP + -0x64]
00622bdb  MOV dword ptr [EBP + -0x6c],EDX
00622bde  XOR EAX,EAX
00622be0  CMP dword ptr [EBP + -0x44],0x0
00622be4  SETZ AL
00622be7  MOV dword ptr [EBP + -0x44],EAX
00622bea  MOV ECX,dword ptr [EBP + 0x20]
00622bed  IMUL ECX,dword ptr [EBP + 0xffffff7c]
00622bf4  PUSH ECX
00622bf5  MOV EDX,dword ptr [EBP + -0x70]
00622bf8  PUSH EDX
00622bf9  MOV EAX,dword ptr [EBP + -0x60]
00622bfc  IMUL EAX,dword ptr [EBP + 0x20]
00622c00  ADD EAX,dword ptr [EBP + 0x18]
00622c03  PUSH EAX
00622c04  CALL 0x00686fde
00622c09  ADD ESP,0xc
00622c0c  JMP 0x00622532
00622c11  MOV ECX,dword ptr [EBP + -0x58]
00622c14  SUB ECX,0x3fc
00622c1a  MOV dword ptr [EBP + -0x58],ECX
00622c1d  MOV EDX,dword ptr [EBP + -0x58]
00622c20  MOV dword ptr [EBP + 0xffffff20],EDX
00622c26  MOV EAX,dword ptr [EBP + 0xffffff20]
00622c2c  PUSH EAX
00622c2d  CALL 0x00686cae
00622c32  ADD ESP,0x4
00622c35  MOV ECX,dword ptr [EBP + 0xffffff54]
00622c3b  MOV dword ptr [EBP + 0xffffff1c],ECX
00622c41  MOV EDX,dword ptr [EBP + 0xffffff1c]
00622c47  PUSH EDX
00622c48  CALL 0x00686cae
00622c4d  ADD ESP,0x4
00622c50  MOV EAX,dword ptr [EBP + 0xffffff78]
00622c56  MOV dword ptr [EBP + 0xffffff18],EAX
00622c5c  MOV ECX,dword ptr [EBP + 0xffffff18]
00622c62  PUSH ECX
00622c63  CALL 0x00686cae
00622c68  ADD ESP,0x4
00622c6b  MOV EDX,dword ptr [EBP + -0x40]
00622c6e  MOV dword ptr [EBP + 0xffffff14],EDX
00622c74  MOV EAX,dword ptr [EBP + 0xffffff14]
00622c7a  PUSH EAX
00622c7b  CALL 0x00686cae
00622c80  ADD ESP,0x4
00622c83  MOV ECX,dword ptr [EBP + 0xffffff44]
00622c89  MOV dword ptr [EBP + 0xffffff10],ECX
00622c8f  MOV EDX,dword ptr [EBP + 0xffffff10]
00622c95  PUSH EDX
00622c96  CALL 0x00686cae
00622c9b  ADD ESP,0x4
00622c9e  MOV EAX,dword ptr [EBP + -0x50]
00622ca1  MOV dword ptr [EBP + 0xffffff0c],EAX
00622ca7  MOV ECX,dword ptr [EBP + 0xffffff0c]
00622cad  PUSH ECX
00622cae  CALL 0x00686cae
00622cb3  ADD ESP,0x4
00622cb6  MOV EDX,dword ptr [EBP + -0x6c]
00622cb9  MOV dword ptr [EBP + 0xffffff08],EDX
00622cbf  MOV EAX,dword ptr [EBP + 0xffffff08]
00622cc5  PUSH EAX
00622cc6  CALL 0x00686cae
00622ccb  ADD ESP,0x4
00622cce  MOV ECX,dword ptr [EBP + -0x10]
00622cd1  MOV dword ptr [EBP + 0xffffff04],ECX
00622cd7  MOV EDX,dword ptr [EBP + 0xffffff04]
00622cdd  PUSH EDX
00622cde  CALL 0x00686cae
00622ce3  ADD ESP,0x4
00622ce6  MOV EAX,dword ptr [EBP + -0x70]
00622ce9  MOV dword ptr [EBP + 0xffffff00],EAX
00622cef  MOV ECX,dword ptr [EBP + 0xffffff00]
00622cf5  PUSH ECX
00622cf6  CALL 0x00686cae
00622cfb  ADD ESP,0x4
00622cfe  MOV ESP,EBP
00622d00  POP EBP
00622d01  RET

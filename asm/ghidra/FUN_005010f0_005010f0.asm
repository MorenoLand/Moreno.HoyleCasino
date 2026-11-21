; FUN_005010f0  005010f0
005010f0  PUSH EBP
005010f1  MOV EBP,ESP
005010f3  PUSH -0x1
005010f5  PUSH 0x6a2b8c
005010fa  MOV EAX,FS:[0x0]
00501100  PUSH EAX
00501101  SUB ESP,0x220
00501107  PUSH ESI
00501108  MOV EAX,[0x00781870]
0050110d  XOR EAX,EBP
0050110f  PUSH EAX
00501110  LEA EAX,[EBP + -0xc]
00501113  MOV FS:[0x0],EAX
00501119  MOV ECX,dword ptr [0x00791364]
0050111f  CALL 0x0047e420
00501124  MOV dword ptr [EBP + -0x78],EAX
00501127  FLD1
00501129  FSTP double ptr [EBP + -0x6c]
0050112c  MOV ECX,dword ptr [0x007926f8]
00501132  CALL 0x004d66f0
00501137  FIDIV dword ptr [EBP + 0xc]
0050113a  FSTP double ptr [EBP + -0x64]
0050113d  MOV ECX,dword ptr [0x00791364]
00501143  CALL 0x0047d6f0
00501148  CMP EAX,0x1
0050114b  JNZ 0x00501157
0050114d  FLDZ
0050114f  FSTP double ptr [EBP + -0x74]
00501152  JMP 0x00501320
00501157  LEA EAX,[EBP + 0xfffffef4]
0050115d  PUSH EAX
0050115e  MOV ECX,dword ptr [0x007926f8]
00501164  CALL 0x004c7c40
00501169  MOV dword ptr [EBP + 0xfffffeb8],EAX
0050116f  MOV ECX,dword ptr [EBP + 0xfffffeb8]
00501175  MOV dword ptr [EBP + 0xfffffeb4],ECX
0050117b  MOV dword ptr [EBP + -0x4],0x0
00501182  PUSH 0x0
00501184  PUSH 0x0
00501186  PUSH 0x0
00501188  PUSH 0x1
0050118a  PUSH 0x1
0050118c  PUSH 0x1
0050118e  PUSH 0x1
00501190  LEA EDX,[EBP + 0xfffffef0]
00501196  PUSH EDX
00501197  MOV ECX,dword ptr [EBP + 0xfffffeb4]
0050119d  CALL 0x00485940
005011a2  MOV dword ptr [EBP + 0xfffffeb0],EAX
005011a8  MOV EAX,dword ptr [EBP + 0xfffffeb0]
005011ae  MOV dword ptr [EBP + 0xfffffeac],EAX
005011b4  MOV byte ptr [EBP + -0x4],0x1
005011b8  LEA ECX,[EBP + 0xfffffeef]
005011be  PUSH ECX
005011bf  MOV ECX,dword ptr [EBP + 0xfffffeac]
005011c5  CALL 0x004a21b0
005011ca  MOV dword ptr [EBP + 0xffffff28],EAX
005011d0  MOV byte ptr [EBP + -0x4],0x0
005011d4  LEA ECX,[EBP + 0xfffffef0]
005011da  CALL 0x004a20f0
005011df  MOV dword ptr [EBP + -0x4],0xffffffff
005011e6  LEA ECX,[EBP + 0xfffffef4]
005011ec  CALL 0x00484470
005011f1  MOV EDX,dword ptr [0x007913c8]
005011f7  PUSH EDX
005011f8  MOV ECX,dword ptr [EBP + 0xffffff28]
005011fe  CALL 0x004a1fb0
00501203  MOVZX EAX,AL
00501206  TEST EAX,EAX
00501208  JZ 0x00501214
0050120a  FLDZ
0050120c  FSTP double ptr [EBP + -0x74]
0050120f  JMP 0x00501320
00501214  MOV ECX,dword ptr [0x007913e0]
0050121a  PUSH ECX
0050121b  MOV ECX,dword ptr [EBP + 0xffffff28]
00501221  CALL 0x004a1fb0
00501226  MOVZX EDX,AL
00501229  TEST EDX,EDX
0050122b  JZ 0x0050123b
0050122d  FLD double ptr [0x006b3e38]
00501233  FSTP double ptr [EBP + -0x74]
00501236  JMP 0x00501320
0050123b  MOV EAX,[0x007913bc]
00501240  PUSH EAX
00501241  MOV ECX,dword ptr [EBP + 0xffffff28]
00501247  CALL 0x004a1fb0
0050124c  MOVZX ECX,AL
0050124f  TEST ECX,ECX
00501251  JZ 0x00501261
00501253  FLD double ptr [0x006be6f8]
00501259  FSTP double ptr [EBP + -0x74]
0050125c  JMP 0x00501320
00501261  MOV EDX,dword ptr [0x00791400]
00501267  PUSH EDX
00501268  MOV ECX,dword ptr [EBP + 0xffffff28]
0050126e  CALL 0x004a1fb0
00501273  MOVZX EAX,AL
00501276  TEST EAX,EAX
00501278  JZ 0x00501288
0050127a  FLD double ptr [0x006b3e48]
00501280  FSTP double ptr [EBP + -0x74]
00501283  JMP 0x00501320
00501288  MOV ECX,dword ptr [0x0079138c]
0050128e  PUSH ECX
0050128f  MOV ECX,dword ptr [EBP + 0xffffff28]
00501295  CALL 0x004a1fb0
0050129a  MOVZX EDX,AL
0050129d  TEST EDX,EDX
0050129f  JZ 0x005012ac
005012a1  FLD double ptr [0x006b2c38]
005012a7  FSTP double ptr [EBP + -0x74]
005012aa  JMP 0x00501320
005012ac  MOV EAX,[0x007913f4]
005012b1  PUSH EAX
005012b2  MOV ECX,dword ptr [EBP + 0xffffff28]
005012b8  CALL 0x004a1fb0
005012bd  MOVZX ECX,AL
005012c0  TEST ECX,ECX
005012c2  JZ 0x005012cf
005012c4  FLD double ptr [0x006be708]
005012ca  FSTP double ptr [EBP + -0x74]
005012cd  JMP 0x00501320
005012cf  MOV EDX,dword ptr [0x00791410]
005012d5  PUSH EDX
005012d6  MOV ECX,dword ptr [EBP + 0xffffff28]
005012dc  CALL 0x004a1fb0
005012e1  MOVZX EAX,AL
005012e4  TEST EAX,EAX
005012e6  JZ 0x005012f3
005012e8  FLD double ptr [0x006be710]
005012ee  FSTP double ptr [EBP + -0x74]
005012f1  JMP 0x00501320
005012f3  MOV ECX,dword ptr [0x007913f8]
005012f9  PUSH ECX
005012fa  MOV ECX,dword ptr [EBP + 0xffffff28]
00501300  CALL 0x004a1fb0
00501305  MOVZX EDX,AL
00501308  TEST EDX,EDX
0050130a  JZ 0x00501317
0050130c  FLD double ptr [0x006be688]
00501312  FSTP double ptr [EBP + -0x74]
00501315  JMP 0x00501320
00501317  FLD double ptr [0x006bcf78]
0050131d  FSTP double ptr [EBP + -0x74]
00501320  CMP dword ptr [EBP + 0x8],0x3
00501324  JNZ 0x005013f1
0050132a  MOV ECX,dword ptr [0x00791364]
00501330  CALL 0x0047d6f0
00501335  CMP EAX,0x1
00501338  JNZ 0x00501396
0050133a  FLD double ptr [0x006c0e20]
00501340  FSTP double ptr [EBP + -0x5c]
00501343  FLD double ptr [0x006c0e18]
00501349  FSTP double ptr [EBP + -0x54]
0050134c  FLD double ptr [0x006c0e10]
00501352  FSTP double ptr [EBP + -0x4c]
00501355  FLD double ptr [0x006c0e08]
0050135b  FSTP double ptr [EBP + -0x44]
0050135e  FLD double ptr [0x006c0e00]
00501364  FSTP double ptr [EBP + -0x3c]
00501367  FLD double ptr [0x006c0df8]
0050136d  FSTP double ptr [EBP + -0x34]
00501370  FLD double ptr [0x006c0df0]
00501376  FSTP double ptr [EBP + -0x2c]
00501379  FLD double ptr [0x006c0de8]
0050137f  FSTP double ptr [EBP + -0x24]
00501382  FLD double ptr [0x006c0de0]
00501388  FSTP double ptr [EBP + -0x1c]
0050138b  FLD double ptr [0x006c0dd8]
00501391  FSTP double ptr [EBP + -0x14]
00501394  JMP 0x005013ec
00501396  FLDZ
00501398  FSTP double ptr [EBP + -0x5c]
0050139b  FLD double ptr [0x006c0dd0]
005013a1  FSTP double ptr [EBP + -0x54]
005013a4  FLD double ptr [0x006c0dc8]
005013aa  FSTP double ptr [EBP + -0x4c]
005013ad  FLD double ptr [0x006c0dc0]
005013b3  FSTP double ptr [EBP + -0x44]
005013b6  FLD double ptr [0x006c0db8]
005013bc  FSTP double ptr [EBP + -0x3c]
005013bf  FLD double ptr [0x006c0db0]
005013c5  FSTP double ptr [EBP + -0x34]
005013c8  FLD double ptr [0x006c0da8]
005013ce  FSTP double ptr [EBP + -0x2c]
005013d1  FLD double ptr [0x006c0da0]
005013d7  FSTP double ptr [EBP + -0x24]
005013da  FLD double ptr [0x006c0d98]
005013e0  FSTP double ptr [EBP + -0x1c]
005013e3  FLD double ptr [0x006c0d90]
005013e9  FSTP double ptr [EBP + -0x14]
005013ec  JMP 0x00501584
005013f1  CMP dword ptr [EBP + 0x8],0x4
005013f5  JNZ 0x005014c2
005013fb  MOV ECX,dword ptr [0x00791364]
00501401  CALL 0x0047d6f0
00501406  CMP EAX,0x1
00501409  JNZ 0x00501467
0050140b  FLD double ptr [0x006c0d88]
00501411  FSTP double ptr [EBP + -0x5c]
00501414  FLD double ptr [0x006c0d80]
0050141a  FSTP double ptr [EBP + -0x54]
0050141d  FLD double ptr [0x006c0d78]
00501423  FSTP double ptr [EBP + -0x4c]
00501426  FLD double ptr [0x006c0d70]
0050142c  FSTP double ptr [EBP + -0x44]
0050142f  FLD double ptr [0x006c0d68]
00501435  FSTP double ptr [EBP + -0x3c]
00501438  FLD double ptr [0x006c0d60]
0050143e  FSTP double ptr [EBP + -0x34]
00501441  FLD double ptr [0x006c0d58]
00501447  FSTP double ptr [EBP + -0x2c]
0050144a  FLD double ptr [0x006c0d50]
00501450  FSTP double ptr [EBP + -0x24]
00501453  FLD double ptr [0x006c0d48]
00501459  FSTP double ptr [EBP + -0x1c]
0050145c  FLD double ptr [0x006c0d40]
00501462  FSTP double ptr [EBP + -0x14]
00501465  JMP 0x005014bd
00501467  FLDZ
00501469  FSTP double ptr [EBP + -0x5c]
0050146c  FLD double ptr [0x006c0d38]
00501472  FSTP double ptr [EBP + -0x54]
00501475  FLD double ptr [0x006c0d30]
0050147b  FSTP double ptr [EBP + -0x4c]
0050147e  FLD double ptr [0x006c0d28]
00501484  FSTP double ptr [EBP + -0x44]
00501487  FLD double ptr [0x006c0d20]
0050148d  FSTP double ptr [EBP + -0x3c]
00501490  FLD double ptr [0x006c0d18]
00501496  FSTP double ptr [EBP + -0x34]
00501499  FLD double ptr [0x006c0d10]
0050149f  FSTP double ptr [EBP + -0x2c]
005014a2  FLD double ptr [0x006c0d08]
005014a8  FSTP double ptr [EBP + -0x24]
005014ab  FLD double ptr [0x006c0d00]
005014b1  FSTP double ptr [EBP + -0x1c]
005014b4  FLD double ptr [0x006c0cf8]
005014ba  FSTP double ptr [EBP + -0x14]
005014bd  JMP 0x00501584
005014c2  MOV ECX,dword ptr [0x00791364]
005014c8  CALL 0x0047d6f0
005014cd  CMP EAX,0x1
005014d0  JNZ 0x0050152e
005014d2  FLD double ptr [0x006c0cf0]
005014d8  FSTP double ptr [EBP + -0x5c]
005014db  FLD double ptr [0x006c0ce8]
005014e1  FSTP double ptr [EBP + -0x54]
005014e4  FLD double ptr [0x006c0ce0]
005014ea  FSTP double ptr [EBP + -0x4c]
005014ed  FLD double ptr [0x006c0cd8]
005014f3  FSTP double ptr [EBP + -0x44]
005014f6  FLD double ptr [0x006c0cd0]
005014fc  FSTP double ptr [EBP + -0x3c]
005014ff  FLD double ptr [0x006c0cc8]
00501505  FSTP double ptr [EBP + -0x34]
00501508  FLD double ptr [0x006c0cc0]
0050150e  FSTP double ptr [EBP + -0x2c]
00501511  FLD double ptr [0x006c0cb8]
00501517  FSTP double ptr [EBP + -0x24]
0050151a  FLD double ptr [0x006c0cb0]
00501520  FSTP double ptr [EBP + -0x1c]
00501523  FLD double ptr [0x006c0ca8]
00501529  FSTP double ptr [EBP + -0x14]
0050152c  JMP 0x00501584
0050152e  FLDZ
00501530  FSTP double ptr [EBP + -0x5c]
00501533  FLD double ptr [0x006c0ca0]
00501539  FSTP double ptr [EBP + -0x54]
0050153c  FLD double ptr [0x006c0c98]
00501542  FSTP double ptr [EBP + -0x4c]
00501545  FLD double ptr [0x006c0c90]
0050154b  FSTP double ptr [EBP + -0x44]
0050154e  FLD double ptr [0x006c0c88]
00501554  FSTP double ptr [EBP + -0x3c]
00501557  FLD double ptr [0x006c0c80]
0050155d  FSTP double ptr [EBP + -0x34]
00501560  FLD double ptr [0x006c0c78]
00501566  FSTP double ptr [EBP + -0x2c]
00501569  FLD double ptr [0x006c0c70]
0050156f  FSTP double ptr [EBP + -0x24]
00501572  FLD double ptr [0x006c0c68]
00501578  FSTP double ptr [EBP + -0x1c]
0050157b  FLD double ptr [0x006c0c60]
00501581  FSTP double ptr [EBP + -0x14]
00501584  FLD double ptr [EBP + -0x5c]
00501587  FSTP double ptr [EBP + 0xffffff34]
0050158d  FLD double ptr [EBP + -0x54]
00501590  FADD double ptr [EBP + 0xffffff34]
00501596  FSTP double ptr [EBP + 0xffffff3c]
0050159c  FLD double ptr [EBP + -0x4c]
0050159f  FADD double ptr [EBP + 0xffffff3c]
005015a5  FSTP double ptr [EBP + 0xffffff44]
005015ab  FLD double ptr [EBP + -0x44]
005015ae  FADD double ptr [EBP + 0xffffff44]
005015b4  FSTP double ptr [EBP + 0xffffff4c]
005015ba  FLD double ptr [EBP + -0x3c]
005015bd  FADD double ptr [EBP + 0xffffff4c]
005015c3  FSTP double ptr [EBP + 0xffffff54]
005015c9  FLD double ptr [EBP + -0x34]
005015cc  FADD double ptr [EBP + 0xffffff54]
005015d2  FSTP double ptr [EBP + 0xffffff5c]
005015d8  FLD double ptr [EBP + -0x2c]
005015db  FADD double ptr [EBP + 0xffffff5c]
005015e1  FSTP double ptr [EBP + 0xffffff64]
005015e7  FLD double ptr [EBP + -0x24]
005015ea  FADD double ptr [EBP + 0xffffff64]
005015f0  FSTP double ptr [EBP + 0xffffff6c]
005015f6  FLD double ptr [EBP + -0x1c]
005015f9  FADD double ptr [EBP + 0xffffff6c]
005015ff  FSTP double ptr [EBP + 0xffffff74]
00501605  FLD1
00501607  FSTP double ptr [EBP + 0xffffff2c]
0050160d  MOV ECX,dword ptr [0x00791364]
00501613  CALL 0x0047d6f0
00501618  CMP EAX,0x1
0050161b  JNZ 0x0050162a
0050161d  FLDZ
0050161f  FSTP double ptr [EBP + 0xffffff2c]
00501625  JMP 0x005016e5
0050162a  LEA EAX,[EBP + 0xfffffee4]
00501630  PUSH EAX
00501631  MOV ECX,dword ptr [0x007926f8]
00501637  CALL 0x004c7c40
0050163c  MOV dword ptr [EBP + 0xfffffea8],EAX
00501642  MOV ECX,dword ptr [EBP + 0xfffffea8]
00501648  MOV dword ptr [EBP + 0xfffffea4],ECX
0050164e  MOV dword ptr [EBP + -0x4],0x2
00501655  PUSH 0x0
00501657  PUSH 0x0
00501659  PUSH 0x0
0050165b  PUSH 0x1
0050165d  PUSH 0x1
0050165f  PUSH 0x1
00501661  PUSH 0x1
00501663  LEA EDX,[EBP + 0xfffffee0]
00501669  PUSH EDX
0050166a  MOV ECX,dword ptr [EBP + 0xfffffea4]
00501670  CALL 0x00485940
00501675  MOV dword ptr [EBP + 0xfffffea0],EAX
0050167b  MOV EAX,dword ptr [EBP + 0xfffffea0]
00501681  MOV dword ptr [EBP + 0xfffffe9c],EAX
00501687  MOV byte ptr [EBP + -0x4],0x3
0050168b  MOV ECX,dword ptr [0x00791418]
00501691  PUSH ECX
00501692  LEA EDX,[EBP + 0xfffffedf]
00501698  PUSH EDX
00501699  MOV ECX,dword ptr [EBP + 0xfffffe9c]
0050169f  CALL 0x004a2160
005016a4  MOV ECX,EAX
005016a6  CALL 0x004a1e10
005016ab  MOV byte ptr [EBP + 0xfffffeee],AL
005016b1  MOV byte ptr [EBP + -0x4],0x2
005016b5  LEA ECX,[EBP + 0xfffffee0]
005016bb  CALL 0x004a20f0
005016c0  MOV dword ptr [EBP + -0x4],0xffffffff
005016c7  LEA ECX,[EBP + 0xfffffee4]
005016cd  CALL 0x00484470
005016d2  MOVZX EAX,byte ptr [EBP + 0xfffffeee]
005016d9  TEST EAX,EAX
005016db  JZ 0x005016e5
005016dd  FLDZ
005016df  FSTP double ptr [EBP + 0xffffff2c]
005016e5  MOV ECX,dword ptr [EBP + -0x78]
005016e8  MOVSX EDX,word ptr [ECX*0x2 + 0x7929d8]
005016f0  MOV EAX,dword ptr [EBP + -0x78]
005016f3  MOVSX ECX,word ptr [EAX*0x2 + 0x792830]
005016fb  ADD EDX,ECX
005016fd  MOV EAX,dword ptr [EBP + -0x78]
00501700  MOVSX ECX,word ptr [EAX*0x2 + 0x7920f8]
00501708  ADD EDX,ECX
0050170a  MOV EAX,dword ptr [EBP + -0x78]
0050170d  MOVSX ECX,word ptr [EAX*0x2 + 0x792820]
00501715  ADD EDX,ECX
00501717  MOV EAX,dword ptr [EBP + -0x78]
0050171a  MOVSX ECX,word ptr [EAX*0x2 + 0x792218]
00501722  ADD EDX,ECX
00501724  MOV EAX,dword ptr [EBP + -0x78]
00501727  MOVSX ECX,word ptr [EAX*0x2 + 0x792248]
0050172f  ADD EDX,ECX
00501731  MOV EAX,dword ptr [EBP + -0x78]
00501734  MOVSX ECX,word ptr [EAX*0x2 + 0x7925c0]
0050173c  ADD EDX,ECX
0050173e  MOV EAX,dword ptr [EBP + -0x78]
00501741  MOVSX ECX,word ptr [EAX*0x2 + 0x7926fc]
00501749  ADD EDX,ECX
0050174b  MOV EAX,dword ptr [EBP + -0x78]
0050174e  MOVSX ECX,word ptr [EAX*0x2 + 0x792f78]
00501756  ADD EDX,ECX
00501758  MOV EAX,dword ptr [EBP + -0x78]
0050175b  MOVSX ECX,word ptr [EAX*0x2 + 0x7920e8]
00501763  ADD EDX,ECX
00501765  MOV word ptr [EBP + -0x7c],DX
00501769  MOV ECX,dword ptr [0x00791364]
0050176f  CALL 0x0047d6f0
00501774  CMP EAX,0x1
00501777  JNZ 0x005018a4
0050177d  MOV EDX,dword ptr [EBP + -0x78]
00501780  MOVSX EAX,word ptr [EDX*0x2 + 0x7929d8]
00501788  MOV dword ptr [EBP + 0xfffffe98],EAX
0050178e  FILD dword ptr [EBP + 0xfffffe98]
00501794  FLD1
00501796  FMULP
00501798  MOVSX ECX,word ptr [EBP + -0x7c]
0050179c  MOV dword ptr [EBP + 0xfffffe94],ECX
005017a2  FILD dword ptr [EBP + 0xfffffe94]
005017a8  FDIVP
005017aa  FLD1
005017ac  FSUB double ptr [EBP + 0xffffff34]
005017b2  MOV EDX,dword ptr [EBP + -0x78]
005017b5  MOVSX EAX,word ptr [EDX*0x2 + 0x792830]
005017bd  MOV dword ptr [EBP + 0xfffffe90],EAX
005017c3  FILD dword ptr [EBP + 0xfffffe90]
005017c9  FMULP
005017cb  MOVSX ECX,word ptr [EBP + -0x7c]
005017cf  MOV dword ptr [EBP + 0xfffffe8c],ECX
005017d5  FILD dword ptr [EBP + 0xfffffe8c]
005017db  FDIVP
005017dd  FADDP
005017df  FSTP double ptr [EBP + 0xffffff7c]
005017e5  LEA EDX,[EBP + 0xfffffed4]
005017eb  PUSH EDX
005017ec  MOV ECX,dword ptr [0x007926f8]
005017f2  CALL 0x004c80b0
005017f7  MOV dword ptr [EBP + 0xfffffe88],EAX
005017fd  MOV EAX,dword ptr [EBP + 0xfffffe88]
00501803  MOV dword ptr [EBP + 0xfffffe84],EAX
00501809  MOV dword ptr [EBP + -0x4],0x4
00501810  PUSH 0x0
00501812  PUSH 0x0
00501814  PUSH 0x0
00501816  PUSH 0x1
00501818  PUSH 0x1
0050181a  PUSH 0x1
0050181c  PUSH 0x1
0050181e  LEA ECX,[EBP + 0xfffffed0]
00501824  PUSH ECX
00501825  MOV ECX,dword ptr [EBP + 0xfffffe84]
0050182b  CALL 0x00485940
00501830  MOV dword ptr [EBP + 0xfffffe80],EAX
00501836  MOV EDX,dword ptr [EBP + 0xfffffe80]
0050183c  MOV dword ptr [EBP + 0xfffffe7c],EDX
00501842  MOV byte ptr [EBP + -0x4],0x5
00501846  MOV EAX,[0x00791418]
0050184b  PUSH EAX
0050184c  LEA ECX,[EBP + 0xfffffecf]
00501852  PUSH ECX
00501853  MOV ECX,dword ptr [EBP + 0xfffffe7c]
00501859  CALL 0x004a2160
0050185e  MOV ECX,EAX
00501860  CALL 0x004a1ed0
00501865  MOV byte ptr [EBP + 0xfffffede],AL
0050186b  MOV byte ptr [EBP + -0x4],0x4
0050186f  LEA ECX,[EBP + 0xfffffed0]
00501875  CALL 0x004a20f0
0050187a  MOV dword ptr [EBP + -0x4],0xffffffff
00501881  LEA ECX,[EBP + 0xfffffed4]
00501887  CALL 0x00484470
0050188c  MOVZX EDX,byte ptr [EBP + 0xfffffede]
00501893  TEST EDX,EDX
00501895  JZ 0x0050189f
00501897  FLDZ
00501899  FSTP double ptr [EBP + 0xffffff7c]
0050189f  JMP 0x00501ade
005018a4  MOV EAX,dword ptr [EBP + -0x78]
005018a7  MOVSX ECX,word ptr [EAX*0x2 + 0x7929d8]
005018af  MOV dword ptr [EBP + 0xfffffe78],ECX
005018b5  FILD dword ptr [EBP + 0xfffffe78]
005018bb  FLD1
005018bd  FMULP
005018bf  MOVSX EDX,word ptr [EBP + -0x7c]
005018c3  MOV dword ptr [EBP + 0xfffffe74],EDX
005018c9  FILD dword ptr [EBP + 0xfffffe74]
005018cf  FDIVP
005018d1  FLD1
005018d3  FSUB double ptr [EBP + 0xffffff34]
005018d9  MOV EAX,dword ptr [EBP + -0x78]
005018dc  MOVSX ECX,word ptr [EAX*0x2 + 0x792830]
005018e4  MOV dword ptr [EBP + 0xfffffe70],ECX
005018ea  FILD dword ptr [EBP + 0xfffffe70]
005018f0  FMULP
005018f2  MOVSX EDX,word ptr [EBP + -0x7c]
005018f6  MOV dword ptr [EBP + 0xfffffe6c],EDX
005018fc  FILD dword ptr [EBP + 0xfffffe6c]
00501902  FDIVP
00501904  FADDP
00501906  FLD1
00501908  FSUB double ptr [EBP + 0xffffff3c]
0050190e  MOV EAX,dword ptr [EBP + -0x78]
00501911  MOVSX ECX,word ptr [EAX*0x2 + 0x7920f8]
00501919  MOV dword ptr [EBP + 0xfffffe68],ECX
0050191f  FILD dword ptr [EBP + 0xfffffe68]
00501925  FMULP
00501927  MOVSX EDX,word ptr [EBP + -0x7c]
0050192b  MOV dword ptr [EBP + 0xfffffe64],EDX
00501931  FILD dword ptr [EBP + 0xfffffe64]
00501937  FDIVP
00501939  FADDP
0050193b  FLD1
0050193d  FSUB double ptr [EBP + 0xffffff44]
00501943  MOV EAX,dword ptr [EBP + -0x78]
00501946  MOVSX ECX,word ptr [EAX*0x2 + 0x792820]
0050194e  MOV dword ptr [EBP + 0xfffffe60],ECX
00501954  FILD dword ptr [EBP + 0xfffffe60]
0050195a  FMULP
0050195c  MOVSX EDX,word ptr [EBP + -0x7c]
00501960  MOV dword ptr [EBP + 0xfffffe5c],EDX
00501966  FILD dword ptr [EBP + 0xfffffe5c]
0050196c  FDIVP
0050196e  FADDP
00501970  FLD1
00501972  FSUB double ptr [EBP + 0xffffff4c]
00501978  MOV EAX,dword ptr [EBP + -0x78]
0050197b  MOVSX ECX,word ptr [EAX*0x2 + 0x792218]
00501983  MOV dword ptr [EBP + 0xfffffe58],ECX
00501989  FILD dword ptr [EBP + 0xfffffe58]
0050198f  FMULP
00501991  MOVSX EDX,word ptr [EBP + -0x7c]
00501995  MOV dword ptr [EBP + 0xfffffe54],EDX
0050199b  FILD dword ptr [EBP + 0xfffffe54]
005019a1  FDIVP
005019a3  FADDP
005019a5  FLD1
005019a7  FSUB double ptr [EBP + 0xffffff54]
005019ad  MOV EAX,dword ptr [EBP + -0x78]
005019b0  MOVSX ECX,word ptr [EAX*0x2 + 0x792248]
005019b8  MOV dword ptr [EBP + 0xfffffe50],ECX
005019be  FILD dword ptr [EBP + 0xfffffe50]
005019c4  FMULP
005019c6  MOVSX EDX,word ptr [EBP + -0x7c]
005019ca  MOV dword ptr [EBP + 0xfffffe4c],EDX
005019d0  FILD dword ptr [EBP + 0xfffffe4c]
005019d6  FDIVP
005019d8  FADDP
005019da  FLD double ptr [EBP + -0x74]
005019dd  FMUL double ptr [EBP + -0x2c]
005019e0  FLD1
005019e2  FSUBRP
005019e4  FSUB double ptr [EBP + 0xffffff5c]
005019ea  FMUL double ptr [EBP + 0xffffff2c]
005019f0  MOV EAX,dword ptr [EBP + -0x78]
005019f3  MOVSX ECX,word ptr [EAX*0x2 + 0x7925c0]
005019fb  MOV dword ptr [EBP + 0xfffffe48],ECX
00501a01  FILD dword ptr [EBP + 0xfffffe48]
00501a07  FMULP
00501a09  MOVSX EDX,word ptr [EBP + -0x7c]
00501a0d  MOV dword ptr [EBP + 0xfffffe44],EDX
00501a13  FILD dword ptr [EBP + 0xfffffe44]
00501a19  FDIVP
00501a1b  FADDP
00501a1d  FSTP double ptr [EBP + 0xffffff7c]
00501a23  LEA EAX,[EBP + 0xfffffec4]
00501a29  PUSH EAX
00501a2a  MOV ECX,dword ptr [0x007926f8]
00501a30  CALL 0x004c7c40
00501a35  MOV dword ptr [EBP + 0xfffffe40],EAX
00501a3b  MOV ECX,dword ptr [EBP + 0xfffffe40]
00501a41  MOV dword ptr [EBP + 0xfffffe3c],ECX
00501a47  MOV dword ptr [EBP + -0x4],0x6
00501a4e  PUSH 0x0
00501a50  PUSH 0x0
00501a52  PUSH 0x0
00501a54  PUSH 0x1
00501a56  PUSH 0x1
00501a58  PUSH 0x1
00501a5a  PUSH 0x1
00501a5c  LEA EDX,[EBP + 0xfffffec0]
00501a62  PUSH EDX
00501a63  MOV ECX,dword ptr [EBP + 0xfffffe3c]
00501a69  CALL 0x00485940
00501a6e  MOV dword ptr [EBP + 0xfffffe38],EAX
00501a74  MOV EAX,dword ptr [EBP + 0xfffffe38]
00501a7a  MOV dword ptr [EBP + 0xfffffe34],EAX
00501a80  MOV byte ptr [EBP + -0x4],0x7
00501a84  MOV ECX,dword ptr [0x00791418]
00501a8a  PUSH ECX
00501a8b  LEA EDX,[EBP + 0xfffffebf]
00501a91  PUSH EDX
00501a92  MOV ECX,dword ptr [EBP + 0xfffffe34]
00501a98  CALL 0x004a2160
00501a9d  MOV ECX,EAX
00501a9f  CALL 0x004a1ed0
00501aa4  MOV byte ptr [EBP + 0xfffffece],AL
00501aaa  MOV byte ptr [EBP + -0x4],0x6
00501aae  LEA ECX,[EBP + 0xfffffec0]
00501ab4  CALL 0x004a20f0
00501ab9  MOV dword ptr [EBP + -0x4],0xffffffff
00501ac0  LEA ECX,[EBP + 0xfffffec4]
00501ac6  CALL 0x00484470
00501acb  MOVZX EAX,byte ptr [EBP + 0xfffffece]
00501ad2  TEST EAX,EAX
00501ad4  JZ 0x00501ade
00501ad6  FLDZ
00501ad8  FSTP double ptr [EBP + 0xffffff7c]
00501ade  MOV word ptr [EBP + 0xffffff24],0x0
00501ae7  JMP 0x00501afb
00501ae9  MOV CX,word ptr [EBP + 0xffffff24]
00501af0  ADD CX,0x1
00501af4  MOV word ptr [EBP + 0xffffff24],CX
00501afb  MOVSX ESI,word ptr [EBP + 0xffffff24]
00501b02  MOV ECX,dword ptr [0x00791364]
00501b08  CALL 0x0047f950
00501b0d  CMP ESI,EAX
00501b0f  JGE 0x00502044
00501b15  MOVSX EDX,word ptr [EBP + 0xffffff24]
00501b1c  CMP EDX,dword ptr [EBP + -0x78]
00501b1f  JNZ 0x00501b23
00501b21  JMP 0x00501ae9
00501b23  MOVSX EAX,word ptr [EBP + 0xffffff24]
00501b2a  PUSH EAX
00501b2b  MOV ECX,dword ptr [0x00791364]
00501b31  CALL 0x0047e390
00501b36  MOV ECX,EAX
00501b38  CALL 0x004c7010
00501b3d  CMP EAX,0x1
00501b40  JNZ 0x0050203f
00501b46  FLDZ
00501b48  FSTP double ptr [EBP + 0xffffff14]
00501b4e  MOV CX,word ptr [EBP + 0xc]
00501b52  PUSH ECX
00501b53  MOV DX,word ptr [EBP + 0xffffff24]
00501b5a  PUSH EDX
00501b5b  MOV ECX,dword ptr [0x007926f8]
00501b61  CALL 0x004d7900
00501b66  FSTP double ptr [EBP + 0xffffff1c]
00501b6c  MOV EAX,dword ptr [EBP + -0x78]
00501b6f  SHL EAX,0x6
00501b72  MOVSX ECX,word ptr [EBP + 0xffffff24]
00501b79  FLD double ptr [EBP + 0xffffff1c]
00501b7f  FMUL double ptr [EAX + ECX*0x8 + 0x7929e8]
00501b86  FCOMP double ptr [EBP + -0x64]
00501b89  FNSTSW AX
00501b8b  TEST AH,0x41
00501b8e  JNZ 0x00501b9c
00501b90  MOV byte ptr [EBP + 0xffffff13],0x1
00501b97  JMP 0x00501e64
00501b9c  MOVSX EDX,word ptr [EBP + 0xffffff24]
00501ba3  PUSH EDX
00501ba4  MOV ECX,dword ptr [0x00791364]
00501baa  CALL 0x0047e390
00501baf  MOV ECX,EAX
00501bb1  CALL 0x004c7050
00501bb6  MOV dword ptr [EBP + 0xffffff08],EAX
00501bbc  MOV AX,word ptr [EBP + 0xffffff08]
00501bc3  PUSH EAX
00501bc4  MOV ECX,dword ptr [0x00791364]
00501bca  ADD ECX,0x38
00501bcd  CALL 0x004f6880
00501bd2  MOV word ptr [EBP + 0xffffff00],AX
00501bd9  MOV CX,word ptr [EBP + 0xffffff08]
00501be0  PUSH ECX
00501be1  MOV ECX,dword ptr [0x00791364]
00501be7  ADD ECX,0x38
00501bea  CALL 0x004f6930
00501bef  MOV word ptr [EBP + 0xffffff04],AX
00501bf6  MOV DX,word ptr [EBP + 0xffffff08]
00501bfd  PUSH EDX
00501bfe  MOV ECX,dword ptr [0x00791364]
00501c04  ADD ECX,0x38
00501c07  CALL 0x004f6a90
00501c0c  MOVSX EAX,AX
00501c0f  MOVSX ECX,word ptr [EBP + 0xffffff00]
00501c16  SUB EAX,ECX
00501c18  MOV word ptr [EBP + 0xfffffefc],AX
00501c1f  MOV DX,word ptr [EBP + 0xffffff08]
00501c26  PUSH EDX
00501c27  MOV ECX,dword ptr [0x00791364]
00501c2d  ADD ECX,0x38
00501c30  CALL 0x004f6b20
00501c35  MOVSX EAX,AX
00501c38  MOVSX ECX,word ptr [EBP + 0xffffff04]
00501c3f  SUB EAX,ECX
00501c41  MOV word ptr [EBP + 0xffffff0c],AX
00501c48  MOVSX EDX,word ptr [EBP + 0xffffff00]
00501c4f  TEST EDX,EDX
00501c51  JGE 0x00501c6a
00501c53  PUSH 0x17f
00501c58  PUSH 0x6c0c40
00501c5d  PUSH 0x6bc25c
00501c62  CALL 0x005e9f20
00501c67  ADD ESP,0xc
00501c6a  MOVSX ECX,word ptr [EBP + 0xffffff04]
00501c71  TEST ECX,ECX
00501c73  JGE 0x00501c8c
00501c75  PUSH 0x180
00501c7a  PUSH 0x6c0c40
00501c7f  PUSH 0x6bc248
00501c84  CALL 0x005e9f20
00501c89  ADD ESP,0xc
00501c8c  MOVSX EAX,word ptr [EBP + 0xfffffefc]
00501c93  TEST EAX,EAX
00501c95  JGE 0x00501cae
00501c97  PUSH 0x181
00501c9c  PUSH 0x6c0c40
00501ca1  PUSH 0x6bc220
00501ca6  CALL 0x005e9f20
00501cab  ADD ESP,0xc
00501cae  MOVSX EDX,word ptr [EBP + 0xffffff0c]
00501cb5  TEST EDX,EDX
00501cb7  JGE 0x00501cd0
00501cb9  PUSH 0x182
00501cbe  PUSH 0x6c0c40
00501cc3  PUSH 0x6bc210
00501cc8  CALL 0x005e9f20
00501ccd  ADD ESP,0xc
00501cd0  MOV byte ptr [EBP + 0xffffff13],0x0
00501cd7  MOV ECX,dword ptr [0x00791364]
00501cdd  CALL 0x0047d6f0
00501ce2  CMP EAX,0x1
00501ce5  JNZ 0x00501db6
00501ceb  MOV ECX,dword ptr [0x007926f8]
00501cf1  CALL 0x004d6720
00501cf6  MOVSX ECX,word ptr [EBP + 0xfffffefc]
00501cfd  MOV dword ptr [EBP + 0xfffffe30],ECX
00501d03  FILD dword ptr [EBP + 0xfffffe30]
00501d09  FMULP
00501d0b  FDIV double ptr [0x006be728]
00501d11  FLD1
00501d13  FADDP
00501d15  MOV ECX,dword ptr [0x007926f8]
00501d1b  FSTP double ptr [EBP + 0xfffffe28]
00501d21  CALL 0x004d67f0
00501d26  MOVSX EDX,word ptr [EBP + 0xffffff0c]
00501d2d  MOV dword ptr [EBP + 0xfffffe24],EDX
00501d33  FILD dword ptr [EBP + 0xfffffe24]
00501d39  FMULP
00501d3b  FDIV double ptr [0x006be728]
00501d41  FADD double ptr [EBP + 0xfffffe28]
00501d47  MOV ECX,dword ptr [0x007926f8]
00501d4d  FSTP double ptr [EBP + 0xfffffe1c]
00501d53  CALL 0x004d68c0
00501d58  MOVSX EAX,word ptr [EBP + 0xffffff00]
00501d5f  MOV dword ptr [EBP + 0xfffffe18],EAX
00501d65  FILD dword ptr [EBP + 0xfffffe18]
00501d6b  FMULP
00501d6d  FDIV double ptr [0x006be728]
00501d73  FADD double ptr [EBP + 0xfffffe1c]
00501d79  MOV ECX,dword ptr [0x007926f8]
00501d7f  FSTP double ptr [EBP + 0xfffffe10]
00501d85  CALL 0x004d6990
00501d8a  MOVSX ECX,word ptr [EBP + 0xffffff04]
00501d91  MOV dword ptr [EBP + 0xfffffe0c],ECX
00501d97  FILD dword ptr [EBP + 0xfffffe0c]
00501d9d  FMULP
00501d9f  FDIV double ptr [0x006be728]
00501da5  FADD double ptr [EBP + 0xfffffe10]
00501dab  FSTP double ptr [EBP + 0xffffff14]
00501db1  JMP 0x00501e64
00501db6  MOV ECX,dword ptr [0x007926f8]
00501dbc  CALL 0x004d6720
00501dc1  MOVSX EDX,word ptr [EBP + 0xfffffefc]
00501dc8  MOV dword ptr [EBP + 0xfffffe08],EDX
00501dce  FILD dword ptr [EBP + 0xfffffe08]
00501dd4  FMULP
00501dd6  FLD1
00501dd8  FADDP
00501dda  MOV ECX,dword ptr [0x007926f8]
00501de0  FSTP double ptr [EBP + 0xfffffe00]
00501de6  CALL 0x004d67f0
00501deb  MOVSX EAX,word ptr [EBP + 0xffffff0c]
00501df2  MOV dword ptr [EBP + 0xfffffdfc],EAX
00501df8  FILD dword ptr [EBP + 0xfffffdfc]
00501dfe  FMULP
00501e00  FADD double ptr [EBP + 0xfffffe00]
00501e06  MOV ECX,dword ptr [0x007926f8]
00501e0c  FSTP double ptr [EBP + 0xfffffdf4]
00501e12  CALL 0x004d68c0
00501e17  MOVSX ECX,word ptr [EBP + 0xffffff00]
00501e1e  MOV dword ptr [EBP + 0xfffffdf0],ECX
00501e24  FILD dword ptr [EBP + 0xfffffdf0]
00501e2a  FMULP
00501e2c  FADD double ptr [EBP + 0xfffffdf4]
00501e32  MOV ECX,dword ptr [0x007926f8]
00501e38  FSTP double ptr [EBP + 0xfffffde8]
00501e3e  CALL 0x004d6990
00501e43  MOVSX EDX,word ptr [EBP + 0xffffff04]
00501e4a  MOV dword ptr [EBP + 0xfffffde4],EDX
00501e50  FILD dword ptr [EBP + 0xfffffde4]
00501e56  FMULP
00501e58  FADD double ptr [EBP + 0xfffffde8]
00501e5e  FSTP double ptr [EBP + 0xffffff14]
00501e64  MOVZX EAX,byte ptr [EBP + 0xffffff13]
00501e6b  TEST EAX,EAX
00501e6d  JZ 0x00501f4c
00501e73  FLD1
00501e75  FADD double ptr [EBP + 0xffffff7c]
00501e7b  MOV ECX,dword ptr [EBP + -0x78]
00501e7e  SHL ECX,0x5
00501e81  MOVSX EDX,word ptr [EBP + 0xffffff24]
00501e88  FILD dword ptr [ECX + EDX*0x4 + 0x792be8]
00501e8f  MOV EAX,dword ptr [EBP + -0x78]
00501e92  SHL EAX,0x5
00501e95  MOVSX ECX,word ptr [EBP + 0xffffff24]
00501e9c  MOV EDX,dword ptr [EBP + -0x78]
00501e9f  SHL EDX,0x5
00501ea2  MOVSX ESI,word ptr [EBP + 0xffffff24]
00501ea9  MOV EAX,dword ptr [EAX + ECX*0x4 + 0x792be8]
00501eb0  ADD EAX,dword ptr [EDX + ESI*0x4 + 0x792108]
00501eb7  MOV ECX,dword ptr [EBP + -0x78]
00501eba  SHL ECX,0x5
00501ebd  MOVSX EDX,word ptr [EBP + 0xffffff24]
00501ec4  ADD EAX,dword ptr [ECX + EDX*0x4 + 0x791ed8]
00501ecb  MOV dword ptr [EBP + 0xfffffde0],EAX
00501ed1  FILD dword ptr [EBP + 0xfffffde0]
00501ed7  FDIVP
00501ed9  FSUBP
00501edb  MOV EAX,dword ptr [EBP + -0x78]
00501ede  SHL EAX,0x5
00501ee1  MOVSX ECX,word ptr [EBP + 0xffffff24]
00501ee8  FILD dword ptr [EAX + ECX*0x4 + 0x792108]
00501eef  MOV EDX,dword ptr [EBP + -0x78]
00501ef2  SHL EDX,0x5
00501ef5  MOVSX EAX,word ptr [EBP + 0xffffff24]
00501efc  MOV ECX,dword ptr [EBP + -0x78]
00501eff  SHL ECX,0x5
00501f02  MOVSX ESI,word ptr [EBP + 0xffffff24]
00501f09  MOV EDX,dword ptr [EDX + EAX*0x4 + 0x792be8]
00501f10  ADD EDX,dword ptr [ECX + ESI*0x4 + 0x792108]
00501f17  MOV EAX,dword ptr [EBP + -0x78]
00501f1a  SHL EAX,0x5
00501f1d  MOVSX ECX,word ptr [EBP + 0xffffff24]
00501f24  ADD EDX,dword ptr [EAX + ECX*0x4 + 0x791ed8]
00501f2b  MOV dword ptr [EBP + 0xfffffddc],EDX
00501f31  FILD dword ptr [EBP + 0xfffffddc]
00501f37  FDIVP
00501f39  FMUL double ptr [0x006b3e40]
00501f3f  FSUBP
00501f41  FMUL double ptr [EBP + -0x6c]
00501f44  FSTP double ptr [EBP + -0x6c]
00501f47  JMP 0x0050202e
00501f4c  FLD1
00501f4e  FADD double ptr [EBP + 0xffffff7c]
00501f54  MOV EDX,dword ptr [EBP + -0x78]
00501f57  SHL EDX,0x5
00501f5a  MOVSX EAX,word ptr [EBP + 0xffffff24]
00501f61  FILD dword ptr [EDX + EAX*0x4 + 0x792be8]
00501f68  MOV ECX,dword ptr [EBP + -0x78]
00501f6b  SHL ECX,0x5
00501f6e  MOVSX EDX,word ptr [EBP + 0xffffff24]
00501f75  MOV EAX,dword ptr [EBP + -0x78]
00501f78  SHL EAX,0x5
00501f7b  MOVSX ESI,word ptr [EBP + 0xffffff24]
00501f82  MOV ECX,dword ptr [ECX + EDX*0x4 + 0x792be8]
00501f89  ADD ECX,dword ptr [EAX + ESI*0x4 + 0x792108]
00501f90  MOV EDX,dword ptr [EBP + -0x78]
00501f93  SHL EDX,0x5
00501f96  MOVSX EAX,word ptr [EBP + 0xffffff24]
00501f9d  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x791ed8]
00501fa4  MOV dword ptr [EBP + 0xfffffdd8],ECX
00501faa  FILD dword ptr [EBP + 0xfffffdd8]
00501fb0  FDIVP
00501fb2  FMUL double ptr [EBP + 0xffffff14]
00501fb8  FSUBP
00501fba  FLD double ptr [EBP + 0xffffff14]
00501fc0  FMUL double ptr [0x006b3e40]
00501fc6  MOV ECX,dword ptr [EBP + -0x78]
00501fc9  SHL ECX,0x5
00501fcc  MOVSX EDX,word ptr [EBP + 0xffffff24]
00501fd3  FILD dword ptr [ECX + EDX*0x4 + 0x792108]
00501fda  MOV EAX,dword ptr [EBP + -0x78]
00501fdd  SHL EAX,0x5
00501fe0  MOVSX ECX,word ptr [EBP + 0xffffff24]
00501fe7  MOV EDX,dword ptr [EBP + -0x78]
00501fea  SHL EDX,0x5
00501fed  MOVSX ESI,word ptr [EBP + 0xffffff24]
00501ff4  MOV EAX,dword ptr [EAX + ECX*0x4 + 0x792be8]
00501ffb  ADD EAX,dword ptr [EDX + ESI*0x4 + 0x792108]
00502002  MOV ECX,dword ptr [EBP + -0x78]
00502005  SHL ECX,0x5
00502008  MOVSX EDX,word ptr [EBP + 0xffffff24]
0050200f  ADD EAX,dword ptr [ECX + EDX*0x4 + 0x791ed8]
00502016  MOV dword ptr [EBP + 0xfffffdd4],EAX
0050201c  FILD dword ptr [EBP + 0xfffffdd4]
00502022  FDIVP
00502024  FMULP
00502026  FSUBP
00502028  FMUL double ptr [EBP + -0x6c]
0050202b  FSTP double ptr [EBP + -0x6c]
0050202e  FLDZ
00502030  FCOMP double ptr [EBP + -0x6c]
00502033  FNSTSW AX
00502035  TEST AH,0x41
00502038  JNZ 0x0050203f
0050203a  FLDZ
0050203c  FSTP double ptr [EBP + -0x6c]
0050203f  JMP 0x00501ae9
00502044  MOV EAX,dword ptr [EBP + -0x78]
00502047  FLD double ptr [EBP + -0x6c]
0050204a  FMUL double ptr [EAX*0x8 + 0x792e38]
00502051  FSTP double ptr [EBP + -0x6c]
00502054  FLD double ptr [0x006b4b00]
0050205a  FCOMP double ptr [EBP + -0x6c]
0050205d  FNSTSW AX
0050205f  TEST AH,0x5
00502062  JP 0x0050206d
00502064  FLD double ptr [0x006b4b00]
0050206a  FSTP double ptr [EBP + -0x6c]
0050206d  FLD double ptr [EBP + -0x6c]
00502070  MOV ECX,dword ptr [EBP + -0xc]
00502073  MOV dword ptr FS:[0x0],ECX
0050207a  POP ECX
0050207b  POP ESI
0050207c  MOV ESP,EBP
0050207e  POP EBP
0050207f  RET

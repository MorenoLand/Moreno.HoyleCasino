; FUN_006072c0  006072c0
006072c0  PUSH EBP
006072c1  MOV EBP,ESP
006072c3  SUB ESP,0xc
006072c6  MOV dword ptr [EBP + -0xc],ECX
006072c9  MOV EAX,dword ptr [EBP + -0xc]
006072cc  MOVZX ECX,byte ptr [EAX + 0xc]
006072d0  TEST ECX,ECX
006072d2  JNZ 0x006072d9
006072d4  JMP 0x00607567
006072d9  MOV ECX,dword ptr [0x015e55e8]
006072df  CALL 0x005f3e50
006072e4  MOV EDX,dword ptr [EBP + -0xc]
006072e7  SUB EAX,dword ptr [EDX + 0x28]
006072ea  PUSH EAX
006072eb  CALL 0x00686eba
006072f0  ADD ESP,0x4
006072f3  MOV ECX,dword ptr [EBP + -0xc]
006072f6  MOV EDX,dword ptr [ECX + 0x4]
006072f9  CMP EAX,dword ptr [EDX + 0x184]
006072ff  JGE 0x00607306
00607301  JMP 0x00607567
00607306  MOV ECX,dword ptr [0x015e55e8]
0060730c  CALL 0x005f3e50
00607311  MOV ECX,dword ptr [EBP + -0xc]
00607314  MOV dword ptr [ECX + 0x28],EAX
00607317  MOV EDX,dword ptr [EBP + -0xc]
0060731a  MOV EAX,dword ptr [EDX + 0x4]
0060731d  CMP dword ptr [EAX + 0x184],0x0
00607324  JNZ 0x00607349
00607326  MOV ECX,dword ptr [EBP + -0xc]
00607329  MOV EDX,dword ptr [ECX + 0x30]
0060732c  LEA EAX,[EDX*0x4 + 0xfffffffc]
00607333  MOV ECX,dword ptr [EBP + -0xc]
00607336  MOV dword ptr [ECX + 0x34],EAX
00607339  MOV EDX,dword ptr [EBP + -0xc]
0060733c  FLD float ptr [EDX + 0x44]
0060733f  FLD1
00607341  FSUBRP
00607343  MOV EAX,dword ptr [EBP + -0xc]
00607346  FSTP float ptr [EAX + 0x38]
00607349  MOV ECX,dword ptr [EBP + -0xc]
0060734c  FLD float ptr [ECX + 0x38]
0060734f  MOV EDX,dword ptr [EBP + -0xc]
00607352  FADD float ptr [EDX + 0x44]
00607355  MOV EAX,dword ptr [EBP + -0xc]
00607358  FSTP float ptr [EAX + 0x38]
0060735b  MOV ECX,dword ptr [EBP + -0xc]
0060735e  FLD float ptr [ECX + 0x38]
00607361  FCOMP double ptr [0x006b2c48]
00607367  FNSTSW AX
00607369  TEST AH,0x1
0060736c  JNZ 0x006073b9
0060736e  MOV EDX,dword ptr [EBP + -0xc]
00607371  MOV EAX,dword ptr [EDX + 0x34]
00607374  ADD EAX,0x4
00607377  MOV ECX,dword ptr [EBP + -0xc]
0060737a  MOV EDX,dword ptr [ECX + 0x30]
0060737d  SHL EDX,0x2
00607380  CMP EAX,EDX
00607382  JGE 0x006073a7
00607384  MOV EAX,dword ptr [EBP + -0xc]
00607387  MOV ECX,dword ptr [EAX + 0x34]
0060738a  ADD ECX,0x4
0060738d  MOV EDX,dword ptr [EBP + -0xc]
00607390  MOV dword ptr [EDX + 0x34],ECX
00607393  MOV EAX,dword ptr [EBP + -0xc]
00607396  FLD float ptr [EAX + 0x38]
00607399  FSUB double ptr [0x006b2c48]
0060739f  MOV ECX,dword ptr [EBP + -0xc]
006073a2  FSTP float ptr [ECX + 0x38]
006073a5  JMP 0x006073b9
006073a7  MOV EDX,dword ptr [EBP + -0xc]
006073aa  MOV EAX,dword ptr [EDX]
006073ac  MOV ECX,dword ptr [EBP + -0xc]
006073af  MOV EDX,dword ptr [EAX + 0x10]
006073b2  CALL EDX
006073b4  JMP 0x00607567
006073b9  MOV EAX,dword ptr [EBP + -0xc]
006073bc  FLD float ptr [EAX + 0x38]
006073bf  MOV ECX,dword ptr [EBP + -0xc]
006073c2  FMUL float ptr [ECX + 0x38]
006073c5  MOV EDX,dword ptr [EBP + -0xc]
006073c8  FSTP float ptr [EDX + 0x3c]
006073cb  MOV EAX,dword ptr [EBP + -0xc]
006073ce  FLD float ptr [EAX + 0x3c]
006073d1  MOV ECX,dword ptr [EBP + -0xc]
006073d4  FMUL float ptr [ECX + 0x38]
006073d7  MOV EDX,dword ptr [EBP + -0xc]
006073da  FSTP float ptr [EDX + 0x40]
006073dd  MOV EAX,dword ptr [EBP + -0xc]
006073e0  FLD float ptr [EAX + 0x40]
006073e3  FMUL double ptr [0x006b3740]
006073e9  MOV ECX,dword ptr [EBP + -0xc]
006073ec  FLD float ptr [ECX + 0x3c]
006073ef  FMUL double ptr [0x006b9490]
006073f5  FSUBP
006073f7  FADD double ptr [0x006b2c48]
006073fd  MOV EDX,dword ptr [EBP + -0xc]
00607400  MOV EAX,dword ptr [EDX + 0x34]
00607403  MOV ECX,dword ptr [EBP + -0xc]
00607406  MOV EDX,dword ptr [ECX + 0x2c]
00607409  FIMUL dword ptr [EDX + EAX*0x8]
0060740c  MOV EAX,dword ptr [EBP + -0xc]
0060740f  FLD float ptr [EAX + 0x40]
00607412  FMUL double ptr [0x006d7e38]
00607418  MOV ECX,dword ptr [EBP + -0xc]
0060741b  FLD float ptr [ECX + 0x3c]
0060741e  FMUL double ptr [0x006b9490]
00607424  FADDP
00607426  MOV EDX,dword ptr [EBP + -0xc]
00607429  MOV EAX,dword ptr [EDX + 0x34]
0060742c  MOV ECX,dword ptr [EBP + -0xc]
0060742f  MOV EDX,dword ptr [ECX + 0x2c]
00607432  FIMUL dword ptr [EDX + EAX*0x8 + 0x8]
00607436  FADDP
00607438  MOV EAX,dword ptr [EBP + -0xc]
0060743b  FLD float ptr [EAX + 0x3c]
0060743e  FMUL double ptr [0x006b3740]
00607444  MOV ECX,dword ptr [EBP + -0xc]
00607447  FSUBR float ptr [ECX + 0x40]
0060744a  MOV EDX,dword ptr [EBP + -0xc]
0060744d  FADD float ptr [EDX + 0x38]
00607450  MOV EAX,dword ptr [EBP + -0xc]
00607453  MOV ECX,dword ptr [EAX + 0x34]
00607456  MOV EDX,dword ptr [EBP + -0xc]
00607459  MOV EAX,dword ptr [EDX + 0x2c]
0060745c  FIMUL dword ptr [EAX + ECX*0x8 + 0x10]
00607460  FADDP
00607462  MOV ECX,dword ptr [EBP + -0xc]
00607465  FLD float ptr [ECX + 0x40]
00607468  MOV EDX,dword ptr [EBP + -0xc]
0060746b  FSUB float ptr [EDX + 0x3c]
0060746e  MOV EAX,dword ptr [EBP + -0xc]
00607471  MOV ECX,dword ptr [EAX + 0x34]
00607474  MOV EDX,dword ptr [EBP + -0xc]
00607477  MOV EAX,dword ptr [EDX + 0x2c]
0060747a  FIMUL dword ptr [EAX + ECX*0x8 + 0x18]
0060747e  FADDP
00607480  MOV ECX,dword ptr [EBP + -0xc]
00607483  FSTP float ptr [ECX + 0x18]
00607486  MOV EDX,dword ptr [EBP + -0xc]
00607489  FLD float ptr [EDX + 0x40]
0060748c  FMUL double ptr [0x006b3740]
00607492  MOV EAX,dword ptr [EBP + -0xc]
00607495  FLD float ptr [EAX + 0x3c]
00607498  FMUL double ptr [0x006b9490]
0060749e  FSUBP
006074a0  FADD double ptr [0x006b2c48]
006074a6  MOV ECX,dword ptr [EBP + -0xc]
006074a9  MOV EDX,dword ptr [ECX + 0x34]
006074ac  MOV EAX,dword ptr [EBP + -0xc]
006074af  MOV ECX,dword ptr [EAX + 0x2c]
006074b2  FIMUL dword ptr [ECX + EDX*0x8 + 0x4]
006074b6  MOV EDX,dword ptr [EBP + -0xc]
006074b9  FLD float ptr [EDX + 0x40]
006074bc  FMUL double ptr [0x006d7e38]
006074c2  MOV EAX,dword ptr [EBP + -0xc]
006074c5  FLD float ptr [EAX + 0x3c]
006074c8  FMUL double ptr [0x006b9490]
006074ce  FADDP
006074d0  MOV ECX,dword ptr [EBP + -0xc]
006074d3  MOV EDX,dword ptr [ECX + 0x34]
006074d6  MOV EAX,dword ptr [EBP + -0xc]
006074d9  MOV ECX,dword ptr [EAX + 0x2c]
006074dc  FIMUL dword ptr [ECX + EDX*0x8 + 0xc]
006074e0  FADDP
006074e2  MOV EDX,dword ptr [EBP + -0xc]
006074e5  FLD float ptr [EDX + 0x3c]
006074e8  FMUL double ptr [0x006b3740]
006074ee  MOV EAX,dword ptr [EBP + -0xc]
006074f1  FSUBR float ptr [EAX + 0x40]
006074f4  MOV ECX,dword ptr [EBP + -0xc]
006074f7  FADD float ptr [ECX + 0x38]
006074fa  MOV EDX,dword ptr [EBP + -0xc]
006074fd  MOV EAX,dword ptr [EDX + 0x34]
00607500  MOV ECX,dword ptr [EBP + -0xc]
00607503  MOV EDX,dword ptr [ECX + 0x2c]
00607506  FIMUL dword ptr [EDX + EAX*0x8 + 0x14]
0060750a  FADDP
0060750c  MOV EAX,dword ptr [EBP + -0xc]
0060750f  FLD float ptr [EAX + 0x40]
00607512  MOV ECX,dword ptr [EBP + -0xc]
00607515  FSUB float ptr [ECX + 0x3c]
00607518  MOV EDX,dword ptr [EBP + -0xc]
0060751b  MOV EAX,dword ptr [EDX + 0x34]
0060751e  MOV ECX,dword ptr [EBP + -0xc]
00607521  MOV EDX,dword ptr [ECX + 0x2c]
00607524  FIMUL dword ptr [EDX + EAX*0x8 + 0x1c]
00607528  FADDP
0060752a  MOV EAX,dword ptr [EBP + -0xc]
0060752d  FSTP float ptr [EAX + 0x1c]
00607530  MOV ECX,dword ptr [EBP + -0xc]
00607533  FLD float ptr [ECX + 0x18]
00607536  CALL 0x00686cc0
0060753b  MOV dword ptr [EBP + -0x8],EAX
0060753e  MOV EDX,dword ptr [EBP + -0xc]
00607541  FLD float ptr [EDX + 0x1c]
00607544  CALL 0x00686cc0
00607549  MOV dword ptr [EBP + -0x4],EAX
0060754c  MOV EAX,dword ptr [EBP + -0x4]
0060754f  PUSH EAX
00607550  MOV ECX,dword ptr [EBP + -0x8]
00607553  PUSH ECX
00607554  MOV EDX,dword ptr [EBP + -0xc]
00607557  MOV EAX,dword ptr [EDX + 0x4]
0060755a  MOV ECX,dword ptr [EBP + -0xc]
0060755d  MOV ECX,dword ptr [ECX + 0x4]
00607560  MOV EDX,dword ptr [EAX]
00607562  MOV EAX,dword ptr [EDX + 0x44]
00607565  CALL EAX
00607567  MOV ESP,EBP
00607569  POP EBP
0060756a  RET

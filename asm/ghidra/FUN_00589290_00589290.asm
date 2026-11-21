; FUN_00589290  00589290
00589290  PUSH EBP
00589291  MOV EBP,ESP
00589293  SUB ESP,0x29c
00589299  MOV EAX,[0x00781870]
0058929e  XOR EAX,EBP
005892a0  MOV dword ptr [EBP + -0x4],EAX
005892a3  PUSH ESI
005892a4  PUSH EDI
005892a5  MOV dword ptr [EBP + 0xfffffd98],ECX
005892ab  PUSH 0x0
005892ad  PUSH 0x0
005892af  CALL 0x0064c8a0
005892b4  ADD ESP,0x8
005892b7  MOV dword ptr [EBP + 0xfffffdb4],EAX
005892bd  MOV dword ptr [EBP + 0xfffffdb8],EDX
005892c3  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005892c9  MOV dword ptr [EBP + 0xfffffeec],EAX
005892cf  MOV ECX,dword ptr [EBP + 0xfffffdb8]
005892d5  MOV dword ptr [EBP + 0xfffffef0],ECX
005892db  MOV EDX,dword ptr [EBP + 0xfffffd98]
005892e1  MOV EAX,dword ptr [EDX + 0x3b68]
005892e7  MOV ESI,dword ptr [EAX + 0x4]
005892ea  MOV ECX,0x9
005892ef  LEA EDI,[EBP + 0xfffffdc4]
005892f5  MOVSD.REP ES:EDI,ESI
005892f7  MOVSX ECX,byte ptr [EBP + 0xfffffdc4]
005892fe  MOV dword ptr [EBP + 0xfffffd94],ECX
00589304  CMP dword ptr [EBP + 0xfffffd94],0x6
0058930b  JA 0x00589486
00589311  MOV EDX,dword ptr [EBP + 0xfffffd94]
00589317  JMP dword ptr [EDX*0x4 + 0x58a308]
0058931e  PUSH 0x1
00589320  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589326  CALL 0x005fb5e0
0058932b  MOV dword ptr [EBP + 0xfffffd90],EAX
00589331  PUSH 0x0
00589333  PUSH 0x30dfc1
00589338  MOV EAX,dword ptr [EBP + 0xfffffd90]
0058933e  MOV EDX,dword ptr [EAX]
00589340  MOV ECX,dword ptr [EBP + 0xfffffd90]
00589346  MOV EAX,dword ptr [EDX + 0xf0]
0058934c  CALL EAX
0058934e  JMP 0x00589486
00589353  PUSH 0x1
00589355  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058935b  CALL 0x005fb5e0
00589360  MOV dword ptr [EBP + 0xfffffd8c],EAX
00589366  PUSH 0x0
00589368  PUSH 0x30dfc2
0058936d  MOV ECX,dword ptr [EBP + 0xfffffd8c]
00589373  MOV EDX,dword ptr [ECX]
00589375  MOV ECX,dword ptr [EBP + 0xfffffd8c]
0058937b  MOV EAX,dword ptr [EDX + 0xf0]
00589381  CALL EAX
00589383  JMP 0x00589486
00589388  PUSH 0x1
0058938a  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589390  CALL 0x005fb5e0
00589395  MOV dword ptr [EBP + 0xfffffd88],EAX
0058939b  PUSH 0x0
0058939d  PUSH 0x30dfc3
005893a2  MOV ECX,dword ptr [EBP + 0xfffffd88]
005893a8  MOV EDX,dword ptr [ECX]
005893aa  MOV ECX,dword ptr [EBP + 0xfffffd88]
005893b0  MOV EAX,dword ptr [EDX + 0xf0]
005893b6  CALL EAX
005893b8  JMP 0x00589486
005893bd  PUSH 0x1
005893bf  MOV ECX,dword ptr [EBP + 0xfffffd98]
005893c5  CALL 0x005fb5e0
005893ca  MOV dword ptr [EBP + 0xfffffd84],EAX
005893d0  PUSH 0x0
005893d2  PUSH 0x30dfc4
005893d7  MOV ECX,dword ptr [EBP + 0xfffffd84]
005893dd  MOV EDX,dword ptr [ECX]
005893df  MOV ECX,dword ptr [EBP + 0xfffffd84]
005893e5  MOV EAX,dword ptr [EDX + 0xf0]
005893eb  CALL EAX
005893ed  JMP 0x00589486
005893f2  PUSH 0x1
005893f4  MOV ECX,dword ptr [EBP + 0xfffffd98]
005893fa  CALL 0x005fb5e0
005893ff  MOV dword ptr [EBP + 0xfffffd80],EAX
00589405  PUSH 0x0
00589407  PUSH 0x30dfc5
0058940c  MOV ECX,dword ptr [EBP + 0xfffffd80]
00589412  MOV EDX,dword ptr [ECX]
00589414  MOV ECX,dword ptr [EBP + 0xfffffd80]
0058941a  MOV EAX,dword ptr [EDX + 0xf0]
00589420  CALL EAX
00589422  JMP 0x00589486
00589424  PUSH 0x1
00589426  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058942c  CALL 0x005fb5e0
00589431  MOV dword ptr [EBP + 0xfffffd7c],EAX
00589437  PUSH 0x0
00589439  PUSH 0x30dfc6
0058943e  MOV ECX,dword ptr [EBP + 0xfffffd7c]
00589444  MOV EDX,dword ptr [ECX]
00589446  MOV ECX,dword ptr [EBP + 0xfffffd7c]
0058944c  MOV EAX,dword ptr [EDX + 0xf0]
00589452  CALL EAX
00589454  JMP 0x00589486
00589456  PUSH 0x1
00589458  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058945e  CALL 0x005fb5e0
00589463  MOV dword ptr [EBP + 0xfffffd78],EAX
00589469  PUSH 0x0
0058946b  PUSH 0x30dfc7
00589470  MOV ECX,dword ptr [EBP + 0xfffffd78]
00589476  MOV EDX,dword ptr [ECX]
00589478  MOV ECX,dword ptr [EBP + 0xfffffd78]
0058947e  MOV EAX,dword ptr [EDX + 0xf0]
00589484  CALL EAX
00589486  MOV dword ptr [EBP + 0xfffffef4],0x0
00589490  JMP 0x005894a1
00589492  MOV ECX,dword ptr [EBP + 0xfffffef4]
00589498  ADD ECX,0x1
0058949b  MOV dword ptr [EBP + 0xfffffef4],ECX
005894a1  CMP dword ptr [EBP + 0xfffffef4],0x50
005894a8  JGE 0x005894de
005894aa  MOV EDX,dword ptr [EBP + 0xfffffef4]
005894b0  MOV EAX,dword ptr [EBP + 0xfffffd98]
005894b6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1bc]
005894bd  MOV EDX,dword ptr [EBP + 0xfffffef4]
005894c3  MOV EAX,dword ptr [EBP + 0xfffffd98]
005894c9  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x1bc]
005894d0  MOV EAX,dword ptr [ECX]
005894d2  MOV ECX,EDX
005894d4  MOV EDX,dword ptr [EAX + 0xf8]
005894da  CALL EDX
005894dc  JMP 0x00589492
005894de  MOV EAX,dword ptr [EBP + 0xfffffd98]
005894e4  MOV ECX,dword ptr [EAX + 0x3c08]
005894ea  MOV EDX,dword ptr [EBP + 0xfffffd98]
005894f0  CMP dword ptr [EDX + ECX*0x4 + 0x3bf4],0x0
005894f8  JNZ 0x00589530
005894fa  PUSH 0x1
005894fc  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589502  MOV ECX,dword ptr [EAX + 0x3c08]
00589508  MOV EDX,dword ptr [EBP + 0xfffffd98]
0058950e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3be4]
00589515  ADD EAX,0x1
00589518  PUSH EAX
00589519  PUSH 0x6b38f0
0058951e  LEA ECX,[EBP + 0xfffffde8]
00589524  PUSH ECX
00589525  CALL dword ptr [0x006b2220]
0058952b  ADD ESP,0x10
0058952e  JMP 0x0058957c
00589530  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589536  MOV EAX,dword ptr [EDX + 0x3c08]
0058953c  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589542  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3bf4]
00589549  PUSH EDX
0058954a  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589550  MOV ECX,dword ptr [EAX + 0x3c08]
00589556  MOV EDX,dword ptr [EBP + 0xfffffd98]
0058955c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3be4]
00589563  ADD EAX,0x1
00589566  PUSH EAX
00589567  PUSH 0x6b38f0
0058956c  LEA ECX,[EBP + 0xfffffde8]
00589572  PUSH ECX
00589573  CALL dword ptr [0x006b2220]
00589579  ADD ESP,0x10
0058957c  LEA EDX,[EBP + 0xfffffde8]
00589582  PUSH EDX
00589583  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589589  MOV ECX,dword ptr [EAX + 0x3b84]
0058958f  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589595  MOV EAX,dword ptr [EDX + 0x3b84]
0058959b  MOV EDX,dword ptr [ECX]
0058959d  MOV ECX,EAX
0058959f  MOV EAX,dword ptr [EDX + 0xb4]
005895a5  CALL EAX
005895a7  CMP dword ptr [EBP + 0xfffffde0],0x0
005895ae  JZ 0x0058966e
005895b4  MOV ECX,dword ptr [EBP + 0xfffffde0]
005895ba  PUSH ECX
005895bb  PUSH 0x6cc13c
005895c0  LEA EDX,[EBP + 0xfffffde8]
005895c6  PUSH EDX
005895c7  CALL dword ptr [0x006b2220]
005895cd  ADD ESP,0xc
005895d0  MOVSX EAX,byte ptr [EBP + 0xfffffdc6]
005895d7  CMP EAX,0x1
005895da  JLE 0x00589643
005895dc  MOVSX ECX,byte ptr [EBP + 0xfffffdc6]
005895e3  MOV EDX,dword ptr [EBP + 0xfffffde0]
005895e9  LEA EAX,[EDX + ECX*0x1 + -0x1]
005895ed  MOV dword ptr [EBP + 0xfffffdbc],EAX
005895f3  CMP dword ptr [EBP + 0xfffffdbc],0x3e8
005895fd  JLE 0x00589611
005895ff  MOV ECX,dword ptr [EBP + 0xfffffdbc]
00589605  SUB ECX,0x3e8
0058960b  MOV dword ptr [EBP + 0xfffffdbc],ECX
00589611  MOV EDX,dword ptr [EBP + 0xfffffdbc]
00589617  PUSH EDX
00589618  PUSH 0x6ccfe8
0058961d  LEA EAX,[EBP + 0xfffffef8]
00589623  PUSH EAX
00589624  CALL dword ptr [0x006b2220]
0058962a  ADD ESP,0xc
0058962d  LEA ECX,[EBP + 0xfffffef8]
00589633  PUSH ECX
00589634  LEA EDX,[EBP + 0xfffffde8]
0058963a  PUSH EDX
0058963b  CALL 0x00686ec6
00589640  ADD ESP,0x8
00589643  LEA EAX,[EBP + 0xfffffde8]
00589649  PUSH EAX
0058964a  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589650  MOV EDX,dword ptr [ECX + 0x3b90]
00589656  MOV EAX,dword ptr [EBP + 0xfffffd98]
0058965c  MOV ECX,dword ptr [EAX + 0x3b90]
00589662  MOV EDX,dword ptr [EDX]
00589664  MOV EAX,dword ptr [EDX + 0xb4]
0058966a  CALL EAX
0058966c  JMP 0x00589695
0058966e  PUSH 0x6b27f8
00589673  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589679  MOV EDX,dword ptr [ECX + 0x3b90]
0058967f  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589685  MOV ECX,dword ptr [EAX + 0x3b90]
0058968b  MOV EDX,dword ptr [EDX]
0058968d  MOV EAX,dword ptr [EDX + 0xb4]
00589693  CALL EAX
00589695  MOVSX ECX,byte ptr [EBP + 0xfffffdc8]
0058969c  TEST ECX,ECX
0058969e  JZ 0x00589755
005896a4  MOVSX EDX,byte ptr [EBP + 0xfffffdc5]
005896ab  IMUL EDX,EDX,-0x1
005896ae  MOVSX EAX,byte ptr [EBP + 0xfffffdc6]
005896b5  IMUL EDX,EAX
005896b8  CMP dword ptr [EBP + 0xfffffde4],EDX
005896be  JLE 0x005896fb
005896c0  PUSH 0x30dfc2
005896c5  MOV ECX,dword ptr [EBP + 0xfffffd98]
005896cb  MOV ECX,dword ptr [ECX + 0x3ba0]
005896d1  CALL 0x005eaf00
005896d6  PUSH 0x69
005896d8  PUSH 0x14
005896da  MOV EDX,dword ptr [EBP + 0xfffffd98]
005896e0  MOV EAX,dword ptr [EDX + 0x3ba0]
005896e6  MOV ECX,dword ptr [EBP + 0xfffffd98]
005896ec  MOV ECX,dword ptr [ECX + 0x3ba0]
005896f2  MOV EDX,dword ptr [EAX]
005896f4  MOV EAX,dword ptr [EDX + 0x44]
005896f7  CALL EAX
005896f9  JMP 0x00589734
005896fb  PUSH 0x30dfc1
00589700  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589706  MOV ECX,dword ptr [ECX + 0x3ba0]
0058970c  CALL 0x005eaf00
00589711  PUSH 0x69
00589713  PUSH 0x14
00589715  MOV EDX,dword ptr [EBP + 0xfffffd98]
0058971b  MOV EAX,dword ptr [EDX + 0x3ba0]
00589721  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589727  MOV ECX,dword ptr [ECX + 0x3ba0]
0058972d  MOV EDX,dword ptr [EAX]
0058972f  MOV EAX,dword ptr [EDX + 0x44]
00589732  CALL EAX
00589734  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058973a  MOV EDX,dword ptr [ECX + 0x3ba0]
00589740  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589746  MOV ECX,dword ptr [EAX + 0x3ba0]
0058974c  MOV EDX,dword ptr [EDX]
0058974e  MOV EAX,dword ptr [EDX + 0x74]
00589751  CALL EAX
00589753  JMP 0x00589774
00589755  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058975b  MOV EDX,dword ptr [ECX + 0x3ba0]
00589761  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589767  MOV ECX,dword ptr [EAX + 0x3ba0]
0058976d  MOV EDX,dword ptr [EDX]
0058976f  MOV EAX,dword ptr [EDX + 0x70]
00589772  CALL EAX
00589774  MOVSX ECX,byte ptr [EBP + 0xfffffdc4]
0058977b  CMP ECX,0x3
0058977e  JG 0x0058994c
00589784  MOV dword ptr [EBP + 0xfffffef4],0x0
0058978e  JMP 0x0058979f
00589790  MOV EDX,dword ptr [EBP + 0xfffffef4]
00589796  ADD EDX,0x1
00589799  MOV dword ptr [EBP + 0xfffffef4],EDX
0058979f  CMP dword ptr [EBP + 0xfffffef4],0x14
005897a6  JGE 0x00589848
005897ac  MOV EAX,dword ptr [EBP + 0xfffffef4]
005897b2  MOVSX ECX,byte ptr [EBP + EAX*0x1 + 0xfffffdc9]
005897ba  CMP ECX,0x1
005897bd  JL 0x00589816
005897bf  MOV EDX,dword ptr [EBP + 0xfffffef4]
005897c5  MOVSX EAX,byte ptr [EBP + EDX*0x1 + 0xfffffdc9]
005897cd  CMP EAX,0x50
005897d0  JG 0x00589816
005897d2  MOV ECX,dword ptr [EBP + 0xfffffef4]
005897d8  MOVSX EDX,byte ptr [EBP + ECX*0x1 + 0xfffffdc9]
005897e0  MOV EAX,dword ptr [EBP + 0xfffffd98]
005897e6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1b8]
005897ed  MOV EDX,dword ptr [EBP + 0xfffffef4]
005897f3  MOVSX EAX,byte ptr [EBP + EDX*0x1 + 0xfffffdc9]
005897fb  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589801  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x1b8]
00589808  MOV EDX,dword ptr [ECX]
0058980a  MOV ECX,EAX
0058980c  MOV EAX,dword ptr [EDX + 0xf4]
00589812  CALL EAX
00589814  JMP 0x00589843
00589816  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058981c  MOVSX EDX,byte ptr [EBP + ECX*0x1 + 0xfffffdc9]
00589824  TEST EDX,EDX
00589826  JZ 0x00589843
00589828  XOR EAX,EAX
0058982a  JNZ 0x00589843
0058982c  PUSH 0x3ed
00589831  PUSH 0x6ccecc
00589836  PUSH 0x6b2b64
0058983b  CALL 0x005e9f20
00589840  ADD ESP,0xc
00589843  JMP 0x00589790
00589848  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058984e  CALL 0x0058a470
00589853  TEST EAX,EAX
00589855  JZ 0x00589901
0058985b  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589861  CALL 0x0058a470
00589866  CMP EAX,0xa
00589869  JGE 0x00589890
0058986b  PUSH 0x37
0058986d  PUSH 0x11
0058986f  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589875  MOV EAX,dword ptr [EDX + 0x3b8c]
0058987b  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589881  MOV ECX,dword ptr [ECX + 0x3b8c]
00589887  MOV EDX,dword ptr [EAX]
00589889  MOV EAX,dword ptr [EDX + 0x44]
0058988c  CALL EAX
0058988e  JMP 0x005898b3
00589890  PUSH 0x37
00589892  PUSH 0x7
00589894  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058989a  MOV EDX,dword ptr [ECX + 0x3b8c]
005898a0  MOV EAX,dword ptr [EBP + 0xfffffd98]
005898a6  MOV ECX,dword ptr [EAX + 0x3b8c]
005898ac  MOV EDX,dword ptr [EDX]
005898ae  MOV EAX,dword ptr [EDX + 0x44]
005898b1  CALL EAX
005898b3  MOV ECX,dword ptr [EBP + 0xfffffd98]
005898b9  CALL 0x0058a470
005898be  PUSH EAX
005898bf  PUSH 0x6b2828
005898c4  LEA ECX,[EBP + 0xfffffde8]
005898ca  PUSH ECX
005898cb  CALL dword ptr [0x006b2220]
005898d1  ADD ESP,0xc
005898d4  LEA EDX,[EBP + 0xfffffde8]
005898da  PUSH EDX
005898db  MOV EAX,dword ptr [EBP + 0xfffffd98]
005898e1  MOV ECX,dword ptr [EAX + 0x3b8c]
005898e7  MOV EDX,dword ptr [EBP + 0xfffffd98]
005898ed  MOV EAX,dword ptr [EDX + 0x3b8c]
005898f3  MOV EDX,dword ptr [ECX]
005898f5  MOV ECX,EAX
005898f7  MOV EAX,dword ptr [EDX + 0xb4]
005898fd  CALL EAX
005898ff  JMP 0x00589928
00589901  PUSH 0x6b27f8
00589906  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058990c  MOV EDX,dword ptr [ECX + 0x3b8c]
00589912  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589918  MOV ECX,dword ptr [EAX + 0x3b8c]
0058991e  MOV EDX,dword ptr [EDX]
00589920  MOV EAX,dword ptr [EDX + 0xb4]
00589926  CALL EAX
00589928  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058992e  MOV EDX,dword ptr [ECX + 0x3b9c]
00589934  MOV EAX,dword ptr [EBP + 0xfffffd98]
0058993a  MOV ECX,dword ptr [EAX + 0x3b9c]
00589940  MOV EDX,dword ptr [EDX]
00589942  MOV EAX,dword ptr [EDX + 0x70]
00589945  CALL EAX
00589947  JMP 0x00589b95
0058994c  MOV CL,byte ptr [EBP + 0xfffffdc4]
00589952  MOV byte ptr [EBP + 0xfffffd74],CL
00589958  CMP byte ptr [EBP + 0xfffffd74],0x4
0058995f  JZ 0x00589975
00589961  CMP byte ptr [EBP + 0xfffffd74],0x5
00589968  JZ 0x0058999b
0058996a  CMP byte ptr [EBP + 0xfffffd74],0x6
00589971  JZ 0x005899c1
00589973  JMP 0x005899e5
00589975  PUSH 0x2
00589977  MOV EDX,dword ptr [EBP + 0xfffffd98]
0058997d  MOV EAX,dword ptr [EDX + 0x3b9c]
00589983  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589989  MOV ECX,dword ptr [ECX + 0x3b9c]
0058998f  MOV EDX,dword ptr [EAX]
00589991  MOV EAX,dword ptr [EDX + 0xb0]
00589997  CALL EAX
00589999  JMP 0x005899e5
0058999b  PUSH 0x0
0058999d  MOV ECX,dword ptr [EBP + 0xfffffd98]
005899a3  MOV EDX,dword ptr [ECX + 0x3b9c]
005899a9  MOV EAX,dword ptr [EBP + 0xfffffd98]
005899af  MOV ECX,dword ptr [EAX + 0x3b9c]
005899b5  MOV EDX,dword ptr [EDX]
005899b7  MOV EAX,dword ptr [EDX + 0xb0]
005899bd  CALL EAX
005899bf  JMP 0x005899e5
005899c1  PUSH 0x1
005899c3  MOV ECX,dword ptr [EBP + 0xfffffd98]
005899c9  MOV EDX,dword ptr [ECX + 0x3b9c]
005899cf  MOV EAX,dword ptr [EBP + 0xfffffd98]
005899d5  MOV ECX,dword ptr [EAX + 0x3b9c]
005899db  MOV EDX,dword ptr [EDX]
005899dd  MOV EAX,dword ptr [EDX + 0xb0]
005899e3  CALL EAX
005899e5  PUSH 0x6b27f8
005899ea  MOV ECX,dword ptr [EBP + 0xfffffd98]
005899f0  MOV EDX,dword ptr [ECX + 0x3b8c]
005899f6  MOV EAX,dword ptr [EBP + 0xfffffd98]
005899fc  MOV ECX,dword ptr [EAX + 0x3b8c]
00589a02  MOV EDX,dword ptr [EDX]
00589a04  MOV EAX,dword ptr [EDX + 0xb4]
00589a0a  CALL EAX
00589a0c  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589a12  MOV EDX,dword ptr [ECX + 0x3b9c]
00589a18  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589a1e  MOV ECX,dword ptr [EAX + 0x3b9c]
00589a24  MOV EDX,dword ptr [EDX]
00589a26  MOV EAX,dword ptr [EDX + 0x74]
00589a29  CALL EAX
00589a2b  MOVSX ECX,byte ptr [EBP + 0xfffffdc4]
00589a32  CMP ECX,0x4
00589a35  JNZ 0x00589b95
00589a3b  MOV dword ptr [EBP + 0xfffffef4],0x1
00589a45  JMP 0x00589a56
00589a47  MOV EDX,dword ptr [EBP + 0xfffffef4]
00589a4d  ADD EDX,0x1
00589a50  MOV dword ptr [EBP + 0xfffffef4],EDX
00589a56  CMP dword ptr [EBP + 0xfffffef4],0xb
00589a5d  JGE 0x00589a91
00589a5f  MOV EAX,dword ptr [EBP + 0xfffffef4]
00589a65  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589a6b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1b8]
00589a72  MOV EAX,dword ptr [EBP + 0xfffffef4]
00589a78  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589a7e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1b8]
00589a85  MOV EDX,dword ptr [EDX]
00589a87  MOV EAX,dword ptr [EDX + 0xf4]
00589a8d  CALL EAX
00589a8f  JMP 0x00589a47
00589a91  MOV dword ptr [EBP + 0xfffffef4],0x47
00589a9b  JMP 0x00589aac
00589a9d  MOV ECX,dword ptr [EBP + 0xfffffef4]
00589aa3  ADD ECX,0x1
00589aa6  MOV dword ptr [EBP + 0xfffffef4],ECX
00589aac  CMP dword ptr [EBP + 0xfffffef4],0x51
00589ab3  JGE 0x00589ae9
00589ab5  MOV EDX,dword ptr [EBP + 0xfffffef4]
00589abb  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589ac1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1b8]
00589ac8  MOV EDX,dword ptr [EBP + 0xfffffef4]
00589ace  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589ad4  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x1b8]
00589adb  MOV EAX,dword ptr [ECX]
00589add  MOV ECX,EDX
00589adf  MOV EDX,dword ptr [EAX + 0xf4]
00589ae5  CALL EDX
00589ae7  JMP 0x00589a9d
00589ae9  MOV dword ptr [EBP + 0xfffffef4],0xb
00589af3  JMP 0x00589b04
00589af5  MOV EAX,dword ptr [EBP + 0xfffffef4]
00589afb  ADD EAX,0xa
00589afe  MOV dword ptr [EBP + 0xfffffef4],EAX
00589b04  CMP dword ptr [EBP + 0xfffffef4],0x3e
00589b0b  JGE 0x00589b3f
00589b0d  MOV ECX,dword ptr [EBP + 0xfffffef4]
00589b13  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589b19  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1b8]
00589b20  MOV ECX,dword ptr [EBP + 0xfffffef4]
00589b26  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589b2c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1b8]
00589b33  MOV EAX,dword ptr [EAX]
00589b35  MOV EDX,dword ptr [EAX + 0xf4]
00589b3b  CALL EDX
00589b3d  JMP 0x00589af5
00589b3f  MOV dword ptr [EBP + 0xfffffef4],0x14
00589b49  JMP 0x00589b5a
00589b4b  MOV EAX,dword ptr [EBP + 0xfffffef4]
00589b51  ADD EAX,0xa
00589b54  MOV dword ptr [EBP + 0xfffffef4],EAX
00589b5a  CMP dword ptr [EBP + 0xfffffef4],0x47
00589b61  JGE 0x00589b95
00589b63  MOV ECX,dword ptr [EBP + 0xfffffef4]
00589b69  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589b6f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1b8]
00589b76  MOV ECX,dword ptr [EBP + 0xfffffef4]
00589b7c  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589b82  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1b8]
00589b89  MOV EAX,dword ptr [EAX]
00589b8b  MOV EDX,dword ptr [EAX + 0xf4]
00589b91  CALL EDX
00589b93  JMP 0x00589b4b
00589b95  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589b9b  CALL 0x0058a470
00589ba0  CMP EAX,0x4
00589ba3  JL 0x00589c08
00589ba5  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589bab  CALL 0x0058a470
00589bb0  CMP EAX,0x6
00589bb3  JG 0x00589c08
00589bb5  MOVSX EAX,byte ptr [EBP + 0xfffffdc7]
00589bbc  TEST EAX,EAX
00589bbe  JZ 0x00589be4
00589bc0  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589bc6  MOV EDX,dword ptr [ECX + 0x310]
00589bcc  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589bd2  MOV ECX,dword ptr [EAX + 0x310]
00589bd8  MOV EDX,dword ptr [EDX]
00589bda  MOV EAX,dword ptr [EDX + 0xf4]
00589be0  CALL EAX
00589be2  JMP 0x00589c06
00589be4  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589bea  MOV EDX,dword ptr [ECX + 0x310]
00589bf0  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589bf6  MOV ECX,dword ptr [EAX + 0x310]
00589bfc  MOV EDX,dword ptr [EDX]
00589bfe  MOV EAX,dword ptr [EDX + 0xf8]
00589c04  CALL EAX
00589c06  JMP 0x00589c2a
00589c08  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589c0e  MOV EDX,dword ptr [ECX + 0x310]
00589c14  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589c1a  MOV ECX,dword ptr [EAX + 0x310]
00589c20  MOV EDX,dword ptr [EDX]
00589c22  MOV EAX,dword ptr [EDX + 0xf8]
00589c28  CALL EAX
00589c2a  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589c30  CALL 0x0058a470
00589c35  CMP EAX,0x14
00589c38  JNZ 0x00589c73
00589c3a  MOVSX ECX,byte ptr [EBP + 0xfffffdc5]
00589c41  CMP ECX,0x5
00589c44  JNZ 0x00589c5b
00589c46  PUSH 0x1
00589c48  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589c4e  MOV ECX,dword ptr [EDX + 0x31c]
00589c54  CALL 0x0058dc30
00589c59  JMP 0x00589c6e
00589c5b  PUSH 0x0
00589c5d  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589c63  MOV ECX,dword ptr [EAX + 0x31c]
00589c69  CALL 0x0058dc30
00589c6e  JMP 0x00589cfe
00589c73  MOVSX ECX,byte ptr [EBP + 0xfffffdc5]
00589c7a  MOV dword ptr [EBP + 0xfffffd70],ECX
00589c80  MOV EDX,dword ptr [EBP + 0xfffffd70]
00589c86  SUB EDX,0x1
00589c89  MOV dword ptr [EBP + 0xfffffd70],EDX
00589c8f  CMP dword ptr [EBP + 0xfffffd70],0x45
00589c96  JA 0x00589cfe
00589c98  MOV EAX,dword ptr [EBP + 0xfffffd70]
00589c9e  MOVZX ECX,byte ptr [EAX + 0x58a338]
00589ca5  JMP dword ptr [ECX*0x4 + 0x58a324]
00589cac  PUSH 0x3
00589cae  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589cb4  MOV ECX,dword ptr [EDX + 0x31c]
00589cba  CALL 0x0058dc30
00589cbf  JMP 0x00589cfe
00589cc1  PUSH 0x2
00589cc3  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589cc9  MOV ECX,dword ptr [EAX + 0x31c]
00589ccf  CALL 0x0058dc30
00589cd4  JMP 0x00589cfe
00589cd6  PUSH 0x1
00589cd8  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589cde  MOV ECX,dword ptr [ECX + 0x31c]
00589ce4  CALL 0x0058dc30
00589ce9  JMP 0x00589cfe
00589ceb  PUSH 0x0
00589ced  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589cf3  MOV ECX,dword ptr [EDX + 0x31c]
00589cf9  CALL 0x0058dc30
00589cfe  MOVSX EAX,byte ptr [EBP + 0xfffffdc5]
00589d05  PUSH EAX
00589d06  PUSH 0x6bb590
00589d0b  LEA ECX,[EBP + 0xfffffde8]
00589d11  PUSH ECX
00589d12  CALL dword ptr [0x006b2220]
00589d18  ADD ESP,0xc
00589d1b  LEA EDX,[EBP + 0xfffffde8]
00589d21  PUSH EDX
00589d22  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589d28  MOV ECX,dword ptr [EAX + 0x31c]
00589d2e  CALL 0x0058d840
00589d33  MOVSX ECX,byte ptr [EBP + 0xfffffdc6]
00589d3a  TEST ECX,ECX
00589d3c  JZ 0x00589d86
00589d3e  MOVSX EDX,byte ptr [EBP + 0xfffffdc6]
00589d45  PUSH EDX
00589d46  PUSH 0x6b2828
00589d4b  LEA EAX,[EBP + 0xfffffde8]
00589d51  PUSH EAX
00589d52  CALL dword ptr [0x006b2220]
00589d58  ADD ESP,0xc
00589d5b  LEA ECX,[EBP + 0xfffffde8]
00589d61  PUSH ECX
00589d62  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589d68  MOV EAX,dword ptr [EDX + 0x320]
00589d6e  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589d74  MOV ECX,dword ptr [ECX + 0x320]
00589d7a  MOV EDX,dword ptr [EAX]
00589d7c  MOV EAX,dword ptr [EDX + 0xb4]
00589d82  CALL EAX
00589d84  JMP 0x00589dad
00589d86  PUSH 0x6b27f8
00589d8b  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589d91  MOV EDX,dword ptr [ECX + 0x320]
00589d97  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589d9d  MOV ECX,dword ptr [EAX + 0x320]
00589da3  MOV EDX,dword ptr [EDX]
00589da5  MOV EAX,dword ptr [EDX + 0xb4]
00589dab  CALL EAX
00589dad  CMP dword ptr [EBP + 0xfffffde0],0x0
00589db4  JZ 0x00589e3f
00589dba  CMP dword ptr [EBP + 0xfffffde4],0x0
00589dc1  JL 0x00589dea
00589dc3  MOV ECX,dword ptr [EBP + 0xfffffde4]
00589dc9  PUSH ECX
00589dca  PUSH 0x6ccfcc
00589dcf  CALL 0x00630f40
00589dd4  ADD ESP,0x4
00589dd7  PUSH EAX
00589dd8  LEA EDX,[EBP + 0xfffffde8]
00589dde  PUSH EDX
00589ddf  CALL dword ptr [0x006b2220]
00589de5  ADD ESP,0xc
00589de8  JMP 0x00589e12
00589dea  MOV EAX,dword ptr [EBP + 0xfffffde4]
00589df0  IMUL EAX,EAX,-0x1
00589df3  PUSH EAX
00589df4  PUSH 0x6ccfb0
00589df9  CALL 0x00630f40
00589dfe  ADD ESP,0x4
00589e01  PUSH EAX
00589e02  LEA ECX,[EBP + 0xfffffde8]
00589e08  PUSH ECX
00589e09  CALL dword ptr [0x006b2220]
00589e0f  ADD ESP,0xc
00589e12  LEA EDX,[EBP + 0xfffffde8]
00589e18  PUSH EDX
00589e19  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589e1f  MOV ECX,dword ptr [EAX + 0x3b88]
00589e25  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589e2b  MOV EAX,dword ptr [EDX + 0x3b88]
00589e31  MOV EDX,dword ptr [ECX]
00589e33  MOV ECX,EAX
00589e35  MOV EAX,dword ptr [EDX + 0xb4]
00589e3b  CALL EAX
00589e3d  JMP 0x00589e6f
00589e3f  PUSH 0x6ccdd4
00589e44  CALL 0x00630f40
00589e49  ADD ESP,0x4
00589e4c  PUSH EAX
00589e4d  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589e53  MOV EDX,dword ptr [ECX + 0x3b88]
00589e59  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589e5f  MOV ECX,dword ptr [EAX + 0x3b88]
00589e65  MOV EDX,dword ptr [EDX]
00589e67  MOV EAX,dword ptr [EDX + 0xb4]
00589e6d  CALL EAX
00589e6f  MOVSX ECX,byte ptr [EBP + 0xfffffdc5]
00589e76  MOVSX EDX,byte ptr [EBP + 0xfffffdc6]
00589e7d  IMUL ECX,EDX
00589e80  PUSH ECX
00589e81  PUSH 0x6bb590
00589e86  LEA EAX,[EBP + 0xfffffde8]
00589e8c  PUSH EAX
00589e8d  CALL dword ptr [0x006b2220]
00589e93  ADD ESP,0xc
00589e96  LEA ECX,[EBP + 0xfffffde8]
00589e9c  PUSH ECX
00589e9d  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589ea3  MOV EAX,dword ptr [EDX + 0x3b94]
00589ea9  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589eaf  MOV ECX,dword ptr [ECX + 0x3b94]
00589eb5  MOV EDX,dword ptr [EAX]
00589eb7  MOV EAX,dword ptr [EDX + 0xb4]
00589ebd  CALL EAX
00589ebf  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589ec5  MOV ECX,dword ptr [ECX + 0x3b68]
00589ecb  CALL 0x00585eb0
00589ed0  MOVZX EDX,AL
00589ed3  TEST EDX,EDX
00589ed5  JZ 0x0058a006
00589edb  MOV dword ptr [EBP + 0xfffffef4],0x0
00589ee5  JMP 0x00589ef6
00589ee7  MOV EAX,dword ptr [EBP + 0xfffffef4]
00589eed  ADD EAX,0x1
00589ef0  MOV dword ptr [EBP + 0xfffffef4],EAX
00589ef6  CMP dword ptr [EBP + 0xfffffef4],0x50
00589efd  JGE 0x00589f31
00589eff  MOV ECX,dword ptr [EBP + 0xfffffef4]
00589f05  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589f0b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1bc]
00589f12  MOV ECX,dword ptr [EBP + 0xfffffef4]
00589f18  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589f1e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1bc]
00589f25  MOV EAX,dword ptr [EAX]
00589f27  MOV EDX,dword ptr [EAX + 0xcc]
00589f2d  CALL EDX
00589f2f  JMP 0x00589ee7
00589f31  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589f37  MOV ECX,dword ptr [EAX + 0x320]
00589f3d  CALL 0x0060c300
00589f42  PUSH 0x1
00589f44  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589f4a  CALL 0x005fb5e0
00589f4f  MOV dword ptr [EBP + 0xfffffd6c],EAX
00589f55  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00589f5b  MOV EDX,dword ptr [ECX]
00589f5d  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00589f63  MOV EAX,dword ptr [EDX + 0xcc]
00589f69  CALL EAX
00589f6b  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589f71  CALL 0x0058a470
00589f76  CMP EAX,0x4
00589f79  JL 0x00589faf
00589f7b  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589f81  CALL 0x0058a470
00589f86  CMP EAX,0x6
00589f89  JG 0x00589faf
00589f8b  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589f91  MOV EDX,dword ptr [ECX + 0x310]
00589f97  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589f9d  MOV ECX,dword ptr [EAX + 0x310]
00589fa3  MOV EDX,dword ptr [EDX]
00589fa5  MOV EAX,dword ptr [EDX + 0xcc]
00589fab  CALL EAX
00589fad  JMP 0x00589fd1
00589faf  MOV ECX,dword ptr [EBP + 0xfffffd98]
00589fb5  MOV EDX,dword ptr [ECX + 0x310]
00589fbb  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589fc1  MOV ECX,dword ptr [EAX + 0x310]
00589fc7  MOV EDX,dword ptr [EDX]
00589fc9  MOV EAX,dword ptr [EDX + 0xd0]
00589fcf  CALL EAX
00589fd1  MOVSX ECX,byte ptr [EBP + 0xfffffdc4]
00589fd8  CMP ECX,0x3
00589fdb  JG 0x00589ff0
00589fdd  MOV EDX,dword ptr [EBP + 0xfffffd98]
00589fe3  MOV ECX,dword ptr [EDX + 0x31c]
00589fe9  CALL 0x0058dce0
00589fee  JMP 0x0058a001
00589ff0  MOV EAX,dword ptr [EBP + 0xfffffd98]
00589ff6  MOV ECX,dword ptr [EAX + 0x31c]
00589ffc  CALL 0x0058def0
0058a001  JMP 0x0058a0cb
0058a006  MOV dword ptr [EBP + 0xfffffef4],0x0
0058a010  JMP 0x0058a021
0058a012  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058a018  ADD ECX,0x1
0058a01b  MOV dword ptr [EBP + 0xfffffef4],ECX
0058a021  CMP dword ptr [EBP + 0xfffffef4],0x50
0058a028  JGE 0x0058a05e
0058a02a  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058a030  MOV EAX,dword ptr [EBP + 0xfffffd98]
0058a036  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1bc]
0058a03d  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058a043  MOV EAX,dword ptr [EBP + 0xfffffd98]
0058a049  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x1bc]
0058a050  MOV EAX,dword ptr [ECX]
0058a052  MOV ECX,EDX
0058a054  MOV EDX,dword ptr [EAX + 0xd0]
0058a05a  CALL EDX
0058a05c  JMP 0x0058a012
0058a05e  MOV EAX,dword ptr [EBP + 0xfffffd98]
0058a064  MOV ECX,dword ptr [EAX + 0x320]
0058a06a  CALL 0x0060c330
0058a06f  PUSH 0x1
0058a071  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a077  CALL 0x005fb5e0
0058a07c  MOV dword ptr [EBP + 0xfffffd68],EAX
0058a082  MOV ECX,dword ptr [EBP + 0xfffffd68]
0058a088  MOV EDX,dword ptr [ECX]
0058a08a  MOV ECX,dword ptr [EBP + 0xfffffd68]
0058a090  MOV EAX,dword ptr [EDX + 0xd0]
0058a096  CALL EAX
0058a098  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a09e  MOV EDX,dword ptr [ECX + 0x310]
0058a0a4  MOV EAX,dword ptr [EBP + 0xfffffd98]
0058a0aa  MOV ECX,dword ptr [EAX + 0x310]
0058a0b0  MOV EDX,dword ptr [EDX]
0058a0b2  MOV EAX,dword ptr [EDX + 0xd0]
0058a0b8  CALL EAX
0058a0ba  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a0c0  MOV ECX,dword ptr [ECX + 0x31c]
0058a0c6  CALL 0x0058def0
0058a0cb  PUSH 0x6ccf9c
0058a0d0  CALL 0x00630f40
0058a0d5  ADD ESP,0x4
0058a0d8  PUSH EAX
0058a0d9  LEA EDX,[EBP + 0xfffffef8]
0058a0df  PUSH EDX
0058a0e0  CALL 0x00686d8e
0058a0e5  ADD ESP,0x8
0058a0e8  LEA EAX,[EBP + 0xfffffeec]
0058a0ee  PUSH EAX
0058a0ef  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a0f5  MOV EDX,dword ptr [ECX + 0x3c08]
0058a0fb  SHL EDX,0x4
0058a0fe  MOV EAX,dword ptr [EBP + 0xfffffd98]
0058a104  LEA ECX,[EAX + EDX*0x1 + 0x3ba4]
0058a10b  PUSH ECX
0058a10c  MOV ECX,dword ptr [0x007947e0]
0058a112  CALL 0x005de230
0058a117  PUSH 0x1
0058a119  PUSH 0x1
0058a11b  PUSH 0x1
0058a11d  LEA EDX,[EBP + 0xfffffde8]
0058a123  PUSH EDX
0058a124  MOV EAX,dword ptr [EBP + 0xfffffef0]
0058a12a  PUSH EAX
0058a12b  MOV ECX,dword ptr [EBP + 0xfffffeec]
0058a131  PUSH ECX
0058a132  CALL 0x0064c8d0
0058a137  ADD ESP,0x18
0058a13a  LEA EDX,[EBP + 0xfffffde8]
0058a140  PUSH EDX
0058a141  LEA EAX,[EBP + 0xfffffef8]
0058a147  PUSH EAX
0058a148  CALL 0x00686ec6
0058a14d  ADD ESP,0x8
0058a150  LEA ECX,[EBP + 0xfffffef8]
0058a156  PUSH ECX
0058a157  MOV EDX,dword ptr [EBP + 0xfffffd98]
0058a15d  MOV EAX,dword ptr [EDX + 0x3b98]
0058a163  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a169  MOV ECX,dword ptr [ECX + 0x3b98]
0058a16f  MOV EDX,dword ptr [EAX]
0058a171  MOV EAX,dword ptr [EDX + 0xb4]
0058a177  CALL EAX
0058a179  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a17f  MOV EDX,dword ptr [ECX + 0x3b98]
0058a185  MOV EAX,dword ptr [EBP + 0xfffffd98]
0058a18b  MOV ECX,dword ptr [EAX + 0x3b98]
0058a191  MOV EDX,dword ptr [EDX]
0058a193  MOV EAX,dword ptr [EDX + 0x74]
0058a196  CALL EAX
0058a198  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a19e  CALL 0x0058a380
0058a1a3  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a1a9  MOV EDX,dword ptr [ECX + 0x3b68]
0058a1af  MOV EAX,dword ptr [EDX + 0x4]
0058a1b2  PUSH EAX
0058a1b3  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a1b9  MOV ECX,dword ptr [ECX + 0x324]
0058a1bf  CALL 0x0058f530
0058a1c4  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a1ca  CALL 0x00588a80
0058a1cf  TEST EAX,EAX
0058a1d1  JNZ 0x0058a1e5
0058a1d3  PUSH 0x30dfc0
0058a1d8  MOV ECX,dword ptr [0x0162ee80]
0058a1de  CALL 0x005f2ba0
0058a1e3  JMP 0x0058a1f7
0058a1e5  PUSH 0x1
0058a1e7  PUSH 0x30dfc0
0058a1ec  MOV ECX,dword ptr [0x0162ee80]
0058a1f2  CALL 0x005f2b20
0058a1f7  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a1fd  CALL 0x0058a470
0058a202  MOV dword ptr [EBP + 0xfffffdc0],EAX
0058a208  PUSH 0x1
0058a20a  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a210  CALL 0x005fb5e0
0058a215  MOV dword ptr [EBP + 0xfffffdb0],EAX
0058a21b  MOV EDX,dword ptr [EBP + 0xfffffdb0]
0058a221  MOV EAX,dword ptr [EDX + 0x1f0]
0058a227  MOV dword ptr [EBP + 0xfffffdac],EAX
0058a22d  CMP dword ptr [EBP + 0xfffffdac],0x30dfc4
0058a237  JNZ 0x0058a242
0058a239  CMP dword ptr [EBP + 0xfffffdc0],0x14
0058a240  JNZ 0x0058a2b6
0058a242  PUSH 0x1
0058a244  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a24a  CALL 0x005fb5e0
0058a24f  MOV dword ptr [EBP + 0xfffffda8],EAX
0058a255  MOV ECX,dword ptr [EBP + 0xfffffda8]
0058a25b  MOV EDX,dword ptr [ECX + 0x1f0]
0058a261  MOV dword ptr [EBP + 0xfffffda4],EDX
0058a267  CMP dword ptr [EBP + 0xfffffda4],0x30dfc3
0058a271  JNZ 0x0058a27c
0058a273  CMP dword ptr [EBP + 0xfffffdc0],0xa
0058a27a  JNZ 0x0058a2b6
0058a27c  PUSH 0x1
0058a27e  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a284  CALL 0x005fb5e0
0058a289  MOV dword ptr [EBP + 0xfffffda0],EAX
0058a28f  MOV EAX,dword ptr [EBP + 0xfffffda0]
0058a295  MOV ECX,dword ptr [EAX + 0x1f0]
0058a29b  MOV dword ptr [EBP + 0xfffffd9c],ECX
0058a2a1  CMP dword ptr [EBP + 0xfffffd9c],0x30dfc2
0058a2ab  JNZ 0x0058a2f8
0058a2ad  CMP dword ptr [EBP + 0xfffffdc0],0x5
0058a2b4  JZ 0x0058a2f8
0058a2b6  PUSH 0x1
0058a2b8  MOV ECX,dword ptr [EBP + 0xfffffd98]
0058a2be  CALL 0x005fb5e0
0058a2c3  MOV dword ptr [EBP + 0xfffffd64],EAX
0058a2c9  PUSH 0x0
0058a2cb  PUSH 0x30dfc1
0058a2d0  MOV EDX,dword ptr [EBP + 0xfffffd64]
0058a2d6  MOV EAX,dword ptr [EDX]
0058a2d8  MOV ECX,dword ptr [EBP + 0xfffffd64]
0058a2de  MOV EDX,dword ptr [EAX + 0xf0]
0058a2e4  CALL EDX
0058a2e6  MOV EAX,dword ptr [EBP + 0xfffffd98]
0058a2ec  MOV ECX,dword ptr [EAX + 0x3b68]
0058a2f2  MOV EDX,dword ptr [ECX + 0x4]
0058a2f5  MOV byte ptr [EDX],0x0
0058a2f8  POP EDI
0058a2f9  POP ESI
0058a2fa  MOV ECX,dword ptr [EBP + -0x4]
0058a2fd  XOR ECX,EBP
0058a2ff  CALL 0x00686d72
0058a304  MOV ESP,EBP
0058a306  POP EBP
0058a307  RET

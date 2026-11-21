; FUN_005cba10  005cba10
005cba10  PUSH EBP
005cba11  MOV EBP,ESP
005cba13  SUB ESP,0x174
005cba19  MOV EAX,[0x00781870]
005cba1e  XOR EAX,EBP
005cba20  MOV dword ptr [EBP + -0x8],EAX
005cba23  MOV dword ptr [EBP + 0xfffffea4],ECX
005cba29  MOV EAX,[0x007947e4]
005cba2e  MOV EDX,dword ptr [EAX]
005cba30  MOV ECX,dword ptr [0x007947e4]
005cba36  MOV EAX,dword ptr [EDX + 0x25c]
005cba3c  CALL EAX
005cba3e  MOV dword ptr [EBP + 0xfffffef4],EAX
005cba44  CMP dword ptr [EBP + 0xfffffef4],0x0
005cba4b  JNZ 0x005cba52
005cba4d  JMP 0x005cc1bc
005cba52  MOV ECX,dword ptr [0x007947e4]
005cba58  MOV EDX,dword ptr [ECX]
005cba5a  MOV ECX,dword ptr [0x007947e4]
005cba60  MOV EAX,dword ptr [EDX + 0x2b0]
005cba66  CALL EAX
005cba68  MOV dword ptr [EBP + 0xffffff04],EAX
005cba6e  MOV ECX,dword ptr [0x007947e4]
005cba74  MOV EDX,dword ptr [ECX]
005cba76  MOV ECX,dword ptr [0x007947e4]
005cba7c  MOV EAX,dword ptr [EDX + 0x2b4]
005cba82  CALL EAX
005cba84  MOV dword ptr [EBP + -0x4],EAX
005cba87  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cba8d  MOV EDX,dword ptr [ECX + 0x4]
005cba90  MOV dword ptr [EBP + 0xffffff24],EDX
005cba96  MOV EAX,dword ptr [EBP + 0x8]
005cba99  CMP dword ptr [EAX],0x0
005cba9c  JL 0x005cbab2
005cba9e  MOV ECX,dword ptr [EBP + 0x8]
005cbaa1  CMP dword ptr [ECX],0x0
005cbaa4  JL 0x005cbab2
005cbaa6  MOV dword ptr [EBP + 0xfffffea0],0x1
005cbab0  JMP 0x005cbabc
005cbab2  MOV dword ptr [EBP + 0xfffffea0],0x0
005cbabc  MOV DL,byte ptr [EBP + 0xfffffea0]
005cbac2  MOV byte ptr [EBP + 0xfffffefb],DL
005cbac8  PUSH 0x0
005cbaca  PUSH 0x0
005cbacc  CALL 0x0064c8a0
005cbad1  ADD ESP,0x8
005cbad4  MOV dword ptr [EBP + 0xfffffeec],EAX
005cbada  MOV dword ptr [EBP + 0xfffffef0],EDX
005cbae0  MOV EAX,dword ptr [EBP + 0xfffffeec]
005cbae6  MOV dword ptr [EBP + 0xffffff08],EAX
005cbaec  MOV ECX,dword ptr [EBP + 0xfffffef0]
005cbaf2  MOV dword ptr [EBP + 0xffffff0c],ECX
005cbaf8  PUSH 0x0
005cbafa  PUSH 0x0
005cbafc  CALL 0x0064c8a0
005cbb01  ADD ESP,0x8
005cbb04  MOV dword ptr [EBP + 0xfffffee4],EAX
005cbb0a  MOV dword ptr [EBP + 0xfffffee8],EDX
005cbb10  MOV EDX,dword ptr [EBP + 0xfffffee4]
005cbb16  MOV dword ptr [EBP + 0xffffff14],EDX
005cbb1c  MOV EAX,dword ptr [EBP + 0xfffffee8]
005cbb22  MOV dword ptr [EBP + 0xffffff18],EAX
005cbb28  LEA ECX,[EBP + 0xffffff28]
005cbb2e  PUSH ECX
005cbb2f  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbb35  CALL 0x005d5ac0
005cbb3a  MOV EDX,dword ptr [EBP + 0x8]
005cbb3d  CMP dword ptr [EDX],0x0
005cbb40  JNZ 0x005cbb5f
005cbb42  MOV EAX,dword ptr [EBP + 0x8]
005cbb45  CMP dword ptr [EAX + 0x4],0x0
005cbb49  JNZ 0x005cbb5f
005cbb4b  LEA ECX,[EBP + 0xffffff1c]
005cbb51  PUSH ECX
005cbb52  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbb58  CALL 0x005d5de0
005cbb5d  JMP 0x005cbb73
005cbb5f  MOV EDX,dword ptr [EBP + 0x8]
005cbb62  MOV EAX,dword ptr [EDX]
005cbb64  MOV ECX,dword ptr [EDX + 0x4]
005cbb67  MOV dword ptr [EBP + 0xffffff1c],EAX
005cbb6d  MOV dword ptr [EBP + 0xffffff20],ECX
005cbb73  MOV EDX,dword ptr [EBP + 0xffffff24]
005cbb79  SHL EDX,0x5
005cbb7c  MOV EAX,dword ptr [EBP + 0xfffffea4]
005cbb82  LEA ECX,[EAX + EDX*0x1 + 0x48]
005cbb86  MOV EDX,dword ptr [EBP + 0xc]
005cbb89  MOV EAX,dword ptr [ECX + EDX*0x8]
005cbb8c  MOV ECX,dword ptr [ECX + EDX*0x8 + 0x4]
005cbb90  MOV dword ptr [EBP + 0xfffffefc],EAX
005cbb96  MOV dword ptr [EBP + 0xffffff00],ECX
005cbb9c  CMP dword ptr [EBP + 0xffffff1c],0x0
005cbba3  JNZ 0x005cbc24
005cbba5  CMP dword ptr [EBP + 0xffffff20],0x0
005cbbac  JNZ 0x005cbc24
005cbbae  PUSH 0x0
005cbbb0  MOV EDX,dword ptr [EBP + 0xffffff04]
005cbbb6  PUSH EDX
005cbbb7  CALL 0x0064c8a0
005cbbbc  ADD ESP,0x8
005cbbbf  MOV dword ptr [EBP + 0xfffffedc],EAX
005cbbc5  MOV dword ptr [EBP + 0xfffffee0],EDX
005cbbcb  MOV EAX,dword ptr [EBP + 0xfffffee0]
005cbbd1  PUSH EAX
005cbbd2  MOV ECX,dword ptr [EBP + 0xfffffedc]
005cbbd8  PUSH ECX
005cbbd9  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbbdf  CALL 0x005d5e10
005cbbe4  MOVZX EDX,byte ptr [EBP + 0xfffffefb]
005cbbeb  TEST EDX,EDX
005cbbed  JNZ 0x005cbc24
005cbbef  PUSH 0x0
005cbbf1  MOV EAX,dword ptr [EBP + 0xffffff04]
005cbbf7  PUSH EAX
005cbbf8  CALL 0x0064c8a0
005cbbfd  ADD ESP,0x8
005cbc00  MOV dword ptr [EBP + 0xfffffed4],EAX
005cbc06  MOV dword ptr [EBP + 0xfffffed8],EDX
005cbc0c  MOV ECX,dword ptr [EBP + 0xfffffed4]
005cbc12  MOV dword ptr [EBP + 0xffffff1c],ECX
005cbc18  MOV EDX,dword ptr [EBP + 0xfffffed8]
005cbc1e  MOV dword ptr [EBP + 0xffffff20],EDX
005cbc24  MOV EAX,dword ptr [EBP + 0xfffffefc]
005cbc2a  ADD EAX,dword ptr [EBP + 0xffffff1c]
005cbc30  MOV dword ptr [EBP + 0xffffff10],EAX
005cbc36  MOVZX ECX,byte ptr [EBP + 0xfffffefb]
005cbc3d  MOVZX EDX,byte ptr [EBP + 0x10]
005cbc41  AND ECX,EDX
005cbc43  JZ 0x005cbcb3
005cbc45  MOV EAX,dword ptr [EBP + 0xffffff10]
005cbc4b  CMP EAX,dword ptr [EBP + 0xffffff04]
005cbc51  JGE 0x005cbcb3
005cbc53  CMP dword ptr [EBP + 0xffffff20],0x0
005cbc5a  JNZ 0x005cbcb3
005cbc5c  MOV ECX,dword ptr [EBP + 0xffffff28]
005cbc62  CMP ECX,dword ptr [EBP + 0xffffff04]
005cbc68  JL 0x005cbcb3
005cbc6a  CMP dword ptr [EBP + 0xffffff1c],0x0
005cbc71  JNZ 0x005cbc7c
005cbc73  CMP dword ptr [EBP + 0xffffff20],0x0
005cbc7a  JZ 0x005cbc8e
005cbc7c  CMP dword ptr [EBP + 0xfffffefc],0x0
005cbc83  JNZ 0x005cbcb3
005cbc85  CMP dword ptr [EBP + 0xffffff00],0x0
005cbc8c  JNZ 0x005cbcb3
005cbc8e  MOV EDX,dword ptr [EBP + 0xffffff04]
005cbc94  MOV dword ptr [EBP + 0xffffff1c],EDX
005cbc9a  MOV EAX,dword ptr [EBP + 0xffffff20]
005cbca0  PUSH EAX
005cbca1  MOV ECX,dword ptr [EBP + 0xffffff1c]
005cbca7  PUSH ECX
005cbca8  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbcae  CALL 0x005d5e10
005cbcb3  MOVZX EDX,byte ptr [EBP + 0xfffffefb]
005cbcba  TEST EDX,EDX
005cbcbc  JZ 0x005cc020
005cbcc2  MOVZX EAX,byte ptr [EBP + 0x10]
005cbcc6  TEST EAX,EAX
005cbcc8  JZ 0x005cbedd
005cbcce  MOV ECX,dword ptr [EBP + 0xfffffefc]
005cbcd4  CMP ECX,dword ptr [EBP + -0x4]
005cbcd7  JNZ 0x005cbd61
005cbcdd  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbce3  CALL 0x0063aac0
005cbce8  MOV EDX,dword ptr [EAX]
005cbcea  MOV dword ptr [EBP + 0xfffffed0],EDX
005cbcf0  CMP dword ptr [EBP + 0xfffffed0],0x2
005cbcf7  JZ 0x005cbd21
005cbcf9  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbcff  CALL 0x0063aac0
005cbd04  MOV EAX,dword ptr [EAX]
005cbd06  MOV dword ptr [EBP + 0xfffffecc],EAX
005cbd0c  CMP dword ptr [EBP + 0xfffffecc],0x3
005cbd13  JZ 0x005cbd21
005cbd15  MOV dword ptr [EBP + 0xfffffe9c],0x0
005cbd1f  JMP 0x005cbd2b
005cbd21  MOV dword ptr [EBP + 0xfffffe9c],0x1
005cbd2b  MOVZX ECX,byte ptr [EBP + 0xfffffe9c]
005cbd32  TEST ECX,ECX
005cbd34  JZ 0x005cbd5c
005cbd36  PUSH 0x0
005cbd38  PUSH 0x6c3864
005cbd3d  CALL 0x00630f40
005cbd42  ADD ESP,0x4
005cbd45  PUSH EAX
005cbd46  PUSH 0x6c384c
005cbd4b  CALL 0x00630f40
005cbd50  ADD ESP,0x4
005cbd53  PUSH EAX
005cbd54  CALL 0x0062ff10
005cbd59  ADD ESP,0xc
005cbd5c  JMP 0x005cc1bc
005cbd61  MOV EDX,dword ptr [EBP + 0xffffff1c]
005cbd67  CMP EDX,dword ptr [EBP + 0xffffff28]
005cbd6d  JG 0x005cbd93
005cbd6f  MOV EAX,dword ptr [EBP + 0xffffff1c]
005cbd75  CMP EAX,dword ptr [EBP + 0xffffff28]
005cbd7b  JNZ 0x005cbe17
005cbd81  MOV ECX,dword ptr [EBP + 0xffffff20]
005cbd87  CMP ECX,dword ptr [EBP + 0xffffff2c]
005cbd8d  JLE 0x005cbe17
005cbd93  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbd99  CALL 0x0063aac0
005cbd9e  MOV EDX,dword ptr [EAX]
005cbda0  MOV dword ptr [EBP + 0xfffffec8],EDX
005cbda6  CMP dword ptr [EBP + 0xfffffec8],0x2
005cbdad  JZ 0x005cbdd7
005cbdaf  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbdb5  CALL 0x0063aac0
005cbdba  MOV EAX,dword ptr [EAX]
005cbdbc  MOV dword ptr [EBP + 0xfffffec4],EAX
005cbdc2  CMP dword ptr [EBP + 0xfffffec4],0x3
005cbdc9  JZ 0x005cbdd7
005cbdcb  MOV dword ptr [EBP + 0xfffffe98],0x0
005cbdd5  JMP 0x005cbde1
005cbdd7  MOV dword ptr [EBP + 0xfffffe98],0x1
005cbde1  MOVZX ECX,byte ptr [EBP + 0xfffffe98]
005cbde8  TEST ECX,ECX
005cbdea  JZ 0x005cbe12
005cbdec  PUSH 0x0
005cbdee  PUSH 0x6b8170
005cbdf3  CALL 0x00630f40
005cbdf8  ADD ESP,0x4
005cbdfb  PUSH EAX
005cbdfc  PUSH 0x6b814c
005cbe01  CALL 0x00630f40
005cbe06  ADD ESP,0x4
005cbe09  PUSH EAX
005cbe0a  CALL 0x0062ff10
005cbe0f  ADD ESP,0xc
005cbe12  JMP 0x005cc1bc
005cbe17  MOV EDX,dword ptr [EBP + 0xffffff1c]
005cbe1d  CMP EDX,dword ptr [EBP + 0xffffff04]
005cbe23  JGE 0x005cbed8
005cbe29  CMP dword ptr [EBP + 0xfffffefc],0x0
005cbe30  JNZ 0x005cbed8
005cbe36  MOV EAX,dword ptr [EBP + 0xffffff04]
005cbe3c  PUSH EAX
005cbe3d  PUSH 0x6d2858
005cbe42  CALL 0x00630f40
005cbe47  ADD ESP,0x4
005cbe4a  PUSH EAX
005cbe4b  LEA ECX,[EBP + 0xffffff30]
005cbe51  PUSH ECX
005cbe52  CALL dword ptr [0x006b2220]
005cbe58  ADD ESP,0xc
005cbe5b  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbe61  CALL 0x0063aac0
005cbe66  MOV EDX,dword ptr [EAX]
005cbe68  MOV dword ptr [EBP + 0xfffffec0],EDX
005cbe6e  CMP dword ptr [EBP + 0xfffffec0],0x2
005cbe75  JZ 0x005cbe9f
005cbe77  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbe7d  CALL 0x0063aac0
005cbe82  MOV EAX,dword ptr [EAX]
005cbe84  MOV dword ptr [EBP + 0xfffffebc],EAX
005cbe8a  CMP dword ptr [EBP + 0xfffffebc],0x3
005cbe91  JZ 0x005cbe9f
005cbe93  MOV dword ptr [EBP + 0xfffffe94],0x0
005cbe9d  JMP 0x005cbea9
005cbe9f  MOV dword ptr [EBP + 0xfffffe94],0x1
005cbea9  MOVZX ECX,byte ptr [EBP + 0xfffffe94]
005cbeb0  TEST ECX,ECX
005cbeb2  JZ 0x005cbed3
005cbeb4  PUSH 0x0
005cbeb6  PUSH 0x6d2844
005cbebb  CALL 0x00630f40
005cbec0  ADD ESP,0x4
005cbec3  PUSH EAX
005cbec4  LEA EDX,[EBP + 0xffffff30]
005cbeca  PUSH EDX
005cbecb  CALL 0x0062ff10
005cbed0  ADD ESP,0xc
005cbed3  JMP 0x005cc1bc
005cbed8  JMP 0x005cbf93
005cbedd  MOV EAX,dword ptr [EBP + 0xffffff1c]
005cbee3  CMP EAX,dword ptr [EBP + 0xffffff28]
005cbee9  JG 0x005cbf0f
005cbeeb  MOV ECX,dword ptr [EBP + 0xffffff1c]
005cbef1  CMP ECX,dword ptr [EBP + 0xffffff28]
005cbef7  JNZ 0x005cbf93
005cbefd  MOV EDX,dword ptr [EBP + 0xffffff20]
005cbf03  CMP EDX,dword ptr [EBP + 0xffffff2c]
005cbf09  JLE 0x005cbf93
005cbf0f  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbf15  CALL 0x0063aac0
005cbf1a  MOV EAX,dword ptr [EAX]
005cbf1c  MOV dword ptr [EBP + 0xfffffeb8],EAX
005cbf22  CMP dword ptr [EBP + 0xfffffeb8],0x2
005cbf29  JZ 0x005cbf53
005cbf2b  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cbf31  CALL 0x0063aac0
005cbf36  MOV ECX,dword ptr [EAX]
005cbf38  MOV dword ptr [EBP + 0xfffffeb4],ECX
005cbf3e  CMP dword ptr [EBP + 0xfffffeb4],0x3
005cbf45  JZ 0x005cbf53
005cbf47  MOV dword ptr [EBP + 0xfffffe90],0x0
005cbf51  JMP 0x005cbf5d
005cbf53  MOV dword ptr [EBP + 0xfffffe90],0x1
005cbf5d  MOVZX EDX,byte ptr [EBP + 0xfffffe90]
005cbf64  TEST EDX,EDX
005cbf66  JZ 0x005cbf8e
005cbf68  PUSH 0x0
005cbf6a  PUSH 0x6b8170
005cbf6f  CALL 0x00630f40
005cbf74  ADD ESP,0x4
005cbf77  PUSH EAX
005cbf78  PUSH 0x6b814c
005cbf7d  CALL 0x00630f40
005cbf82  ADD ESP,0x4
005cbf85  PUSH EAX
005cbf86  CALL 0x0062ff10
005cbf8b  ADD ESP,0xc
005cbf8e  JMP 0x005cc1bc
005cbf93  MOV EAX,dword ptr [EBP + 0xfffffefc]
005cbf99  ADD EAX,dword ptr [EBP + 0xffffff1c]
005cbf9f  CMP EAX,dword ptr [EBP + -0x4]
005cbfa2  JLE 0x005cbfb7
005cbfa4  MOVZX ECX,byte ptr [EBP + 0x10]
005cbfa8  TEST ECX,ECX
005cbfaa  JZ 0x005cbfb7
005cbfac  MOV EDX,dword ptr [EBP + -0x4]
005cbfaf  MOV dword ptr [EBP + 0xffffff08],EDX
005cbfb5  JMP 0x005cbfe6
005cbfb7  MOV EAX,dword ptr [EBP + 0xfffffefc]
005cbfbd  ADD EAX,dword ptr [EBP + 0xffffff1c]
005cbfc3  MOV dword ptr [EBP + 0xffffff08],EAX
005cbfc9  MOV ECX,dword ptr [EBP + 0xffffff00]
005cbfcf  ADD ECX,dword ptr [EBP + 0xffffff20]
005cbfd5  MOV dword ptr [EBP + 0xffffff0c],ECX
005cbfdb  LEA ECX,[EBP + 0xffffff08]
005cbfe1  CALL 0x0064c540
005cbfe6  MOV EDX,dword ptr [EBP + 0xffffff08]
005cbfec  SUB EDX,dword ptr [EBP + 0xfffffefc]
005cbff2  IMUL EDX,EDX,-0x1
005cbff5  MOV dword ptr [EBP + 0xffffff14],EDX
005cbffb  MOV EAX,dword ptr [EBP + 0xffffff0c]
005cc001  SUB EAX,dword ptr [EBP + 0xffffff00]
005cc007  IMUL EAX,EAX,-0x1
005cc00a  MOV dword ptr [EBP + 0xffffff18],EAX
005cc010  LEA ECX,[EBP + 0xffffff14]
005cc016  CALL 0x0064c540
005cc01b  JMP 0x005cc0d6
005cc020  CMP dword ptr [EBP + 0xfffffefc],0x0
005cc027  JNZ 0x005cc02e
005cc029  JMP 0x005cc1bc
005cc02e  MOV ECX,dword ptr [EBP + 0xfffffefc]
005cc034  ADD ECX,dword ptr [EBP + 0xffffff1c]
005cc03a  CMP ECX,dword ptr [EBP + 0xffffff04]
005cc040  JGE 0x005cc066
005cc042  MOV dword ptr [EBP + 0xffffff08],0x0
005cc04c  MOV EDX,dword ptr [EBP + 0xfffffefc]
005cc052  MOV dword ptr [EBP + 0xffffff14],EDX
005cc058  MOV EAX,dword ptr [EBP + 0xffffff00]
005cc05e  MOV dword ptr [EBP + 0xffffff18],EAX
005cc064  JMP 0x005cc0d6
005cc066  MOV ECX,dword ptr [EBP + 0xfffffefc]
005cc06c  ADD ECX,dword ptr [EBP + 0xffffff1c]
005cc072  MOV dword ptr [EBP + 0xffffff08],ECX
005cc078  MOV EDX,dword ptr [EBP + 0xffffff00]
005cc07e  ADD EDX,dword ptr [EBP + 0xffffff20]
005cc084  MOV dword ptr [EBP + 0xffffff0c],EDX
005cc08a  LEA ECX,[EBP + 0xffffff08]
005cc090  CALL 0x0064c540
005cc095  CMP dword ptr [EBP + 0xffffff1c],0x0
005cc09c  JGE 0x005cc0be
005cc09e  MOV EAX,dword ptr [EBP + 0xffffff1c]
005cc0a4  IMUL EAX,EAX,-0x1
005cc0a7  MOV dword ptr [EBP + 0xffffff14],EAX
005cc0ad  MOV ECX,dword ptr [EBP + 0xffffff20]
005cc0b3  IMUL ECX,ECX,-0x1
005cc0b6  MOV dword ptr [EBP + 0xffffff18],ECX
005cc0bc  JMP 0x005cc0d6
005cc0be  MOV EDX,dword ptr [EBP + 0xffffff1c]
005cc0c4  MOV dword ptr [EBP + 0xffffff14],EDX
005cc0ca  MOV EAX,dword ptr [EBP + 0xffffff20]
005cc0d0  MOV dword ptr [EBP + 0xffffff18],EAX
005cc0d6  MOV ECX,dword ptr [EBP + 0xffffff18]
005cc0dc  PUSH ECX
005cc0dd  MOV EDX,dword ptr [EBP + 0xffffff14]
005cc0e3  PUSH EDX
005cc0e4  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cc0ea  CALL 0x005d5cf0
005cc0ef  MOV EAX,dword ptr [EBP + 0xc]
005cc0f2  PUSH EAX
005cc0f3  MOV ECX,dword ptr [EBP + 0xffffff24]
005cc0f9  PUSH ECX
005cc0fa  MOV EDX,dword ptr [EBP + 0xffffff0c]
005cc100  PUSH EDX
005cc101  MOV EAX,dword ptr [EBP + 0xffffff08]
005cc107  PUSH EAX
005cc108  MOV ECX,dword ptr [EBP + 0xfffffea4]
005cc10e  MOV EDX,dword ptr [ECX]
005cc110  MOV ECX,dword ptr [EBP + 0xfffffea4]
005cc116  MOV EAX,dword ptr [EDX + 0xb8]
005cc11c  CALL EAX
005cc11e  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cc124  CALL 0x0063aac0
005cc129  MOV ECX,dword ptr [EAX]
005cc12b  MOV dword ptr [EBP + 0xfffffeb0],ECX
005cc131  CMP dword ptr [EBP + 0xfffffeb0],0x2
005cc138  JZ 0x005cc162
005cc13a  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cc140  CALL 0x0063aac0
005cc145  MOV EDX,dword ptr [EAX]
005cc147  MOV dword ptr [EBP + 0xfffffeac],EDX
005cc14d  CMP dword ptr [EBP + 0xfffffeac],0x3
005cc154  JZ 0x005cc162
005cc156  MOV dword ptr [EBP + 0xfffffe8c],0x0
005cc160  JMP 0x005cc16c
005cc162  MOV dword ptr [EBP + 0xfffffe8c],0x1
005cc16c  MOVZX EAX,byte ptr [EBP + 0xfffffe8c]
005cc173  TEST EAX,EAX
005cc175  JZ 0x005cc1bc
005cc177  MOV ECX,dword ptr [EBP + 0xfffffef4]
005cc17d  MOV DL,byte ptr [ECX + 0x4a0]
005cc183  MOV byte ptr [EBP + 0xfffffeab],DL
005cc189  MOVZX EAX,byte ptr [EBP + 0xfffffeab]
005cc190  TEST EAX,EAX
005cc192  JNZ 0x005cc1bc
005cc194  CMP dword ptr [EBP + 0xffffff14],0x0
005cc19b  JL 0x005cc1a6
005cc19d  CMP dword ptr [EBP + 0xffffff18],0x0
005cc1a4  JGE 0x005cc1bc
005cc1a6  MOV ECX,dword ptr [0x007947e4]
005cc1ac  MOV EDX,dword ptr [ECX]
005cc1ae  MOV ECX,dword ptr [0x007947e4]
005cc1b4  MOV EAX,dword ptr [EDX + 0x28c]
005cc1ba  CALL EAX
005cc1bc  MOV ECX,dword ptr [EBP + -0x8]
005cc1bf  XOR ECX,EBP
005cc1c1  CALL 0x00686d72
005cc1c6  MOV ESP,EBP
005cc1c8  POP EBP
005cc1c9  RET 0xc

; FUN_00633780  00633780
00633780  PUSH EBP
00633781  MOV EBP,ESP
00633783  PUSH -0x1
00633785  PUSH 0x6ab9ad
0063378a  MOV EAX,FS:[0x0]
00633790  PUSH EAX
00633791  SUB ESP,0xb68
00633797  MOV EAX,[0x00781870]
0063379c  XOR EAX,EBP
0063379e  MOV dword ptr [EBP + -0x10],EAX
006337a1  PUSH EAX
006337a2  LEA EAX,[EBP + -0xc]
006337a5  MOV FS:[0x0],EAX
006337ab  MOV dword ptr [EBP + 0xfffff4a8],ECX
006337b1  MOV byte ptr [EBP + 0xfffff4db],0x0
006337b8  MOV dword ptr [EBP + 0xfffffbd4],0x0
006337c2  MOV ECX,dword ptr [EBP + 0xfffff4a8]
006337c8  CALL 0x005f3bf0
006337cd  PUSH EAX
006337ce  MOV EAX,dword ptr [EBP + 0xfffff4a8]
006337d4  MOV EDX,dword ptr [EAX]
006337d6  MOV ECX,dword ptr [EBP + 0xfffff4a8]
006337dc  MOV EAX,dword ptr [EDX + 0xe0]
006337e2  CALL EAX
006337e4  MOV dword ptr [EBP + 0xfffff4a4],EAX
006337ea  MOV ECX,dword ptr [EBP + 0xfffff4a4]
006337f0  MOV EDX,dword ptr [ECX]
006337f2  MOV ECX,dword ptr [EBP + 0xfffff4a4]
006337f8  MOV EAX,dword ptr [EDX + 0xac]
006337fe  CALL EAX
00633800  MOVZX ECX,AL
00633803  TEST ECX,ECX
00633805  JNZ 0x0063380c
00633807  JMP 0x00633e7b
0063380c  PUSH 0xa
0063380e  LEA EDX,[EBP + 0xfffff4e4]
00633814  PUSH EDX
00633815  MOV ECX,dword ptr [EBP + 0xfffff4a8]
0063381b  CALL 0x00633ea0
00633820  MOVZX EAX,AL
00633823  TEST EAX,EAX
00633825  JNZ 0x0063382c
00633827  JMP 0x00633e7b
0063382c  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633832  CALL 0x005f3bf0
00633837  PUSH EAX
00633838  MOV ECX,dword ptr [EBP + 0xfffff4a8]
0063383e  MOV EDX,dword ptr [ECX]
00633840  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633846  MOV EAX,dword ptr [EDX + 0xe0]
0063384c  CALL EAX
0063384e  MOV dword ptr [EBP + 0xfffff4a0],EAX
00633854  MOV ECX,dword ptr [EBP + 0xfffff4a0]
0063385a  MOV EDX,dword ptr [ECX]
0063385c  MOV ECX,dword ptr [EBP + 0xfffff4a0]
00633862  MOV EAX,dword ptr [EDX + 0xc8]
00633868  CALL EAX
0063386a  MOV dword ptr [EBP + 0xfffffbd8],EAX
00633870  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633876  CALL 0x005f3bf0
0063387b  PUSH EAX
0063387c  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633882  MOV EDX,dword ptr [ECX]
00633884  MOV ECX,dword ptr [EBP + 0xfffff4a8]
0063388a  MOV EAX,dword ptr [EDX + 0xe0]
00633890  CALL EAX
00633892  MOV dword ptr [EBP + 0xfffff49c],EAX
00633898  MOV ECX,dword ptr [EBP + 0xfffff49c]
0063389e  MOV EDX,dword ptr [ECX]
006338a0  MOV ECX,dword ptr [EBP + 0xfffff49c]
006338a6  MOV EAX,dword ptr [EDX + 0xcc]
006338ac  CALL EAX
006338ae  MOV dword ptr [EBP + 0xfffff4dc],EAX
006338b4  MOV ECX,dword ptr [EBP + 0xfffff4dc]
006338ba  PUSH ECX
006338bb  PUSH 0x6da4e4
006338c0  LEA EDX,[EBP + 0xfffffad4]
006338c6  PUSH EDX
006338c7  CALL dword ptr [0x006b2220]
006338cd  ADD ESP,0xc
006338d0  MOV byte ptr [EBP + 0xfffffbec],0x0
006338d7  PUSH 0x3ff
006338dc  PUSH 0x0
006338de  LEA EAX,[EBP + 0xfffffbed]
006338e4  PUSH EAX
006338e5  CALL 0x00686fa2
006338ea  ADD ESP,0xc
006338ed  LEA ECX,[EBP + 0xfffffad4]
006338f3  PUSH ECX
006338f4  LEA EDX,[EBP + 0xfffffbec]
006338fa  PUSH EDX
006338fb  CALL 0x00686d8e
00633900  ADD ESP,0x8
00633903  MOV dword ptr [EBP + 0xfffffbe4],0x0
0063390d  JMP 0x0063391e
0063390f  MOV EAX,dword ptr [EBP + 0xfffffbe4]
00633915  ADD EAX,0x1
00633918  MOV dword ptr [EBP + 0xfffffbe4],EAX
0063391e  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633924  MOV EDX,dword ptr [ECX]
00633926  MOV ECX,dword ptr [EBP + 0xfffff4a8]
0063392c  MOV EAX,dword ptr [EDX + 0x10c]
00633932  CALL EAX
00633934  CMP dword ptr [EBP + 0xfffffbe4],EAX
0063393a  JGE 0x00633db7
00633940  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633946  CALL 0x005f3bf0
0063394b  PUSH EAX
0063394c  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633952  MOV EDX,dword ptr [ECX]
00633954  MOV ECX,dword ptr [EBP + 0xfffff4a8]
0063395a  MOV EAX,dword ptr [EDX + 0xe0]
00633960  CALL EAX
00633962  MOV dword ptr [EBP + 0xfffff498],EAX
00633968  MOV ECX,dword ptr [EBP + 0xfffffbe4]
0063396e  PUSH ECX
0063396f  MOV EDX,dword ptr [EBP + 0xfffff498]
00633975  MOV EAX,dword ptr [EDX]
00633977  MOV ECX,dword ptr [EBP + 0xfffff498]
0063397d  MOV EDX,dword ptr [EAX + 0xd0]
00633983  CALL EDX
00633985  MOV dword ptr [EBP + 0xfffffbe8],EAX
0063398b  CMP dword ptr [EBP + 0xfffffbe8],0x0
00633992  JGE 0x00633999
00633994  JMP 0x00633db7
00633999  MOV dword ptr [EBP + 0xfffffbe0],0x0
006339a3  JMP 0x006339b4
006339a5  MOV EAX,dword ptr [EBP + 0xfffffbe0]
006339ab  ADD EAX,0x1
006339ae  MOV dword ptr [EBP + 0xfffffbe0],EAX
006339b4  CMP dword ptr [EBP + 0xfffffbe0],0xa
006339bb  JGE 0x00633d95
006339c1  MOV ECX,dword ptr [EBP + 0xfffff4a8]
006339c7  CALL 0x005f3bf0
006339cc  PUSH EAX
006339cd  MOV ECX,dword ptr [EBP + 0xfffff4a8]
006339d3  MOV EDX,dword ptr [ECX]
006339d5  MOV ECX,dword ptr [EBP + 0xfffff4a8]
006339db  MOV EAX,dword ptr [EDX + 0xe0]
006339e1  CALL EAX
006339e3  MOV dword ptr [EBP + 0xfffff494],EAX
006339e9  MOV ECX,dword ptr [EBP + 0xfffffbe0]
006339ef  IMUL ECX,ECX,0x98
006339f5  MOV EDX,dword ptr [EBP + ECX*0x1 + 0xfffff518]
006339fc  PUSH EDX
006339fd  MOV EAX,dword ptr [EBP + 0xfffffbe8]
00633a03  PUSH EAX
00633a04  MOV ECX,dword ptr [EBP + 0xfffff494]
00633a0a  MOV EDX,dword ptr [ECX]
00633a0c  MOV ECX,dword ptr [EBP + 0xfffff494]
00633a12  MOV EAX,dword ptr [EDX + 0xd4]
00633a18  CALL EAX
00633a1a  MOVZX ECX,AL
00633a1d  TEST ECX,ECX
00633a1f  JZ 0x00633d90
00633a25  MOV dword ptr [EBP + 0xfffff4e0],0x9
00633a2f  JMP 0x00633a40
00633a31  MOV EDX,dword ptr [EBP + 0xfffff4e0]
00633a37  SUB EDX,0x1
00633a3a  MOV dword ptr [EBP + 0xfffff4e0],EDX
00633a40  MOV EAX,dword ptr [EBP + 0xfffff4e0]
00633a46  CMP EAX,dword ptr [EBP + 0xfffffbe0]
00633a4c  JLE 0x00633a88
00633a4e  PUSH 0x98
00633a53  MOV ECX,dword ptr [EBP + 0xfffff4e0]
00633a59  SUB ECX,0x1
00633a5c  IMUL ECX,ECX,0x98
00633a62  LEA EDX,[EBP + ECX*0x1 + 0xfffff4e4]
00633a69  PUSH EDX
00633a6a  MOV EAX,dword ptr [EBP + 0xfffff4e0]
00633a70  IMUL EAX,EAX,0x98
00633a76  LEA ECX,[EBP + EAX*0x1 + 0xfffff4e4]
00633a7d  PUSH ECX
00633a7e  CALL 0x00686fde
00633a83  ADD ESP,0xc
00633a86  JMP 0x00633a31
00633a88  MOV EDX,dword ptr [EBP + 0xfffffbe0]
00633a8e  IMUL EDX,EDX,0x98
00633a94  MOV EAX,dword ptr [EBP + 0xfffffbe8]
00633a9a  MOV dword ptr [EBP + EDX*0x1 + 0xfffff518],EAX
00633aa1  MOV ECX,dword ptr [EBP + 0xfffffbe4]
00633aa7  PUSH ECX
00633aa8  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633aae  CALL 0x00639070
00633ab3  PUSH EAX
00633ab4  MOV EDX,dword ptr [EBP + 0xfffffbe0]
00633aba  IMUL EDX,EDX,0x98
00633ac0  LEA EAX,[EBP + EDX*0x1 + 0xfffff4e4]
00633ac7  PUSH EAX
00633ac8  CALL 0x00686d8e
00633acd  ADD ESP,0x8
00633ad0  MOV ECX,dword ptr [EBP + 0xfffffbe0]
00633ad6  IMUL ECX,ECX,0x98
00633adc  MOV dword ptr [EBP + ECX*0x1 + 0xfffff520],0xffffffff
00633ae7  MOV EDX,dword ptr [EBP + 0xfffff4a8]
00633aed  MOV EAX,dword ptr [EDX + 0x58]
00633af0  MOV ECX,dword ptr [EBP + 0xfffffbe4]
00633af6  MOV EDX,dword ptr [EAX + ECX*0x4]
00633af9  MOV dword ptr [EBP + 0xfffff4b8],EDX
00633aff  MOV ECX,dword ptr [EBP + 0xfffff4b8]
00633b05  CALL 0x0063aac0
00633b0a  MOV EAX,dword ptr [EAX]
00633b0c  MOV dword ptr [EBP + 0xfffff4b4],EAX
00633b12  CMP dword ptr [EBP + 0xfffff4b4],0x2
00633b19  JNZ 0x00633b8f
00633b1b  MOV ECX,dword ptr [0x0162ee84]
00633b21  MOV EDX,dword ptr [ECX + 0x58]
00633b24  MOV EAX,dword ptr [EBP + 0xfffffbe4]
00633b2a  MOV ECX,dword ptr [EDX + EAX*0x4]
00633b2d  CALL 0x004842b0
00633b32  PUSH EAX
00633b33  LEA ECX,[EBP + 0xfffff4cc]
00633b39  PUSH ECX
00633b3a  MOV EDX,dword ptr [0x0162ee84]
00633b40  MOV EAX,dword ptr [EDX]
00633b42  MOV ECX,dword ptr [0x0162ee84]
00633b48  MOV EDX,dword ptr [EAX + 0x1ec]
00633b4e  CALL EDX
00633b50  MOV ECX,dword ptr [EBP + 0xfffffbe0]
00633b56  IMUL ECX,ECX,0x98
00633b5c  LEA EDX,[EBP + ECX*0x1 + 0xfffff524]
00633b63  MOV ECX,dword ptr [EAX]
00633b65  MOV dword ptr [EDX],ECX
00633b67  MOV ECX,dword ptr [EAX + 0x4]
00633b6a  MOV dword ptr [EDX + 0x4],ECX
00633b6d  MOV EAX,dword ptr [EAX + 0x8]
00633b70  MOV dword ptr [EDX + 0x8],EAX
00633b73  MOV ECX,dword ptr [EBP + 0xfffffbe0]
00633b79  IMUL ECX,ECX,0x98
00633b7f  MOV dword ptr [EBP + ECX*0x1 + 0xfffff51c],0x2
00633b8a  JMP 0x00633cce
00633b8f  MOV EDX,dword ptr [EBP + 0xfffffbe0]
00633b95  IMUL EDX,EDX,0x98
00633b9b  MOV dword ptr [EBP + EDX*0x1 + 0xfffff51c],0x3
00633ba6  CMP dword ptr [EBP + 0xfffffbd4],0x0
00633bad  JNZ 0x00633c0e
00633baf  PUSH 0xc8
00633bb4  CALL 0x00686d82
00633bb9  ADD ESP,0x4
00633bbc  MOV dword ptr [EBP + 0xfffff4c4],EAX
00633bc2  MOV dword ptr [EBP + -0x4],0x0
00633bc9  CMP dword ptr [EBP + 0xfffff4c4],0x0
00633bd0  JZ 0x00633be5
00633bd2  MOV ECX,dword ptr [EBP + 0xfffff4c4]
00633bd8  CALL 0x006640c0
00633bdd  MOV dword ptr [EBP + 0xfffff490],EAX
00633be3  JMP 0x00633bef
00633be5  MOV dword ptr [EBP + 0xfffff490],0x0
00633bef  MOV EAX,dword ptr [EBP + 0xfffff490]
00633bf5  MOV dword ptr [EBP + 0xfffff4c8],EAX
00633bfb  MOV dword ptr [EBP + -0x4],0xffffffff
00633c02  MOV ECX,dword ptr [EBP + 0xfffff4c8]
00633c08  MOV dword ptr [EBP + 0xfffffbd4],ECX
00633c0e  MOV EDX,dword ptr [EBP + 0xfffff4a8]
00633c14  MOV EAX,dword ptr [EDX + 0x58]
00633c17  MOV ECX,dword ptr [EBP + 0xfffffbe4]
00633c1d  MOV ECX,dword ptr [EAX + ECX*0x4]
00633c20  CALL 0x0057a470
00633c25  PUSH EAX
00633c26  MOV ECX,dword ptr [EBP + 0xfffffbd4]
00633c2c  CALL 0x00664300
00633c31  MOVZX EDX,AL
00633c34  TEST EDX,EDX
00633c36  JNZ 0x00633c55
00633c38  XOR EAX,EAX
00633c3a  JNZ 0x00633c53
00633c3c  PUSH 0x46c
00633c41  PUSH 0x6d9e90
00633c46  PUSH 0x6b2f58
00633c4b  CALL 0x005e9f20
00633c50  ADD ESP,0xc
00633c53  JMP 0x00633c7d
00633c55  PUSH 0x4c
00633c57  MOV EDX,dword ptr [EBP + 0xfffffbd4]
00633c5d  ADD EDX,0x10
00633c60  PUSH EDX
00633c61  MOV EAX,dword ptr [EBP + 0xfffffbe0]
00633c67  IMUL EAX,EAX,0x98
00633c6d  LEA ECX,[EBP + EAX*0x1 + 0xfffff530]
00633c74  PUSH ECX
00633c75  CALL 0x00686fde
00633c7a  ADD ESP,0xc
00633c7d  MOV EDX,dword ptr [EBP + 0xfffffbd4]
00633c83  MOV dword ptr [EBP + 0xfffff4bc],EDX
00633c89  MOV EAX,dword ptr [EBP + 0xfffff4bc]
00633c8f  MOV dword ptr [EBP + 0xfffff4c0],EAX
00633c95  CMP dword ptr [EBP + 0xfffff4c0],0x0
00633c9c  JZ 0x00633cba
00633c9e  PUSH 0x1
00633ca0  MOV ECX,dword ptr [EBP + 0xfffff4c0]
00633ca6  MOV EDX,dword ptr [ECX]
00633ca8  MOV ECX,dword ptr [EBP + 0xfffff4c0]
00633cae  MOV EAX,dword ptr [EDX]
00633cb0  CALL EAX
00633cb2  MOV dword ptr [EBP + 0xfffff48c],EAX
00633cb8  JMP 0x00633cc4
00633cba  MOV dword ptr [EBP + 0xfffff48c],0x0
00633cc4  MOV dword ptr [EBP + 0xfffffbd4],0x0
00633cce  MOV byte ptr [EBP + 0xfffff4db],0x1
00633cd5  MOV ECX,dword ptr [EBP + 0xfffffbe4]
00633cdb  MOV EDX,dword ptr [EBP + 0xfffff4a8]
00633ce1  MOV EAX,dword ptr [EBP + 0xfffffbe0]
00633ce7  MOV dword ptr [EDX + ECX*0x4 + 0x64],EAX
00633ceb  MOV ECX,dword ptr [EBP + 0xfffffbe4]
00633cf1  SUB ECX,0x1
00633cf4  MOV dword ptr [EBP + 0xfffff4e0],ECX
00633cfa  JMP 0x00633d0b
00633cfc  MOV EDX,dword ptr [EBP + 0xfffff4e0]
00633d02  SUB EDX,0x1
00633d05  MOV dword ptr [EBP + 0xfffff4e0],EDX
00633d0b  CMP dword ptr [EBP + 0xfffff4e0],0x0
00633d12  JL 0x00633d8e
00633d14  MOV EAX,dword ptr [EBP + 0xfffff4e0]
00633d1a  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633d20  CMP dword ptr [ECX + EAX*0x4 + 0x64],0x0
00633d25  JL 0x00633d89
00633d27  MOV EDX,dword ptr [EBP + 0xfffff4e0]
00633d2d  MOV EAX,dword ptr [EBP + 0xfffff4a8]
00633d33  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x64]
00633d37  CMP ECX,dword ptr [EBP + 0xfffffbe0]
00633d3d  JL 0x00633d89
00633d3f  MOV EDX,dword ptr [EBP + 0xfffff4e0]
00633d45  MOV EAX,dword ptr [EBP + 0xfffff4a8]
00633d4b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x64]
00633d4f  ADD ECX,0x1
00633d52  MOV EDX,dword ptr [EBP + 0xfffff4e0]
00633d58  MOV EAX,dword ptr [EBP + 0xfffff4a8]
00633d5e  MOV dword ptr [EAX + EDX*0x4 + 0x64],ECX
00633d62  MOV ECX,dword ptr [EBP + 0xfffff4e0]
00633d68  MOV EDX,dword ptr [EBP + 0xfffff4a8]
00633d6e  CMP dword ptr [EDX + ECX*0x4 + 0x64],0xa
00633d73  JL 0x00633d89
00633d75  MOV EAX,dword ptr [EBP + 0xfffff4e0]
00633d7b  MOV ECX,dword ptr [EBP + 0xfffff4a8]
00633d81  MOV dword ptr [ECX + EAX*0x4 + 0x64],0xffffffff
00633d89  JMP 0x00633cfc
00633d8e  JMP 0x00633d95
00633d90  JMP 0x006339a5
00633d95  CMP dword ptr [EBP + 0xfffffbe0],0xa
00633d9c  JNZ 0x00633db2
00633d9e  MOV EDX,dword ptr [EBP + 0xfffffbe4]
00633da4  MOV EAX,dword ptr [EBP + 0xfffff4a8]
00633daa  MOV dword ptr [EAX + EDX*0x4 + 0x64],0xffffffff
00633db2  JMP 0x0063390f
00633db7  MOVZX ECX,byte ptr [EBP + 0xfffff4db]
00633dbe  TEST ECX,ECX
00633dc0  JZ 0x00633e7b
00633dc6  PUSH 0x6da4f0
00633dcb  LEA EDX,[EBP + 0xfffffbec]
00633dd1  PUSH EDX
00633dd2  CALL 0x005ea9c0
00633dd7  ADD ESP,0x8
00633dda  MOV dword ptr [EBP + 0xfffffbdc],EAX
00633de0  CMP dword ptr [EBP + 0xfffffbdc],0x0
00633de7  JNZ 0x00633e06
00633de9  XOR EAX,EAX
00633deb  JNZ 0x00633e04
00633ded  PUSH 0x48d
00633df2  PUSH 0x6d9e90
00633df7  PUSH 0x6b2f58
00633dfc  CALL 0x005e9f20
00633e01  ADD ESP,0xc
00633e04  JMP 0x00633e7b
00633e06  CMP dword ptr [EBP + 0xfffffbd8],0x0
00633e0d  JLE 0x00633e31
00633e0f  PUSH 0x0
00633e11  MOV EDX,dword ptr [EBP + 0xfffffbd8]
00633e17  IMUL EDX,EDX,0x98
00633e1d  IMUL EDX,EDX,0xa
00633e20  PUSH EDX
00633e21  MOV EAX,dword ptr [EBP + 0xfffffbdc]
00633e27  PUSH EAX
00633e28  CALL dword ptr [0x006b230c]
00633e2e  ADD ESP,0xc
00633e31  MOV ECX,dword ptr [EBP + 0xfffffbdc]
00633e37  PUSH ECX
00633e38  PUSH 0xa
00633e3a  PUSH 0x98
00633e3f  LEA EDX,[EBP + 0xfffff4e4]
00633e45  PUSH EDX
00633e46  CALL dword ptr [0x006b2260]
00633e4c  ADD ESP,0x10
00633e4f  MOV EAX,dword ptr [EBP + 0xfffffbdc]
00633e55  PUSH EAX
00633e56  CALL dword ptr [0x006b2258]
00633e5c  ADD ESP,0x4
00633e5f  MOV ECX,dword ptr [0x0162ee80]
00633e65  CMP dword ptr [ECX + 0x4c],0x0
00633e69  JZ 0x00633e7b
00633e6b  PUSH 0x1
00633e6d  MOV EDX,dword ptr [0x0162ee80]
00633e73  MOV ECX,dword ptr [EDX + 0x4c]
00633e76  CALL 0x0066f610
00633e7b  MOV ECX,dword ptr [EBP + -0xc]
00633e7e  MOV dword ptr FS:[0x0],ECX
00633e85  POP ECX
00633e86  MOV ECX,dword ptr [EBP + -0x10]
00633e89  XOR ECX,EBP
00633e8b  CALL 0x00686d72
00633e90  MOV ESP,EBP
00633e92  POP EBP
00633e93  RET

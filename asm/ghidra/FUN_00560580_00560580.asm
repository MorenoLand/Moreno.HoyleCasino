; FUN_00560580  00560580
00560580  PUSH EBP
00560581  MOV EBP,ESP
00560583  PUSH -0x1
00560585  PUSH 0x6a5911
0056058a  MOV EAX,FS:[0x0]
00560590  PUSH EAX
00560591  SUB ESP,0x178
00560597  MOV EAX,[0x00781870]
0056059c  XOR EAX,EBP
0056059e  MOV dword ptr [EBP + -0x20],EAX
005605a1  PUSH EAX
005605a2  LEA EAX,[EBP + -0xc]
005605a5  MOV FS:[0x0],EAX
005605ab  MOV dword ptr [EBP + 0xfffffecc],ECX
005605b1  MOV dword ptr [EBP + -0x4c],0x6c9784
005605b8  MOV dword ptr [EBP + -0x48],0x6c9768
005605bf  MOV dword ptr [EBP + -0x44],0x6b3148
005605c6  MOV dword ptr [EBP + -0x7c],0x2a
005605cd  MOV dword ptr [EBP + -0x78],0x117
005605d4  MOV dword ptr [EBP + -0x74],0x1cc
005605db  MOV dword ptr [EBP + -0x70],0x117
005605e2  MOV dword ptr [EBP + -0x6c],0x1ae
005605e9  MOV dword ptr [EBP + -0x68],0x140
005605f0  MOV dword ptr [EBP + -0x64],0x31223e
005605f7  MOV dword ptr [EBP + -0x60],0x31223f
005605fe  MOV dword ptr [EBP + -0x5c],0x312240
00560605  MOV dword ptr [EBP + -0x58],0x312241
0056060c  MOV dword ptr [EBP + -0x54],0x312242
00560613  MOV dword ptr [EBP + -0x1c],0x0
0056061a  MOV dword ptr [EBP + -0x18],0x0
00560621  MOV dword ptr [EBP + -0x50],0x0
00560628  PUSH 0x6c9750
0056062d  CALL 0x00630f40
00560632  ADD ESP,0x4
00560635  PUSH EAX
00560636  MOV ECX,dword ptr [0x0162ee84]
0056063c  CALL 0x005f38b0
00560641  PUSH 0x312220
00560646  MOV ECX,dword ptr [0x0162ee80]
0056064c  CALL 0x005f1ad0
00560651  PUSH 0x10
00560653  CALL 0x00686d82
00560658  ADD ESP,0x4
0056065b  MOV dword ptr [EBP + 0xffffff74],EAX
00560661  MOV dword ptr [EBP + -0x4],0x0
00560668  CMP dword ptr [EBP + 0xffffff74],0x0
0056066f  JZ 0x00560684
00560671  MOV ECX,dword ptr [EBP + 0xffffff74]
00560677  CALL 0x005666e0
0056067c  MOV dword ptr [EBP + 0xfffffec8],EAX
00560682  JMP 0x0056068e
00560684  MOV dword ptr [EBP + 0xfffffec8],0x0
0056068e  MOV EAX,dword ptr [EBP + 0xfffffec8]
00560694  MOV dword ptr [EBP + 0xffffff78],EAX
0056069a  MOV dword ptr [EBP + -0x4],0xffffffff
005606a1  MOV ECX,dword ptr [EBP + 0xfffffecc]
005606a7  MOV EDX,dword ptr [EBP + 0xffffff78]
005606ad  MOV dword ptr [ECX + 0x4],EDX
005606b0  MOV EAX,dword ptr [EBP + 0xfffffecc]
005606b6  MOV ECX,dword ptr [EAX + 0x4]
005606b9  CALL 0x005667d0
005606be  MOV ECX,dword ptr [EBP + 0xfffffecc]
005606c4  MOV ECX,dword ptr [ECX + 0x4]
005606c7  CALL 0x00566a20
005606cc  PUSH 0x64
005606ce  MOV EDX,dword ptr [EBP + 0xfffffecc]
005606d4  MOV ECX,dword ptr [EDX + 0x4]
005606d7  CALL 0x00566970
005606dc  PUSH 0x184
005606e1  CALL 0x00686d82
005606e6  ADD ESP,0x4
005606e9  MOV dword ptr [EBP + 0xffffff6c],EAX
005606ef  MOV dword ptr [EBP + -0x4],0x1
005606f6  CMP dword ptr [EBP + 0xffffff6c],0x0
005606fd  JZ 0x00560712
005606ff  MOV ECX,dword ptr [EBP + 0xffffff6c]
00560705  CALL 0x005f5bf0
0056070a  MOV dword ptr [EBP + 0xfffffec4],EAX
00560710  JMP 0x0056071c
00560712  MOV dword ptr [EBP + 0xfffffec4],0x0
0056071c  MOV EAX,dword ptr [EBP + 0xfffffec4]
00560722  MOV dword ptr [EBP + 0xffffff70],EAX
00560728  MOV dword ptr [EBP + -0x4],0xffffffff
0056072f  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560735  MOV EDX,dword ptr [EBP + 0xffffff70]
0056073b  MOV dword ptr [ECX + 0x74],EDX
0056073e  PUSH -0x1
00560740  PUSH 0x3
00560742  PUSH 0x0
00560744  PUSH 0x0
00560746  PUSH 0x312239
0056074b  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560751  MOV ECX,dword ptr [EAX + 0x74]
00560754  CALL 0x005eae80
00560759  MOV ECX,dword ptr [EBP + 0xfffffecc]
0056075f  MOV EDX,dword ptr [ECX + 0x74]
00560762  MOV dword ptr [EDX + 0x178],0x3
0056076c  PUSH 0x184
00560771  CALL 0x00686d82
00560776  ADD ESP,0x4
00560779  MOV dword ptr [EBP + 0xffffff64],EAX
0056077f  MOV dword ptr [EBP + -0x4],0x2
00560786  CMP dword ptr [EBP + 0xffffff64],0x0
0056078d  JZ 0x005607a2
0056078f  MOV ECX,dword ptr [EBP + 0xffffff64]
00560795  CALL 0x005f5bf0
0056079a  MOV dword ptr [EBP + 0xfffffec0],EAX
005607a0  JMP 0x005607ac
005607a2  MOV dword ptr [EBP + 0xfffffec0],0x0
005607ac  MOV EAX,dword ptr [EBP + 0xfffffec0]
005607b2  MOV dword ptr [EBP + 0xffffff68],EAX
005607b8  MOV dword ptr [EBP + -0x4],0xffffffff
005607bf  MOV ECX,dword ptr [EBP + 0xfffffecc]
005607c5  MOV EDX,dword ptr [EBP + 0xffffff68]
005607cb  MOV dword ptr [ECX + 0x78],EDX
005607ce  PUSH -0x1
005607d0  PUSH 0x64
005607d2  PUSH 0x0
005607d4  PUSH 0x0
005607d6  PUSH 0x31223a
005607db  MOV EAX,dword ptr [EBP + 0xfffffecc]
005607e1  MOV ECX,dword ptr [EAX + 0x78]
005607e4  CALL 0x005eae80
005607e9  MOV ECX,dword ptr [EBP + 0xfffffecc]
005607ef  MOV EDX,dword ptr [ECX + 0x78]
005607f2  MOV dword ptr [EDX + 0x178],0x0
005607fc  LEA EAX,[EBP + -0x50]
005607ff  PUSH EAX
00560800  LEA ECX,[EBP + -0x18]
00560803  PUSH ECX
00560804  LEA EDX,[EBP + -0x1c]
00560807  PUSH EDX
00560808  MOV ECX,dword ptr [EBP + 0xfffffecc]
0056080e  CALL 0x005628b0
00560813  PUSH 0x178
00560818  CALL 0x00686d82
0056081d  ADD ESP,0x4
00560820  MOV dword ptr [EBP + 0xffffff5c],EAX
00560826  MOV dword ptr [EBP + -0x4],0x3
0056082d  CMP dword ptr [EBP + 0xffffff5c],0x0
00560834  JZ 0x00560849
00560836  MOV ECX,dword ptr [EBP + 0xffffff5c]
0056083c  CALL 0x005eaaf0
00560841  MOV dword ptr [EBP + 0xfffffebc],EAX
00560847  JMP 0x00560853
00560849  MOV dword ptr [EBP + 0xfffffebc],0x0
00560853  MOV EAX,dword ptr [EBP + 0xfffffebc]
00560859  MOV dword ptr [EBP + 0xffffff60],EAX
0056085f  MOV dword ptr [EBP + -0x4],0xffffffff
00560866  MOV ECX,dword ptr [EBP + 0xfffffecc]
0056086c  MOV EDX,dword ptr [EBP + 0xffffff60]
00560872  MOV dword ptr [ECX + 0x7c],EDX
00560875  PUSH -0x1
00560877  PUSH 0x258
0056087c  MOV EAX,dword ptr [EBP + -0x18]
0056087f  PUSH EAX
00560880  MOV ECX,dword ptr [EBP + -0x1c]
00560883  PUSH ECX
00560884  PUSH 0x31223b
00560889  MOV EDX,dword ptr [EBP + 0xfffffecc]
0056088f  MOV ECX,dword ptr [EDX + 0x7c]
00560892  CALL 0x005eae80
00560897  MOV EAX,dword ptr [EBP + -0x50]
0056089a  PUSH EAX
0056089b  MOV ECX,dword ptr [EBP + 0xfffffecc]
005608a1  MOV EDX,dword ptr [ECX + 0x7c]
005608a4  MOV EAX,dword ptr [EBP + 0xfffffecc]
005608aa  MOV ECX,dword ptr [EAX + 0x7c]
005608ad  MOV EDX,dword ptr [EDX]
005608af  MOV EAX,dword ptr [EDX + 0xb0]
005608b5  CALL EAX
005608b7  MOV ECX,dword ptr [EBP + -0x18]
005608ba  PUSH ECX
005608bb  MOV EDX,dword ptr [EBP + -0x1c]
005608be  PUSH EDX
005608bf  MOV EAX,dword ptr [EBP + 0xfffffecc]
005608c5  MOV ECX,dword ptr [EAX + 0x7c]
005608c8  MOV EDX,dword ptr [EBP + 0xfffffecc]
005608ce  MOV EAX,dword ptr [EDX + 0x7c]
005608d1  MOV EDX,dword ptr [ECX]
005608d3  MOV ECX,EAX
005608d5  MOV EAX,dword ptr [EDX + 0x44]
005608d8  CALL EAX
005608da  MOV ECX,dword ptr [EBP + 0xfffffecc]
005608e0  MOV EDX,dword ptr [ECX + 0x7c]
005608e3  MOV EAX,dword ptr [EBP + 0xfffffecc]
005608e9  MOV ECX,dword ptr [EAX + 0x7c]
005608ec  MOV EDX,dword ptr [EDX]
005608ee  MOV EAX,dword ptr [EDX + 0x74]
005608f1  CALL EAX
005608f3  PUSH 0x184
005608f8  CALL 0x00686d82
005608fd  ADD ESP,0x4
00560900  MOV dword ptr [EBP + 0xffffff54],EAX
00560906  MOV dword ptr [EBP + -0x4],0x4
0056090d  CMP dword ptr [EBP + 0xffffff54],0x0
00560914  JZ 0x00560929
00560916  MOV ECX,dword ptr [EBP + 0xffffff54]
0056091c  CALL 0x005f5bf0
00560921  MOV dword ptr [EBP + 0xfffffeb8],EAX
00560927  JMP 0x00560933
00560929  MOV dword ptr [EBP + 0xfffffeb8],0x0
00560933  MOV ECX,dword ptr [EBP + 0xfffffeb8]
00560939  MOV dword ptr [EBP + 0xffffff58],ECX
0056093f  MOV dword ptr [EBP + -0x4],0xffffffff
00560946  MOV EDX,dword ptr [EBP + 0xfffffecc]
0056094c  MOV EAX,dword ptr [EBP + 0xffffff58]
00560952  MOV dword ptr [EDX + 0x80],EAX
00560958  PUSH -0x1
0056095a  PUSH 0x1f4
0056095f  PUSH 0x0
00560961  PUSH 0x0
00560963  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560969  CALL 0x005616c0
0056096e  PUSH EAX
0056096f  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560975  MOV ECX,dword ptr [ECX + 0x80]
0056097b  CALL 0x005eae80
00560980  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560986  MOV EAX,dword ptr [EDX + 0x80]
0056098c  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560992  MOV ECX,dword ptr [ECX + 0x80]
00560998  MOV EDX,dword ptr [EAX]
0056099a  MOV EAX,dword ptr [EDX + 0x74]
0056099d  CALL EAX
0056099f  LEA ECX,[EBP + -0x80]
005609a2  PUSH ECX
005609a3  LEA EDX,[EBP + -0x10]
005609a6  PUSH EDX
005609a7  LEA EAX,[EBP + 0xffffff7c]
005609ad  PUSH EAX
005609ae  LEA ECX,[EBP + -0x14]
005609b1  PUSH ECX
005609b2  MOV ECX,dword ptr [EBP + 0xfffffecc]
005609b8  CALL 0x005615d0
005609bd  PUSH 0x178
005609c2  CALL 0x00686d82
005609c7  ADD ESP,0x4
005609ca  MOV dword ptr [EBP + 0xffffff4c],EAX
005609d0  MOV dword ptr [EBP + -0x4],0x5
005609d7  CMP dword ptr [EBP + 0xffffff4c],0x0
005609de  JZ 0x005609f3
005609e0  MOV ECX,dword ptr [EBP + 0xffffff4c]
005609e6  CALL 0x005eaaf0
005609eb  MOV dword ptr [EBP + 0xfffffeb4],EAX
005609f1  JMP 0x005609fd
005609f3  MOV dword ptr [EBP + 0xfffffeb4],0x0
005609fd  MOV EDX,dword ptr [EBP + 0xfffffeb4]
00560a03  MOV dword ptr [EBP + 0xffffff50],EDX
00560a09  MOV dword ptr [EBP + -0x4],0xffffffff
00560a10  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560a16  MOV ECX,dword ptr [EBP + 0xffffff50]
00560a1c  MOV dword ptr [EAX + 0x88],ECX
00560a22  PUSH -0x1
00560a24  PUSH 0x1f4
00560a29  PUSH 0x0
00560a2b  PUSH 0x0
00560a2d  MOV EDX,dword ptr [EBP + -0x14]
00560a30  PUSH EDX
00560a31  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560a37  MOV ECX,dword ptr [EAX + 0x88]
00560a3d  CALL 0x005eae80
00560a42  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560a48  MOV EDX,dword ptr [ECX + 0x88]
00560a4e  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560a54  MOV ECX,dword ptr [EAX + 0x88]
00560a5a  MOV EDX,dword ptr [EDX]
00560a5c  MOV EAX,dword ptr [EDX + 0x74]
00560a5f  CALL EAX
00560a61  MOV dword ptr [EBP + -0x38],0x0
00560a68  JMP 0x00560a73
00560a6a  MOV ECX,dword ptr [EBP + -0x38]
00560a6d  ADD ECX,0x1
00560a70  MOV dword ptr [EBP + -0x38],ECX
00560a73  CMP dword ptr [EBP + -0x38],0xb
00560a77  JGE 0x00560ba7
00560a7d  PUSH 0x24
00560a7f  CALL 0x00686d82
00560a84  ADD ESP,0x4
00560a87  MOV dword ptr [EBP + 0xffffff44],EAX
00560a8d  MOV dword ptr [EBP + -0x4],0x6
00560a94  CMP dword ptr [EBP + 0xffffff44],0x0
00560a9b  JZ 0x00560ab0
00560a9d  MOV ECX,dword ptr [EBP + 0xffffff44]
00560aa3  CALL 0x00562ac0
00560aa8  MOV dword ptr [EBP + 0xfffffeb0],EAX
00560aae  JMP 0x00560aba
00560ab0  MOV dword ptr [EBP + 0xfffffeb0],0x0
00560aba  MOV EDX,dword ptr [EBP + 0xfffffeb0]
00560ac0  MOV dword ptr [EBP + 0xffffff48],EDX
00560ac6  MOV dword ptr [EBP + -0x4],0xffffffff
00560acd  MOV EAX,dword ptr [EBP + -0x38]
00560ad0  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560ad6  MOV EDX,dword ptr [EBP + 0xffffff48]
00560adc  MOV dword ptr [ECX + EAX*0x4 + 0x8c],EDX
00560ae3  MOV EAX,dword ptr [EBP + -0x38]
00560ae6  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560aec  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8c]
00560af3  MOV EAX,dword ptr [EBP + -0x10]
00560af6  MOV dword ptr [EDX + 0x10],EAX
00560af9  MOV ECX,dword ptr [EBP + -0x38]
00560afc  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560b02  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8c]
00560b09  MOV ECX,dword ptr [EBP + 0xffffff7c]
00560b0f  MOV dword ptr [EAX + 0xc],ECX
00560b12  MOV EDX,dword ptr [EBP + -0x38]
00560b15  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560b1b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8c]
00560b22  MOV EDX,dword ptr [EBP + -0x38]
00560b25  MOV dword ptr [ECX + 0x14],EDX
00560b28  MOV EAX,dword ptr [EBP + -0x80]
00560b2b  SUB EAX,0x1
00560b2e  XOR ECX,ECX
00560b30  CMP dword ptr [EBP + -0x38],EAX
00560b33  SETLE CL
00560b36  MOV EDX,dword ptr [EBP + -0x38]
00560b39  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560b3f  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x8c]
00560b46  MOV byte ptr [EDX + 0x18],CL
00560b49  MOV EAX,dword ptr [EBP + -0x38]
00560b4c  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560b52  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8c]
00560b59  CALL 0x00562bd0
00560b5e  MOV EDX,dword ptr [EBP + -0x38]
00560b61  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560b67  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8c]
00560b6e  MOVZX EDX,byte ptr [ECX + 0x18]
00560b72  TEST EDX,EDX
00560b74  JZ 0x00560b8d
00560b76  MOV EAX,dword ptr [EBP + -0x38]
00560b79  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560b7f  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8c]
00560b86  CALL 0x00563080
00560b8b  JMP 0x00560ba2
00560b8d  MOV EDX,dword ptr [EBP + -0x38]
00560b90  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560b96  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8c]
00560b9d  CALL 0x00562ff0
00560ba2  JMP 0x00560a6a
00560ba7  PUSH 0x184
00560bac  CALL 0x00686d82
00560bb1  ADD ESP,0x4
00560bb4  MOV dword ptr [EBP + 0xffffff3c],EAX
00560bba  MOV dword ptr [EBP + -0x4],0x7
00560bc1  CMP dword ptr [EBP + 0xffffff3c],0x0
00560bc8  JZ 0x00560bdd
00560bca  MOV ECX,dword ptr [EBP + 0xffffff3c]
00560bd0  CALL 0x005f5bf0
00560bd5  MOV dword ptr [EBP + 0xfffffeac],EAX
00560bdb  JMP 0x00560be7
00560bdd  MOV dword ptr [EBP + 0xfffffeac],0x0
00560be7  MOV ECX,dword ptr [EBP + 0xfffffeac]
00560bed  MOV dword ptr [EBP + 0xffffff40],ECX
00560bf3  MOV dword ptr [EBP + -0x4],0xffffffff
00560bfa  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560c00  MOV EAX,dword ptr [EBP + 0xffffff40]
00560c06  MOV dword ptr [EDX + 0x84],EAX
00560c0c  PUSH -0x1
00560c0e  PUSH 0x1f4
00560c13  PUSH 0x0
00560c15  PUSH 0x0
00560c17  PUSH 0x31223c
00560c1c  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560c22  MOV ECX,dword ptr [ECX + 0x84]
00560c28  CALL 0x005eae80
00560c2d  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560c33  MOV EAX,dword ptr [EDX + 0x84]
00560c39  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560c3f  MOV ECX,dword ptr [ECX + 0x84]
00560c45  MOV EDX,dword ptr [EAX]
00560c47  MOV EAX,dword ptr [EDX + 0x70]
00560c4a  CALL EAX
00560c4c  MOV dword ptr [EBP + -0x38],0x0
00560c53  JMP 0x00560c5e
00560c55  MOV ECX,dword ptr [EBP + -0x38]
00560c58  ADD ECX,0x1
00560c5b  MOV dword ptr [EBP + -0x38],ECX
00560c5e  CMP dword ptr [EBP + -0x38],0x5
00560c62  JGE 0x00560d9c
00560c68  PUSH 0x1e4
00560c6d  CALL 0x00686d82
00560c72  ADD ESP,0x4
00560c75  MOV dword ptr [EBP + 0xffffff34],EAX
00560c7b  MOV dword ptr [EBP + -0x4],0x8
00560c82  CMP dword ptr [EBP + 0xffffff34],0x0
00560c89  JZ 0x00560c9e
00560c8b  MOV ECX,dword ptr [EBP + 0xffffff34]
00560c91  CALL 0x005630c0
00560c96  MOV dword ptr [EBP + 0xfffffea8],EAX
00560c9c  JMP 0x00560ca8
00560c9e  MOV dword ptr [EBP + 0xfffffea8],0x0
00560ca8  MOV EDX,dword ptr [EBP + 0xfffffea8]
00560cae  MOV dword ptr [EBP + 0xffffff38],EDX
00560cb4  MOV dword ptr [EBP + -0x4],0xffffffff
00560cbb  MOV EAX,dword ptr [EBP + -0x38]
00560cbe  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560cc4  MOV EDX,dword ptr [EBP + 0xffffff38]
00560cca  MOV dword ptr [ECX + EAX*0x4 + 0x60],EDX
00560cce  PUSH -0x1
00560cd0  PUSH 0x1
00560cd2  PUSH 0x0
00560cd4  PUSH 0x0
00560cd6  MOV EAX,dword ptr [EBP + -0x38]
00560cd9  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x64]
00560cdd  PUSH ECX
00560cde  MOV EDX,dword ptr [EBP + -0x38]
00560ce1  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560ce7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x60]
00560ceb  CALL 0x005eae80
00560cf0  MOV ECX,dword ptr [EBP + -0x38]
00560cf3  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560cf9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x60]
00560cfd  MOV ECX,dword ptr [EBP + -0x38]
00560d00  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560d06  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x60]
00560d0a  MOV EAX,dword ptr [EAX]
00560d0c  MOV EDX,dword ptr [EAX + 0x74]
00560d0f  CALL EDX
00560d11  MOV EAX,dword ptr [EBP + -0x38]
00560d14  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560d1a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x60]
00560d1e  MOV dword ptr [EBP + 0xfffffed0],EDX
00560d24  MOV EAX,dword ptr [EBP + 0xfffffed0]
00560d2a  MOV ECX,dword ptr [EBP + -0x38]
00560d2d  MOV dword ptr [EAX + 0x1dc],ECX
00560d33  MOV EDX,dword ptr [EBP + -0x38]
00560d36  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560d3c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x60]
00560d40  CALL 0x00602eb0
00560d45  XOR ECX,ECX
00560d47  CMP dword ptr [EBP + -0x38],0x4
00560d4b  SETNZ CL
00560d4e  SUB ECX,0x1
00560d51  AND ECX,0x2
00560d54  PUSH ECX
00560d55  MOV EDX,dword ptr [EBP + -0x38]
00560d58  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560d5e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x60]
00560d62  MOV EDX,dword ptr [EBP + -0x38]
00560d65  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560d6b  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x60]
00560d6f  MOV EAX,dword ptr [ECX]
00560d71  MOV ECX,EDX
00560d73  MOV EDX,dword ptr [EAX + 0xb0]
00560d79  CALL EDX
00560d7b  XOR EAX,EAX
00560d7d  CMP dword ptr [EBP + -0x38],0x4
00560d81  SETZ AL
00560d84  MOV ECX,dword ptr [EBP + -0x38]
00560d87  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560d8d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x60]
00560d91  MOV byte ptr [ECX + 0x1e0],AL
00560d97  JMP 0x00560c55
00560d9c  PUSH 0x178
00560da1  CALL 0x00686d82
00560da6  ADD ESP,0x4
00560da9  MOV dword ptr [EBP + 0xffffff2c],EAX
00560daf  MOV dword ptr [EBP + -0x4],0x9
00560db6  CMP dword ptr [EBP + 0xffffff2c],0x0
00560dbd  JZ 0x00560dd2
00560dbf  MOV ECX,dword ptr [EBP + 0xffffff2c]
00560dc5  CALL 0x005eaaf0
00560dca  MOV dword ptr [EBP + 0xfffffea4],EAX
00560dd0  JMP 0x00560ddc
00560dd2  MOV dword ptr [EBP + 0xfffffea4],0x0
00560ddc  MOV EDX,dword ptr [EBP + 0xfffffea4]
00560de2  MOV dword ptr [EBP + 0xffffff30],EDX
00560de8  MOV dword ptr [EBP + -0x4],0xffffffff
00560def  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560df5  MOV ECX,dword ptr [EBP + 0xffffff30]
00560dfb  MOV dword ptr [EAX + 0xc8],ECX
00560e01  PUSH -0x1
00560e03  PUSH 0x258
00560e08  PUSH 0x0
00560e0a  PUSH 0x0
00560e0c  PUSH 0x312259
00560e11  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560e17  MOV ECX,dword ptr [EDX + 0xc8]
00560e1d  CALL 0x005eae80
00560e22  PUSH 0x40
00560e24  CALL 0x00686d82
00560e29  ADD ESP,0x4
00560e2c  MOV dword ptr [EBP + 0xffffff24],EAX
00560e32  MOV dword ptr [EBP + -0x4],0xa
00560e39  CMP dword ptr [EBP + 0xffffff24],0x0
00560e40  JZ 0x00560e55
00560e42  MOV ECX,dword ptr [EBP + 0xffffff24]
00560e48  CALL 0x005655d0
00560e4d  MOV dword ptr [EBP + 0xfffffea0],EAX
00560e53  JMP 0x00560e5f
00560e55  MOV dword ptr [EBP + 0xfffffea0],0x0
00560e5f  MOV EAX,dword ptr [EBP + 0xfffffea0]
00560e65  MOV dword ptr [EBP + 0xffffff28],EAX
00560e6b  MOV dword ptr [EBP + -0x4],0xffffffff
00560e72  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560e78  MOV EDX,dword ptr [EBP + 0xffffff28]
00560e7e  MOV dword ptr [ECX + 0xcc],EDX
00560e84  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560e8a  MOV ECX,dword ptr [EAX + 0xcc]
00560e90  CALL 0x005656f0
00560e95  PUSH 0x4
00560e97  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560e9d  MOV ECX,dword ptr [ECX + 0xcc]
00560ea3  CALL 0x00565a50
00560ea8  PUSH 0x0
00560eaa  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560eb0  MOV ECX,dword ptr [EDX + 0xcc]
00560eb6  CALL 0x005664c0
00560ebb  PUSH 0x178
00560ec0  CALL 0x00686d82
00560ec5  ADD ESP,0x4
00560ec8  MOV dword ptr [EBP + 0xffffff1c],EAX
00560ece  MOV dword ptr [EBP + -0x4],0xb
00560ed5  CMP dword ptr [EBP + 0xffffff1c],0x0
00560edc  JZ 0x00560ef1
00560ede  MOV ECX,dword ptr [EBP + 0xffffff1c]
00560ee4  CALL 0x005eaaf0
00560ee9  MOV dword ptr [EBP + 0xfffffe9c],EAX
00560eef  JMP 0x00560efb
00560ef1  MOV dword ptr [EBP + 0xfffffe9c],0x0
00560efb  MOV EAX,dword ptr [EBP + 0xfffffe9c]
00560f01  MOV dword ptr [EBP + 0xffffff20],EAX
00560f07  MOV dword ptr [EBP + -0x4],0xffffffff
00560f0e  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560f14  MOV EDX,dword ptr [EBP + 0xffffff20]
00560f1a  MOV dword ptr [ECX + 0xd0],EDX
00560f20  PUSH -0x1
00560f22  PUSH 0x258
00560f27  PUSH 0x0
00560f29  PUSH 0x0
00560f2b  PUSH 0x312258
00560f30  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560f36  MOV ECX,dword ptr [EAX + 0xd0]
00560f3c  CALL 0x005eae80
00560f41  PUSH 0x40
00560f43  CALL 0x00686d82
00560f48  ADD ESP,0x4
00560f4b  MOV dword ptr [EBP + 0xffffff14],EAX
00560f51  MOV dword ptr [EBP + -0x4],0xc
00560f58  CMP dword ptr [EBP + 0xffffff14],0x0
00560f5f  JZ 0x00560f74
00560f61  MOV ECX,dword ptr [EBP + 0xffffff14]
00560f67  CALL 0x005655d0
00560f6c  MOV dword ptr [EBP + 0xfffffe98],EAX
00560f72  JMP 0x00560f7e
00560f74  MOV dword ptr [EBP + 0xfffffe98],0x0
00560f7e  MOV ECX,dword ptr [EBP + 0xfffffe98]
00560f84  MOV dword ptr [EBP + 0xffffff18],ECX
00560f8a  MOV dword ptr [EBP + -0x4],0xffffffff
00560f91  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560f97  MOV EAX,dword ptr [EBP + 0xffffff18]
00560f9d  MOV dword ptr [EDX + 0xd4],EAX
00560fa3  MOV ECX,dword ptr [EBP + 0xfffffecc]
00560fa9  MOV ECX,dword ptr [ECX + 0xd4]
00560faf  CALL 0x005656f0
00560fb4  PUSH 0x2
00560fb6  MOV EDX,dword ptr [EBP + 0xfffffecc]
00560fbc  MOV ECX,dword ptr [EDX + 0xd4]
00560fc2  CALL 0x00565a50
00560fc7  PUSH 0x0
00560fc9  MOV EAX,dword ptr [EBP + 0xfffffecc]
00560fcf  MOV ECX,dword ptr [EAX + 0xd4]
00560fd5  CALL 0x005664c0
00560fda  PUSH 0x178
00560fdf  CALL 0x00686d82
00560fe4  ADD ESP,0x4
00560fe7  MOV dword ptr [EBP + 0xffffff0c],EAX
00560fed  MOV dword ptr [EBP + -0x4],0xd
00560ff4  CMP dword ptr [EBP + 0xffffff0c],0x0
00560ffb  JZ 0x00561010
00560ffd  MOV ECX,dword ptr [EBP + 0xffffff0c]
00561003  CALL 0x005eaaf0
00561008  MOV dword ptr [EBP + 0xfffffe94],EAX
0056100e  JMP 0x0056101a
00561010  MOV dword ptr [EBP + 0xfffffe94],0x0
0056101a  MOV ECX,dword ptr [EBP + 0xfffffe94]
00561020  MOV dword ptr [EBP + 0xffffff10],ECX
00561026  MOV dword ptr [EBP + -0x4],0xffffffff
0056102d  MOV EDX,dword ptr [EBP + 0xfffffecc]
00561033  MOV EAX,dword ptr [EBP + 0xffffff10]
00561039  MOV dword ptr [EDX + 0xd8],EAX
0056103f  PUSH -0x1
00561041  PUSH 0x258
00561046  PUSH 0x0
00561048  PUSH 0x0
0056104a  PUSH 0x31225a
0056104f  MOV ECX,dword ptr [EBP + 0xfffffecc]
00561055  MOV ECX,dword ptr [ECX + 0xd8]
0056105b  CALL 0x005eae80
00561060  PUSH 0x40
00561062  CALL 0x00686d82
00561067  ADD ESP,0x4
0056106a  MOV dword ptr [EBP + 0xffffff04],EAX
00561070  MOV dword ptr [EBP + -0x4],0xe
00561077  CMP dword ptr [EBP + 0xffffff04],0x0
0056107e  JZ 0x00561093
00561080  MOV ECX,dword ptr [EBP + 0xffffff04]
00561086  CALL 0x005655d0
0056108b  MOV dword ptr [EBP + 0xfffffe90],EAX
00561091  JMP 0x0056109d
00561093  MOV dword ptr [EBP + 0xfffffe90],0x0
0056109d  MOV EDX,dword ptr [EBP + 0xfffffe90]
005610a3  MOV dword ptr [EBP + 0xffffff08],EDX
005610a9  MOV dword ptr [EBP + -0x4],0xffffffff
005610b0  MOV EAX,dword ptr [EBP + 0xfffffecc]
005610b6  MOV ECX,dword ptr [EBP + 0xffffff08]
005610bc  MOV dword ptr [EAX + 0xdc],ECX
005610c2  MOV EDX,dword ptr [EBP + 0xfffffecc]
005610c8  MOV ECX,dword ptr [EDX + 0xdc]
005610ce  CALL 0x005656f0
005610d3  PUSH 0x3
005610d5  MOV EAX,dword ptr [EBP + 0xfffffecc]
005610db  MOV ECX,dword ptr [EAX + 0xdc]
005610e1  CALL 0x00565a50
005610e6  PUSH 0x0
005610e8  MOV ECX,dword ptr [EBP + 0xfffffecc]
005610ee  MOV ECX,dword ptr [ECX + 0xdc]
005610f4  CALL 0x005664c0
005610f9  MOV dword ptr [EBP + -0x38],0x0
00561100  JMP 0x0056110b
00561102  MOV EDX,dword ptr [EBP + -0x38]
00561105  ADD EDX,0x1
00561108  MOV dword ptr [EBP + -0x38],EDX
0056110b  CMP dword ptr [EBP + -0x38],0x3
0056110f  JGE 0x005611ec
00561115  PUSH 0x1d0
0056111a  CALL 0x00686d82
0056111f  ADD ESP,0x4
00561122  MOV dword ptr [EBP + 0xfffffefc],EAX
00561128  MOV dword ptr [EBP + -0x4],0xf
0056112f  CMP dword ptr [EBP + 0xfffffefc],0x0
00561136  JZ 0x0056114b
00561138  MOV ECX,dword ptr [EBP + 0xfffffefc]
0056113e  CALL 0x005ec5a0
00561143  MOV dword ptr [EBP + 0xfffffe8c],EAX
00561149  JMP 0x00561155
0056114b  MOV dword ptr [EBP + 0xfffffe8c],0x0
00561155  MOV EAX,dword ptr [EBP + 0xfffffe8c]
0056115b  MOV dword ptr [EBP + 0xffffff00],EAX
00561161  MOV dword ptr [EBP + -0x4],0xffffffff
00561168  MOV ECX,dword ptr [EBP + -0x38]
0056116b  MOV EDX,dword ptr [EBP + 0xfffffecc]
00561171  MOV EAX,dword ptr [EBP + 0xffffff00]
00561177  MOV dword ptr [EDX + ECX*0x4 + 0xbc],EAX
0056117e  PUSH -0x1
00561180  PUSH 0x5
00561182  PUSH 0x2
00561184  MOV ECX,dword ptr [EBP + -0x38]
00561187  MOV EDX,dword ptr [EBP + ECX*0x8 + -0x78]
0056118b  PUSH EDX
0056118c  MOV EAX,dword ptr [EBP + -0x38]
0056118f  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x7c]
00561193  PUSH ECX
00561194  PUSH 0x14
00561196  PUSH 0x64
00561198  PUSH 0x2a
0056119a  MOV EDX,dword ptr [EBP + -0x38]
0056119d  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x4c]
005611a1  PUSH EAX
005611a2  CALL 0x00630f40
005611a7  ADD ESP,0x4
005611aa  PUSH EAX
005611ab  MOV ECX,dword ptr [EBP + -0x38]
005611ae  MOV EDX,dword ptr [EBP + 0xfffffecc]
005611b4  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xbc]
005611bb  CALL 0x005ec8f0
005611c0  MOV EAX,dword ptr [EBP + -0x38]
005611c3  MOV ECX,dword ptr [EBP + 0xfffffecc]
005611c9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xbc]
005611d0  MOV EAX,dword ptr [EBP + -0x38]
005611d3  MOV ECX,dword ptr [EBP + 0xfffffecc]
005611d9  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xbc]
005611e0  MOV EDX,dword ptr [EDX]
005611e2  MOV EAX,dword ptr [EDX + 0x74]
005611e5  CALL EAX
005611e7  JMP 0x00561102
005611ec  PUSH 0x0
005611ee  MOV ECX,dword ptr [0x0079343c]
005611f4  CALL 0x005d0aa0
005611f9  PUSH EAX
005611fa  CALL 0x0064c8a0
005611ff  ADD ESP,0x8
00561202  MOV dword ptr [EBP + 0xfffffef4],EAX
00561208  MOV dword ptr [EBP + 0xfffffef8],EDX
0056120e  MOV ECX,dword ptr [EBP + 0xfffffef4]
00561214  MOV dword ptr [EBP + -0x40],ECX
00561217  MOV EDX,dword ptr [EBP + 0xfffffef8]
0056121d  MOV dword ptr [EBP + -0x3c],EDX
00561220  PUSH 0x1
00561222  PUSH 0x1
00561224  PUSH 0x1
00561226  LEA EAX,[EBP + -0x34]
00561229  PUSH EAX
0056122a  MOV ECX,dword ptr [EBP + -0x3c]
0056122d  PUSH ECX
0056122e  MOV EDX,dword ptr [EBP + -0x40]
00561231  PUSH EDX
00561232  CALL 0x0064c8d0
00561237  ADD ESP,0x18
0056123a  LEA EAX,[EBP + -0x34]
0056123d  PUSH EAX
0056123e  MOV ECX,dword ptr [EBP + 0xfffffecc]
00561244  MOV EDX,dword ptr [ECX + 0xc4]
0056124a  MOV EAX,dword ptr [EBP + 0xfffffecc]
00561250  MOV ECX,dword ptr [EAX + 0xc4]
00561256  MOV EDX,dword ptr [EDX]
00561258  MOV EAX,dword ptr [EDX + 0xb4]
0056125e  CALL EAX
00561260  MOV dword ptr [EBP + -0x38],0x0
00561267  JMP 0x00561272
00561269  MOV ECX,dword ptr [EBP + -0x38]
0056126c  ADD ECX,0x1
0056126f  MOV dword ptr [EBP + -0x38],ECX
00561272  CMP dword ptr [EBP + -0x38],0x5
00561276  JGE 0x00561476
0056127c  PUSH 0x1a4
00561281  CALL 0x00686d82
00561286  ADD ESP,0x4
00561289  MOV dword ptr [EBP + 0xfffffeec],EAX
0056128f  MOV dword ptr [EBP + -0x4],0x10
00561296  CMP dword ptr [EBP + 0xfffffeec],0x0
0056129d  JZ 0x005612b2
0056129f  MOV ECX,dword ptr [EBP + 0xfffffeec]
005612a5  CALL 0x00564f10
005612aa  MOV dword ptr [EBP + 0xfffffe88],EAX
005612b0  JMP 0x005612bc
005612b2  MOV dword ptr [EBP + 0xfffffe88],0x0
005612bc  MOV EDX,dword ptr [EBP + 0xfffffe88]
005612c2  MOV dword ptr [EBP + 0xfffffef0],EDX
005612c8  MOV dword ptr [EBP + -0x4],0xffffffff
005612cf  MOV EAX,dword ptr [EBP + -0x38]
005612d2  MOV ECX,dword ptr [EBP + 0xfffffecc]
005612d8  MOV EDX,dword ptr [EBP + 0xfffffef0]
005612de  MOV dword ptr [ECX + EAX*0x4 + 0x8],EDX
005612e2  PUSH -0x1
005612e4  PUSH 0xa
005612e6  PUSH 0x102
005612eb  MOV EAX,dword ptr [EBP + -0x38]
005612ee  PUSH EAX
005612ef  MOV ECX,dword ptr [EBP + 0xfffffecc]
005612f5  CALL 0x00560340
005612fa  PUSH EAX
005612fb  PUSH 0x312245
00561300  MOV ECX,dword ptr [EBP + -0x38]
00561303  MOV EDX,dword ptr [EBP + 0xfffffecc]
00561309  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
0056130d  CALL 0x005eae80
00561312  MOV EAX,dword ptr [EBP + -0x38]
00561315  PUSH EAX
00561316  MOV ECX,dword ptr [EBP + 0xfffffecc]
0056131c  CALL 0x00560340
00561321  MOV dword ptr [EBP + -0x1c],EAX
00561324  MOV dword ptr [EBP + -0x18],0x102
0056132b  PUSH 0x184
00561330  CALL 0x00686d82
00561335  ADD ESP,0x4
00561338  MOV dword ptr [EBP + 0xfffffee4],EAX
0056133e  MOV dword ptr [EBP + -0x4],0x11
00561345  CMP dword ptr [EBP + 0xfffffee4],0x0
0056134c  JZ 0x00561361
0056134e  MOV ECX,dword ptr [EBP + 0xfffffee4]
00561354  CALL 0x005f5bf0
00561359  MOV dword ptr [EBP + 0xfffffe84],EAX
0056135f  JMP 0x0056136b
00561361  MOV dword ptr [EBP + 0xfffffe84],0x0
0056136b  MOV ECX,dword ptr [EBP + 0xfffffe84]
00561371  MOV dword ptr [EBP + 0xfffffee8],ECX
00561377  MOV dword ptr [EBP + -0x4],0xffffffff
0056137e  MOV EDX,dword ptr [EBP + -0x38]
00561381  MOV EAX,dword ptr [EBP + 0xfffffecc]
00561387  MOV ECX,dword ptr [EBP + 0xfffffee8]
0056138d  MOV dword ptr [EAX + EDX*0x4 + 0x1c],ECX
00561391  PUSH -0x1
00561393  PUSH 0x2
00561395  MOV EDX,dword ptr [EBP + -0x18]
00561398  PUSH EDX
00561399  MOV EAX,dword ptr [EBP + -0x1c]
0056139c  PUSH EAX
0056139d  PUSH 0x312244
005613a2  MOV ECX,dword ptr [EBP + -0x38]
005613a5  MOV EDX,dword ptr [EBP + 0xfffffecc]
005613ab  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c]
005613af  CALL 0x005eae80
005613b4  MOV EAX,dword ptr [EBP + -0x38]
005613b7  MOV ECX,dword ptr [EBP + 0xfffffecc]
005613bd  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1c]
005613c1  MOV dword ptr [EDX + 0x178],0x0
005613cb  PUSH 0x178
005613d0  CALL 0x00686d82
005613d5  ADD ESP,0x4
005613d8  MOV dword ptr [EBP + 0xfffffedc],EAX
005613de  MOV dword ptr [EBP + -0x4],0x12
005613e5  CMP dword ptr [EBP + 0xfffffedc],0x0
005613ec  JZ 0x00561401
005613ee  MOV ECX,dword ptr [EBP + 0xfffffedc]
005613f4  CALL 0x005eaaf0
005613f9  MOV dword ptr [EBP + 0xfffffe80],EAX
005613ff  JMP 0x0056140b
00561401  MOV dword ptr [EBP + 0xfffffe80],0x0
0056140b  MOV EAX,dword ptr [EBP + 0xfffffe80]
00561411  MOV dword ptr [EBP + 0xfffffee0],EAX
00561417  MOV dword ptr [EBP + -0x4],0xffffffff
0056141e  MOV ECX,dword ptr [EBP + -0x38]
00561421  MOV EDX,dword ptr [EBP + 0xfffffecc]
00561427  MOV EAX,dword ptr [EBP + 0xfffffee0]
0056142d  MOV dword ptr [EDX + ECX*0x4 + 0x4c],EAX
00561431  PUSH -0x1
00561433  PUSH 0x32
00561435  PUSH 0x0
00561437  PUSH 0x0
00561439  PUSH 0x312243
0056143e  MOV ECX,dword ptr [EBP + -0x38]
00561441  MOV EDX,dword ptr [EBP + 0xfffffecc]
00561447  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4c]
0056144b  CALL 0x005eae80
00561450  MOV EAX,dword ptr [EBP + -0x38]
00561453  MOV ECX,dword ptr [EBP + 0xfffffecc]
00561459  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4c]
0056145d  MOV EAX,dword ptr [EBP + -0x38]
00561460  MOV ECX,dword ptr [EBP + 0xfffffecc]
00561466  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4c]
0056146a  MOV EDX,dword ptr [EDX]
0056146c  MOV EAX,dword ptr [EDX + 0x70]
0056146f  CALL EAX
00561471  JMP 0x00561269
00561476  PUSH 0x910
0056147b  CALL 0x00686d82
00561480  ADD ESP,0x4
00561483  MOV dword ptr [EBP + 0xfffffed4],EAX
00561489  MOV dword ptr [EBP + -0x4],0x13
00561490  CMP dword ptr [EBP + 0xfffffed4],0x0
00561497  JZ 0x005614ac
00561499  MOV ECX,dword ptr [EBP + 0xfffffed4]
0056149f  CALL 0x00563d30
005614a4  MOV dword ptr [EBP + 0xfffffe7c],EAX
005614aa  JMP 0x005614b6
005614ac  MOV dword ptr [EBP + 0xfffffe7c],0x0
005614b6  MOV ECX,dword ptr [EBP + 0xfffffe7c]
005614bc  MOV dword ptr [EBP + 0xfffffed8],ECX
005614c2  MOV dword ptr [EBP + -0x4],0xffffffff
005614c9  MOV EDX,dword ptr [EBP + 0xfffffecc]
005614cf  MOV EAX,dword ptr [EBP + 0xfffffed8]
005614d5  MOV dword ptr [EDX + 0xb8],EAX
005614db  MOV ECX,dword ptr [EBP + 0xfffffecc]
005614e1  MOV ECX,dword ptr [ECX + 0xb8]
005614e7  CALL 0x005640f0
005614ec  MOV EDX,dword ptr [EBP + 0xfffffecc]
005614f2  MOV ECX,dword ptr [EDX + 0xb8]
005614f8  CALL 0x00564490
005614fd  MOV dword ptr [EBP + -0x38],0x0
00561504  JMP 0x0056150f
00561506  MOV EAX,dword ptr [EBP + -0x38]
00561509  ADD EAX,0x1
0056150c  MOV dword ptr [EBP + -0x38],EAX
0056150f  CMP dword ptr [EBP + -0x38],0x5
00561513  JGE 0x00561551
00561515  PUSH 0x0
00561517  PUSH -0x1
00561519  PUSH -0x1
0056151b  PUSH -0x1
0056151d  PUSH -0x1
0056151f  PUSH 0x6b27f8
00561524  PUSH 0x2
00561526  PUSH 0x0
00561528  PUSH 0x0
0056152a  MOV ECX,dword ptr [EBP + -0x38]
0056152d  ADD ECX,0x312221
00561533  PUSH ECX
00561534  MOV EDX,dword ptr [EBP + -0x38]
00561537  MOV EAX,dword ptr [EDX*0x4 + 0x743c98]
0056153e  PUSH EAX
0056153f  PUSH 0x0
00561541  MOV ECX,dword ptr [0x0162ee84]
00561547  MOV ECX,dword ptr [ECX + 0x14]
0056154a  CALL 0x005f9de0
0056154f  JMP 0x00561506
00561551  MOV ECX,dword ptr [EBP + 0xfffffecc]
00561557  CALL 0x005602a0
0056155c  PUSH 0x0
0056155e  PUSH -0x1
00561560  PUSH -0x1
00561562  PUSH -0x1
00561564  PUSH -0x1
00561566  PUSH 0x6b27f8
0056156b  PUSH 0x2
0056156d  PUSH 0x0
0056156f  PUSH 0x0
00561571  PUSH 0x31223d
00561576  PUSH 0x6
00561578  PUSH 0x0
0056157a  MOV EDX,dword ptr [0x0162ee84]
00561580  MOV ECX,dword ptr [EDX + 0x14]
00561583  CALL 0x005f9de0
00561588  PUSH 0x0
0056158a  PUSH 0x6
0056158c  MOV EAX,[0x0162ee84]
00561591  MOV ECX,dword ptr [EAX + 0x14]
00561594  CALL 0x005fb300
00561599  MOV ECX,EAX
0056159b  CALL 0x00602790
005615a0  MOV ECX,dword ptr [EBP + 0xfffffecc]
005615a6  CALL 0x00561950
005615ab  MOV ECX,dword ptr [EBP + -0xc]
005615ae  MOV dword ptr FS:[0x0],ECX
005615b5  POP ECX
005615b6  MOV ECX,dword ptr [EBP + -0x20]
005615b9  XOR ECX,EBP
005615bb  CALL 0x00686d72
005615c0  MOV ESP,EBP
005615c2  POP EBP
005615c3  RET

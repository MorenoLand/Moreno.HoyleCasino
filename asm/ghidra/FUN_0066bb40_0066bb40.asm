; FUN_0066bb40  0066bb40
0066bb40  PUSH EBP
0066bb41  MOV EBP,ESP
0066bb43  PUSH -0x1
0066bb45  PUSH 0x6ace8e
0066bb4a  MOV EAX,FS:[0x0]
0066bb50  PUSH EAX
0066bb51  SUB ESP,0x9c
0066bb57  MOV EAX,[0x00781870]
0066bb5c  XOR EAX,EBP
0066bb5e  PUSH EAX
0066bb5f  LEA EAX,[EBP + -0xc]
0066bb62  MOV FS:[0x0],EAX
0066bb68  MOV dword ptr [EBP + 0xffffff7c],ECX
0066bb6e  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066bb74  CALL 0x0064ce60
0066bb79  MOV EAX,[0x0162ee84]
0066bb7e  MOV EDX,dword ptr [EAX]
0066bb80  MOV ECX,dword ptr [0x0162ee84]
0066bb86  MOV EAX,dword ptr [EDX + 0xb0]
0066bb8c  CALL EAX
0066bb8e  MOVZX ECX,AL
0066bb91  TEST ECX,ECX
0066bb93  JZ 0x0066c481
0066bb99  MOV EDX,dword ptr [0x0162ee84]
0066bb9f  MOV EAX,dword ptr [EDX]
0066bba1  MOV ECX,dword ptr [0x0162ee84]
0066bba7  MOV EDX,dword ptr [EAX + 0x280]
0066bbad  CALL EDX
0066bbaf  TEST EAX,EAX
0066bbb1  JZ 0x0066bc13
0066bbb3  PUSH 0x0
0066bbb5  PUSH 0xff
0066bbba  PUSH 0x0
0066bbbc  PUSH 0x2
0066bbbe  PUSH 0x0
0066bbc0  PUSH 0x0
0066bbc2  MOV EAX,[0x0162ee84]
0066bbc7  MOV EDX,dword ptr [EAX]
0066bbc9  MOV ECX,dword ptr [0x0162ee84]
0066bbcf  MOV EAX,dword ptr [EDX + 0x280]
0066bbd5  CALL EAX
0066bbd7  PUSH EAX
0066bbd8  PUSH 0x0
0066bbda  PUSH 0x0
0066bbdc  MOV ECX,dword ptr [0x0162ee84]
0066bbe2  MOV ECX,dword ptr [ECX + 0x14]
0066bbe5  CALL 0x005f9ce0
0066bbea  PUSH 0x0
0066bbec  MOV EDX,dword ptr [0x0162ee84]
0066bbf2  MOV ECX,dword ptr [EDX + 0x14]
0066bbf5  CALL 0x005fb2b0
0066bbfa  MOV dword ptr [EBP + 0xffffff78],EAX
0066bc00  MOV EAX,dword ptr [EBP + 0xffffff78]
0066bc06  MOV EDX,dword ptr [EAX]
0066bc08  MOV ECX,dword ptr [EBP + 0xffffff78]
0066bc0e  MOV EAX,dword ptr [EDX + 0x70]
0066bc11  CALL EAX
0066bc13  MOV dword ptr [EBP + -0x18],0x0
0066bc1a  JMP 0x0066bc25
0066bc1c  MOV ECX,dword ptr [EBP + -0x18]
0066bc1f  ADD ECX,0x1
0066bc22  MOV dword ptr [EBP + -0x18],ECX
0066bc25  MOV EDX,dword ptr [0x0162ee84]
0066bc2b  MOV EAX,dword ptr [EDX]
0066bc2d  MOV ECX,dword ptr [0x0162ee84]
0066bc33  MOV EDX,dword ptr [EAX + 0x25c]
0066bc39  CALL EDX
0066bc3b  CMP dword ptr [EBP + -0x18],EAX
0066bc3e  JGE 0x0066bf55
0066bc44  MOV EAX,dword ptr [EBP + -0x18]
0066bc47  PUSH EAX
0066bc48  LEA ECX,[EBP + -0x28]
0066bc4b  PUSH ECX
0066bc4c  MOV EDX,dword ptr [0x0162ee84]
0066bc52  MOV EAX,dword ptr [EDX]
0066bc54  MOV ECX,dword ptr [0x0162ee84]
0066bc5a  MOV EDX,dword ptr [EAX + 0x278]
0066bc60  CALL EDX
0066bc62  MOV ECX,dword ptr [EAX]
0066bc64  MOV EDX,dword ptr [EAX + 0x4]
0066bc67  MOV dword ptr [EBP + -0x14],ECX
0066bc6a  MOV dword ptr [EBP + -0x10],EDX
0066bc6d  PUSH 0x1e8
0066bc72  CALL 0x00686d82
0066bc77  ADD ESP,0x4
0066bc7a  MOV dword ptr [EBP + -0x30],EAX
0066bc7d  MOV dword ptr [EBP + -0x4],0x0
0066bc84  CMP dword ptr [EBP + -0x30],0x0
0066bc88  JZ 0x0066bceb
0066bc8a  MOV EAX,dword ptr [EBP + -0x18]
0066bc8d  PUSH EAX
0066bc8e  MOV ECX,dword ptr [0x0162ee84]
0066bc94  MOV EDX,dword ptr [ECX]
0066bc96  MOV ECX,dword ptr [0x0162ee84]
0066bc9c  MOV EAX,dword ptr [EDX + 0x270]
0066bca2  CALL EAX
0066bca4  PUSH EAX
0066bca5  MOV ECX,dword ptr [EBP + -0x18]
0066bca8  PUSH ECX
0066bca9  MOV EDX,dword ptr [0x0162ee84]
0066bcaf  MOV EAX,dword ptr [EDX]
0066bcb1  MOV ECX,dword ptr [0x0162ee84]
0066bcb7  MOV EDX,dword ptr [EAX + 0x26c]
0066bcbd  CALL EDX
0066bcbf  PUSH EAX
0066bcc0  MOV EAX,dword ptr [EBP + -0x18]
0066bcc3  PUSH EAX
0066bcc4  MOV ECX,dword ptr [0x0162ee84]
0066bcca  MOV EDX,dword ptr [ECX]
0066bccc  MOV ECX,dword ptr [0x0162ee84]
0066bcd2  MOV EAX,dword ptr [EDX + 0x274]
0066bcd8  CALL EAX
0066bcda  PUSH EAX
0066bcdb  MOV ECX,dword ptr [EBP + -0x30]
0066bcde  CALL 0x0066cb10
0066bce3  MOV dword ptr [EBP + 0xffffff74],EAX
0066bce9  JMP 0x0066bcf5
0066bceb  MOV dword ptr [EBP + 0xffffff74],0x0
0066bcf5  MOV ECX,dword ptr [EBP + 0xffffff74]
0066bcfb  MOV dword ptr [EBP + -0x2c],ECX
0066bcfe  MOV dword ptr [EBP + -0x4],0xffffffff
0066bd05  PUSH 0x0
0066bd07  PUSH -0x1
0066bd09  PUSH -0x1
0066bd0b  PUSH -0x1
0066bd0d  PUSH -0x1
0066bd0f  PUSH 0x6b27f8
0066bd14  PUSH 0x5
0066bd16  MOV EDX,dword ptr [EBP + -0x10]
0066bd19  PUSH EDX
0066bd1a  MOV EAX,dword ptr [EBP + -0x14]
0066bd1d  PUSH EAX
0066bd1e  MOV ECX,dword ptr [EBP + -0x18]
0066bd21  PUSH ECX
0066bd22  MOV EDX,dword ptr [0x0162ee84]
0066bd28  MOV EAX,dword ptr [EDX]
0066bd2a  MOV ECX,dword ptr [0x0162ee84]
0066bd30  MOV EDX,dword ptr [EAX + 0x260]
0066bd36  CALL EDX
0066bd38  PUSH EAX
0066bd39  MOV EAX,dword ptr [EBP + -0x18]
0066bd3c  PUSH EAX
0066bd3d  MOV ECX,dword ptr [0x0162ee84]
0066bd43  MOV EDX,dword ptr [ECX]
0066bd45  MOV ECX,dword ptr [0x0162ee84]
0066bd4b  MOV EAX,dword ptr [EDX + 0x268]
0066bd51  CALL EAX
0066bd53  PUSH EAX
0066bd54  MOV ECX,dword ptr [EBP + -0x2c]
0066bd57  PUSH ECX
0066bd58  MOV EDX,dword ptr [0x0162ee84]
0066bd5e  MOV ECX,dword ptr [EDX + 0x14]
0066bd61  CALL 0x005f9de0
0066bd66  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066bd6c  MOV EDX,dword ptr [ECX + 0x5c]
0066bd6f  MOV ECX,dword ptr [EBP + -0x18]
0066bd72  MOV dword ptr [EDX + ECX*0x4],EAX
0066bd75  MOV EDX,dword ptr [EBP + -0x18]
0066bd78  PUSH EDX
0066bd79  MOV EAX,[0x0162ee84]
0066bd7e  MOV EDX,dword ptr [EAX]
0066bd80  MOV ECX,dword ptr [0x0162ee84]
0066bd86  MOV EAX,dword ptr [EDX + 0x264]
0066bd8c  CALL EAX
0066bd8e  ADD EAX,0x1
0066bd91  PUSH EAX
0066bd92  MOV ECX,dword ptr [EBP + -0x18]
0066bd95  PUSH ECX
0066bd96  MOV EDX,dword ptr [0x0162ee84]
0066bd9c  MOV EAX,dword ptr [EDX]
0066bd9e  MOV ECX,dword ptr [0x0162ee84]
0066bda4  MOV EDX,dword ptr [EAX + 0x264]
0066bdaa  CALL EDX
0066bdac  PUSH EAX
0066bdad  MOV EAX,dword ptr [EBP + -0x18]
0066bdb0  PUSH EAX
0066bdb1  MOV ECX,dword ptr [0x0162ee84]
0066bdb7  MOV EDX,dword ptr [ECX]
0066bdb9  MOV ECX,dword ptr [0x0162ee84]
0066bdbf  MOV EAX,dword ptr [EDX + 0x264]
0066bdc5  CALL EAX
0066bdc7  ADD EAX,0x1
0066bdca  PUSH EAX
0066bdcb  MOV ECX,dword ptr [EBP + -0x18]
0066bdce  PUSH ECX
0066bdcf  MOV EDX,dword ptr [0x0162ee84]
0066bdd5  MOV EAX,dword ptr [EDX]
0066bdd7  MOV ECX,dword ptr [0x0162ee84]
0066bddd  MOV EDX,dword ptr [EAX + 0x264]
0066bde3  CALL EDX
0066bde5  PUSH EAX
0066bde6  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066bdec  MOV ECX,dword ptr [EAX + 0x5c]
0066bdef  MOV EDX,dword ptr [EBP + -0x18]
0066bdf2  MOV ECX,dword ptr [ECX + EDX*0x4]
0066bdf5  CALL 0x006023d0
0066bdfa  MOV EAX,dword ptr [EBP + -0x18]
0066bdfd  PUSH EAX
0066bdfe  MOV ECX,dword ptr [0x0162ee84]
0066be04  MOV EDX,dword ptr [ECX]
0066be06  MOV ECX,dword ptr [0x0162ee84]
0066be0c  MOV EAX,dword ptr [EDX + 0x264]
0066be12  CALL EAX
0066be14  PUSH EAX
0066be15  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066be1b  MOV EDX,dword ptr [ECX + 0x5c]
0066be1e  MOV EAX,dword ptr [EBP + -0x18]
0066be21  MOV ECX,dword ptr [EDX + EAX*0x4]
0066be24  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066be2a  MOV EAX,dword ptr [EDX + 0x5c]
0066be2d  MOV EDX,dword ptr [EBP + -0x18]
0066be30  MOV EAX,dword ptr [EAX + EDX*0x4]
0066be33  MOV EDX,dword ptr [ECX]
0066be35  MOV ECX,EAX
0066be37  MOV EAX,dword ptr [EDX + 0xb0]
0066be3d  CALL EAX
0066be3f  PUSH 0x80
0066be44  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066be4a  MOV EDX,dword ptr [ECX + 0x5c]
0066be4d  MOV EAX,dword ptr [EBP + -0x18]
0066be50  MOV ECX,dword ptr [EDX + EAX*0x4]
0066be53  CALL 0x005eb720
0066be58  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066be5e  MOV EDX,dword ptr [ECX + 0x5c]
0066be61  MOV EAX,dword ptr [EBP + -0x18]
0066be64  MOV ECX,dword ptr [EDX + EAX*0x4]
0066be67  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066be6d  MOV EAX,dword ptr [EDX + 0x5c]
0066be70  MOV EDX,dword ptr [EBP + -0x18]
0066be73  MOV EAX,dword ptr [EAX + EDX*0x4]
0066be76  MOV EDX,dword ptr [ECX]
0066be78  MOV ECX,EAX
0066be7a  MOV EAX,dword ptr [EDX + 0x74]
0066be7d  CALL EAX
0066be7f  MOV ECX,dword ptr [EBP + -0x18]
0066be82  PUSH ECX
0066be83  MOV EDX,dword ptr [0x0162ee84]
0066be89  MOV EAX,dword ptr [EDX]
0066be8b  MOV ECX,dword ptr [0x0162ee84]
0066be91  MOV EDX,dword ptr [EAX + 0x268]
0066be97  CALL EDX
0066be99  CMP EAX,0x7d0
0066be9e  JZ 0x0066bec1
0066bea0  MOV EAX,dword ptr [EBP + -0x18]
0066bea3  PUSH EAX
0066bea4  MOV ECX,dword ptr [0x0162ee84]
0066beaa  MOV EDX,dword ptr [ECX]
0066beac  MOV ECX,dword ptr [0x0162ee84]
0066beb2  MOV EAX,dword ptr [EDX + 0x268]
0066beb8  CALL EAX
0066beba  CMP EAX,0x7d1
0066bebf  JNZ 0x0066bed7
0066bec1  PUSH 0x1
0066bec3  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066bec9  MOV EDX,dword ptr [ECX + 0x5c]
0066becc  MOV EAX,dword ptr [EBP + -0x18]
0066becf  MOV ECX,dword ptr [EDX + EAX*0x4]
0066bed2  CALL 0x005eb700
0066bed7  CMP dword ptr [0x00795f90],0x3
0066bede  JNZ 0x0066bf50
0066bee0  MOV ECX,dword ptr [EBP + -0x18]
0066bee3  PUSH ECX
0066bee4  MOV EDX,dword ptr [0x0162ee84]
0066beea  MOV EAX,dword ptr [EDX]
0066beec  MOV ECX,dword ptr [0x0162ee84]
0066bef2  MOV EDX,dword ptr [EAX + 0x268]
0066bef8  CALL EDX
0066befa  CMP EAX,0x7d0
0066beff  JNZ 0x0066bf50
0066bf01  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066bf07  MOV ECX,dword ptr [EAX + 0x5c]
0066bf0a  MOV EDX,dword ptr [EBP + -0x18]
0066bf0d  MOV EAX,dword ptr [ECX + EDX*0x4]
0066bf10  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066bf16  MOV EDX,dword ptr [ECX + 0x5c]
0066bf19  MOV ECX,dword ptr [EBP + -0x18]
0066bf1c  MOV ECX,dword ptr [EDX + ECX*0x4]
0066bf1f  MOV EDX,dword ptr [EAX]
0066bf21  MOV EAX,dword ptr [EDX + 0xd0]
0066bf27  CALL EAX
0066bf29  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066bf2f  MOV EDX,dword ptr [ECX + 0x5c]
0066bf32  MOV EAX,dword ptr [EBP + -0x18]
0066bf35  MOV ECX,dword ptr [EDX + EAX*0x4]
0066bf38  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066bf3e  MOV EAX,dword ptr [EDX + 0x5c]
0066bf41  MOV EDX,dword ptr [EBP + -0x18]
0066bf44  MOV EAX,dword ptr [EAX + EDX*0x4]
0066bf47  MOV EDX,dword ptr [ECX]
0066bf49  MOV ECX,EAX
0066bf4b  MOV EAX,dword ptr [EDX + 0x70]
0066bf4e  CALL EAX
0066bf50  JMP 0x0066bc1c
0066bf55  CMP dword ptr [0x00795f90],0x3
0066bf5c  JZ 0x0066c0b7
0066bf62  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066bf68  CMP dword ptr [ECX + 0x64],0x0
0066bf6c  JNZ 0x0066bfc1
0066bf6e  PUSH 0x184
0066bf73  CALL 0x00686d82
0066bf78  ADD ESP,0x4
0066bf7b  MOV dword ptr [EBP + -0x38],EAX
0066bf7e  MOV dword ptr [EBP + -0x4],0x1
0066bf85  CMP dword ptr [EBP + -0x38],0x0
0066bf89  JZ 0x0066bf9b
0066bf8b  MOV ECX,dword ptr [EBP + -0x38]
0066bf8e  CALL 0x005f5bf0
0066bf93  MOV dword ptr [EBP + 0xffffff70],EAX
0066bf99  JMP 0x0066bfa5
0066bf9b  MOV dword ptr [EBP + 0xffffff70],0x0
0066bfa5  MOV EDX,dword ptr [EBP + 0xffffff70]
0066bfab  MOV dword ptr [EBP + -0x34],EDX
0066bfae  MOV dword ptr [EBP + -0x4],0xffffffff
0066bfb5  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066bfbb  MOV ECX,dword ptr [EBP + -0x34]
0066bfbe  MOV dword ptr [EAX + 0x64],ECX
0066bfc1  LEA EDX,[EBP + -0x40]
0066bfc4  PUSH EDX
0066bfc5  MOV EAX,[0x0162ee84]
0066bfca  MOV EDX,dword ptr [EAX]
0066bfcc  MOV ECX,dword ptr [0x0162ee84]
0066bfd2  MOV EAX,dword ptr [EDX + 0x2ac]
0066bfd8  CALL EAX
0066bfda  MOV ECX,dword ptr [EAX]
0066bfdc  MOV EDX,dword ptr [EAX + 0x4]
0066bfdf  MOV dword ptr [EBP + -0x20],ECX
0066bfe2  MOV dword ptr [EBP + -0x1c],EDX
0066bfe5  PUSH -0x1
0066bfe7  MOV EAX,[0x0162ee84]
0066bfec  MOV EDX,dword ptr [EAX]
0066bfee  MOV ECX,dword ptr [0x0162ee84]
0066bff4  MOV EAX,dword ptr [EDX + 0x2b0]
0066bffa  CALL EAX
0066bffc  PUSH EAX
0066bffd  MOV ECX,dword ptr [EBP + -0x1c]
0066c000  PUSH ECX
0066c001  MOV EDX,dword ptr [EBP + -0x20]
0066c004  PUSH EDX
0066c005  MOV EAX,[0x0162ee84]
0066c00a  MOV EDX,dword ptr [EAX]
0066c00c  MOV ECX,dword ptr [0x0162ee84]
0066c012  MOV EAX,dword ptr [EDX + 0x2a4]
0066c018  CALL EAX
0066c01a  PUSH EAX
0066c01b  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c021  MOV ECX,dword ptr [ECX + 0x64]
0066c024  CALL 0x005eae80
0066c029  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066c02f  MOV EAX,dword ptr [EDX + 0x64]
0066c032  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c038  MOV ECX,dword ptr [ECX + 0x64]
0066c03b  MOV EDX,dword ptr [EAX]
0066c03d  MOV EAX,dword ptr [EDX + 0x74]
0066c040  CALL EAX
0066c042  MOV ECX,dword ptr [0x0162ee84]
0066c048  MOV EDX,dword ptr [ECX]
0066c04a  MOV ECX,dword ptr [0x0162ee84]
0066c050  MOV EAX,dword ptr [EDX + 0x2a8]
0066c056  CALL EAX
0066c058  MOVZX ECX,AL
0066c05b  TEST ECX,ECX
0066c05d  JZ 0x0066c0b7
0066c05f  PUSH 0x1c
0066c061  CALL 0x00686d82
0066c066  ADD ESP,0x4
0066c069  MOV dword ptr [EBP + -0x48],EAX
0066c06c  MOV dword ptr [EBP + -0x4],0x2
0066c073  CMP dword ptr [EBP + -0x48],0x0
0066c077  JZ 0x0066c08b
0066c079  PUSH 0x0
0066c07b  MOV ECX,dword ptr [EBP + -0x48]
0066c07e  CALL 0x00600a70
0066c083  MOV dword ptr [EBP + 0xffffff6c],EAX
0066c089  JMP 0x0066c095
0066c08b  MOV dword ptr [EBP + 0xffffff6c],0x0
0066c095  MOV EDX,dword ptr [EBP + 0xffffff6c]
0066c09b  MOV dword ptr [EBP + -0x44],EDX
0066c09e  MOV dword ptr [EBP + -0x4],0xffffffff
0066c0a5  MOV EAX,dword ptr [EBP + -0x44]
0066c0a8  PUSH EAX
0066c0a9  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c0af  MOV ECX,dword ptr [ECX + 0x64]
0066c0b2  CALL 0x005f5d50
0066c0b7  MOV EDX,dword ptr [0x0162ee84]
0066c0bd  MOV EAX,dword ptr [EDX]
0066c0bf  MOV ECX,dword ptr [0x0162ee84]
0066c0c5  MOV EDX,dword ptr [EAX + 0x29c]
0066c0cb  CALL EDX
0066c0cd  TEST EAX,EAX
0066c0cf  JZ 0x0066c1f9
0066c0d5  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066c0db  CMP dword ptr [EAX + 0x60],0x0
0066c0df  JNZ 0x0066c134
0066c0e1  PUSH 0x184
0066c0e6  CALL 0x00686d82
0066c0eb  ADD ESP,0x4
0066c0ee  MOV dword ptr [EBP + -0x50],EAX
0066c0f1  MOV dword ptr [EBP + -0x4],0x3
0066c0f8  CMP dword ptr [EBP + -0x50],0x0
0066c0fc  JZ 0x0066c10e
0066c0fe  MOV ECX,dword ptr [EBP + -0x50]
0066c101  CALL 0x005f5bf0
0066c106  MOV dword ptr [EBP + 0xffffff68],EAX
0066c10c  JMP 0x0066c118
0066c10e  MOV dword ptr [EBP + 0xffffff68],0x0
0066c118  MOV ECX,dword ptr [EBP + 0xffffff68]
0066c11e  MOV dword ptr [EBP + -0x4c],ECX
0066c121  MOV dword ptr [EBP + -0x4],0xffffffff
0066c128  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066c12e  MOV EAX,dword ptr [EBP + -0x4c]
0066c131  MOV dword ptr [EDX + 0x60],EAX
0066c134  PUSH -0x1
0066c136  PUSH 0x1
0066c138  PUSH 0x0
0066c13a  PUSH 0x0
0066c13c  MOV ECX,dword ptr [0x0162ee84]
0066c142  MOV EDX,dword ptr [ECX]
0066c144  MOV ECX,dword ptr [0x0162ee84]
0066c14a  MOV EAX,dword ptr [EDX + 0x29c]
0066c150  CALL EAX
0066c152  PUSH EAX
0066c153  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c159  MOV ECX,dword ptr [ECX + 0x60]
0066c15c  CALL 0x005eae80
0066c161  MOV EDX,dword ptr [0x0162ee84]
0066c167  MOV EAX,dword ptr [EDX]
0066c169  MOV ECX,dword ptr [0x0162ee84]
0066c16f  MOV EDX,dword ptr [EAX + 0x2a0]
0066c175  CALL EDX
0066c177  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c17d  MOV EDX,dword ptr [ECX + 0x60]
0066c180  MOV dword ptr [EDX + 0x178],EAX
0066c186  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066c18c  MOV ECX,dword ptr [EAX + 0x60]
0066c18f  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066c195  MOV EAX,dword ptr [EDX + 0x60]
0066c198  MOV EDX,dword ptr [ECX]
0066c19a  MOV ECX,EAX
0066c19c  MOV EAX,dword ptr [EDX + 0x74]
0066c19f  CALL EAX
0066c1a1  PUSH 0x1c
0066c1a3  CALL 0x00686d82
0066c1a8  ADD ESP,0x4
0066c1ab  MOV dword ptr [EBP + -0x58],EAX
0066c1ae  MOV dword ptr [EBP + -0x4],0x4
0066c1b5  CMP dword ptr [EBP + -0x58],0x0
0066c1b9  JZ 0x0066c1cd
0066c1bb  PUSH 0x0
0066c1bd  MOV ECX,dword ptr [EBP + -0x58]
0066c1c0  CALL 0x00600a70
0066c1c5  MOV dword ptr [EBP + 0xffffff64],EAX
0066c1cb  JMP 0x0066c1d7
0066c1cd  MOV dword ptr [EBP + 0xffffff64],0x0
0066c1d7  MOV ECX,dword ptr [EBP + 0xffffff64]
0066c1dd  MOV dword ptr [EBP + -0x54],ECX
0066c1e0  MOV dword ptr [EBP + -0x4],0xffffffff
0066c1e7  MOV EDX,dword ptr [EBP + -0x54]
0066c1ea  PUSH EDX
0066c1eb  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066c1f1  MOV ECX,dword ptr [EAX + 0x60]
0066c1f4  CALL 0x005f5d50
0066c1f9  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c1ff  CMP dword ptr [ECX + 0x68],0x0
0066c203  JNZ 0x0066c258
0066c205  PUSH 0x178
0066c20a  CALL 0x00686d82
0066c20f  ADD ESP,0x4
0066c212  MOV dword ptr [EBP + -0x60],EAX
0066c215  MOV dword ptr [EBP + -0x4],0x5
0066c21c  CMP dword ptr [EBP + -0x60],0x0
0066c220  JZ 0x0066c232
0066c222  MOV ECX,dword ptr [EBP + -0x60]
0066c225  CALL 0x005eaaf0
0066c22a  MOV dword ptr [EBP + 0xffffff60],EAX
0066c230  JMP 0x0066c23c
0066c232  MOV dword ptr [EBP + 0xffffff60],0x0
0066c23c  MOV EDX,dword ptr [EBP + 0xffffff60]
0066c242  MOV dword ptr [EBP + -0x5c],EDX
0066c245  MOV dword ptr [EBP + -0x4],0xffffffff
0066c24c  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066c252  MOV ECX,dword ptr [EBP + -0x5c]
0066c255  MOV dword ptr [EAX + 0x68],ECX
0066c258  PUSH -0x1
0066c25a  PUSH 0x1
0066c25c  PUSH 0x0
0066c25e  PUSH 0x0
0066c260  MOV EDX,dword ptr [0x0162ee84]
0066c266  MOV EAX,dword ptr [EDX]
0066c268  MOV ECX,dword ptr [0x0162ee84]
0066c26e  MOV EDX,dword ptr [EAX + 0x294]
0066c274  CALL EDX
0066c276  PUSH EAX
0066c277  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066c27d  MOV ECX,dword ptr [EAX + 0x68]
0066c280  CALL 0x005eae80
0066c285  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c28b  MOV dword ptr [ECX + 0x78],0x0
0066c292  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066c298  MOV dword ptr [EDX + 0x7c],0x0
0066c29f  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066c2a5  MOV dword ptr [EAX + 0x80],0x0
0066c2af  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c2b5  CMP dword ptr [ECX + 0x6c],0x0
0066c2b9  JNZ 0x0066c30e
0066c2bb  PUSH 0x178
0066c2c0  CALL 0x00686d82
0066c2c5  ADD ESP,0x4
0066c2c8  MOV dword ptr [EBP + -0x68],EAX
0066c2cb  MOV dword ptr [EBP + -0x4],0x6
0066c2d2  CMP dword ptr [EBP + -0x68],0x0
0066c2d6  JZ 0x0066c2e8
0066c2d8  MOV ECX,dword ptr [EBP + -0x68]
0066c2db  CALL 0x005eaaf0
0066c2e0  MOV dword ptr [EBP + 0xffffff5c],EAX
0066c2e6  JMP 0x0066c2f2
0066c2e8  MOV dword ptr [EBP + 0xffffff5c],0x0
0066c2f2  MOV EDX,dword ptr [EBP + 0xffffff5c]
0066c2f8  MOV dword ptr [EBP + -0x64],EDX
0066c2fb  MOV dword ptr [EBP + -0x4],0xffffffff
0066c302  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066c308  MOV ECX,dword ptr [EBP + -0x64]
0066c30b  MOV dword ptr [EAX + 0x6c],ECX
0066c30e  LEA EDX,[EBP + -0x70]
0066c311  PUSH EDX
0066c312  MOV EAX,[0x0162ee84]
0066c317  MOV EDX,dword ptr [EAX]
0066c319  MOV ECX,dword ptr [0x0162ee84]
0066c31f  MOV EAX,dword ptr [EDX + 0x28c]
0066c325  CALL EAX
0066c327  MOV ECX,dword ptr [EAX]
0066c329  MOV EDX,dword ptr [EAX + 0x4]
0066c32c  MOV dword ptr [EBP + -0x14],ECX
0066c32f  MOV dword ptr [EBP + -0x10],EDX
0066c332  PUSH -0x1
0066c334  MOV EAX,[0x0162ee84]
0066c339  MOV EDX,dword ptr [EAX]
0066c33b  MOV ECX,dword ptr [0x0162ee84]
0066c341  MOV EAX,dword ptr [EDX + 0x290]
0066c347  CALL EAX
0066c349  PUSH EAX
0066c34a  MOV ECX,dword ptr [EBP + -0x10]
0066c34d  PUSH ECX
0066c34e  MOV EDX,dword ptr [EBP + -0x14]
0066c351  PUSH EDX
0066c352  MOV EAX,[0x0162ee84]
0066c357  MOV EDX,dword ptr [EAX]
0066c359  MOV ECX,dword ptr [0x0162ee84]
0066c35f  MOV EAX,dword ptr [EDX + 0x288]
0066c365  CALL EAX
0066c367  PUSH EAX
0066c368  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c36e  MOV ECX,dword ptr [ECX + 0x6c]
0066c371  CALL 0x005eae80
0066c376  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066c37c  MOV EAX,dword ptr [EDX + 0x6c]
0066c37f  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c385  MOV ECX,dword ptr [ECX + 0x6c]
0066c388  MOV EDX,dword ptr [EAX]
0066c38a  MOV EAX,dword ptr [EDX + 0x74]
0066c38d  CALL EAX
0066c38f  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c395  CMP dword ptr [ECX + 0x70],0x0
0066c399  JNZ 0x0066c3ee
0066c39b  PUSH 0x178
0066c3a0  CALL 0x00686d82
0066c3a5  ADD ESP,0x4
0066c3a8  MOV dword ptr [EBP + -0x78],EAX
0066c3ab  MOV dword ptr [EBP + -0x4],0x7
0066c3b2  CMP dword ptr [EBP + -0x78],0x0
0066c3b6  JZ 0x0066c3c8
0066c3b8  MOV ECX,dword ptr [EBP + -0x78]
0066c3bb  CALL 0x005eaaf0
0066c3c0  MOV dword ptr [EBP + 0xffffff58],EAX
0066c3c6  JMP 0x0066c3d2
0066c3c8  MOV dword ptr [EBP + 0xffffff58],0x0
0066c3d2  MOV EDX,dword ptr [EBP + 0xffffff58]
0066c3d8  MOV dword ptr [EBP + -0x74],EDX
0066c3db  MOV dword ptr [EBP + -0x4],0xffffffff
0066c3e2  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066c3e8  MOV ECX,dword ptr [EBP + -0x74]
0066c3eb  MOV dword ptr [EAX + 0x70],ECX
0066c3ee  LEA EDX,[EBP + -0x80]
0066c3f1  PUSH EDX
0066c3f2  MOV EAX,[0x0162ee84]
0066c3f7  MOV EDX,dword ptr [EAX]
0066c3f9  MOV ECX,dword ptr [0x0162ee84]
0066c3ff  MOV EAX,dword ptr [EDX + 0x28c]
0066c405  CALL EAX
0066c407  MOV ECX,dword ptr [EAX]
0066c409  MOV EDX,dword ptr [EAX + 0x4]
0066c40c  MOV dword ptr [EBP + -0x14],ECX
0066c40f  MOV dword ptr [EBP + -0x10],EDX
0066c412  PUSH -0x1
0066c414  MOV EAX,[0x0162ee84]
0066c419  MOV EDX,dword ptr [EAX]
0066c41b  MOV ECX,dword ptr [0x0162ee84]
0066c421  MOV EAX,dword ptr [EDX + 0x290]
0066c427  CALL EAX
0066c429  PUSH EAX
0066c42a  MOV ECX,dword ptr [EBP + -0x10]
0066c42d  PUSH ECX
0066c42e  MOV EDX,dword ptr [EBP + -0x14]
0066c431  PUSH EDX
0066c432  MOV EAX,[0x0162ee84]
0066c437  MOV EDX,dword ptr [EAX]
0066c439  MOV ECX,dword ptr [0x0162ee84]
0066c43f  MOV EAX,dword ptr [EDX + 0x288]
0066c445  CALL EAX
0066c447  PUSH EAX
0066c448  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c44e  MOV ECX,dword ptr [ECX + 0x70]
0066c451  CALL 0x005eae80
0066c456  PUSH 0x0
0066c458  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066c45e  MOV ECX,dword ptr [EDX + 0x70]
0066c461  CALL 0x005eb5d0
0066c466  MOV EAX,dword ptr [EBP + 0xffffff7c]
0066c46c  MOV ECX,dword ptr [EAX + 0x70]
0066c46f  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066c475  MOV EAX,dword ptr [EDX + 0x70]
0066c478  MOV EDX,dword ptr [ECX]
0066c47a  MOV ECX,EAX
0066c47c  MOV EAX,dword ptr [EDX + 0x74]
0066c47f  CALL EAX
0066c481  MOV ECX,dword ptr [0x0162ee84]
0066c487  MOV EDX,dword ptr [ECX]
0066c489  MOV ECX,dword ptr [0x0162ee84]
0066c48f  MOV EAX,dword ptr [EDX + 0xb0]
0066c495  CALL EAX
0066c497  MOVZX ECX,AL
0066c49a  TEST ECX,ECX
0066c49c  JNZ 0x0066c4bb
0066c49e  MOV ECX,dword ptr [0x0162ee84]
0066c4a4  CALL 0x00636760
0066c4a9  MOVZX EDX,AL
0066c4ac  TEST EDX,EDX
0066c4ae  JNZ 0x0066c4bb
0066c4b0  MOV ECX,dword ptr [0x0162ee84]
0066c4b6  CALL 0x006361f0
0066c4bb  MOV ECX,dword ptr [0x0162ee84]
0066c4c1  CALL 0x00636760
0066c4c6  MOVZX EAX,AL
0066c4c9  TEST EAX,EAX
0066c4cb  JZ 0x0066c50a
0066c4cd  MOV ECX,dword ptr [0x0162ee84]
0066c4d3  MOV EDX,dword ptr [ECX]
0066c4d5  MOV ECX,dword ptr [0x0162ee84]
0066c4db  MOV EAX,dword ptr [EDX + 0xb0]
0066c4e1  CALL EAX
0066c4e3  MOVZX ECX,AL
0066c4e6  TEST ECX,ECX
0066c4e8  JZ 0x0066c50a
0066c4ea  PUSH 0x0
0066c4ec  PUSH -0x1
0066c4ee  PUSH -0x1
0066c4f0  PUSH 0x0
0066c4f2  PUSH 0x1
0066c4f4  MOV EDX,dword ptr [EBP + 0xffffff7c]
0066c4fa  MOV EAX,dword ptr [EDX]
0066c4fc  MOV ECX,dword ptr [EBP + 0xffffff7c]
0066c502  MOV EDX,dword ptr [EAX + 0x16c]
0066c508  CALL EDX
0066c50a  MOV ECX,dword ptr [EBP + -0xc]
0066c50d  MOV dword ptr FS:[0x0],ECX
0066c514  POP ECX
0066c515  MOV ESP,EBP
0066c517  POP EBP
0066c518  RET

; FUN_00645820  00645820
00645820  PUSH EBP
00645821  MOV EBP,ESP
00645823  PUSH -0x1
00645825  PUSH 0x6abe5e
0064582a  MOV EAX,FS:[0x0]
00645830  PUSH EAX
00645831  SUB ESP,0xc8
00645837  MOV EAX,[0x00781870]
0064583c  XOR EAX,EBP
0064583e  PUSH EAX
0064583f  LEA EAX,[EBP + -0xc]
00645842  MOV FS:[0x0],EAX
00645848  MOV dword ptr [EBP + 0xffffff64],ECX
0064584e  MOV EAX,dword ptr [EBP + 0xffffff64]
00645854  MOV ECX,dword ptr [EBP + 0x8]
00645857  MOV dword ptr [EAX + 0x4],ECX
0064585a  MOV EDX,dword ptr [EBP + 0xffffff64]
00645860  CMP dword ptr [EDX + 0x8],0x0
00645864  JZ 0x0064589e
00645866  MOV EAX,dword ptr [EBP + 0xffffff64]
0064586c  MOV ECX,dword ptr [EAX + 0x8]
0064586f  MOV dword ptr [EBP + -0x14],ECX
00645872  MOV EDX,dword ptr [EBP + -0x14]
00645875  MOV dword ptr [EBP + -0x10],EDX
00645878  CMP dword ptr [EBP + -0x10],0x0
0064587c  JZ 0x00645894
0064587e  PUSH 0x1
00645880  MOV EAX,dword ptr [EBP + -0x10]
00645883  MOV EDX,dword ptr [EAX]
00645885  MOV ECX,dword ptr [EBP + -0x10]
00645888  MOV EAX,dword ptr [EDX]
0064588a  CALL EAX
0064588c  MOV dword ptr [EBP + 0xffffff60],EAX
00645892  JMP 0x0064589e
00645894  MOV dword ptr [EBP + 0xffffff60],0x0
0064589e  PUSH 0x188
006458a3  CALL 0x00686d82
006458a8  ADD ESP,0x4
006458ab  MOV dword ptr [EBP + -0x1c],EAX
006458ae  MOV dword ptr [EBP + -0x4],0x0
006458b5  CMP dword ptr [EBP + -0x1c],0x0
006458b9  JZ 0x006458d6
006458bb  MOV ECX,dword ptr [EBP + 0xc]
006458be  PUSH ECX
006458bf  MOV EDX,dword ptr [EBP + 0xffffff64]
006458c5  PUSH EDX
006458c6  MOV ECX,dword ptr [EBP + -0x1c]
006458c9  CALL 0x00648c70
006458ce  MOV dword ptr [EBP + 0xffffff5c],EAX
006458d4  JMP 0x006458e0
006458d6  MOV dword ptr [EBP + 0xffffff5c],0x0
006458e0  MOV EAX,dword ptr [EBP + 0xffffff5c]
006458e6  MOV dword ptr [EBP + -0x18],EAX
006458e9  MOV dword ptr [EBP + -0x4],0xffffffff
006458f0  MOV ECX,dword ptr [EBP + 0xffffff64]
006458f6  MOV EDX,dword ptr [EBP + -0x18]
006458f9  MOV dword ptr [ECX + 0x8],EDX
006458fc  PUSH 0x6e
006458fe  MOV EAX,dword ptr [EBP + 0xffffff64]
00645904  MOV ECX,dword ptr [EAX + 0x8]
00645907  MOV EDX,dword ptr [EBP + 0xffffff64]
0064590d  MOV EAX,dword ptr [EDX + 0x8]
00645910  MOV EDX,dword ptr [ECX]
00645912  MOV ECX,EAX
00645914  MOV EAX,dword ptr [EDX + 0x6c]
00645917  CALL EAX
00645919  PUSH 0x1
0064591b  MOV ECX,dword ptr [EBP + 0xffffff64]
00645921  MOV ECX,dword ptr [ECX + 0x8]
00645924  CALL 0x005eb700
00645929  PUSH 0x50
0064592b  MOV EDX,dword ptr [EBP + 0xffffff64]
00645931  MOV ECX,dword ptr [EDX + 0x8]
00645934  CALL 0x005eb720
00645939  MOV EAX,dword ptr [EBP + 0xffffff64]
0064593f  MOV ECX,dword ptr [EAX + 0x8]
00645942  MOV EDX,dword ptr [EBP + 0xffffff64]
00645948  MOV EAX,dword ptr [EDX + 0x8]
0064594b  MOV EDX,dword ptr [ECX]
0064594d  MOV ECX,EAX
0064594f  MOV EAX,dword ptr [EDX + 0x40]
00645952  CALL EAX
00645954  MOV ECX,dword ptr [EBP + 0xffffff64]
0064595a  CMP dword ptr [ECX + 0xc],0x0
0064595e  JZ 0x00645998
00645960  MOV EDX,dword ptr [EBP + 0xffffff64]
00645966  MOV EAX,dword ptr [EDX + 0xc]
00645969  MOV dword ptr [EBP + -0x24],EAX
0064596c  MOV ECX,dword ptr [EBP + -0x24]
0064596f  MOV dword ptr [EBP + -0x20],ECX
00645972  CMP dword ptr [EBP + -0x20],0x0
00645976  JZ 0x0064598e
00645978  PUSH 0x1
0064597a  MOV EDX,dword ptr [EBP + -0x20]
0064597d  MOV EAX,dword ptr [EDX]
0064597f  MOV ECX,dword ptr [EBP + -0x20]
00645982  MOV EDX,dword ptr [EAX]
00645984  CALL EDX
00645986  MOV dword ptr [EBP + 0xffffff58],EAX
0064598c  JMP 0x00645998
0064598e  MOV dword ptr [EBP + 0xffffff58],0x0
00645998  PUSH 0x188
0064599d  CALL 0x00686d82
006459a2  ADD ESP,0x4
006459a5  MOV dword ptr [EBP + -0x2c],EAX
006459a8  MOV dword ptr [EBP + -0x4],0x1
006459af  CMP dword ptr [EBP + -0x2c],0x0
006459b3  JZ 0x006459d0
006459b5  MOV EAX,dword ptr [EBP + 0xc]
006459b8  PUSH EAX
006459b9  MOV ECX,dword ptr [EBP + 0xffffff64]
006459bf  PUSH ECX
006459c0  MOV ECX,dword ptr [EBP + -0x2c]
006459c3  CALL 0x00648c70
006459c8  MOV dword ptr [EBP + 0xffffff54],EAX
006459ce  JMP 0x006459da
006459d0  MOV dword ptr [EBP + 0xffffff54],0x0
006459da  MOV EDX,dword ptr [EBP + 0xffffff54]
006459e0  MOV dword ptr [EBP + -0x28],EDX
006459e3  MOV dword ptr [EBP + -0x4],0xffffffff
006459ea  MOV EAX,dword ptr [EBP + 0xffffff64]
006459f0  MOV ECX,dword ptr [EBP + -0x28]
006459f3  MOV dword ptr [EAX + 0xc],ECX
006459f6  PUSH 0x6f
006459f8  MOV EDX,dword ptr [EBP + 0xffffff64]
006459fe  MOV EAX,dword ptr [EDX + 0xc]
00645a01  MOV ECX,dword ptr [EBP + 0xffffff64]
00645a07  MOV ECX,dword ptr [ECX + 0xc]
00645a0a  MOV EDX,dword ptr [EAX]
00645a0c  MOV EAX,dword ptr [EDX + 0x6c]
00645a0f  CALL EAX
00645a11  PUSH 0x1
00645a13  MOV ECX,dword ptr [EBP + 0xffffff64]
00645a19  MOV ECX,dword ptr [ECX + 0xc]
00645a1c  CALL 0x005eb700
00645a21  PUSH 0x50
00645a23  MOV EDX,dword ptr [EBP + 0xffffff64]
00645a29  MOV ECX,dword ptr [EDX + 0xc]
00645a2c  CALL 0x005eb720
00645a31  MOV EAX,dword ptr [EBP + 0xffffff64]
00645a37  MOV ECX,dword ptr [EAX + 0xc]
00645a3a  MOV EDX,dword ptr [EBP + 0xffffff64]
00645a40  MOV EAX,dword ptr [EDX + 0xc]
00645a43  MOV EDX,dword ptr [ECX]
00645a45  MOV ECX,EAX
00645a47  MOV EAX,dword ptr [EDX + 0x40]
00645a4a  CALL EAX
00645a4c  PUSH 0x44c
00645a51  CALL 0x00686d82
00645a56  ADD ESP,0x4
00645a59  MOV dword ptr [EBP + -0x34],EAX
00645a5c  MOV dword ptr [EBP + -0x4],0x2
00645a63  CMP dword ptr [EBP + -0x34],0x0
00645a67  JZ 0x00645a80
00645a69  MOV ECX,dword ptr [EBP + 0xffffff64]
00645a6f  PUSH ECX
00645a70  MOV ECX,dword ptr [EBP + -0x34]
00645a73  CALL 0x00648ec0
00645a78  MOV dword ptr [EBP + 0xffffff50],EAX
00645a7e  JMP 0x00645a8a
00645a80  MOV dword ptr [EBP + 0xffffff50],0x0
00645a8a  MOV EDX,dword ptr [EBP + 0xffffff50]
00645a90  MOV dword ptr [EBP + -0x30],EDX
00645a93  MOV dword ptr [EBP + -0x4],0xffffffff
00645a9a  MOV EAX,dword ptr [EBP + -0x30]
00645a9d  PUSH EAX
00645a9e  MOV ECX,dword ptr [EBP + 0xffffff64]
00645aa4  MOV ECX,dword ptr [ECX + 0xc]
00645aa7  CALL 0x005f5df0
00645aac  PUSH 0x0
00645aae  PUSH 0x0
00645ab0  MOV EDX,dword ptr [EBP + 0xffffff64]
00645ab6  MOV EAX,dword ptr [EDX + 0xc]
00645ab9  MOV ECX,dword ptr [EAX + 0x17c]
00645abf  MOV EDX,dword ptr [EBP + 0xffffff64]
00645ac5  MOV EAX,dword ptr [EDX + 0xc]
00645ac8  MOV EDX,dword ptr [EAX + 0x17c]
00645ace  MOV EAX,dword ptr [ECX]
00645ad0  MOV ECX,EDX
00645ad2  MOV EDX,dword ptr [EAX + 0x8]
00645ad5  CALL EDX
00645ad7  MOV EAX,dword ptr [EBP + 0xffffff64]
00645add  MOV byte ptr [EAX + 0x10],0x0
00645ae1  MOV ECX,dword ptr [EBP + 0xffffff64]
00645ae7  CMP dword ptr [ECX + 0x14],0x0
00645aeb  JNZ 0x00645b40
00645aed  PUSH 0xc8
00645af2  CALL 0x00686d82
00645af7  ADD ESP,0x4
00645afa  MOV dword ptr [EBP + -0x3c],EAX
00645afd  MOV dword ptr [EBP + -0x4],0x3
00645b04  CMP dword ptr [EBP + -0x3c],0x0
00645b08  JZ 0x00645b1a
00645b0a  MOV ECX,dword ptr [EBP + -0x3c]
00645b0d  CALL 0x006640c0
00645b12  MOV dword ptr [EBP + 0xffffff4c],EAX
00645b18  JMP 0x00645b24
00645b1a  MOV dword ptr [EBP + 0xffffff4c],0x0
00645b24  MOV EDX,dword ptr [EBP + 0xffffff4c]
00645b2a  MOV dword ptr [EBP + -0x38],EDX
00645b2d  MOV dword ptr [EBP + -0x4],0xffffffff
00645b34  MOV EAX,dword ptr [EBP + 0xffffff64]
00645b3a  MOV ECX,dword ptr [EBP + -0x38]
00645b3d  MOV dword ptr [EAX + 0x14],ECX
00645b40  MOV EDX,dword ptr [EBP + 0xffffff64]
00645b46  PUSH EDX
00645b47  MOV EAX,dword ptr [EBP + 0xffffff64]
00645b4d  MOV ECX,dword ptr [EAX + 0x8]
00645b50  MOV EDX,dword ptr [ECX + 0x4]
00645b53  PUSH EDX
00645b54  MOV EAX,dword ptr [EBP + 0xffffff64]
00645b5a  MOV ECX,dword ptr [EAX + 0x14]
00645b5d  CALL 0x00664200
00645b62  PUSH 0x6e
00645b64  MOV ECX,dword ptr [EBP + 0xffffff64]
00645b6a  MOV ECX,dword ptr [ECX + 0x14]
00645b6d  CALL 0x00664480
00645b72  MOV EDX,dword ptr [EBP + 0xffffff64]
00645b78  MOV EAX,dword ptr [EDX + 0x4]
00645b7b  MOV dword ptr [EBP + -0x80],EAX
00645b7e  MOV ECX,dword ptr [EBP + -0x80]
00645b81  CALL 0x0063aac0
00645b86  MOV ECX,dword ptr [EAX]
00645b88  MOV dword ptr [EBP + 0xffffff7c],ECX
00645b8e  CMP dword ptr [EBP + 0xffffff7c],0x3
00645b95  JNZ 0x00645c06
00645b97  MOV EDX,dword ptr [EBP + 0xffffff64]
00645b9d  MOV ECX,dword ptr [EDX + 0x4]
00645ba0  CALL 0x0057a470
00645ba5  PUSH EAX
00645ba6  MOV EAX,dword ptr [EBP + 0xffffff64]
00645bac  MOV ECX,dword ptr [EAX + 0x14]
00645baf  CALL 0x00664300
00645bb4  MOVZX ECX,AL
00645bb7  TEST ECX,ECX
00645bb9  JNZ 0x00645c06
00645bbb  MOV EDX,dword ptr [EBP + 0xffffff64]
00645bc1  MOV EAX,dword ptr [EDX + 0x4]
00645bc4  MOV dword ptr [EBP + 0xffffff74],EAX
00645bca  PUSH 0x6b27f8
00645bcf  MOV ECX,dword ptr [EBP + 0xffffff74]
00645bd5  CALL 0x0063aac0
00645bda  ADD EAX,0x38
00645bdd  PUSH EAX
00645bde  CALL 0x00686d8e
00645be3  ADD ESP,0x8
00645be6  MOV ECX,dword ptr [EBP + 0xffffff64]
00645bec  MOV EDX,dword ptr [ECX + 0x4]
00645bef  MOV dword ptr [EBP + 0xffffff70],EDX
00645bf5  MOV ECX,dword ptr [EBP + 0xffffff70]
00645bfb  CALL 0x0063aac0
00645c00  MOV dword ptr [EAX],0x2
00645c06  MOV EAX,dword ptr [EBP + 0xffffff64]
00645c0c  CMP dword ptr [EAX + 0x18],0x0
00645c10  JZ 0x00645c4a
00645c12  MOV ECX,dword ptr [EBP + 0xffffff64]
00645c18  MOV EDX,dword ptr [ECX + 0x18]
00645c1b  MOV dword ptr [EBP + -0x44],EDX
00645c1e  MOV EAX,dword ptr [EBP + -0x44]
00645c21  MOV dword ptr [EBP + -0x40],EAX
00645c24  CMP dword ptr [EBP + -0x40],0x0
00645c28  JZ 0x00645c40
00645c2a  PUSH 0x1
00645c2c  MOV ECX,dword ptr [EBP + -0x40]
00645c2f  MOV EDX,dword ptr [ECX]
00645c31  MOV ECX,dword ptr [EBP + -0x40]
00645c34  MOV EAX,dword ptr [EDX]
00645c36  CALL EAX
00645c38  MOV dword ptr [EBP + 0xffffff48],EAX
00645c3e  JMP 0x00645c4a
00645c40  MOV dword ptr [EBP + 0xffffff48],0x0
00645c4a  PUSH 0x1a8
00645c4f  CALL 0x00686d82
00645c54  ADD ESP,0x4
00645c57  MOV dword ptr [EBP + -0x4c],EAX
00645c5a  MOV dword ptr [EBP + -0x4],0x4
00645c61  CMP dword ptr [EBP + -0x4c],0x0
00645c65  JZ 0x00645c82
00645c67  MOV ECX,dword ptr [EBP + 0xc]
00645c6a  PUSH ECX
00645c6b  MOV EDX,dword ptr [EBP + 0xffffff64]
00645c71  PUSH EDX
00645c72  MOV ECX,dword ptr [EBP + -0x4c]
00645c75  CALL 0x0064aab0
00645c7a  MOV dword ptr [EBP + 0xffffff44],EAX
00645c80  JMP 0x00645c8c
00645c82  MOV dword ptr [EBP + 0xffffff44],0x0
00645c8c  MOV EAX,dword ptr [EBP + 0xffffff44]
00645c92  MOV dword ptr [EBP + -0x48],EAX
00645c95  MOV dword ptr [EBP + -0x4],0xffffffff
00645c9c  MOV ECX,dword ptr [EBP + 0xffffff64]
00645ca2  MOV EDX,dword ptr [EBP + -0x48]
00645ca5  MOV dword ptr [ECX + 0x18],EDX
00645ca8  MOV EAX,dword ptr [EBP + 0xffffff64]
00645cae  MOV ECX,dword ptr [EAX + 0x18]
00645cb1  MOV EDX,dword ptr [EBP + 0xffffff64]
00645cb7  MOV EAX,dword ptr [EDX + 0x18]
00645cba  MOV EDX,dword ptr [ECX]
00645cbc  MOV ECX,EAX
00645cbe  MOV EAX,dword ptr [EDX + 0x40]
00645cc1  CALL EAX
00645cc3  MOV ECX,dword ptr [EBP + 0xffffff64]
00645cc9  CALL 0x00646ea0
00645cce  ADD EAX,0xc8
00645cd3  PUSH EAX
00645cd4  MOV ECX,dword ptr [EBP + 0xffffff64]
00645cda  MOV EDX,dword ptr [ECX + 0x18]
00645cdd  MOV EAX,dword ptr [EBP + 0xffffff64]
00645ce3  MOV ECX,dword ptr [EAX + 0x18]
00645ce6  MOV EDX,dword ptr [EDX]
00645ce8  MOV EAX,dword ptr [EDX + 0x6c]
00645ceb  CALL EAX
00645ced  MOV ECX,dword ptr [EBP + 0xffffff64]
00645cf3  MOV DL,byte ptr [EBP + 0x10]
00645cf6  MOV byte ptr [ECX + 0x2a],DL
00645cf9  MOV EAX,dword ptr [EBP + 0xffffff64]
00645cff  MOV dword ptr [EAX + 0x30],0x0
00645d06  MOV ECX,dword ptr [EBP + 0xffffff64]
00645d0c  MOV DL,byte ptr [EBP + 0x14]
00645d0f  MOV byte ptr [ECX + 0x2b],DL
00645d12  MOV EAX,dword ptr [EBP + 0xffffff64]
00645d18  MOV CL,byte ptr [EBP + 0x18]
00645d1b  MOV byte ptr [EAX + 0x2c],CL
00645d1e  MOV EDX,dword ptr [EBP + 0xffffff64]
00645d24  MOVZX EAX,byte ptr [EDX + 0x2a]
00645d28  TEST EAX,EAX
00645d2a  JNZ 0x00645d31
00645d2c  JMP 0x0064613f
00645d31  MOV ECX,dword ptr [EBP + 0xffffff64]
00645d37  CMP dword ptr [ECX + 0x1c],0x0
00645d3b  JZ 0x00645d82
00645d3d  MOV EDX,dword ptr [EBP + 0xffffff64]
00645d43  MOV EAX,dword ptr [EDX + 0x1c]
00645d46  MOV dword ptr [EBP + -0x54],EAX
00645d49  MOV ECX,dword ptr [EBP + -0x54]
00645d4c  MOV dword ptr [EBP + -0x50],ECX
00645d4f  CMP dword ptr [EBP + -0x50],0x0
00645d53  JZ 0x00645d6b
00645d55  PUSH 0x1
00645d57  MOV EDX,dword ptr [EBP + -0x50]
00645d5a  MOV EAX,dword ptr [EDX]
00645d5c  MOV ECX,dword ptr [EBP + -0x50]
00645d5f  MOV EDX,dword ptr [EAX]
00645d61  CALL EDX
00645d63  MOV dword ptr [EBP + 0xffffff40],EAX
00645d69  JMP 0x00645d75
00645d6b  MOV dword ptr [EBP + 0xffffff40],0x0
00645d75  MOV EAX,dword ptr [EBP + 0xffffff64]
00645d7b  MOV dword ptr [EAX + 0x1c],0x0
00645d82  MOV ECX,dword ptr [0x0162ee84]
00645d88  MOV EDX,dword ptr [ECX]
00645d8a  MOV ECX,dword ptr [0x0162ee84]
00645d90  MOV EAX,dword ptr [EDX + 0xc4]
00645d96  CALL EAX
00645d98  MOVZX ECX,AL
00645d9b  TEST ECX,ECX
00645d9d  JZ 0x00645ebf
00645da3  MOV EDX,dword ptr [EBP + 0xffffff64]
00645da9  MOVZX EAX,byte ptr [EDX + 0x2b]
00645dad  TEST EAX,EAX
00645daf  JZ 0x00645ebf
00645db5  MOV ECX,dword ptr [EBP + 0xffffff64]
00645dbb  MOV EDX,dword ptr [ECX + 0x4]
00645dbe  MOV dword ptr [EBP + 0xffffff68],EDX
00645dc4  MOV ECX,dword ptr [EBP + 0xffffff68]
00645dca  CALL 0x0063aac0
00645dcf  MOV EAX,dword ptr [EAX]
00645dd1  MOV dword ptr [EBP + 0xffffff6c],EAX
00645dd7  XOR ECX,ECX
00645dd9  CMP dword ptr [EBP + 0xffffff6c],0x1
00645de0  SETZ CL
00645de3  MOVZX EDX,CL
00645de6  TEST EDX,EDX
00645de8  JZ 0x00645ebf
00645dee  MOV EAX,[0x0162ee84]
00645df3  MOV EDX,dword ptr [EAX]
00645df5  MOV ECX,dword ptr [0x0162ee84]
00645dfb  MOV EAX,dword ptr [EDX + 0xc8]
00645e01  CALL EAX
00645e03  MOVZX ECX,AL
00645e06  TEST ECX,ECX
00645e08  JZ 0x00645e1c
00645e0a  MOV EDX,dword ptr [EBP + 0xffffff64]
00645e10  MOVZX EAX,byte ptr [EDX + 0x2c]
00645e14  TEST EAX,EAX
00645e16  JNZ 0x00645ebf
00645e1c  PUSH 0x1e0
00645e21  CALL 0x00686d82
00645e26  ADD ESP,0x4
00645e29  MOV dword ptr [EBP + -0x5c],EAX
00645e2c  MOV dword ptr [EBP + -0x4],0x5
00645e33  CMP dword ptr [EBP + -0x5c],0x0
00645e37  JZ 0x00645e54
00645e39  MOV ECX,dword ptr [EBP + 0xc]
00645e3c  PUSH ECX
00645e3d  MOV EDX,dword ptr [EBP + 0xffffff64]
00645e43  PUSH EDX
00645e44  MOV ECX,dword ptr [EBP + -0x5c]
00645e47  CALL 0x0064bf00
00645e4c  MOV dword ptr [EBP + 0xffffff3c],EAX
00645e52  JMP 0x00645e5e
00645e54  MOV dword ptr [EBP + 0xffffff3c],0x0
00645e5e  MOV EAX,dword ptr [EBP + 0xffffff3c]
00645e64  MOV dword ptr [EBP + -0x58],EAX
00645e67  MOV dword ptr [EBP + -0x4],0xffffffff
00645e6e  MOV ECX,dword ptr [EBP + 0xffffff64]
00645e74  MOV EDX,dword ptr [EBP + -0x58]
00645e77  MOV dword ptr [ECX + 0x1c],EDX
00645e7a  MOV EAX,dword ptr [EBP + 0xffffff64]
00645e80  MOV ECX,dword ptr [EAX + 0x1c]
00645e83  MOV EDX,dword ptr [EBP + 0xffffff64]
00645e89  MOV EAX,dword ptr [EDX + 0x1c]
00645e8c  MOV EDX,dword ptr [ECX]
00645e8e  MOV ECX,EAX
00645e90  MOV EAX,dword ptr [EDX + 0x40]
00645e93  CALL EAX
00645e95  MOV ECX,dword ptr [EBP + 0xffffff64]
00645e9b  CALL 0x00646ea0
00645ea0  ADD EAX,0xc9
00645ea5  PUSH EAX
00645ea6  MOV ECX,dword ptr [EBP + 0xffffff64]
00645eac  MOV EDX,dword ptr [ECX + 0x1c]
00645eaf  MOV EAX,dword ptr [EBP + 0xffffff64]
00645eb5  MOV ECX,dword ptr [EAX + 0x1c]
00645eb8  MOV EDX,dword ptr [EDX]
00645eba  MOV EAX,dword ptr [EDX + 0x6c]
00645ebd  CALL EAX
00645ebf  MOV ECX,dword ptr [EBP + 0xffffff64]
00645ec5  CMP dword ptr [ECX + 0x20],0x0
00645ec9  JZ 0x00645f10
00645ecb  MOV EDX,dword ptr [EBP + 0xffffff64]
00645ed1  MOV EAX,dword ptr [EDX + 0x20]
00645ed4  MOV dword ptr [EBP + -0x64],EAX
00645ed7  MOV ECX,dword ptr [EBP + -0x64]
00645eda  MOV dword ptr [EBP + -0x60],ECX
00645edd  CMP dword ptr [EBP + -0x60],0x0
00645ee1  JZ 0x00645ef9
00645ee3  PUSH 0x1
00645ee5  MOV EDX,dword ptr [EBP + -0x60]
00645ee8  MOV EAX,dword ptr [EDX]
00645eea  MOV ECX,dword ptr [EBP + -0x60]
00645eed  MOV EDX,dword ptr [EAX]
00645eef  CALL EDX
00645ef1  MOV dword ptr [EBP + 0xffffff38],EAX
00645ef7  JMP 0x00645f03
00645ef9  MOV dword ptr [EBP + 0xffffff38],0x0
00645f03  MOV EAX,dword ptr [EBP + 0xffffff64]
00645f09  MOV dword ptr [EAX + 0x20],0x0
00645f10  MOV ECX,dword ptr [EBP + 0xffffff64]
00645f16  CMP dword ptr [ECX + 0x24],0x0
00645f1a  JZ 0x00645f61
00645f1c  MOV EDX,dword ptr [EBP + 0xffffff64]
00645f22  MOV EAX,dword ptr [EDX + 0x24]
00645f25  MOV dword ptr [EBP + -0x6c],EAX
00645f28  MOV ECX,dword ptr [EBP + -0x6c]
00645f2b  MOV dword ptr [EBP + -0x68],ECX
00645f2e  CMP dword ptr [EBP + -0x68],0x0
00645f32  JZ 0x00645f4a
00645f34  PUSH 0x1
00645f36  MOV EDX,dword ptr [EBP + -0x68]
00645f39  MOV EAX,dword ptr [EDX]
00645f3b  MOV ECX,dword ptr [EBP + -0x68]
00645f3e  MOV EDX,dword ptr [EAX]
00645f40  CALL EDX
00645f42  MOV dword ptr [EBP + 0xffffff34],EAX
00645f48  JMP 0x00645f54
00645f4a  MOV dword ptr [EBP + 0xffffff34],0x0
00645f54  MOV EAX,dword ptr [EBP + 0xffffff64]
00645f5a  MOV dword ptr [EAX + 0x24],0x0
00645f61  MOV ECX,dword ptr [0x0162ee84]
00645f67  MOV EDX,dword ptr [ECX]
00645f69  MOV ECX,dword ptr [0x0162ee84]
00645f6f  MOV EAX,dword ptr [EDX + 0xc8]
00645f75  CALL EAX
00645f77  MOVZX ECX,AL
00645f7a  TEST ECX,ECX
00645f7c  JZ 0x0064613f
00645f82  MOV EDX,dword ptr [0x0162ee80]
00645f88  MOV EAX,dword ptr [EDX]
00645f8a  MOV ECX,dword ptr [0x0162ee80]
00645f90  MOV EDX,dword ptr [EAX + 0x1e0]
00645f96  CALL EDX
00645f98  MOVZX EAX,AL
00645f9b  TEST EAX,EAX
00645f9d  JZ 0x0064613f
00645fa3  MOV ECX,dword ptr [EBP + 0xffffff64]
00645fa9  MOVZX EDX,byte ptr [ECX + 0x2c]
00645fad  TEST EDX,EDX
00645faf  JZ 0x0064613f
00645fb5  PUSH 0x1e4
00645fba  CALL 0x00686d82
00645fbf  ADD ESP,0x4
00645fc2  MOV dword ptr [EBP + -0x74],EAX
00645fc5  MOV dword ptr [EBP + -0x4],0x6
00645fcc  CMP dword ptr [EBP + -0x74],0x0
00645fd0  JZ 0x00645fef
00645fd2  PUSH 0x1
00645fd4  MOV EAX,dword ptr [EBP + 0xc]
00645fd7  PUSH EAX
00645fd8  MOV ECX,dword ptr [EBP + 0xffffff64]
00645fde  PUSH ECX
00645fdf  MOV ECX,dword ptr [EBP + -0x74]
00645fe2  CALL 0x0064c070
00645fe7  MOV dword ptr [EBP + 0xffffff30],EAX
00645fed  JMP 0x00645ff9
00645fef  MOV dword ptr [EBP + 0xffffff30],0x0
00645ff9  MOV EDX,dword ptr [EBP + 0xffffff30]
00645fff  MOV dword ptr [EBP + -0x70],EDX
00646002  MOV dword ptr [EBP + -0x4],0xffffffff
00646009  MOV EAX,dword ptr [EBP + 0xffffff64]
0064600f  MOV ECX,dword ptr [EBP + -0x70]
00646012  MOV dword ptr [EAX + 0x20],ECX
00646015  MOV EDX,dword ptr [EBP + 0xffffff64]
0064601b  MOV EAX,dword ptr [EDX + 0x20]
0064601e  MOV ECX,dword ptr [EBP + 0xffffff64]
00646024  MOV ECX,dword ptr [ECX + 0x20]
00646027  MOV EDX,dword ptr [EAX]
00646029  MOV EAX,dword ptr [EDX + 0x40]
0064602c  CALL EAX
0064602e  MOV ECX,dword ptr [EBP + 0xffffff64]
00646034  MOV EDX,dword ptr [ECX + 0x4]
00646037  MOV EAX,dword ptr [EDX + 0x4]
0064603a  LEA ECX,[EAX + EAX*0x1 + 0x31]
0064603e  PUSH ECX
0064603f  MOV EDX,dword ptr [EBP + 0xffffff64]
00646045  MOV ECX,dword ptr [EDX + 0x20]
00646048  CALL 0x006026f0
0064604d  MOV ECX,dword ptr [EBP + 0xffffff64]
00646053  CALL 0x00646ea0
00646058  ADD EAX,0xc9
0064605d  PUSH EAX
0064605e  MOV EAX,dword ptr [EBP + 0xffffff64]
00646064  MOV ECX,dword ptr [EAX + 0x20]
00646067  MOV EDX,dword ptr [EBP + 0xffffff64]
0064606d  MOV EAX,dword ptr [EDX + 0x20]
00646070  MOV EDX,dword ptr [ECX]
00646072  MOV ECX,EAX
00646074  MOV EAX,dword ptr [EDX + 0x6c]
00646077  CALL EAX
00646079  PUSH 0x1e4
0064607e  CALL 0x00686d82
00646083  ADD ESP,0x4
00646086  MOV dword ptr [EBP + -0x7c],EAX
00646089  MOV dword ptr [EBP + -0x4],0x7
00646090  CMP dword ptr [EBP + -0x7c],0x0
00646094  JZ 0x006460b3
00646096  PUSH 0x0
00646098  MOV ECX,dword ptr [EBP + 0xc]
0064609b  PUSH ECX
0064609c  MOV EDX,dword ptr [EBP + 0xffffff64]
006460a2  PUSH EDX
006460a3  MOV ECX,dword ptr [EBP + -0x7c]
006460a6  CALL 0x0064c070
006460ab  MOV dword ptr [EBP + 0xffffff2c],EAX
006460b1  JMP 0x006460bd
006460b3  MOV dword ptr [EBP + 0xffffff2c],0x0
006460bd  MOV EAX,dword ptr [EBP + 0xffffff2c]
006460c3  MOV dword ptr [EBP + -0x78],EAX
006460c6  MOV dword ptr [EBP + -0x4],0xffffffff
006460cd  MOV ECX,dword ptr [EBP + 0xffffff64]
006460d3  MOV EDX,dword ptr [EBP + -0x78]
006460d6  MOV dword ptr [ECX + 0x24],EDX
006460d9  MOV EAX,dword ptr [EBP + 0xffffff64]
006460df  MOV ECX,dword ptr [EAX + 0x24]
006460e2  MOV EDX,dword ptr [EBP + 0xffffff64]
006460e8  MOV EAX,dword ptr [EDX + 0x24]
006460eb  MOV EDX,dword ptr [ECX]
006460ed  MOV ECX,EAX
006460ef  MOV EAX,dword ptr [EDX + 0x40]
006460f2  CALL EAX
006460f4  MOV ECX,dword ptr [EBP + 0xffffff64]
006460fa  MOV EDX,dword ptr [ECX + 0x4]
006460fd  MOV EAX,dword ptr [EDX + 0x4]
00646100  LEA ECX,[EAX + EAX*0x1 + 0x32]
00646104  PUSH ECX
00646105  MOV EDX,dword ptr [EBP + 0xffffff64]
0064610b  MOV ECX,dword ptr [EDX + 0x24]
0064610e  CALL 0x006026f0
00646113  MOV ECX,dword ptr [EBP + 0xffffff64]
00646119  CALL 0x00646ea0
0064611e  ADD EAX,0xc9
00646123  PUSH EAX
00646124  MOV EAX,dword ptr [EBP + 0xffffff64]
0064612a  MOV ECX,dword ptr [EAX + 0x24]
0064612d  MOV EDX,dword ptr [EBP + 0xffffff64]
00646133  MOV EAX,dword ptr [EDX + 0x24]
00646136  MOV EDX,dword ptr [ECX]
00646138  MOV ECX,EAX
0064613a  MOV EAX,dword ptr [EDX + 0x6c]
0064613d  CALL EAX
0064613f  MOV ECX,dword ptr [EBP + -0xc]
00646142  MOV dword ptr FS:[0x0],ECX
00646149  POP ECX
0064614a  MOV ESP,EBP
0064614c  POP EBP
0064614d  RET 0x14

; FUN_0068c500  0068c500
0068c500  PUSH EBP
0068c501  MOV EBP,ESP
0068c503  SUB ESP,0x1c0
0068c509  MOV dword ptr [EBP + 0xfffffe40],ECX
0068c50f  MOV dword ptr [EBP + -0x8],0x0
0068c516  MOV dword ptr [EBP + -0x4],0x0
0068c51d  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068c523  MOV ECX,dword ptr [EAX + 0x8]
0068c526  MOV dword ptr [EBP + -0x48],ECX
0068c529  CMP dword ptr [EBP + -0x48],0x0
0068c52d  JNZ 0x0068c55b
0068c52f  MOV EDX,dword ptr [EBP + 0x14]
0068c532  PUSH EDX
0068c533  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068c539  MOV ECX,dword ptr [EAX + 0x4]
0068c53c  PUSH ECX
0068c53d  PUSH 0x1
0068c53f  MOV EDX,dword ptr [EBP + 0x8]
0068c542  PUSH EDX
0068c543  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c549  CALL 0x0068d820
0068c54e  MOV EAX,dword ptr [EBP + 0x8]
0068c551  JMP 0x0068cc30
0068c55b  XOR EAX,EAX
0068c55d  JZ 0x0068c8da
0068c563  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c569  MOV EDX,dword ptr [ECX + 0x4]
0068c56c  MOV dword ptr [EBP + 0xffffff68],EDX
0068c572  MOV EAX,dword ptr [EBP + 0xffffff68]
0068c578  MOV ECX,dword ptr [EAX]
0068c57a  MOV dword ptr [EBP + 0xffffff64],ECX
0068c580  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068c586  PUSH EDX
0068c587  MOV EAX,dword ptr [EBP + 0xffffff64]
0068c58d  PUSH EAX
0068c58e  LEA ECX,[EBP + -0x10]
0068c591  CALL 0x0068d4b0
0068c596  CMP dword ptr [EBP + 0xc],0x0
0068c59a  JZ 0x0068c5a4
0068c59c  MOV ECX,dword ptr [EBP + 0xc]
0068c59f  CMP ECX,dword ptr [EBP + -0x10]
0068c5a2  JZ 0x0068c5aa
0068c5a4  CALL dword ptr [0x006b2274]
0068c5aa  MOV EDX,dword ptr [EBP + 0x10]
0068c5ad  XOR EAX,EAX
0068c5af  CMP EDX,dword ptr [EBP + -0xc]
0068c5b2  SETZ AL
0068c5b5  MOVZX ECX,AL
0068c5b8  TEST ECX,ECX
0068c5ba  JZ 0x0068c615
0068c5bc  MOV EDX,dword ptr [EBP + 0x10]
0068c5bf  MOV dword ptr [EBP + 0xffffff60],EDX
0068c5c5  MOV EAX,dword ptr [EBP + 0x14]
0068c5c8  PUSH EAX
0068c5c9  MOV ECX,dword ptr [EBP + 0xffffff60]
0068c5cf  ADD ECX,0xc
0068c5d2  PUSH ECX
0068c5d3  CALL dword ptr [0x006b20f0]
0068c5d9  ADD ESP,0x8
0068c5dc  MOVZX EDX,AL
0068c5df  TEST EDX,EDX
0068c5e1  JNZ 0x0068c610
0068c5e3  MOV EAX,dword ptr [EBP + 0x10]
0068c5e6  MOV dword ptr [EBP + 0xffffff5c],EAX
0068c5ec  MOV ECX,dword ptr [EBP + 0x14]
0068c5ef  PUSH ECX
0068c5f0  MOV EDX,dword ptr [EBP + 0xffffff5c]
0068c5f6  PUSH EDX
0068c5f7  PUSH 0x1
0068c5f9  MOV EAX,dword ptr [EBP + 0x8]
0068c5fc  PUSH EAX
0068c5fd  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c603  CALL 0x0068d820
0068c608  MOV EAX,dword ptr [EBP + 0x8]
0068c60b  JMP 0x0068cc30
0068c610  JMP 0x0068c8d5
0068c615  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c61b  MOV EDX,dword ptr [ECX + 0x4]
0068c61e  MOV dword ptr [EBP + 0xffffff0c],EDX
0068c624  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068c62a  PUSH EAX
0068c62b  MOV ECX,dword ptr [EBP + 0xffffff0c]
0068c631  PUSH ECX
0068c632  LEA ECX,[EBP + -0x18]
0068c635  CALL 0x0068d4b0
0068c63a  CMP dword ptr [EBP + 0xc],0x0
0068c63e  JZ 0x0068c648
0068c640  MOV EDX,dword ptr [EBP + 0xc]
0068c643  CMP EDX,dword ptr [EBP + -0x18]
0068c646  JZ 0x0068c64e
0068c648  CALL dword ptr [0x006b2274]
0068c64e  MOV EAX,dword ptr [EBP + 0x10]
0068c651  XOR ECX,ECX
0068c653  CMP EAX,dword ptr [EBP + -0x14]
0068c656  SETZ CL
0068c659  MOVZX EDX,CL
0068c65c  TEST EDX,EDX
0068c65e  JZ 0x0068c6cd
0068c660  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068c666  MOV ECX,dword ptr [EAX + 0x4]
0068c669  ADD ECX,0x8
0068c66c  MOV dword ptr [EBP + 0xffffff08],ECX
0068c672  MOV EDX,dword ptr [EBP + 0xffffff08]
0068c678  MOV EAX,dword ptr [EDX]
0068c67a  ADD EAX,0xc
0068c67d  MOV dword ptr [EBP + 0xffffff04],EAX
0068c683  MOV ECX,dword ptr [EBP + 0xffffff04]
0068c689  PUSH ECX
0068c68a  MOV EDX,dword ptr [EBP + 0x14]
0068c68d  PUSH EDX
0068c68e  CALL dword ptr [0x006b20f0]
0068c694  ADD ESP,0x8
0068c697  MOVZX EAX,AL
0068c69a  TEST EAX,EAX
0068c69c  JNZ 0x0068c6c8
0068c69e  MOV ECX,dword ptr [EBP + 0x14]
0068c6a1  PUSH ECX
0068c6a2  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068c6a8  MOV EAX,dword ptr [EDX + 0x4]
0068c6ab  MOV ECX,dword ptr [EAX + 0x8]
0068c6ae  PUSH ECX
0068c6af  PUSH 0x0
0068c6b1  MOV EDX,dword ptr [EBP + 0x8]
0068c6b4  PUSH EDX
0068c6b5  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c6bb  CALL 0x0068d820
0068c6c0  MOV EAX,dword ptr [EBP + 0x8]
0068c6c3  JMP 0x0068cc30
0068c6c8  JMP 0x0068c8d5
0068c6cd  MOV EAX,dword ptr [EBP + 0x10]
0068c6d0  MOV dword ptr [EBP + 0xfffffeb4],EAX
0068c6d6  MOV ECX,dword ptr [EBP + 0x14]
0068c6d9  PUSH ECX
0068c6da  MOV EDX,dword ptr [EBP + 0xfffffeb4]
0068c6e0  ADD EDX,0xc
0068c6e3  PUSH EDX
0068c6e4  CALL dword ptr [0x006b20f0]
0068c6ea  ADD ESP,0x8
0068c6ed  MOVZX EAX,AL
0068c6f0  TEST EAX,EAX
0068c6f2  JNZ 0x0068c7ae
0068c6f8  MOV ECX,dword ptr [EBP + 0xc]
0068c6fb  MOV dword ptr [EBP + -0x8],ECX
0068c6fe  MOV EDX,dword ptr [EBP + 0x10]
0068c701  MOV dword ptr [EBP + -0x4],EDX
0068c704  LEA ECX,[EBP + -0x8]
0068c707  CALL 0x0068f800
0068c70c  MOV EAX,dword ptr [EBP + -0x4]
0068c70f  MOV dword ptr [EBP + 0xfffffeb0],EAX
0068c715  MOV ECX,dword ptr [EBP + 0xfffffeb0]
0068c71b  ADD ECX,0xc
0068c71e  PUSH ECX
0068c71f  MOV EDX,dword ptr [EBP + 0x14]
0068c722  PUSH EDX
0068c723  CALL dword ptr [0x006b20f0]
0068c729  ADD ESP,0x8
0068c72c  MOVZX EAX,AL
0068c72f  TEST EAX,EAX
0068c731  JNZ 0x0068c7ae
0068c733  MOV ECX,dword ptr [EBP + -0x4]
0068c736  MOV dword ptr [EBP + 0xfffffeac],ECX
0068c73c  MOV EDX,dword ptr [EBP + 0xfffffeac]
0068c742  MOV EAX,dword ptr [EDX + 0x8]
0068c745  MOVSX ECX,byte ptr [EAX + 0x45]
0068c749  TEST ECX,ECX
0068c74b  JZ 0x0068c77c
0068c74d  MOV EDX,dword ptr [EBP + -0x4]
0068c750  MOV dword ptr [EBP + 0xfffffea8],EDX
0068c756  MOV EAX,dword ptr [EBP + 0x14]
0068c759  PUSH EAX
0068c75a  MOV ECX,dword ptr [EBP + 0xfffffea8]
0068c760  PUSH ECX
0068c761  PUSH 0x0
0068c763  MOV EDX,dword ptr [EBP + 0x8]
0068c766  PUSH EDX
0068c767  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c76d  CALL 0x0068d820
0068c772  MOV EAX,dword ptr [EBP + 0x8]
0068c775  JMP 0x0068cc30
0068c77c  MOV EAX,dword ptr [EBP + 0x10]
0068c77f  MOV dword ptr [EBP + 0xfffffea4],EAX
0068c785  MOV ECX,dword ptr [EBP + 0x14]
0068c788  PUSH ECX
0068c789  MOV EDX,dword ptr [EBP + 0xfffffea4]
0068c78f  PUSH EDX
0068c790  PUSH 0x1
0068c792  MOV EAX,dword ptr [EBP + 0x8]
0068c795  PUSH EAX
0068c796  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c79c  CALL 0x0068d820
0068c7a1  MOV EAX,dword ptr [EBP + 0x8]
0068c7a4  JMP 0x0068cc30
0068c7ae  MOV ECX,dword ptr [EBP + 0x10]
0068c7b1  MOV dword ptr [EBP + 0xfffffea0],ECX
0068c7b7  MOV EDX,dword ptr [EBP + 0xfffffea0]
0068c7bd  ADD EDX,0xc
0068c7c0  PUSH EDX
0068c7c1  MOV EAX,dword ptr [EBP + 0x14]
0068c7c4  PUSH EAX
0068c7c5  CALL dword ptr [0x006b20f0]
0068c7cb  ADD ESP,0x8
0068c7ce  MOVZX ECX,AL
0068c7d1  TEST ECX,ECX
0068c7d3  JNZ 0x0068c8d5
0068c7d9  MOV EDX,dword ptr [EBP + 0xc]
0068c7dc  MOV dword ptr [EBP + -0x8],EDX
0068c7df  MOV EAX,dword ptr [EBP + 0x10]
0068c7e2  MOV dword ptr [EBP + -0x4],EAX
0068c7e5  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c7eb  MOV EDX,dword ptr [ECX + 0x4]
0068c7ee  MOV dword ptr [EBP + 0xfffffe9c],EDX
0068c7f4  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068c7fa  PUSH EAX
0068c7fb  MOV ECX,dword ptr [EBP + 0xfffffe9c]
0068c801  PUSH ECX
0068c802  LEA ECX,[EBP + -0x20]
0068c805  CALL 0x0068d4b0
0068c80a  LEA ECX,[EBP + -0x8]
0068c80d  CALL 0x0068edc0
0068c812  CMP dword ptr [EBP + -0x8],0x0
0068c816  JZ 0x0068c820
0068c818  MOV EDX,dword ptr [EBP + -0x8]
0068c81b  CMP EDX,dword ptr [EBP + -0x20]
0068c81e  JZ 0x0068c826
0068c820  CALL dword ptr [0x006b2274]
0068c826  MOV EAX,dword ptr [EBP + -0x4]
0068c829  XOR ECX,ECX
0068c82b  CMP EAX,dword ptr [EBP + -0x1c]
0068c82e  SETZ CL
0068c831  MOVZX EDX,CL
0068c834  TEST EDX,EDX
0068c836  JNZ 0x0068c85f
0068c838  MOV EAX,dword ptr [EBP + -0x4]
0068c83b  MOV dword ptr [EBP + 0xfffffe98],EAX
0068c841  MOV ECX,dword ptr [EBP + 0x14]
0068c844  PUSH ECX
0068c845  MOV EDX,dword ptr [EBP + 0xfffffe98]
0068c84b  ADD EDX,0xc
0068c84e  PUSH EDX
0068c84f  CALL dword ptr [0x006b20f0]
0068c855  ADD ESP,0x8
0068c858  MOVZX EAX,AL
0068c85b  TEST EAX,EAX
0068c85d  JNZ 0x0068c8d5
0068c85f  MOV ECX,dword ptr [EBP + 0x10]
0068c862  MOV dword ptr [EBP + 0xfffffe94],ECX
0068c868  MOV EDX,dword ptr [EBP + 0xfffffe94]
0068c86e  MOV EAX,dword ptr [EDX + 0x8]
0068c871  MOVSX ECX,byte ptr [EAX + 0x45]
0068c875  TEST ECX,ECX
0068c877  JZ 0x0068c8a8
0068c879  MOV EDX,dword ptr [EBP + 0x10]
0068c87c  MOV dword ptr [EBP + 0xfffffe90],EDX
0068c882  MOV EAX,dword ptr [EBP + 0x14]
0068c885  PUSH EAX
0068c886  MOV ECX,dword ptr [EBP + 0xfffffe90]
0068c88c  PUSH ECX
0068c88d  PUSH 0x0
0068c88f  MOV EDX,dword ptr [EBP + 0x8]
0068c892  PUSH EDX
0068c893  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c899  CALL 0x0068d820
0068c89e  MOV EAX,dword ptr [EBP + 0x8]
0068c8a1  JMP 0x0068cc30
0068c8a8  MOV EAX,dword ptr [EBP + -0x4]
0068c8ab  MOV dword ptr [EBP + 0xfffffe8c],EAX
0068c8b1  MOV ECX,dword ptr [EBP + 0x14]
0068c8b4  PUSH ECX
0068c8b5  MOV EDX,dword ptr [EBP + 0xfffffe8c]
0068c8bb  PUSH EDX
0068c8bc  PUSH 0x1
0068c8be  MOV EAX,dword ptr [EBP + 0x8]
0068c8c1  PUSH EAX
0068c8c2  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c8c8  CALL 0x0068d820
0068c8cd  MOV EAX,dword ptr [EBP + 0x8]
0068c8d0  JMP 0x0068cc30
0068c8d5  JMP 0x0068cc0d
0068c8da  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c8e0  MOV EDX,dword ptr [ECX + 0x4]
0068c8e3  MOV dword ptr [EBP + 0xfffffe88],EDX
0068c8e9  MOV EAX,dword ptr [EBP + 0xfffffe88]
0068c8ef  MOV ECX,dword ptr [EAX]
0068c8f1  MOV dword ptr [EBP + 0xfffffe84],ECX
0068c8f7  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068c8fd  PUSH EDX
0068c8fe  MOV EAX,dword ptr [EBP + 0xfffffe84]
0068c904  PUSH EAX
0068c905  LEA ECX,[EBP + -0x28]
0068c908  CALL 0x0068d4b0
0068c90d  LEA ECX,[EBP + -0x28]
0068c910  PUSH ECX
0068c911  LEA ECX,[EBP + 0xc]
0068c914  CALL 0x006118f0
0068c919  MOVZX EDX,AL
0068c91c  TEST EDX,EDX
0068c91e  JZ 0x0068c979
0068c920  MOV EAX,dword ptr [EBP + 0x10]
0068c923  MOV dword ptr [EBP + 0xfffffe80],EAX
0068c929  MOV ECX,dword ptr [EBP + 0xfffffe80]
0068c92f  ADD ECX,0xc
0068c932  PUSH ECX
0068c933  MOV EDX,dword ptr [EBP + 0x14]
0068c936  PUSH EDX
0068c937  CALL dword ptr [0x006b20f0]
0068c93d  ADD ESP,0x8
0068c940  MOVZX EAX,AL
0068c943  TEST EAX,EAX
0068c945  JZ 0x0068c974
0068c947  MOV ECX,dword ptr [EBP + 0x10]
0068c94a  MOV dword ptr [EBP + 0xfffffe7c],ECX
0068c950  MOV EDX,dword ptr [EBP + 0x14]
0068c953  PUSH EDX
0068c954  MOV EAX,dword ptr [EBP + 0xfffffe7c]
0068c95a  PUSH EAX
0068c95b  PUSH 0x1
0068c95d  MOV ECX,dword ptr [EBP + 0x8]
0068c960  PUSH ECX
0068c961  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c967  CALL 0x0068d820
0068c96c  MOV EAX,dword ptr [EBP + 0x8]
0068c96f  JMP 0x0068cc30
0068c974  JMP 0x0068cc0d
0068c979  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068c97f  MOV EAX,dword ptr [EDX + 0x4]
0068c982  MOV dword ptr [EBP + 0xfffffe78],EAX
0068c988  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c98e  PUSH ECX
0068c98f  MOV EDX,dword ptr [EBP + 0xfffffe78]
0068c995  PUSH EDX
0068c996  LEA ECX,[EBP + -0x30]
0068c999  CALL 0x0068d4b0
0068c99e  LEA EAX,[EBP + -0x30]
0068c9a1  PUSH EAX
0068c9a2  LEA ECX,[EBP + 0xc]
0068c9a5  CALL 0x006118f0
0068c9aa  MOVZX ECX,AL
0068c9ad  TEST ECX,ECX
0068c9af  JZ 0x0068ca1e
0068c9b1  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068c9b7  MOV EAX,dword ptr [EDX + 0x4]
0068c9ba  ADD EAX,0x8
0068c9bd  MOV dword ptr [EBP + 0xfffffe74],EAX
0068c9c3  MOV ECX,dword ptr [EBP + 0xfffffe74]
0068c9c9  MOV EDX,dword ptr [ECX]
0068c9cb  ADD EDX,0xc
0068c9ce  MOV dword ptr [EBP + 0xfffffe70],EDX
0068c9d4  MOV EAX,dword ptr [EBP + 0x14]
0068c9d7  PUSH EAX
0068c9d8  MOV ECX,dword ptr [EBP + 0xfffffe70]
0068c9de  PUSH ECX
0068c9df  CALL dword ptr [0x006b20f0]
0068c9e5  ADD ESP,0x8
0068c9e8  MOVZX EDX,AL
0068c9eb  TEST EDX,EDX
0068c9ed  JZ 0x0068ca19
0068c9ef  MOV EAX,dword ptr [EBP + 0x14]
0068c9f2  PUSH EAX
0068c9f3  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c9f9  MOV EDX,dword ptr [ECX + 0x4]
0068c9fc  MOV EAX,dword ptr [EDX + 0x8]
0068c9ff  PUSH EAX
0068ca00  PUSH 0x0
0068ca02  MOV ECX,dword ptr [EBP + 0x8]
0068ca05  PUSH ECX
0068ca06  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068ca0c  CALL 0x0068d820
0068ca11  MOV EAX,dword ptr [EBP + 0x8]
0068ca14  JMP 0x0068cc30
0068ca19  JMP 0x0068cc0d
0068ca1e  MOV EDX,dword ptr [EBP + 0x10]
0068ca21  MOV dword ptr [EBP + 0xfffffe6c],EDX
0068ca27  MOV EAX,dword ptr [EBP + 0xfffffe6c]
0068ca2d  ADD EAX,0xc
0068ca30  PUSH EAX
0068ca31  MOV ECX,dword ptr [EBP + 0x14]
0068ca34  PUSH ECX
0068ca35  CALL dword ptr [0x006b20f0]
0068ca3b  ADD ESP,0x8
0068ca3e  MOVZX EDX,AL
0068ca41  TEST EDX,EDX
0068ca43  JZ 0x0068caff
0068ca49  MOV EAX,dword ptr [EBP + 0xc]
0068ca4c  MOV dword ptr [EBP + -0x8],EAX
0068ca4f  MOV ECX,dword ptr [EBP + 0x10]
0068ca52  MOV dword ptr [EBP + -0x4],ECX
0068ca55  LEA ECX,[EBP + -0x8]
0068ca58  CALL 0x0068f800
0068ca5d  MOV EDX,dword ptr [EBP + -0x4]
0068ca60  MOV dword ptr [EBP + 0xfffffe68],EDX
0068ca66  MOV EAX,dword ptr [EBP + 0x14]
0068ca69  PUSH EAX
0068ca6a  MOV ECX,dword ptr [EBP + 0xfffffe68]
0068ca70  ADD ECX,0xc
0068ca73  PUSH ECX
0068ca74  CALL dword ptr [0x006b20f0]
0068ca7a  ADD ESP,0x8
0068ca7d  MOVZX EDX,AL
0068ca80  TEST EDX,EDX
0068ca82  JZ 0x0068caff
0068ca84  MOV EAX,dword ptr [EBP + -0x4]
0068ca87  MOV dword ptr [EBP + 0xfffffe64],EAX
0068ca8d  MOV ECX,dword ptr [EBP + 0xfffffe64]
0068ca93  MOV EDX,dword ptr [ECX + 0x8]
0068ca96  MOVSX EAX,byte ptr [EDX + 0x45]
0068ca9a  TEST EAX,EAX
0068ca9c  JZ 0x0068cacd
0068ca9e  MOV ECX,dword ptr [EBP + -0x4]
0068caa1  MOV dword ptr [EBP + 0xfffffe60],ECX
0068caa7  MOV EDX,dword ptr [EBP + 0x14]
0068caaa  PUSH EDX
0068caab  MOV EAX,dword ptr [EBP + 0xfffffe60]
0068cab1  PUSH EAX
0068cab2  PUSH 0x0
0068cab4  MOV ECX,dword ptr [EBP + 0x8]
0068cab7  PUSH ECX
0068cab8  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068cabe  CALL 0x0068d820
0068cac3  MOV EAX,dword ptr [EBP + 0x8]
0068cac6  JMP 0x0068cc30
0068cacd  MOV EDX,dword ptr [EBP + 0x10]
0068cad0  MOV dword ptr [EBP + 0xfffffe5c],EDX
0068cad6  MOV EAX,dword ptr [EBP + 0x14]
0068cad9  PUSH EAX
0068cada  MOV ECX,dword ptr [EBP + 0xfffffe5c]
0068cae0  PUSH ECX
0068cae1  PUSH 0x1
0068cae3  MOV EDX,dword ptr [EBP + 0x8]
0068cae6  PUSH EDX
0068cae7  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068caed  CALL 0x0068d820
0068caf2  MOV EAX,dword ptr [EBP + 0x8]
0068caf5  JMP 0x0068cc30
0068caff  MOV EAX,dword ptr [EBP + 0x10]
0068cb02  MOV dword ptr [EBP + 0xfffffe58],EAX
0068cb08  MOV ECX,dword ptr [EBP + 0x14]
0068cb0b  PUSH ECX
0068cb0c  MOV EDX,dword ptr [EBP + 0xfffffe58]
0068cb12  ADD EDX,0xc
0068cb15  PUSH EDX
0068cb16  CALL dword ptr [0x006b20f0]
0068cb1c  ADD ESP,0x8
0068cb1f  MOVZX EAX,AL
0068cb22  TEST EAX,EAX
0068cb24  JZ 0x0068cc0d
0068cb2a  MOV ECX,dword ptr [EBP + 0xc]
0068cb2d  MOV dword ptr [EBP + -0x8],ECX
0068cb30  MOV EDX,dword ptr [EBP + 0x10]
0068cb33  MOV dword ptr [EBP + -0x4],EDX
0068cb36  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068cb3c  MOV ECX,dword ptr [EAX + 0x4]
0068cb3f  MOV dword ptr [EBP + 0xfffffe54],ECX
0068cb45  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068cb4b  PUSH EDX
0068cb4c  MOV EAX,dword ptr [EBP + 0xfffffe54]
0068cb52  PUSH EAX
0068cb53  LEA ECX,[EBP + -0x38]
0068cb56  CALL 0x0068d4b0
0068cb5b  LEA ECX,[EBP + -0x8]
0068cb5e  CALL 0x0068edc0
0068cb63  LEA ECX,[EBP + -0x38]
0068cb66  PUSH ECX
0068cb67  LEA ECX,[EBP + -0x8]
0068cb6a  CALL 0x006118f0
0068cb6f  MOVZX EDX,AL
0068cb72  TEST EDX,EDX
0068cb74  JNZ 0x0068cb9d
0068cb76  MOV EAX,dword ptr [EBP + -0x4]
0068cb79  MOV dword ptr [EBP + 0xfffffe50],EAX
0068cb7f  MOV ECX,dword ptr [EBP + 0xfffffe50]
0068cb85  ADD ECX,0xc
0068cb88  PUSH ECX
0068cb89  MOV EDX,dword ptr [EBP + 0x14]
0068cb8c  PUSH EDX
0068cb8d  CALL dword ptr [0x006b20f0]
0068cb93  ADD ESP,0x8
0068cb96  MOVZX EAX,AL
0068cb99  TEST EAX,EAX
0068cb9b  JZ 0x0068cc0d
0068cb9d  MOV ECX,dword ptr [EBP + 0x10]
0068cba0  MOV dword ptr [EBP + 0xfffffe4c],ECX
0068cba6  MOV EDX,dword ptr [EBP + 0xfffffe4c]
0068cbac  MOV EAX,dword ptr [EDX + 0x8]
0068cbaf  MOVSX ECX,byte ptr [EAX + 0x45]
0068cbb3  TEST ECX,ECX
0068cbb5  JZ 0x0068cbe3
0068cbb7  MOV EDX,dword ptr [EBP + 0x10]
0068cbba  MOV dword ptr [EBP + 0xfffffe48],EDX
0068cbc0  MOV EAX,dword ptr [EBP + 0x14]
0068cbc3  PUSH EAX
0068cbc4  MOV ECX,dword ptr [EBP + 0xfffffe48]
0068cbca  PUSH ECX
0068cbcb  PUSH 0x0
0068cbcd  MOV EDX,dword ptr [EBP + 0x8]
0068cbd0  PUSH EDX
0068cbd1  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068cbd7  CALL 0x0068d820
0068cbdc  MOV EAX,dword ptr [EBP + 0x8]
0068cbdf  JMP 0x0068cc30
0068cbe3  MOV EAX,dword ptr [EBP + -0x4]
0068cbe6  MOV dword ptr [EBP + 0xfffffe44],EAX
0068cbec  MOV ECX,dword ptr [EBP + 0x14]
0068cbef  PUSH ECX
0068cbf0  MOV EDX,dword ptr [EBP + 0xfffffe44]
0068cbf6  PUSH EDX
0068cbf7  PUSH 0x1
0068cbf9  MOV EAX,dword ptr [EBP + 0x8]
0068cbfc  PUSH EAX
0068cbfd  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068cc03  CALL 0x0068d820
0068cc08  MOV EAX,dword ptr [EBP + 0x8]
0068cc0b  JMP 0x0068cc30
0068cc0d  MOV ECX,dword ptr [EBP + 0x14]
0068cc10  PUSH ECX
0068cc11  LEA EDX,[EBP + -0x44]
0068cc14  PUSH EDX
0068cc15  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068cc1b  CALL 0x0068d5e0
0068cc20  MOV ECX,dword ptr [EAX]
0068cc22  MOV EDX,dword ptr [EAX + 0x4]
0068cc25  MOV EAX,dword ptr [EBP + 0x8]
0068cc28  MOV dword ptr [EAX],ECX
0068cc2a  MOV dword ptr [EAX + 0x4],EDX
0068cc2d  MOV EAX,dword ptr [EBP + 0x8]
0068cc30  MOV ESP,EBP
0068cc32  POP EBP
0068cc33  RET 0x10

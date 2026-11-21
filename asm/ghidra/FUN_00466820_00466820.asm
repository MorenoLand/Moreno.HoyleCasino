; FUN_00466820  00466820
00466820  PUSH EBP
00466821  MOV EBP,ESP
00466823  SUB ESP,0x194
00466829  MOV EAX,[0x00781870]
0046682e  XOR EAX,EBP
00466830  MOV dword ptr [EBP + -0x8],EAX
00466833  MOV dword ptr [EBP + 0xfffffe6c],ECX
00466839  LEA EAX,[EBP + -0x4]
0046683c  PUSH EAX
0046683d  LEA ECX,[EBP + 0xfffffef4]
00466843  PUSH ECX
00466844  MOV ECX,dword ptr [0x00791364]
0046684a  CALL 0x0047ce00
0046684f  MOV EAX,dword ptr [EBP + 0xfffffef4]
00466855  CDQ
00466856  SUB EAX,EDX
00466858  SAR EAX,0x1
0046685a  PUSH EAX
0046685b  MOV ECX,dword ptr [0x00791364]
00466861  CALL 0x0047bc40
00466866  MOV EAX,dword ptr [EBP + 0xfffffef4]
0046686c  CDQ
0046686d  SUB EAX,EDX
0046686f  SAR EAX,0x1
00466871  PUSH EAX
00466872  MOV ECX,dword ptr [0x00791364]
00466878  CALL 0x0047bc80
0046687d  MOV EDX,dword ptr [EBP + 0xfffffef4]
00466883  PUSH EDX
00466884  MOV ECX,dword ptr [0x00791364]
0046688a  CALL 0x0047bcc0
0046688f  MOV EAX,dword ptr [EBP + 0xfffffef4]
00466895  PUSH EAX
00466896  MOV ECX,dword ptr [0x00791364]
0046689c  CALL 0x0047bd40
004668a1  MOV ECX,dword ptr [EBP + 0xfffffef4]
004668a7  PUSH ECX
004668a8  MOV ECX,dword ptr [0x00791364]
004668ae  CALL 0x0047bd80
004668b3  MOV EDX,dword ptr [EBP + 0xfffffef4]
004668b9  SHL EDX,0x1
004668bb  PUSH EDX
004668bc  MOV ECX,dword ptr [0x00791364]
004668c2  CALL 0x0047bd00
004668c7  MOV EAX,dword ptr [EBP + 0xfffffef4]
004668cd  SHL EAX,0x1
004668cf  PUSH EAX
004668d0  MOV ECX,dword ptr [0x00791364]
004668d6  CALL 0x0047bdc0
004668db  LEA ECX,[EBP + 0xfffffe70]
004668e1  PUSH ECX
004668e2  MOV EDX,dword ptr [EBP + 0xfffffef4]
004668e8  PUSH EDX
004668e9  CALL 0x006311e0
004668ee  ADD ESP,0x8
004668f1  LEA EAX,[EBP + 0xfffffeb0]
004668f7  PUSH EAX
004668f8  MOV ECX,dword ptr [EBP + 0xfffffef4]
004668fe  SHL ECX,0x1
00466900  PUSH ECX
00466901  CALL 0x006311e0
00466906  ADD ESP,0x8
00466909  MOV ECX,dword ptr [0x00791364]
0046690f  CALL 0x00480f80
00466914  MOV byte ptr [EBP + 0xfffffef3],AL
0046691a  MOVZX EDX,byte ptr [EBP + 0xfffffef3]
00466921  TEST EDX,EDX
00466923  JZ 0x00466a27
00466929  PUSH 0x6bade8
0046692e  CALL 0x00630f40
00466933  ADD ESP,0x4
00466936  PUSH EAX
00466937  MOV EAX,dword ptr [EBP + 0xfffffe6c]
0046693d  MOV ECX,dword ptr [EAX + 0x1e0]
00466943  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00466949  MOV EAX,dword ptr [EDX + 0x1e0]
0046694f  MOV EDX,dword ptr [ECX]
00466951  MOV ECX,EAX
00466953  MOV EAX,dword ptr [EDX + 0xe0]
00466959  CALL EAX
0046695b  PUSH 0x77
0046695d  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466963  MOV ECX,dword ptr [ECX + 0x1e0]
00466969  CALL 0x006026f0
0046696e  PUSH 0x1e
00466970  PUSH 0x5
00466972  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00466978  MOV EAX,dword ptr [EDX + 0x1e0]
0046697e  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466984  MOV ECX,dword ptr [ECX + 0x1e0]
0046698a  MOV EDX,dword ptr [EAX]
0046698c  MOV EAX,dword ptr [EDX + 0x44]
0046698f  CALL EAX
00466991  PUSH 0x3a
00466993  PUSH 0x5
00466995  MOV ECX,dword ptr [EBP + 0xfffffe6c]
0046699b  MOV EDX,dword ptr [ECX + 0x1ec]
004669a1  MOV EAX,dword ptr [EBP + 0xfffffe6c]
004669a7  MOV ECX,dword ptr [EAX + 0x1ec]
004669ad  MOV EDX,dword ptr [EDX]
004669af  MOV EAX,dword ptr [EDX + 0x44]
004669b2  CALL EAX
004669b4  MOV ECX,dword ptr [EBP + 0xfffffe6c]
004669ba  MOV EDX,dword ptr [ECX + 0x1ec]
004669c0  MOV EAX,dword ptr [EBP + 0xfffffe6c]
004669c6  MOV ECX,dword ptr [EAX + 0x1ec]
004669cc  MOV EDX,dword ptr [EDX]
004669ce  MOV EAX,dword ptr [EDX + 0x74]
004669d1  CALL EAX
004669d3  PUSH 0x6badc8
004669d8  CALL 0x00630f40
004669dd  ADD ESP,0x4
004669e0  PUSH EAX
004669e1  MOV ECX,dword ptr [EBP + 0xfffffe6c]
004669e7  MOV EDX,dword ptr [ECX + 0x1fc]
004669ed  MOV EAX,dword ptr [EBP + 0xfffffe6c]
004669f3  MOV ECX,dword ptr [EAX + 0x1fc]
004669f9  MOV EDX,dword ptr [EDX]
004669fb  MOV EAX,dword ptr [EDX + 0xb4]
00466a01  CALL EAX
00466a03  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466a09  MOV EDX,dword ptr [ECX + 0x1fc]
00466a0f  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466a15  MOV ECX,dword ptr [EAX + 0x1fc]
00466a1b  MOV EDX,dword ptr [EDX]
00466a1d  MOV EAX,dword ptr [EDX + 0x74]
00466a20  CALL EAX
00466a22  JMP 0x00466afb
00466a27  PUSH 0x2b
00466a29  PUSH 0x5
00466a2b  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466a31  MOV EDX,dword ptr [ECX + 0x1e0]
00466a37  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466a3d  MOV ECX,dword ptr [EAX + 0x1e0]
00466a43  MOV EDX,dword ptr [EDX]
00466a45  MOV EAX,dword ptr [EDX + 0x44]
00466a48  CALL EAX
00466a4a  PUSH 0x6bace8
00466a4f  CALL 0x00630f40
00466a54  ADD ESP,0x4
00466a57  PUSH EAX
00466a58  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466a5e  MOV EDX,dword ptr [ECX + 0x1e0]
00466a64  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466a6a  MOV ECX,dword ptr [EAX + 0x1e0]
00466a70  MOV EDX,dword ptr [EDX]
00466a72  MOV EAX,dword ptr [EDX + 0xe0]
00466a78  CALL EAX
00466a7a  PUSH 0x64
00466a7c  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466a82  MOV ECX,dword ptr [ECX + 0x1e0]
00466a88  CALL 0x006026f0
00466a8d  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00466a93  MOV EAX,dword ptr [EDX + 0x1ec]
00466a99  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466a9f  MOV ECX,dword ptr [ECX + 0x1ec]
00466aa5  MOV EDX,dword ptr [EAX]
00466aa7  MOV EAX,dword ptr [EDX + 0x70]
00466aaa  CALL EAX
00466aac  PUSH 0x6bada8
00466ab1  CALL 0x00630f40
00466ab6  ADD ESP,0x4
00466ab9  PUSH EAX
00466aba  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466ac0  MOV EDX,dword ptr [ECX + 0x1fc]
00466ac6  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466acc  MOV ECX,dword ptr [EAX + 0x1fc]
00466ad2  MOV EDX,dword ptr [EDX]
00466ad4  MOV EAX,dword ptr [EDX + 0xb4]
00466ada  CALL EAX
00466adc  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466ae2  MOV EDX,dword ptr [ECX + 0x1fc]
00466ae8  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466aee  MOV ECX,dword ptr [EAX + 0x1fc]
00466af4  MOV EDX,dword ptr [EDX]
00466af6  MOV EAX,dword ptr [EDX + 0x74]
00466af9  CALL EAX
00466afb  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466b01  MOVZX EDX,byte ptr [ECX + 0x200]
00466b08  TEST EDX,EDX
00466b0a  JZ 0x00466ce2
00466b10  PUSH 0x6bad84
00466b15  CALL 0x00630f40
00466b1a  ADD ESP,0x4
00466b1d  PUSH EAX
00466b1e  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466b24  MOV ECX,dword ptr [EAX + 0x1f0]
00466b2a  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00466b30  MOV EAX,dword ptr [EDX + 0x1f0]
00466b36  MOV EDX,dword ptr [ECX]
00466b38  MOV ECX,EAX
00466b3a  MOV EAX,dword ptr [EDX + 0xb4]
00466b40  CALL EAX
00466b42  PUSH 0x21
00466b44  PUSH 0x58
00466b46  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466b4c  MOV EDX,dword ptr [ECX + 0x1f0]
00466b52  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466b58  MOV ECX,dword ptr [EAX + 0x1f0]
00466b5e  MOV EDX,dword ptr [EDX]
00466b60  MOV EAX,dword ptr [EDX + 0x44]
00466b63  CALL EAX
00466b65  PUSH 0x30
00466b67  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466b6d  MOV ECX,dword ptr [ECX + 0x1f0]
00466b73  CALL 0x005ef310
00466b78  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00466b7e  MOV EAX,dword ptr [EDX + 0x1f0]
00466b84  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466b8a  MOV ECX,dword ptr [ECX + 0x1f0]
00466b90  MOV EDX,dword ptr [EAX]
00466b92  MOV EAX,dword ptr [EDX + 0x74]
00466b95  CALL EAX
00466b97  LEA ECX,[EBP + 0xfffffe70]
00466b9d  PUSH ECX
00466b9e  PUSH 0x6bad58
00466ba3  CALL 0x00630f40
00466ba8  ADD ESP,0x4
00466bab  PUSH EAX
00466bac  LEA EDX,[EBP + 0xfffffef8]
00466bb2  PUSH EDX
00466bb3  CALL dword ptr [0x006b2220]
00466bb9  ADD ESP,0xc
00466bbc  LEA EAX,[EBP + 0xfffffef8]
00466bc2  PUSH EAX
00466bc3  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466bc9  MOV EDX,dword ptr [ECX + 0x1f4]
00466bcf  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466bd5  MOV ECX,dword ptr [EAX + 0x1f4]
00466bdb  MOV EDX,dword ptr [EDX]
00466bdd  MOV EAX,dword ptr [EDX + 0xb4]
00466be3  CALL EAX
00466be5  PUSH 0x31
00466be7  PUSH 0x58
00466be9  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466bef  MOV EDX,dword ptr [ECX + 0x1f4]
00466bf5  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466bfb  MOV ECX,dword ptr [EAX + 0x1f4]
00466c01  MOV EDX,dword ptr [EDX]
00466c03  MOV EAX,dword ptr [EDX + 0x44]
00466c06  CALL EAX
00466c08  PUSH 0x30
00466c0a  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466c10  MOV ECX,dword ptr [ECX + 0x1f4]
00466c16  CALL 0x005ef310
00466c1b  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00466c21  MOV EAX,dword ptr [EDX + 0x1f4]
00466c27  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466c2d  MOV ECX,dword ptr [ECX + 0x1f4]
00466c33  MOV EDX,dword ptr [EAX]
00466c35  MOV EAX,dword ptr [EDX + 0x74]
00466c38  CALL EAX
00466c3a  LEA ECX,[EBP + 0xfffffeb0]
00466c40  PUSH ECX
00466c41  PUSH 0x6bad30
00466c46  CALL 0x00630f40
00466c4b  ADD ESP,0x4
00466c4e  PUSH EAX
00466c4f  LEA EDX,[EBP + 0xfffffef8]
00466c55  PUSH EDX
00466c56  CALL dword ptr [0x006b2220]
00466c5c  ADD ESP,0xc
00466c5f  LEA EAX,[EBP + 0xfffffef8]
00466c65  PUSH EAX
00466c66  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466c6c  MOV EDX,dword ptr [ECX + 0x1f8]
00466c72  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466c78  MOV ECX,dword ptr [EAX + 0x1f8]
00466c7e  MOV EDX,dword ptr [EDX]
00466c80  MOV EAX,dword ptr [EDX + 0xb4]
00466c86  CALL EAX
00466c88  PUSH 0x41
00466c8a  PUSH 0x58
00466c8c  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466c92  MOV EDX,dword ptr [ECX + 0x1f8]
00466c98  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466c9e  MOV ECX,dword ptr [EAX + 0x1f8]
00466ca4  MOV EDX,dword ptr [EDX]
00466ca6  MOV EAX,dword ptr [EDX + 0x44]
00466ca9  CALL EAX
00466cab  PUSH 0x30
00466cad  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466cb3  MOV ECX,dword ptr [ECX + 0x1f8]
00466cb9  CALL 0x005ef310
00466cbe  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00466cc4  MOV EAX,dword ptr [EDX + 0x1f8]
00466cca  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466cd0  MOV ECX,dword ptr [ECX + 0x1f8]
00466cd6  MOV EDX,dword ptr [EAX]
00466cd8  MOV EAX,dword ptr [EDX + 0x74]
00466cdb  CALL EAX
00466cdd  JMP 0x00466e47
00466ce2  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466ce8  MOV EDX,dword ptr [ECX + 0x1f0]
00466cee  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466cf4  MOV ECX,dword ptr [EAX + 0x1f0]
00466cfa  MOV EDX,dword ptr [EDX]
00466cfc  MOV EAX,dword ptr [EDX + 0x70]
00466cff  CALL EAX
00466d01  LEA ECX,[EBP + 0xfffffe70]
00466d07  PUSH ECX
00466d08  PUSH 0x6bad58
00466d0d  CALL 0x00630f40
00466d12  ADD ESP,0x4
00466d15  PUSH EAX
00466d16  LEA EDX,[EBP + 0xfffffef8]
00466d1c  PUSH EDX
00466d1d  CALL dword ptr [0x006b2220]
00466d23  ADD ESP,0xc
00466d26  LEA EAX,[EBP + 0xfffffef8]
00466d2c  PUSH EAX
00466d2d  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466d33  MOV EDX,dword ptr [ECX + 0x1f4]
00466d39  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466d3f  MOV ECX,dword ptr [EAX + 0x1f4]
00466d45  MOV EDX,dword ptr [EDX]
00466d47  MOV EAX,dword ptr [EDX + 0xb4]
00466d4d  CALL EAX
00466d4f  PUSH 0x28
00466d51  PUSH 0x58
00466d53  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466d59  MOV EDX,dword ptr [ECX + 0x1f4]
00466d5f  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466d65  MOV ECX,dword ptr [EAX + 0x1f4]
00466d6b  MOV EDX,dword ptr [EDX]
00466d6d  MOV EAX,dword ptr [EDX + 0x44]
00466d70  CALL EAX
00466d72  PUSH 0x30
00466d74  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466d7a  MOV ECX,dword ptr [ECX + 0x1f4]
00466d80  CALL 0x005ef310
00466d85  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00466d8b  MOV EAX,dword ptr [EDX + 0x1f4]
00466d91  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466d97  MOV ECX,dword ptr [ECX + 0x1f4]
00466d9d  MOV EDX,dword ptr [EAX]
00466d9f  MOV EAX,dword ptr [EDX + 0x74]
00466da2  CALL EAX
00466da4  LEA ECX,[EBP + 0xfffffeb0]
00466daa  PUSH ECX
00466dab  PUSH 0x6bad30
00466db0  CALL 0x00630f40
00466db5  ADD ESP,0x4
00466db8  PUSH EAX
00466db9  LEA EDX,[EBP + 0xfffffef8]
00466dbf  PUSH EDX
00466dc0  CALL dword ptr [0x006b2220]
00466dc6  ADD ESP,0xc
00466dc9  LEA EAX,[EBP + 0xfffffef8]
00466dcf  PUSH EAX
00466dd0  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466dd6  MOV EDX,dword ptr [ECX + 0x1f8]
00466ddc  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466de2  MOV ECX,dword ptr [EAX + 0x1f8]
00466de8  MOV EDX,dword ptr [EDX]
00466dea  MOV EAX,dword ptr [EDX + 0xb4]
00466df0  CALL EAX
00466df2  PUSH 0x3a
00466df4  PUSH 0x58
00466df6  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466dfc  MOV EDX,dword ptr [ECX + 0x1f8]
00466e02  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00466e08  MOV ECX,dword ptr [EAX + 0x1f8]
00466e0e  MOV EDX,dword ptr [EDX]
00466e10  MOV EAX,dword ptr [EDX + 0x44]
00466e13  CALL EAX
00466e15  PUSH 0x30
00466e17  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466e1d  MOV ECX,dword ptr [ECX + 0x1f8]
00466e23  CALL 0x005ef310
00466e28  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00466e2e  MOV EAX,dword ptr [EDX + 0x1f8]
00466e34  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466e3a  MOV ECX,dword ptr [ECX + 0x1f8]
00466e40  MOV EDX,dword ptr [EAX]
00466e42  MOV EAX,dword ptr [EDX + 0x74]
00466e45  CALL EAX
00466e47  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00466e4d  CALL 0x005f85d0
00466e52  MOV ECX,dword ptr [EBP + -0x8]
00466e55  XOR ECX,EBP
00466e57  CALL 0x00686d72
00466e5c  MOV ESP,EBP
00466e5e  POP EBP
00466e5f  RET

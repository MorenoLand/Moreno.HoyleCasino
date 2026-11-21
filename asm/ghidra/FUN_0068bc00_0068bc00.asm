; FUN_0068bc00  0068bc00
0068bc00  PUSH EBP
0068bc01  MOV EBP,ESP
0068bc03  SUB ESP,0x1c0
0068bc09  MOV dword ptr [EBP + 0xfffffe40],ECX
0068bc0f  MOV dword ptr [EBP + -0x8],0x0
0068bc16  MOV dword ptr [EBP + -0x4],0x0
0068bc1d  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068bc23  MOV ECX,dword ptr [EAX + 0x8]
0068bc26  MOV dword ptr [EBP + -0x48],ECX
0068bc29  CMP dword ptr [EBP + -0x48],0x0
0068bc2d  JNZ 0x0068bc5b
0068bc2f  MOV EDX,dword ptr [EBP + 0x14]
0068bc32  PUSH EDX
0068bc33  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068bc39  MOV ECX,dword ptr [EAX + 0x4]
0068bc3c  PUSH ECX
0068bc3d  PUSH 0x1
0068bc3f  MOV EDX,dword ptr [EBP + 0x8]
0068bc42  PUSH EDX
0068bc43  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068bc49  CALL 0x0068d070
0068bc4e  MOV EAX,dword ptr [EBP + 0x8]
0068bc51  JMP 0x0068c330
0068bc5b  XOR EAX,EAX
0068bc5d  JZ 0x0068bfda
0068bc63  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068bc69  MOV EDX,dword ptr [ECX + 0x4]
0068bc6c  MOV dword ptr [EBP + 0xffffff68],EDX
0068bc72  MOV EAX,dword ptr [EBP + 0xffffff68]
0068bc78  MOV ECX,dword ptr [EAX]
0068bc7a  MOV dword ptr [EBP + 0xffffff64],ECX
0068bc80  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068bc86  PUSH EDX
0068bc87  MOV EAX,dword ptr [EBP + 0xffffff64]
0068bc8d  PUSH EAX
0068bc8e  LEA ECX,[EBP + -0x10]
0068bc91  CALL 0x0068d4b0
0068bc96  CMP dword ptr [EBP + 0xc],0x0
0068bc9a  JZ 0x0068bca4
0068bc9c  MOV ECX,dword ptr [EBP + 0xc]
0068bc9f  CMP ECX,dword ptr [EBP + -0x10]
0068bca2  JZ 0x0068bcaa
0068bca4  CALL dword ptr [0x006b2274]
0068bcaa  MOV EDX,dword ptr [EBP + 0x10]
0068bcad  XOR EAX,EAX
0068bcaf  CMP EDX,dword ptr [EBP + -0xc]
0068bcb2  SETZ AL
0068bcb5  MOVZX ECX,AL
0068bcb8  TEST ECX,ECX
0068bcba  JZ 0x0068bd15
0068bcbc  MOV EDX,dword ptr [EBP + 0x10]
0068bcbf  MOV dword ptr [EBP + 0xffffff60],EDX
0068bcc5  MOV EAX,dword ptr [EBP + 0x14]
0068bcc8  PUSH EAX
0068bcc9  MOV ECX,dword ptr [EBP + 0xffffff60]
0068bccf  ADD ECX,0xc
0068bcd2  PUSH ECX
0068bcd3  CALL dword ptr [0x006b20f0]
0068bcd9  ADD ESP,0x8
0068bcdc  MOVZX EDX,AL
0068bcdf  TEST EDX,EDX
0068bce1  JNZ 0x0068bd10
0068bce3  MOV EAX,dword ptr [EBP + 0x10]
0068bce6  MOV dword ptr [EBP + 0xffffff5c],EAX
0068bcec  MOV ECX,dword ptr [EBP + 0x14]
0068bcef  PUSH ECX
0068bcf0  MOV EDX,dword ptr [EBP + 0xffffff5c]
0068bcf6  PUSH EDX
0068bcf7  PUSH 0x1
0068bcf9  MOV EAX,dword ptr [EBP + 0x8]
0068bcfc  PUSH EAX
0068bcfd  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068bd03  CALL 0x0068d070
0068bd08  MOV EAX,dword ptr [EBP + 0x8]
0068bd0b  JMP 0x0068c330
0068bd10  JMP 0x0068bfd5
0068bd15  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068bd1b  MOV EDX,dword ptr [ECX + 0x4]
0068bd1e  MOV dword ptr [EBP + 0xffffff0c],EDX
0068bd24  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068bd2a  PUSH EAX
0068bd2b  MOV ECX,dword ptr [EBP + 0xffffff0c]
0068bd31  PUSH ECX
0068bd32  LEA ECX,[EBP + -0x18]
0068bd35  CALL 0x0068d4b0
0068bd3a  CMP dword ptr [EBP + 0xc],0x0
0068bd3e  JZ 0x0068bd48
0068bd40  MOV EDX,dword ptr [EBP + 0xc]
0068bd43  CMP EDX,dword ptr [EBP + -0x18]
0068bd46  JZ 0x0068bd4e
0068bd48  CALL dword ptr [0x006b2274]
0068bd4e  MOV EAX,dword ptr [EBP + 0x10]
0068bd51  XOR ECX,ECX
0068bd53  CMP EAX,dword ptr [EBP + -0x14]
0068bd56  SETZ CL
0068bd59  MOVZX EDX,CL
0068bd5c  TEST EDX,EDX
0068bd5e  JZ 0x0068bdcd
0068bd60  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068bd66  MOV ECX,dword ptr [EAX + 0x4]
0068bd69  ADD ECX,0x8
0068bd6c  MOV dword ptr [EBP + 0xffffff08],ECX
0068bd72  MOV EDX,dword ptr [EBP + 0xffffff08]
0068bd78  MOV EAX,dword ptr [EDX]
0068bd7a  ADD EAX,0xc
0068bd7d  MOV dword ptr [EBP + 0xffffff04],EAX
0068bd83  MOV ECX,dword ptr [EBP + 0xffffff04]
0068bd89  PUSH ECX
0068bd8a  MOV EDX,dword ptr [EBP + 0x14]
0068bd8d  PUSH EDX
0068bd8e  CALL dword ptr [0x006b20f0]
0068bd94  ADD ESP,0x8
0068bd97  MOVZX EAX,AL
0068bd9a  TEST EAX,EAX
0068bd9c  JNZ 0x0068bdc8
0068bd9e  MOV ECX,dword ptr [EBP + 0x14]
0068bda1  PUSH ECX
0068bda2  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068bda8  MOV EAX,dword ptr [EDX + 0x4]
0068bdab  MOV ECX,dword ptr [EAX + 0x8]
0068bdae  PUSH ECX
0068bdaf  PUSH 0x0
0068bdb1  MOV EDX,dword ptr [EBP + 0x8]
0068bdb4  PUSH EDX
0068bdb5  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068bdbb  CALL 0x0068d070
0068bdc0  MOV EAX,dword ptr [EBP + 0x8]
0068bdc3  JMP 0x0068c330
0068bdc8  JMP 0x0068bfd5
0068bdcd  MOV EAX,dword ptr [EBP + 0x10]
0068bdd0  MOV dword ptr [EBP + 0xfffffeb4],EAX
0068bdd6  MOV ECX,dword ptr [EBP + 0x14]
0068bdd9  PUSH ECX
0068bdda  MOV EDX,dword ptr [EBP + 0xfffffeb4]
0068bde0  ADD EDX,0xc
0068bde3  PUSH EDX
0068bde4  CALL dword ptr [0x006b20f0]
0068bdea  ADD ESP,0x8
0068bded  MOVZX EAX,AL
0068bdf0  TEST EAX,EAX
0068bdf2  JNZ 0x0068beae
0068bdf8  MOV ECX,dword ptr [EBP + 0xc]
0068bdfb  MOV dword ptr [EBP + -0x8],ECX
0068bdfe  MOV EDX,dword ptr [EBP + 0x10]
0068be01  MOV dword ptr [EBP + -0x4],EDX
0068be04  LEA ECX,[EBP + -0x8]
0068be07  CALL 0x0068eea0
0068be0c  MOV EAX,dword ptr [EBP + -0x4]
0068be0f  MOV dword ptr [EBP + 0xfffffeb0],EAX
0068be15  MOV ECX,dword ptr [EBP + 0xfffffeb0]
0068be1b  ADD ECX,0xc
0068be1e  PUSH ECX
0068be1f  MOV EDX,dword ptr [EBP + 0x14]
0068be22  PUSH EDX
0068be23  CALL dword ptr [0x006b20f0]
0068be29  ADD ESP,0x8
0068be2c  MOVZX EAX,AL
0068be2f  TEST EAX,EAX
0068be31  JNZ 0x0068beae
0068be33  MOV ECX,dword ptr [EBP + -0x4]
0068be36  MOV dword ptr [EBP + 0xfffffeac],ECX
0068be3c  MOV EDX,dword ptr [EBP + 0xfffffeac]
0068be42  MOV EAX,dword ptr [EDX + 0x8]
0068be45  MOVSX ECX,byte ptr [EAX + 0x35]
0068be49  TEST ECX,ECX
0068be4b  JZ 0x0068be7c
0068be4d  MOV EDX,dword ptr [EBP + -0x4]
0068be50  MOV dword ptr [EBP + 0xfffffea8],EDX
0068be56  MOV EAX,dword ptr [EBP + 0x14]
0068be59  PUSH EAX
0068be5a  MOV ECX,dword ptr [EBP + 0xfffffea8]
0068be60  PUSH ECX
0068be61  PUSH 0x0
0068be63  MOV EDX,dword ptr [EBP + 0x8]
0068be66  PUSH EDX
0068be67  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068be6d  CALL 0x0068d070
0068be72  MOV EAX,dword ptr [EBP + 0x8]
0068be75  JMP 0x0068c330
0068be7c  MOV EAX,dword ptr [EBP + 0x10]
0068be7f  MOV dword ptr [EBP + 0xfffffea4],EAX
0068be85  MOV ECX,dword ptr [EBP + 0x14]
0068be88  PUSH ECX
0068be89  MOV EDX,dword ptr [EBP + 0xfffffea4]
0068be8f  PUSH EDX
0068be90  PUSH 0x1
0068be92  MOV EAX,dword ptr [EBP + 0x8]
0068be95  PUSH EAX
0068be96  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068be9c  CALL 0x0068d070
0068bea1  MOV EAX,dword ptr [EBP + 0x8]
0068bea4  JMP 0x0068c330
0068beae  MOV ECX,dword ptr [EBP + 0x10]
0068beb1  MOV dword ptr [EBP + 0xfffffea0],ECX
0068beb7  MOV EDX,dword ptr [EBP + 0xfffffea0]
0068bebd  ADD EDX,0xc
0068bec0  PUSH EDX
0068bec1  MOV EAX,dword ptr [EBP + 0x14]
0068bec4  PUSH EAX
0068bec5  CALL dword ptr [0x006b20f0]
0068becb  ADD ESP,0x8
0068bece  MOVZX ECX,AL
0068bed1  TEST ECX,ECX
0068bed3  JNZ 0x0068bfd5
0068bed9  MOV EDX,dword ptr [EBP + 0xc]
0068bedc  MOV dword ptr [EBP + -0x8],EDX
0068bedf  MOV EAX,dword ptr [EBP + 0x10]
0068bee2  MOV dword ptr [EBP + -0x4],EAX
0068bee5  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068beeb  MOV EDX,dword ptr [ECX + 0x4]
0068beee  MOV dword ptr [EBP + 0xfffffe9c],EDX
0068bef4  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068befa  PUSH EAX
0068befb  MOV ECX,dword ptr [EBP + 0xfffffe9c]
0068bf01  PUSH ECX
0068bf02  LEA ECX,[EBP + -0x20]
0068bf05  CALL 0x0068d4b0
0068bf0a  LEA ECX,[EBP + -0x8]
0068bf0d  CALL 0x0068e790
0068bf12  CMP dword ptr [EBP + -0x8],0x0
0068bf16  JZ 0x0068bf20
0068bf18  MOV EDX,dword ptr [EBP + -0x8]
0068bf1b  CMP EDX,dword ptr [EBP + -0x20]
0068bf1e  JZ 0x0068bf26
0068bf20  CALL dword ptr [0x006b2274]
0068bf26  MOV EAX,dword ptr [EBP + -0x4]
0068bf29  XOR ECX,ECX
0068bf2b  CMP EAX,dword ptr [EBP + -0x1c]
0068bf2e  SETZ CL
0068bf31  MOVZX EDX,CL
0068bf34  TEST EDX,EDX
0068bf36  JNZ 0x0068bf5f
0068bf38  MOV EAX,dword ptr [EBP + -0x4]
0068bf3b  MOV dword ptr [EBP + 0xfffffe98],EAX
0068bf41  MOV ECX,dword ptr [EBP + 0x14]
0068bf44  PUSH ECX
0068bf45  MOV EDX,dword ptr [EBP + 0xfffffe98]
0068bf4b  ADD EDX,0xc
0068bf4e  PUSH EDX
0068bf4f  CALL dword ptr [0x006b20f0]
0068bf55  ADD ESP,0x8
0068bf58  MOVZX EAX,AL
0068bf5b  TEST EAX,EAX
0068bf5d  JNZ 0x0068bfd5
0068bf5f  MOV ECX,dword ptr [EBP + 0x10]
0068bf62  MOV dword ptr [EBP + 0xfffffe94],ECX
0068bf68  MOV EDX,dword ptr [EBP + 0xfffffe94]
0068bf6e  MOV EAX,dword ptr [EDX + 0x8]
0068bf71  MOVSX ECX,byte ptr [EAX + 0x35]
0068bf75  TEST ECX,ECX
0068bf77  JZ 0x0068bfa8
0068bf79  MOV EDX,dword ptr [EBP + 0x10]
0068bf7c  MOV dword ptr [EBP + 0xfffffe90],EDX
0068bf82  MOV EAX,dword ptr [EBP + 0x14]
0068bf85  PUSH EAX
0068bf86  MOV ECX,dword ptr [EBP + 0xfffffe90]
0068bf8c  PUSH ECX
0068bf8d  PUSH 0x0
0068bf8f  MOV EDX,dword ptr [EBP + 0x8]
0068bf92  PUSH EDX
0068bf93  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068bf99  CALL 0x0068d070
0068bf9e  MOV EAX,dword ptr [EBP + 0x8]
0068bfa1  JMP 0x0068c330
0068bfa8  MOV EAX,dword ptr [EBP + -0x4]
0068bfab  MOV dword ptr [EBP + 0xfffffe8c],EAX
0068bfb1  MOV ECX,dword ptr [EBP + 0x14]
0068bfb4  PUSH ECX
0068bfb5  MOV EDX,dword ptr [EBP + 0xfffffe8c]
0068bfbb  PUSH EDX
0068bfbc  PUSH 0x1
0068bfbe  MOV EAX,dword ptr [EBP + 0x8]
0068bfc1  PUSH EAX
0068bfc2  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068bfc8  CALL 0x0068d070
0068bfcd  MOV EAX,dword ptr [EBP + 0x8]
0068bfd0  JMP 0x0068c330
0068bfd5  JMP 0x0068c30d
0068bfda  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068bfe0  MOV EDX,dword ptr [ECX + 0x4]
0068bfe3  MOV dword ptr [EBP + 0xfffffe88],EDX
0068bfe9  MOV EAX,dword ptr [EBP + 0xfffffe88]
0068bfef  MOV ECX,dword ptr [EAX]
0068bff1  MOV dword ptr [EBP + 0xfffffe84],ECX
0068bff7  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068bffd  PUSH EDX
0068bffe  MOV EAX,dword ptr [EBP + 0xfffffe84]
0068c004  PUSH EAX
0068c005  LEA ECX,[EBP + -0x28]
0068c008  CALL 0x0068d4b0
0068c00d  LEA ECX,[EBP + -0x28]
0068c010  PUSH ECX
0068c011  LEA ECX,[EBP + 0xc]
0068c014  CALL 0x006118f0
0068c019  MOVZX EDX,AL
0068c01c  TEST EDX,EDX
0068c01e  JZ 0x0068c079
0068c020  MOV EAX,dword ptr [EBP + 0x10]
0068c023  MOV dword ptr [EBP + 0xfffffe80],EAX
0068c029  MOV ECX,dword ptr [EBP + 0xfffffe80]
0068c02f  ADD ECX,0xc
0068c032  PUSH ECX
0068c033  MOV EDX,dword ptr [EBP + 0x14]
0068c036  PUSH EDX
0068c037  CALL dword ptr [0x006b20f0]
0068c03d  ADD ESP,0x8
0068c040  MOVZX EAX,AL
0068c043  TEST EAX,EAX
0068c045  JZ 0x0068c074
0068c047  MOV ECX,dword ptr [EBP + 0x10]
0068c04a  MOV dword ptr [EBP + 0xfffffe7c],ECX
0068c050  MOV EDX,dword ptr [EBP + 0x14]
0068c053  PUSH EDX
0068c054  MOV EAX,dword ptr [EBP + 0xfffffe7c]
0068c05a  PUSH EAX
0068c05b  PUSH 0x1
0068c05d  MOV ECX,dword ptr [EBP + 0x8]
0068c060  PUSH ECX
0068c061  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c067  CALL 0x0068d070
0068c06c  MOV EAX,dword ptr [EBP + 0x8]
0068c06f  JMP 0x0068c330
0068c074  JMP 0x0068c30d
0068c079  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068c07f  MOV EAX,dword ptr [EDX + 0x4]
0068c082  MOV dword ptr [EBP + 0xfffffe78],EAX
0068c088  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c08e  PUSH ECX
0068c08f  MOV EDX,dword ptr [EBP + 0xfffffe78]
0068c095  PUSH EDX
0068c096  LEA ECX,[EBP + -0x30]
0068c099  CALL 0x0068d4b0
0068c09e  LEA EAX,[EBP + -0x30]
0068c0a1  PUSH EAX
0068c0a2  LEA ECX,[EBP + 0xc]
0068c0a5  CALL 0x006118f0
0068c0aa  MOVZX ECX,AL
0068c0ad  TEST ECX,ECX
0068c0af  JZ 0x0068c11e
0068c0b1  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068c0b7  MOV EAX,dword ptr [EDX + 0x4]
0068c0ba  ADD EAX,0x8
0068c0bd  MOV dword ptr [EBP + 0xfffffe74],EAX
0068c0c3  MOV ECX,dword ptr [EBP + 0xfffffe74]
0068c0c9  MOV EDX,dword ptr [ECX]
0068c0cb  ADD EDX,0xc
0068c0ce  MOV dword ptr [EBP + 0xfffffe70],EDX
0068c0d4  MOV EAX,dword ptr [EBP + 0x14]
0068c0d7  PUSH EAX
0068c0d8  MOV ECX,dword ptr [EBP + 0xfffffe70]
0068c0de  PUSH ECX
0068c0df  CALL dword ptr [0x006b20f0]
0068c0e5  ADD ESP,0x8
0068c0e8  MOVZX EDX,AL
0068c0eb  TEST EDX,EDX
0068c0ed  JZ 0x0068c119
0068c0ef  MOV EAX,dword ptr [EBP + 0x14]
0068c0f2  PUSH EAX
0068c0f3  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c0f9  MOV EDX,dword ptr [ECX + 0x4]
0068c0fc  MOV EAX,dword ptr [EDX + 0x8]
0068c0ff  PUSH EAX
0068c100  PUSH 0x0
0068c102  MOV ECX,dword ptr [EBP + 0x8]
0068c105  PUSH ECX
0068c106  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c10c  CALL 0x0068d070
0068c111  MOV EAX,dword ptr [EBP + 0x8]
0068c114  JMP 0x0068c330
0068c119  JMP 0x0068c30d
0068c11e  MOV EDX,dword ptr [EBP + 0x10]
0068c121  MOV dword ptr [EBP + 0xfffffe6c],EDX
0068c127  MOV EAX,dword ptr [EBP + 0xfffffe6c]
0068c12d  ADD EAX,0xc
0068c130  PUSH EAX
0068c131  MOV ECX,dword ptr [EBP + 0x14]
0068c134  PUSH ECX
0068c135  CALL dword ptr [0x006b20f0]
0068c13b  ADD ESP,0x8
0068c13e  MOVZX EDX,AL
0068c141  TEST EDX,EDX
0068c143  JZ 0x0068c1ff
0068c149  MOV EAX,dword ptr [EBP + 0xc]
0068c14c  MOV dword ptr [EBP + -0x8],EAX
0068c14f  MOV ECX,dword ptr [EBP + 0x10]
0068c152  MOV dword ptr [EBP + -0x4],ECX
0068c155  LEA ECX,[EBP + -0x8]
0068c158  CALL 0x0068eea0
0068c15d  MOV EDX,dword ptr [EBP + -0x4]
0068c160  MOV dword ptr [EBP + 0xfffffe68],EDX
0068c166  MOV EAX,dword ptr [EBP + 0x14]
0068c169  PUSH EAX
0068c16a  MOV ECX,dword ptr [EBP + 0xfffffe68]
0068c170  ADD ECX,0xc
0068c173  PUSH ECX
0068c174  CALL dword ptr [0x006b20f0]
0068c17a  ADD ESP,0x8
0068c17d  MOVZX EDX,AL
0068c180  TEST EDX,EDX
0068c182  JZ 0x0068c1ff
0068c184  MOV EAX,dword ptr [EBP + -0x4]
0068c187  MOV dword ptr [EBP + 0xfffffe64],EAX
0068c18d  MOV ECX,dword ptr [EBP + 0xfffffe64]
0068c193  MOV EDX,dword ptr [ECX + 0x8]
0068c196  MOVSX EAX,byte ptr [EDX + 0x35]
0068c19a  TEST EAX,EAX
0068c19c  JZ 0x0068c1cd
0068c19e  MOV ECX,dword ptr [EBP + -0x4]
0068c1a1  MOV dword ptr [EBP + 0xfffffe60],ECX
0068c1a7  MOV EDX,dword ptr [EBP + 0x14]
0068c1aa  PUSH EDX
0068c1ab  MOV EAX,dword ptr [EBP + 0xfffffe60]
0068c1b1  PUSH EAX
0068c1b2  PUSH 0x0
0068c1b4  MOV ECX,dword ptr [EBP + 0x8]
0068c1b7  PUSH ECX
0068c1b8  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c1be  CALL 0x0068d070
0068c1c3  MOV EAX,dword ptr [EBP + 0x8]
0068c1c6  JMP 0x0068c330
0068c1cd  MOV EDX,dword ptr [EBP + 0x10]
0068c1d0  MOV dword ptr [EBP + 0xfffffe5c],EDX
0068c1d6  MOV EAX,dword ptr [EBP + 0x14]
0068c1d9  PUSH EAX
0068c1da  MOV ECX,dword ptr [EBP + 0xfffffe5c]
0068c1e0  PUSH ECX
0068c1e1  PUSH 0x1
0068c1e3  MOV EDX,dword ptr [EBP + 0x8]
0068c1e6  PUSH EDX
0068c1e7  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c1ed  CALL 0x0068d070
0068c1f2  MOV EAX,dword ptr [EBP + 0x8]
0068c1f5  JMP 0x0068c330
0068c1ff  MOV EAX,dword ptr [EBP + 0x10]
0068c202  MOV dword ptr [EBP + 0xfffffe58],EAX
0068c208  MOV ECX,dword ptr [EBP + 0x14]
0068c20b  PUSH ECX
0068c20c  MOV EDX,dword ptr [EBP + 0xfffffe58]
0068c212  ADD EDX,0xc
0068c215  PUSH EDX
0068c216  CALL dword ptr [0x006b20f0]
0068c21c  ADD ESP,0x8
0068c21f  MOVZX EAX,AL
0068c222  TEST EAX,EAX
0068c224  JZ 0x0068c30d
0068c22a  MOV ECX,dword ptr [EBP + 0xc]
0068c22d  MOV dword ptr [EBP + -0x8],ECX
0068c230  MOV EDX,dword ptr [EBP + 0x10]
0068c233  MOV dword ptr [EBP + -0x4],EDX
0068c236  MOV EAX,dword ptr [EBP + 0xfffffe40]
0068c23c  MOV ECX,dword ptr [EAX + 0x4]
0068c23f  MOV dword ptr [EBP + 0xfffffe54],ECX
0068c245  MOV EDX,dword ptr [EBP + 0xfffffe40]
0068c24b  PUSH EDX
0068c24c  MOV EAX,dword ptr [EBP + 0xfffffe54]
0068c252  PUSH EAX
0068c253  LEA ECX,[EBP + -0x38]
0068c256  CALL 0x0068d4b0
0068c25b  LEA ECX,[EBP + -0x8]
0068c25e  CALL 0x0068e790
0068c263  LEA ECX,[EBP + -0x38]
0068c266  PUSH ECX
0068c267  LEA ECX,[EBP + -0x8]
0068c26a  CALL 0x006118f0
0068c26f  MOVZX EDX,AL
0068c272  TEST EDX,EDX
0068c274  JNZ 0x0068c29d
0068c276  MOV EAX,dword ptr [EBP + -0x4]
0068c279  MOV dword ptr [EBP + 0xfffffe50],EAX
0068c27f  MOV ECX,dword ptr [EBP + 0xfffffe50]
0068c285  ADD ECX,0xc
0068c288  PUSH ECX
0068c289  MOV EDX,dword ptr [EBP + 0x14]
0068c28c  PUSH EDX
0068c28d  CALL dword ptr [0x006b20f0]
0068c293  ADD ESP,0x8
0068c296  MOVZX EAX,AL
0068c299  TEST EAX,EAX
0068c29b  JZ 0x0068c30d
0068c29d  MOV ECX,dword ptr [EBP + 0x10]
0068c2a0  MOV dword ptr [EBP + 0xfffffe4c],ECX
0068c2a6  MOV EDX,dword ptr [EBP + 0xfffffe4c]
0068c2ac  MOV EAX,dword ptr [EDX + 0x8]
0068c2af  MOVSX ECX,byte ptr [EAX + 0x35]
0068c2b3  TEST ECX,ECX
0068c2b5  JZ 0x0068c2e3
0068c2b7  MOV EDX,dword ptr [EBP + 0x10]
0068c2ba  MOV dword ptr [EBP + 0xfffffe48],EDX
0068c2c0  MOV EAX,dword ptr [EBP + 0x14]
0068c2c3  PUSH EAX
0068c2c4  MOV ECX,dword ptr [EBP + 0xfffffe48]
0068c2ca  PUSH ECX
0068c2cb  PUSH 0x0
0068c2cd  MOV EDX,dword ptr [EBP + 0x8]
0068c2d0  PUSH EDX
0068c2d1  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c2d7  CALL 0x0068d070
0068c2dc  MOV EAX,dword ptr [EBP + 0x8]
0068c2df  JMP 0x0068c330
0068c2e3  MOV EAX,dword ptr [EBP + -0x4]
0068c2e6  MOV dword ptr [EBP + 0xfffffe44],EAX
0068c2ec  MOV ECX,dword ptr [EBP + 0x14]
0068c2ef  PUSH ECX
0068c2f0  MOV EDX,dword ptr [EBP + 0xfffffe44]
0068c2f6  PUSH EDX
0068c2f7  PUSH 0x1
0068c2f9  MOV EAX,dword ptr [EBP + 0x8]
0068c2fc  PUSH EAX
0068c2fd  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c303  CALL 0x0068d070
0068c308  MOV EAX,dword ptr [EBP + 0x8]
0068c30b  JMP 0x0068c330
0068c30d  MOV ECX,dword ptr [EBP + 0x14]
0068c310  PUSH ECX
0068c311  LEA EDX,[EBP + -0x44]
0068c314  PUSH EDX
0068c315  MOV ECX,dword ptr [EBP + 0xfffffe40]
0068c31b  CALL 0x0068cc40
0068c320  MOV ECX,dword ptr [EAX]
0068c322  MOV EDX,dword ptr [EAX + 0x4]
0068c325  MOV EAX,dword ptr [EBP + 0x8]
0068c328  MOV dword ptr [EAX],ECX
0068c32a  MOV dword ptr [EAX + 0x4],EDX
0068c32d  MOV EAX,dword ptr [EBP + 0x8]
0068c330  MOV ESP,EBP
0068c332  POP EBP
0068c333  RET 0x10
